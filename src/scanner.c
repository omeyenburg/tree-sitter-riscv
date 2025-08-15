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
    _DIVISION_OPERATOR,
};

void* tree_sitter_mips_external_scanner_create() {
    return NULL;
}

void tree_sitter_mips_external_scanner_destroy(void* _payload) {}

unsigned tree_sitter_mips_external_scanner_serialize(void* _payload, char* _buffer) {
    return 0;
}

void tree_sitter_mips_external_scanner_deserialize(void* _payload,
                                                   const char* _buffer,
                                                   unsigned _length) {}

static bool is_operator_start(int32_t c) {
    return c == '+' || c == '-' || c == '*' || c == '&' || c == '|' || // removed /
           c == '^' || c == '~' || c == '!' || c == '<' || c == '>' || c == '=';
}

static bool is_operand_start(int32_t c) {
    return iswalnum(c) || c == '_' || c == '\\' || c == '%' || c == '$' || c == '.' ||
           c == '\'' || c == '"' || c == '(' || c == ')' || c == '-';
}

bool tree_sitter_mips_external_scanner_scan(void* _payload,
                                            TSLexer* lexer,
                                            const bool* valid_symbols) {
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
        valid_symbols[_DIVISION_OPERATOR]) {

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
                    !(lexer->eof(lexer) || last == '*' && lexer->lookahead == '/'));

                if (lexer->lookahead == '/') {
                    lexer->advance(lexer, false);
                }

                lexer->result_symbol = BLOCK_COMMENT;
                lexer->mark_end(lexer);
                return valid_symbols[BLOCK_COMMENT];
            } else {
                lexer->result_symbol = _DIVISION_OPERATOR;
                lexer->mark_end(lexer);
                return valid_symbols[_DIVISION_OPERATOR];
            }
        } else if (lexer->lookahead == '#' && valid_symbols[LINE_COMMENT]) {
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
                createTokenChecker("pragma"),
            };

            int i = 0;
            do {
                lexer->advance(lexer, false);

                for (int j = 0; j < sizeof(tokens) / sizeof(TokenChecker); j++) {
                    TokenChecker* token = tokens + j;
                    if (token->valid) {
                        if (i < token->len && lexer->lookahead != token->str[i]) {
                            token->valid = false;
                        } else if (i == token->len && (lexer->lookahead != ' ' ||
                                                       lexer->lookahead == '\t')) {
                            token->valid = false;
                        }
                    }
                }
                i++;
            } while (!(lexer->eof(lexer) || lexer->lookahead == '\r' ||
                       lexer->lookahead == '\n'));

            for (int j = 0; j < sizeof(tokens) / sizeof(TokenChecker); j++) {
                TokenChecker token = tokens[j];
                if (token.valid && i > token.len) {
                    lexer->result_symbol = PREPROCESSOR;
                    lexer->mark_end(lexer);
                    return valid_symbols[PREPROCESSOR];
                }
            }

            lexer->result_symbol = LINE_COMMENT;
            lexer->mark_end(lexer);
            return valid_symbols[LINE_COMMENT];
        }
    }

    return false;
}
