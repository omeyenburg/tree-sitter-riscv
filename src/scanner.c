#include "tree_sitter/parser.h"

#include <stdio.h>
#include <string.h>

enum TokenType {
    _OPERAND_SEPARATOR,
    _OPERATOR_SPACE,
    _STATEMENT_SEPARATOR_NO_COMMENT,
    _MULTILINE_OPERAND_SEPARATOR_NO_COMMENT,
    _STATEMENT_SEPARATOR_WITH_COMMENT,
    _MULTILINE_OPERAND_SEPARATOR_WITH_COMMENT,
};

typedef enum {
    CONSUMED_NONE = 0b00,     // Consumed nothing or whitespace
    CONSUMED_NEW_LINE = 0b01, // Consumed at least one new line
    CONSUMED_COMMENT = 0b10,  // Consumed at least one comment, but may consume multiple
    CONSUMED_NEW_LINE_COMMENT = 0b11,
} Consumed_t;
Consumed_t consumed;

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
// Character classification
// ============================================================================

static inline bool is_ascii_alpha(int32_t c) __attribute__((always_inline));
static inline bool is_ascii_alpha(int32_t c) {
    return ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z');
}

static inline bool is_ascii_digit(int32_t c) __attribute__((always_inline));
static inline bool is_ascii_digit(int32_t c) {
    return '0' <= c && c <= '9';
}

static inline bool is_ascii_alnum(int32_t c) __attribute__((always_inline));
static inline bool is_ascii_alnum(int32_t c) {
    return is_ascii_alpha(c) || is_ascii_digit(c);
}

/**
 * Does not imply invalid operand start.
 */
static inline bool is_operator_start(int32_t c) __attribute__((always_inline));
static inline bool is_operator_start(int32_t c) {
    return c == '+' || c == '-' || c == '*' || c == '%' || c == '/' || c == '&' ||
           c == '|' || c == '^' || c == '~' || c == '!' || c == '<' || c == '>' ||
           c == '=';
}

/**
 * Does not imply invalid operator start.
 */
static inline bool is_operand_start(int32_t c) __attribute__((always_inline));
static inline bool is_operand_start(int32_t c) {
    return is_ascii_alnum(c) || c == '_' || c == '\\' || c == '%' || c == '$' ||
           c == '.' || c == '\'' || c == '"' || c == '(' || c == ')' || c == '-' ||
           c == '+' || c == '@';
}

static inline bool is_space(int32_t c) __attribute__((always_inline));
static inline bool is_space(int32_t c) {
    return c == ' ' || c == '\t';
}

static inline bool is_newline(int32_t c) __attribute__((always_inline));
static inline bool is_newline(int32_t c) {
    return c == '\r' || c == '\n';
}

static inline bool is_eol_or_eof(const TSLexer* lexer) __attribute__((always_inline));
static inline bool is_eol_or_eof(const TSLexer* lexer) {
    return lexer->eof(lexer) || is_newline(lexer->lookahead);
}

// ============================================================================
// General whitespace and comment consuming
// ============================================================================

/**
 * Skips or consumes consecutive space and tab characters.
 * Returns true if whitespace was found.
 */
static bool consume_whitespace(TSLexer* lexer, bool skip) {
    if (!is_space(lexer->lookahead))
        return false;

    while (!lexer->eof(lexer) && is_space(lexer->lookahead)) {
        lexer->advance(lexer, skip);
    }

    return true;
}

/**
 * Attempts to consume a single newline (handles CRLF and LF).
 * Modifies global consumed flags indicating what was consumed.
 * Returns true if a newline was found.
 */
static bool consume_newline(TSLexer* lexer, bool skip) {
    if (lexer->lookahead == '\r') {
        lexer->advance(lexer, skip);
        if (!lexer->eof(lexer) && lexer->lookahead == '\n') {
            lexer->advance(lexer, skip);
        }
    } else if (lexer->lookahead == '\n') {
        lexer->advance(lexer, skip);
    } else {
        return false;
    }

    consumed |= CONSUMED_NEW_LINE;
    return true;
}

