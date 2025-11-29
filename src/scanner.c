#include "tree_sitter/parser.h"

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <wctype.h>

// Debug flag - set to 1 to enable debug output
#define DEBUG_SCANNER 0

enum TokenType {
    _OPERAND_SEPARATOR,
    _OPERATOR_SPACE,
    _STATEMENT_SEPARATOR_NO_COMMENT,
    _MULTILINE_OPERAND_SEPARATOR_NO_COMMENT,
    _STATEMENT_SEPARATOR_WITH_COMMENT,
    _MULTILINE_OPERAND_SEPARATOR_WITH_COMMENT,
};

void* tree_sitter_mips_external_scanner_create() {
    return NULL;
}

void tree_sitter_mips_external_scanner_destroy(void* payload) {
    (void) payload;
}

unsigned tree_sitter_mips_external_scanner_serialize(void* payload, char* buffer) {
    (void) payload;
    (void) buffer;
    return 0;
}

void tree_sitter_mips_external_scanner_deserialize(void* payload,
                                                   const char* buffer,
                                                   unsigned length) {
    (void) payload;
    (void) buffer;
    (void) length;
}

// ============================================================================
// Character Classification
// ============================================================================

static inline bool is_operator_start(int32_t c) {
    return c == '+' || c == '-' || c == '*' || c == '%' || c == '/' || c == '&' ||
           c == '|' || c == '^' || c == '~' || c == '!' || c == '<' || c == '>' ||
           c == '=';
}

static inline bool is_operand_start(int32_t c) {
    return iswalnum(c) || c == '_' || c == '\\' || c == '%' || c == '$' || c == '.' ||
           c == '\'' || c == '"' || c == '(' || c == ')' || c == '-';
}

static inline bool is_space(int32_t c) {
    return c == ' ' || c == '\t';
}

static inline bool is_newline(int32_t c) {
    return c == '\r' || c == '\n';
}

static inline bool is_eol_or_eof(const TSLexer* lexer) {
    return lexer->eof(lexer) || is_newline(lexer->lookahead);
}

// ============================================================================
// Whitespace and Comment Skipping
// ============================================================================

typedef enum {
    SKIP_NONE = 0,
    SKIP_INLINE = 1,
    SKIP_MULTILINE = 2,
} SkippedType_t;

/**
 * Skip horizontal whitespace (space, tab).
 */
static void skip_horizontal_space(TSLexer* lexer, bool consumed_comment) {
    while (!lexer->eof(lexer) && is_space(lexer->lookahead)) {
        lexer->advance(lexer, !consumed_comment); // Skip whitespace unless we consumed a comment;
    }
}

/**
 * Skip a single newline (handles CRLF and LF).
 * Returns true if a newline was consumed.
 */
static bool skip_newline(TSLexer* lexer) {
#if DEBUG_SCANNER
    fprintf(stderr,
            "[skip_newline] lookahead=%d (\\r=%d \\n=%d)\n",
            lexer->lookahead,
            '\r',
            '\n');
#endif
    if (lexer->lookahead == '\r') {
        lexer->advance(lexer, false);  // Include in token
        if (!lexer->eof(lexer) && lexer->lookahead == '\n') {
            lexer->advance(lexer, false);  // Include in token
        }
        return true;
    } else if (lexer->lookahead == '\n') {
        lexer->advance(lexer, false);  // Include in token
        return true;
    }
    return false;
}

/**
 * Skip a # comment (to end of line).
 * Returns true if a comment was consumed.
 */
static bool consume_hash_comment(TSLexer* lexer) {
    if (lexer->lookahead != '#')
        return false;

    lexer->advance(lexer, false);
    while (!is_eol_or_eof(lexer)) {
        lexer->advance(lexer, false);
    }
    return true;
}

/**
 * Skip C++ or C-style block comments.
 * Returns true if a comment was consumed.
 * If '/' is not followed by '/' or '*', returns false and leaves lexer at '/'.
 */
static bool consume_slash_comment(TSLexer* lexer) {
    if (lexer->lookahead != '/')
        return false;

    lexer->advance(lexer, false);

    if (!lexer->eof(lexer) && lexer->lookahead == '/') {
        // C++ comment
        lexer->advance(lexer, false);
        while (!is_eol_or_eof(lexer)) {
            lexer->advance(lexer, false);
        }
        return true;
    }

    if (!lexer->eof(lexer) && lexer->lookahead == '*') {
        // C-style block comment
        lexer->advance(lexer, false);
        while (!lexer->eof(lexer)) {
            if (lexer->lookahead == '*') {
                lexer->advance(lexer, false);
                if (!lexer->eof(lexer) && lexer->lookahead == '/') {
                    lexer->advance(lexer, false);
                    break;
                }
            } else {
                lexer->advance(lexer, false);
            }
        }
        return true;
    }

    // Not a comment - '/' is an operator
    return false;
}

/**
 * Skip any combination of whitespace and comments.
 * Returns flags indicating what was skipped.
 */
static SkippedType_t skip_whitespace_and_comments(TSLexer* lexer) {
    SkippedType_t skipped = SKIP_NONE;

    while (!lexer->eof(lexer)) {
        if (is_space(lexer->lookahead)) {
            skipped |= SKIP_INLINE;
            skip_horizontal_space(lexer, skipped != SKIP_NONE);
            continue;
        }

        if (is_newline(lexer->lookahead)) {
            skipped |= SKIP_MULTILINE;
            skip_newline(lexer);
            continue;
        }

        if (consume_hash_comment(lexer)) {
            skipped |= SKIP_MULTILINE; // Line comments end the line
            continue;
        }

        if (lexer->lookahead == '/') {
            int saved_pos = lexer->get_column(lexer);
            if (consume_slash_comment(lexer)) {
                // Check if it was a block comment or line comment
                // Line comments (//) should set SKIP_MULTILINE
                // Block comments (/* */) should set SKIP_INLINE
                // We can't easily tell after the fact, so peek ahead
                // If we're at EOL after comment, treat as multiline
                if (is_eol_or_eof(lexer)) {
                    skipped |= SKIP_MULTILINE;
                } else {
                    skipped |= SKIP_INLINE;
                }
                continue;
            }
        }

        break;
    }

    return skipped;
}

/**
 * Skip blank lines and comments to find next non-empty line.
 * Leaves lexer positioned at first non-whitespace, non-comment character.
 */
