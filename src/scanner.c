#include "tree_sitter/parser.h"

#include <ctype.h>
#include <string.h>
#include <wctype.h>

typedef struct {
    const char* str;
    const int len;
    bool valid;
} TokenChecker;

static TokenChecker createTokenChecker(const char* str) {
    return (TokenChecker) {str, strlen(str), true};
}

enum TokenType {
    _OPERAND_SEPARATOR,
    _OPERATOR_SEPARATOR,
    _LINE_SEPARATOR,
    _DATA_SEPARATOR,
    LINE_COMMENT,
    BLOCK_COMMENT,
    PREPROCESSOR,
    DIVISION_OPERATOR,
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
    return c == '+' || c == '-' || c == '*' || c == '&' || c == '|' || // removed /
           c == '^' || c == '~' || c == '!' || c == '<' || c == '>' || c == '=';
}

static bool is_operand_start(int32_t c) {
    return iswalnum(c) || c == '_' || c == '\\' || c == '%' || c == '$' || c == '.' ||
           c == '\'' || c == '"' || c == '(' || c == ')' || c == '-';
}

bool tree_sitter_mips_external_scanner_scan(void* payload,
                                            TSLexer* lexer,
                                            const bool* valid_symbols) {
    (void) payload;

    if (lexer->eof(lexer))
        return false;

    if (valid_symbols[_OPERAND_SEPARATOR] || valid_symbols[_OPERATOR_SEPARATOR]) {
        // Skip whitespace but track that we found some
        bool found_space = false;
        while (!lexer->eof(lexer) &&
               (lexer->lookahead == ' ' || lexer->lookahead == '\t')) {
            found_space = true;
            lexer->advance(lexer, false);
        }
        if (lexer->eof(lexer))
            return false;

        // If no space found, can't be a separator
        if (found_space) {
            // If we hit end of line, semicolon, or comment - not an operand separator
            if (!(lexer->lookahead == '\r' || lexer->lookahead == '\n' ||
                  lexer->lookahead == ';' || lexer->lookahead == '#')) {
                // Special handling for %: always treat space-before-% as creating a separator
                // The grammar will handle deciding if it's an operator or macro-variable
                // We peek ahead to determine separator type, but must mark end at the space position
                if (lexer->lookahead == '%') {
                    if (!valid_symbols[_OPERATOR_SEPARATOR] && !valid_symbols[_OPERAND_SEPARATOR])
                        return false;
                    
                    // Mark end now, at the space position (before %)
                    lexer->mark_end(lexer);
                    
                    // Now peek ahead to see if there's space after %, or another %
                    lexer->advance(lexer, false);  // Move past %
                    bool has_space_after = false;
                    bool is_double_percent = false;
                    if (!lexer->eof(lexer)) {
                        if (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
                            has_space_after = true;
                        } else if (lexer->lookahead == '%') {
                            // When we see %%, treat it as an operator
                            is_double_percent = true;
                        }
                    }
                    
                    if (has_space_after) {
                        // Space before AND after, so it's an operator
                        lexer->result_symbol = _OPERATOR_SEPARATOR;
                        return true;
                    } else if (is_double_percent) {
                        // Space before and %% (no space after %), treat as operator
                        lexer->result_symbol = _OPERATOR_SEPARATOR;
                        return true;
                    } else {
                        // Space before but just a regular macro variable, treat as operand separator  
                        lexer->result_symbol = _OPERAND_SEPARATOR;
                        return true;
                    }
                }
                
                // If we see an operator, this space is part of an expression, not a
                // separator
                if (is_operator_start(lexer->lookahead)) {
                    if (!valid_symbols[_OPERATOR_SEPARATOR])
                        return false;

                    lexer->result_symbol = _OPERATOR_SEPARATOR;
                    lexer->mark_end(lexer);
                    return true;
                }

                // If we see something that looks like the start of an operand,
                // then the space we found should separate operands
                if (is_operand_start(lexer->lookahead)) {
                    if (!valid_symbols[_OPERAND_SEPARATOR])
                        return false;

                    lexer->result_symbol = _OPERAND_SEPARATOR;
                    lexer->mark_end(lexer);
                    return true;
                }
            }
        }
    }

    if (valid_symbols[_LINE_SEPARATOR] && valid_symbols[_DATA_SEPARATOR]) {
        if (lexer->lookahead == '\r') {
            lexer->advance(lexer, false);
            if (lexer->eof(lexer))
                return false;
        }

        if (lexer->lookahead == '\n') {
            lexer->advance(lexer, false);

            while (!lexer->eof(lexer) &&
                   (lexer->lookahead == ' ' || lexer->lookahead == '\t')) {
                lexer->advance(lexer, false);
            }
            if (lexer->eof(lexer))
                return false;

            if (lexer->lookahead == '\n' || lexer->lookahead == '.' ||
                isalpha(lexer->lookahead)) {
                lexer->result_symbol = _LINE_SEPARATOR;
                lexer->mark_end(lexer);
                return true;
            }

            lexer->result_symbol = _DATA_SEPARATOR;
            lexer->mark_end(lexer);
            return true;
        }
    } else if (valid_symbols[_LINE_SEPARATOR]) {
        if (lexer->lookahead == '\r') {
            lexer->advance(lexer, false);
            if (lexer->eof(lexer))
                return false;
        }

        if (lexer->lookahead == '\n') {
            lexer->advance(lexer, false);
            lexer->result_symbol = _LINE_SEPARATOR;
            lexer->mark_end(lexer);
            return true;
        }
    } else if (valid_symbols[_DATA_SEPARATOR]) {
        if (lexer->lookahead == '\r') {
            lexer->advance(lexer, false);
            if (lexer->eof(lexer))
                return false;
        }

        if (lexer->lookahead == '\n') {
            lexer->advance(lexer, false);
            lexer->result_symbol = _DATA_SEPARATOR;
            lexer->mark_end(lexer);
            return true;
        }
    }

    if (valid_symbols[BLOCK_COMMENT] || valid_symbols[LINE_COMMENT] ||
        valid_symbols[DIVISION_OPERATOR]) {

        if (lexer->lookahead == '/') {
            lexer->advance(lexer, false);
            if (lexer->eof(lexer))
                return false;

            if (lexer->lookahead == '/') {
                do {
                    lexer->advance(lexer, false);
                } while (!(lexer->eof(lexer) || lexer->lookahead == '\r' ||
                           lexer->lookahead == '\n'));

                lexer->result_symbol = LINE_COMMENT;
                lexer->mark_end(lexer);
                return valid_symbols[LINE_COMMENT];
            } else if (lexer->lookahead == '*') {
                char last;
                do {
                    last = lexer->lookahead;
                    lexer->advance(lexer, false);
                } while (
                    !(lexer->eof(lexer) || (last == '*' && lexer->lookahead == '/')));

                if (lexer->lookahead == '/') {
                    lexer->advance(lexer, false);
                }

                lexer->result_symbol = BLOCK_COMMENT;
                lexer->mark_end(lexer);
                return valid_symbols[BLOCK_COMMENT];
            } else {
                lexer->result_symbol = DIVISION_OPERATOR;
                lexer->mark_end(lexer);
                return valid_symbols[DIVISION_OPERATOR];
            }
        } else if (lexer->lookahead == '#' &&
                   (valid_symbols[LINE_COMMENT] || valid_symbols[PREPROCESSOR])) {
            if (valid_symbols[PREPROCESSOR]) {
                // Consume whitespace to allow `# define ...`
                do {
                    lexer->advance(lexer, false);
                } while (!lexer->eof(lexer) &&
                         (lexer->lookahead == ' ' || lexer->lookahead == '\t'));

                TokenChecker tokens[] = {
                    createTokenChecker("include"),
                    createTokenChecker("define"),
                    createTokenChecker("undef"),
                    createTokenChecker("if"),
                    createTokenChecker("ifdef"),
                    createTokenChecker("ifndef"),
                    createTokenChecker("else"),
                    createTokenChecker("elif"),
                    createTokenChecker("endif"),
                    createTokenChecker("error"),
                    createTokenChecker("warning"),
                    createTokenChecker("pragma"),
                    createTokenChecker("line"),
                };

                int i;
                for (i = 0; !(lexer->eof(lexer) || lexer->lookahead == ' ' ||
                              lexer->lookahead == '\t' || lexer->lookahead == '\r' ||
                              lexer->lookahead == '\n');
                     i++) {
                    for (unsigned int j = 0; j < sizeof(tokens) / sizeof(TokenChecker); j++) {
                        TokenChecker* token = tokens + j;
                        if (token->valid) {
                            if (i < token->len && lexer->lookahead != token->str[i]) {
                                token->valid = false;
                            } else if (i == token->len) {
                                token->valid = false;
                            }
                        }
                    }

                    lexer->advance(lexer, false);
                }

                for (unsigned int j = 0; j < sizeof(tokens) / sizeof(TokenChecker); j++) {
                    TokenChecker token = tokens[j];
                    if (token.valid && i == token.len) {
                        bool backslash = false;
                        while (!lexer->eof(lexer)) {
                            if (lexer->lookahead == '\\') {
                                backslash = true;
                            } else if (lexer->lookahead == '\r' && !backslash) {
                                break;
                            } else if (lexer->lookahead == '\n') {
                                if (backslash) {
                                    backslash = false;
                                } else {
                                    break;
                                }
                            }

                            lexer->advance(lexer, false);
                        }

                        lexer->result_symbol = PREPROCESSOR;
                        lexer->mark_end(lexer);
                        return true;
                    }
                }
            }

            while (!lexer->eof(lexer) && lexer->lookahead != '\r' &&
                   lexer->lookahead != '\n') {
                lexer->advance(lexer, false);
            }

            lexer->result_symbol = LINE_COMMENT;
            lexer->mark_end(lexer);
            return valid_symbols[LINE_COMMENT];
        }
    }

    return false;
}
