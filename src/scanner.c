#include "tree_sitter/parser.h"

#include <ctype.h>
#include <string.h>
#include <wctype.h>

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

static inline bool is_operator_start(int32_t c) {
    return c == '+' || c == '-' || c == '*' || c == '%' || c == '/' || c == '&' || c == '|' ||
           c == '^' || c == '~' || c == '!' || c == '<' || c == '>' || c == '=';
}

// TODO: resolve ambiguity with % and -
static inline bool is_operand_start(int32_t c) {
    return iswalnum(c) || c == '_' || c == '\\' || c == '%' || c == '$' || c == '.' ||
           c == '\'' || c == '"' || c == '(' || c == ')' || c == '-';
}

static inline bool is_eol_or_eof(const TSLexer* lexer) {
    return lexer->eof(lexer) || lexer->lookahead == '\n' || lexer->lookahead == '\r';
}

typedef enum {
    SKIP_NONE,
    SKIP_INLINE,
    SKIP_MULTILINE,
} SkippedType_t;

// Skip whitespace and comments
static SkippedType_t skip_whitespace_and_comments(TSLexer* lexer) {
    SkippedType_t skipped = SKIP_NONE;

    while (!lexer->eof(lexer)) {
        // Swallow any inline whitespace
        if (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
            skipped |= SKIP_INLINE;
            lexer->advance(lexer, false);
            continue;
        }

        // Swallow new lines, and remember them. When skipping lines, no symbols or
        // labels may be accepted as further operands, but numbers and strings are.
        if (lexer->lookahead == '\r' || lexer->lookahead == '\n') {
            skipped |= SKIP_MULTILINE;
            lexer->advance(lexer, false);
            continue;
        }

        // Swallow whole line comment.
        if (lexer->lookahead == '#') {
            skipped |= SKIP_INLINE;
            lexer->advance(lexer, false);
            while (!is_eol_or_eof(lexer)) {
                lexer->advance(lexer, false);
            }
            continue;
        }

        if (lexer->lookahead == '/') {
            // Check if it's a comment without permanently consuming it if it's not
            // We need to peek ahead to check
            lexer->advance(lexer, false);
            
            if (!lexer->eof(lexer) && lexer->lookahead == '/') {
                // It's a '//' comment
                skipped |= SKIP_INLINE;
                lexer->advance(lexer, false);
                while (!is_eol_or_eof(lexer)) {
                    lexer->advance(lexer, false);
                }
                continue;
            }
            
            if (!lexer->eof(lexer) && lexer->lookahead == '*') {
                // It's a '/*' comment
                skipped |= SKIP_INLINE;
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
                continue;
            }

            // Not a comment - '/' is an operator. We've consumed it by advancing.
            // The lookahead is now at the character after '/'.
            // For the operator detection logic in my new code, we need a way to signal
            // that '/' was found. Since we can't go back, we return a special value
            // or handle this case specially. For now, we break and the lookahead
            // will be checked in the calling code. But this is problematic.
            // SOLUTION: Set a flag or check if the previous character was '/'
            // Actually, let me just mark that we found division by checking the parent context.
            // The real solution: don't break here, instead indicate somehow that we have '/'
            break;
        }

        break;
    }

    return skipped;
}