static void skip_to_content(TSLexer* lexer) {
    bool consumed_comment = false;

    while (!lexer->eof(lexer)) {
        skip_horizontal_space(lexer, consumed_comment);

        if (skip_newline(lexer))
            continue;

        if (consume_hash_comment(lexer)) {
            consumed_comment = true;
            continue;
        }

        if (consume_slash_comment(lexer)) {
            consumed_comment = true;
            continue;
        }

        break;
    }
}

/**
 * Consume (not skip) whitespace and comments for separator tokens.
 * Uses advance(lexer, false) to include everything in the token range.
 * Returns type of content skipped (for disambiguation).
 */
static SkippedType_t consume_whitespace_and_comments(TSLexer* lexer) {
    SkippedType_t skipped = SKIP_NONE;

    while (!lexer->eof(lexer)) {
        if (is_space(lexer->lookahead)) {
            skipped |= SKIP_INLINE;
            while (!lexer->eof(lexer) && is_space(lexer->lookahead)) {
                lexer->advance(lexer, false); // Include in token
            }
            continue;
        }

        if (is_newline(lexer->lookahead)) {
            skipped |= SKIP_MULTILINE;
            if (lexer->lookahead == '\r') {
                lexer->advance(lexer, false); // Include in token
                if (!lexer->eof(lexer) && lexer->lookahead == '\n') {
                    lexer->advance(lexer, false); // Include in token
                }
            } else if (lexer->lookahead == '\n') {
                lexer->advance(lexer, false); // Include in token
            }
            continue;
        }

        if (consume_hash_comment(lexer)) {
            skipped |= SKIP_MULTILINE; // Line comments end the line
            continue;
        }

        if (lexer->lookahead == '/') {
            if (consume_slash_comment(lexer)) {
                // consume_slash_comment uses advance(lexer, false), so comments are
                // included
                if (is_eol_or_eof(lexer)) {
                    skipped |= SKIP_MULTILINE;
                } else {
                    skipped |= SKIP_INLINE;
                }
                continue;
            }
        }

        break;
    }

    return skipped;
}

/**
 * Consume (not skip) blank lines and comments to reach actual content.
 * Uses advance(lexer, false) to include everything in the token range.
 * This preserves the token start position at the first consumed character.
 * Returns true if at least one comment was consumed.
 */
static bool consume_to_content(TSLexer* lexer) {
    bool consumed_comment = false;
    while (!lexer->eof(lexer)) {
        // Consume horizontal whitespace (include in token range)
        if (is_space(lexer->lookahead)) {
            while (!lexer->eof(lexer) && is_space(lexer->lookahead)) {
                lexer->advance(lexer, false);
            }
            continue;
        }

        // Consume newlines (include in token)
        if (is_newline(lexer->lookahead)) {
            if (lexer->lookahead == '\r') {
                lexer->advance(lexer, false);
                if (!lexer->eof(lexer) && lexer->lookahead == '\n') {
                    lexer->advance(lexer, false);
                }
            } else if (lexer->lookahead == '\n') {
                lexer->advance(lexer, false);
            }
            continue;
        }

        // Consume comments (include in token)
        if (consume_hash_comment(lexer)) {
            consumed_comment = true;
            continue;
        }

        if (consume_slash_comment(lexer)) {
            consumed_comment = true;
            continue;
        }

        break;
    }
    return consumed_comment;
}

// ============================================================================
// Operand Separator Handling
// ============================================================================

/**
 * Check if we're looking at an operator after whitespace.
 * Handles special cases for unary operators.
 */
static bool check_operator_after_space(TSLexer* lexer,
                                       bool is_valid_operator_space,
                                       bool is_valid_operand_separator) {
    if (!is_operator_start(lexer->lookahead))
        return false;

    // Special case: %, $, \ followed by identifier chars are macro variables, not
    // operators
    if (lexer->lookahead == '%' || lexer->lookahead == '$' ||
        lexer->lookahead == '\\') {
        lexer->mark_end(lexer);
        lexer->advance(lexer, false);
        if (!lexer->eof(lexer) &&
            (iswalnum(lexer->lookahead) || lexer->lookahead == '_' ||
             lexer->lookahead == ':' || lexer->lookahead == '$' ||
             lexer->lookahead == '\\')) {
            // It's a macro variable, not an operator
            return false;
        }
        // Not followed by identifier char, continue as operator
        int operator_char = '%'; // or '$' or '\\'
        bool next_is_space = !lexer->eof(lexer) && is_space(lexer->lookahead);
        bool next_is_operator =
            !lexer->eof(lexer) && is_operator_start(lexer->lookahead);

        // These can't be unary, so treat as binary
        if (is_valid_operator_space) {
            lexer->result_symbol = _OPERATOR_SPACE;
            return true;
        }
        return false;
    }

    lexer->mark_end(lexer);
    int operator_char = lexer->lookahead;
    lexer->advance(lexer, false);

    bool next_is_space = !lexer->eof(lexer) && is_space(lexer->lookahead);
    bool next_is_operator = !lexer->eof(lexer) && is_operator_start(lexer->lookahead);

    // Unary operators (-, ~, !) can be followed by operands
    if (operator_char == '-' || operator_char == '~' || operator_char == '!') {
        if (next_is_space) {
            if (is_valid_operator_space) {
                lexer->result_symbol = _OPERATOR_SPACE;
                return true;
            }
        } else if (next_is_operator) {
            lexer->advance(lexer, false);
            bool after_second_is_space =
                !lexer->eof(lexer) && is_space(lexer->lookahead);

            if (after_second_is_space) {
                if (is_valid_operator_space) {
                    lexer->result_symbol = _OPERATOR_SPACE;
                    return true;
                }
            } else {
                if (is_valid_operand_separator) {
                    lexer->result_symbol = _OPERAND_SEPARATOR;
                    return true;
                }
            }
        } else {
            if (is_valid_operand_separator) {
                lexer->result_symbol = _OPERAND_SEPARATOR;
                return true;
            }
        }
        return false;
    }

    // Binary operators
    if (is_valid_operator_space) {
        lexer->result_symbol = _OPERATOR_SPACE;
        return true;
    }
    return false;
}

/**
 * Scan for OPERAND_SEPARATOR or OPERATOR_SPACE after horizontal whitespace.
 */
