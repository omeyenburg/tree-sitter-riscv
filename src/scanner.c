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
    _LINE_SEPARATOR,
    _DATA_SEPARATOR,
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
static void skip_horizontal_space(TSLexer* lexer) {
    while (!lexer->eof(lexer) && is_space(lexer->lookahead)) {
        lexer->advance(lexer, true);  // Skip whitespace
    }
}

/**
 * Skip a single newline (handles CRLF and LF).
 * Returns true if a newline was consumed.
 */
static bool skip_newline(TSLexer* lexer) {
#if DEBUG_SCANNER
    fprintf(stderr, "[skip_newline] lookahead=%d (\\r=%d \\n=%d)\n", 
            lexer->lookahead, '\r', '\n');
#endif
    if (lexer->lookahead == '\r') {
        lexer->advance(lexer, true);  // Skip whitespace
        if (!lexer->eof(lexer) && lexer->lookahead == '\n') {
            lexer->advance(lexer, true);  // Skip whitespace
        }
        return true;
    } else if (lexer->lookahead == '\n') {
        lexer->advance(lexer, true);  // Skip whitespace
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
            skip_horizontal_space(lexer);
            continue;
        }

        if (is_newline(lexer->lookahead)) {
            skipped |= SKIP_MULTILINE;
            skip_newline(lexer);
            continue;
        }

        if (consume_hash_comment(lexer)) {
            skipped |= SKIP_MULTILINE;  // Line comments end the line
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
    while (!lexer->eof(lexer)) {
        skip_horizontal_space(lexer);

        if (skip_newline(lexer))
            continue;

        if (consume_hash_comment(lexer))
            continue;

        if (consume_slash_comment(lexer))
            continue;

        break;
    }
}

/**
 * Consume (not skip) blank lines and comments to reach actual content.
 * Uses advance(lexer, false) to include everything in the token range.
 * This preserves the token start position at the first consumed character.
 */
static void consume_to_content(TSLexer* lexer) {
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
        if (consume_hash_comment(lexer))
            continue;

        if (consume_slash_comment(lexer))
            continue;

        break;
    }
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
    const bool is_valid_data_separator = valid_symbols[_DATA_SEPARATOR];
    const bool is_valid_line_separator = valid_symbols[_LINE_SEPARATOR];

    if (!is_valid_operator_space || !is_newline(lexer->lookahead))
        return false;

#if DEBUG_SCANNER
    fprintf(stderr, "[scan_newline_operator] called\n");
#endif

    // IMPORTANT: Check if _DATA_SEPARATOR is also valid.
    // If so, we should NOT consume the newline here - let scan_line_or_data_separator handle it
    // (But _LINE_SEPARATOR being valid is OK - we can still check for operators)
    if (is_valid_data_separator) {
#if DEBUG_SCANNER
        fprintf(stderr, "[scan_newline_operator] -> FALSE (data sep also valid)\n");
#endif
        return false;
    }

    skip_newline(lexer);
    skip_to_content(lexer);

#if DEBUG_SCANNER
    fprintf(stderr, "[scan_newline_operator] after skip, lookahead='%c'(%d)\n",
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
        lexer->mark_end(lexer);
        lexer->result_symbol = _OPERATOR_SPACE;
        return true;
    }

    // Check for data continuation
    if (is_valid_data_separator && !lexer->eof(lexer) && iswdigit(lexer->lookahead)) {
#if DEBUG_SCANNER
        fprintf(stderr, "[scan_newline_operator] -> DATA_SEP (digit found)\n");
#endif
        lexer->mark_end(lexer);
        lexer->result_symbol = _DATA_SEPARATOR;
        return true;
    }

#if DEBUG_SCANNER
    fprintf(stderr, "[scan_newline_operator] -> FALSE\n");
#endif
    return false;
}

// ============================================================================
// Line/Data Separator Handling
// ============================================================================

/**
 * Scan for DATA_SEPARATOR after comment without preceding newline.
 */
