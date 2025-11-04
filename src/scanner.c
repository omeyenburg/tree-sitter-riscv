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

bool tree_sitter_mips_external_scanner_scan(void* payload,
                                            TSLexer* lexer,
                                            const bool* valid_symbols) {
    (void) payload;

    if (lexer->eof(lexer))
        return false;

    bool is_valid_operand_separator = valid_symbols[_OPERAND_SEPARATOR];
    bool is_valid_operator_space = valid_symbols[_OPERATOR_SPACE];
    bool is_valid_line_separator = valid_symbols[_LINE_SEPARATOR];
    bool is_valid_data_separator = valid_symbols[_DATA_SEPARATOR];

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
                // Special handling for %: distinguish between modulo operator and macro
                // variable
                if (lexer->lookahead == '%') {
                    // Mark end at space position BEFORE peeking ahead
                    lexer->mark_end(lexer);

                    // Peek ahead to see what follows %
                    lexer->advance(lexer, false);
                    if (!lexer->eof(lexer)) {
                        if (lexer->lookahead == ' ' || lexer->lookahead == '\t' ||
                            lexer->lookahead == '%') {
                            // Space or another % after % means it's the modulo operator
                            // (like "1 % 2" or "1 %% 2")
                            if (is_valid_operator_space) {
                                lexer->result_symbol = _OPERATOR_SPACE;
                                return true;
                            }
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

                // Don't produce separators for operators, handle whitespace naturally
                if (is_operator_start(lexer->lookahead)) {
                    // Mark end at the space position first
                    lexer->mark_end(lexer);
                    
                    // Since we're here, there WAS a space before this operator
                    // Peek ahead to check what follows the operator
                    int operator_char = lexer->lookahead;
                    lexer->advance(lexer, false);
                    
                    // Check what follows the first operator
                    bool next_is_space = !lexer->eof(lexer) &&
                        (lexer->lookahead == ' ' || lexer->lookahead == '\t');
                    bool next_is_operator = !lexer->eof(lexer) && is_operator_start(lexer->lookahead);
                    
                    // Special handling for unary-capable operators ('-', '~', '!')
                    if (operator_char == '-' || operator_char == '~' || operator_char == '!') {
                        // If there's space after the first operator, it's definitely binary
                        if (next_is_space) {
                            if (is_valid_operator_space) {
                                lexer->result_symbol = _OPERATOR_SPACE;
                                return true;
                            }
                        } else if (next_is_operator) {
                            // Another operator directly follows (like --)
                            // Need to peek further to see what comes after it
                            lexer->advance(lexer, false);
                            bool after_second_is_space = !lexer->eof(lexer) &&
                                (lexer->lookahead == ' ' || lexer->lookahead == '\t');
                            
                            if (after_second_is_space) {
                                // Pattern like "-- " suggests binary with unary: 1 -- 2 → 1 - (-2)
                                if (is_valid_operator_space) {
                                    lexer->result_symbol = _OPERATOR_SPACE;
                                    return true;
                                }
                            } else {
                                // Pattern like "--x" suggests unary operand: 1 --x → 1 and --x
                                if (is_valid_operand_separator) {
                                    lexer->result_symbol = _OPERAND_SEPARATOR;
                                    return true;
                                }
                            }
                        } else {
                            // No space after operator, and no operator - unary operand
                            if (is_valid_operand_separator) {
                                lexer->result_symbol = _OPERAND_SEPARATOR;
                                return true;
                            }
                        }
                        return false;
                    } else {
                        // For non-unary binary operators, always produce operator space
                        if (is_valid_operator_space) {
                            lexer->result_symbol = _OPERATOR_SPACE;
                            return true;
                        }
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
                       (lexer->lookahead == ' ' || lexer->lookahead == '\t' ||
                        lexer->lookahead == '\r')) {
                    lexer->advance(lexer, false);
                }
                if (lexer->eof(lexer)) {
                    // At EOF after newline, prefer LINE_SEPARATOR
                    lexer->result_symbol = _LINE_SEPARATOR;
                    lexer->mark_end(lexer);
                    return true;
                }

                // Check for comments, semicolon - these always start new statements
                if (lexer->lookahead == '#' || lexer->lookahead == '/' ||
                    lexer->lookahead == ';') {
                    lexer->result_symbol = _LINE_SEPARATOR;
                    lexer->mark_end(lexer);
                    return true;
                }

                // Check for numeric label: digits followed by ':'
                if (iswdigit(lexer->lookahead)) {
                    // Peek ahead to see if this is a numeric label (e.g., "1:")
                    lexer->mark_end(lexer); // Mark current position

                    // Skip digits
                    while (!lexer->eof(lexer) && iswdigit(lexer->lookahead)) {
                        lexer->advance(lexer, false);
                    }

                    // Check if followed by ':'
                    if (!lexer->eof(lexer) && lexer->lookahead == ':') {
                        // It's a numeric label - return LINE_SEPARATOR
                        lexer->result_symbol = _LINE_SEPARATOR;
                        return true;
                    }

                    // Not a numeric label - it's numeric data continuation
                    // Return DATA_SEPARATOR
                    lexer->result_symbol = _DATA_SEPARATOR;
                    return true;
                }

                // Check if it's a line separator (starts new line/directive) or data
                // separator
                if (lexer->lookahead == '\n' || lexer->lookahead == '.' ||
                    lexer->lookahead == '_' || isalpha(lexer->lookahead)) {
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