/**
 * Consume a # comment (to end of line).
 * Modifies global consumed flags indicating what was consumed.
 * Returns true if a comment was consumed.
 */
static bool consume_hash_comment(TSLexer* lexer) {
    if (lexer->lookahead != '#')
        return false;

    lexer->advance(lexer, false);
    while (!is_eol_or_eof(lexer)) {
        lexer->advance(lexer, false);
    }

    consumed |= CONSUMED_NEW_LINE_COMMENT;
    return true;
}

/**
 * Consume C-style line and block comments.
 * Modifies global consumed flags indicating what was consumed.
 * Returns true if a comment was consumed.
 * If '/' is not followed by '/' or '*', returns false but consumes '/'!
 */
static bool consume_slash_comment(TSLexer* lexer) {
    if (lexer->lookahead != '/')
        return false;

    lexer->advance(lexer, false);

    if (!lexer->eof(lexer) && lexer->lookahead == '/') {
        // C comment
        lexer->advance(lexer, false);
        while (!is_eol_or_eof(lexer)) {
            lexer->advance(lexer, false);
        }

        // Line comment implies new line
        consumed |= CONSUMED_NEW_LINE_COMMENT;

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

        consumed |= CONSUMED_COMMENT;
        if (is_eol_or_eof(lexer)) {
            consumed |= CONSUMED_NEW_LINE;
        }

        return true;
    }

    // Not a comment, '/' is an operator
    return false;
}

/**
 * Consume any combination of whitespace and comments.
 * Modifies global consumed flags indicating what was consumed.
 */
static void consume_whitespace_and_comments(TSLexer* lexer) {
    while (!lexer->eof(lexer)) {
        if (consume_whitespace(lexer, !(consumed & CONSUMED_COMMENT)))
            continue;

        if (consume_newline(lexer, !(consumed & CONSUMED_COMMENT)))
            continue;

        if (consume_hash_comment(lexer)) {
            continue;
        }

        if (consume_slash_comment(lexer)) {
            continue;
        }

        break;
    }
}

// ============================================================================
// Operand separator handling
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
            (is_ascii_alnum(lexer->lookahead) || lexer->lookahead == '_' ||
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
        lexer->advance(lexer, true);
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
    const bool is_valid_multiline_operand_separator =
        valid_symbols[_MULTILINE_OPERAND_SEPARATOR_NO_COMMENT];
    const bool is_valid_statement_separator =
        valid_symbols[_STATEMENT_SEPARATOR_NO_COMMENT];

    if (!is_valid_operator_space || !is_newline(lexer->lookahead))
        return false;

    // IMPORTANT: Check if _multiline_operand_separator_no_comment is also valid.
    // If so, we should NOT consume the newline here - let
    // scan_line_or_multiline_operand_separator_no_comment handle it (But
    // _statement_separator_no_comment being valid is OK - we can still check for
    // operators)
    if (is_valid_multiline_operand_separator) {
        return false;
    }

    consume_whitespace_and_comments(lexer);

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

            // Peek ahead to see if followed by identifier character
            lexer->mark_end(lexer);
            lexer->advance(lexer, false);

            if (!lexer->eof(lexer) &&
                (is_ascii_alnum(lexer->lookahead) || lexer->lookahead == '_' ||
                 lexer->lookahead == ':' || lexer->lookahead == '$' ||
                 lexer->lookahead == '\\')) {
                // It's a macro variable, not an operator - don't consume as operator
                // space
                return false;
            }

            // Not followed by identifier char, treat as operator
            lexer->result_symbol = _OPERATOR_SPACE;
            return true;
        }
        lexer->mark_end(lexer);
        lexer->result_symbol = _OPERATOR_SPACE;
        return true;
    }

    // Check for operand continuation
    if (is_valid_multiline_operand_separator && !lexer->eof(lexer) &&
        is_ascii_digit(lexer->lookahead)) {

        lexer->mark_end(lexer);
        lexer->result_symbol = _MULTILINE_OPERAND_SEPARATOR_NO_COMMENT;
        return true;
    }

    return false;
}