static bool scan_operand_separator(TSLexer* lexer, const bool* valid_symbols) {
    const bool is_valid_operator_space = valid_symbols[_OPERATOR_SPACE];
    const bool is_valid_operand_separator = valid_symbols[_OPERAND_SEPARATOR];

    // Need horizontal whitespace first
    bool found_space = false;
    while (!lexer->eof(lexer) && is_space(lexer->lookahead)) {
        found_space = true;
        lexer->advance(lexer, false);
    }

    if (!found_space || lexer->eof(lexer))
        return false;

    // Don't treat whitespace before line-ending constructs as separator
    if (is_newline(lexer->lookahead) || lexer->lookahead == ';' ||
        lexer->lookahead == '#')
        return false;

    // Handle % (macro variable vs modulo operator)
    if (lexer->lookahead == '%') {
        lexer->mark_end(lexer);
        lexer->advance(lexer, false);
        if (!lexer->eof(lexer) &&
            (is_space(lexer->lookahead) || lexer->lookahead == '%')) {
            if (is_valid_operator_space) {
                lexer->result_symbol = _OPERATOR_SPACE;
                return true;
            }
            return false;
        }
        if (is_valid_operand_separator) {
            lexer->result_symbol = _OPERAND_SEPARATOR;
            return true;
        }
        return false;
    }

    // Check for operators
    if (check_operator_after_space(
            lexer, is_valid_operator_space, is_valid_operand_separator))
        return true;

    // Regular operand
    if (is_operand_start(lexer->lookahead)) {
        if (is_valid_operand_separator) {
            lexer->result_symbol = _OPERAND_SEPARATOR;
            lexer->mark_end(lexer);
            return true;
        }
    }

    return false;
}

/**
 * Scan for operator after newline (e.g., "1\n+ 2").
 */
static bool scan_newline_operator(TSLexer* lexer, const bool* valid_symbols) {
    const bool is_valid_operator_space = valid_symbols[_OPERATOR_SPACE];
    const bool is_valid_multiline_operand_separator_no_comment =
        valid_symbols[_MULTILINE_OPERAND_SEPARATOR_NO_COMMENT];
    const bool is_valid_statement_separator_no_comment =
        valid_symbols[_STATEMENT_SEPARATOR_NO_COMMENT];

    if (!is_valid_operator_space || !is_newline(lexer->lookahead))
        return false;

#if DEBUG_SCANNER
    fprintf(stderr, "[scan_newline_operator] called\n");
#endif

    // IMPORTANT: Check if _multiline_operand_separator_no_comment is also valid.
    // If so, we should NOT consume the newline here - let
    // scan_line_or_multiline_operand_separator_no_comment handle it (But
    // _statement_separator_no_comment being valid is OK - we can still check for
    // operators)
    if (is_valid_multiline_operand_separator_no_comment) {
#if DEBUG_SCANNER
        fprintf(stderr, "[scan_newline_operator] -> FALSE (data sep also valid)\n");
#endif
        return false;
    }

    skip_newline(lexer);
    skip_to_content(lexer);

#if DEBUG_SCANNER
    fprintf(stderr,
            "[scan_newline_operator] after skip, lookahead='%c'(%d)\n",
            (lexer->lookahead >= 32 && lexer->lookahead < 127) ? lexer->lookahead : '?',
            lexer->lookahead);
#endif

    // Check for operators (including /)
    if (lexer->lookahead == '/') {
        lexer->mark_end(lexer);
        lexer->advance(lexer, false);

        // Make sure it's not a comment
        if (!lexer->eof(lexer) && (lexer->lookahead == '/' || lexer->lookahead == '*'))
            return false;

        lexer->result_symbol = _OPERATOR_SPACE;
        return true;
    }

    if (is_operator_start(lexer->lookahead)) {
        // Special case: %, $, \ followed by identifier chars are macro variables, not
        // operators
        if (lexer->lookahead == '%' || lexer->lookahead == '$' ||
            lexer->lookahead == '\\') {
#if DEBUG_SCANNER
            fprintf(stderr,
                    "[scan_newline_operator] checking macro variable lookahead='%c'\n",
                    lexer->lookahead);
#endif
            // Peek ahead to see if followed by identifier character
            lexer->mark_end(lexer);
            lexer->advance(lexer, false);
#if DEBUG_SCANNER
            fprintf(stderr,
                    "[scan_newline_operator] next char='%c'(%d)\n",
                    (lexer->lookahead >= 32 && lexer->lookahead < 127)
                        ? lexer->lookahead
                        : '?',
                    lexer->lookahead);
#endif
            if (!lexer->eof(lexer) &&
                (iswalnum(lexer->lookahead) || lexer->lookahead == '_' ||
                 lexer->lookahead == ':' || lexer->lookahead == '$' ||
                 lexer->lookahead == '\\')) {
                // It's a macro variable, not an operator - don't consume as operator
                // space
#if DEBUG_SCANNER
                fprintf(stderr,
                        "[scan_newline_operator] -> FALSE (macro variable detected)\n");
#endif
                return false;
            }
            // Not followed by identifier char, treat as operator
#if DEBUG_SCANNER
            fprintf(stderr,
                    "[scan_newline_operator] -> OPERATOR_SPACE (not macro variable)\n");
#endif
            lexer->result_symbol = _OPERATOR_SPACE;
            return true;
        }
        lexer->mark_end(lexer);
        lexer->result_symbol = _OPERATOR_SPACE;
        return true;
    }

    // Check for operand continuation
    if (is_valid_multiline_operand_separator_no_comment && !lexer->eof(lexer) &&
        iswdigit(lexer->lookahead)) {
#if DEBUG_SCANNER
        fprintf(stderr,
                "[scan_newline_operator] -> multiline_operand_separator_no_comment "
                "(digit found)\n");
#endif
        lexer->mark_end(lexer);
        lexer->result_symbol = _MULTILINE_OPERAND_SEPARATOR_NO_COMMENT;
        return true;
    }

#if DEBUG_SCANNER
    fprintf(stderr, "[scan_newline_operator] -> FALSE\n");
#endif
    return false;
}

// ============================================================================
// multiline-operand/statement Separator Handling
// ============================================================================

/**
 * Scan for inline separator comment after comment without preceding newline.
 * This handles cases like: .word 1 [comment] newline 2
 */
