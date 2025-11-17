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

static bool is_operator_start(int32_t c) {
    return c == '+' || c == '-' || c == '*' || c == '%' || c == '&' || c == '|' ||
           c == '^' || c == '~' || c == '!' || c == '<' || c == '>' || c == '=';
}

static bool is_operand_start(int32_t c) {
    return iswalnum(c) || c == '_' || c == '\\' || c == '%' || c == '$' || c == '.' ||
           c == '\'' || c == '"' || c == '(' || c == ')' || c == '-';
}

// Skip comments and whitespace within multiline directives (GENEROUS)
static bool skip_comments_and_whitespace_generous(TSLexer* lexer) {
    bool found_any = false;
    
    while (!lexer->eof(lexer)) {
        if (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
            found_any = true;
            lexer->advance(lexer, false);
            continue;
        }
        
        if (lexer->lookahead == '#') {
            found_any = true;
            lexer->advance(lexer, false);
            while (!lexer->eof(lexer) && 
                   lexer->lookahead != '\n' && lexer->lookahead != '\r') {
                lexer->advance(lexer, false);
            }
            continue;
        }
        
        if (lexer->lookahead == '/') {
            lexer->advance(lexer, false);
            if (!lexer->eof(lexer) && lexer->lookahead == '/') {
                found_any = true;
                lexer->advance(lexer, false);
                while (!lexer->eof(lexer) && 
                       lexer->lookahead != '\n' && lexer->lookahead != '\r') {
                    lexer->advance(lexer, false);
                }
                continue;
            } else if (!lexer->eof(lexer) && lexer->lookahead == '*') {
                found_any = true;
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
    
    return found_any;
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
                    
                    bool next_is_space = !lexer->eof(lexer) &&
                        (lexer->lookahead == ' ' || lexer->lookahead == '\t');
                    bool next_is_operator = !lexer->eof(lexer) && is_operator_start(lexer->lookahead);
                    
                    if (operator_char == '-' || operator_char == '~' || operator_char == '!') {
                        if (next_is_space) {
                            if (is_valid_operator_space) {
                                lexer->result_symbol = _OPERATOR_SPACE;
                                return true;
                            }
                        } else if (next_is_operator) {
                            lexer->advance(lexer, false);
                            bool after_second_is_space = !lexer->eof(lexer) &&
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
        }
    }

    if (is_valid_line_separator || is_valid_data_separator) {
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

            // If we see a blank line, try to continue generously (skip ONLY C-style comments, not #)
            if (lexer->lookahead == '\r' || lexer->lookahead == '\n' || lexer->lookahead == '/') {
                // Look ahead past blank lines, C-style comments to see what's there
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
                    
                    // Skip ONLY C++ and C-style block comments (NOT # comments)
                    if (!lexer->eof(lexer) && lexer->lookahead == '/') {
                        lexer->advance(lexer, false);
                        if (!lexer->eof(lexer) && lexer->lookahead == '/') {
                            // C++ comment
                            lexer->advance(lexer, false);
                            while (!lexer->eof(lexer) && 
                                   lexer->lookahead != '\n' && lexer->lookahead != '\r') {
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
                
                // Now check if there's operand-like content (VERY GENEROUS!)
                bool found_operand = iswdigit(lexer->lookahead) || is_operand_start(lexer->lookahead);
                
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

            // Check for line-ending constructs
            if (lexer->lookahead == '#' || lexer->lookahead == ';' || lexer->lookahead == '.') {
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
                skip_comments_and_whitespace_generous(lexer);
                lexer->result_symbol = _DATA_SEPARATOR;
                return true;
            }

            if (lexer->lookahead == '\n' || lexer->lookahead == '_' || isalpha(lexer->lookahead)) {
                lexer->result_symbol = _LINE_SEPARATOR;
                lexer->mark_end(lexer);
                return true;
            }

            // Default: data separator with generous comment skipping
            skip_comments_and_whitespace_generous(lexer);
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
