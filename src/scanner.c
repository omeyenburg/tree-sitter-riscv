#include "tree_sitter/parser.h"

#include <ctype.h>
#include <string.h>
#include <wctype.h>

enum TokenType {
    _OPERAND_SEPARATOR,
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

bool tree_sitter_mips_external_scanner_scan(void* payload,
                                            TSLexer* lexer,
                                            const bool* valid_symbols) {
    (void) payload;

    bool is_valid_operand_separator = valid_symbols[_OPERAND_SEPARATOR];
    bool is_valid_line_separator = valid_symbols[_LINE_SEPARATOR];
    bool is_valid_data_separator = valid_symbols[_DATA_SEPARATOR];

    if (lexer->eof(lexer))
        return false;

    if (is_valid_operand_separator) {
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
                // Special handling for %: distinguish between modulo operator and macro variable
                if (lexer->lookahead == '%') {
                    // Mark end at space position BEFORE peeking ahead
                    lexer->mark_end(lexer);

                    // Peek ahead to see what follows %
                    lexer->advance(lexer, false);
                    if (!lexer->eof(lexer)) {
                        if (lexer->lookahead == ' ' || lexer->lookahead == '\t' || lexer->lookahead == '%') {
                            // Space or another % after % means it's the modulo operator (like "1 % 2" or "1 %% 2")
                            // Don't produce separator, let whitespace be handled naturally
                            return false;
                        }
                        // No space after % means it's a macro variable (like "1 %2")
                        // Return operand separator
                    }
                    if (!is_valid_operand_separator)
                        return false;
                    lexer->result_symbol = _OPERAND_SEPARATOR;
                    return true;
                }

                // Don't produce separators for operators - let whitespace be handled naturally
                if (is_operator_start(lexer->lookahead)) {
                    // Special case: handle unary operators ('-', '~', '!') specially
                    if (lexer->lookahead == '-' || lexer->lookahead == '~' || lexer->lookahead == '!') {
                        // Mark end at the space position first
                        lexer->mark_end(lexer);

                        // Peek ahead to check what follows the operator
                        lexer->advance(lexer, false);
                        bool is_digit = !lexer->eof(lexer) && isdigit(lexer->lookahead);
                        bool is_unary_expression = !lexer->eof(lexer) && (lexer->lookahead == '-' || lexer->lookahead == '~' || lexer->lookahead == '!');
                        bool is_unary_on_paren = !lexer->eof(lexer) && lexer->lookahead == '(';

                        // Check if there's a space after the operator, which would make it a binary operator
                        bool has_space_after = !lexer->eof(lexer) && (lexer->lookahead == ' ' || lexer->lookahead == '\t');

                        // Special case for '-': if we have '-- ' (double minus followed by space), treat as subtraction
                        // (i.e., "1 -- 1" should parse as "1 - (-1)" not as nested unary)
                        if (is_unary_expression && lexer->lookahead == '-') {
                            // We saw '- -', now check if there's a space after the second '-'
                            if (!lexer->eof(lexer)) {
                                lexer->advance(lexer, false);
                                has_space_after = !lexer->eof(lexer) && (lexer->lookahead == ' ' || lexer->lookahead == '\t');
                            }
                        }

                        // If the unary operator is immediately followed by a digit, another unary, or paren without space,
                        // treat the previous space as operand separator (it's part of the expression)
                        if ((is_digit || is_unary_expression || is_unary_on_paren) && !has_space_after && is_valid_operand_separator) {
                            lexer->result_symbol = _OPERAND_SEPARATOR;
                            return true;
                        }
                        // Otherwise, it's a binary operator - don't produce separator, let whitespace be skipped
                        return false;
                    } else {
                        // For non-unary binary operators (+, *, %, &, |, etc.), don't produce separator
                        // Let whitespace be handled naturally by the parser
                        return false;
                    }
                }

                // If we see something that looks like the start of an operand,
                // then the space we found should separate operands
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
        // Handle CRLF
        if (lexer->lookahead == '\r') {
            lexer->advance(lexer, false);
            if (lexer->eof(lexer))
                return false;
        }

        if (lexer->lookahead == '\n') {
            lexer->advance(lexer, false);

            // If both symbols are valid, need to determine which one
            if (is_valid_line_separator && is_valid_data_separator) {
                // Skip whitespace after newline
                while (!lexer->eof(lexer) &&
                       (lexer->lookahead == ' ' || lexer->lookahead == '\t')) {
                    lexer->advance(lexer, false);
                }
                if (lexer->eof(lexer)) {
                    // At EOF after newline, prefer LINE_SEPARATOR
                    lexer->result_symbol = _LINE_SEPARATOR;
                    lexer->mark_end(lexer);
                    return true;
                }

                // Check if it's a line separator (starts new line/directive) or data separator
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

            // Only one symbol is valid
            if (is_valid_line_separator) {
                lexer->result_symbol = _LINE_SEPARATOR;
            } else {
                lexer->result_symbol = _DATA_SEPARATOR;
            }
            lexer->mark_end(lexer);
            return true;
        }
    }

    return false;
}