static bool scan_multiline_operand_separator_with_comment(TSLexer* lexer,
                                                          const bool* valid_symbols) {
    if (!valid_symbols[_MULTILINE_OPERAND_SEPARATOR_NO_COMMENT] &&
        !valid_symbols[_MULTILINE_OPERAND_SEPARATOR_WITH_COMMENT])
        return false;

    if (lexer->lookahead != '#' && lexer->lookahead != '/')
        return false;

    // Consume the comment
    if (lexer->lookahead == '#') {
        if (!consume_hash_comment(lexer))
            return false;
    } else {
        if (!consume_slash_comment(lexer))
            return false;
    }

    // Must have newline after comment
    if (!is_eol_or_eof(lexer))
        return false;

    skip_newline(lexer);
    skip_horizontal_space(lexer, false);

    // Check for directive (starts with . followed by letter)
    if (!lexer->eof(lexer) && lexer->lookahead == '.') {
        lexer->mark_end(lexer);
        lexer->advance(lexer, false);
        if (!lexer->eof(lexer) && isalpha(lexer->lookahead)) {
            // It's a directive, not an operand - don't return separator
            return false;
        }
        // It's something else (like .5 for float), treat as operand
        // Return _multiline_operand_separator_with_comment since we consumed a comment
        lexer->result_symbol = _MULTILINE_OPERAND_SEPARATOR_WITH_COMMENT;
        return true;
    }

    // Check for macro label (starts with %, $, or \ followed by identifier and optional
    // whitespace and colon)
    if (!lexer->eof(lexer) && (lexer->lookahead == '%' || lexer->lookahead == '$' ||
                               lexer->lookahead == '\\')) {
        lexer->mark_end(lexer);
        lexer->advance(lexer, false);
        // Check if followed by identifier character
        if (!lexer->eof(lexer) &&
            (iswalnum(lexer->lookahead) || lexer->lookahead == '_' ||
             lexer->lookahead == '$' || lexer->lookahead == '\\')) {
            // Scan the identifier part
            while (!lexer->eof(lexer) &&
                   (iswalnum(lexer->lookahead) || lexer->lookahead == '_' ||
                    lexer->lookahead == '$' || lexer->lookahead == '\\')) {
                lexer->advance(lexer, false);
            }
            // Skip optional whitespace before colon
            while (!lexer->eof(lexer) &&
                   (lexer->lookahead == ' ' || lexer->lookahead == '\t')) {
                lexer->advance(lexer, false);
            }
            if (!lexer->eof(lexer) && lexer->lookahead == ':') {
                // It's a macro label, not operand - don't return separator
                return false;
            }
        }
        // It's a macro variable at statement position (like %foo, $foo, \foo as an
        // opcode or label) Macro variables/macros on a new line ARE statements, not
        // operands - don't treat as multiline operand separator
        return false;
    }

    // Check for label (identifier followed by optional whitespace and colon)
    if (!lexer->eof(lexer) && (isalpha(lexer->lookahead) || lexer->lookahead == '_')) {
        lexer->mark_end(lexer);
        // Scan ahead to see if it's a label
        while (!lexer->eof(lexer) &&
               (isalnum(lexer->lookahead) || lexer->lookahead == '_' ||
                lexer->lookahead == '.' || lexer->lookahead == '$')) {
            lexer->advance(lexer, false);
        }
        // Skip optional whitespace before colon
        while (!lexer->eof(lexer) &&
               (lexer->lookahead == ' ' || lexer->lookahead == '\t')) {
            lexer->advance(lexer, false);
        }
        if (!lexer->eof(lexer) && lexer->lookahead == ':') {
            // It's a label, not an operand - don't return separator
            return false;
        }
        // It's not a label (no colon follows)
        // Could be: opcode/mnemonic, or data operand
        // Since we can't easily distinguish, and opcodes ARE statements,
        // we should return false (don't treat as multiline operand separator)
        // Let the main parser handle it
        return false;
    }

    // Check for numeric label (digit(s) followed by optional whitespace and colon)
    if (!lexer->eof(lexer) && iswdigit(lexer->lookahead)) {
        lexer->mark_end(lexer);
        // Scan past digits
        while (!lexer->eof(lexer) && iswdigit(lexer->lookahead)) {
            lexer->advance(lexer, false);
        }
        // Skip optional whitespace before colon
        while (!lexer->eof(lexer) &&
               (lexer->lookahead == ' ' || lexer->lookahead == '\t')) {
            lexer->advance(lexer, false);
        }
        if (!lexer->eof(lexer) && lexer->lookahead == ':') {
            // It's a numeric label, not an operand - don't return separator
            return false;
        }
        // It's a numeric operand, continue
        // Return _multiline_operand_separator_with_comment since we consumed a comment
        lexer->result_symbol = _MULTILINE_OPERAND_SEPARATOR_WITH_COMMENT;
        return true;
    }

    // Check for other operand-like content
    if (!lexer->eof(lexer) && is_operand_start(lexer->lookahead)) {
        lexer->mark_end(lexer);
        // Return _multiline_operand_separator_with_comment since we consumed a comment
        lexer->result_symbol = _MULTILINE_OPERAND_SEPARATOR_WITH_COMMENT;
        return true;
    }

    return false;
}

/**
 * Determine if newline should be statement_separator_no_comment or
 * multiline_operand_separator_no_comment. Called when both separators are potentially
 * valid.
 */
