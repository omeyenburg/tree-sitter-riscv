// src/scanner.c
#include <ctype.h>
#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType {
    _OPERAND_SEPARATOR,
    _LINE_SEPARATOR,
    _DATA_SEPARATOR,
};

void* tree_sitter_mips_external_scanner_create() {
    return NULL;
}

void tree_sitter_mips_external_scanner_destroy(void* payload) {}

unsigned tree_sitter_mips_external_scanner_serialize(void* payload, char* buffer) {
    return 0;
}

void tree_sitter_mips_external_scanner_deserialize(void* payload,
                                                   const char* buffer,
                                                   unsigned length) {}

static bool is_operator_start(int32_t c) {
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '&' || c == '|' ||
           c == '^' || c == '~' || c == '!' || c == '<' || c == '>' || c == '=';
}

static bool is_operand_start(int32_t c) {
    return iswalnum(c) || c == '_' || c == '\\' || c == '%' || c == '$' || c == '.' ||
           c == '\'' || c == '"' || c == '(' || c == ')' || c == '-';
}

bool tree_sitter_mips_external_scanner_scan(void* payload,
                                            TSLexer* lexer,
                                            const bool* valid_symbols) {
    if (valid_symbols[_OPERAND_SEPARATOR]) {
        // Skip whitespace but track that we found some
        bool found_space = false;
        while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
            found_space = true;
            lexer->advance(lexer, false);
        }

        // If no space found, can't be a separator
        if (!found_space) {
            return false;
        }

        // If we hit end of line, semicolon, or comment - not an operand separator
        if (lexer->lookahead == '\n' || lexer->lookahead == 0 ||
            lexer->lookahead == ';' || lexer->lookahead == '#') {
            return false;
        }

        // If we see an operator, this space is part of an expression, not a separator
        if (is_operator_start(lexer->lookahead)) {
            return false;
        }

        // If we see something that looks like the start of an operand,
        // then the space we found should separate operands
        if (is_operand_start(lexer->lookahead)) {
            lexer->result_symbol = _OPERAND_SEPARATOR;
            return true;
        }
    }

    if (valid_symbols[_LINE_SEPARATOR] && valid_symbols[_DATA_SEPARATOR]) {
        // if (lexer->lookahead == '#') {
        //     lexer->advance(lexer, false);
        //     while (lexer->eof(lexer) || lexer->lookahead == '\n') {
        //         lexer->advance(lexer, false);
        //     }
        // }

        if (lexer->lookahead == '\n') {
            lexer->advance(lexer, false);

            while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
                lexer->advance(lexer, false);
            }

            if (lexer->eof(lexer) || lexer->lookahead == '\n' ||
                lexer->lookahead == '.' || isalpha(lexer->lookahead)) {
                lexer->result_symbol = _LINE_SEPARATOR;
                return true;
            }

            lexer->result_symbol = _DATA_SEPARATOR;
            return true;
        }
    } else if (valid_symbols[_LINE_SEPARATOR]) {
        if (lexer->lookahead == '\n') {
            lexer->advance(lexer, false);
            lexer->result_symbol = _LINE_SEPARATOR;
            return true;
        }
    } else if (valid_symbols[_DATA_SEPARATOR]) {
        if (lexer->lookahead == '\n') {
            lexer->advance(lexer, false);
            lexer->result_symbol = _DATA_SEPARATOR;
            return true;
        }
    }

    return false;
}