bool tree_sitter_mips_external_scanner_scan(void* payload,
                                            TSLexer* lexer,
                                            const bool* valid_symbols) {
    (void) payload;

    if (lexer->eof(lexer))
        return false;

    const bool is_valid_operand_separator = valid_symbols[_OPERAND_SEPARATOR];
    const bool is_valid_operator_space = valid_symbols[_OPERATOR_SPACE];
    const bool is_valid_line_separator = valid_symbols[_LINE_SEPARATOR];
    const bool is_valid_data_separator = valid_symbols[_DATA_SEPARATOR];

    if (is_valid_operand_separator) {
        bool found_space = false;
        while (!lexer->eof(lexer) &&
               (lexer->lookahead == ' ' || lexer->lookahead == '\t')) {
            found_space = true;
            lexer->advance(lexer, false);
        }
        if (lexer->eof(lexer))
            return false;

        if (found_space) {
            if (!(lexer->lookahead == '\r' || lexer->lookahead == '\n' ||
                  lexer->lookahead == ';' || lexer->lookahead == '#')) {

                if (lexer->lookahead == '%') {
                    lexer->mark_end(lexer);
                    lexer->advance(lexer, false);
                    if (!lexer->eof(lexer)) {
                        if (lexer->lookahead == ' ' || lexer->lookahead == '\t' ||
                            lexer->lookahead == '%') {
                            if (is_valid_operator_space) {
                                lexer->result_symbol = _OPERATOR_SPACE;
                                return true;
                            }
                            return false;
                        }
                    }
                    if (!is_valid_operand_separator)
                        return false;
                    lexer->result_symbol = _OPERAND_SEPARATOR;
                    return true;
                }

                if (is_operator_start(lexer->lookahead)) {
                    lexer->mark_end(lexer);
                    int operator_char = lexer->lookahead;
                    lexer->advance(lexer, false);

                    bool next_is_space =
                        !lexer->eof(lexer) &&
                        (lexer->lookahead == ' ' || lexer->lookahead == '\t');
                    bool next_is_operator =
                        !lexer->eof(lexer) && is_operator_start(lexer->lookahead);

                    if (operator_char == '-' || operator_char == '~' ||
                        operator_char == '!') {
                        if (next_is_space) {
                            if (is_valid_operator_space) {
                                lexer->result_symbol = _OPERATOR_SPACE;
                                return true;
                            }
                        } else if (next_is_operator) {
                            lexer->advance(lexer, false);
                            bool after_second_is_space =
                                !lexer->eof(lexer) &&
                                (lexer->lookahead == ' ' || lexer->lookahead == '\t');

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
                    } else {
                        if (is_valid_operator_space) {
                            lexer->result_symbol = _OPERATOR_SPACE;
                            return true;
                        }
                        return false;
                    }
                }

                if (is_operand_start(lexer->lookahead)) {
                    if (!is_valid_operand_separator)
                        return false;
                    lexer->result_symbol = _OPERAND_SEPARATOR;
                    lexer->mark_end(lexer);
                    return true;
                }
            }
        } else if (is_valid_operator_space && 
                   (!is_valid_line_separator || is_valid_data_separator) &&
                   (lexer->lookahead == '\r' || lexer->lookahead == '\n')) {
            // Support complex separators (newline + operator)
            // Works in both instruction and directive contexts
            // This handles: decimal\n+ decimal, decimal\n/ decimal, etc.
            
            lexer->advance(lexer, false); // Skip the newline
            
            // Skip whitespace and newlines only (not comments yet)
            while (!lexer->eof(lexer) && (lexer->lookahead == ' ' || lexer->lookahead == '\t' || 
                                          lexer->lookahead == '\r' || lexer->lookahead == '\n')) {
                lexer->advance(lexer, false);
            }
            
            // Now check for operators or comments
            while (!lexer->eof(lexer)) {
                // Check for '#' line comment
                if (lexer->lookahead == '#') {
                    lexer->advance(lexer, false);
                    while (!lexer->eof(lexer) && lexer->lookahead != '\n' && lexer->lookahead != '\r') {
                        lexer->advance(lexer, false);
                    }
                    // Skip the newline after comment and any whitespace
                    while (!lexer->eof(lexer) && (lexer->lookahead == '\n' || lexer->lookahead == '\r' ||
                                                  lexer->lookahead == ' ' || lexer->lookahead == '\t')) {
                        lexer->advance(lexer, false);
                    }
                    continue;
                }
                
                // Check for '/' - could be operator, //, or /*
                if (lexer->lookahead == '/') {
                    // Mark end RIGHT HERE, before peeking
                    // This ensures the token includes the '/'
                    lexer->mark_end(lexer);
                    
                    // Now peek ahead to see what follows
                    lexer->advance(lexer, false);
                    int32_t next_char = lexer->lookahead;
                    
                    if (next_char == '/') {
                        // It's a '//' comment - skip until EOL
                        lexer->advance(lexer, false);
                        while (!lexer->eof(lexer) && lexer->lookahead != '\n' && lexer->lookahead != '\r') {
                            lexer->advance(lexer, false);
                        }
                        // Skip the newline after comment and any whitespace
                        while (!lexer->eof(lexer) && (lexer->lookahead == '\n' || lexer->lookahead == '\r' ||
                                                      lexer->lookahead == ' ' || lexer->lookahead == '\t')) {
                            lexer->advance(lexer, false);
                        }
                        continue;
                    }
                    
                    if (next_char == '*') {
                        // It's a '/*' comment - skip until */
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
                        // Skip any whitespace after the comment
                        while (!lexer->eof(lexer) && (lexer->lookahead == ' ' || lexer->lookahead == '\t' ||
                                                      lexer->lookahead == '\n' || lexer->lookahead == '\r')) {
                            lexer->advance(lexer, false);
                        }
                        continue;
                    }
                    
                    // It's a division operator
                    // mark_end was already called above, so just emit
                    lexer->result_symbol = _OPERATOR_SPACE;
                    return true;
                }
                
                // Check for other operators
                if (is_operator_start(lexer->lookahead)) {
                    lexer->mark_end(lexer);
                    lexer->result_symbol = _OPERATOR_SPACE;
                    return true;
                }
                
                // No operator found
                break;
            }
            
            // Check if we should emit _DATA_SEPARATOR for multiline directives
            if (is_valid_data_separator &&
                (!lexer->eof(lexer)) &&
                iswdigit(lexer->lookahead)) {
                lexer->mark_end(lexer);
                lexer->result_symbol = _DATA_SEPARATOR;
                return true;
            }
            
            return false;
        }
    }

    if (is_valid_line_separator || is_valid_data_separator) {
        // Handle comment without preceding newline in directive context
        // Peek ahead to see if comment+newline+data exists, and if so, emit _DATA_SEPARATOR
        if ((lexer->lookahead == '#' || lexer->lookahead == '/') &&
            is_valid_data_separator) {
            // Only in pure directive context, not in instructions
            // Look ahead without permanently advancing
            
            int saved_char = lexer->lookahead;
            lexer->advance(lexer, false);
            
            // Skip to end of comment
            if (saved_char == '#') {
                while (!is_eol_or_eof(lexer)) {
                    lexer->advance(lexer, false);
                }
            } else {
                // saved_char == '/'
                if (!lexer->eof(lexer)) {
                    if (lexer->lookahead == '/') {
                        lexer->advance(lexer, false);
                        while (!is_eol_or_eof(lexer)) {
                            lexer->advance(lexer, false);
                        }
                    } else if (lexer->lookahead == '*') {
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
                    } else {
                        return false;
                    }
                } else {
                    return false;
                }
            }
            
            // Must have newline
            if (!is_eol_or_eof(lexer)) {
                return false;
            }
            
            // Skip newline
            if (lexer->lookahead == '\r') {
                lexer->advance(lexer, false);
                if (!lexer->eof(lexer) && lexer->lookahead == '\n') {
                    lexer->advance(lexer, false);
                }
            } else if (lexer->lookahead == '\n') {
                lexer->advance(lexer, false);
            }
            
            // Skip spaces
            while (!lexer->eof(lexer) && (lexer->lookahead == ' ' || lexer->lookahead == '\t')) {
                lexer->advance(lexer, false);
            }
            
            // Check for data
            if (!lexer->eof(lexer) && (iswdigit(lexer->lookahead) || is_operand_start(lexer->lookahead))) {
                lexer->mark_end(lexer);
                lexer->result_symbol = _DATA_SEPARATOR;
                return true;
            }
            
            return false;
        }
        
        if (lexer->lookahead == '\r') {
            lexer->advance(lexer, false);
            if (!lexer->eof(lexer) && lexer->lookahead == '\n') {
                lexer->advance(lexer, false);
            }
        } else if (lexer->lookahead == '\n') {
            lexer->advance(lexer, false);
        } else {
            return false;
        }

        // Skip horizontal whitespace after newline
        while (!lexer->eof(lexer) &&
               (lexer->lookahead == ' ' || lexer->lookahead == '\t')) {
            lexer->advance(lexer, false);
        }

        if (is_valid_line_separator && is_valid_data_separator) {
            if (lexer->eof(lexer)) {
                lexer->result_symbol = _LINE_SEPARATOR;
                lexer->mark_end(lexer);
                return true;
            }

            // If we see a blank line, skip all comments (both # and C-style)
            if (lexer->lookahead == '\r' || lexer->lookahead == '\n' ||
                lexer->lookahead == '#' || lexer->lookahead == '/') {
                // Look ahead past blank lines and all comments to see what's there
                while (!lexer->eof(lexer)) {
                    // Skip blank lines
                    while (!lexer->eof(lexer) &&
                           (lexer->lookahead == '\r' || lexer->lookahead == '\n')) {
                        if (lexer->lookahead == '\r') {
                            lexer->advance(lexer, false);
                            if (!lexer->eof(lexer) && lexer->lookahead == '\n') {
                                lexer->advance(lexer, false);
                            }
                        } else {
                            lexer->advance(lexer, false);
                        }
                    }

                    // Skip horizontal whitespace
                    while (!lexer->eof(lexer) &&
                           (lexer->lookahead == ' ' || lexer->lookahead == '\t')) {
                        lexer->advance(lexer, false);
                    }

                    // Skip # comments
                    if (!lexer->eof(lexer) && lexer->lookahead == '#') {
                        lexer->advance(lexer, false);
                        while (!lexer->eof(lexer) && lexer->lookahead != '\n' &&
                               lexer->lookahead != '\r') {
                            lexer->advance(lexer, false);
                        }
                        continue;
                    }

                    // Skip C++ and C-style block comments
                    if (!lexer->eof(lexer) && lexer->lookahead == '/') {
                        lexer->advance(lexer, false);
                        if (!lexer->eof(lexer) && lexer->lookahead == '/') {
                            // C++ comment
                            lexer->advance(lexer, false);
                            while (!lexer->eof(lexer) && lexer->lookahead != '\n' &&
                                   lexer->lookahead != '\r') {
                                lexer->advance(lexer, false);
                            }
                            continue;
                        } else if (!lexer->eof(lexer) && lexer->lookahead == '*') {
                            // Block comment
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
                            continue;
                        } else {
                            break;
                        }
                    }

                    break;
                }

                // Now check if there's operand-like content
                bool found_operand =
                    iswdigit(lexer->lookahead) || is_operand_start(lexer->lookahead);

                if (found_operand && is_valid_data_separator) {
                    // It's data - emit DATA_SEPARATOR to continue directive
                    lexer->mark_end(lexer);
                    lexer->result_symbol = _DATA_SEPARATOR;
                    return true;
                }

                // Otherwise it's a line separator
                if (is_valid_line_separator) {
                    lexer->mark_end(lexer);
                    lexer->result_symbol = _LINE_SEPARATOR;
                    return true;
                }
            }

            // Check for line-ending constructs (but NOT # which is a comment to skip)
            if (lexer->lookahead == ';' || lexer->lookahead == '.') {
                lexer->result_symbol = _LINE_SEPARATOR;
                lexer->mark_end(lexer);
                return true;
            }

            // Numeric label
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

            if (lexer->lookahead == '\n' || lexer->lookahead == '_' ||
                isalpha(lexer->lookahead)) {
                lexer->result_symbol = _LINE_SEPARATOR;
                lexer->mark_end(lexer);
                return true;
            }

            // Default: data separator with comment skipping
            skip_whitespace_and_comments(lexer);
            lexer->result_symbol = _DATA_SEPARATOR;
            lexer->mark_end(lexer);
            return true;
        }

        if (is_valid_line_separator) {
            lexer->result_symbol = _LINE_SEPARATOR;
            lexer->mark_end(lexer);
            return true;
        }

        if (is_valid_data_separator) {
            lexer->result_symbol = _DATA_SEPARATOR;
            lexer->mark_end(lexer);
            return true;
        }
    }

    return false;
}