static bool scan_comment_data_separator(TSLexer* lexer, const bool* valid_symbols) {
    if (!valid_symbols[_DATA_SEPARATOR])
        return false;

    if (lexer->lookahead != '#' && lexer->lookahead != '/')
        return false;

    // Skip the comment
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
    skip_horizontal_space(lexer);

    // Check for directive (starts with . followed by letter)
    if (!lexer->eof(lexer) && lexer->lookahead == '.') {
        lexer->advance(lexer, false);
        if (!lexer->eof(lexer) && isalpha(lexer->lookahead)) {
            // It's a directive, not an operand - don't return separator
            return false;
        }
        // It's something else (like .5 for float), treat as operand
        lexer->result_symbol = _DATA_SEPARATOR;
        return true;
    }

    // Check for label (identifier followed by colon)
    if (!lexer->eof(lexer) && (isalpha(lexer->lookahead) || lexer->lookahead == '_')) {
        // Scan ahead to see if it's a label
        while (!lexer->eof(lexer) && (isalnum(lexer->lookahead) || 
                                       lexer->lookahead == '_' || 
                                       lexer->lookahead == '.' ||
                                       lexer->lookahead == '$')) {
            lexer->advance(lexer, false);
        }
        if (!lexer->eof(lexer) && lexer->lookahead == ':') {
            // It's a label, not an operand - don't return separator
            return false;
        }
        // It's a symbol operand, continue
        lexer->result_symbol = _DATA_SEPARATOR;
        return true;
    }

    // Check for other operand-like content
    if (!lexer->eof(lexer) &&
        (iswdigit(lexer->lookahead) || is_operand_start(lexer->lookahead))) {
        lexer->result_symbol = _DATA_SEPARATOR;
        return true;
    }

    return false;
}

/**
 * Determine if newline should be LINE_SEPARATOR or DATA_SEPARATOR.
 * Called when both separators are potentially valid.
 */