static bool scan_statement_or_multiline_operand_sep(TSLexer* lexer,
                                                    const bool* valid_symbols) {
    const bool is_valid_statement_separator_no_comment =
        valid_symbols[_STATEMENT_SEPARATOR_NO_COMMENT];
    const bool is_valid_multiline_operand_separator_no_comment =
        valid_symbols[_MULTILINE_OPERAND_SEPARATOR_NO_COMMENT];

#if DEBUG_SCANNER
    fprintf(stderr,
            "[scan_statement_or_multiline_operand_sep] statement_sep=%d "
            "multiline_operand_sep=%d\n",
            is_valid_statement_separator_no_comment,
            is_valid_multiline_operand_separator_no_comment);
#endif

    if (!is_valid_statement_separator_no_comment &&
        !is_valid_multiline_operand_separator_no_comment)
        return false;

    // Skip any leading horizontal space
    skip_horizontal_space(lexer, false);

    // Check if there's a comment at this position (before calling the comment handler)
    bool comment_at_start = (lexer->lookahead == '#' || lexer->lookahead == '/');

    // Handle comment without newline
    if (scan_multiline_operand_separator_with_comment(lexer, valid_symbols))
        return true;

    // If there was a comment at the start and it's gone now (consumed), check if we should
    // return it as a statement separator with comment
    bool comment_was_consumed = (comment_at_start && lexer->lookahead != '#' && lexer->lookahead != '/');

    if (comment_was_consumed && is_valid_statement_separator_no_comment &&
        !is_valid_multiline_operand_separator_no_comment) {
        // A comment was consumed but no operand followed
        // Only return as separator if we're at definite end-of-statement (EOF or newline)
        if (lexer->eof(lexer) || is_newline(lexer->lookahead)) {
            lexer->mark_end(lexer);
            lexer->result_symbol = _STATEMENT_SEPARATOR_WITH_COMMENT;
            return true;
        }
    }

    // Also handle multiline case: if comment was consumed and both separators are valid
    if (comment_was_consumed && is_valid_statement_separator_no_comment &&
        is_valid_multiline_operand_separator_no_comment) {
        // A comment was consumed in multiline context
        // scan_multiline_operand_separator_with_comment returned false, meaning NO operand follows
        // So this should be treated as a statement separator, not a multiline operand separator
        lexer->result_symbol = _STATEMENT_SEPARATOR_WITH_COMMENT;
        return true;
    }

    // Early return: if only statement_separator is valid and we see a hash comment,
    // return statement_separator_no_comment immediately to prevent hash comments from
    // allowing operand continuation
    if (is_valid_statement_separator_no_comment &&
        !is_valid_multiline_operand_separator_no_comment && lexer->lookahead == '#') {
        lexer->result_symbol = _STATEMENT_SEPARATOR_NO_COMMENT;
        lexer->mark_end(lexer);
        return true;
    }

    // Check if we have a newline
    if (!is_newline(lexer->lookahead)) {
#if DEBUG_SCANNER
        fprintf(stderr, "[scan_statement_or_multiline_operand_sep] no newline found\n");
#endif
        return false;
    }

    // Don't skip the newline yet - we might need to include it in the token
    // if there's a comment after it that leads to data continuation

#if DEBUG_SCANNER
    fprintf(
        stderr,
        "[scan_statement_or_multiline_operand_sep] after skip, lookahead='%c'(%d)\n",
        (lexer->lookahead >= 32 && lexer->lookahead < 127) ? lexer->lookahead : '?',
        lexer->lookahead);
#endif

    // Consume the newline with advance(false) so it can be part of the token
    // if we end up returning multiline_operand_separator_no_comment
    if (lexer->lookahead == '\r') {
        lexer->advance(lexer, false);
        if (!lexer->eof(lexer) && lexer->lookahead == '\n') {
            lexer->advance(lexer, false);
        }
    } else if (lexer->lookahead == '\n') {
        lexer->advance(lexer, false);
    }

    // Skip horizontal space (might skip or include depending on what follows)
    skip_horizontal_space(lexer, comment_was_consumed);

    // Both separators valid - need to disambiguate
    if (is_valid_statement_separator_no_comment &&
        is_valid_multiline_operand_separator_no_comment) {
#if DEBUG_SCANNER
        fprintf(
            stderr,
            "[scan_statement_or_multiline_operand_sep] BOTH valid, disambiguating\n");
#endif
        if (lexer->eof(lexer)) {
#if DEBUG_SCANNER
            fprintf(stderr,
                    "[scan_statement_or_multiline_operand_sep] -> LINE_SEP (EOF)\n");
#endif
            lexer->result_symbol = _STATEMENT_SEPARATOR_NO_COMMENT;
            lexer->mark_end(lexer);
            return true;
        }

        // Check if we're at a comment
        if (lexer->lookahead == '#' || lexer->lookahead == '/') {
#if DEBUG_SCANNER
            fprintf(
                stderr,
                "[scan_statement_or_multiline_operand_sep] Found comment at start\n");
#endif

            // Consume the comment to see what comes after
            if (lexer->lookahead == '#') {
                consume_hash_comment(lexer);
            } else {
                if (!consume_slash_comment(lexer)) {
                    // Not actually a comment, '/' is something else
#if DEBUG_SCANNER
                    fprintf(stderr,
                            "[scan_statement_or_multiline_operand_sep] Not a comment, "
                            "returning LINE_SEP\n");
#endif
                    lexer->result_symbol = _STATEMENT_SEPARATOR_NO_COMMENT;
                    return true;
                }
            }

            // Check what's after the comment
            if (is_eol_or_eof(lexer)) {
                // Comment ends the line - consume the newline
                if (lexer->lookahead == '\r') {
                    lexer->advance(lexer, false);
                    if (!lexer->eof(lexer) && lexer->lookahead == '\n') {
                        lexer->advance(lexer, false);
                    }
                } else if (lexer->lookahead == '\n') {
                    lexer->advance(lexer, false);
                }

                // Continue consuming blank lines and additional comments
                consume_to_content(lexer);

#if DEBUG_SCANNER
                fprintf(stderr,
                        "[scan_statement_or_multiline_operand_sep] After "
                        "consume_to_content, lookahead='%c'(%d)\n",
                        (lexer->lookahead >= 32 && lexer->lookahead < 127)
                            ? lexer->lookahead
                            : '?',
                        lexer->lookahead);
#endif

                // Mark end after all comments and blank lines - this is the separator
                // span
                lexer->mark_end(lexer);

                // Check if what follows is data continuation
                if (!lexer->eof(lexer)) {
                    // Check for directive (should be LINE_SEP)
                    if (lexer->lookahead == '.') {
                        lexer->advance(lexer, false);
                        if (!lexer->eof(lexer) && isalpha(lexer->lookahead)) {
                            // Directive - Return _statement_separator_with_comment
                            // since we're in comment path
#if DEBUG_SCANNER
                            fprintf(
                                stderr,
                                "[scan_statement_or_multiline_operand_sep] Directive "
                                "after comment, _statement_separator_with_comment\n");
#endif
                            lexer->result_symbol =
                                valid_symbols[_STATEMENT_SEPARATOR_WITH_COMMENT]
                                    ? _STATEMENT_SEPARATOR_WITH_COMMENT
                                    : _STATEMENT_SEPARATOR_NO_COMMENT;
                            return true;
                        }
                        // Fall through - could be float like .5
                    }

                    // Check for label
                    if (lexer->lookahead == '_' || isalpha(lexer->lookahead)) {
                        // Could be label or instruction - check for colon
                        while (!lexer->eof(lexer) &&
                               (isalnum(lexer->lookahead) || lexer->lookahead == '_' ||
                                lexer->lookahead == '.' || lexer->lookahead == '$')) {
                            lexer->advance(lexer, false);
                        }
                        // Skip optional whitespace before colon
                        while (!lexer->eof(lexer) &&
                               (lexer->lookahead == ' ' || lexer->lookahead == '\t')) {
                            lexer->advance(lexer, false);
                        }
                        if (!lexer->eof(lexer) && lexer->lookahead == ':') {
                            // Label - Return _statement_separator_with_comment since
                            // we're in comment path
#if DEBUG_SCANNER
                            fprintf(
                                stderr,
                                "[scan_statement_or_multiline_operand_sep] Label after "
                                "comment, _statement_separator_with_comment\n");
#endif
                            lexer->result_symbol =
                                valid_symbols[_STATEMENT_SEPARATOR_WITH_COMMENT]
                                    ? _STATEMENT_SEPARATOR_WITH_COMMENT
                                    : _STATEMENT_SEPARATOR_NO_COMMENT;
                            return true;
                        }
                        // Fall through - might be data
                    }

                    // Check for numeric label
                    if (iswdigit(lexer->lookahead)) {
                        // Scan past digits
                        while (!lexer->eof(lexer) && iswdigit(lexer->lookahead)) {
                            lexer->advance(lexer, false);
                        }
                        // Skip optional whitespace before colon
                        while (!lexer->eof(lexer) &&
                               (lexer->lookahead == ' ' || lexer->lookahead == '\t')) {
                            lexer->advance(lexer, false);
                        }
                        if (!lexer->eof(lexer) && lexer->lookahead == ':') {
                            // Numeric label - Return _statement_separator_with_comment
                            // since we're in comment path
#if DEBUG_SCANNER
                            fprintf(stderr,
                                    "[scan_statement_or_multiline_operand_sep] Numeric "
                                    "label after comment, "
                                    "_statement_separator_with_comment\n");
#endif
                            lexer->result_symbol =
                                valid_symbols[_STATEMENT_SEPARATOR_WITH_COMMENT]
                                    ? _STATEMENT_SEPARATOR_WITH_COMMENT
                                    : _STATEMENT_SEPARATOR_NO_COMMENT;
                            return true;
                        }
                        // It's numeric data - return separator comment
#if DEBUG_SCANNER
                        fprintf(stderr,
                                "[scan_statement_or_multiline_operand_sep] Numeric "
                                "data after comment, "
                                "_multiline_operand_separator_with_comment\n");
#endif
                        lexer->result_symbol =
                            valid_symbols[_MULTILINE_OPERAND_SEPARATOR_WITH_COMMENT]
                                ? _MULTILINE_OPERAND_SEPARATOR_WITH_COMMENT
                                : _MULTILINE_OPERAND_SEPARATOR_NO_COMMENT;
                        return true;
                    }

                    // Check if it's a statement start (macro variable, opcode, etc.)
                    // Macro variables (%foo, $foo, \foo) are statements
                    if (lexer->lookahead == '%' || lexer->lookahead == '$' ||
                        lexer->lookahead == '\\') {
                        // Macro variable at statement start - return END_COMMENT
#if DEBUG_SCANNER
                        fprintf(
                            stderr,
                            "[scan_statement_or_multiline_operand_sep] Macro variable "
                            "after comment, _statement_separator_with_comment\n");
#endif
                        lexer->result_symbol =
                            valid_symbols[_STATEMENT_SEPARATOR_WITH_COMMENT]
                                ? _STATEMENT_SEPARATOR_WITH_COMMENT
                                : _STATEMENT_SEPARATOR_NO_COMMENT;
                        return true;
                    }

                    // Any other operand_start at statement position (like opcode
                    // identifiers) is a statement
                    if (is_operand_start(lexer->lookahead)) {
                        // Could be opcode or data - conservatively treat as statement
                        // end (parser will handle if it's actually data in context)
#if DEBUG_SCANNER
                        fprintf(stderr,
                                "[scan_statement_or_multiline_operand_sep] "
                                "Operand-like after comment (assumed statement), "
                                "_statement_separator_with_comment\n");
#endif
                        lexer->result_symbol =
                            valid_symbols[_STATEMENT_SEPARATOR_WITH_COMMENT]
                                ? _STATEMENT_SEPARATOR_WITH_COMMENT
                                : _STATEMENT_SEPARATOR_NO_COMMENT;
                        return true;
                    }
                }

                // Default - return comment token since we're in comment path
#if DEBUG_SCANNER
                fprintf(stderr,
                        "[scan_statement_or_multiline_operand_sep] Default after "
                        "comment, _statement_separator_with_comment\n");
#endif
                lexer->result_symbol = valid_symbols[_STATEMENT_SEPARATOR_WITH_COMMENT]
                                           ? _STATEMENT_SEPARATOR_WITH_COMMENT
                                           : _STATEMENT_SEPARATOR_NO_COMMENT;
                return true;
            }

            // Comment is inline (not followed by newline immediately)
            // Consume any following spaces, comments, and blank lines
            // This uses advance(false) to include everything in the token
            while (!lexer->eof(lexer)) {
                // Consume horizontal whitespace
                if (is_space(lexer->lookahead)) {
                    while (!lexer->eof(lexer) && is_space(lexer->lookahead)) {
                        lexer->advance(lexer, false);
                    }
                    continue;
                }

                // Check for more comments on same line
                if (consume_hash_comment(lexer))
                    continue;
                if (consume_slash_comment(lexer))
                    continue;

                // Check for newline - if found, consume blank lines and comments after
                // it
                if (is_newline(lexer->lookahead)) {
                    consume_to_content(lexer);
                    break;
                }

                // No more whitespace/comments, stop
                break;
            }

            // Check if data follows
            if (!lexer->eof(lexer) &&
                (iswdigit(lexer->lookahead) || is_operand_start(lexer->lookahead))) {
                // Data follows - mark end to include comment and blank lines
#if DEBUG_SCANNER
                fprintf(stderr,
                        "[scan_statement_or_multiline_operand_sep] Inline comment "
                        "before data, _multiline_operand_separator_with_comment\n");
#endif
                lexer->mark_end(lexer);
                // Return comment token since we consumed a comment
                lexer->result_symbol =
                    valid_symbols[_MULTILINE_OPERAND_SEPARATOR_WITH_COMMENT]
                        ? _MULTILINE_OPERAND_SEPARATOR_WITH_COMMENT
                        : _MULTILINE_OPERAND_SEPARATOR_NO_COMMENT;
                return true;
            }

            // Otherwise return _statement_separator_with_comment since we consumed a
            // comment
#if DEBUG_SCANNER
            fprintf(stderr,
                    "[scan_statement_or_multiline_operand_sep] Inline comment, "
                    "_statement_separator_with_comment\n");
#endif
            lexer->result_symbol = valid_symbols[_STATEMENT_SEPARATOR_WITH_COMMENT]
                                       ? _STATEMENT_SEPARATOR_WITH_COMMENT
                                       : _STATEMENT_SEPARATOR_NO_COMMENT;
            return true;
        }

        // Look ahead past blank lines and comments for DATA_SEP disambiguation
        if (is_newline(lexer->lookahead)) {
            // Consume blank lines and comments (include in token)
            bool consumed_comment = consume_to_content(lexer);

            // Mark end after all blank lines and comments
            lexer->mark_end(lexer);

            // Check for directive (dot followed by letter)
            if (lexer->lookahead == '.') {
                lexer->mark_end(lexer);
                lexer->advance(lexer, false);
                if (!lexer->eof(lexer) && isalpha(lexer->lookahead)) {
                    // It's a directive
#if DEBUG_SCANNER
                    fprintf(stderr,
                            "[scan_statement_or_multiline_operand_sep] -> END_COMMENT "
                            "or LINE_SEP (directive after blank lines)\n");
#endif
                    lexer->result_symbol =
                        consumed_comment &&
                                valid_symbols[_STATEMENT_SEPARATOR_WITH_COMMENT]
                            ? _STATEMENT_SEPARATOR_WITH_COMMENT
                            : _STATEMENT_SEPARATOR_NO_COMMENT;
                    return true;
                }
                // It's a float like .5, treat as data
#if DEBUG_SCANNER
                fprintf(stderr,
                        "[scan_statement_or_multiline_operand_sep] -> DATA_SEP (float "
                        "after blank lines)\n");
#endif
                lexer->result_symbol = _MULTILINE_OPERAND_SEPARATOR_NO_COMMENT;
                return true;
            }

            // Check for other line-ending constructs
            // Check for identifiers (labels/instructions) or macro variables/registers
            if (lexer->lookahead == '_' || isalpha(lexer->lookahead) ||
                lexer->lookahead == '%' || lexer->lookahead == '$' ||
                lexer->lookahead == '\\') {
#if DEBUG_SCANNER
                fprintf(stderr,
                        "[scan_statement_or_multiline_operand_sep] -> END_COMMENT or "
                        "LINE_SEP (label/instruction/macro after blank lines)\n");
#endif
                lexer->mark_end(lexer);
                lexer->result_symbol =
                    consumed_comment && valid_symbols[_STATEMENT_SEPARATOR_WITH_COMMENT]
                        ? _STATEMENT_SEPARATOR_WITH_COMMENT
                        : _STATEMENT_SEPARATOR_NO_COMMENT;
                return true;
            }

            // Check for operand-like content
            bool found_operand =
                iswdigit(lexer->lookahead) || is_operand_start(lexer->lookahead);

            lexer->mark_end(lexer);
            // Return comment token only if we actually consumed a comment
            if (!found_operand && consumed_comment &&
                valid_symbols[_STATEMENT_SEPARATOR_WITH_COMMENT]) {
                lexer->result_symbol = _STATEMENT_SEPARATOR_WITH_COMMENT;
            } else if (found_operand && consumed_comment &&
                       valid_symbols[_MULTILINE_OPERAND_SEPARATOR_WITH_COMMENT]) {
                lexer->result_symbol = _MULTILINE_OPERAND_SEPARATOR_WITH_COMMENT;
            } else {
                lexer->result_symbol = found_operand
                                           ? _MULTILINE_OPERAND_SEPARATOR_NO_COMMENT
                                           : _STATEMENT_SEPARATOR_NO_COMMENT;
            }
            return true;
        }

        // Check for line-ending constructs
        if (lexer->lookahead == ';') {
#if DEBUG_SCANNER
            fprintf(
                stderr,
                "[scan_statement_or_multiline_operand_sep] -> LINE_SEP (found ';')\n");
#endif
            lexer->result_symbol = _STATEMENT_SEPARATOR_NO_COMMENT;
            lexer->mark_end(lexer);
            return true;
        }

        // Check for directive (dot followed by letter)
        if (lexer->lookahead == '.') {
            // Peek ahead to see if it's followed by a letter (directive) or digit
            // (float)
            lexer->mark_end(lexer);
            lexer->advance(lexer, false);
            if (!lexer->eof(lexer) && isalpha(lexer->lookahead)) {
                // It's a directive like .word, .section
#if DEBUG_SCANNER
                fprintf(stderr,
                        "[scan_statement_or_multiline_operand_sep] -> LINE_SEP (found "
                        "directive)\n");
#endif
                lexer->result_symbol = _STATEMENT_SEPARATOR_NO_COMMENT;
                return true;
            }
            // It's a float like .5, treat as data continuation
#if DEBUG_SCANNER
            fprintf(stderr,
                    "[scan_statement_or_multiline_operand_sep] -> DATA_SEP (float "
                    "literal)\n");
#endif
            lexer->result_symbol = _MULTILINE_OPERAND_SEPARATOR_NO_COMMENT;
            return true;
        }

        // Numeric label (123:) vs number (123)
        if (iswdigit(lexer->lookahead)) {
            lexer->mark_end(lexer);
            while (!lexer->eof(lexer) && iswdigit(lexer->lookahead)) {
                lexer->advance(lexer, false);
            }
            // Skip optional whitespace before colon
            while (!lexer->eof(lexer) &&
                   (lexer->lookahead == ' ' || lexer->lookahead == '\t')) {
                lexer->advance(lexer, false);
            }
            if (!lexer->eof(lexer) && lexer->lookahead == ':') {
                lexer->result_symbol = _STATEMENT_SEPARATOR_NO_COMMENT;
                return true;
            }
            SkippedType_t skipped = consume_whitespace_and_comments(lexer);
            lexer->result_symbol =
                (skipped & SKIP_MULTILINE) &&
                        valid_symbols[_MULTILINE_OPERAND_SEPARATOR_WITH_COMMENT]
                    ? _MULTILINE_OPERAND_SEPARATOR_WITH_COMMENT
                    : _MULTILINE_OPERAND_SEPARATOR_NO_COMMENT;
            return true;
        }

        // Label or instruction (including macro variables/registers)
        if (lexer->lookahead == '\n' || lexer->lookahead == '_' ||
            lexer->lookahead == '%' || lexer->lookahead == '$' ||
            lexer->lookahead == '\\' || isalpha(lexer->lookahead)) {
            lexer->result_symbol = _STATEMENT_SEPARATOR_NO_COMMENT;
            lexer->mark_end(lexer);
            return true;
        }

        // Default: data separator
        SkippedType_t skipped = consume_whitespace_and_comments(lexer);
        lexer->result_symbol =
            (skipped & SKIP_MULTILINE) &&
                    valid_symbols[_MULTILINE_OPERAND_SEPARATOR_WITH_COMMENT]
                ? _MULTILINE_OPERAND_SEPARATOR_WITH_COMMENT
                : _MULTILINE_OPERAND_SEPARATOR_NO_COMMENT;
        lexer->mark_end(lexer);
        return true;
    }

    // Only statement_separator_no_comment valid
    if (is_valid_statement_separator_no_comment &&
        !is_valid_multiline_operand_separator_no_comment) {
        lexer->result_symbol = _STATEMENT_SEPARATOR_NO_COMMENT;
        lexer->mark_end(lexer);
        return true;
    }

    if (is_valid_multiline_operand_separator_no_comment) {
        // Check if the next content is a directive (should not be treated as data)
        if (lexer->lookahead == '.') {
            lexer->advance(lexer, false);
            if (!lexer->eof(lexer) && isalpha(lexer->lookahead)) {
                // It's a directive - don't return
                // multiline_operand_separator_no_comment
                return false;
            }
        }
        lexer->result_symbol = _MULTILINE_OPERAND_SEPARATOR_NO_COMMENT;
        lexer->mark_end(lexer);
        return true;
    }

    return false;
}