// ============================================================================
// Multiline-operand/statement separator handling
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

    // Consume the comment
    if (lexer->lookahead == '#') {
        if (!consume_hash_comment(lexer))
            return false;
    } else if (lexer->lookahead == '/') {
        if (!consume_slash_comment(lexer))
            return false;
    } else {
        // Not a comment
        return false;
    }

    // Must have newline after comment
    if (!is_eol_or_eof(lexer))
        return false;

    // Consume further comments whitespace and new lines
    consume_whitespace_and_comments(lexer);

    // Check for directive (starts with . followed by letter)
    if (!lexer->eof(lexer) && lexer->lookahead == '.') {
        lexer->mark_end(lexer);
        lexer->advance(lexer, false);
        if (!lexer->eof(lexer) && is_ascii_alpha(lexer->lookahead)) {
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
            (is_ascii_alnum(lexer->lookahead) || lexer->lookahead == '_' ||
             lexer->lookahead == '$' || lexer->lookahead == '\\')) {
            // Scan the identifier part
            while (!lexer->eof(lexer) &&
                   (is_ascii_alnum(lexer->lookahead) || lexer->lookahead == '_' ||
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
    if (!lexer->eof(lexer) &&
        (is_ascii_alpha(lexer->lookahead) || lexer->lookahead == '_')) {
        lexer->mark_end(lexer);
        // Scan ahead to see if it's a label
        while (!lexer->eof(lexer) &&
               (is_ascii_alnum(lexer->lookahead) || lexer->lookahead == '_' ||
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
    if (!lexer->eof(lexer) && is_ascii_digit(lexer->lookahead)) {
        lexer->mark_end(lexer);
        // Scan past digits
        while (!lexer->eof(lexer) && is_ascii_digit(lexer->lookahead)) {
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
    const bool is_valid_statement_separator =
        valid_symbols[_STATEMENT_SEPARATOR_NO_COMMENT];
    const bool is_valid_multiline_operand_separator =
        valid_symbols[_MULTILINE_OPERAND_SEPARATOR_NO_COMMENT];

    if (!is_valid_statement_separator && !is_valid_multiline_operand_separator)
        return false;

    // Skip any leading horizontal space
    consume_whitespace(lexer, true);

    if (scan_multiline_operand_separator_with_comment(lexer, valid_symbols))
        return true;

    if ((consumed & CONSUMED_COMMENT) && is_valid_statement_separator) {
        // A comment was consumed but no operand followed
        // Only return as separator if we're at definite end-of-statement (EOF or
        // newline)
        if (lexer->eof(lexer) || is_newline(lexer->lookahead)) {
            lexer->mark_end(lexer);
            lexer->result_symbol = _STATEMENT_SEPARATOR_WITH_COMMENT;
            return true;
        }
    }

    // Check if we have a newline
    if (!is_newline(lexer->lookahead)) {
        return false;
    }

    // Consume full separator
    consume_whitespace_and_comments(lexer);

    // Both separators valid - need to disambiguate
    if (is_valid_statement_separator && is_valid_multiline_operand_separator) {
        if (lexer->eof(lexer)) {
            lexer->result_symbol = (consumed & CONSUMED_COMMENT)
                                       ? _STATEMENT_SEPARATOR_WITH_COMMENT
                                       : _STATEMENT_SEPARATOR_NO_COMMENT;
            lexer->mark_end(lexer);
            return true;
        }

        // Check if we're at a comment
        if (lexer->lookahead == '#' || lexer->lookahead == '/') {

            // Consume the comment to see what comes after
            if (lexer->lookahead == '#') {
                consume_hash_comment(lexer);
            } else if (!consume_slash_comment(lexer)) {
                // Not actually a comment, '/' is something else
                lexer->result_symbol = (consumed & CONSUMED_COMMENT)
                                           ? _STATEMENT_SEPARATOR_WITH_COMMENT
                                           : _STATEMENT_SEPARATOR_NO_COMMENT;
                return true;
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
                // consume_to_content(lexer);
                consume_whitespace_and_comments(lexer);

                // Mark end after all comments and blank lines
                lexer->mark_end(lexer);

                // If operands follow, it is an operand separator.
                // Otherwise it is a statement separator.
                if (!lexer->eof(lexer)) {
                    // Check for directive
                    if (lexer->lookahead == '.') {
                        lexer->advance(lexer, false);
                        if (!lexer->eof(lexer) && is_ascii_alpha(lexer->lookahead)) {
                            // Directive - Return _statement_separator_with_comment
                            // since we're in comment path
                            lexer->result_symbol =
                                (consumed & CONSUMED_COMMENT)
                                    ? _STATEMENT_SEPARATOR_WITH_COMMENT
                                    : _STATEMENT_SEPARATOR_NO_COMMENT;
                            return true;
                        }
                        // Fall through - could be float like .5
                    }

                    // Check for non-numeric label
                    if (lexer->lookahead == '_' || is_ascii_alpha(lexer->lookahead)) {
                        // Could be label or instruction; check for colon
                        while (!lexer->eof(lexer) &&
                               (is_ascii_alnum(lexer->lookahead) ||
                                lexer->lookahead == '_' || lexer->lookahead == '.' ||
                                lexer->lookahead == '$')) {
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
                            lexer->result_symbol =
                                (consumed & CONSUMED_COMMENT)
                                    ? _STATEMENT_SEPARATOR_WITH_COMMENT
                                    : _STATEMENT_SEPARATOR_NO_COMMENT;
                            return true;
                        }
                        // Fall through - might be an operand
                    }

                    // Check for numeric label
                    if (is_ascii_digit(lexer->lookahead)) {
                        // Scan past digits
                        while (!lexer->eof(lexer) && is_ascii_digit(lexer->lookahead)) {
                            lexer->advance(lexer, false);
                        }
                        // Skip optional whitespace before colon
                        while (!lexer->eof(lexer) &&
                               (lexer->lookahead == ' ' || lexer->lookahead == '\t')) {
                            lexer->advance(lexer, false);
                        }
                        if (!lexer->eof(lexer) && lexer->lookahead == ':') {
                            // It is a numeric label.
                            // Return _with_comment because we're in comment path
                            lexer->result_symbol =
                                (consumed & CONSUMED_COMMENT)
                                    ? _STATEMENT_SEPARATOR_WITH_COMMENT
                                    : _STATEMENT_SEPARATOR_NO_COMMENT;
                            return true;
                        }
                        // It is a numeric operand
                        lexer->result_symbol =
                            (consumed & CONSUMED_COMMENT)
                                ? _MULTILINE_OPERAND_SEPARATOR_WITH_COMMENT
                                : _MULTILINE_OPERAND_SEPARATOR_NO_COMMENT;
                        return true;
                    }

                    // Check if it's a statement start (macro variable, opcode, etc.)
                    // Macro variables (%foo, $foo, \foo) are statements
                    if (lexer->lookahead == '%' || lexer->lookahead == '$' ||
                        lexer->lookahead == '\\') {
                        // Macro variable at statement start - return END_COMMENT
                        lexer->result_symbol = (consumed & CONSUMED_COMMENT)
                                                   ? _STATEMENT_SEPARATOR_WITH_COMMENT
                                                   : _STATEMENT_SEPARATOR_NO_COMMENT;
                        return true;
                    }

                    if (is_operand_start(lexer->lookahead)) {
                        lexer->result_symbol =
                            (consumed & CONSUMED_COMMENT)
                                ? _MULTILINE_OPERAND_SEPARATOR_WITH_COMMENT
                                : _MULTILINE_OPERAND_SEPARATOR_NO_COMMENT;
                        return true;
                    }
                }

                // Default - return comment token since we're in comment path
                lexer->result_symbol = (consumed & CONSUMED_COMMENT)
                                           ? _MULTILINE_OPERAND_SEPARATOR_WITH_COMMENT
                                           : _MULTILINE_OPERAND_SEPARATOR_NO_COMMENT;
                return true;
            }

            // Comment is inline (not followed by newline immediately)
            // Consume any following spaces, comments, and blank lines
            consume_whitespace_and_comments(lexer);

            // Check if data follows
            if (!lexer->eof(lexer) && (is_ascii_digit(lexer->lookahead) ||
                                       is_operand_start(lexer->lookahead))) {
                // Data follows - mark end to include comment and blank lines
                lexer->mark_end(lexer);
                // Return comment token since we consumed a comment
                lexer->result_symbol = (consumed & CONSUMED_COMMENT)
                                           ? _MULTILINE_OPERAND_SEPARATOR_WITH_COMMENT
                                           : _MULTILINE_OPERAND_SEPARATOR_NO_COMMENT;
                return true;
            }

            // Otherwise return _statement_separator_with_comment since we consumed a
            // comment
            lexer->result_symbol = (consumed & CONSUMED_COMMENT)
                                       ? _STATEMENT_SEPARATOR_WITH_COMMENT
                                       : _STATEMENT_SEPARATOR_NO_COMMENT;
            return true;
        }

        // Look ahead past blank lines and comments for DATA_SEP disambiguation
        if (is_newline(lexer->lookahead)) {
            // Consume blank lines and comments (include in token)
            // bool consumed_comment = consume_to_content(lexer);
            consume_whitespace_and_comments(lexer);

            // Mark end after all blank lines and comments
            lexer->mark_end(lexer);

            // Check for directive (dot followed by letter)
            if (lexer->lookahead == '.') {
                lexer->mark_end(lexer);
                lexer->advance(lexer, false);
                if (!lexer->eof(lexer) && is_ascii_alpha(lexer->lookahead)) {
                    // It's a directive
                    lexer->result_symbol = (consumed & CONSUMED_COMMENT)
                                               ? _STATEMENT_SEPARATOR_WITH_COMMENT
                                               : _STATEMENT_SEPARATOR_NO_COMMENT;
                    return true;
                }
                // It's a float like .5, treat as operand
                lexer->result_symbol = (consumed & CONSUMED_COMMENT)
                                           ? _MULTILINE_OPERAND_SEPARATOR_WITH_COMMENT
                                           : _MULTILINE_OPERAND_SEPARATOR_NO_COMMENT;
                return true;
            }

            // Check for other line-ending constructs
            // Check for identifiers (labels/instructions) or macro variables/registers
            if (lexer->lookahead == '_' || is_ascii_alpha(lexer->lookahead) ||
                lexer->lookahead == '%' || lexer->lookahead == '$' ||
                lexer->lookahead == '\\') {
                lexer->mark_end(lexer);
                lexer->result_symbol = (consumed & CONSUMED_COMMENT)
                                           ? _STATEMENT_SEPARATOR_WITH_COMMENT
                                           : _STATEMENT_SEPARATOR_NO_COMMENT;
                return true;
            }

            // Check for operand-like content
            bool found_operand =
                is_ascii_digit(lexer->lookahead) || is_operand_start(lexer->lookahead);

            lexer->mark_end(lexer);

            // Return comment token only if we actually consumed a comment
            if (!found_operand && (consumed & CONSUMED_COMMENT)) {
                lexer->result_symbol = _STATEMENT_SEPARATOR_WITH_COMMENT;
            } else if (found_operand && (consumed & CONSUMED_COMMENT)) {
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
            lexer->result_symbol = (consumed & CONSUMED_COMMENT)
                                       ? _STATEMENT_SEPARATOR_WITH_COMMENT
                                       : _STATEMENT_SEPARATOR_NO_COMMENT;
            lexer->mark_end(lexer);
            return true;
        }

        // Check for directive (dot followed by letter)
        if (lexer->lookahead == '.') {
            // Peek ahead to see if it's followed by a letter (directive) or digit
            // (float)
            lexer->mark_end(lexer);
            lexer->advance(lexer, false);
            if (!lexer->eof(lexer) && is_ascii_alpha(lexer->lookahead)) {
                // It's a directive like .word, .section
                lexer->result_symbol = (consumed & CONSUMED_COMMENT)
                                           ? _STATEMENT_SEPARATOR_WITH_COMMENT
                                           : _STATEMENT_SEPARATOR_NO_COMMENT;
                return true;
            }
            // It's a float like .5, treat as data continuation
            lexer->result_symbol = (consumed & CONSUMED_COMMENT)
                                       ? _MULTILINE_OPERAND_SEPARATOR_WITH_COMMENT
                                       : _MULTILINE_OPERAND_SEPARATOR_NO_COMMENT;
            return true;
        }

        // Numeric label (123:) vs number (123)
        if (is_ascii_digit(lexer->lookahead)) {
            lexer->mark_end(lexer);
            while (!lexer->eof(lexer) && is_ascii_digit(lexer->lookahead)) {
                lexer->advance(lexer, false);
            }
            // Skip optional whitespace before colon
            while (!lexer->eof(lexer) &&
                   (lexer->lookahead == ' ' || lexer->lookahead == '\t')) {
                lexer->advance(lexer, false);
            }
            if (!lexer->eof(lexer) && lexer->lookahead == ':') {
                lexer->result_symbol = (consumed & CONSUMED_COMMENT)
                                           ? _STATEMENT_SEPARATOR_WITH_COMMENT
                                           : _STATEMENT_SEPARATOR_NO_COMMENT;
                return true;
            }
            consume_whitespace_and_comments(lexer);
            lexer->result_symbol = (consumed & CONSUMED_COMMENT)
                                       ? _MULTILINE_OPERAND_SEPARATOR_WITH_COMMENT
                                       : _MULTILINE_OPERAND_SEPARATOR_NO_COMMENT;
            return true;
        }

        // Label or instruction (including macro variables/registers)
        if (lexer->lookahead == '\n' || lexer->lookahead == '_' ||
            lexer->lookahead == '%' || lexer->lookahead == '$' ||
            lexer->lookahead == '\\' || is_ascii_alpha(lexer->lookahead)) {
            lexer->result_symbol = (consumed & CONSUMED_COMMENT)
                                       ? _STATEMENT_SEPARATOR_WITH_COMMENT
                                       : _STATEMENT_SEPARATOR_NO_COMMENT;
            lexer->mark_end(lexer);
            return true;
        }

        consume_whitespace_and_comments(lexer);
        lexer->result_symbol = (consumed & CONSUMED_COMMENT)
                                   ? _MULTILINE_OPERAND_SEPARATOR_WITH_COMMENT
                                   : _MULTILINE_OPERAND_SEPARATOR_NO_COMMENT;
        lexer->mark_end(lexer);
        return true;
    }

    if (is_valid_multiline_operand_separator) {
        // Check if the next content is a directive (should not be treated as data)
        if (lexer->lookahead == '.') {
            lexer->advance(lexer, false);
            if (!lexer->eof(lexer) && is_ascii_alpha(lexer->lookahead)) {
                // It's a directive - don't return
                // multiline_operand_separator_no_comment
                return false;
            }
        }
        lexer->result_symbol = (consumed & CONSUMED_COMMENT)
                                   ? _MULTILINE_OPERAND_SEPARATOR_WITH_COMMENT
                                   : _MULTILINE_OPERAND_SEPARATOR_NO_COMMENT;
        lexer->mark_end(lexer);
        return true;
    }

    lexer->result_symbol = (consumed & CONSUMED_COMMENT)
                               ? _STATEMENT_SEPARATOR_WITH_COMMENT
                               : _STATEMENT_SEPARATOR_NO_COMMENT;
    lexer->mark_end(lexer);
    return true;
}

// ============================================================================
// Scanner entry point
// ============================================================================

bool tree_sitter_mips_external_scanner_scan(void* payload,
                                            TSLexer* lexer,
                                            const bool* valid_symbols) {
    (void) payload;

    if (lexer->eof(lexer))
        return false;

    consumed = CONSUMED_NONE;

    if (valid_symbols[_OPERAND_SEPARATOR]) {
        // Try operand separator first (space/tab between operands)
        if (scan_operand_separator(lexer, valid_symbols))
            return true;

        if (scan_newline_operator(lexer, valid_symbols))
            return true;

        // Handle comments as separators
        // Block: ONLY when followed by operand (not operator) - for 1/**/2 vs 1/**/+2
        // Line: when followed by newline then operand
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
                // Found block comment to consume
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