static bool scan_line_or_data_separator(TSLexer* lexer, const bool* valid_symbols) {
    const bool is_valid_line_separator = valid_symbols[_LINE_SEPARATOR];
    const bool is_valid_data_separator = valid_symbols[_DATA_SEPARATOR];

#if DEBUG_SCANNER
    fprintf(stderr, "[scan_line_or_data] line_sep=%d data_sep=%d\n", 
            is_valid_line_separator, is_valid_data_separator);
#endif

    if (!is_valid_line_separator && !is_valid_data_separator)
        return false;

    // Skip any leading horizontal space
    skip_horizontal_space(lexer);

    // Handle comment without newline
    if (scan_comment_data_separator(lexer, valid_symbols))
        return true;

    // Check if we have a newline
    if (!is_newline(lexer->lookahead)) {
#if DEBUG_SCANNER
        fprintf(stderr, "[scan_line_or_data] no newline found\n");
#endif
        return false;
    }
    
    // Don't skip the newline yet - we might need to include it in the token
    // if there's a comment after it that leads to data continuation

#if DEBUG_SCANNER
    fprintf(stderr, "[scan_line_or_data] after skip, lookahead='%c'(%d)\n",
            (lexer->lookahead >= 32 && lexer->lookahead < 127) ? lexer->lookahead : '?',
            lexer->lookahead);
#endif

    // Consume the newline with advance(false) so it can be part of the token
    // if we end up returning DATA_SEPARATOR
    if (lexer->lookahead == '\r') {
        lexer->advance(lexer, false);
        if (!lexer->eof(lexer) && lexer->lookahead == '\n') {
            lexer->advance(lexer, false);
        }
    } else if (lexer->lookahead == '\n') {
        lexer->advance(lexer, false);
    }
    
    // Skip horizontal space (might skip or include depending on what follows)
    skip_horizontal_space(lexer);

    // Both separators valid - need to disambiguate
    if (is_valid_line_separator && is_valid_data_separator) {
#if DEBUG_SCANNER
        fprintf(stderr, "[scan_line_or_data] BOTH valid, disambiguating\n");
#endif
        if (lexer->eof(lexer)) {
#if DEBUG_SCANNER
            fprintf(stderr, "[scan_line_or_data] -> LINE_SEP (EOF)\n");
#endif
            lexer->result_symbol = _LINE_SEPARATOR;
            lexer->mark_end(lexer);
            return true;
        }

        // Check if we're at a comment
        if (lexer->lookahead == '#' || lexer->lookahead == '/') {
#if DEBUG_SCANNER
            fprintf(stderr, "[scan_line_or_data] Found comment at start\n");
#endif
            
            // Consume the comment to see what comes after
            if (lexer->lookahead == '#') {
                consume_hash_comment(lexer);
            } else {
                if (!consume_slash_comment(lexer)) {
                    // Not actually a comment, '/' is something else
#if DEBUG_SCANNER
                    fprintf(stderr, "[scan_line_or_data] Not a comment, returning LINE_SEP\n");
#endif
                    lexer->result_symbol = _LINE_SEPARATOR;
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
                fprintf(stderr, "[scan_line_or_data] After consume_to_content, lookahead='%c'(%d)\n",
                        (lexer->lookahead >= 32 && lexer->lookahead < 127) ? lexer->lookahead : '?',
                        lexer->lookahead);
#endif
                
                // Mark end after all comments and blank lines - this is the separator span
                lexer->mark_end(lexer);
                
                // Check if what follows is data continuation
                if (!lexer->eof(lexer)) {
                    // Check for directive (should be LINE_SEP)
                    if (lexer->lookahead == '.') {
                        lexer->advance(lexer, false);
                        if (!lexer->eof(lexer) && isalpha(lexer->lookahead)) {
                            // Directive - LINE_SEPARATOR
#if DEBUG_SCANNER
                            fprintf(stderr, "[scan_line_or_data] Directive after comment, LINE_SEP\n");
#endif
                            lexer->result_symbol = _LINE_SEPARATOR;
                            return true;
                        }
                        // Fall through - could be float like .5
                    }
                    
                    // Check for label
                    if (lexer->lookahead == '_' || isalpha(lexer->lookahead)) {
                        // Could be label or instruction - check for colon
                        while (!lexer->eof(lexer) && (isalnum(lexer->lookahead) || 
                                                       lexer->lookahead == '_' || 
                                                       lexer->lookahead == '.' ||
                                                       lexer->lookahead == '$')) {
                            lexer->advance(lexer, false);
                        }
                        if (!lexer->eof(lexer) && lexer->lookahead == ':') {
                            // Label - LINE_SEPARATOR
#if DEBUG_SCANNER
                            fprintf(stderr, "[scan_line_or_data] Label after comment, LINE_SEP\n");
#endif
                            lexer->result_symbol = _LINE_SEPARATOR;
                            return true;
                        }
                        // Fall through - might be data
                    }
                    
                    // Check if it's data-like (number, symbol, etc.)
                    if (iswdigit(lexer->lookahead) || is_operand_start(lexer->lookahead)) {
                        // Data continuation - comment already included via mark_end above
#if DEBUG_SCANNER
                        fprintf(stderr, "[scan_line_or_data] Data after comment, DATA_SEP (swallowing comment)\n");
#endif
                        lexer->result_symbol = _DATA_SEPARATOR;
                        return true;
                    }
                }
                
                // Default to LINE_SEPARATOR (comment not swallowed)
#if DEBUG_SCANNER
                fprintf(stderr, "[scan_line_or_data] Default LINE_SEP after comment\n");
#endif
                lexer->result_symbol = _LINE_SEPARATOR;
                return true;
            }
            
            // Comment is inline (not followed by newline immediately)
            // Skip any whitespace after the comment
            skip_horizontal_space(lexer);
            
            // If there's a newline, consume it and any following blank lines/comments
            if (is_newline(lexer->lookahead)) {
                consume_to_content(lexer);
            }
            
            // Check if data follows
            if (!lexer->eof(lexer) && (iswdigit(lexer->lookahead) || is_operand_start(lexer->lookahead))) {
                // Data follows - mark end to include comment and blank lines
#if DEBUG_SCANNER
                fprintf(stderr, "[scan_line_or_data] Inline comment before data, DATA_SEP\n");
#endif
                lexer->mark_end(lexer);
                lexer->result_symbol = _DATA_SEPARATOR;
                return true;
            }
            
            // Otherwise return LINE_SEP (comment not swallowed)
#if DEBUG_SCANNER
            fprintf(stderr, "[scan_line_or_data] Inline comment, LINE_SEP\n");
#endif
            lexer->result_symbol = _LINE_SEPARATOR;
            return true;
        }

        // Look ahead past blank lines and comments for DATA_SEP disambiguation
        if (is_newline(lexer->lookahead)) {
            // Consume blank lines and comments (include in token)
            consume_to_content(lexer);
            
            // Mark end after all blank lines and comments
            lexer->mark_end(lexer);

            // Check for directive (dot followed by letter)
            if (lexer->lookahead == '.') {
                lexer->mark_end(lexer);
                lexer->advance(lexer, false);
                if (!lexer->eof(lexer) && isalpha(lexer->lookahead)) {
                    // It's a directive
#if DEBUG_SCANNER
                    fprintf(stderr, "[scan_line_or_data] -> LINE_SEP (directive after blank lines)\n");
#endif
                    lexer->result_symbol = _LINE_SEPARATOR;
                    return true;
                }
                // It's a float like .5, treat as data
#if DEBUG_SCANNER
                fprintf(stderr, "[scan_line_or_data] -> DATA_SEP (float after blank lines)\n");
#endif
                lexer->result_symbol = _DATA_SEPARATOR;
                return true;
            }

            // Check for other line-ending constructs
            if (lexer->lookahead == '_' || isalpha(lexer->lookahead)) {
#if DEBUG_SCANNER
                fprintf(stderr, "[scan_line_or_data] -> LINE_SEP (label/instruction after blank lines)\n");
#endif
                lexer->mark_end(lexer);
                lexer->result_symbol = _LINE_SEPARATOR;
                return true;
            }

            // Check for operand-like content
            bool found_operand =
                iswdigit(lexer->lookahead) || is_operand_start(lexer->lookahead);

            lexer->mark_end(lexer);
            lexer->result_symbol = found_operand ? _DATA_SEPARATOR : _LINE_SEPARATOR;
            return true;
        }

        // Check for line-ending constructs
        if (lexer->lookahead == ';') {
#if DEBUG_SCANNER
            fprintf(stderr, "[scan_line_or_data] -> LINE_SEP (found ';')\n");
#endif
            lexer->result_symbol = _LINE_SEPARATOR;
            lexer->mark_end(lexer);
            return true;
        }
        
        // Check for directive (dot followed by letter)
        if (lexer->lookahead == '.') {
            // Peek ahead to see if it's followed by a letter (directive) or digit (float)
            lexer->mark_end(lexer);
            lexer->advance(lexer, false);
            if (!lexer->eof(lexer) && isalpha(lexer->lookahead)) {
                // It's a directive like .word, .section
#if DEBUG_SCANNER
                fprintf(stderr, "[scan_line_or_data] -> LINE_SEP (found directive)\n");
#endif
                lexer->result_symbol = _LINE_SEPARATOR;
                return true;
            }
            // It's a float like .5, treat as data continuation
#if DEBUG_SCANNER
            fprintf(stderr, "[scan_line_or_data] -> DATA_SEP (float literal)\n");
#endif
            lexer->result_symbol = _DATA_SEPARATOR;
            return true;
        }

        // Numeric label (123:) vs number (123)
        if (iswdigit(lexer->lookahead)) {
            lexer->mark_end(lexer);
            while (!lexer->eof(lexer) && iswdigit(lexer->lookahead)) {
                lexer->advance(lexer, false);
            }
            if (!lexer->eof(lexer) && lexer->lookahead == ':') {
                lexer->result_symbol = _LINE_SEPARATOR;
                return true;
            }
            skip_whitespace_and_comments(lexer);
            lexer->result_symbol = _DATA_SEPARATOR;
            return true;
        }

        // Label or instruction
        if (lexer->lookahead == '\n' || lexer->lookahead == '_' ||
            isalpha(lexer->lookahead)) {
            lexer->result_symbol = _LINE_SEPARATOR;
            lexer->mark_end(lexer);
            return true;
        }

        // Default: data separator
        skip_whitespace_and_comments(lexer);
        lexer->result_symbol = _DATA_SEPARATOR;
        lexer->mark_end(lexer);
        return true;
    }

    // Only LINE_SEPARATOR valid
    if (is_valid_line_separator && !is_valid_data_separator) {
        // Mark end to not consume any comments/whitespace after newline
        lexer->mark_end(lexer);
        lexer->result_symbol = _LINE_SEPARATOR;
        return true;
    }

    if (is_valid_data_separator) {
        // Check if the next content is a directive (should not be treated as data)
        if (lexer->lookahead == '.') {
            lexer->advance(lexer, false);
            if (!lexer->eof(lexer) && isalpha(lexer->lookahead)) {
                // It's a directive - don't return DATA_SEPARATOR
                return false;
            }
        }
        lexer->result_symbol = _DATA_SEPARATOR;
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
    fprintf(stderr, "[SCAN] col=%d, lookahead='%c'(%d), valid: op_sep=%d op_space=%d line_sep=%d data_sep=%d\n",
            lexer->get_column(lexer),
            (lexer->lookahead >= 32 && lexer->lookahead < 127) ? lexer->lookahead : '?',
            lexer->lookahead,
            valid_symbols[_OPERAND_SEPARATOR],
            valid_symbols[_OPERATOR_SPACE],
            valid_symbols[_LINE_SEPARATOR],
            valid_symbols[_DATA_SEPARATOR]);
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
                    skip_newline(lexer);
                    skip_horizontal_space(lexer);
                    // Mark end AFTER consuming comment and whitespace
                    lexer->mark_end(lexer);
                    // Check if operand follows
                    if (!lexer->eof(lexer) && is_operand_start(lexer->lookahead)) {
                        // Line comment followed by operand - return separator
                        lexer->result_symbol = _OPERAND_SEPARATOR;
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
                // Check what follows: if non-operator operand, return separator
                if (!lexer->eof(lexer) && is_operand_start(lexer->lookahead) && 
                    !is_operator_start(lexer->lookahead)) {
                    lexer->result_symbol = _OPERAND_SEPARATOR;
                    return true;
                }
                // If operator follows, return false (let block_comment be consumed as extra)
                return false;
            }
            // Not a comment, return false
            return false;
        }
    }

    // Try LINE_SEPARATOR and DATA_SEPARATOR
    if (valid_symbols[_LINE_SEPARATOR] || valid_symbols[_DATA_SEPARATOR]) {
        return scan_line_or_data_separator(lexer, valid_symbols);
    }

    return false;
}