// ============================================================================
// Main Scanner Entry Point
// ============================================================================

bool tree_sitter_mips_external_scanner_scan(void* payload,
                                            TSLexer* lexer,
                                            const bool* valid_symbols) {
    (void) payload;

    if (lexer->eof(lexer))
        return false;

#if DEBUG_SCANNER
    fprintf(stderr,
            "[SCAN] col=%d, lookahead='%c'(%d), valid: op_sep=%d op_space=%d "
            "line_sep=%d data_sep=%d\n",
            lexer->get_column(lexer),
            (lexer->lookahead >= 32 && lexer->lookahead < 127) ? lexer->lookahead : '?',
            lexer->lookahead,
            valid_symbols[_OPERAND_SEPARATOR],
            valid_symbols[_OPERATOR_SPACE],
            valid_symbols[_statement_separator_no_comment],
            valid_symbols[_multiline_operand_separator_no_comment]);
#endif

    // Try OPERAND_SEPARATOR first (space/tab between operands)
    if (valid_symbols[_OPERAND_SEPARATOR]) {
        if (scan_operand_separator(lexer, valid_symbols))
            return true;

        if (scan_newline_operator(lexer, valid_symbols))
            return true;

        // Handle comments as separators
        // Block: ONLY when followed by operand (not operator) - for 1/**/2 vs 1/**/+2
        // Line: when followed by newline then operand - for multiline directives
        if (lexer->lookahead == '/') {
            lexer->advance(lexer, false);

            if (!lexer->eof(lexer) && lexer->lookahead == '/') {
                // Line comment // - consume to end of line
                while (!is_eol_or_eof(lexer)) {
                    lexer->advance(lexer, false);
                }
                if (is_eol_or_eof(lexer)) {
                    // Consume newline (include in token)
                    if (lexer->lookahead == '\r') {
                        lexer->advance(lexer, false);
                        if (!lexer->eof(lexer) && lexer->lookahead == '\n') {
                            lexer->advance(lexer, false);
                        }
                    } else if (lexer->lookahead == '\n') {
                        lexer->advance(lexer, false);
                    }
                    // Consume horizontal space (include in token)
                    while (!lexer->eof(lexer) && is_space(lexer->lookahead)) {
                        lexer->advance(lexer, false);
                    }
                    // Check if operand follows
                    if (!lexer->eof(lexer) && is_operand_start(lexer->lookahead)) {
                        // Mark end AFTER consuming comment and whitespace but BEFORE
                        // lookahead
                        lexer->mark_end(lexer);
                        // Line comment followed by operand - return comment separator
                        lexer->result_symbol =
                            valid_symbols[_MULTILINE_OPERAND_SEPARATOR_WITH_COMMENT]
                                ? _MULTILINE_OPERAND_SEPARATOR_WITH_COMMENT
                                : _OPERAND_SEPARATOR;
                        return true;
                    }
                }
                return false;
            } else if (!lexer->eof(lexer) && lexer->lookahead == '*') {
                // Block comment /* - consume it
                lexer->advance(lexer, false);
                while (!lexer->eof(lexer)) {
                    if (lexer->lookahead == '*') {
                        lexer->advance(lexer, false);
                        if (!lexer->eof(lexer) && lexer->lookahead == '/') {
                            lexer->advance(lexer, false);
                            break;
                        }
                    } else {
                        lexer->advance(lexer, false);
                    }
                }
                // Mark end after consuming block comment
                lexer->mark_end(lexer);
                // Check what follows: if non-operator operand (and not closing paren),
                // return separator
                if (!lexer->eof(lexer) && is_operand_start(lexer->lookahead) &&
                    !is_operator_start(lexer->lookahead) && lexer->lookahead != ')') {
                    // Return comment separator since we consumed a comment
                    lexer->result_symbol =
                        valid_symbols[_MULTILINE_OPERAND_SEPARATOR_WITH_COMMENT]
                            ? _MULTILINE_OPERAND_SEPARATOR_WITH_COMMENT
                            : _OPERAND_SEPARATOR;
                    return true;
                }
                // If operator follows or closing paren, return false (let block_comment
                // be consumed as extra)
                return false;
            }
            // Not a comment, return false
            return false;
        }
    }

    // Try statement_separator_no_comment and multiline_operand_separator_no_comment
    if (valid_symbols[_STATEMENT_SEPARATOR_NO_COMMENT] ||
        valid_symbols[_MULTILINE_OPERAND_SEPARATOR_NO_COMMENT]) {
        return scan_statement_or_multiline_operand_sep(lexer, valid_symbols);
    }

    return false;
}
