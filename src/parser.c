#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 516
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 156
#define ALIAS_COUNT 0
#define TOKEN_COUNT 92
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 28

enum ts_symbol_identifiers {
  anon_sym_SEMI = 1,
  anon_sym_CR = 2,
  anon_sym_LF = 3,
  aux_sym__statement_token1 = 4,
  aux_sym__whitespace_token1 = 5,
  sym_line_comment = 6,
  sym_block_comment = 7,
  anon_sym_LPAREN = 8,
  anon_sym_SPACE = 9,
  anon_sym_TAB = 10,
  anon_sym_RPAREN = 11,
  sym_macro_mnemonic = 12,
  anon_sym_COMMA = 13,
  anon_sym_DOTbyte = 14,
  anon_sym_DOT2byte = 15,
  anon_sym_DOTshort = 16,
  anon_sym_DOThalf = 17,
  anon_sym_DOThword = 18,
  anon_sym_DOT4byte = 19,
  anon_sym_DOTword = 20,
  anon_sym_DOTint = 21,
  anon_sym_DOT8byte = 22,
  anon_sym_DOTdword = 23,
  anon_sym_DOTlong = 24,
  anon_sym_DOTquad = 25,
  anon_sym_DOTcomm = 26,
  anon_sym_DOTlcomm = 27,
  anon_sym_DOTalign = 28,
  anon_sym_DOTbalign = 29,
  anon_sym_DOTp2align = 30,
  anon_sym_DOTsleb128 = 31,
  anon_sym_DOTuleb128 = 32,
  anon_sym_DOTdtprelword = 33,
  anon_sym_DOTdtpreldword = 34,
  anon_sym_DOTskip = 35,
  anon_sym_DOTspace = 36,
  anon_sym_DOTfloat = 37,
  anon_sym_DOTdouble = 38,
  anon_sym_DOTsingle = 39,
  aux_sym__string_directive_token1 = 40,
  anon_sym_DOTasciz = 41,
  anon_sym_DOTascii = 42,
  anon_sym_DOTasciiz = 43,
  anon_sym_DOTstring = 44,
  anon_sym_DOTstringz = 45,
  aux_sym__control_directive_token1 = 46,
  aux_sym_control_mnemonic_token1 = 47,
  aux_sym__control_operand_separator_token1 = 48,
  aux_sym_section_type_token1 = 49,
  aux_sym_option_flag_token1 = 50,
  sym_opcode = 51,
  sym_assignment_operator = 52,
  sym_logical_or_operator = 53,
  sym_logical_and_operator = 54,
  sym_bitwise_or_operator = 55,
  sym_bitwise_xor_operator = 56,
  sym_bitwise_and_operator = 57,
  sym_equality_operator = 58,
  sym_relational_operator = 59,
  sym_shift_operator = 60,
  sym_additive_operator = 61,
  sym_multiplicative_operator = 62,
  sym_unary_minus_operator = 63,
  sym_bitwise_not_operator = 64,
  sym_logical_not_operator = 65,
  sym_relocation_type = 66,
  sym_octal = 67,
  sym_binary = 68,
  aux_sym_decimal_token1 = 69,
  sym_hexadecimal = 70,
  sym_float = 71,
  anon_sym_SQUOTE = 72,
  aux_sym_char_token1 = 73,
  anon_sym_DQUOTE = 74,
  aux_sym_string_token1 = 75,
  sym__escape_sequence = 76,
  sym_register = 77,
  sym_macro_variable = 78,
  sym_macro_parameter = 79,
  sym_macro_name = 80,
  sym_local_label = 81,
  aux_sym_local_label_reference_token1 = 82,
  sym_global_label = 83,
  aux_sym_symbol_token1 = 84,
  sym_global_numeric_label = 85,
  sym_local_numeric_label = 86,
  sym_local_numeric_label_reference = 87,
  sym__operand_separator = 88,
  sym__operator_space = 89,
  sym__line_separator = 90,
  sym__data_separator = 91,
  sym_program = 92,
  sym__statement = 93,
  sym__comment = 94,
  sym_directive = 95,
  sym__macro_directive = 96,
  sym_macro_parameters = 97,
  sym__numeric_directive = 98,
  sym_numeric_mnemonic = 99,
  sym_numeric_operands = 100,
  sym__string_directive = 101,
  sym_string_mnemonic = 102,
  sym__string_operand = 103,
  sym__control_directive = 104,
  sym_control_mnemonic = 105,
  sym_control_operands = 106,
  sym__control_operand = 107,
  sym__control_operand_separator = 108,
  sym_section_type = 109,
  sym_option_flag = 110,
  sym_instruction = 111,
  sym_operands = 112,
  sym__operand = 113,
  sym__call_expression = 114,
  sym__assignment_expression = 115,
  sym__wrapped_assignment_expression = 116,
  sym__logical_or_expression = 117,
  sym__wrapped_logical_or_expression = 118,
  sym__logical_and_expression = 119,
  sym__wrapped_logical_and_expression = 120,
  sym__bitwise_or_expression = 121,
  sym__wrapped_bitwise_or_expression = 122,
  sym__bitwise_xor_expression = 123,
  sym__wrapped_bitwise_xor_expression = 124,
  sym__bitwise_and_expression = 125,
  sym__wrapped_bitwise_and_expression = 126,
  sym__equality_expression = 127,
  sym__wrapped_equality_expression = 128,
  sym__relational_expression = 129,
  sym__wrapped_relational_expression = 130,
  sym__shift_expression = 131,
  sym__wrapped_shift_expression = 132,
  sym__additive_expression = 133,
  sym__wrapped_additive_expression = 134,
  sym__multiplicative_expression = 135,
  sym__wrapped_multiplicative_expression = 136,
  sym__simple_expression = 137,
  sym_parenthesized_expression = 138,
  sym_unary_expression = 139,
  sym_relocation_expression = 140,
  sym_decimal = 141,
  sym_char = 142,
  sym_string = 143,
  sym__label = 144,
  sym_local_label_reference = 145,
  sym_symbol = 146,
  sym_address = 147,
  aux_sym_program_repeat1 = 148,
  aux_sym_macro_parameters_repeat1 = 149,
  aux_sym__numeric_directive_repeat1 = 150,
  aux_sym_numeric_operands_repeat1 = 151,
  aux_sym_numeric_operands_repeat2 = 152,
  aux_sym_control_operands_repeat1 = 153,
  aux_sym_operands_repeat1 = 154,
  aux_sym_string_repeat1 = 155,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_CR] = "\r",
  [anon_sym_LF] = "\n",
  [aux_sym__statement_token1] = "_statement_token1",
  [aux_sym__whitespace_token1] = "_whitespace_token1",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [anon_sym_LPAREN] = "(",
  [anon_sym_SPACE] = " ",
  [anon_sym_TAB] = "\t",
  [anon_sym_RPAREN] = ")",
  [sym_macro_mnemonic] = "macro_mnemonic",
  [anon_sym_COMMA] = ",",
  [anon_sym_DOTbyte] = ".byte",
  [anon_sym_DOT2byte] = ".2byte",
  [anon_sym_DOTshort] = ".short",
  [anon_sym_DOThalf] = ".half",
  [anon_sym_DOThword] = ".hword",
  [anon_sym_DOT4byte] = ".4byte",
  [anon_sym_DOTword] = ".word",
  [anon_sym_DOTint] = ".int",
  [anon_sym_DOT8byte] = ".8byte",
  [anon_sym_DOTdword] = ".dword",
  [anon_sym_DOTlong] = ".long",
  [anon_sym_DOTquad] = ".quad",
  [anon_sym_DOTcomm] = ".comm",
  [anon_sym_DOTlcomm] = ".lcomm",
  [anon_sym_DOTalign] = ".align",
  [anon_sym_DOTbalign] = ".balign",
  [anon_sym_DOTp2align] = ".p2align",
  [anon_sym_DOTsleb128] = ".sleb128",
  [anon_sym_DOTuleb128] = ".uleb128",
  [anon_sym_DOTdtprelword] = ".dtprelword",
  [anon_sym_DOTdtpreldword] = ".dtpreldword",
  [anon_sym_DOTskip] = ".skip",
  [anon_sym_DOTspace] = ".space",
  [anon_sym_DOTfloat] = ".float",
  [anon_sym_DOTdouble] = ".double",
  [anon_sym_DOTsingle] = ".single",
  [aux_sym__string_directive_token1] = "_string_directive_token1",
  [anon_sym_DOTasciz] = ".asciz",
  [anon_sym_DOTascii] = ".ascii",
  [anon_sym_DOTasciiz] = ".asciiz",
  [anon_sym_DOTstring] = ".string",
  [anon_sym_DOTstringz] = ".stringz",
  [aux_sym__control_directive_token1] = "_control_directive_token1",
  [aux_sym_control_mnemonic_token1] = "control_mnemonic_token1",
  [aux_sym__control_operand_separator_token1] = "_control_operand_separator_token1",
  [aux_sym_section_type_token1] = "section_type_token1",
  [aux_sym_option_flag_token1] = "option_flag_token1",
  [sym_opcode] = "opcode",
  [sym_assignment_operator] = "assignment_operator",
  [sym_logical_or_operator] = "logical_or_operator",
  [sym_logical_and_operator] = "logical_and_operator",
  [sym_bitwise_or_operator] = "bitwise_or_operator",
  [sym_bitwise_xor_operator] = "bitwise_xor_operator",
  [sym_bitwise_and_operator] = "bitwise_and_operator",
  [sym_equality_operator] = "equality_operator",
  [sym_relational_operator] = "relational_operator",
  [sym_shift_operator] = "shift_operator",
  [sym_additive_operator] = "additive_operator",
  [sym_multiplicative_operator] = "multiplicative_operator",
  [sym_unary_minus_operator] = "unary_minus_operator",
  [sym_bitwise_not_operator] = "bitwise_not_operator",
  [sym_logical_not_operator] = "logical_not_operator",
  [sym_relocation_type] = "relocation_type",
  [sym_octal] = "octal",
  [sym_binary] = "binary",
  [aux_sym_decimal_token1] = "decimal_token1",
  [sym_hexadecimal] = "hexadecimal",
  [sym_float] = "float",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_char_token1] = "char_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym__escape_sequence] = "_escape_sequence",
  [sym_register] = "register",
  [sym_macro_variable] = "macro_variable",
  [sym_macro_parameter] = "macro_parameter",
  [sym_macro_name] = "macro_name",
  [sym_local_label] = "local_label",
  [aux_sym_local_label_reference_token1] = "local_label_reference_token1",
  [sym_global_label] = "global_label",
  [aux_sym_symbol_token1] = "symbol_token1",
  [sym_global_numeric_label] = "global_numeric_label",
  [sym_local_numeric_label] = "local_numeric_label",
  [sym_local_numeric_label_reference] = "local_numeric_label_reference",
  [sym__operand_separator] = "_operand_separator",
  [sym__operator_space] = "_operator_space",
  [sym__line_separator] = "_line_separator",
  [sym__data_separator] = "_data_separator",
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym__comment] = "_comment",
  [sym_directive] = "directive",
  [sym__macro_directive] = "_macro_directive",
  [sym_macro_parameters] = "macro_parameters",
  [sym__numeric_directive] = "_numeric_directive",
  [sym_numeric_mnemonic] = "numeric_mnemonic",
  [sym_numeric_operands] = "numeric_operands",
  [sym__string_directive] = "_string_directive",
  [sym_string_mnemonic] = "string_mnemonic",
  [sym__string_operand] = "_string_operand",
  [sym__control_directive] = "_control_directive",
  [sym_control_mnemonic] = "control_mnemonic",
  [sym_control_operands] = "control_operands",
  [sym__control_operand] = "_control_operand",
  [sym__control_operand_separator] = "_control_operand_separator",
  [sym_section_type] = "section_type",
  [sym_option_flag] = "option_flag",
  [sym_instruction] = "instruction",
  [sym_operands] = "operands",
  [sym__operand] = "_operand",
  [sym__call_expression] = "_call_expression",
  [sym__assignment_expression] = "binary_expression",
  [sym__wrapped_assignment_expression] = "_wrapped_assignment_expression",
  [sym__logical_or_expression] = "binary_expression",
  [sym__wrapped_logical_or_expression] = "_wrapped_logical_or_expression",
  [sym__logical_and_expression] = "binary_expression",
  [sym__wrapped_logical_and_expression] = "_wrapped_logical_and_expression",
  [sym__bitwise_or_expression] = "binary_expression",
  [sym__wrapped_bitwise_or_expression] = "_wrapped_bitwise_or_expression",
  [sym__bitwise_xor_expression] = "binary_expression",
  [sym__wrapped_bitwise_xor_expression] = "_wrapped_bitwise_xor_expression",
  [sym__bitwise_and_expression] = "binary_expression",
  [sym__wrapped_bitwise_and_expression] = "_wrapped_bitwise_and_expression",
  [sym__equality_expression] = "binary_expression",
  [sym__wrapped_equality_expression] = "_wrapped_equality_expression",
  [sym__relational_expression] = "binary_expression",
  [sym__wrapped_relational_expression] = "_wrapped_relational_expression",
  [sym__shift_expression] = "binary_expression",
  [sym__wrapped_shift_expression] = "_wrapped_shift_expression",
  [sym__additive_expression] = "binary_expression",
  [sym__wrapped_additive_expression] = "_wrapped_additive_expression",
  [sym__multiplicative_expression] = "binary_expression",
  [sym__wrapped_multiplicative_expression] = "_wrapped_multiplicative_expression",
  [sym__simple_expression] = "_simple_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_relocation_expression] = "relocation_expression",
  [sym_decimal] = "decimal",
  [sym_char] = "char",
  [sym_string] = "string",
  [sym__label] = "_label",
  [sym_local_label_reference] = "local_label_reference",
  [sym_symbol] = "symbol",
  [sym_address] = "address",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_macro_parameters_repeat1] = "macro_parameters_repeat1",
  [aux_sym__numeric_directive_repeat1] = "_numeric_directive_repeat1",
  [aux_sym_numeric_operands_repeat1] = "numeric_operands_repeat1",
  [aux_sym_numeric_operands_repeat2] = "numeric_operands_repeat2",
  [aux_sym_control_operands_repeat1] = "control_operands_repeat1",
  [aux_sym_operands_repeat1] = "operands_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_CR] = anon_sym_CR,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym__statement_token1] = aux_sym__statement_token1,
  [aux_sym__whitespace_token1] = aux_sym__whitespace_token1,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_TAB] = anon_sym_TAB,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_macro_mnemonic] = sym_macro_mnemonic,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DOTbyte] = anon_sym_DOTbyte,
  [anon_sym_DOT2byte] = anon_sym_DOT2byte,
  [anon_sym_DOTshort] = anon_sym_DOTshort,
  [anon_sym_DOThalf] = anon_sym_DOThalf,
  [anon_sym_DOThword] = anon_sym_DOThword,
  [anon_sym_DOT4byte] = anon_sym_DOT4byte,
  [anon_sym_DOTword] = anon_sym_DOTword,
  [anon_sym_DOTint] = anon_sym_DOTint,
  [anon_sym_DOT8byte] = anon_sym_DOT8byte,
  [anon_sym_DOTdword] = anon_sym_DOTdword,
  [anon_sym_DOTlong] = anon_sym_DOTlong,
  [anon_sym_DOTquad] = anon_sym_DOTquad,
  [anon_sym_DOTcomm] = anon_sym_DOTcomm,
  [anon_sym_DOTlcomm] = anon_sym_DOTlcomm,
  [anon_sym_DOTalign] = anon_sym_DOTalign,
  [anon_sym_DOTbalign] = anon_sym_DOTbalign,
  [anon_sym_DOTp2align] = anon_sym_DOTp2align,
  [anon_sym_DOTsleb128] = anon_sym_DOTsleb128,
  [anon_sym_DOTuleb128] = anon_sym_DOTuleb128,
  [anon_sym_DOTdtprelword] = anon_sym_DOTdtprelword,
  [anon_sym_DOTdtpreldword] = anon_sym_DOTdtpreldword,
  [anon_sym_DOTskip] = anon_sym_DOTskip,
  [anon_sym_DOTspace] = anon_sym_DOTspace,
  [anon_sym_DOTfloat] = anon_sym_DOTfloat,
  [anon_sym_DOTdouble] = anon_sym_DOTdouble,
  [anon_sym_DOTsingle] = anon_sym_DOTsingle,
  [aux_sym__string_directive_token1] = aux_sym__string_directive_token1,
  [anon_sym_DOTasciz] = anon_sym_DOTasciz,
  [anon_sym_DOTascii] = anon_sym_DOTascii,
  [anon_sym_DOTasciiz] = anon_sym_DOTasciiz,
  [anon_sym_DOTstring] = anon_sym_DOTstring,
  [anon_sym_DOTstringz] = anon_sym_DOTstringz,
  [aux_sym__control_directive_token1] = aux_sym__control_directive_token1,
  [aux_sym_control_mnemonic_token1] = aux_sym_control_mnemonic_token1,
  [aux_sym__control_operand_separator_token1] = aux_sym__control_operand_separator_token1,
  [aux_sym_section_type_token1] = aux_sym_section_type_token1,
  [aux_sym_option_flag_token1] = aux_sym_option_flag_token1,
  [sym_opcode] = sym_opcode,
  [sym_assignment_operator] = sym_assignment_operator,
  [sym_logical_or_operator] = sym_logical_or_operator,
  [sym_logical_and_operator] = sym_logical_and_operator,
  [sym_bitwise_or_operator] = sym_bitwise_or_operator,
  [sym_bitwise_xor_operator] = sym_bitwise_xor_operator,
  [sym_bitwise_and_operator] = sym_bitwise_and_operator,
  [sym_equality_operator] = sym_equality_operator,
  [sym_relational_operator] = sym_relational_operator,
  [sym_shift_operator] = sym_shift_operator,
  [sym_additive_operator] = sym_additive_operator,
  [sym_multiplicative_operator] = sym_multiplicative_operator,
  [sym_unary_minus_operator] = sym_unary_minus_operator,
  [sym_bitwise_not_operator] = sym_bitwise_not_operator,
  [sym_logical_not_operator] = sym_logical_not_operator,
  [sym_relocation_type] = sym_relocation_type,
  [sym_octal] = sym_octal,
  [sym_binary] = sym_binary,
  [aux_sym_decimal_token1] = aux_sym_decimal_token1,
  [sym_hexadecimal] = sym_hexadecimal,
  [sym_float] = sym_float,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_char_token1] = aux_sym_char_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym__escape_sequence] = sym__escape_sequence,
  [sym_register] = sym_register,
  [sym_macro_variable] = sym_macro_variable,
  [sym_macro_parameter] = sym_macro_parameter,
  [sym_macro_name] = sym_macro_name,
  [sym_local_label] = sym_local_label,
  [aux_sym_local_label_reference_token1] = aux_sym_local_label_reference_token1,
  [sym_global_label] = sym_global_label,
  [aux_sym_symbol_token1] = aux_sym_symbol_token1,
  [sym_global_numeric_label] = sym_global_numeric_label,
  [sym_local_numeric_label] = sym_local_numeric_label,
  [sym_local_numeric_label_reference] = sym_local_numeric_label_reference,
  [sym__operand_separator] = sym__operand_separator,
  [sym__operator_space] = sym__operator_space,
  [sym__line_separator] = sym__line_separator,
  [sym__data_separator] = sym__data_separator,
  [sym_program] = sym_program,
  [sym__statement] = sym__statement,
  [sym__comment] = sym__comment,
  [sym_directive] = sym_directive,
  [sym__macro_directive] = sym__macro_directive,
  [sym_macro_parameters] = sym_macro_parameters,
  [sym__numeric_directive] = sym__numeric_directive,
  [sym_numeric_mnemonic] = sym_numeric_mnemonic,
  [sym_numeric_operands] = sym_numeric_operands,
  [sym__string_directive] = sym__string_directive,
  [sym_string_mnemonic] = sym_string_mnemonic,
  [sym__string_operand] = sym__string_operand,
  [sym__control_directive] = sym__control_directive,
  [sym_control_mnemonic] = sym_control_mnemonic,
  [sym_control_operands] = sym_control_operands,
  [sym__control_operand] = sym__control_operand,
  [sym__control_operand_separator] = sym__control_operand_separator,
  [sym_section_type] = sym_section_type,
  [sym_option_flag] = sym_option_flag,
  [sym_instruction] = sym_instruction,
  [sym_operands] = sym_operands,
  [sym__operand] = sym__operand,
  [sym__call_expression] = sym__call_expression,
  [sym__assignment_expression] = sym__assignment_expression,
  [sym__wrapped_assignment_expression] = sym__wrapped_assignment_expression,
  [sym__logical_or_expression] = sym__assignment_expression,
  [sym__wrapped_logical_or_expression] = sym__wrapped_logical_or_expression,
  [sym__logical_and_expression] = sym__assignment_expression,
  [sym__wrapped_logical_and_expression] = sym__wrapped_logical_and_expression,
  [sym__bitwise_or_expression] = sym__assignment_expression,
  [sym__wrapped_bitwise_or_expression] = sym__wrapped_bitwise_or_expression,
  [sym__bitwise_xor_expression] = sym__assignment_expression,
  [sym__wrapped_bitwise_xor_expression] = sym__wrapped_bitwise_xor_expression,
  [sym__bitwise_and_expression] = sym__assignment_expression,
  [sym__wrapped_bitwise_and_expression] = sym__wrapped_bitwise_and_expression,
  [sym__equality_expression] = sym__assignment_expression,
  [sym__wrapped_equality_expression] = sym__wrapped_equality_expression,
  [sym__relational_expression] = sym__assignment_expression,
  [sym__wrapped_relational_expression] = sym__wrapped_relational_expression,
  [sym__shift_expression] = sym__assignment_expression,
  [sym__wrapped_shift_expression] = sym__wrapped_shift_expression,
  [sym__additive_expression] = sym__assignment_expression,
  [sym__wrapped_additive_expression] = sym__wrapped_additive_expression,
  [sym__multiplicative_expression] = sym__assignment_expression,
  [sym__wrapped_multiplicative_expression] = sym__wrapped_multiplicative_expression,
  [sym__simple_expression] = sym__simple_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_relocation_expression] = sym_relocation_expression,
  [sym_decimal] = sym_decimal,
  [sym_char] = sym_char,
  [sym_string] = sym_string,
  [sym__label] = sym__label,
  [sym_local_label_reference] = sym_local_label_reference,
  [sym_symbol] = sym_symbol,
  [sym_address] = sym_address,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_macro_parameters_repeat1] = aux_sym_macro_parameters_repeat1,
  [aux_sym__numeric_directive_repeat1] = aux_sym__numeric_directive_repeat1,
  [aux_sym_numeric_operands_repeat1] = aux_sym_numeric_operands_repeat1,
  [aux_sym_numeric_operands_repeat2] = aux_sym_numeric_operands_repeat2,
  [aux_sym_control_operands_repeat1] = aux_sym_control_operands_repeat1,
  [aux_sym_operands_repeat1] = aux_sym_operands_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__whitespace_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_macro_mnemonic] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTbyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT2byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTshort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOThalf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOThword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT4byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT8byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTdword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTlong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTquad] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTcomm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTlcomm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTalign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTbalign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTp2align] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTsleb128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTuleb128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTdtprelword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTdtpreldword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTskip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTspace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTfloat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTdouble] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTsingle] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_directive_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOTasciz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTascii] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTasciiz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTstring] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTstringz] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__control_directive_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_control_mnemonic_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__control_operand_separator_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_type_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_option_flag_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_logical_or_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_logical_and_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_bitwise_or_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_bitwise_xor_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_bitwise_and_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_equality_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_relational_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_shift_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_additive_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_multiplicative_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_minus_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_bitwise_not_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_logical_not_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_relocation_type] = {
    .visible = true,
    .named = true,
  },
  [sym_octal] = {
    .visible = true,
    .named = true,
  },
  [sym_binary] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_decimal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_hexadecimal] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_char_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym_register] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_name] = {
    .visible = true,
    .named = true,
  },
  [sym_local_label] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_local_label_reference_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_global_label] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_symbol_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_global_numeric_label] = {
    .visible = true,
    .named = true,
  },
  [sym_local_numeric_label] = {
    .visible = true,
    .named = true,
  },
  [sym_local_numeric_label_reference] = {
    .visible = true,
    .named = true,
  },
  [sym__operand_separator] = {
    .visible = false,
    .named = true,
  },
  [sym__operator_space] = {
    .visible = false,
    .named = true,
  },
  [sym__line_separator] = {
    .visible = false,
    .named = true,
  },
  [sym__data_separator] = {
    .visible = false,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym__macro_directive] = {
    .visible = false,
    .named = true,
  },
  [sym_macro_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym__numeric_directive] = {
    .visible = false,
    .named = true,
  },
  [sym_numeric_mnemonic] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_operands] = {
    .visible = true,
    .named = true,
  },
  [sym__string_directive] = {
    .visible = false,
    .named = true,
  },
  [sym_string_mnemonic] = {
    .visible = true,
    .named = true,
  },
  [sym__string_operand] = {
    .visible = false,
    .named = true,
  },
  [sym__control_directive] = {
    .visible = false,
    .named = true,
  },
  [sym_control_mnemonic] = {
    .visible = true,
    .named = true,
  },
  [sym_control_operands] = {
    .visible = true,
    .named = true,
  },
  [sym__control_operand] = {
    .visible = false,
    .named = true,
  },
  [sym__control_operand_separator] = {
    .visible = false,
    .named = true,
  },
  [sym_section_type] = {
    .visible = true,
    .named = true,
  },
  [sym_option_flag] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_operands] = {
    .visible = true,
    .named = true,
  },
  [sym__operand] = {
    .visible = false,
    .named = true,
  },
  [sym__call_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__assignment_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__wrapped_assignment_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__logical_or_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__wrapped_logical_or_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__logical_and_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__wrapped_logical_and_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__bitwise_or_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__wrapped_bitwise_or_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__bitwise_xor_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__wrapped_bitwise_xor_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__bitwise_and_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__wrapped_bitwise_and_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__equality_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__wrapped_equality_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__relational_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__wrapped_relational_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__shift_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__wrapped_shift_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__additive_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__wrapped_additive_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__multiplicative_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__wrapped_multiplicative_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__simple_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_relocation_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal] = {
    .visible = true,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__label] = {
    .visible = false,
    .named = true,
  },
  [sym_local_label_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_address] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_macro_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__numeric_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_operands_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_operands_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_control_operands_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_operands_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_argument = 1,
  field_base = 2,
  field_left = 3,
  field_mnemonic = 4,
  field_name = 5,
  field_offset = 6,
  field_opcode = 7,
  field_operand = 8,
  field_operands = 9,
  field_operator = 10,
  field_parameters = 11,
  field_right = 12,
  field_string = 13,
  field_type = 14,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_base] = "base",
  [field_left] = "left",
  [field_mnemonic] = "mnemonic",
  [field_name] = "name",
  [field_offset] = "offset",
  [field_opcode] = "opcode",
  [field_operand] = "operand",
  [field_operands] = "operands",
  [field_operator] = "operator",
  [field_parameters] = "parameters",
  [field_right] = "right",
  [field_string] = "string",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 3},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 2},
  [5] = {.index = 8, .length = 1},
  [6] = {.index = 9, .length = 2},
  [7] = {.index = 11, .length = 2},
  [8] = {.index = 13, .length = 2},
  [9] = {.index = 15, .length = 1},
  [10] = {.index = 16, .length = 2},
  [11] = {.index = 18, .length = 3},
  [12] = {.index = 21, .length = 2},
  [13] = {.index = 23, .length = 2},
  [14] = {.index = 25, .length = 2},
  [15] = {.index = 27, .length = 1},
  [16] = {.index = 28, .length = 2},
  [17] = {.index = 30, .length = 2},
  [18] = {.index = 32, .length = 3},
  [19] = {.index = 35, .length = 1},
  [20] = {.index = 36, .length = 1},
  [21] = {.index = 37, .length = 1},
  [22] = {.index = 38, .length = 2},
  [23] = {.index = 40, .length = 3},
  [24] = {.index = 43, .length = 2},
  [25] = {.index = 45, .length = 2},
  [26] = {.index = 47, .length = 2},
  [27] = {.index = 49, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_opcode, 0},
  [1] =
    {field_mnemonic, 0, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_parameters, 0, .inherited = true},
  [4] =
    {field_mnemonic, 0, .inherited = true},
    {field_operands, 0, .inherited = true},
  [6] =
    {field_mnemonic, 0, .inherited = true},
    {field_string, 0, .inherited = true},
  [8] =
    {field_mnemonic, 0},
  [9] =
    {field_opcode, 0},
    {field_operands, 1, .inherited = true},
  [11] =
    {field_mnemonic, 0},
    {field_name, 2},
  [13] =
    {field_opcode, 0},
    {field_operands, 2},
  [15] =
    {field_operand, 0},
  [16] =
    {field_opcode, 0},
    {field_operands, 2, .inherited = true},
  [18] =
    {field_left, 0, .inherited = true},
    {field_operator, 0, .inherited = true},
    {field_right, 0, .inherited = true},
  [21] =
    {field_mnemonic, 0},
    {field_operands, 2},
  [23] =
    {field_argument, 1},
    {field_operator, 0},
  [25] =
    {field_operand, 0},
    {field_operand, 1, .inherited = true},
  [27] =
    {field_operands, 1},
  [28] =
    {field_mnemonic, 0},
    {field_string, 2},
  [30] =
    {field_mnemonic, 0},
    {field_operands, 3},
  [32] =
    {field_mnemonic, 0},
    {field_name, 2},
    {field_parameters, 4},
  [35] =
    {field_base, 1},
  [36] =
    {field_argument, 1},
  [37] =
    {field_operand, 1},
  [38] =
    {field_operand, 0, .inherited = true},
    {field_operand, 1, .inherited = true},
  [40] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [43] =
    {field_argument, 2},
    {field_type, 0},
  [45] =
    {field_base, 2},
    {field_offset, 0},
  [47] =
    {field_offset, 0},
    {field_operands, 2},
  [49] =
    {field_mnemonic, 0},
    {field_name, 2},
    {field_parameters, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 9,
  [16] = 13,
  [17] = 14,
  [18] = 7,
  [19] = 13,
  [20] = 14,
  [21] = 14,
  [22] = 14,
  [23] = 13,
  [24] = 13,
  [25] = 14,
  [26] = 13,
  [27] = 27,
  [28] = 28,
  [29] = 27,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 36,
  [48] = 37,
  [49] = 36,
  [50] = 37,
  [51] = 38,
  [52] = 39,
  [53] = 40,
  [54] = 41,
  [55] = 42,
  [56] = 43,
  [57] = 44,
  [58] = 45,
  [59] = 46,
  [60] = 36,
  [61] = 37,
  [62] = 38,
  [63] = 39,
  [64] = 40,
  [65] = 41,
  [66] = 42,
  [67] = 43,
  [68] = 44,
  [69] = 31,
  [70] = 46,
  [71] = 36,
  [72] = 37,
  [73] = 38,
  [74] = 39,
  [75] = 40,
  [76] = 41,
  [77] = 42,
  [78] = 43,
  [79] = 44,
  [80] = 45,
  [81] = 46,
  [82] = 33,
  [83] = 36,
  [84] = 36,
  [85] = 36,
  [86] = 36,
  [87] = 36,
  [88] = 33,
  [89] = 33,
  [90] = 33,
  [91] = 38,
  [92] = 39,
  [93] = 40,
  [94] = 41,
  [95] = 31,
  [96] = 42,
  [97] = 43,
  [98] = 31,
  [99] = 44,
  [100] = 45,
  [101] = 31,
  [102] = 46,
  [103] = 45,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 112,
  [152] = 126,
  [153] = 113,
  [154] = 114,
  [155] = 115,
  [156] = 111,
  [157] = 116,
  [158] = 112,
  [159] = 133,
  [160] = 117,
  [161] = 118,
  [162] = 119,
  [163] = 120,
  [164] = 121,
  [165] = 122,
  [166] = 123,
  [167] = 124,
  [168] = 127,
  [169] = 150,
  [170] = 129,
  [171] = 130,
  [172] = 134,
  [173] = 173,
  [174] = 135,
  [175] = 136,
  [176] = 109,
  [177] = 110,
  [178] = 111,
  [179] = 132,
  [180] = 113,
  [181] = 114,
  [182] = 115,
  [183] = 116,
  [184] = 117,
  [185] = 118,
  [186] = 119,
  [187] = 120,
  [188] = 121,
  [189] = 122,
  [190] = 123,
  [191] = 124,
  [192] = 125,
  [193] = 126,
  [194] = 110,
  [195] = 150,
  [196] = 129,
  [197] = 130,
  [198] = 131,
  [199] = 108,
  [200] = 132,
  [201] = 133,
  [202] = 131,
  [203] = 137,
  [204] = 138,
  [205] = 139,
  [206] = 140,
  [207] = 141,
  [208] = 142,
  [209] = 143,
  [210] = 144,
  [211] = 134,
  [212] = 135,
  [213] = 136,
  [214] = 137,
  [215] = 138,
  [216] = 139,
  [217] = 140,
  [218] = 141,
  [219] = 142,
  [220] = 143,
  [221] = 144,
  [222] = 145,
  [223] = 146,
  [224] = 109,
  [225] = 147,
  [226] = 148,
  [227] = 149,
  [228] = 128,
  [229] = 125,
  [230] = 128,
  [231] = 145,
  [232] = 146,
  [233] = 108,
  [234] = 147,
  [235] = 148,
  [236] = 149,
  [237] = 127,
  [238] = 238,
  [239] = 239,
  [240] = 116,
  [241] = 140,
  [242] = 141,
  [243] = 142,
  [244] = 143,
  [245] = 144,
  [246] = 145,
  [247] = 146,
  [248] = 150,
  [249] = 147,
  [250] = 148,
  [251] = 149,
  [252] = 129,
  [253] = 130,
  [254] = 131,
  [255] = 108,
  [256] = 132,
  [257] = 133,
  [258] = 120,
  [259] = 121,
  [260] = 122,
  [261] = 123,
  [262] = 262,
  [263] = 124,
  [264] = 125,
  [265] = 128,
  [266] = 119,
  [267] = 117,
  [268] = 134,
  [269] = 135,
  [270] = 262,
  [271] = 136,
  [272] = 239,
  [273] = 109,
  [274] = 127,
  [275] = 262,
  [276] = 239,
  [277] = 262,
  [278] = 239,
  [279] = 262,
  [280] = 239,
  [281] = 262,
  [282] = 118,
  [283] = 137,
  [284] = 138,
  [285] = 139,
  [286] = 239,
  [287] = 110,
  [288] = 111,
  [289] = 112,
  [290] = 113,
  [291] = 114,
  [292] = 115,
  [293] = 126,
  [294] = 294,
  [295] = 128,
  [296] = 128,
  [297] = 111,
  [298] = 134,
  [299] = 135,
  [300] = 136,
  [301] = 137,
  [302] = 138,
  [303] = 139,
  [304] = 140,
  [305] = 141,
  [306] = 142,
  [307] = 143,
  [308] = 144,
  [309] = 145,
  [310] = 146,
  [311] = 112,
  [312] = 147,
  [313] = 148,
  [314] = 149,
  [315] = 113,
  [316] = 114,
  [317] = 134,
  [318] = 115,
  [319] = 109,
  [320] = 148,
  [321] = 149,
  [322] = 116,
  [323] = 117,
  [324] = 118,
  [325] = 119,
  [326] = 120,
  [327] = 121,
  [328] = 122,
  [329] = 123,
  [330] = 124,
  [331] = 331,
  [332] = 125,
  [333] = 333,
  [334] = 126,
  [335] = 127,
  [336] = 150,
  [337] = 129,
  [338] = 130,
  [339] = 131,
  [340] = 108,
  [341] = 132,
  [342] = 133,
  [343] = 343,
  [344] = 344,
  [345] = 109,
  [346] = 346,
  [347] = 110,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 128,
  [352] = 128,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 371,
  [375] = 368,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 128,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 353,
  [390] = 390,
  [391] = 385,
  [392] = 392,
  [393] = 393,
  [394] = 385,
  [395] = 385,
  [396] = 396,
  [397] = 367,
  [398] = 385,
  [399] = 399,
  [400] = 365,
  [401] = 363,
  [402] = 402,
  [403] = 373,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 409,
  [411] = 411,
  [412] = 366,
  [413] = 413,
  [414] = 414,
  [415] = 408,
  [416] = 416,
  [417] = 408,
  [418] = 409,
  [419] = 419,
  [420] = 408,
  [421] = 421,
  [422] = 409,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 372,
  [427] = 427,
  [428] = 428,
  [429] = 362,
  [430] = 430,
  [431] = 431,
  [432] = 364,
  [433] = 128,
  [434] = 434,
  [435] = 368,
  [436] = 371,
  [437] = 434,
  [438] = 434,
  [439] = 439,
  [440] = 440,
  [441] = 434,
  [442] = 376,
  [443] = 443,
  [444] = 444,
  [445] = 434,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 450,
  [454] = 454,
  [455] = 455,
  [456] = 450,
  [457] = 450,
  [458] = 452,
  [459] = 448,
  [460] = 448,
  [461] = 450,
  [462] = 448,
  [463] = 448,
  [464] = 448,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 371,
  [469] = 469,
  [470] = 466,
  [471] = 471,
  [472] = 472,
  [473] = 368,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 466,
  [480] = 472,
  [481] = 466,
  [482] = 482,
  [483] = 475,
  [484] = 484,
  [485] = 472,
  [486] = 486,
  [487] = 475,
  [488] = 472,
  [489] = 489,
  [490] = 490,
  [491] = 475,
  [492] = 492,
  [493] = 471,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 465,
  [500] = 500,
  [501] = 472,
  [502] = 502,
  [503] = 475,
  [504] = 504,
  [505] = 505,
  [506] = 465,
  [507] = 466,
  [508] = 508,
  [509] = 472,
  [510] = 465,
  [511] = 511,
  [512] = 465,
  [513] = 513,
  [514] = 475,
  [515] = 494,
};

static TSCharacterRange sym__escape_sequence_character_set_1[] = {
  {'"', '"'}, {'\'', '\''}, {'0', '7'}, {'?', '?'}, {'U', 'U'}, {'\\', '\\'}, {'a', 'b'}, {'f', 'f'},
  {'n', 'n'}, {'r', 'r'}, {'t', 'v'}, {'x', 'x'},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(116);
      ADVANCE_MAP(
        '!', 465,
        '"', 488,
        '#', 134,
        '$', 46,
        '&', 451,
        '\'', 484,
        '(', 138,
        ')', 147,
        '+', 457,
        ',', 150,
        '-', 461,
        '.', 591,
        '/', 460,
        '0', 499,
        '3', 500,
        ';', 117,
        '<', 454,
        '=', 446,
        '>', 455,
        '@', 83,
        'A', 579,
        'S', 568,
        'T', 581,
        '\\', 4,
        '^', 450,
        'a', 580,
        'f', 570,
        'g', 575,
        'r', 572,
        's', 569,
        't', 582,
        'z', 573,
        '|', 449,
        '~', 463,
        '%', 458,
        '*', 458,
        'C', 578,
        'c', 578,
        'K', 577,
        'k', 577,
        'V', 577,
        'v', 577,
        '1', 501,
        '2', 501,
        'F', 571,
        'R', 571,
        'X', 571,
        'x', 571,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(502);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(583);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\t', 143,
        '\n', 124,
        '\r', 118,
        ' ', 139,
        '!', 464,
        '#', 134,
        '$', 50,
        '%', 56,
        '\'', 484,
        '(', 138,
        ',', 150,
        '-', 462,
        '.', 597,
        '/', 37,
        '0', 469,
        '3', 473,
        ';', 117,
        '=', 445,
        'A', 605,
        'S', 589,
        'T', 607,
        '\\', 11,
        'a', 606,
        'f', 592,
        'g', 600,
        'r', 594,
        's', 590,
        't', 608,
        'z', 598,
        '|', 61,
        '~', 463,
        'C', 604,
        'c', 604,
        'K', 603,
        'k', 603,
        'V', 603,
        'v', 603,
      );
      if (lookahead == 0x0b ||
          lookahead == '\f') SKIP(1);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(474);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(593);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(609);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(146);
      if (lookahead == ' ') ADVANCE(142);
      if (lookahead == ')') ADVANCE(147);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(567);
      if (lookahead == '$' ||
          lookahead == '%') ADVANCE(567);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(2);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(29);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(29);
      if (lookahead == '\r') SKIP(3);
      if (lookahead == 'U') ADVANCE(82);
      if (lookahead == 'u') ADVANCE(78);
      if (lookahead == 'x') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(494);
      if (set_contains(sym__escape_sequence_character_set_1, 12, lookahead)) ADVANCE(492);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(30);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(30);
      if (lookahead == '\r') SKIP(5);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '\n', 127,
        '\r', 121,
        '!', 464,
        '"', 488,
        '#', 134,
        '$', 50,
        '%', 56,
        '\'', 484,
        '(', 138,
        ',', 150,
        '-', 462,
        '.', 597,
        '/', 37,
        '0', 469,
        '3', 473,
        ';', 117,
        '=', 445,
        'A', 605,
        'S', 589,
        'T', 607,
        '\\', 9,
        'a', 606,
        'f', 592,
        'g', 600,
        'r', 594,
        's', 590,
        't', 608,
        'z', 598,
        '|', 61,
        '~', 463,
        'C', 604,
        'c', 604,
        'K', 603,
        'k', 603,
        'V', 603,
        'v', 603,
        '1', 474,
        '2', 474,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(7);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(593);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(609);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(7);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(7);
      if (lookahead == '\r') SKIP(8);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(1);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '\r') SKIP(10);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(31);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(31);
      if (lookahead == '\r') SKIP(12);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(32);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(32);
      if (lookahead == '\r') SKIP(14);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(33);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(33);
      if (lookahead == '\r') SKIP(16);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(34);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(34);
      if (lookahead == '\r') SKIP(18);
      if (lookahead == 'U') ADVANCE(82);
      if (lookahead == 'u') ADVANCE(78);
      if (lookahead == 'x') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(494);
      if (set_contains(sym__escape_sequence_character_set_1, 12, lookahead)) ADVANCE(492);
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(42);
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(42);
      if (lookahead == '\r') SKIP(20);
      if (lookahead == 'U') ADVANCE(82);
      if (lookahead == 'u') ADVANCE(78);
      if (lookahead == 'x') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(494);
      if (set_contains(sym__escape_sequence_character_set_1, 12, lookahead)) ADVANCE(492);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '\r') ADVANCE(22);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '\\') SKIP(24);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(22);
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(22);
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(22);
      if (lookahead == '\r') SKIP(23);
      END_STATE();
    case 25:
      if (lookahead == '\n') SKIP(27);
      END_STATE();
    case 26:
      if (lookahead == '\n') SKIP(27);
      if (lookahead == '\r') SKIP(25);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(130);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '\\') SKIP(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      END_STATE();
    case 28:
      if (lookahead == '\r') ADVANCE(135);
      if (lookahead != 0) ADVANCE(134);
      END_STATE();
    case 29:
      ADVANCE_MAP(
        '!', 465,
        '"', 488,
        '#', 134,
        '$', 46,
        '&', 451,
        '\'', 484,
        '(', 138,
        ')', 147,
        '+', 457,
        ',', 150,
        '-', 461,
        '.', 591,
        '/', 460,
        '0', 499,
        '3', 500,
        ';', 117,
        '<', 454,
        '=', 446,
        '>', 455,
        '@', 83,
        'A', 579,
        'S', 568,
        'T', 581,
        '\\', 4,
        '^', 450,
        'a', 580,
        'f', 570,
        'g', 575,
        'r', 572,
        's', 569,
        't', 582,
        'z', 573,
        '|', 449,
        '~', 463,
        '%', 458,
        '*', 458,
        'C', 578,
        'c', 578,
        'K', 577,
        'k', 577,
        'V', 577,
        'v', 577,
        '1', 501,
        '2', 501,
        'F', 571,
        'R', 571,
        'X', 571,
        'x', 571,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(502);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(583);
      END_STATE();
    case 30:
      ADVANCE_MAP(
        '!', 464,
        '"', 488,
        '#', 134,
        '$', 50,
        '%', 56,
        '\'', 484,
        '(', 138,
        '+', 84,
        ',', 439,
        '-', 462,
        '.', 596,
        '/', 37,
        '0', 469,
        '3', 473,
        ';', 117,
        '=', 445,
        '@', 83,
        'A', 605,
        'S', 589,
        'T', 607,
        '\\', 6,
        'a', 606,
        'f', 592,
        'g', 600,
        'r', 594,
        's', 590,
        't', 608,
        'z', 598,
        '|', 61,
        '~', 463,
        '\t', 30,
        ' ', 30,
        'C', 604,
        'c', 604,
        'K', 603,
        'k', 603,
        'V', 603,
        'v', 603,
        '1', 474,
        '2', 474,
        'F', 593,
        'R', 593,
        'X', 593,
        'x', 593,
      );
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(30);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(609);
      END_STATE();
    case 31:
      ADVANCE_MAP(
        '!', 464,
        '"', 488,
        '$', 50,
        '%', 56,
        '\'', 484,
        '(', 138,
        ')', 147,
        '-', 462,
        '.', 597,
        '/', 36,
        '0', 469,
        '3', 473,
        'A', 605,
        'S', 589,
        'T', 607,
        '\\', 13,
        'a', 606,
        'f', 592,
        'g', 600,
        'r', 594,
        's', 590,
        't', 608,
        'z', 598,
        '~', 463,
        'C', 604,
        'c', 604,
        'K', 603,
        'k', 603,
        'V', 603,
        'v', 603,
        '1', 474,
        '2', 474,
        'F', 593,
        'R', 593,
        'X', 593,
        'x', 593,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(31);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(609);
      END_STATE();
    case 32:
      ADVANCE_MAP(
        '!', 55,
        '#', 134,
        '&', 451,
        '(', 138,
        ',', 439,
        '/', 460,
        ';', 117,
        '<', 454,
        '=', 446,
        '>', 455,
      );
      if (lookahead == '\\') SKIP(15);
      if (lookahead == '^') ADVANCE(450);
      if (lookahead == '|') ADVANCE(449);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(458);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(457);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 33:
      ADVANCE_MAP(
        '!', 55,
        '&', 451,
        '(', 138,
        ')', 147,
        ',', 150,
        '/', 459,
        '<', 454,
        '=', 446,
        '>', 455,
      );
      if (lookahead == '\\') SKIP(17);
      if (lookahead == '^') ADVANCE(450);
      if (lookahead == '|') ADVANCE(449);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(458);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(457);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33);
      END_STATE();
    case 34:
      if (lookahead == '"') ADVANCE(488);
      if (lookahead == '/') ADVANCE(490);
      if (lookahead == '\\') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(491);
      if (lookahead != 0) ADVANCE(489);
      END_STATE();
    case 35:
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == ',') ADVANCE(150);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(567);
      if (lookahead == '$' ||
          lookahead == '%') ADVANCE(567);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(35);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(39);
      END_STATE();
    case 37:
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '/') ADVANCE(134);
      END_STATE();
    case 38:
      if (lookahead == '*') ADVANCE(40);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == '*') ADVANCE(40);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == ':') ADVANCE(585);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == '\\') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(485);
      END_STATE();
    case 43:
      if (lookahead == '1') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(495);
      END_STATE();
    case 44:
      if (lookahead == '1') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(495);
      END_STATE();
    case 45:
      ADVANCE_MAP(
        '2', 245,
        '4', 251,
        '8', 253,
        ':', 588,
        'L', 41,
        'a', 332,
        'b', 239,
        'c', 368,
        'd', 372,
        'f', 334,
        'h', 240,
        'i', 360,
        'l', 261,
        'm', 232,
        'p', 221,
        'q', 427,
        's', 311,
        'u', 341,
        'w', 373,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      END_STATE();
    case 46:
      ADVANCE_MAP(
        '3', 504,
        'A', 67,
        'S', 43,
        'T', 69,
        'a', 68,
        'f', 47,
        'g', 59,
        'r', 49,
        's', 44,
        't', 73,
        'z', 57,
        'C', 66,
        'c', 66,
        'K', 64,
        'k', 64,
        'V', 64,
        'v', 64,
        '1', 507,
        '2', 507,
        'F', 48,
        'R', 48,
        'X', 48,
        'x', 48,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(495);
      END_STATE();
    case 47:
      if (lookahead == '3') ADVANCE(504);
      if (lookahead == 'a') ADVANCE(67);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(507);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(495);
      END_STATE();
    case 48:
      if (lookahead == '3') ADVANCE(504);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(495);
      END_STATE();
    case 49:
      if (lookahead == '3') ADVANCE(504);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(495);
      END_STATE();
    case 50:
      ADVANCE_MAP(
        '3', 505,
        'A', 561,
        'S', 512,
        'T', 563,
        'a', 562,
        'f', 517,
        'g', 549,
        'r', 519,
        's', 513,
        't', 564,
        'z', 532,
        'C', 560,
        'c', 560,
        'K', 559,
        'k', 559,
        'V', 559,
        'v', 559,
        '1', 508,
        '2', 508,
        'F', 518,
        'R', 518,
        'X', 518,
        'x', 518,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(511);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(566);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(611);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 55:
      if (lookahead == '=') ADVANCE(452);
      END_STATE();
    case 56:
      ADVANCE_MAP(
        'a', 527,
        'c', 525,
        'd', 556,
        'g', 547,
        'h', 538,
        'l', 546,
        'p', 528,
        't', 542,
      );
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(495);
      END_STATE();
    case 59:
      if (lookahead == 'p') ADVANCE(495);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 61:
      if (lookahead == '|') ADVANCE(447);
      END_STATE();
    case 62:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      END_STATE();
    case 63:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      END_STATE();
    case 64:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(495);
      END_STATE();
    case 65:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(472);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(495);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(495);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(495);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(495);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(495);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(492);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(476);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 83:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 84:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      END_STATE();
    case 85:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 86:
      if (eof) ADVANCE(116);
      ADVANCE_MAP(
        '\t', 143,
        '\n', 124,
        '\r', 118,
        ' ', 139,
        '!', 464,
        '#', 134,
        '$', 50,
        '%', 56,
        '\'', 484,
        '(', 138,
        ',', 150,
        '-', 462,
        '.', 597,
        '/', 37,
        '0', 469,
        '3', 473,
        ';', 117,
        '=', 445,
        'A', 605,
        'S', 589,
        'T', 607,
        '\\', 11,
        'a', 606,
        'f', 592,
        'g', 600,
        'r', 594,
        's', 590,
        't', 608,
        'z', 598,
        '|', 61,
        '~', 463,
        'C', 604,
        'c', 604,
        'K', 603,
        'k', 603,
        'V', 603,
        'v', 603,
      );
      if (lookahead == 0x0b ||
          lookahead == '\f') SKIP(86);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(474);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(593);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(609);
      END_STATE();
    case 87:
      if (eof) ADVANCE(116);
      ADVANCE_MAP(
        '\t', 144,
        '\n', 125,
        '\r', 119,
        ' ', 140,
        '!', 55,
        '#', 134,
        '&', 451,
        '(', 138,
        ',', 150,
        '/', 460,
        ';', 117,
        '<', 454,
        '=', 446,
        '>', 455,
      );
      if (lookahead == '\\') SKIP(94);
      if (lookahead == '^') ADVANCE(450);
      if (lookahead == '|') ADVANCE(449);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(458);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(457);
      if (lookahead == 0x0b ||
          lookahead == '\f') SKIP(87);
      END_STATE();
    case 88:
      if (eof) ADVANCE(116);
      if (lookahead == '\t') ADVANCE(145);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead == '#') ADVANCE(134);
      if (lookahead == ')') ADVANCE(147);
      if (lookahead == ',') ADVANCE(150);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == ';') ADVANCE(117);
      if (lookahead == '\\') SKIP(104);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(88);
      END_STATE();
    case 89:
      if (eof) ADVANCE(116);
      if (lookahead == '\n') SKIP(91);
      END_STATE();
    case 90:
      if (eof) ADVANCE(116);
      if (lookahead == '\n') SKIP(91);
      if (lookahead == '\r') SKIP(89);
      END_STATE();
    case 91:
      if (eof) ADVANCE(116);
      ADVANCE_MAP(
        '\n', 126,
        '\r', 120,
        '#', 134,
        '%', 85,
        '.', 45,
        '/', 37,
        '0', 52,
        ';', 117,
      );
      if (lookahead == '\\') SKIP(90);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(91);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 92:
      if (eof) ADVANCE(116);
      ADVANCE_MAP(
        '\n', 127,
        '\r', 121,
        '!', 464,
        '"', 488,
        '#', 134,
        '$', 50,
        '%', 56,
        '\'', 484,
        '(', 138,
        ',', 150,
        '-', 462,
        '.', 597,
        '/', 37,
        '0', 469,
        '3', 473,
        ';', 117,
        '=', 445,
        'A', 605,
        'S', 589,
        'T', 607,
        '\\', 9,
        'a', 606,
        'f', 592,
        'g', 600,
        'r', 594,
        's', 590,
        't', 608,
        'z', 598,
        '|', 61,
        '~', 463,
        'C', 604,
        'c', 604,
        'K', 603,
        'k', 603,
        'V', 603,
        'v', 603,
        '1', 474,
        '2', 474,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(92);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(593);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(609);
      END_STATE();
    case 93:
      if (eof) ADVANCE(116);
      if (lookahead == '\n') SKIP(87);
      END_STATE();
    case 94:
      if (eof) ADVANCE(116);
      if (lookahead == '\n') SKIP(87);
      if (lookahead == '\r') SKIP(93);
      END_STATE();
    case 95:
      if (eof) ADVANCE(116);
      if (lookahead == '\n') SKIP(113);
      END_STATE();
    case 96:
      if (eof) ADVANCE(116);
      if (lookahead == '\n') SKIP(113);
      if (lookahead == '\r') SKIP(95);
      END_STATE();
    case 97:
      if (eof) ADVANCE(116);
      if (lookahead == '\n') SKIP(99);
      END_STATE();
    case 98:
      if (eof) ADVANCE(116);
      if (lookahead == '\n') SKIP(99);
      if (lookahead == '\r') SKIP(97);
      END_STATE();
    case 99:
      if (eof) ADVANCE(116);
      ADVANCE_MAP(
        '\n', 128,
        '\r', 122,
        '!', 55,
        '#', 134,
        '&', 451,
        '(', 138,
        ',', 150,
        '/', 460,
        ';', 117,
        '<', 454,
        '=', 446,
        '>', 455,
      );
      if (lookahead == '\\') SKIP(98);
      if (lookahead == '^') ADVANCE(450);
      if (lookahead == '|') ADVANCE(449);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(458);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(457);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(99);
      END_STATE();
    case 100:
      if (eof) ADVANCE(116);
      if (lookahead == '\n') SKIP(102);
      END_STATE();
    case 101:
      if (eof) ADVANCE(116);
      if (lookahead == '\n') SKIP(102);
      if (lookahead == '\r') SKIP(100);
      END_STATE();
    case 102:
      if (eof) ADVANCE(116);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\r') ADVANCE(123);
      if (lookahead == '#') ADVANCE(134);
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == ';') ADVANCE(117);
      if (lookahead == '\\') SKIP(101);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(132);
      if (lookahead == 0x0b ||
          lookahead == '\f') SKIP(102);
      END_STATE();
    case 103:
      if (eof) ADVANCE(116);
      if (lookahead == '\n') SKIP(88);
      END_STATE();
    case 104:
      if (eof) ADVANCE(116);
      if (lookahead == '\n') SKIP(88);
      if (lookahead == '\r') SKIP(103);
      END_STATE();
    case 105:
      if (eof) ADVANCE(116);
      if (lookahead == '\n') SKIP(115);
      END_STATE();
    case 106:
      if (eof) ADVANCE(116);
      if (lookahead == '\n') SKIP(115);
      if (lookahead == '\r') SKIP(105);
      END_STATE();
    case 107:
      if (eof) ADVANCE(116);
      if (lookahead == '\n') SKIP(114);
      END_STATE();
    case 108:
      if (eof) ADVANCE(116);
      if (lookahead == '\n') SKIP(114);
      if (lookahead == '\r') SKIP(107);
      END_STATE();
    case 109:
      if (eof) ADVANCE(116);
      if (lookahead == '\n') SKIP(111);
      END_STATE();
    case 110:
      if (eof) ADVANCE(116);
      if (lookahead == '\n') SKIP(111);
      if (lookahead == '\r') SKIP(109);
      END_STATE();
    case 111:
      if (eof) ADVANCE(116);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '\r') ADVANCE(22);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == '\\') SKIP(110);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(111);
      END_STATE();
    case 112:
      if (eof) ADVANCE(116);
      ADVANCE_MAP(
        '!', 464,
        '"', 488,
        '#', 134,
        '$', 50,
        '%', 56,
        '\'', 484,
        '(', 138,
        '+', 84,
        ',', 439,
        '-', 462,
        '.', 596,
        '/', 37,
        '0', 469,
        '3', 473,
        ';', 117,
        '=', 445,
        '@', 83,
        'A', 605,
        'S', 589,
        'T', 607,
        '\\', 6,
        'a', 606,
        'f', 592,
        'g', 600,
        'r', 594,
        's', 590,
        't', 608,
        'z', 598,
        '|', 61,
        '~', 463,
        '\t', 30,
        ' ', 30,
        'C', 604,
        'c', 604,
        'K', 603,
        'k', 603,
        'V', 603,
        'v', 603,
        '1', 474,
        '2', 474,
        'F', 593,
        'R', 593,
        'X', 593,
        'x', 593,
      );
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(112);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(609);
      END_STATE();
    case 113:
      if (eof) ADVANCE(116);
      ADVANCE_MAP(
        '!', 55,
        '#', 134,
        '&', 451,
        '(', 138,
        ',', 439,
        '/', 460,
        ';', 117,
        '<', 454,
        '=', 446,
        '>', 455,
      );
      if (lookahead == '\\') SKIP(96);
      if (lookahead == '^') ADVANCE(450);
      if (lookahead == '|') ADVANCE(449);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(458);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(457);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 114:
      if (eof) ADVANCE(116);
      if (lookahead == '#') ADVANCE(134);
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == ';') ADVANCE(117);
      if (lookahead == '\\') SKIP(108);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(133);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(114);
      END_STATE();
    case 115:
      if (eof) ADVANCE(116);
      if (lookahead == '#') ADVANCE(134);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == ';') ADVANCE(117);
      if (lookahead == '\\') SKIP(106);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(133);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t') ADVANCE(143);
      if (lookahead == '\n') ADVANCE(124);
      if (lookahead == '\r') ADVANCE(118);
      if (lookahead == ' ') ADVANCE(139);
      if (lookahead == '\\') ADVANCE(11);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t') ADVANCE(144);
      if (lookahead == '\n') ADVANCE(125);
      if (lookahead == '\r') ADVANCE(119);
      if (lookahead == ' ') ADVANCE(140);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == '\r') ADVANCE(120);
      if (lookahead == '%') ADVANCE(85);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '0') ADVANCE(52);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(127);
      if (lookahead == '\r') ADVANCE(121);
      if (lookahead == '\\') ADVANCE(9);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\r') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(132);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(143);
      if (lookahead == '\n') ADVANCE(124);
      if (lookahead == '\r') ADVANCE(118);
      if (lookahead == ' ') ADVANCE(139);
      if (lookahead == '\\') ADVANCE(11);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(144);
      if (lookahead == '\n') ADVANCE(125);
      if (lookahead == '\r') ADVANCE(119);
      if (lookahead == ' ') ADVANCE(140);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == '\r') ADVANCE(120);
      if (lookahead == '%') ADVANCE(85);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '0') ADVANCE(52);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(127);
      if (lookahead == '\r') ADVANCE(121);
      if (lookahead == '\\') ADVANCE(9);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '\r') ADVANCE(122);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\r') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(132);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '\r') ADVANCE(22);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\r') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead != 0) ADVANCE(134);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_block_comment);
      if (lookahead == '*') ADVANCE(40);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(143);
      if (lookahead == '\n') ADVANCE(124);
      if (lookahead == '\r') ADVANCE(118);
      if (lookahead == ' ') ADVANCE(139);
      if (lookahead == '\\') ADVANCE(11);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(144);
      if (lookahead == '\n') ADVANCE(125);
      if (lookahead == '\r') ADVANCE(119);
      if (lookahead == ' ') ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(145);
      if (lookahead == ' ') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(146);
      if (lookahead == ' ') ADVANCE(142);
      if (lookahead == '\\') ADVANCE(567);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(143);
      if (lookahead == '\n') ADVANCE(124);
      if (lookahead == '\r') ADVANCE(118);
      if (lookahead == ' ') ADVANCE(139);
      if (lookahead == '\\') ADVANCE(11);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(144);
      if (lookahead == '\n') ADVANCE(125);
      if (lookahead == '\r') ADVANCE(119);
      if (lookahead == ' ') ADVANCE(140);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(145);
      if (lookahead == ' ') ADVANCE(141);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(146);
      if (lookahead == ' ') ADVANCE(142);
      if (lookahead == '\\') ADVANCE(567);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_macro_mnemonic);
      if (lookahead == ':') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_macro_mnemonic);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DOTbyte);
      if (lookahead == ':') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_DOTbyte);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_DOT2byte);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_DOT2byte);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_DOTshort);
      if (lookahead == ':') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_DOTshort);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_DOThalf);
      if (lookahead == ':') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_DOThalf);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_DOThword);
      if (lookahead == ':') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_DOThword);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_DOT4byte);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_DOT4byte);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_DOTword);
      if (lookahead == ':') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_DOTword);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_DOTint);
      if (lookahead == ':') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_DOTint);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_DOT8byte);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_DOT8byte);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_DOTdword);
      if (lookahead == ':') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_DOTdword);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_DOTlong);
      if (lookahead == ':') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_DOTlong);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_DOTquad);
      if (lookahead == ':') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_DOTquad);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_DOTcomm);
      if (lookahead == ':') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_DOTcomm);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_DOTlcomm);
      if (lookahead == ':') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_DOTlcomm);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_DOTalign);
      if (lookahead == ':') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_DOTalign);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_DOTbalign);
      if (lookahead == ':') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_DOTbalign);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_DOTp2align);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_DOTp2align);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_DOTsleb128);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_DOTsleb128);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DOTuleb128);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DOTuleb128);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_DOTdtprelword);
      if (lookahead == ':') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_DOTdtprelword);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_DOTdtpreldword);
      if (lookahead == ':') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_DOTdtpreldword);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_DOTskip);
      if (lookahead == ':') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_DOTskip);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_DOTspace);
      if (lookahead == ':') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DOTspace);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_DOTfloat);
      if (lookahead == ':') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_DOTfloat);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_DOTdouble);
      if (lookahead == ':') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DOTdouble);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_DOTsingle);
      if (lookahead == ':') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_DOTsingle);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__string_directive_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_DOTasciz);
      if (lookahead == ':') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_DOTasciz);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DOTascii);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'z') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'y')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_DOTascii);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'z') ADVANCE(209);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(438);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_DOTasciiz);
      if (lookahead == ':') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_DOTasciiz);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_DOTstring);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'z') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'y')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_DOTstring);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'z') ADVANCE(213);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(438);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_DOTstringz);
      if (lookahead == ':') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_DOTstringz);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(219);
      if (lookahead == ':') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(222);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(220);
      if (lookahead == ':') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(223);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(228);
      if (lookahead == ':') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(224);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(225);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(241);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(226);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(227);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(185);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(187);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(186);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(188);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'a') ADVANCE(328);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'a') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'a') ADVANCE(269);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'a') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'a') ADVANCE(258);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'a') ADVANCE(339);
      if (lookahead == 'y') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'a') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'a') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'a') ADVANCE(259);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'a') ADVANCE(327);
      if (lookahead == 'w') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'a') ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'a') ADVANCE(340);
      if (lookahead == 'y') ADVANCE(420);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'a') ADVANCE(330);
      if (lookahead == 'w') ADVANCE(383);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'a') ADVANCE(342);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'b') ADVANCE(430);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'b') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'b') ADVANCE(215);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'b') ADVANCE(432);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'b') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'b') ADVANCE(337);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'b') ADVANCE(431);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'b') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'b') ADVANCE(217);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'b') ADVANCE(434);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'b') ADVANCE(433);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'b') ADVANCE(435);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'c') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'c') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'c') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'c') ADVANCE(316);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'c') ADVANCE(401);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'c') ADVANCE(284);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'c') ADVANCE(378);
      if (lookahead == 'o') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'c') ADVANCE(379);
      if (lookahead == 'o') ADVANCE(362);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'd') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'd') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'd') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'd') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'd') ADVANCE(428);
      if (lookahead == 'w') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'd') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'd') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'd') ADVANCE(174);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'd') ADVANCE(164);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'd') ADVANCE(170);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'd') ADVANCE(160);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'd') ADVANCE(429);
      if (lookahead == 'w') ADVANCE(385);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'd') ADVANCE(190);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'd') ADVANCE(192);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'e') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'e') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'e') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'e') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'e') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'e') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'e') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'f') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'f') ADVANCE(158);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'g') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'g') ADVANCE(354);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'g') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'g') ADVANCE(172);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'g') ADVANCE(211);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'g') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'g') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'g') ADVANCE(355);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'g') ADVANCE(356);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'g') ADVANCE(359);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'g') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'g') ADVANCE(338);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'h') ADVANCE(376);
      if (lookahead == 'i') ADVANCE(361);
      if (lookahead == 'k') ADVANCE(318);
      if (lookahead == 'l') ADVANCE(287);
      if (lookahead == 'p') ADVANCE(234);
      if (lookahead == 't') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'h') ADVANCE(377);
      if (lookahead == 'i') ADVANCE(364);
      if (lookahead == 'k') ADVANCE(320);
      if (lookahead == 'l') ADVANCE(291);
      if (lookahead == 'p') ADVANCE(236);
      if (lookahead == 't') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'i') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'i') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == 'z') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'y')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'i') ADVANCE(299);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'i') ADVANCE(317);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == 'z') ADVANCE(205);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(438);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'i') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'i') ADVANCE(305);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'i') ADVANCE(389);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'i') ADVANCE(365);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'i') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'i') ADVANCE(306);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'i') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'i') ADVANCE(307);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'l') ADVANCE(312);
      if (lookahead == 's') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'l') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'l') ADVANCE(315);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'l') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'l') ADVANCE(297);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'l') ADVANCE(273);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'l') ADVANCE(319);
      if (lookahead == 's') ADVANCE(257);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'l') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'l') ADVANCE(375);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'l') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'l') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'l') ADVANCE(285);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'l') ADVANCE(286);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'l') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'l') ADVANCE(323);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'l') ADVANCE(295);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'l') ADVANCE(325);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'l') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'm') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'm') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'm') ADVANCE(176);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'm') ADVANCE(178);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'm') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'm') ADVANCE(346);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'm') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'm') ADVANCE(347);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'n') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'n') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'n') ADVANCE(183);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'n') ADVANCE(180);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'n') ADVANCE(182);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'n') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'n') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'n') ADVANCE(184);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'n') ADVANCE(414);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'n') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'n') ADVANCE(301);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'n') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'n') ADVANCE(309);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'n') ADVANCE(302);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'o') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'o') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'o') ADVANCE(349);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'o') ADVANCE(149);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'o') ADVANCE(424);
      if (lookahead == 't') ADVANCE(390);
      if (lookahead == 'w') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'o') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'o') ADVANCE(426);
      if (lookahead == 't') ADVANCE(391);
      if (lookahead == 'w') ADVANCE(381);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'o') ADVANCE(393);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'o') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'o') ADVANCE(238);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'o') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'o') ADVANCE(403);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'o') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'o') ADVANCE(351);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'o') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'o') ADVANCE(396);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'o') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'o') ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'o') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'o') ADVANCE(406);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'o') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'o') ADVANCE(408);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'p') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'p') ADVANCE(194);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'p') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'p') ADVANCE(409);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'r') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'r') ADVANCE(270);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'r') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'r') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'r') ADVANCE(271);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'r') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'r') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'r') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'r') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'r') ADVANCE(369);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'r') ADVANCE(272);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'r') ADVANCE(416);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'r') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'r') ADVANCE(321);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'r') ADVANCE(274);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'r') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'r') ADVANCE(275);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'r') ADVANCE(293);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 't') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 't') ADVANCE(277);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 't') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 't') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 't') ADVANCE(166);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 't') ADVANCE(198);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 't') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 't') ADVANCE(278);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 't') ADVANCE(279);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 't') ADVANCE(283);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 't') ADVANCE(288);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 't') ADVANCE(289);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 't') ADVANCE(290);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'u') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'u') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'u') ADVANCE(247);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'u') ADVANCE(230);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'w') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'w') ADVANCE(387);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'y') ADVANCE(411);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'y') ADVANCE(418);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'y') ADVANCE(421);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'y') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'y') ADVANCE(422);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'y') ADVANCE(423);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(437);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(438);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym__control_operand_separator_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(439);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(440);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(609);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_option_flag_token1);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '$') ADVANCE(51);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(444);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_assignment_operator);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_assignment_operator);
      if (lookahead == '=') ADVANCE(452);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_logical_or_operator);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_logical_and_operator);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_bitwise_or_operator);
      if (lookahead == '|') ADVANCE(447);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_bitwise_xor_operator);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_bitwise_and_operator);
      if (lookahead == '&') ADVANCE(448);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_equality_operator);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_relational_operator);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_relational_operator);
      if (lookahead == '<') ADVANCE(456);
      if (lookahead == '=') ADVANCE(453);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_relational_operator);
      if (lookahead == '=') ADVANCE(453);
      if (lookahead == '>') ADVANCE(456);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_shift_operator);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_additive_operator);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_multiplicative_operator);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_multiplicative_operator);
      if (lookahead == '*') ADVANCE(39);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_multiplicative_operator);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '/') ADVANCE(134);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_unary_minus_operator);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_unary_minus_operator);
      if (lookahead == '.') ADVANCE(70);
      if (lookahead == '0') ADVANCE(470);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(475);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_bitwise_not_operator);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_logical_not_operator);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_logical_not_operator);
      if (lookahead == '=') ADVANCE(452);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_relocation_type);
      if (lookahead == '_') ADVANCE(537);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_relocation_type);
      if (lookahead == '_') ADVANCE(526);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_relocation_type);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_octal);
      ADVANCE_MAP(
        '.', 480,
        'b', 613,
        'f', 612,
        'E', 62,
        'e', 62,
        'X', 75,
        'x', 75,
        '8', 475,
        '9', 475,
      );
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(471);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_octal);
      if (lookahead == '.') ADVANCE(480);
      if (lookahead == 'b') ADVANCE(65);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(75);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(471);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_octal);
      if (lookahead == '.') ADVANCE(480);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(471);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_binary);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(472);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(480);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(612);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(475);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(475);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(480);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(475);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(480);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(475);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(476);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'f') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(602);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '*') ADVANCE(39);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '/') ADVANCE(486);
      if (lookahead == '\\') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(485);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(39);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(490);
      if (lookahead == '\\') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(489);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(492);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(493);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.') ADVANCE(595);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(498);
      if (lookahead == '$' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.') ADVANCE(595);
      if (lookahead == ':') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(498);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.') ADVANCE(595);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(611);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(612);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(611);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(612);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(503);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(611);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(503);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(611);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(495);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(511);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('2' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(510);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(495);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(511);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(510);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(511);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(511);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(521);
      if (lookahead == '3') ADVANCE(516);
      if (lookahead == 'r') ADVANCE(534);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(521);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '2') ADVANCE(468);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '3') ADVANCE(505);
      if (lookahead == 'a') ADVANCE(561);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(508);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(511);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '3') ADVANCE(505);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(511);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '3') ADVANCE(505);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(511);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '4') ADVANCE(468);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '6') ADVANCE(468);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '6') ADVANCE(520);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '_') ADVANCE(537);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '_') ADVANCE(536);
      if (lookahead == 'g') ADVANCE(530);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'a') ADVANCE(543);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'a') ADVANCE(531);
      if (lookahead == 'h') ADVANCE(538);
      if (lookahead == 'l') ADVANCE(546);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'b') ADVANCE(554);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'c') ADVANCE(514);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'd') ADVANCE(468);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'd') ADVANCE(523);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'd') ADVANCE(529);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(551);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(539);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(541);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(544);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'g') ADVANCE(548);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'h') ADVANCE(538);
      if (lookahead == 'l') ADVANCE(546);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'i') ADVANCE(468);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(468);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(515);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(523);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(555);
      if (lookahead == 'p') ADVANCE(553);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(540);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(467);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(511);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(468);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(557);
      if (lookahead == 'p') ADVANCE(552);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(558);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'p') ADVANCE(511);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'p') ADVANCE(552);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'r') ADVANCE(545);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'r') ADVANCE(533);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'r') ADVANCE(535);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 's') ADVANCE(522);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 's') ADVANCE(524);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 't') ADVANCE(550);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 't') ADVANCE(466);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 't') ADVANCE(523);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(511);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('2' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(511);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('4' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(511);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('8' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(511);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('8' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(511);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(511);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_macro_parameter);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(595);
      if (lookahead == '1') ADVANCE(496);
      if (lookahead == ':') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(498);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(595);
      if (lookahead == '1') ADVANCE(496);
      if (lookahead == ':') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(498);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(595);
      if (lookahead == '3') ADVANCE(496);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'a') ADVANCE(579);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(497);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(498);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(595);
      if (lookahead == '3') ADVANCE(496);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(498);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(595);
      if (lookahead == '3') ADVANCE(496);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(498);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(595);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'e') ADVANCE(576);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(595);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'o') ADVANCE(498);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(595);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'p') ADVANCE(498);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(595);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == 'r') ADVANCE(574);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(595);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(498);
      if (lookahead == '$' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(595);
      if (lookahead == ':') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(498);
      if (lookahead == '$' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(595);
      if (lookahead == ':') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(498);
      if (lookahead == '$' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(595);
      if (lookahead == ':') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(498);
      if (lookahead == '$' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(595);
      if (lookahead == ':') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(498);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(595);
      if (lookahead == ':') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(498);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(595);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(583);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(584);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_local_label);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_local_label_reference_token1);
      if (lookahead == '.') ADVANCE(595);
      if (lookahead == ':') ADVANCE(585);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(586);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_local_label_reference_token1);
      if (lookahead == '.') ADVANCE(609);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_global_label);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '1') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(510);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '1') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(510);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      ADVANCE_MAP(
        '2', 242,
        '4', 248,
        '8', 252,
        ':', 588,
        'L', 586,
        'a', 326,
        'b', 233,
        'c', 366,
        'd', 370,
        'f', 333,
        'h', 237,
        'i', 357,
        'l', 260,
        'm', 231,
        'p', 218,
        'q', 425,
        's', 310,
        'u', 343,
        'w', 371,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(437);
      if (('e' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(595);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '3') ADVANCE(506);
      if (lookahead == 'a') ADVANCE(605);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(509);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(510);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '3') ADVANCE(506);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(510);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '3') ADVANCE(506);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(510);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == ':') ADVANCE(588);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(595);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'L') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(441);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(609);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'L') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'e') ADVANCE(601);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'o') ADVANCE(510);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'p') ADVANCE(510);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'r') ADVANCE(599);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(510);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(510);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(510);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(510);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(510);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(510);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_global_numeric_label);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_local_numeric_label);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_local_numeric_label_reference);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_local_numeric_label_reference);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(472);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 91, .external_lex_state = 2},
  [2] = {.lex_state = 112, .external_lex_state = 3},
  [3] = {.lex_state = 92, .external_lex_state = 2},
  [4] = {.lex_state = 91, .external_lex_state = 2},
  [5] = {.lex_state = 86, .external_lex_state = 4},
  [6] = {.lex_state = 91, .external_lex_state = 2},
  [7] = {.lex_state = 92, .external_lex_state = 2},
  [8] = {.lex_state = 112, .external_lex_state = 2},
  [9] = {.lex_state = 92, .external_lex_state = 2},
  [10] = {.lex_state = 112, .external_lex_state = 2},
  [11] = {.lex_state = 31, .external_lex_state = 2},
  [12] = {.lex_state = 31, .external_lex_state = 2},
  [13] = {.lex_state = 31, .external_lex_state = 2},
  [14] = {.lex_state = 31, .external_lex_state = 2},
  [15] = {.lex_state = 31, .external_lex_state = 2},
  [16] = {.lex_state = 31, .external_lex_state = 2},
  [17] = {.lex_state = 31, .external_lex_state = 2},
  [18] = {.lex_state = 31, .external_lex_state = 2},
  [19] = {.lex_state = 31, .external_lex_state = 2},
  [20] = {.lex_state = 31, .external_lex_state = 2},
  [21] = {.lex_state = 31, .external_lex_state = 2},
  [22] = {.lex_state = 31, .external_lex_state = 2},
  [23] = {.lex_state = 31, .external_lex_state = 2},
  [24] = {.lex_state = 31, .external_lex_state = 2},
  [25] = {.lex_state = 31, .external_lex_state = 2},
  [26] = {.lex_state = 31, .external_lex_state = 2},
  [27] = {.lex_state = 31, .external_lex_state = 2},
  [28] = {.lex_state = 31, .external_lex_state = 2},
  [29] = {.lex_state = 31, .external_lex_state = 2},
  [30] = {.lex_state = 31, .external_lex_state = 2},
  [31] = {.lex_state = 31, .external_lex_state = 2},
  [32] = {.lex_state = 31, .external_lex_state = 2},
  [33] = {.lex_state = 31, .external_lex_state = 2},
  [34] = {.lex_state = 31, .external_lex_state = 2},
  [35] = {.lex_state = 31, .external_lex_state = 2},
  [36] = {.lex_state = 31, .external_lex_state = 2},
  [37] = {.lex_state = 31, .external_lex_state = 2},
  [38] = {.lex_state = 31, .external_lex_state = 2},
  [39] = {.lex_state = 31, .external_lex_state = 2},
  [40] = {.lex_state = 31, .external_lex_state = 2},
  [41] = {.lex_state = 31, .external_lex_state = 2},
  [42] = {.lex_state = 31, .external_lex_state = 2},
  [43] = {.lex_state = 31, .external_lex_state = 2},
  [44] = {.lex_state = 31, .external_lex_state = 2},
  [45] = {.lex_state = 31, .external_lex_state = 2},
  [46] = {.lex_state = 31, .external_lex_state = 2},
  [47] = {.lex_state = 31, .external_lex_state = 2},
  [48] = {.lex_state = 31, .external_lex_state = 2},
  [49] = {.lex_state = 31, .external_lex_state = 2},
  [50] = {.lex_state = 31, .external_lex_state = 2},
  [51] = {.lex_state = 31, .external_lex_state = 2},
  [52] = {.lex_state = 31, .external_lex_state = 2},
  [53] = {.lex_state = 31, .external_lex_state = 2},
  [54] = {.lex_state = 31, .external_lex_state = 2},
  [55] = {.lex_state = 31, .external_lex_state = 2},
  [56] = {.lex_state = 31, .external_lex_state = 2},
  [57] = {.lex_state = 31, .external_lex_state = 2},
  [58] = {.lex_state = 31, .external_lex_state = 2},
  [59] = {.lex_state = 31, .external_lex_state = 2},
  [60] = {.lex_state = 31, .external_lex_state = 2},
  [61] = {.lex_state = 31, .external_lex_state = 2},
  [62] = {.lex_state = 31, .external_lex_state = 2},
  [63] = {.lex_state = 31, .external_lex_state = 2},
  [64] = {.lex_state = 31, .external_lex_state = 2},
  [65] = {.lex_state = 31, .external_lex_state = 2},
  [66] = {.lex_state = 31, .external_lex_state = 2},
  [67] = {.lex_state = 31, .external_lex_state = 2},
  [68] = {.lex_state = 31, .external_lex_state = 2},
  [69] = {.lex_state = 31, .external_lex_state = 2},
  [70] = {.lex_state = 31, .external_lex_state = 2},
  [71] = {.lex_state = 31, .external_lex_state = 2},
  [72] = {.lex_state = 31, .external_lex_state = 2},
  [73] = {.lex_state = 31, .external_lex_state = 2},
  [74] = {.lex_state = 31, .external_lex_state = 2},
  [75] = {.lex_state = 31, .external_lex_state = 2},
  [76] = {.lex_state = 31, .external_lex_state = 2},
  [77] = {.lex_state = 31, .external_lex_state = 2},
  [78] = {.lex_state = 31, .external_lex_state = 2},
  [79] = {.lex_state = 31, .external_lex_state = 2},
  [80] = {.lex_state = 31, .external_lex_state = 2},
  [81] = {.lex_state = 31, .external_lex_state = 2},
  [82] = {.lex_state = 31, .external_lex_state = 2},
  [83] = {.lex_state = 31, .external_lex_state = 2},
  [84] = {.lex_state = 31, .external_lex_state = 2},
  [85] = {.lex_state = 31, .external_lex_state = 2},
  [86] = {.lex_state = 31, .external_lex_state = 2},
  [87] = {.lex_state = 31, .external_lex_state = 2},
  [88] = {.lex_state = 31, .external_lex_state = 2},
  [89] = {.lex_state = 31, .external_lex_state = 2},
  [90] = {.lex_state = 31, .external_lex_state = 2},
  [91] = {.lex_state = 31, .external_lex_state = 2},
  [92] = {.lex_state = 31, .external_lex_state = 2},
  [93] = {.lex_state = 31, .external_lex_state = 2},
  [94] = {.lex_state = 31, .external_lex_state = 2},
  [95] = {.lex_state = 31, .external_lex_state = 2},
  [96] = {.lex_state = 31, .external_lex_state = 2},
  [97] = {.lex_state = 31, .external_lex_state = 2},
  [98] = {.lex_state = 31, .external_lex_state = 2},
  [99] = {.lex_state = 31, .external_lex_state = 2},
  [100] = {.lex_state = 31, .external_lex_state = 2},
  [101] = {.lex_state = 31, .external_lex_state = 2},
  [102] = {.lex_state = 31, .external_lex_state = 2},
  [103] = {.lex_state = 31, .external_lex_state = 2},
  [104] = {.lex_state = 91, .external_lex_state = 2},
  [105] = {.lex_state = 91, .external_lex_state = 2},
  [106] = {.lex_state = 91, .external_lex_state = 2},
  [107] = {.lex_state = 91, .external_lex_state = 2},
  [108] = {.lex_state = 87, .external_lex_state = 1},
  [109] = {.lex_state = 87, .external_lex_state = 1},
  [110] = {.lex_state = 87, .external_lex_state = 1},
  [111] = {.lex_state = 87, .external_lex_state = 1},
  [112] = {.lex_state = 87, .external_lex_state = 1},
  [113] = {.lex_state = 87, .external_lex_state = 1},
  [114] = {.lex_state = 87, .external_lex_state = 1},
  [115] = {.lex_state = 87, .external_lex_state = 1},
  [116] = {.lex_state = 87, .external_lex_state = 1},
  [117] = {.lex_state = 87, .external_lex_state = 1},
  [118] = {.lex_state = 87, .external_lex_state = 1},
  [119] = {.lex_state = 87, .external_lex_state = 1},
  [120] = {.lex_state = 87, .external_lex_state = 1},
  [121] = {.lex_state = 87, .external_lex_state = 1},
  [122] = {.lex_state = 87, .external_lex_state = 1},
  [123] = {.lex_state = 87, .external_lex_state = 1},
  [124] = {.lex_state = 87, .external_lex_state = 1},
  [125] = {.lex_state = 87, .external_lex_state = 1},
  [126] = {.lex_state = 87, .external_lex_state = 1},
  [127] = {.lex_state = 87, .external_lex_state = 1},
  [128] = {.lex_state = 87, .external_lex_state = 1},
  [129] = {.lex_state = 87, .external_lex_state = 1},
  [130] = {.lex_state = 87, .external_lex_state = 1},
  [131] = {.lex_state = 87, .external_lex_state = 1},
  [132] = {.lex_state = 87, .external_lex_state = 1},
  [133] = {.lex_state = 87, .external_lex_state = 1},
  [134] = {.lex_state = 87, .external_lex_state = 1},
  [135] = {.lex_state = 87, .external_lex_state = 1},
  [136] = {.lex_state = 87, .external_lex_state = 1},
  [137] = {.lex_state = 87, .external_lex_state = 1},
  [138] = {.lex_state = 87, .external_lex_state = 1},
  [139] = {.lex_state = 87, .external_lex_state = 1},
  [140] = {.lex_state = 87, .external_lex_state = 1},
  [141] = {.lex_state = 87, .external_lex_state = 1},
  [142] = {.lex_state = 87, .external_lex_state = 1},
  [143] = {.lex_state = 87, .external_lex_state = 1},
  [144] = {.lex_state = 87, .external_lex_state = 1},
  [145] = {.lex_state = 87, .external_lex_state = 1},
  [146] = {.lex_state = 87, .external_lex_state = 1},
  [147] = {.lex_state = 87, .external_lex_state = 1},
  [148] = {.lex_state = 87, .external_lex_state = 1},
  [149] = {.lex_state = 87, .external_lex_state = 1},
  [150] = {.lex_state = 87, .external_lex_state = 1},
  [151] = {.lex_state = 113, .external_lex_state = 1},
  [152] = {.lex_state = 99, .external_lex_state = 5},
  [153] = {.lex_state = 99, .external_lex_state = 5},
  [154] = {.lex_state = 99, .external_lex_state = 5},
  [155] = {.lex_state = 99, .external_lex_state = 5},
  [156] = {.lex_state = 99, .external_lex_state = 5},
  [157] = {.lex_state = 99, .external_lex_state = 5},
  [158] = {.lex_state = 99, .external_lex_state = 5},
  [159] = {.lex_state = 99, .external_lex_state = 5},
  [160] = {.lex_state = 99, .external_lex_state = 5},
  [161] = {.lex_state = 99, .external_lex_state = 5},
  [162] = {.lex_state = 99, .external_lex_state = 5},
  [163] = {.lex_state = 99, .external_lex_state = 5},
  [164] = {.lex_state = 99, .external_lex_state = 5},
  [165] = {.lex_state = 99, .external_lex_state = 5},
  [166] = {.lex_state = 99, .external_lex_state = 5},
  [167] = {.lex_state = 99, .external_lex_state = 5},
  [168] = {.lex_state = 99, .external_lex_state = 5},
  [169] = {.lex_state = 99, .external_lex_state = 5},
  [170] = {.lex_state = 99, .external_lex_state = 5},
  [171] = {.lex_state = 99, .external_lex_state = 5},
  [172] = {.lex_state = 99, .external_lex_state = 5},
  [173] = {.lex_state = 99, .external_lex_state = 5},
  [174] = {.lex_state = 99, .external_lex_state = 5},
  [175] = {.lex_state = 99, .external_lex_state = 5},
  [176] = {.lex_state = 113, .external_lex_state = 1},
  [177] = {.lex_state = 113, .external_lex_state = 1},
  [178] = {.lex_state = 113, .external_lex_state = 1},
  [179] = {.lex_state = 99, .external_lex_state = 5},
  [180] = {.lex_state = 113, .external_lex_state = 1},
  [181] = {.lex_state = 113, .external_lex_state = 1},
  [182] = {.lex_state = 113, .external_lex_state = 1},
  [183] = {.lex_state = 113, .external_lex_state = 1},
  [184] = {.lex_state = 113, .external_lex_state = 1},
  [185] = {.lex_state = 113, .external_lex_state = 1},
  [186] = {.lex_state = 113, .external_lex_state = 1},
  [187] = {.lex_state = 113, .external_lex_state = 1},
  [188] = {.lex_state = 113, .external_lex_state = 1},
  [189] = {.lex_state = 113, .external_lex_state = 1},
  [190] = {.lex_state = 113, .external_lex_state = 1},
  [191] = {.lex_state = 113, .external_lex_state = 1},
  [192] = {.lex_state = 113, .external_lex_state = 1},
  [193] = {.lex_state = 113, .external_lex_state = 1},
  [194] = {.lex_state = 99, .external_lex_state = 5},
  [195] = {.lex_state = 113, .external_lex_state = 1},
  [196] = {.lex_state = 113, .external_lex_state = 1},
  [197] = {.lex_state = 113, .external_lex_state = 1},
  [198] = {.lex_state = 113, .external_lex_state = 1},
  [199] = {.lex_state = 113, .external_lex_state = 1},
  [200] = {.lex_state = 113, .external_lex_state = 1},
  [201] = {.lex_state = 113, .external_lex_state = 1},
  [202] = {.lex_state = 99, .external_lex_state = 5},
  [203] = {.lex_state = 99, .external_lex_state = 5},
  [204] = {.lex_state = 99, .external_lex_state = 5},
  [205] = {.lex_state = 99, .external_lex_state = 5},
  [206] = {.lex_state = 99, .external_lex_state = 5},
  [207] = {.lex_state = 99, .external_lex_state = 5},
  [208] = {.lex_state = 99, .external_lex_state = 5},
  [209] = {.lex_state = 99, .external_lex_state = 5},
  [210] = {.lex_state = 99, .external_lex_state = 5},
  [211] = {.lex_state = 113, .external_lex_state = 1},
  [212] = {.lex_state = 113, .external_lex_state = 1},
  [213] = {.lex_state = 113, .external_lex_state = 1},
  [214] = {.lex_state = 113, .external_lex_state = 1},
  [215] = {.lex_state = 113, .external_lex_state = 1},
  [216] = {.lex_state = 113, .external_lex_state = 1},
  [217] = {.lex_state = 113, .external_lex_state = 1},
  [218] = {.lex_state = 113, .external_lex_state = 1},
  [219] = {.lex_state = 113, .external_lex_state = 1},
  [220] = {.lex_state = 113, .external_lex_state = 1},
  [221] = {.lex_state = 113, .external_lex_state = 1},
  [222] = {.lex_state = 113, .external_lex_state = 1},
  [223] = {.lex_state = 113, .external_lex_state = 1},
  [224] = {.lex_state = 99, .external_lex_state = 5},
  [225] = {.lex_state = 113, .external_lex_state = 1},
  [226] = {.lex_state = 113, .external_lex_state = 1},
  [227] = {.lex_state = 113, .external_lex_state = 1},
  [228] = {.lex_state = 99, .external_lex_state = 5},
  [229] = {.lex_state = 99, .external_lex_state = 5},
  [230] = {.lex_state = 113, .external_lex_state = 1},
  [231] = {.lex_state = 99, .external_lex_state = 5},
  [232] = {.lex_state = 99, .external_lex_state = 5},
  [233] = {.lex_state = 99, .external_lex_state = 5},
  [234] = {.lex_state = 99, .external_lex_state = 5},
  [235] = {.lex_state = 99, .external_lex_state = 5},
  [236] = {.lex_state = 99, .external_lex_state = 5},
  [237] = {.lex_state = 113, .external_lex_state = 1},
  [238] = {.lex_state = 86, .external_lex_state = 1},
  [239] = {.lex_state = 33, .external_lex_state = 5},
  [240] = {.lex_state = 33, .external_lex_state = 5},
  [241] = {.lex_state = 33, .external_lex_state = 5},
  [242] = {.lex_state = 33, .external_lex_state = 5},
  [243] = {.lex_state = 33, .external_lex_state = 5},
  [244] = {.lex_state = 33, .external_lex_state = 5},
  [245] = {.lex_state = 33, .external_lex_state = 5},
  [246] = {.lex_state = 33, .external_lex_state = 5},
  [247] = {.lex_state = 33, .external_lex_state = 5},
  [248] = {.lex_state = 33, .external_lex_state = 5},
  [249] = {.lex_state = 33, .external_lex_state = 5},
  [250] = {.lex_state = 33, .external_lex_state = 5},
  [251] = {.lex_state = 33, .external_lex_state = 5},
  [252] = {.lex_state = 33, .external_lex_state = 5},
  [253] = {.lex_state = 33, .external_lex_state = 5},
  [254] = {.lex_state = 33, .external_lex_state = 5},
  [255] = {.lex_state = 33, .external_lex_state = 5},
  [256] = {.lex_state = 33, .external_lex_state = 5},
  [257] = {.lex_state = 33, .external_lex_state = 5},
  [258] = {.lex_state = 33, .external_lex_state = 5},
  [259] = {.lex_state = 33, .external_lex_state = 5},
  [260] = {.lex_state = 33, .external_lex_state = 5},
  [261] = {.lex_state = 33, .external_lex_state = 5},
  [262] = {.lex_state = 33, .external_lex_state = 5},
  [263] = {.lex_state = 33, .external_lex_state = 5},
  [264] = {.lex_state = 33, .external_lex_state = 5},
  [265] = {.lex_state = 33, .external_lex_state = 5},
  [266] = {.lex_state = 33, .external_lex_state = 5},
  [267] = {.lex_state = 33, .external_lex_state = 5},
  [268] = {.lex_state = 33, .external_lex_state = 5},
  [269] = {.lex_state = 33, .external_lex_state = 5},
  [270] = {.lex_state = 33, .external_lex_state = 5},
  [271] = {.lex_state = 33, .external_lex_state = 5},
  [272] = {.lex_state = 33, .external_lex_state = 5},
  [273] = {.lex_state = 33, .external_lex_state = 5},
  [274] = {.lex_state = 33, .external_lex_state = 5},
  [275] = {.lex_state = 33, .external_lex_state = 5},
  [276] = {.lex_state = 33, .external_lex_state = 5},
  [277] = {.lex_state = 33, .external_lex_state = 5},
  [278] = {.lex_state = 33, .external_lex_state = 5},
  [279] = {.lex_state = 33, .external_lex_state = 5},
  [280] = {.lex_state = 33, .external_lex_state = 5},
  [281] = {.lex_state = 33, .external_lex_state = 5},
  [282] = {.lex_state = 33, .external_lex_state = 5},
  [283] = {.lex_state = 33, .external_lex_state = 5},
  [284] = {.lex_state = 33, .external_lex_state = 5},
  [285] = {.lex_state = 33, .external_lex_state = 5},
  [286] = {.lex_state = 33, .external_lex_state = 5},
  [287] = {.lex_state = 33, .external_lex_state = 5},
  [288] = {.lex_state = 33, .external_lex_state = 5},
  [289] = {.lex_state = 33, .external_lex_state = 5},
  [290] = {.lex_state = 33, .external_lex_state = 5},
  [291] = {.lex_state = 33, .external_lex_state = 5},
  [292] = {.lex_state = 33, .external_lex_state = 5},
  [293] = {.lex_state = 33, .external_lex_state = 5},
  [294] = {.lex_state = 86, .external_lex_state = 1},
  [295] = {.lex_state = 86, .external_lex_state = 1},
  [296] = {.lex_state = 33, .external_lex_state = 2},
  [297] = {.lex_state = 33, .external_lex_state = 2},
  [298] = {.lex_state = 203, .external_lex_state = 2},
  [299] = {.lex_state = 33, .external_lex_state = 2},
  [300] = {.lex_state = 33, .external_lex_state = 2},
  [301] = {.lex_state = 33, .external_lex_state = 2},
  [302] = {.lex_state = 33, .external_lex_state = 2},
  [303] = {.lex_state = 33, .external_lex_state = 2},
  [304] = {.lex_state = 33, .external_lex_state = 2},
  [305] = {.lex_state = 33, .external_lex_state = 2},
  [306] = {.lex_state = 33, .external_lex_state = 2},
  [307] = {.lex_state = 33, .external_lex_state = 2},
  [308] = {.lex_state = 33, .external_lex_state = 2},
  [309] = {.lex_state = 33, .external_lex_state = 2},
  [310] = {.lex_state = 33, .external_lex_state = 2},
  [311] = {.lex_state = 33, .external_lex_state = 2},
  [312] = {.lex_state = 33, .external_lex_state = 2},
  [313] = {.lex_state = 203, .external_lex_state = 2},
  [314] = {.lex_state = 203, .external_lex_state = 2},
  [315] = {.lex_state = 33, .external_lex_state = 2},
  [316] = {.lex_state = 33, .external_lex_state = 2},
  [317] = {.lex_state = 33, .external_lex_state = 2},
  [318] = {.lex_state = 33, .external_lex_state = 2},
  [319] = {.lex_state = 33, .external_lex_state = 2},
  [320] = {.lex_state = 33, .external_lex_state = 2},
  [321] = {.lex_state = 33, .external_lex_state = 2},
  [322] = {.lex_state = 33, .external_lex_state = 2},
  [323] = {.lex_state = 33, .external_lex_state = 2},
  [324] = {.lex_state = 33, .external_lex_state = 2},
  [325] = {.lex_state = 33, .external_lex_state = 2},
  [326] = {.lex_state = 33, .external_lex_state = 2},
  [327] = {.lex_state = 33, .external_lex_state = 2},
  [328] = {.lex_state = 33, .external_lex_state = 2},
  [329] = {.lex_state = 33, .external_lex_state = 2},
  [330] = {.lex_state = 33, .external_lex_state = 2},
  [331] = {.lex_state = 86, .external_lex_state = 1},
  [332] = {.lex_state = 33, .external_lex_state = 2},
  [333] = {.lex_state = 86, .external_lex_state = 1},
  [334] = {.lex_state = 33, .external_lex_state = 2},
  [335] = {.lex_state = 33, .external_lex_state = 2},
  [336] = {.lex_state = 33, .external_lex_state = 2},
  [337] = {.lex_state = 33, .external_lex_state = 2},
  [338] = {.lex_state = 33, .external_lex_state = 2},
  [339] = {.lex_state = 33, .external_lex_state = 2},
  [340] = {.lex_state = 33, .external_lex_state = 2},
  [341] = {.lex_state = 33, .external_lex_state = 2},
  [342] = {.lex_state = 33, .external_lex_state = 2},
  [343] = {.lex_state = 86, .external_lex_state = 1},
  [344] = {.lex_state = 86, .external_lex_state = 1},
  [345] = {.lex_state = 203, .external_lex_state = 2},
  [346] = {.lex_state = 203, .external_lex_state = 2},
  [347] = {.lex_state = 33, .external_lex_state = 2},
  [348] = {.lex_state = 86, .external_lex_state = 4},
  [349] = {.lex_state = 86, .external_lex_state = 4},
  [350] = {.lex_state = 86, .external_lex_state = 4},
  [351] = {.lex_state = 92, .external_lex_state = 5},
  [352] = {.lex_state = 112, .external_lex_state = 1},
  [353] = {.lex_state = 92, .external_lex_state = 5},
  [354] = {.lex_state = 86, .external_lex_state = 3},
  [355] = {.lex_state = 86, .external_lex_state = 3},
  [356] = {.lex_state = 86, .external_lex_state = 3},
  [357] = {.lex_state = 112, .external_lex_state = 1},
  [358] = {.lex_state = 112, .external_lex_state = 1},
  [359] = {.lex_state = 112, .external_lex_state = 1},
  [360] = {.lex_state = 112, .external_lex_state = 1},
  [361] = {.lex_state = 102, .external_lex_state = 2},
  [362] = {.lex_state = 92, .external_lex_state = 5},
  [363] = {.lex_state = 88, .external_lex_state = 3},
  [364] = {.lex_state = 92, .external_lex_state = 5},
  [365] = {.lex_state = 88, .external_lex_state = 3},
  [366] = {.lex_state = 92, .external_lex_state = 5},
  [367] = {.lex_state = 88, .external_lex_state = 3},
  [368] = {.lex_state = 112, .external_lex_state = 1},
  [369] = {.lex_state = 112, .external_lex_state = 1},
  [370] = {.lex_state = 112, .external_lex_state = 1},
  [371] = {.lex_state = 92, .external_lex_state = 5},
  [372] = {.lex_state = 88, .external_lex_state = 3},
  [373] = {.lex_state = 88, .external_lex_state = 3},
  [374] = {.lex_state = 112, .external_lex_state = 1},
  [375] = {.lex_state = 92, .external_lex_state = 5},
  [376] = {.lex_state = 92, .external_lex_state = 5},
  [377] = {.lex_state = 112, .external_lex_state = 1},
  [378] = {.lex_state = 92, .external_lex_state = 2},
  [379] = {.lex_state = 92, .external_lex_state = 2},
  [380] = {.lex_state = 115, .external_lex_state = 3},
  [381] = {.lex_state = 114, .external_lex_state = 3},
  [382] = {.lex_state = 0, .external_lex_state = 5},
  [383] = {.lex_state = 115, .external_lex_state = 3},
  [384] = {.lex_state = 2, .external_lex_state = 2},
  [385] = {.lex_state = 0, .external_lex_state = 5},
  [386] = {.lex_state = 92, .external_lex_state = 2},
  [387] = {.lex_state = 92, .external_lex_state = 2},
  [388] = {.lex_state = 0, .external_lex_state = 3},
  [389] = {.lex_state = 0, .external_lex_state = 5},
  [390] = {.lex_state = 0, .external_lex_state = 3},
  [391] = {.lex_state = 0, .external_lex_state = 5},
  [392] = {.lex_state = 2, .external_lex_state = 2},
  [393] = {.lex_state = 92, .external_lex_state = 2},
  [394] = {.lex_state = 0, .external_lex_state = 5},
  [395] = {.lex_state = 0, .external_lex_state = 5},
  [396] = {.lex_state = 92, .external_lex_state = 2},
  [397] = {.lex_state = 88, .external_lex_state = 2},
  [398] = {.lex_state = 0, .external_lex_state = 5},
  [399] = {.lex_state = 92, .external_lex_state = 2},
  [400] = {.lex_state = 88, .external_lex_state = 2},
  [401] = {.lex_state = 88, .external_lex_state = 2},
  [402] = {.lex_state = 0, .external_lex_state = 3},
  [403] = {.lex_state = 88, .external_lex_state = 2},
  [404] = {.lex_state = 0, .external_lex_state = 3},
  [405] = {.lex_state = 0, .external_lex_state = 6},
  [406] = {.lex_state = 0, .external_lex_state = 3},
  [407] = {.lex_state = 92, .external_lex_state = 2},
  [408] = {.lex_state = 34, .external_lex_state = 2},
  [409] = {.lex_state = 34, .external_lex_state = 2},
  [410] = {.lex_state = 34, .external_lex_state = 2},
  [411] = {.lex_state = 0, .external_lex_state = 3},
  [412] = {.lex_state = 0, .external_lex_state = 5},
  [413] = {.lex_state = 0, .external_lex_state = 3},
  [414] = {.lex_state = 0, .external_lex_state = 3},
  [415] = {.lex_state = 34, .external_lex_state = 2},
  [416] = {.lex_state = 0, .external_lex_state = 3},
  [417] = {.lex_state = 34, .external_lex_state = 2},
  [418] = {.lex_state = 34, .external_lex_state = 2},
  [419] = {.lex_state = 0, .external_lex_state = 3},
  [420] = {.lex_state = 34, .external_lex_state = 2},
  [421] = {.lex_state = 0, .external_lex_state = 3},
  [422] = {.lex_state = 34, .external_lex_state = 2},
  [423] = {.lex_state = 0, .external_lex_state = 3},
  [424] = {.lex_state = 0, .external_lex_state = 3},
  [425] = {.lex_state = 0, .external_lex_state = 3},
  [426] = {.lex_state = 88, .external_lex_state = 2},
  [427] = {.lex_state = 0, .external_lex_state = 3},
  [428] = {.lex_state = 0, .external_lex_state = 3},
  [429] = {.lex_state = 0, .external_lex_state = 5},
  [430] = {.lex_state = 0, .external_lex_state = 3},
  [431] = {.lex_state = 34, .external_lex_state = 2},
  [432] = {.lex_state = 0, .external_lex_state = 5},
  [433] = {.lex_state = 0, .external_lex_state = 2},
  [434] = {.lex_state = 0, .external_lex_state = 2},
  [435] = {.lex_state = 0, .external_lex_state = 5},
  [436] = {.lex_state = 0, .external_lex_state = 5},
  [437] = {.lex_state = 0, .external_lex_state = 2},
  [438] = {.lex_state = 0, .external_lex_state = 2},
  [439] = {.lex_state = 35, .external_lex_state = 2},
  [440] = {.lex_state = 92, .external_lex_state = 2},
  [441] = {.lex_state = 0, .external_lex_state = 2},
  [442] = {.lex_state = 0, .external_lex_state = 5},
  [443] = {.lex_state = 0, .external_lex_state = 3},
  [444] = {.lex_state = 88, .external_lex_state = 2},
  [445] = {.lex_state = 0, .external_lex_state = 2},
  [446] = {.lex_state = 88, .external_lex_state = 2},
  [447] = {.lex_state = 0, .external_lex_state = 6},
  [448] = {.lex_state = 0, .external_lex_state = 2},
  [449] = {.lex_state = 92, .external_lex_state = 2},
  [450] = {.lex_state = 42, .external_lex_state = 2},
  [451] = {.lex_state = 0, .external_lex_state = 6},
  [452] = {.lex_state = 35, .external_lex_state = 2},
  [453] = {.lex_state = 42, .external_lex_state = 2},
  [454] = {.lex_state = 111, .external_lex_state = 2},
  [455] = {.lex_state = 0, .external_lex_state = 3},
  [456] = {.lex_state = 42, .external_lex_state = 2},
  [457] = {.lex_state = 42, .external_lex_state = 2},
  [458] = {.lex_state = 35, .external_lex_state = 2},
  [459] = {.lex_state = 0, .external_lex_state = 2},
  [460] = {.lex_state = 0, .external_lex_state = 2},
  [461] = {.lex_state = 42, .external_lex_state = 2},
  [462] = {.lex_state = 0, .external_lex_state = 2},
  [463] = {.lex_state = 0, .external_lex_state = 2},
  [464] = {.lex_state = 0, .external_lex_state = 2},
  [465] = {.lex_state = 0, .external_lex_state = 2},
  [466] = {.lex_state = 0, .external_lex_state = 2},
  [467] = {.lex_state = 27, .external_lex_state = 2},
  [468] = {.lex_state = 203, .external_lex_state = 2},
  [469] = {.lex_state = 0, .external_lex_state = 2},
  [470] = {.lex_state = 0, .external_lex_state = 2},
  [471] = {.lex_state = 35, .external_lex_state = 2},
  [472] = {.lex_state = 0, .external_lex_state = 2},
  [473] = {.lex_state = 203, .external_lex_state = 2},
  [474] = {.lex_state = 0, .external_lex_state = 2},
  [475] = {.lex_state = 0, .external_lex_state = 2},
  [476] = {.lex_state = 114, .external_lex_state = 2},
  [477] = {.lex_state = 0, .external_lex_state = 2},
  [478] = {.lex_state = 114, .external_lex_state = 2},
  [479] = {.lex_state = 0, .external_lex_state = 2},
  [480] = {.lex_state = 0, .external_lex_state = 2},
  [481] = {.lex_state = 0, .external_lex_state = 2},
  [482] = {.lex_state = 113, .external_lex_state = 2},
  [483] = {.lex_state = 0, .external_lex_state = 2},
  [484] = {.lex_state = 0, .external_lex_state = 2},
  [485] = {.lex_state = 0, .external_lex_state = 2},
  [486] = {.lex_state = 114, .external_lex_state = 2},
  [487] = {.lex_state = 0, .external_lex_state = 2},
  [488] = {.lex_state = 0, .external_lex_state = 2},
  [489] = {.lex_state = 203, .external_lex_state = 2},
  [490] = {.lex_state = 0, .external_lex_state = 2},
  [491] = {.lex_state = 0, .external_lex_state = 2},
  [492] = {.lex_state = 111, .external_lex_state = 2},
  [493] = {.lex_state = 35, .external_lex_state = 2},
  [494] = {.lex_state = 35, .external_lex_state = 2},
  [495] = {.lex_state = 0, .external_lex_state = 2},
  [496] = {.lex_state = 0, .external_lex_state = 3},
  [497] = {.lex_state = 0, .external_lex_state = 2},
  [498] = {.lex_state = 203, .external_lex_state = 2},
  [499] = {.lex_state = 0, .external_lex_state = 2},
  [500] = {.lex_state = 0, .external_lex_state = 2},
  [501] = {.lex_state = 0, .external_lex_state = 2},
  [502] = {.lex_state = 114, .external_lex_state = 2},
  [503] = {.lex_state = 0, .external_lex_state = 2},
  [504] = {.lex_state = 114, .external_lex_state = 2},
  [505] = {.lex_state = 0, .external_lex_state = 2},
  [506] = {.lex_state = 0, .external_lex_state = 2},
  [507] = {.lex_state = 0, .external_lex_state = 2},
  [508] = {.lex_state = 114, .external_lex_state = 2},
  [509] = {.lex_state = 0, .external_lex_state = 2},
  [510] = {.lex_state = 0, .external_lex_state = 2},
  [511] = {.lex_state = 27, .external_lex_state = 2},
  [512] = {.lex_state = 0, .external_lex_state = 2},
  [513] = {.lex_state = 0, .external_lex_state = 2},
  [514] = {.lex_state = 0, .external_lex_state = 2},
  [515] = {.lex_state = 35, .external_lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [sym_block_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_macro_mnemonic] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOTbyte] = ACTIONS(1),
    [anon_sym_DOT2byte] = ACTIONS(1),
    [anon_sym_DOTshort] = ACTIONS(1),
    [anon_sym_DOThalf] = ACTIONS(1),
    [anon_sym_DOThword] = ACTIONS(1),
    [anon_sym_DOT4byte] = ACTIONS(1),
    [anon_sym_DOTword] = ACTIONS(1),
    [anon_sym_DOTint] = ACTIONS(1),
    [anon_sym_DOT8byte] = ACTIONS(1),
    [anon_sym_DOTdword] = ACTIONS(1),
    [anon_sym_DOTlong] = ACTIONS(1),
    [anon_sym_DOTquad] = ACTIONS(1),
    [anon_sym_DOTcomm] = ACTIONS(1),
    [anon_sym_DOTlcomm] = ACTIONS(1),
    [anon_sym_DOTalign] = ACTIONS(1),
    [anon_sym_DOTbalign] = ACTIONS(1),
    [anon_sym_DOTp2align] = ACTIONS(1),
    [anon_sym_DOTsleb128] = ACTIONS(1),
    [anon_sym_DOTuleb128] = ACTIONS(1),
    [anon_sym_DOTdtprelword] = ACTIONS(1),
    [anon_sym_DOTdtpreldword] = ACTIONS(1),
    [anon_sym_DOTskip] = ACTIONS(1),
    [anon_sym_DOTspace] = ACTIONS(1),
    [anon_sym_DOTfloat] = ACTIONS(1),
    [anon_sym_DOTdouble] = ACTIONS(1),
    [anon_sym_DOTsingle] = ACTIONS(1),
    [anon_sym_DOTasciz] = ACTIONS(1),
    [anon_sym_DOTascii] = ACTIONS(1),
    [anon_sym_DOTasciiz] = ACTIONS(1),
    [anon_sym_DOTstring] = ACTIONS(1),
    [anon_sym_DOTstringz] = ACTIONS(1),
    [aux_sym_control_mnemonic_token1] = ACTIONS(1),
    [aux_sym_section_type_token1] = ACTIONS(1),
    [sym_assignment_operator] = ACTIONS(1),
    [sym_logical_or_operator] = ACTIONS(1),
    [sym_logical_and_operator] = ACTIONS(1),
    [sym_bitwise_or_operator] = ACTIONS(1),
    [sym_bitwise_xor_operator] = ACTIONS(1),
    [sym_bitwise_and_operator] = ACTIONS(1),
    [sym_equality_operator] = ACTIONS(1),
    [sym_relational_operator] = ACTIONS(1),
    [sym_shift_operator] = ACTIONS(1),
    [sym_additive_operator] = ACTIONS(1),
    [sym_multiplicative_operator] = ACTIONS(1),
    [sym_unary_minus_operator] = ACTIONS(1),
    [sym_bitwise_not_operator] = ACTIONS(1),
    [sym_logical_not_operator] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__escape_sequence] = ACTIONS(1),
    [sym_register] = ACTIONS(1),
    [sym_macro_name] = ACTIONS(1),
    [sym_local_label] = ACTIONS(1),
    [aux_sym_local_label_reference_token1] = ACTIONS(1),
    [sym_global_label] = ACTIONS(1),
    [aux_sym_symbol_token1] = ACTIONS(1),
    [sym_global_numeric_label] = ACTIONS(1),
    [sym_local_numeric_label] = ACTIONS(1),
    [sym_local_numeric_label_reference] = ACTIONS(1),
    [sym__operand_separator] = ACTIONS(1),
    [sym__operator_space] = ACTIONS(3),
    [sym__line_separator] = ACTIONS(1),
    [sym__data_separator] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(500),
    [sym__statement] = STATE(4),
    [sym__comment] = STATE(505),
    [sym_directive] = STATE(390),
    [sym__macro_directive] = STATE(423),
    [sym__numeric_directive] = STATE(427),
    [sym_numeric_mnemonic] = STATE(502),
    [sym__string_directive] = STATE(402),
    [sym_string_mnemonic] = STATE(504),
    [sym__control_directive] = STATE(424),
    [sym_control_mnemonic] = STATE(383),
    [sym_instruction] = STATE(378),
    [sym__label] = STATE(4),
    [aux_sym_program_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_CR] = ACTIONS(7),
    [anon_sym_LF] = ACTIONS(7),
    [sym_line_comment] = ACTIONS(9),
    [sym_block_comment] = ACTIONS(11),
    [sym_macro_mnemonic] = ACTIONS(13),
    [anon_sym_DOTbyte] = ACTIONS(15),
    [anon_sym_DOT2byte] = ACTIONS(15),
    [anon_sym_DOTshort] = ACTIONS(15),
    [anon_sym_DOThalf] = ACTIONS(15),
    [anon_sym_DOThword] = ACTIONS(15),
    [anon_sym_DOT4byte] = ACTIONS(15),
    [anon_sym_DOTword] = ACTIONS(15),
    [anon_sym_DOTint] = ACTIONS(15),
    [anon_sym_DOT8byte] = ACTIONS(15),
    [anon_sym_DOTdword] = ACTIONS(15),
    [anon_sym_DOTlong] = ACTIONS(15),
    [anon_sym_DOTquad] = ACTIONS(15),
    [anon_sym_DOTcomm] = ACTIONS(15),
    [anon_sym_DOTlcomm] = ACTIONS(15),
    [anon_sym_DOTalign] = ACTIONS(15),
    [anon_sym_DOTbalign] = ACTIONS(15),
    [anon_sym_DOTp2align] = ACTIONS(15),
    [anon_sym_DOTsleb128] = ACTIONS(15),
    [anon_sym_DOTuleb128] = ACTIONS(15),
    [anon_sym_DOTdtprelword] = ACTIONS(15),
    [anon_sym_DOTdtpreldword] = ACTIONS(15),
    [anon_sym_DOTskip] = ACTIONS(15),
    [anon_sym_DOTspace] = ACTIONS(15),
    [anon_sym_DOTfloat] = ACTIONS(15),
    [anon_sym_DOTdouble] = ACTIONS(15),
    [anon_sym_DOTsingle] = ACTIONS(15),
    [anon_sym_DOTasciz] = ACTIONS(17),
    [anon_sym_DOTascii] = ACTIONS(17),
    [anon_sym_DOTasciiz] = ACTIONS(17),
    [anon_sym_DOTstring] = ACTIONS(17),
    [anon_sym_DOTstringz] = ACTIONS(17),
    [aux_sym_control_mnemonic_token1] = ACTIONS(19),
    [sym_opcode] = ACTIONS(21),
    [sym_local_label] = ACTIONS(23),
    [sym_global_label] = ACTIONS(23),
    [sym_global_numeric_label] = ACTIONS(23),
    [sym_local_numeric_label] = ACTIONS(23),
    [sym__operator_space] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 39,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      aux_sym_section_type_token1,
    ACTIONS(31), 1,
      aux_sym_option_flag_token1,
    ACTIONS(33), 1,
      sym_unary_minus_operator,
    ACTIONS(37), 1,
      sym_relocation_type,
    ACTIONS(43), 1,
      aux_sym_decimal_token1,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(51), 1,
      aux_sym_symbol_token1,
    STATE(180), 1,
      sym__assignment_expression,
    STATE(181), 1,
      sym__logical_or_expression,
    STATE(182), 1,
      sym__wrapped_logical_or_expression,
    STATE(183), 1,
      sym__logical_and_expression,
    STATE(184), 1,
      sym__wrapped_logical_and_expression,
    STATE(185), 1,
      sym__bitwise_or_expression,
    STATE(186), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(187), 1,
      sym__bitwise_xor_expression,
    STATE(188), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(189), 1,
      sym__bitwise_and_expression,
    STATE(190), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(191), 1,
      sym__equality_expression,
    STATE(192), 1,
      sym__wrapped_equality_expression,
    STATE(193), 1,
      sym__relational_expression,
    STATE(195), 1,
      sym__shift_expression,
    STATE(196), 1,
      sym__wrapped_shift_expression,
    STATE(197), 1,
      sym__additive_expression,
    STATE(198), 1,
      sym__wrapped_additive_expression,
    STATE(199), 1,
      sym__multiplicative_expression,
    STATE(237), 1,
      sym__wrapped_relational_expression,
    STATE(360), 1,
      sym__wrapped_assignment_expression,
    STATE(428), 1,
      sym_control_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(35), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(41), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(25), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
    STATE(359), 4,
      sym__control_operand,
      sym_section_type,
      sym_option_flag,
      sym_string,
    ACTIONS(39), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(200), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [140] = 38,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      sym_relocation_type,
    ACTIONS(65), 1,
      aux_sym_decimal_token1,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(73), 1,
      aux_sym_symbol_token1,
    STATE(152), 1,
      sym__relational_expression,
    STATE(153), 1,
      sym__assignment_expression,
    STATE(154), 1,
      sym__logical_or_expression,
    STATE(155), 1,
      sym__wrapped_logical_or_expression,
    STATE(157), 1,
      sym__logical_and_expression,
    STATE(160), 1,
      sym__wrapped_logical_and_expression,
    STATE(161), 1,
      sym__bitwise_or_expression,
    STATE(162), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(163), 1,
      sym__bitwise_xor_expression,
    STATE(164), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(165), 1,
      sym__bitwise_and_expression,
    STATE(166), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(167), 1,
      sym__equality_expression,
    STATE(168), 1,
      sym__wrapped_relational_expression,
    STATE(169), 1,
      sym__shift_expression,
    STATE(170), 1,
      sym__wrapped_shift_expression,
    STATE(171), 1,
      sym__additive_expression,
    STATE(202), 1,
      sym__wrapped_additive_expression,
    STATE(229), 1,
      sym__wrapped_equality_expression,
    STATE(233), 1,
      sym__multiplicative_expression,
    STATE(353), 1,
      sym__wrapped_assignment_expression,
    STATE(393), 1,
      sym_operands,
    STATE(399), 1,
      sym__call_expression,
    STATE(364), 2,
      sym__operand,
      sym_string,
    ACTIONS(59), 3,
      sym_unary_minus_operator,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(55), 4,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
    ACTIONS(63), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(179), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [276] = 22,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(9), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(13), 1,
      sym_macro_mnemonic,
    ACTIONS(19), 1,
      aux_sym_control_mnemonic_token1,
    ACTIONS(21), 1,
      sym_opcode,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    STATE(379), 1,
      sym_instruction,
    STATE(383), 1,
      sym_control_mnemonic,
    STATE(388), 1,
      sym_directive,
    STATE(402), 1,
      sym__string_directive,
    STATE(423), 1,
      sym__macro_directive,
    STATE(424), 1,
      sym__control_directive,
    STATE(427), 1,
      sym__numeric_directive,
    STATE(497), 1,
      sym__comment,
    STATE(502), 1,
      sym_numeric_mnemonic,
    STATE(504), 1,
      sym_string_mnemonic,
    ACTIONS(77), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
    STATE(6), 3,
      sym__statement,
      sym__label,
      aux_sym_program_repeat1,
    ACTIONS(23), 4,
      sym_local_label,
      sym_global_label,
      sym_global_numeric_label,
      sym_local_numeric_label,
    ACTIONS(17), 5,
      anon_sym_DOTasciz,
      anon_sym_DOTascii,
      anon_sym_DOTasciiz,
      anon_sym_DOTstring,
      anon_sym_DOTstringz,
    ACTIONS(15), 26,
      anon_sym_DOTbyte,
      anon_sym_DOT2byte,
      anon_sym_DOTshort,
      anon_sym_DOThalf,
      anon_sym_DOThword,
      anon_sym_DOT4byte,
      anon_sym_DOTword,
      anon_sym_DOTint,
      anon_sym_DOT8byte,
      anon_sym_DOTdword,
      anon_sym_DOTlong,
      anon_sym_DOTquad,
      anon_sym_DOTcomm,
      anon_sym_DOTlcomm,
      anon_sym_DOTalign,
      anon_sym_DOTbalign,
      anon_sym_DOTp2align,
      anon_sym_DOTsleb128,
      anon_sym_DOTuleb128,
      anon_sym_DOTdtprelword,
      anon_sym_DOTdtpreldword,
      anon_sym_DOTskip,
      anon_sym_DOTspace,
      anon_sym_DOTfloat,
      anon_sym_DOTdouble,
      anon_sym_DOTsingle,
  [379] = 34,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      sym_relocation_type,
    ACTIONS(91), 1,
      aux_sym_decimal_token1,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(97), 1,
      aux_sym_symbol_token1,
    STATE(108), 1,
      sym__multiplicative_expression,
    STATE(113), 1,
      sym__assignment_expression,
    STATE(114), 1,
      sym__logical_or_expression,
    STATE(115), 1,
      sym__wrapped_logical_or_expression,
    STATE(116), 1,
      sym__logical_and_expression,
    STATE(117), 1,
      sym__wrapped_logical_and_expression,
    STATE(118), 1,
      sym__bitwise_or_expression,
    STATE(119), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(120), 1,
      sym__bitwise_xor_expression,
    STATE(121), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(122), 1,
      sym__bitwise_and_expression,
    STATE(123), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(124), 1,
      sym__equality_expression,
    STATE(125), 1,
      sym__wrapped_equality_expression,
    STATE(126), 1,
      sym__relational_expression,
    STATE(127), 1,
      sym__wrapped_relational_expression,
    STATE(129), 1,
      sym__wrapped_shift_expression,
    STATE(130), 1,
      sym__additive_expression,
    STATE(131), 1,
      sym__wrapped_additive_expression,
    STATE(150), 1,
      sym__shift_expression,
    STATE(331), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(79), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(85), 3,
      sym_unary_minus_operator,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(81), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(89), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(132), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [506] = 21,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 1,
      sym_line_comment,
    ACTIONS(107), 1,
      sym_macro_mnemonic,
    ACTIONS(116), 1,
      aux_sym_control_mnemonic_token1,
    ACTIONS(119), 1,
      sym_opcode,
    STATE(383), 1,
      sym_control_mnemonic,
    STATE(402), 1,
      sym__string_directive,
    STATE(407), 1,
      sym_instruction,
    STATE(423), 1,
      sym__macro_directive,
    STATE(424), 1,
      sym__control_directive,
    STATE(427), 1,
      sym__numeric_directive,
    STATE(443), 1,
      sym_directive,
    STATE(502), 1,
      sym_numeric_mnemonic,
    STATE(504), 1,
      sym_string_mnemonic,
    ACTIONS(101), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
    STATE(6), 3,
      sym__statement,
      sym__label,
      aux_sym_program_repeat1,
    ACTIONS(122), 4,
      sym_local_label,
      sym_global_label,
      sym_global_numeric_label,
      sym_local_numeric_label,
    ACTIONS(113), 5,
      anon_sym_DOTasciz,
      anon_sym_DOTascii,
      anon_sym_DOTasciiz,
      anon_sym_DOTstring,
      anon_sym_DOTstringz,
    ACTIONS(110), 26,
      anon_sym_DOTbyte,
      anon_sym_DOT2byte,
      anon_sym_DOTshort,
      anon_sym_DOThalf,
      anon_sym_DOThword,
      anon_sym_DOT4byte,
      anon_sym_DOTword,
      anon_sym_DOTint,
      anon_sym_DOT8byte,
      anon_sym_DOTdword,
      anon_sym_DOTlong,
      anon_sym_DOTquad,
      anon_sym_DOTcomm,
      anon_sym_DOTlcomm,
      anon_sym_DOTalign,
      anon_sym_DOTbalign,
      anon_sym_DOTp2align,
      anon_sym_DOTsleb128,
      anon_sym_DOTuleb128,
      anon_sym_DOTdtprelword,
      anon_sym_DOTdtpreldword,
      anon_sym_DOTskip,
      anon_sym_DOTspace,
      anon_sym_DOTfloat,
      anon_sym_DOTdouble,
      anon_sym_DOTsingle,
  [606] = 36,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      sym_relocation_type,
    ACTIONS(65), 1,
      aux_sym_decimal_token1,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(73), 1,
      aux_sym_symbol_token1,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    STATE(152), 1,
      sym__relational_expression,
    STATE(153), 1,
      sym__assignment_expression,
    STATE(154), 1,
      sym__logical_or_expression,
    STATE(155), 1,
      sym__wrapped_logical_or_expression,
    STATE(157), 1,
      sym__logical_and_expression,
    STATE(160), 1,
      sym__wrapped_logical_and_expression,
    STATE(161), 1,
      sym__bitwise_or_expression,
    STATE(162), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(163), 1,
      sym__bitwise_xor_expression,
    STATE(164), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(165), 1,
      sym__bitwise_and_expression,
    STATE(166), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(167), 1,
      sym__equality_expression,
    STATE(168), 1,
      sym__wrapped_relational_expression,
    STATE(169), 1,
      sym__shift_expression,
    STATE(170), 1,
      sym__wrapped_shift_expression,
    STATE(171), 1,
      sym__additive_expression,
    STATE(202), 1,
      sym__wrapped_additive_expression,
    STATE(229), 1,
      sym__wrapped_equality_expression,
    STATE(233), 1,
      sym__multiplicative_expression,
    STATE(353), 1,
      sym__wrapped_assignment_expression,
    STATE(376), 2,
      sym__operand,
      sym_string,
    ACTIONS(59), 3,
      sym_unary_minus_operator,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(127), 4,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
    ACTIONS(63), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(179), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [736] = 38,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      aux_sym_section_type_token1,
    ACTIONS(31), 1,
      aux_sym_option_flag_token1,
    ACTIONS(33), 1,
      sym_unary_minus_operator,
    ACTIONS(37), 1,
      sym_relocation_type,
    ACTIONS(43), 1,
      aux_sym_decimal_token1,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(51), 1,
      aux_sym_symbol_token1,
    STATE(180), 1,
      sym__assignment_expression,
    STATE(181), 1,
      sym__logical_or_expression,
    STATE(182), 1,
      sym__wrapped_logical_or_expression,
    STATE(183), 1,
      sym__logical_and_expression,
    STATE(184), 1,
      sym__wrapped_logical_and_expression,
    STATE(185), 1,
      sym__bitwise_or_expression,
    STATE(186), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(187), 1,
      sym__bitwise_xor_expression,
    STATE(188), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(189), 1,
      sym__bitwise_and_expression,
    STATE(190), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(191), 1,
      sym__equality_expression,
    STATE(192), 1,
      sym__wrapped_equality_expression,
    STATE(193), 1,
      sym__relational_expression,
    STATE(195), 1,
      sym__shift_expression,
    STATE(196), 1,
      sym__wrapped_shift_expression,
    STATE(197), 1,
      sym__additive_expression,
    STATE(198), 1,
      sym__wrapped_additive_expression,
    STATE(199), 1,
      sym__multiplicative_expression,
    STATE(237), 1,
      sym__wrapped_relational_expression,
    STATE(360), 1,
      sym__wrapped_assignment_expression,
    STATE(411), 1,
      sym_control_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(35), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(41), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(359), 4,
      sym__control_operand,
      sym_section_type,
      sym_option_flag,
      sym_string,
    ACTIONS(39), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(200), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [870] = 36,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      sym_relocation_type,
    ACTIONS(65), 1,
      aux_sym_decimal_token1,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(73), 1,
      aux_sym_symbol_token1,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    STATE(152), 1,
      sym__relational_expression,
    STATE(153), 1,
      sym__assignment_expression,
    STATE(154), 1,
      sym__logical_or_expression,
    STATE(155), 1,
      sym__wrapped_logical_or_expression,
    STATE(157), 1,
      sym__logical_and_expression,
    STATE(160), 1,
      sym__wrapped_logical_and_expression,
    STATE(161), 1,
      sym__bitwise_or_expression,
    STATE(162), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(163), 1,
      sym__bitwise_xor_expression,
    STATE(164), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(165), 1,
      sym__bitwise_and_expression,
    STATE(166), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(167), 1,
      sym__equality_expression,
    STATE(168), 1,
      sym__wrapped_relational_expression,
    STATE(169), 1,
      sym__shift_expression,
    STATE(170), 1,
      sym__wrapped_shift_expression,
    STATE(171), 1,
      sym__additive_expression,
    STATE(202), 1,
      sym__wrapped_additive_expression,
    STATE(229), 1,
      sym__wrapped_equality_expression,
    STATE(233), 1,
      sym__multiplicative_expression,
    STATE(353), 1,
      sym__wrapped_assignment_expression,
    STATE(376), 2,
      sym__operand,
      sym_string,
    ACTIONS(59), 3,
      sym_unary_minus_operator,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(133), 4,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
    ACTIONS(63), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(179), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1000] = 37,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      aux_sym_section_type_token1,
    ACTIONS(31), 1,
      aux_sym_option_flag_token1,
    ACTIONS(33), 1,
      sym_unary_minus_operator,
    ACTIONS(37), 1,
      sym_relocation_type,
    ACTIONS(43), 1,
      aux_sym_decimal_token1,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(51), 1,
      aux_sym_symbol_token1,
    STATE(180), 1,
      sym__assignment_expression,
    STATE(181), 1,
      sym__logical_or_expression,
    STATE(182), 1,
      sym__wrapped_logical_or_expression,
    STATE(183), 1,
      sym__logical_and_expression,
    STATE(184), 1,
      sym__wrapped_logical_and_expression,
    STATE(185), 1,
      sym__bitwise_or_expression,
    STATE(186), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(187), 1,
      sym__bitwise_xor_expression,
    STATE(188), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(189), 1,
      sym__bitwise_and_expression,
    STATE(190), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(191), 1,
      sym__equality_expression,
    STATE(192), 1,
      sym__wrapped_equality_expression,
    STATE(193), 1,
      sym__relational_expression,
    STATE(195), 1,
      sym__shift_expression,
    STATE(196), 1,
      sym__wrapped_shift_expression,
    STATE(197), 1,
      sym__additive_expression,
    STATE(198), 1,
      sym__wrapped_additive_expression,
    STATE(199), 1,
      sym__multiplicative_expression,
    STATE(237), 1,
      sym__wrapped_relational_expression,
    STATE(360), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(35), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(41), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(369), 4,
      sym__control_operand,
      sym_section_type,
      sym_option_flag,
      sym_string,
    ACTIONS(39), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(200), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1131] = 37,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
    ACTIONS(139), 1,
      sym_unary_minus_operator,
    ACTIONS(143), 1,
      sym_relocation_type,
    ACTIONS(149), 1,
      aux_sym_decimal_token1,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(240), 1,
      sym__logical_and_expression,
    STATE(248), 1,
      sym__shift_expression,
    STATE(252), 1,
      sym__wrapped_shift_expression,
    STATE(253), 1,
      sym__additive_expression,
    STATE(254), 1,
      sym__wrapped_additive_expression,
    STATE(255), 1,
      sym__multiplicative_expression,
    STATE(258), 1,
      sym__bitwise_xor_expression,
    STATE(259), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(260), 1,
      sym__bitwise_and_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(263), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(266), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(267), 1,
      sym__wrapped_logical_and_expression,
    STATE(274), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(290), 1,
      sym__assignment_expression,
    STATE(291), 1,
      sym__logical_or_expression,
    STATE(292), 1,
      sym__wrapped_logical_or_expression,
    STATE(293), 1,
      sym__relational_expression,
    STATE(389), 1,
      sym__wrapped_assignment_expression,
    STATE(484), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(141), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(147), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(432), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(256), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1260] = 39,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
    ACTIONS(139), 1,
      sym_unary_minus_operator,
    ACTIONS(143), 1,
      sym_relocation_type,
    ACTIONS(149), 1,
      aux_sym_decimal_token1,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(240), 1,
      sym__logical_and_expression,
    STATE(248), 1,
      sym__shift_expression,
    STATE(252), 1,
      sym__wrapped_shift_expression,
    STATE(253), 1,
      sym__additive_expression,
    STATE(254), 1,
      sym__wrapped_additive_expression,
    STATE(255), 1,
      sym__multiplicative_expression,
    STATE(258), 1,
      sym__bitwise_xor_expression,
    STATE(259), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(260), 1,
      sym__bitwise_and_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(262), 1,
      sym_symbol,
    STATE(263), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(266), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(267), 1,
      sym__wrapped_logical_and_expression,
    STATE(274), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(290), 1,
      sym__assignment_expression,
    STATE(291), 1,
      sym__logical_or_expression,
    STATE(292), 1,
      sym__wrapped_logical_or_expression,
    STATE(293), 1,
      sym__relational_expression,
    STATE(385), 1,
      sym__wrapped_assignment_expression,
    STATE(469), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(141), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(147), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(159), 2,
      sym_register,
      sym_macro_variable,
    STATE(432), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(256), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1393] = 38,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_unary_minus_operator,
    ACTIONS(143), 1,
      sym_relocation_type,
    ACTIONS(149), 1,
      aux_sym_decimal_token1,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(240), 1,
      sym__logical_and_expression,
    STATE(248), 1,
      sym__shift_expression,
    STATE(252), 1,
      sym__wrapped_shift_expression,
    STATE(253), 1,
      sym__additive_expression,
    STATE(254), 1,
      sym__wrapped_additive_expression,
    STATE(255), 1,
      sym__multiplicative_expression,
    STATE(258), 1,
      sym__bitwise_xor_expression,
    STATE(259), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(260), 1,
      sym__bitwise_and_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(263), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(266), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(267), 1,
      sym__wrapped_logical_and_expression,
    STATE(274), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(286), 1,
      sym_symbol,
    STATE(290), 1,
      sym__assignment_expression,
    STATE(291), 1,
      sym__logical_or_expression,
    STATE(292), 1,
      sym__wrapped_logical_or_expression,
    STATE(293), 1,
      sym__relational_expression,
    STATE(389), 1,
      sym__wrapped_assignment_expression,
    STATE(503), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(141), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(147), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(161), 2,
      sym_register,
      sym_macro_variable,
    STATE(432), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(256), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1523] = 38,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_unary_minus_operator,
    ACTIONS(143), 1,
      sym_relocation_type,
    ACTIONS(149), 1,
      aux_sym_decimal_token1,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(240), 1,
      sym__logical_and_expression,
    STATE(248), 1,
      sym__shift_expression,
    STATE(252), 1,
      sym__wrapped_shift_expression,
    STATE(253), 1,
      sym__additive_expression,
    STATE(254), 1,
      sym__wrapped_additive_expression,
    STATE(255), 1,
      sym__multiplicative_expression,
    STATE(258), 1,
      sym__bitwise_xor_expression,
    STATE(259), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(260), 1,
      sym__bitwise_and_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(263), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(266), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(267), 1,
      sym__wrapped_logical_and_expression,
    STATE(270), 1,
      sym_symbol,
    STATE(274), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(290), 1,
      sym__assignment_expression,
    STATE(291), 1,
      sym__logical_or_expression,
    STATE(292), 1,
      sym__wrapped_logical_or_expression,
    STATE(293), 1,
      sym__relational_expression,
    STATE(391), 1,
      sym__wrapped_assignment_expression,
    STATE(501), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(141), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(147), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(163), 2,
      sym_register,
      sym_macro_variable,
    STATE(432), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(256), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1653] = 36,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_unary_minus_operator,
    ACTIONS(143), 1,
      sym_relocation_type,
    ACTIONS(149), 1,
      aux_sym_decimal_token1,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(240), 1,
      sym__logical_and_expression,
    STATE(248), 1,
      sym__shift_expression,
    STATE(252), 1,
      sym__wrapped_shift_expression,
    STATE(253), 1,
      sym__additive_expression,
    STATE(254), 1,
      sym__wrapped_additive_expression,
    STATE(255), 1,
      sym__multiplicative_expression,
    STATE(258), 1,
      sym__bitwise_xor_expression,
    STATE(259), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(260), 1,
      sym__bitwise_and_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(263), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(266), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(267), 1,
      sym__wrapped_logical_and_expression,
    STATE(274), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(290), 1,
      sym__assignment_expression,
    STATE(291), 1,
      sym__logical_or_expression,
    STATE(292), 1,
      sym__wrapped_logical_or_expression,
    STATE(293), 1,
      sym__relational_expression,
    STATE(389), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(141), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(147), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(442), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(256), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1779] = 38,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_unary_minus_operator,
    ACTIONS(143), 1,
      sym_relocation_type,
    ACTIONS(149), 1,
      aux_sym_decimal_token1,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(240), 1,
      sym__logical_and_expression,
    STATE(248), 1,
      sym__shift_expression,
    STATE(252), 1,
      sym__wrapped_shift_expression,
    STATE(253), 1,
      sym__additive_expression,
    STATE(254), 1,
      sym__wrapped_additive_expression,
    STATE(255), 1,
      sym__multiplicative_expression,
    STATE(258), 1,
      sym__bitwise_xor_expression,
    STATE(259), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(260), 1,
      sym__bitwise_and_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(263), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(266), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(267), 1,
      sym__wrapped_logical_and_expression,
    STATE(274), 1,
      sym__wrapped_relational_expression,
    STATE(276), 1,
      sym_symbol,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(290), 1,
      sym__assignment_expression,
    STATE(291), 1,
      sym__logical_or_expression,
    STATE(292), 1,
      sym__wrapped_logical_or_expression,
    STATE(293), 1,
      sym__relational_expression,
    STATE(389), 1,
      sym__wrapped_assignment_expression,
    STATE(514), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(141), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(147), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(165), 2,
      sym_register,
      sym_macro_variable,
    STATE(432), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(256), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1909] = 38,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_unary_minus_operator,
    ACTIONS(143), 1,
      sym_relocation_type,
    ACTIONS(149), 1,
      aux_sym_decimal_token1,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(240), 1,
      sym__logical_and_expression,
    STATE(248), 1,
      sym__shift_expression,
    STATE(252), 1,
      sym__wrapped_shift_expression,
    STATE(253), 1,
      sym__additive_expression,
    STATE(254), 1,
      sym__wrapped_additive_expression,
    STATE(255), 1,
      sym__multiplicative_expression,
    STATE(258), 1,
      sym__bitwise_xor_expression,
    STATE(259), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(260), 1,
      sym__bitwise_and_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(263), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(266), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(267), 1,
      sym__wrapped_logical_and_expression,
    STATE(274), 1,
      sym__wrapped_relational_expression,
    STATE(275), 1,
      sym_symbol,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(290), 1,
      sym__assignment_expression,
    STATE(291), 1,
      sym__logical_or_expression,
    STATE(292), 1,
      sym__wrapped_logical_or_expression,
    STATE(293), 1,
      sym__relational_expression,
    STATE(394), 1,
      sym__wrapped_assignment_expression,
    STATE(488), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(141), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(147), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(167), 2,
      sym_register,
      sym_macro_variable,
    STATE(432), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(256), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2039] = 36,
    ACTIONS(125), 1,
      anon_sym_RPAREN,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_unary_minus_operator,
    ACTIONS(143), 1,
      sym_relocation_type,
    ACTIONS(149), 1,
      aux_sym_decimal_token1,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(240), 1,
      sym__logical_and_expression,
    STATE(248), 1,
      sym__shift_expression,
    STATE(252), 1,
      sym__wrapped_shift_expression,
    STATE(253), 1,
      sym__additive_expression,
    STATE(254), 1,
      sym__wrapped_additive_expression,
    STATE(255), 1,
      sym__multiplicative_expression,
    STATE(258), 1,
      sym__bitwise_xor_expression,
    STATE(259), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(260), 1,
      sym__bitwise_and_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(263), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(266), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(267), 1,
      sym__wrapped_logical_and_expression,
    STATE(274), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(290), 1,
      sym__assignment_expression,
    STATE(291), 1,
      sym__logical_or_expression,
    STATE(292), 1,
      sym__wrapped_logical_or_expression,
    STATE(293), 1,
      sym__relational_expression,
    STATE(389), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(141), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(147), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(442), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(256), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [2165] = 38,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_unary_minus_operator,
    ACTIONS(143), 1,
      sym_relocation_type,
    ACTIONS(149), 1,
      aux_sym_decimal_token1,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(240), 1,
      sym__logical_and_expression,
    STATE(248), 1,
      sym__shift_expression,
    STATE(252), 1,
      sym__wrapped_shift_expression,
    STATE(253), 1,
      sym__additive_expression,
    STATE(254), 1,
      sym__wrapped_additive_expression,
    STATE(255), 1,
      sym__multiplicative_expression,
    STATE(258), 1,
      sym__bitwise_xor_expression,
    STATE(259), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(260), 1,
      sym__bitwise_and_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(263), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(266), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(267), 1,
      sym__wrapped_logical_and_expression,
    STATE(272), 1,
      sym_symbol,
    STATE(274), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(290), 1,
      sym__assignment_expression,
    STATE(291), 1,
      sym__logical_or_expression,
    STATE(292), 1,
      sym__wrapped_logical_or_expression,
    STATE(293), 1,
      sym__relational_expression,
    STATE(389), 1,
      sym__wrapped_assignment_expression,
    STATE(491), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(141), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(147), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(169), 2,
      sym_register,
      sym_macro_variable,
    STATE(432), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(256), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2295] = 38,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_unary_minus_operator,
    ACTIONS(143), 1,
      sym_relocation_type,
    ACTIONS(149), 1,
      aux_sym_decimal_token1,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(240), 1,
      sym__logical_and_expression,
    STATE(248), 1,
      sym__shift_expression,
    STATE(252), 1,
      sym__wrapped_shift_expression,
    STATE(253), 1,
      sym__additive_expression,
    STATE(254), 1,
      sym__wrapped_additive_expression,
    STATE(255), 1,
      sym__multiplicative_expression,
    STATE(258), 1,
      sym__bitwise_xor_expression,
    STATE(259), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(260), 1,
      sym__bitwise_and_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(263), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(266), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(267), 1,
      sym__wrapped_logical_and_expression,
    STATE(274), 1,
      sym__wrapped_relational_expression,
    STATE(277), 1,
      sym_symbol,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(290), 1,
      sym__assignment_expression,
    STATE(291), 1,
      sym__logical_or_expression,
    STATE(292), 1,
      sym__wrapped_logical_or_expression,
    STATE(293), 1,
      sym__relational_expression,
    STATE(395), 1,
      sym__wrapped_assignment_expression,
    STATE(509), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(141), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(147), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(171), 2,
      sym_register,
      sym_macro_variable,
    STATE(432), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(256), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2425] = 38,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_unary_minus_operator,
    ACTIONS(143), 1,
      sym_relocation_type,
    ACTIONS(149), 1,
      aux_sym_decimal_token1,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(240), 1,
      sym__logical_and_expression,
    STATE(248), 1,
      sym__shift_expression,
    STATE(252), 1,
      sym__wrapped_shift_expression,
    STATE(253), 1,
      sym__additive_expression,
    STATE(254), 1,
      sym__wrapped_additive_expression,
    STATE(255), 1,
      sym__multiplicative_expression,
    STATE(258), 1,
      sym__bitwise_xor_expression,
    STATE(259), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(260), 1,
      sym__bitwise_and_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(263), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(266), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(267), 1,
      sym__wrapped_logical_and_expression,
    STATE(274), 1,
      sym__wrapped_relational_expression,
    STATE(279), 1,
      sym_symbol,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(290), 1,
      sym__assignment_expression,
    STATE(291), 1,
      sym__logical_or_expression,
    STATE(292), 1,
      sym__wrapped_logical_or_expression,
    STATE(293), 1,
      sym__relational_expression,
    STATE(398), 1,
      sym__wrapped_assignment_expression,
    STATE(472), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(141), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(147), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(173), 2,
      sym_register,
      sym_macro_variable,
    STATE(432), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(256), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2555] = 38,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_unary_minus_operator,
    ACTIONS(143), 1,
      sym_relocation_type,
    ACTIONS(149), 1,
      aux_sym_decimal_token1,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(240), 1,
      sym__logical_and_expression,
    STATE(248), 1,
      sym__shift_expression,
    STATE(252), 1,
      sym__wrapped_shift_expression,
    STATE(253), 1,
      sym__additive_expression,
    STATE(254), 1,
      sym__wrapped_additive_expression,
    STATE(255), 1,
      sym__multiplicative_expression,
    STATE(258), 1,
      sym__bitwise_xor_expression,
    STATE(259), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(260), 1,
      sym__bitwise_and_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(262), 1,
      sym_symbol,
    STATE(263), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(266), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(267), 1,
      sym__wrapped_logical_and_expression,
    STATE(274), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(290), 1,
      sym__assignment_expression,
    STATE(291), 1,
      sym__logical_or_expression,
    STATE(292), 1,
      sym__wrapped_logical_or_expression,
    STATE(293), 1,
      sym__relational_expression,
    STATE(385), 1,
      sym__wrapped_assignment_expression,
    STATE(480), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(141), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(147), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(159), 2,
      sym_register,
      sym_macro_variable,
    STATE(432), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(256), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2685] = 38,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_unary_minus_operator,
    ACTIONS(143), 1,
      sym_relocation_type,
    ACTIONS(149), 1,
      aux_sym_decimal_token1,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(240), 1,
      sym__logical_and_expression,
    STATE(248), 1,
      sym__shift_expression,
    STATE(252), 1,
      sym__wrapped_shift_expression,
    STATE(253), 1,
      sym__additive_expression,
    STATE(254), 1,
      sym__wrapped_additive_expression,
    STATE(255), 1,
      sym__multiplicative_expression,
    STATE(258), 1,
      sym__bitwise_xor_expression,
    STATE(259), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(260), 1,
      sym__bitwise_and_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(263), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(266), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(267), 1,
      sym__wrapped_logical_and_expression,
    STATE(274), 1,
      sym__wrapped_relational_expression,
    STATE(278), 1,
      sym_symbol,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(290), 1,
      sym__assignment_expression,
    STATE(291), 1,
      sym__logical_or_expression,
    STATE(292), 1,
      sym__wrapped_logical_or_expression,
    STATE(293), 1,
      sym__relational_expression,
    STATE(389), 1,
      sym__wrapped_assignment_expression,
    STATE(475), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(141), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(147), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(175), 2,
      sym_register,
      sym_macro_variable,
    STATE(432), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(256), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2815] = 38,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_unary_minus_operator,
    ACTIONS(143), 1,
      sym_relocation_type,
    ACTIONS(149), 1,
      aux_sym_decimal_token1,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(240), 1,
      sym__logical_and_expression,
    STATE(248), 1,
      sym__shift_expression,
    STATE(252), 1,
      sym__wrapped_shift_expression,
    STATE(253), 1,
      sym__additive_expression,
    STATE(254), 1,
      sym__wrapped_additive_expression,
    STATE(255), 1,
      sym__multiplicative_expression,
    STATE(258), 1,
      sym__bitwise_xor_expression,
    STATE(259), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(260), 1,
      sym__bitwise_and_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(263), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(266), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(267), 1,
      sym__wrapped_logical_and_expression,
    STATE(274), 1,
      sym__wrapped_relational_expression,
    STATE(280), 1,
      sym_symbol,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(290), 1,
      sym__assignment_expression,
    STATE(291), 1,
      sym__logical_or_expression,
    STATE(292), 1,
      sym__wrapped_logical_or_expression,
    STATE(293), 1,
      sym__relational_expression,
    STATE(389), 1,
      sym__wrapped_assignment_expression,
    STATE(483), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(141), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(147), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(177), 2,
      sym_register,
      sym_macro_variable,
    STATE(432), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(256), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2945] = 38,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_unary_minus_operator,
    ACTIONS(143), 1,
      sym_relocation_type,
    ACTIONS(149), 1,
      aux_sym_decimal_token1,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(240), 1,
      sym__logical_and_expression,
    STATE(248), 1,
      sym__shift_expression,
    STATE(252), 1,
      sym__wrapped_shift_expression,
    STATE(253), 1,
      sym__additive_expression,
    STATE(254), 1,
      sym__wrapped_additive_expression,
    STATE(255), 1,
      sym__multiplicative_expression,
    STATE(258), 1,
      sym__bitwise_xor_expression,
    STATE(259), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(260), 1,
      sym__bitwise_and_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(263), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(266), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(267), 1,
      sym__wrapped_logical_and_expression,
    STATE(274), 1,
      sym__wrapped_relational_expression,
    STATE(281), 1,
      sym_symbol,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(290), 1,
      sym__assignment_expression,
    STATE(291), 1,
      sym__logical_or_expression,
    STATE(292), 1,
      sym__wrapped_logical_or_expression,
    STATE(293), 1,
      sym__relational_expression,
    STATE(395), 1,
      sym__wrapped_assignment_expression,
    STATE(485), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(141), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(147), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(179), 2,
      sym_register,
      sym_macro_variable,
    STATE(432), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(256), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3075] = 38,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_unary_minus_operator,
    ACTIONS(143), 1,
      sym_relocation_type,
    ACTIONS(149), 1,
      aux_sym_decimal_token1,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(239), 1,
      sym_symbol,
    STATE(240), 1,
      sym__logical_and_expression,
    STATE(248), 1,
      sym__shift_expression,
    STATE(252), 1,
      sym__wrapped_shift_expression,
    STATE(253), 1,
      sym__additive_expression,
    STATE(254), 1,
      sym__wrapped_additive_expression,
    STATE(255), 1,
      sym__multiplicative_expression,
    STATE(258), 1,
      sym__bitwise_xor_expression,
    STATE(259), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(260), 1,
      sym__bitwise_and_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(263), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(266), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(267), 1,
      sym__wrapped_logical_and_expression,
    STATE(274), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(290), 1,
      sym__assignment_expression,
    STATE(291), 1,
      sym__logical_or_expression,
    STATE(292), 1,
      sym__wrapped_logical_or_expression,
    STATE(293), 1,
      sym__relational_expression,
    STATE(389), 1,
      sym__wrapped_assignment_expression,
    STATE(487), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(141), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(147), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(181), 2,
      sym_register,
      sym_macro_variable,
    STATE(432), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(256), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3205] = 35,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(61), 1,
      sym_relocation_type,
    ACTIONS(65), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(73), 1,
      aux_sym_symbol_token1,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    STATE(152), 1,
      sym__relational_expression,
    STATE(153), 1,
      sym__assignment_expression,
    STATE(154), 1,
      sym__logical_or_expression,
    STATE(155), 1,
      sym__wrapped_logical_or_expression,
    STATE(157), 1,
      sym__logical_and_expression,
    STATE(160), 1,
      sym__wrapped_logical_and_expression,
    STATE(161), 1,
      sym__bitwise_or_expression,
    STATE(162), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(163), 1,
      sym__bitwise_xor_expression,
    STATE(164), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(165), 1,
      sym__bitwise_and_expression,
    STATE(166), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(167), 1,
      sym__equality_expression,
    STATE(168), 1,
      sym__wrapped_relational_expression,
    STATE(169), 1,
      sym__shift_expression,
    STATE(170), 1,
      sym__wrapped_shift_expression,
    STATE(171), 1,
      sym__additive_expression,
    STATE(202), 1,
      sym__wrapped_additive_expression,
    STATE(229), 1,
      sym__wrapped_equality_expression,
    STATE(233), 1,
      sym__multiplicative_expression,
    STATE(353), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(185), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(187), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(376), 2,
      sym__operand,
      sym_string,
    ACTIONS(63), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(179), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3328] = 37,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      sym_unary_minus_operator,
    ACTIONS(199), 1,
      sym_relocation_type,
    ACTIONS(205), 1,
      aux_sym_decimal_token1,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      sym_macro_variable,
    ACTIONS(213), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(215), 1,
      aux_sym_symbol_token1,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(328), 1,
      sym__bitwise_and_expression,
    STATE(329), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(330), 1,
      sym__equality_expression,
    STATE(332), 1,
      sym__wrapped_equality_expression,
    STATE(334), 1,
      sym__relational_expression,
    STATE(335), 1,
      sym__wrapped_relational_expression,
    STATE(336), 1,
      sym__shift_expression,
    STATE(337), 1,
      sym__wrapped_shift_expression,
    STATE(338), 1,
      sym__additive_expression,
    STATE(339), 1,
      sym__wrapped_additive_expression,
    STATE(340), 1,
      sym__multiplicative_expression,
    STATE(346), 1,
      sym_address,
    STATE(459), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(197), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(203), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(489), 2,
      sym__string_operand,
      sym_string,
    ACTIONS(201), 4,
      sym_octal,
      sym_float,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(341), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
  [3455] = 35,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_unary_minus_operator,
    ACTIONS(143), 1,
      sym_relocation_type,
    ACTIONS(149), 1,
      aux_sym_decimal_token1,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(240), 1,
      sym__logical_and_expression,
    STATE(248), 1,
      sym__shift_expression,
    STATE(252), 1,
      sym__wrapped_shift_expression,
    STATE(253), 1,
      sym__additive_expression,
    STATE(254), 1,
      sym__wrapped_additive_expression,
    STATE(255), 1,
      sym__multiplicative_expression,
    STATE(258), 1,
      sym__bitwise_xor_expression,
    STATE(259), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(260), 1,
      sym__bitwise_and_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(263), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(266), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(267), 1,
      sym__wrapped_logical_and_expression,
    STATE(274), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(290), 1,
      sym__assignment_expression,
    STATE(291), 1,
      sym__logical_or_expression,
    STATE(292), 1,
      sym__wrapped_logical_or_expression,
    STATE(293), 1,
      sym__relational_expression,
    STATE(389), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(141), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(147), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(442), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(256), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3578] = 34,
    ACTIONS(85), 1,
      sym_unary_minus_operator,
    ACTIONS(87), 1,
      sym_relocation_type,
    ACTIONS(91), 1,
      aux_sym_decimal_token1,
    ACTIONS(95), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(97), 1,
      aux_sym_symbol_token1,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    STATE(108), 1,
      sym__multiplicative_expression,
    STATE(113), 1,
      sym__assignment_expression,
    STATE(114), 1,
      sym__logical_or_expression,
    STATE(115), 1,
      sym__wrapped_logical_or_expression,
    STATE(116), 1,
      sym__logical_and_expression,
    STATE(117), 1,
      sym__wrapped_logical_and_expression,
    STATE(118), 1,
      sym__bitwise_or_expression,
    STATE(119), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(120), 1,
      sym__bitwise_xor_expression,
    STATE(121), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(122), 1,
      sym__bitwise_and_expression,
    STATE(123), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(124), 1,
      sym__equality_expression,
    STATE(125), 1,
      sym__wrapped_equality_expression,
    STATE(126), 1,
      sym__relational_expression,
    STATE(127), 1,
      sym__wrapped_relational_expression,
    STATE(129), 1,
      sym__wrapped_shift_expression,
    STATE(130), 1,
      sym__additive_expression,
    STATE(131), 1,
      sym__wrapped_additive_expression,
    STATE(150), 1,
      sym__shift_expression,
    STATE(238), 1,
      sym__wrapped_assignment_expression,
    STATE(355), 1,
      sym_numeric_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(219), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(221), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(89), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(132), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3697] = 33,
    ACTIONS(195), 1,
      sym_unary_minus_operator,
    ACTIONS(199), 1,
      sym_relocation_type,
    ACTIONS(205), 1,
      aux_sym_decimal_token1,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(215), 1,
      aux_sym_symbol_token1,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(328), 1,
      sym__bitwise_and_expression,
    STATE(329), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(330), 1,
      sym__equality_expression,
    STATE(332), 1,
      sym__wrapped_equality_expression,
    STATE(334), 1,
      sym__relational_expression,
    STATE(335), 1,
      sym__wrapped_relational_expression,
    STATE(336), 1,
      sym__shift_expression,
    STATE(337), 1,
      sym__wrapped_shift_expression,
    STATE(338), 1,
      sym__additive_expression,
    STATE(339), 1,
      sym__wrapped_additive_expression,
    STATE(340), 1,
      sym__multiplicative_expression,
    STATE(445), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(197), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(203), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(201), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(341), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3813] = 33,
    ACTIONS(85), 1,
      sym_unary_minus_operator,
    ACTIONS(87), 1,
      sym_relocation_type,
    ACTIONS(91), 1,
      aux_sym_decimal_token1,
    ACTIONS(95), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(97), 1,
      aux_sym_symbol_token1,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    STATE(108), 1,
      sym__multiplicative_expression,
    STATE(113), 1,
      sym__assignment_expression,
    STATE(114), 1,
      sym__logical_or_expression,
    STATE(115), 1,
      sym__wrapped_logical_or_expression,
    STATE(116), 1,
      sym__logical_and_expression,
    STATE(117), 1,
      sym__wrapped_logical_and_expression,
    STATE(118), 1,
      sym__bitwise_or_expression,
    STATE(119), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(120), 1,
      sym__bitwise_xor_expression,
    STATE(121), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(122), 1,
      sym__bitwise_and_expression,
    STATE(123), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(124), 1,
      sym__equality_expression,
    STATE(125), 1,
      sym__wrapped_equality_expression,
    STATE(126), 1,
      sym__relational_expression,
    STATE(127), 1,
      sym__wrapped_relational_expression,
    STATE(129), 1,
      sym__wrapped_shift_expression,
    STATE(130), 1,
      sym__additive_expression,
    STATE(131), 1,
      sym__wrapped_additive_expression,
    STATE(150), 1,
      sym__shift_expression,
    STATE(331), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(219), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(221), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(89), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(132), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3929] = 33,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(61), 1,
      sym_relocation_type,
    ACTIONS(65), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(73), 1,
      aux_sym_symbol_token1,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_SQUOTE,
    STATE(152), 1,
      sym__relational_expression,
    STATE(153), 1,
      sym__assignment_expression,
    STATE(154), 1,
      sym__logical_or_expression,
    STATE(155), 1,
      sym__wrapped_logical_or_expression,
    STATE(157), 1,
      sym__logical_and_expression,
    STATE(159), 1,
      sym__wrapped_assignment_expression,
    STATE(160), 1,
      sym__wrapped_logical_and_expression,
    STATE(161), 1,
      sym__bitwise_or_expression,
    STATE(162), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(163), 1,
      sym__bitwise_xor_expression,
    STATE(164), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(165), 1,
      sym__bitwise_and_expression,
    STATE(166), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(167), 1,
      sym__equality_expression,
    STATE(168), 1,
      sym__wrapped_relational_expression,
    STATE(169), 1,
      sym__shift_expression,
    STATE(170), 1,
      sym__wrapped_shift_expression,
    STATE(171), 1,
      sym__additive_expression,
    STATE(202), 1,
      sym__wrapped_additive_expression,
    STATE(229), 1,
      sym__wrapped_equality_expression,
    STATE(233), 1,
      sym__multiplicative_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(185), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(187), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(63), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(179), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4045] = 33,
    ACTIONS(85), 1,
      sym_unary_minus_operator,
    ACTIONS(87), 1,
      sym_relocation_type,
    ACTIONS(91), 1,
      aux_sym_decimal_token1,
    ACTIONS(95), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(97), 1,
      aux_sym_symbol_token1,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    STATE(108), 1,
      sym__multiplicative_expression,
    STATE(113), 1,
      sym__assignment_expression,
    STATE(114), 1,
      sym__logical_or_expression,
    STATE(115), 1,
      sym__wrapped_logical_or_expression,
    STATE(116), 1,
      sym__logical_and_expression,
    STATE(117), 1,
      sym__wrapped_logical_and_expression,
    STATE(118), 1,
      sym__bitwise_or_expression,
    STATE(119), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(120), 1,
      sym__bitwise_xor_expression,
    STATE(121), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(122), 1,
      sym__bitwise_and_expression,
    STATE(123), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(124), 1,
      sym__equality_expression,
    STATE(125), 1,
      sym__wrapped_equality_expression,
    STATE(126), 1,
      sym__relational_expression,
    STATE(127), 1,
      sym__wrapped_relational_expression,
    STATE(129), 1,
      sym__wrapped_shift_expression,
    STATE(130), 1,
      sym__additive_expression,
    STATE(131), 1,
      sym__wrapped_additive_expression,
    STATE(150), 1,
      sym__shift_expression,
    STATE(343), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(219), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(221), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(89), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(132), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4161] = 33,
    ACTIONS(85), 1,
      sym_unary_minus_operator,
    ACTIONS(87), 1,
      sym_relocation_type,
    ACTIONS(91), 1,
      aux_sym_decimal_token1,
    ACTIONS(95), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(97), 1,
      aux_sym_symbol_token1,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    STATE(108), 1,
      sym__multiplicative_expression,
    STATE(113), 1,
      sym__assignment_expression,
    STATE(114), 1,
      sym__logical_or_expression,
    STATE(115), 1,
      sym__wrapped_logical_or_expression,
    STATE(116), 1,
      sym__logical_and_expression,
    STATE(117), 1,
      sym__wrapped_logical_and_expression,
    STATE(118), 1,
      sym__bitwise_or_expression,
    STATE(119), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(120), 1,
      sym__bitwise_xor_expression,
    STATE(121), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(122), 1,
      sym__bitwise_and_expression,
    STATE(123), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(124), 1,
      sym__equality_expression,
    STATE(125), 1,
      sym__wrapped_equality_expression,
    STATE(126), 1,
      sym__relational_expression,
    STATE(127), 1,
      sym__wrapped_relational_expression,
    STATE(129), 1,
      sym__wrapped_shift_expression,
    STATE(130), 1,
      sym__additive_expression,
    STATE(131), 1,
      sym__wrapped_additive_expression,
    STATE(150), 1,
      sym__shift_expression,
    STATE(344), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(219), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(221), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(89), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(132), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4277] = 33,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_unary_minus_operator,
    ACTIONS(143), 1,
      sym_relocation_type,
    ACTIONS(149), 1,
      aux_sym_decimal_token1,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(240), 1,
      sym__logical_and_expression,
    STATE(248), 1,
      sym__shift_expression,
    STATE(252), 1,
      sym__wrapped_shift_expression,
    STATE(253), 1,
      sym__additive_expression,
    STATE(254), 1,
      sym__wrapped_additive_expression,
    STATE(255), 1,
      sym__multiplicative_expression,
    STATE(258), 1,
      sym__bitwise_xor_expression,
    STATE(259), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(260), 1,
      sym__bitwise_and_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(263), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(266), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(267), 1,
      sym__wrapped_logical_and_expression,
    STATE(274), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(291), 1,
      sym__logical_or_expression,
    STATE(293), 1,
      sym__relational_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(382), 1,
      sym__wrapped_logical_or_expression,
    STATE(462), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(141), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(147), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(145), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(256), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4393] = 33,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_unary_minus_operator,
    ACTIONS(143), 1,
      sym_relocation_type,
    ACTIONS(149), 1,
      aux_sym_decimal_token1,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(240), 1,
      sym__logical_and_expression,
    STATE(248), 1,
      sym__shift_expression,
    STATE(252), 1,
      sym__wrapped_shift_expression,
    STATE(253), 1,
      sym__additive_expression,
    STATE(254), 1,
      sym__wrapped_additive_expression,
    STATE(255), 1,
      sym__multiplicative_expression,
    STATE(258), 1,
      sym__bitwise_xor_expression,
    STATE(259), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(260), 1,
      sym__bitwise_and_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(263), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(266), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(274), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(283), 1,
      sym__wrapped_logical_and_expression,
    STATE(293), 1,
      sym__relational_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(462), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(141), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(147), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(145), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(256), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4509] = 33,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_unary_minus_operator,
    ACTIONS(143), 1,
      sym_relocation_type,
    ACTIONS(149), 1,
      aux_sym_decimal_token1,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(248), 1,
      sym__shift_expression,
    STATE(252), 1,
      sym__wrapped_shift_expression,
    STATE(253), 1,
      sym__additive_expression,
    STATE(254), 1,
      sym__wrapped_additive_expression,
    STATE(255), 1,
      sym__multiplicative_expression,
    STATE(258), 1,
      sym__bitwise_xor_expression,
    STATE(259), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(260), 1,
      sym__bitwise_and_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(263), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(274), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(284), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(293), 1,
      sym__relational_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(462), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(141), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(147), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(145), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(256), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4625] = 33,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_unary_minus_operator,
    ACTIONS(143), 1,
      sym_relocation_type,
    ACTIONS(149), 1,
      aux_sym_decimal_token1,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(248), 1,
      sym__shift_expression,
    STATE(252), 1,
      sym__wrapped_shift_expression,
    STATE(253), 1,
      sym__additive_expression,
    STATE(254), 1,
      sym__wrapped_additive_expression,
    STATE(255), 1,
      sym__multiplicative_expression,
    STATE(258), 1,
      sym__bitwise_xor_expression,
    STATE(260), 1,
      sym__bitwise_and_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(263), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(274), 1,
      sym__wrapped_relational_expression,
    STATE(285), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(293), 1,
      sym__relational_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(462), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(141), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(147), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(145), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(256), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4741] = 33,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_unary_minus_operator,
    ACTIONS(143), 1,
      sym_relocation_type,
    ACTIONS(149), 1,
      aux_sym_decimal_token1,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(241), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(248), 1,
      sym__shift_expression,
    STATE(252), 1,
      sym__wrapped_shift_expression,
    STATE(253), 1,
      sym__additive_expression,
    STATE(254), 1,
      sym__wrapped_additive_expression,
    STATE(255), 1,
      sym__multiplicative_expression,
    STATE(260), 1,
      sym__bitwise_and_expression,
    STATE(263), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(274), 1,
      sym__wrapped_relational_expression,
    STATE(293), 1,
      sym__relational_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(462), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(141), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(147), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(145), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(256), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4857] = 33,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_unary_minus_operator,
    ACTIONS(143), 1,
      sym_relocation_type,
    ACTIONS(149), 1,
      aux_sym_decimal_token1,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(242), 1,
      sym__wrapped_equality_expression,
    STATE(248), 1,
      sym__shift_expression,
    STATE(252), 1,
      sym__wrapped_shift_expression,
    STATE(253), 1,
      sym__additive_expression,
    STATE(254), 1,
      sym__wrapped_additive_expression,
    STATE(255), 1,
      sym__multiplicative_expression,
    STATE(263), 1,
      sym__equality_expression,
    STATE(274), 1,
      sym__wrapped_relational_expression,
    STATE(293), 1,
      sym__relational_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(328), 1,
      sym__bitwise_and_expression,
    STATE(329), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(462), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(141), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(147), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(145), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(256), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4973] = 33,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_unary_minus_operator,
    ACTIONS(143), 1,
      sym_relocation_type,
    ACTIONS(149), 1,
      aux_sym_decimal_token1,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(243), 1,
      sym__wrapped_relational_expression,
    STATE(248), 1,
      sym__shift_expression,
    STATE(252), 1,
      sym__wrapped_shift_expression,
    STATE(253), 1,
      sym__additive_expression,
    STATE(254), 1,
      sym__wrapped_additive_expression,
    STATE(255), 1,
      sym__multiplicative_expression,
    STATE(293), 1,
      sym__relational_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(328), 1,
      sym__bitwise_and_expression,
    STATE(329), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(330), 1,
      sym__equality_expression,
    STATE(332), 1,
      sym__wrapped_equality_expression,
    STATE(462), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(141), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(147), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(145), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(256), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5089] = 33,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_unary_minus_operator,
    ACTIONS(143), 1,
      sym_relocation_type,
    ACTIONS(149), 1,
      aux_sym_decimal_token1,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(244), 1,
      sym__wrapped_shift_expression,
    STATE(248), 1,
      sym__shift_expression,
    STATE(253), 1,
      sym__additive_expression,
    STATE(254), 1,
      sym__wrapped_additive_expression,
    STATE(255), 1,
      sym__multiplicative_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(328), 1,
      sym__bitwise_and_expression,
    STATE(329), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(330), 1,
      sym__equality_expression,
    STATE(332), 1,
      sym__wrapped_equality_expression,
    STATE(334), 1,
      sym__relational_expression,
    STATE(335), 1,
      sym__wrapped_relational_expression,
    STATE(462), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(141), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(147), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(145), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(256), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5205] = 33,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_unary_minus_operator,
    ACTIONS(143), 1,
      sym_relocation_type,
    ACTIONS(149), 1,
      aux_sym_decimal_token1,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(245), 1,
      sym__wrapped_additive_expression,
    STATE(253), 1,
      sym__additive_expression,
    STATE(255), 1,
      sym__multiplicative_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(328), 1,
      sym__bitwise_and_expression,
    STATE(329), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(330), 1,
      sym__equality_expression,
    STATE(332), 1,
      sym__wrapped_equality_expression,
    STATE(334), 1,
      sym__relational_expression,
    STATE(335), 1,
      sym__wrapped_relational_expression,
    STATE(336), 1,
      sym__shift_expression,
    STATE(337), 1,
      sym__wrapped_shift_expression,
    STATE(462), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(141), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(147), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(145), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(256), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5321] = 33,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_unary_minus_operator,
    ACTIONS(143), 1,
      sym_relocation_type,
    ACTIONS(149), 1,
      aux_sym_decimal_token1,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(255), 1,
      sym__multiplicative_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(328), 1,
      sym__bitwise_and_expression,
    STATE(329), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(330), 1,
      sym__equality_expression,
    STATE(332), 1,
      sym__wrapped_equality_expression,
    STATE(334), 1,
      sym__relational_expression,
    STATE(335), 1,
      sym__wrapped_relational_expression,
    STATE(336), 1,
      sym__shift_expression,
    STATE(337), 1,
      sym__wrapped_shift_expression,
    STATE(338), 1,
      sym__additive_expression,
    STATE(339), 1,
      sym__wrapped_additive_expression,
    STATE(462), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(141), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(229), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(227), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(246), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5437] = 34,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_unary_minus_operator,
    ACTIONS(143), 1,
      sym_relocation_type,
    ACTIONS(149), 1,
      aux_sym_decimal_token1,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(328), 1,
      sym__bitwise_and_expression,
    STATE(329), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(330), 1,
      sym__equality_expression,
    STATE(332), 1,
      sym__wrapped_equality_expression,
    STATE(334), 1,
      sym__relational_expression,
    STATE(335), 1,
      sym__wrapped_relational_expression,
    STATE(336), 1,
      sym__shift_expression,
    STATE(337), 1,
      sym__wrapped_shift_expression,
    STATE(338), 1,
      sym__additive_expression,
    STATE(339), 1,
      sym__wrapped_additive_expression,
    STATE(340), 1,
      sym__multiplicative_expression,
    STATE(341), 1,
      sym__wrapped_multiplicative_expression,
    STATE(462), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(141), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(233), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(231), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(247), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5555] = 33,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(61), 1,
      sym_relocation_type,
    ACTIONS(65), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(73), 1,
      aux_sym_symbol_token1,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_SQUOTE,
    STATE(152), 1,
      sym__relational_expression,
    STATE(154), 1,
      sym__logical_or_expression,
    STATE(157), 1,
      sym__logical_and_expression,
    STATE(160), 1,
      sym__wrapped_logical_and_expression,
    STATE(161), 1,
      sym__bitwise_or_expression,
    STATE(162), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(163), 1,
      sym__bitwise_xor_expression,
    STATE(164), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(165), 1,
      sym__bitwise_and_expression,
    STATE(166), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(167), 1,
      sym__equality_expression,
    STATE(168), 1,
      sym__wrapped_relational_expression,
    STATE(169), 1,
      sym__shift_expression,
    STATE(170), 1,
      sym__wrapped_shift_expression,
    STATE(171), 1,
      sym__additive_expression,
    STATE(202), 1,
      sym__wrapped_additive_expression,
    STATE(229), 1,
      sym__wrapped_equality_expression,
    STATE(233), 1,
      sym__multiplicative_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(351), 1,
      sym__wrapped_logical_or_expression,
    STATE(460), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(185), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(187), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(63), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(179), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5671] = 33,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(61), 1,
      sym_relocation_type,
    ACTIONS(65), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(73), 1,
      aux_sym_symbol_token1,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_SQUOTE,
    STATE(152), 1,
      sym__relational_expression,
    STATE(157), 1,
      sym__logical_and_expression,
    STATE(161), 1,
      sym__bitwise_or_expression,
    STATE(162), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(163), 1,
      sym__bitwise_xor_expression,
    STATE(164), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(165), 1,
      sym__bitwise_and_expression,
    STATE(166), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(167), 1,
      sym__equality_expression,
    STATE(168), 1,
      sym__wrapped_relational_expression,
    STATE(169), 1,
      sym__shift_expression,
    STATE(170), 1,
      sym__wrapped_shift_expression,
    STATE(171), 1,
      sym__additive_expression,
    STATE(202), 1,
      sym__wrapped_additive_expression,
    STATE(203), 1,
      sym__wrapped_logical_and_expression,
    STATE(229), 1,
      sym__wrapped_equality_expression,
    STATE(233), 1,
      sym__multiplicative_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(460), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(185), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(187), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(63), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(179), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5787] = 33,
    ACTIONS(85), 1,
      sym_unary_minus_operator,
    ACTIONS(87), 1,
      sym_relocation_type,
    ACTIONS(91), 1,
      aux_sym_decimal_token1,
    ACTIONS(95), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(97), 1,
      aux_sym_symbol_token1,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    STATE(108), 1,
      sym__multiplicative_expression,
    STATE(114), 1,
      sym__logical_or_expression,
    STATE(116), 1,
      sym__logical_and_expression,
    STATE(117), 1,
      sym__wrapped_logical_and_expression,
    STATE(118), 1,
      sym__bitwise_or_expression,
    STATE(119), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(120), 1,
      sym__bitwise_xor_expression,
    STATE(121), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(122), 1,
      sym__bitwise_and_expression,
    STATE(123), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(124), 1,
      sym__equality_expression,
    STATE(125), 1,
      sym__wrapped_equality_expression,
    STATE(126), 1,
      sym__relational_expression,
    STATE(127), 1,
      sym__wrapped_relational_expression,
    STATE(129), 1,
      sym__wrapped_shift_expression,
    STATE(130), 1,
      sym__additive_expression,
    STATE(131), 1,
      sym__wrapped_additive_expression,
    STATE(150), 1,
      sym__shift_expression,
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(463), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(219), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(221), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(89), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(132), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5903] = 33,
    ACTIONS(85), 1,
      sym_unary_minus_operator,
    ACTIONS(87), 1,
      sym_relocation_type,
    ACTIONS(91), 1,
      aux_sym_decimal_token1,
    ACTIONS(95), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(97), 1,
      aux_sym_symbol_token1,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    STATE(108), 1,
      sym__multiplicative_expression,
    STATE(116), 1,
      sym__logical_and_expression,
    STATE(118), 1,
      sym__bitwise_or_expression,
    STATE(119), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(120), 1,
      sym__bitwise_xor_expression,
    STATE(121), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(122), 1,
      sym__bitwise_and_expression,
    STATE(123), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(124), 1,
      sym__equality_expression,
    STATE(125), 1,
      sym__wrapped_equality_expression,
    STATE(126), 1,
      sym__relational_expression,
    STATE(127), 1,
      sym__wrapped_relational_expression,
    STATE(129), 1,
      sym__wrapped_shift_expression,
    STATE(130), 1,
      sym__additive_expression,
    STATE(131), 1,
      sym__wrapped_additive_expression,
    STATE(137), 1,
      sym__wrapped_logical_and_expression,
    STATE(150), 1,
      sym__shift_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(463), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(219), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(221), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(89), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(132), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6019] = 33,
    ACTIONS(85), 1,
      sym_unary_minus_operator,
    ACTIONS(87), 1,
      sym_relocation_type,
    ACTIONS(91), 1,
      aux_sym_decimal_token1,
    ACTIONS(95), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(97), 1,
      aux_sym_symbol_token1,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    STATE(108), 1,
      sym__multiplicative_expression,
    STATE(118), 1,
      sym__bitwise_or_expression,
    STATE(120), 1,
      sym__bitwise_xor_expression,
    STATE(121), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(122), 1,
      sym__bitwise_and_expression,
    STATE(123), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(124), 1,
      sym__equality_expression,
    STATE(125), 1,
      sym__wrapped_equality_expression,
    STATE(126), 1,
      sym__relational_expression,
    STATE(127), 1,
      sym__wrapped_relational_expression,
    STATE(129), 1,
      sym__wrapped_shift_expression,
    STATE(130), 1,
      sym__additive_expression,
    STATE(131), 1,
      sym__wrapped_additive_expression,
    STATE(138), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(150), 1,
      sym__shift_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(463), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(219), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(221), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(89), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(132), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6135] = 33,
    ACTIONS(85), 1,
      sym_unary_minus_operator,
    ACTIONS(87), 1,
      sym_relocation_type,
    ACTIONS(91), 1,
      aux_sym_decimal_token1,
    ACTIONS(95), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(97), 1,
      aux_sym_symbol_token1,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    STATE(108), 1,
      sym__multiplicative_expression,
    STATE(120), 1,
      sym__bitwise_xor_expression,
    STATE(122), 1,
      sym__bitwise_and_expression,
    STATE(123), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(124), 1,
      sym__equality_expression,
    STATE(125), 1,
      sym__wrapped_equality_expression,
    STATE(126), 1,
      sym__relational_expression,
    STATE(127), 1,
      sym__wrapped_relational_expression,
    STATE(129), 1,
      sym__wrapped_shift_expression,
    STATE(130), 1,
      sym__additive_expression,
    STATE(131), 1,
      sym__wrapped_additive_expression,
    STATE(139), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(150), 1,
      sym__shift_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(463), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(219), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(221), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(89), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(132), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6251] = 33,
    ACTIONS(85), 1,
      sym_unary_minus_operator,
    ACTIONS(87), 1,
      sym_relocation_type,
    ACTIONS(91), 1,
      aux_sym_decimal_token1,
    ACTIONS(95), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(97), 1,
      aux_sym_symbol_token1,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    STATE(108), 1,
      sym__multiplicative_expression,
    STATE(122), 1,
      sym__bitwise_and_expression,
    STATE(124), 1,
      sym__equality_expression,
    STATE(125), 1,
      sym__wrapped_equality_expression,
    STATE(126), 1,
      sym__relational_expression,
    STATE(127), 1,
      sym__wrapped_relational_expression,
    STATE(129), 1,
      sym__wrapped_shift_expression,
    STATE(130), 1,
      sym__additive_expression,
    STATE(131), 1,
      sym__wrapped_additive_expression,
    STATE(140), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(150), 1,
      sym__shift_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(463), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(219), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(221), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(89), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(132), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6367] = 33,
    ACTIONS(85), 1,
      sym_unary_minus_operator,
    ACTIONS(87), 1,
      sym_relocation_type,
    ACTIONS(91), 1,
      aux_sym_decimal_token1,
    ACTIONS(95), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(97), 1,
      aux_sym_symbol_token1,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    STATE(108), 1,
      sym__multiplicative_expression,
    STATE(124), 1,
      sym__equality_expression,
    STATE(126), 1,
      sym__relational_expression,
    STATE(127), 1,
      sym__wrapped_relational_expression,
    STATE(129), 1,
      sym__wrapped_shift_expression,
    STATE(130), 1,
      sym__additive_expression,
    STATE(131), 1,
      sym__wrapped_additive_expression,
    STATE(141), 1,
      sym__wrapped_equality_expression,
    STATE(150), 1,
      sym__shift_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(328), 1,
      sym__bitwise_and_expression,
    STATE(329), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(463), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(219), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(221), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(89), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(132), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6483] = 33,
    ACTIONS(85), 1,
      sym_unary_minus_operator,
    ACTIONS(87), 1,
      sym_relocation_type,
    ACTIONS(91), 1,
      aux_sym_decimal_token1,
    ACTIONS(95), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(97), 1,
      aux_sym_symbol_token1,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    STATE(108), 1,
      sym__multiplicative_expression,
    STATE(126), 1,
      sym__relational_expression,
    STATE(129), 1,
      sym__wrapped_shift_expression,
    STATE(130), 1,
      sym__additive_expression,
    STATE(131), 1,
      sym__wrapped_additive_expression,
    STATE(142), 1,
      sym__wrapped_relational_expression,
    STATE(150), 1,
      sym__shift_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(328), 1,
      sym__bitwise_and_expression,
    STATE(329), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(330), 1,
      sym__equality_expression,
    STATE(332), 1,
      sym__wrapped_equality_expression,
    STATE(463), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(219), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(221), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(89), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(132), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6599] = 33,
    ACTIONS(85), 1,
      sym_unary_minus_operator,
    ACTIONS(87), 1,
      sym_relocation_type,
    ACTIONS(91), 1,
      aux_sym_decimal_token1,
    ACTIONS(95), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(97), 1,
      aux_sym_symbol_token1,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    STATE(108), 1,
      sym__multiplicative_expression,
    STATE(130), 1,
      sym__additive_expression,
    STATE(131), 1,
      sym__wrapped_additive_expression,
    STATE(143), 1,
      sym__wrapped_shift_expression,
    STATE(150), 1,
      sym__shift_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(328), 1,
      sym__bitwise_and_expression,
    STATE(329), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(330), 1,
      sym__equality_expression,
    STATE(332), 1,
      sym__wrapped_equality_expression,
    STATE(334), 1,
      sym__relational_expression,
    STATE(335), 1,
      sym__wrapped_relational_expression,
    STATE(463), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(219), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(221), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(89), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(132), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6715] = 33,
    ACTIONS(85), 1,
      sym_unary_minus_operator,
    ACTIONS(87), 1,
      sym_relocation_type,
    ACTIONS(91), 1,
      aux_sym_decimal_token1,
    ACTIONS(95), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(97), 1,
      aux_sym_symbol_token1,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    STATE(108), 1,
      sym__multiplicative_expression,
    STATE(130), 1,
      sym__additive_expression,
    STATE(144), 1,
      sym__wrapped_additive_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(328), 1,
      sym__bitwise_and_expression,
    STATE(329), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(330), 1,
      sym__equality_expression,
    STATE(332), 1,
      sym__wrapped_equality_expression,
    STATE(334), 1,
      sym__relational_expression,
    STATE(335), 1,
      sym__wrapped_relational_expression,
    STATE(336), 1,
      sym__shift_expression,
    STATE(337), 1,
      sym__wrapped_shift_expression,
    STATE(463), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(219), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(221), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(89), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(132), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6831] = 33,
    ACTIONS(85), 1,
      sym_unary_minus_operator,
    ACTIONS(87), 1,
      sym_relocation_type,
    ACTIONS(91), 1,
      aux_sym_decimal_token1,
    ACTIONS(95), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(97), 1,
      aux_sym_symbol_token1,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    STATE(108), 1,
      sym__multiplicative_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(328), 1,
      sym__bitwise_and_expression,
    STATE(329), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(330), 1,
      sym__equality_expression,
    STATE(332), 1,
      sym__wrapped_equality_expression,
    STATE(334), 1,
      sym__relational_expression,
    STATE(335), 1,
      sym__wrapped_relational_expression,
    STATE(336), 1,
      sym__shift_expression,
    STATE(337), 1,
      sym__wrapped_shift_expression,
    STATE(338), 1,
      sym__additive_expression,
    STATE(339), 1,
      sym__wrapped_additive_expression,
    STATE(463), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(219), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(237), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(235), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(145), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6947] = 34,
    ACTIONS(85), 1,
      sym_unary_minus_operator,
    ACTIONS(87), 1,
      sym_relocation_type,
    ACTIONS(91), 1,
      aux_sym_decimal_token1,
    ACTIONS(95), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(97), 1,
      aux_sym_symbol_token1,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(328), 1,
      sym__bitwise_and_expression,
    STATE(329), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(330), 1,
      sym__equality_expression,
    STATE(332), 1,
      sym__wrapped_equality_expression,
    STATE(334), 1,
      sym__relational_expression,
    STATE(335), 1,
      sym__wrapped_relational_expression,
    STATE(336), 1,
      sym__shift_expression,
    STATE(337), 1,
      sym__wrapped_shift_expression,
    STATE(338), 1,
      sym__additive_expression,
    STATE(339), 1,
      sym__wrapped_additive_expression,
    STATE(340), 1,
      sym__multiplicative_expression,
    STATE(341), 1,
      sym__wrapped_multiplicative_expression,
    STATE(463), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(219), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(241), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(239), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(146), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7065] = 33,
    ACTIONS(195), 1,
      sym_unary_minus_operator,
    ACTIONS(199), 1,
      sym_relocation_type,
    ACTIONS(205), 1,
      aux_sym_decimal_token1,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(215), 1,
      aux_sym_symbol_token1,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(328), 1,
      sym__bitwise_and_expression,
    STATE(329), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(330), 1,
      sym__equality_expression,
    STATE(332), 1,
      sym__wrapped_equality_expression,
    STATE(334), 1,
      sym__relational_expression,
    STATE(335), 1,
      sym__wrapped_relational_expression,
    STATE(336), 1,
      sym__shift_expression,
    STATE(337), 1,
      sym__wrapped_shift_expression,
    STATE(338), 1,
      sym__additive_expression,
    STATE(339), 1,
      sym__wrapped_additive_expression,
    STATE(340), 1,
      sym__multiplicative_expression,
    STATE(433), 1,
      sym__wrapped_logical_or_expression,
    STATE(464), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(197), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(203), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(201), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(341), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7181] = 33,
    ACTIONS(195), 1,
      sym_unary_minus_operator,
    ACTIONS(199), 1,
      sym_relocation_type,
    ACTIONS(205), 1,
      aux_sym_decimal_token1,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(215), 1,
      aux_sym_symbol_token1,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    STATE(301), 1,
      sym__wrapped_logical_and_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(328), 1,
      sym__bitwise_and_expression,
    STATE(329), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(330), 1,
      sym__equality_expression,
    STATE(332), 1,
      sym__wrapped_equality_expression,
    STATE(334), 1,
      sym__relational_expression,
    STATE(335), 1,
      sym__wrapped_relational_expression,
    STATE(336), 1,
      sym__shift_expression,
    STATE(337), 1,
      sym__wrapped_shift_expression,
    STATE(338), 1,
      sym__additive_expression,
    STATE(339), 1,
      sym__wrapped_additive_expression,
    STATE(340), 1,
      sym__multiplicative_expression,
    STATE(464), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(197), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(203), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(201), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(341), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7297] = 33,
    ACTIONS(195), 1,
      sym_unary_minus_operator,
    ACTIONS(199), 1,
      sym_relocation_type,
    ACTIONS(205), 1,
      aux_sym_decimal_token1,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(215), 1,
      aux_sym_symbol_token1,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    STATE(302), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(328), 1,
      sym__bitwise_and_expression,
    STATE(329), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(330), 1,
      sym__equality_expression,
    STATE(332), 1,
      sym__wrapped_equality_expression,
    STATE(334), 1,
      sym__relational_expression,
    STATE(335), 1,
      sym__wrapped_relational_expression,
    STATE(336), 1,
      sym__shift_expression,
    STATE(337), 1,
      sym__wrapped_shift_expression,
    STATE(338), 1,
      sym__additive_expression,
    STATE(339), 1,
      sym__wrapped_additive_expression,
    STATE(340), 1,
      sym__multiplicative_expression,
    STATE(464), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(197), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(203), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(201), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(341), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7413] = 33,
    ACTIONS(195), 1,
      sym_unary_minus_operator,
    ACTIONS(199), 1,
      sym_relocation_type,
    ACTIONS(205), 1,
      aux_sym_decimal_token1,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(215), 1,
      aux_sym_symbol_token1,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    STATE(303), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(328), 1,
      sym__bitwise_and_expression,
    STATE(329), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(330), 1,
      sym__equality_expression,
    STATE(332), 1,
      sym__wrapped_equality_expression,
    STATE(334), 1,
      sym__relational_expression,
    STATE(335), 1,
      sym__wrapped_relational_expression,
    STATE(336), 1,
      sym__shift_expression,
    STATE(337), 1,
      sym__wrapped_shift_expression,
    STATE(338), 1,
      sym__additive_expression,
    STATE(339), 1,
      sym__wrapped_additive_expression,
    STATE(340), 1,
      sym__multiplicative_expression,
    STATE(464), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(197), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(203), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(201), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(341), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7529] = 33,
    ACTIONS(195), 1,
      sym_unary_minus_operator,
    ACTIONS(199), 1,
      sym_relocation_type,
    ACTIONS(205), 1,
      aux_sym_decimal_token1,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(215), 1,
      aux_sym_symbol_token1,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    STATE(304), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(328), 1,
      sym__bitwise_and_expression,
    STATE(330), 1,
      sym__equality_expression,
    STATE(332), 1,
      sym__wrapped_equality_expression,
    STATE(334), 1,
      sym__relational_expression,
    STATE(335), 1,
      sym__wrapped_relational_expression,
    STATE(336), 1,
      sym__shift_expression,
    STATE(337), 1,
      sym__wrapped_shift_expression,
    STATE(338), 1,
      sym__additive_expression,
    STATE(339), 1,
      sym__wrapped_additive_expression,
    STATE(340), 1,
      sym__multiplicative_expression,
    STATE(464), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(197), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(203), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(201), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(341), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7645] = 33,
    ACTIONS(195), 1,
      sym_unary_minus_operator,
    ACTIONS(199), 1,
      sym_relocation_type,
    ACTIONS(205), 1,
      aux_sym_decimal_token1,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(215), 1,
      aux_sym_symbol_token1,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    STATE(305), 1,
      sym__wrapped_equality_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(328), 1,
      sym__bitwise_and_expression,
    STATE(329), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(330), 1,
      sym__equality_expression,
    STATE(334), 1,
      sym__relational_expression,
    STATE(335), 1,
      sym__wrapped_relational_expression,
    STATE(336), 1,
      sym__shift_expression,
    STATE(337), 1,
      sym__wrapped_shift_expression,
    STATE(338), 1,
      sym__additive_expression,
    STATE(339), 1,
      sym__wrapped_additive_expression,
    STATE(340), 1,
      sym__multiplicative_expression,
    STATE(464), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(197), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(203), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(201), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(341), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7761] = 33,
    ACTIONS(195), 1,
      sym_unary_minus_operator,
    ACTIONS(199), 1,
      sym_relocation_type,
    ACTIONS(205), 1,
      aux_sym_decimal_token1,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(215), 1,
      aux_sym_symbol_token1,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    STATE(306), 1,
      sym__wrapped_relational_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(328), 1,
      sym__bitwise_and_expression,
    STATE(329), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(330), 1,
      sym__equality_expression,
    STATE(332), 1,
      sym__wrapped_equality_expression,
    STATE(334), 1,
      sym__relational_expression,
    STATE(336), 1,
      sym__shift_expression,
    STATE(337), 1,
      sym__wrapped_shift_expression,
    STATE(338), 1,
      sym__additive_expression,
    STATE(339), 1,
      sym__wrapped_additive_expression,
    STATE(340), 1,
      sym__multiplicative_expression,
    STATE(464), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(197), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(203), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(201), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(341), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7877] = 33,
    ACTIONS(195), 1,
      sym_unary_minus_operator,
    ACTIONS(199), 1,
      sym_relocation_type,
    ACTIONS(205), 1,
      aux_sym_decimal_token1,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(215), 1,
      aux_sym_symbol_token1,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    STATE(307), 1,
      sym__wrapped_shift_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(328), 1,
      sym__bitwise_and_expression,
    STATE(329), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(330), 1,
      sym__equality_expression,
    STATE(332), 1,
      sym__wrapped_equality_expression,
    STATE(334), 1,
      sym__relational_expression,
    STATE(335), 1,
      sym__wrapped_relational_expression,
    STATE(336), 1,
      sym__shift_expression,
    STATE(338), 1,
      sym__additive_expression,
    STATE(339), 1,
      sym__wrapped_additive_expression,
    STATE(340), 1,
      sym__multiplicative_expression,
    STATE(464), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(197), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(203), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(201), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(341), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7993] = 33,
    ACTIONS(195), 1,
      sym_unary_minus_operator,
    ACTIONS(199), 1,
      sym_relocation_type,
    ACTIONS(205), 1,
      aux_sym_decimal_token1,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(215), 1,
      aux_sym_symbol_token1,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    STATE(308), 1,
      sym__wrapped_additive_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(328), 1,
      sym__bitwise_and_expression,
    STATE(329), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(330), 1,
      sym__equality_expression,
    STATE(332), 1,
      sym__wrapped_equality_expression,
    STATE(334), 1,
      sym__relational_expression,
    STATE(335), 1,
      sym__wrapped_relational_expression,
    STATE(336), 1,
      sym__shift_expression,
    STATE(337), 1,
      sym__wrapped_shift_expression,
    STATE(338), 1,
      sym__additive_expression,
    STATE(340), 1,
      sym__multiplicative_expression,
    STATE(464), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(197), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(203), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(201), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(341), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8109] = 33,
    ACTIONS(195), 1,
      sym_unary_minus_operator,
    ACTIONS(199), 1,
      sym_relocation_type,
    ACTIONS(205), 1,
      aux_sym_decimal_token1,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(215), 1,
      aux_sym_symbol_token1,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(328), 1,
      sym__bitwise_and_expression,
    STATE(329), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(330), 1,
      sym__equality_expression,
    STATE(332), 1,
      sym__wrapped_equality_expression,
    STATE(334), 1,
      sym__relational_expression,
    STATE(335), 1,
      sym__wrapped_relational_expression,
    STATE(336), 1,
      sym__shift_expression,
    STATE(337), 1,
      sym__wrapped_shift_expression,
    STATE(338), 1,
      sym__additive_expression,
    STATE(339), 1,
      sym__wrapped_additive_expression,
    STATE(340), 1,
      sym__multiplicative_expression,
    STATE(441), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(197), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(203), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(201), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(341), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8225] = 34,
    ACTIONS(195), 1,
      sym_unary_minus_operator,
    ACTIONS(199), 1,
      sym_relocation_type,
    ACTIONS(205), 1,
      aux_sym_decimal_token1,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(215), 1,
      aux_sym_symbol_token1,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(328), 1,
      sym__bitwise_and_expression,
    STATE(329), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(330), 1,
      sym__equality_expression,
    STATE(332), 1,
      sym__wrapped_equality_expression,
    STATE(334), 1,
      sym__relational_expression,
    STATE(335), 1,
      sym__wrapped_relational_expression,
    STATE(336), 1,
      sym__shift_expression,
    STATE(337), 1,
      sym__wrapped_shift_expression,
    STATE(338), 1,
      sym__additive_expression,
    STATE(339), 1,
      sym__wrapped_additive_expression,
    STATE(340), 1,
      sym__multiplicative_expression,
    STATE(341), 1,
      sym__wrapped_multiplicative_expression,
    STATE(464), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(197), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(245), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(243), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(310), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8343] = 33,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_unary_minus_operator,
    ACTIONS(37), 1,
      sym_relocation_type,
    ACTIONS(43), 1,
      aux_sym_decimal_token1,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(51), 1,
      aux_sym_symbol_token1,
    STATE(181), 1,
      sym__logical_or_expression,
    STATE(183), 1,
      sym__logical_and_expression,
    STATE(184), 1,
      sym__wrapped_logical_and_expression,
    STATE(185), 1,
      sym__bitwise_or_expression,
    STATE(186), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(187), 1,
      sym__bitwise_xor_expression,
    STATE(188), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(189), 1,
      sym__bitwise_and_expression,
    STATE(190), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(191), 1,
      sym__equality_expression,
    STATE(192), 1,
      sym__wrapped_equality_expression,
    STATE(193), 1,
      sym__relational_expression,
    STATE(195), 1,
      sym__shift_expression,
    STATE(196), 1,
      sym__wrapped_shift_expression,
    STATE(197), 1,
      sym__additive_expression,
    STATE(198), 1,
      sym__wrapped_additive_expression,
    STATE(199), 1,
      sym__multiplicative_expression,
    STATE(237), 1,
      sym__wrapped_relational_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(352), 1,
      sym__wrapped_logical_or_expression,
    STATE(448), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(35), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(41), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(39), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(200), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8459] = 33,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_unary_minus_operator,
    ACTIONS(37), 1,
      sym_relocation_type,
    ACTIONS(43), 1,
      aux_sym_decimal_token1,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(51), 1,
      aux_sym_symbol_token1,
    STATE(183), 1,
      sym__logical_and_expression,
    STATE(185), 1,
      sym__bitwise_or_expression,
    STATE(186), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(187), 1,
      sym__bitwise_xor_expression,
    STATE(188), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(189), 1,
      sym__bitwise_and_expression,
    STATE(190), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(191), 1,
      sym__equality_expression,
    STATE(192), 1,
      sym__wrapped_equality_expression,
    STATE(193), 1,
      sym__relational_expression,
    STATE(195), 1,
      sym__shift_expression,
    STATE(196), 1,
      sym__wrapped_shift_expression,
    STATE(197), 1,
      sym__additive_expression,
    STATE(198), 1,
      sym__wrapped_additive_expression,
    STATE(199), 1,
      sym__multiplicative_expression,
    STATE(214), 1,
      sym__wrapped_logical_and_expression,
    STATE(237), 1,
      sym__wrapped_relational_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(448), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(35), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(41), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(39), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(200), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8575] = 33,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_unary_minus_operator,
    ACTIONS(37), 1,
      sym_relocation_type,
    ACTIONS(43), 1,
      aux_sym_decimal_token1,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(51), 1,
      aux_sym_symbol_token1,
    STATE(185), 1,
      sym__bitwise_or_expression,
    STATE(187), 1,
      sym__bitwise_xor_expression,
    STATE(188), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(189), 1,
      sym__bitwise_and_expression,
    STATE(190), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(191), 1,
      sym__equality_expression,
    STATE(192), 1,
      sym__wrapped_equality_expression,
    STATE(193), 1,
      sym__relational_expression,
    STATE(195), 1,
      sym__shift_expression,
    STATE(196), 1,
      sym__wrapped_shift_expression,
    STATE(197), 1,
      sym__additive_expression,
    STATE(198), 1,
      sym__wrapped_additive_expression,
    STATE(199), 1,
      sym__multiplicative_expression,
    STATE(215), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(237), 1,
      sym__wrapped_relational_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(448), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(35), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(41), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(39), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(200), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8691] = 33,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_unary_minus_operator,
    ACTIONS(37), 1,
      sym_relocation_type,
    ACTIONS(43), 1,
      aux_sym_decimal_token1,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(51), 1,
      aux_sym_symbol_token1,
    STATE(187), 1,
      sym__bitwise_xor_expression,
    STATE(189), 1,
      sym__bitwise_and_expression,
    STATE(190), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(191), 1,
      sym__equality_expression,
    STATE(192), 1,
      sym__wrapped_equality_expression,
    STATE(193), 1,
      sym__relational_expression,
    STATE(195), 1,
      sym__shift_expression,
    STATE(196), 1,
      sym__wrapped_shift_expression,
    STATE(197), 1,
      sym__additive_expression,
    STATE(198), 1,
      sym__wrapped_additive_expression,
    STATE(199), 1,
      sym__multiplicative_expression,
    STATE(216), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(237), 1,
      sym__wrapped_relational_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(448), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(35), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(41), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(39), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(200), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8807] = 33,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_unary_minus_operator,
    ACTIONS(37), 1,
      sym_relocation_type,
    ACTIONS(43), 1,
      aux_sym_decimal_token1,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(51), 1,
      aux_sym_symbol_token1,
    STATE(189), 1,
      sym__bitwise_and_expression,
    STATE(191), 1,
      sym__equality_expression,
    STATE(192), 1,
      sym__wrapped_equality_expression,
    STATE(193), 1,
      sym__relational_expression,
    STATE(195), 1,
      sym__shift_expression,
    STATE(196), 1,
      sym__wrapped_shift_expression,
    STATE(197), 1,
      sym__additive_expression,
    STATE(198), 1,
      sym__wrapped_additive_expression,
    STATE(199), 1,
      sym__multiplicative_expression,
    STATE(217), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(237), 1,
      sym__wrapped_relational_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(448), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(35), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(41), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(39), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(200), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8923] = 33,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_unary_minus_operator,
    ACTIONS(37), 1,
      sym_relocation_type,
    ACTIONS(43), 1,
      aux_sym_decimal_token1,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(51), 1,
      aux_sym_symbol_token1,
    STATE(191), 1,
      sym__equality_expression,
    STATE(193), 1,
      sym__relational_expression,
    STATE(195), 1,
      sym__shift_expression,
    STATE(196), 1,
      sym__wrapped_shift_expression,
    STATE(197), 1,
      sym__additive_expression,
    STATE(198), 1,
      sym__wrapped_additive_expression,
    STATE(199), 1,
      sym__multiplicative_expression,
    STATE(218), 1,
      sym__wrapped_equality_expression,
    STATE(237), 1,
      sym__wrapped_relational_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(328), 1,
      sym__bitwise_and_expression,
    STATE(329), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(448), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(35), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(41), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(39), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(200), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9039] = 33,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_unary_minus_operator,
    ACTIONS(37), 1,
      sym_relocation_type,
    ACTIONS(43), 1,
      aux_sym_decimal_token1,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(51), 1,
      aux_sym_symbol_token1,
    STATE(193), 1,
      sym__relational_expression,
    STATE(195), 1,
      sym__shift_expression,
    STATE(196), 1,
      sym__wrapped_shift_expression,
    STATE(197), 1,
      sym__additive_expression,
    STATE(198), 1,
      sym__wrapped_additive_expression,
    STATE(199), 1,
      sym__multiplicative_expression,
    STATE(219), 1,
      sym__wrapped_relational_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(328), 1,
      sym__bitwise_and_expression,
    STATE(329), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(330), 1,
      sym__equality_expression,
    STATE(332), 1,
      sym__wrapped_equality_expression,
    STATE(448), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(35), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(41), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(39), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(200), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9155] = 33,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_unary_minus_operator,
    ACTIONS(37), 1,
      sym_relocation_type,
    ACTIONS(43), 1,
      aux_sym_decimal_token1,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(51), 1,
      aux_sym_symbol_token1,
    STATE(195), 1,
      sym__shift_expression,
    STATE(197), 1,
      sym__additive_expression,
    STATE(198), 1,
      sym__wrapped_additive_expression,
    STATE(199), 1,
      sym__multiplicative_expression,
    STATE(220), 1,
      sym__wrapped_shift_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(328), 1,
      sym__bitwise_and_expression,
    STATE(329), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(330), 1,
      sym__equality_expression,
    STATE(332), 1,
      sym__wrapped_equality_expression,
    STATE(334), 1,
      sym__relational_expression,
    STATE(335), 1,
      sym__wrapped_relational_expression,
    STATE(448), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(35), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(41), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(39), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(200), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9271] = 33,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_unary_minus_operator,
    ACTIONS(37), 1,
      sym_relocation_type,
    ACTIONS(43), 1,
      aux_sym_decimal_token1,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(51), 1,
      aux_sym_symbol_token1,
    STATE(197), 1,
      sym__additive_expression,
    STATE(199), 1,
      sym__multiplicative_expression,
    STATE(221), 1,
      sym__wrapped_additive_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(328), 1,
      sym__bitwise_and_expression,
    STATE(329), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(330), 1,
      sym__equality_expression,
    STATE(332), 1,
      sym__wrapped_equality_expression,
    STATE(334), 1,
      sym__relational_expression,
    STATE(335), 1,
      sym__wrapped_relational_expression,
    STATE(336), 1,
      sym__shift_expression,
    STATE(337), 1,
      sym__wrapped_shift_expression,
    STATE(448), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(35), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(41), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(39), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(200), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9387] = 33,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_unary_minus_operator,
    ACTIONS(37), 1,
      sym_relocation_type,
    ACTIONS(43), 1,
      aux_sym_decimal_token1,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(51), 1,
      aux_sym_symbol_token1,
    STATE(199), 1,
      sym__multiplicative_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(328), 1,
      sym__bitwise_and_expression,
    STATE(329), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(330), 1,
      sym__equality_expression,
    STATE(332), 1,
      sym__wrapped_equality_expression,
    STATE(334), 1,
      sym__relational_expression,
    STATE(335), 1,
      sym__wrapped_relational_expression,
    STATE(336), 1,
      sym__shift_expression,
    STATE(337), 1,
      sym__wrapped_shift_expression,
    STATE(338), 1,
      sym__additive_expression,
    STATE(339), 1,
      sym__wrapped_additive_expression,
    STATE(448), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(35), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(249), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(247), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(222), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9503] = 34,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_unary_minus_operator,
    ACTIONS(37), 1,
      sym_relocation_type,
    ACTIONS(43), 1,
      aux_sym_decimal_token1,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(51), 1,
      aux_sym_symbol_token1,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(328), 1,
      sym__bitwise_and_expression,
    STATE(329), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(330), 1,
      sym__equality_expression,
    STATE(332), 1,
      sym__wrapped_equality_expression,
    STATE(334), 1,
      sym__relational_expression,
    STATE(335), 1,
      sym__wrapped_relational_expression,
    STATE(336), 1,
      sym__shift_expression,
    STATE(337), 1,
      sym__wrapped_shift_expression,
    STATE(338), 1,
      sym__additive_expression,
    STATE(339), 1,
      sym__wrapped_additive_expression,
    STATE(340), 1,
      sym__multiplicative_expression,
    STATE(341), 1,
      sym__wrapped_multiplicative_expression,
    STATE(448), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(35), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(253), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(251), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(223), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9621] = 33,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_unary_minus_operator,
    ACTIONS(143), 1,
      sym_relocation_type,
    ACTIONS(149), 1,
      aux_sym_decimal_token1,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(240), 1,
      sym__logical_and_expression,
    STATE(248), 1,
      sym__shift_expression,
    STATE(252), 1,
      sym__wrapped_shift_expression,
    STATE(253), 1,
      sym__additive_expression,
    STATE(254), 1,
      sym__wrapped_additive_expression,
    STATE(255), 1,
      sym__multiplicative_expression,
    STATE(257), 1,
      sym__wrapped_assignment_expression,
    STATE(258), 1,
      sym__bitwise_xor_expression,
    STATE(259), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(260), 1,
      sym__bitwise_and_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(263), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(266), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(267), 1,
      sym__wrapped_logical_and_expression,
    STATE(274), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(290), 1,
      sym__assignment_expression,
    STATE(291), 1,
      sym__logical_or_expression,
    STATE(292), 1,
      sym__wrapped_logical_or_expression,
    STATE(293), 1,
      sym__relational_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(141), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(147), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(145), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(256), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9737] = 33,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(61), 1,
      sym_relocation_type,
    ACTIONS(65), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(73), 1,
      aux_sym_symbol_token1,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_SQUOTE,
    STATE(152), 1,
      sym__relational_expression,
    STATE(154), 1,
      sym__logical_or_expression,
    STATE(157), 1,
      sym__logical_and_expression,
    STATE(160), 1,
      sym__wrapped_logical_and_expression,
    STATE(161), 1,
      sym__bitwise_or_expression,
    STATE(162), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(163), 1,
      sym__bitwise_xor_expression,
    STATE(164), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(165), 1,
      sym__bitwise_and_expression,
    STATE(166), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(167), 1,
      sym__equality_expression,
    STATE(168), 1,
      sym__wrapped_relational_expression,
    STATE(169), 1,
      sym__shift_expression,
    STATE(170), 1,
      sym__wrapped_shift_expression,
    STATE(171), 1,
      sym__additive_expression,
    STATE(202), 1,
      sym__wrapped_additive_expression,
    STATE(228), 1,
      sym__wrapped_logical_or_expression,
    STATE(229), 1,
      sym__wrapped_equality_expression,
    STATE(233), 1,
      sym__multiplicative_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(460), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(185), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(187), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(63), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(179), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9853] = 33,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_unary_minus_operator,
    ACTIONS(143), 1,
      sym_relocation_type,
    ACTIONS(149), 1,
      aux_sym_decimal_token1,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(240), 1,
      sym__logical_and_expression,
    STATE(248), 1,
      sym__shift_expression,
    STATE(252), 1,
      sym__wrapped_shift_expression,
    STATE(253), 1,
      sym__additive_expression,
    STATE(254), 1,
      sym__wrapped_additive_expression,
    STATE(255), 1,
      sym__multiplicative_expression,
    STATE(258), 1,
      sym__bitwise_xor_expression,
    STATE(259), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(260), 1,
      sym__bitwise_and_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(263), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(265), 1,
      sym__wrapped_logical_or_expression,
    STATE(266), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(267), 1,
      sym__wrapped_logical_and_expression,
    STATE(274), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(291), 1,
      sym__logical_or_expression,
    STATE(293), 1,
      sym__relational_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(462), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(141), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(147), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(145), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(256), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9969] = 33,
    ACTIONS(85), 1,
      sym_unary_minus_operator,
    ACTIONS(87), 1,
      sym_relocation_type,
    ACTIONS(91), 1,
      aux_sym_decimal_token1,
    ACTIONS(95), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(97), 1,
      aux_sym_symbol_token1,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    STATE(108), 1,
      sym__multiplicative_expression,
    STATE(114), 1,
      sym__logical_or_expression,
    STATE(116), 1,
      sym__logical_and_expression,
    STATE(117), 1,
      sym__wrapped_logical_and_expression,
    STATE(118), 1,
      sym__bitwise_or_expression,
    STATE(119), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(120), 1,
      sym__bitwise_xor_expression,
    STATE(121), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(122), 1,
      sym__bitwise_and_expression,
    STATE(123), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(124), 1,
      sym__equality_expression,
    STATE(125), 1,
      sym__wrapped_equality_expression,
    STATE(126), 1,
      sym__relational_expression,
    STATE(127), 1,
      sym__wrapped_relational_expression,
    STATE(128), 1,
      sym__wrapped_logical_or_expression,
    STATE(129), 1,
      sym__wrapped_shift_expression,
    STATE(130), 1,
      sym__additive_expression,
    STATE(131), 1,
      sym__wrapped_additive_expression,
    STATE(150), 1,
      sym__shift_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(463), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(219), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(221), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(89), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(132), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10085] = 33,
    ACTIONS(195), 1,
      sym_unary_minus_operator,
    ACTIONS(199), 1,
      sym_relocation_type,
    ACTIONS(205), 1,
      aux_sym_decimal_token1,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(215), 1,
      aux_sym_symbol_token1,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    STATE(296), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(328), 1,
      sym__bitwise_and_expression,
    STATE(329), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(330), 1,
      sym__equality_expression,
    STATE(332), 1,
      sym__wrapped_equality_expression,
    STATE(334), 1,
      sym__relational_expression,
    STATE(335), 1,
      sym__wrapped_relational_expression,
    STATE(336), 1,
      sym__shift_expression,
    STATE(337), 1,
      sym__wrapped_shift_expression,
    STATE(338), 1,
      sym__additive_expression,
    STATE(339), 1,
      sym__wrapped_additive_expression,
    STATE(340), 1,
      sym__multiplicative_expression,
    STATE(464), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(197), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(203), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(201), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(341), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10201] = 33,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_unary_minus_operator,
    ACTIONS(37), 1,
      sym_relocation_type,
    ACTIONS(43), 1,
      aux_sym_decimal_token1,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(51), 1,
      aux_sym_symbol_token1,
    STATE(181), 1,
      sym__logical_or_expression,
    STATE(183), 1,
      sym__logical_and_expression,
    STATE(184), 1,
      sym__wrapped_logical_and_expression,
    STATE(185), 1,
      sym__bitwise_or_expression,
    STATE(186), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(187), 1,
      sym__bitwise_xor_expression,
    STATE(188), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(189), 1,
      sym__bitwise_and_expression,
    STATE(190), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(191), 1,
      sym__equality_expression,
    STATE(192), 1,
      sym__wrapped_equality_expression,
    STATE(193), 1,
      sym__relational_expression,
    STATE(195), 1,
      sym__shift_expression,
    STATE(196), 1,
      sym__wrapped_shift_expression,
    STATE(197), 1,
      sym__additive_expression,
    STATE(198), 1,
      sym__wrapped_additive_expression,
    STATE(199), 1,
      sym__multiplicative_expression,
    STATE(230), 1,
      sym__wrapped_logical_or_expression,
    STATE(237), 1,
      sym__wrapped_relational_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(448), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(35), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(41), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(39), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(200), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10317] = 33,
    ACTIONS(85), 1,
      sym_unary_minus_operator,
    ACTIONS(87), 1,
      sym_relocation_type,
    ACTIONS(91), 1,
      aux_sym_decimal_token1,
    ACTIONS(95), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(97), 1,
      aux_sym_symbol_token1,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
    STATE(108), 1,
      sym__multiplicative_expression,
    STATE(113), 1,
      sym__assignment_expression,
    STATE(114), 1,
      sym__logical_or_expression,
    STATE(115), 1,
      sym__wrapped_logical_or_expression,
    STATE(116), 1,
      sym__logical_and_expression,
    STATE(117), 1,
      sym__wrapped_logical_and_expression,
    STATE(118), 1,
      sym__bitwise_or_expression,
    STATE(119), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(120), 1,
      sym__bitwise_xor_expression,
    STATE(121), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(122), 1,
      sym__bitwise_and_expression,
    STATE(123), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(124), 1,
      sym__equality_expression,
    STATE(125), 1,
      sym__wrapped_equality_expression,
    STATE(126), 1,
      sym__relational_expression,
    STATE(127), 1,
      sym__wrapped_relational_expression,
    STATE(129), 1,
      sym__wrapped_shift_expression,
    STATE(130), 1,
      sym__additive_expression,
    STATE(131), 1,
      sym__wrapped_additive_expression,
    STATE(133), 1,
      sym__wrapped_assignment_expression,
    STATE(150), 1,
      sym__shift_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(219), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(221), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(89), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(132), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10433] = 33,
    ACTIONS(195), 1,
      sym_unary_minus_operator,
    ACTIONS(199), 1,
      sym_relocation_type,
    ACTIONS(205), 1,
      aux_sym_decimal_token1,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(215), 1,
      aux_sym_symbol_token1,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(328), 1,
      sym__bitwise_and_expression,
    STATE(329), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(330), 1,
      sym__equality_expression,
    STATE(332), 1,
      sym__wrapped_equality_expression,
    STATE(334), 1,
      sym__relational_expression,
    STATE(335), 1,
      sym__wrapped_relational_expression,
    STATE(336), 1,
      sym__shift_expression,
    STATE(337), 1,
      sym__wrapped_shift_expression,
    STATE(338), 1,
      sym__additive_expression,
    STATE(339), 1,
      sym__wrapped_additive_expression,
    STATE(340), 1,
      sym__multiplicative_expression,
    STATE(342), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(197), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(203), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(201), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(341), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10549] = 33,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_unary_minus_operator,
    ACTIONS(37), 1,
      sym_relocation_type,
    ACTIONS(43), 1,
      aux_sym_decimal_token1,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(51), 1,
      aux_sym_symbol_token1,
    STATE(180), 1,
      sym__assignment_expression,
    STATE(181), 1,
      sym__logical_or_expression,
    STATE(182), 1,
      sym__wrapped_logical_or_expression,
    STATE(183), 1,
      sym__logical_and_expression,
    STATE(184), 1,
      sym__wrapped_logical_and_expression,
    STATE(185), 1,
      sym__bitwise_or_expression,
    STATE(186), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(187), 1,
      sym__bitwise_xor_expression,
    STATE(188), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(189), 1,
      sym__bitwise_and_expression,
    STATE(190), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(191), 1,
      sym__equality_expression,
    STATE(192), 1,
      sym__wrapped_equality_expression,
    STATE(193), 1,
      sym__relational_expression,
    STATE(195), 1,
      sym__shift_expression,
    STATE(196), 1,
      sym__wrapped_shift_expression,
    STATE(197), 1,
      sym__additive_expression,
    STATE(198), 1,
      sym__wrapped_additive_expression,
    STATE(199), 1,
      sym__multiplicative_expression,
    STATE(201), 1,
      sym__wrapped_assignment_expression,
    STATE(237), 1,
      sym__wrapped_relational_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(35), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(41), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(39), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(200), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10665] = 33,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(61), 1,
      sym_relocation_type,
    ACTIONS(65), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(73), 1,
      aux_sym_symbol_token1,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_SQUOTE,
    STATE(152), 1,
      sym__relational_expression,
    STATE(161), 1,
      sym__bitwise_or_expression,
    STATE(163), 1,
      sym__bitwise_xor_expression,
    STATE(164), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(165), 1,
      sym__bitwise_and_expression,
    STATE(166), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(167), 1,
      sym__equality_expression,
    STATE(168), 1,
      sym__wrapped_relational_expression,
    STATE(169), 1,
      sym__shift_expression,
    STATE(170), 1,
      sym__wrapped_shift_expression,
    STATE(171), 1,
      sym__additive_expression,
    STATE(202), 1,
      sym__wrapped_additive_expression,
    STATE(204), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(229), 1,
      sym__wrapped_equality_expression,
    STATE(233), 1,
      sym__multiplicative_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(460), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(185), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(187), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(63), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(179), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10781] = 33,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(61), 1,
      sym_relocation_type,
    ACTIONS(65), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(73), 1,
      aux_sym_symbol_token1,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_SQUOTE,
    STATE(152), 1,
      sym__relational_expression,
    STATE(163), 1,
      sym__bitwise_xor_expression,
    STATE(165), 1,
      sym__bitwise_and_expression,
    STATE(166), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(167), 1,
      sym__equality_expression,
    STATE(168), 1,
      sym__wrapped_relational_expression,
    STATE(169), 1,
      sym__shift_expression,
    STATE(170), 1,
      sym__wrapped_shift_expression,
    STATE(171), 1,
      sym__additive_expression,
    STATE(202), 1,
      sym__wrapped_additive_expression,
    STATE(205), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(229), 1,
      sym__wrapped_equality_expression,
    STATE(233), 1,
      sym__multiplicative_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(460), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(185), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(187), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(63), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(179), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10897] = 33,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(61), 1,
      sym_relocation_type,
    ACTIONS(65), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(73), 1,
      aux_sym_symbol_token1,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_SQUOTE,
    STATE(152), 1,
      sym__relational_expression,
    STATE(165), 1,
      sym__bitwise_and_expression,
    STATE(167), 1,
      sym__equality_expression,
    STATE(168), 1,
      sym__wrapped_relational_expression,
    STATE(169), 1,
      sym__shift_expression,
    STATE(170), 1,
      sym__wrapped_shift_expression,
    STATE(171), 1,
      sym__additive_expression,
    STATE(202), 1,
      sym__wrapped_additive_expression,
    STATE(206), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(229), 1,
      sym__wrapped_equality_expression,
    STATE(233), 1,
      sym__multiplicative_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(460), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(185), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(187), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(63), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(179), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11013] = 33,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(61), 1,
      sym_relocation_type,
    ACTIONS(65), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(73), 1,
      aux_sym_symbol_token1,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_SQUOTE,
    STATE(152), 1,
      sym__relational_expression,
    STATE(167), 1,
      sym__equality_expression,
    STATE(168), 1,
      sym__wrapped_relational_expression,
    STATE(169), 1,
      sym__shift_expression,
    STATE(170), 1,
      sym__wrapped_shift_expression,
    STATE(171), 1,
      sym__additive_expression,
    STATE(202), 1,
      sym__wrapped_additive_expression,
    STATE(207), 1,
      sym__wrapped_equality_expression,
    STATE(233), 1,
      sym__multiplicative_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(328), 1,
      sym__bitwise_and_expression,
    STATE(329), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(460), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(185), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(187), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(63), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(179), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11129] = 33,
    ACTIONS(195), 1,
      sym_unary_minus_operator,
    ACTIONS(199), 1,
      sym_relocation_type,
    ACTIONS(205), 1,
      aux_sym_decimal_token1,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(215), 1,
      aux_sym_symbol_token1,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(328), 1,
      sym__bitwise_and_expression,
    STATE(329), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(330), 1,
      sym__equality_expression,
    STATE(332), 1,
      sym__wrapped_equality_expression,
    STATE(334), 1,
      sym__relational_expression,
    STATE(335), 1,
      sym__wrapped_relational_expression,
    STATE(336), 1,
      sym__shift_expression,
    STATE(337), 1,
      sym__wrapped_shift_expression,
    STATE(338), 1,
      sym__additive_expression,
    STATE(339), 1,
      sym__wrapped_additive_expression,
    STATE(340), 1,
      sym__multiplicative_expression,
    STATE(434), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(197), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(203), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(201), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(341), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11245] = 33,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(61), 1,
      sym_relocation_type,
    ACTIONS(65), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(73), 1,
      aux_sym_symbol_token1,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_SQUOTE,
    STATE(152), 1,
      sym__relational_expression,
    STATE(169), 1,
      sym__shift_expression,
    STATE(170), 1,
      sym__wrapped_shift_expression,
    STATE(171), 1,
      sym__additive_expression,
    STATE(202), 1,
      sym__wrapped_additive_expression,
    STATE(208), 1,
      sym__wrapped_relational_expression,
    STATE(233), 1,
      sym__multiplicative_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(328), 1,
      sym__bitwise_and_expression,
    STATE(329), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(330), 1,
      sym__equality_expression,
    STATE(332), 1,
      sym__wrapped_equality_expression,
    STATE(460), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(185), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(187), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(63), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(179), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11361] = 33,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(61), 1,
      sym_relocation_type,
    ACTIONS(65), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(73), 1,
      aux_sym_symbol_token1,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_SQUOTE,
    STATE(169), 1,
      sym__shift_expression,
    STATE(171), 1,
      sym__additive_expression,
    STATE(202), 1,
      sym__wrapped_additive_expression,
    STATE(209), 1,
      sym__wrapped_shift_expression,
    STATE(233), 1,
      sym__multiplicative_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(328), 1,
      sym__bitwise_and_expression,
    STATE(329), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(330), 1,
      sym__equality_expression,
    STATE(332), 1,
      sym__wrapped_equality_expression,
    STATE(334), 1,
      sym__relational_expression,
    STATE(335), 1,
      sym__wrapped_relational_expression,
    STATE(460), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(185), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(187), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(63), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(179), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11477] = 33,
    ACTIONS(195), 1,
      sym_unary_minus_operator,
    ACTIONS(199), 1,
      sym_relocation_type,
    ACTIONS(205), 1,
      aux_sym_decimal_token1,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(215), 1,
      aux_sym_symbol_token1,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(328), 1,
      sym__bitwise_and_expression,
    STATE(329), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(330), 1,
      sym__equality_expression,
    STATE(332), 1,
      sym__wrapped_equality_expression,
    STATE(334), 1,
      sym__relational_expression,
    STATE(335), 1,
      sym__wrapped_relational_expression,
    STATE(336), 1,
      sym__shift_expression,
    STATE(337), 1,
      sym__wrapped_shift_expression,
    STATE(338), 1,
      sym__additive_expression,
    STATE(339), 1,
      sym__wrapped_additive_expression,
    STATE(340), 1,
      sym__multiplicative_expression,
    STATE(437), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(197), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(203), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(201), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(341), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11593] = 33,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(61), 1,
      sym_relocation_type,
    ACTIONS(65), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(73), 1,
      aux_sym_symbol_token1,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_SQUOTE,
    STATE(171), 1,
      sym__additive_expression,
    STATE(210), 1,
      sym__wrapped_additive_expression,
    STATE(233), 1,
      sym__multiplicative_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(328), 1,
      sym__bitwise_and_expression,
    STATE(329), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(330), 1,
      sym__equality_expression,
    STATE(332), 1,
      sym__wrapped_equality_expression,
    STATE(334), 1,
      sym__relational_expression,
    STATE(335), 1,
      sym__wrapped_relational_expression,
    STATE(336), 1,
      sym__shift_expression,
    STATE(337), 1,
      sym__wrapped_shift_expression,
    STATE(460), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(185), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(187), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(63), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(179), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11709] = 33,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(61), 1,
      sym_relocation_type,
    ACTIONS(65), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(73), 1,
      aux_sym_symbol_token1,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_SQUOTE,
    STATE(233), 1,
      sym__multiplicative_expression,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(328), 1,
      sym__bitwise_and_expression,
    STATE(329), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(330), 1,
      sym__equality_expression,
    STATE(332), 1,
      sym__wrapped_equality_expression,
    STATE(334), 1,
      sym__relational_expression,
    STATE(335), 1,
      sym__wrapped_relational_expression,
    STATE(336), 1,
      sym__shift_expression,
    STATE(337), 1,
      sym__wrapped_shift_expression,
    STATE(338), 1,
      sym__additive_expression,
    STATE(339), 1,
      sym__wrapped_additive_expression,
    STATE(460), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(185), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(257), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(255), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(231), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11825] = 33,
    ACTIONS(195), 1,
      sym_unary_minus_operator,
    ACTIONS(199), 1,
      sym_relocation_type,
    ACTIONS(205), 1,
      aux_sym_decimal_token1,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(215), 1,
      aux_sym_symbol_token1,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(328), 1,
      sym__bitwise_and_expression,
    STATE(329), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(330), 1,
      sym__equality_expression,
    STATE(332), 1,
      sym__wrapped_equality_expression,
    STATE(334), 1,
      sym__relational_expression,
    STATE(335), 1,
      sym__wrapped_relational_expression,
    STATE(336), 1,
      sym__shift_expression,
    STATE(337), 1,
      sym__wrapped_shift_expression,
    STATE(338), 1,
      sym__additive_expression,
    STATE(339), 1,
      sym__wrapped_additive_expression,
    STATE(340), 1,
      sym__multiplicative_expression,
    STATE(438), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(197), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(203), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(201), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(341), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11941] = 34,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(61), 1,
      sym_relocation_type,
    ACTIONS(65), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(73), 1,
      aux_sym_symbol_token1,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_SQUOTE,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(328), 1,
      sym__bitwise_and_expression,
    STATE(329), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(330), 1,
      sym__equality_expression,
    STATE(332), 1,
      sym__wrapped_equality_expression,
    STATE(334), 1,
      sym__relational_expression,
    STATE(335), 1,
      sym__wrapped_relational_expression,
    STATE(336), 1,
      sym__shift_expression,
    STATE(337), 1,
      sym__wrapped_shift_expression,
    STATE(338), 1,
      sym__additive_expression,
    STATE(339), 1,
      sym__wrapped_additive_expression,
    STATE(340), 1,
      sym__multiplicative_expression,
    STATE(341), 1,
      sym__wrapped_multiplicative_expression,
    STATE(460), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(185), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(261), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(259), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(232), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12059] = 33,
    ACTIONS(195), 1,
      sym_unary_minus_operator,
    ACTIONS(199), 1,
      sym_relocation_type,
    ACTIONS(205), 1,
      aux_sym_decimal_token1,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(215), 1,
      aux_sym_symbol_token1,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    STATE(315), 1,
      sym__assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(318), 1,
      sym__wrapped_logical_or_expression,
    STATE(322), 1,
      sym__logical_and_expression,
    STATE(323), 1,
      sym__wrapped_logical_and_expression,
    STATE(324), 1,
      sym__bitwise_or_expression,
    STATE(325), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(326), 1,
      sym__bitwise_xor_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(328), 1,
      sym__bitwise_and_expression,
    STATE(329), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(330), 1,
      sym__equality_expression,
    STATE(332), 1,
      sym__wrapped_equality_expression,
    STATE(334), 1,
      sym__relational_expression,
    STATE(335), 1,
      sym__wrapped_relational_expression,
    STATE(336), 1,
      sym__shift_expression,
    STATE(337), 1,
      sym__wrapped_shift_expression,
    STATE(338), 1,
      sym__additive_expression,
    STATE(339), 1,
      sym__wrapped_additive_expression,
    STATE(340), 1,
      sym__multiplicative_expression,
    STATE(464), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(197), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(265), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(263), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(309), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12175] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    ACTIONS(269), 42,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_macro_mnemonic,
      anon_sym_DOTbyte,
      anon_sym_DOT2byte,
      anon_sym_DOTshort,
      anon_sym_DOThalf,
      anon_sym_DOThword,
      anon_sym_DOT4byte,
      anon_sym_DOTword,
      anon_sym_DOTint,
      anon_sym_DOT8byte,
      anon_sym_DOTdword,
      anon_sym_DOTlong,
      anon_sym_DOTquad,
      anon_sym_DOTcomm,
      anon_sym_DOTlcomm,
      anon_sym_DOTalign,
      anon_sym_DOTbalign,
      anon_sym_DOTp2align,
      anon_sym_DOTsleb128,
      anon_sym_DOTuleb128,
      anon_sym_DOTdtprelword,
      anon_sym_DOTdtpreldword,
      anon_sym_DOTskip,
      anon_sym_DOTspace,
      anon_sym_DOTfloat,
      anon_sym_DOTdouble,
      anon_sym_DOTsingle,
      anon_sym_DOTasciz,
      anon_sym_DOTascii,
      anon_sym_DOTasciiz,
      anon_sym_DOTstring,
      anon_sym_DOTstringz,
      aux_sym_control_mnemonic_token1,
      sym_opcode,
      sym_local_label,
      sym_global_label,
      sym_global_numeric_label,
      sym_local_numeric_label,
  [12229] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(271), 1,
      ts_builtin_sym_end,
    ACTIONS(273), 42,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_macro_mnemonic,
      anon_sym_DOTbyte,
      anon_sym_DOT2byte,
      anon_sym_DOTshort,
      anon_sym_DOThalf,
      anon_sym_DOThword,
      anon_sym_DOT4byte,
      anon_sym_DOTword,
      anon_sym_DOTint,
      anon_sym_DOT8byte,
      anon_sym_DOTdword,
      anon_sym_DOTlong,
      anon_sym_DOTquad,
      anon_sym_DOTcomm,
      anon_sym_DOTlcomm,
      anon_sym_DOTalign,
      anon_sym_DOTbalign,
      anon_sym_DOTp2align,
      anon_sym_DOTsleb128,
      anon_sym_DOTuleb128,
      anon_sym_DOTdtprelword,
      anon_sym_DOTdtpreldword,
      anon_sym_DOTskip,
      anon_sym_DOTspace,
      anon_sym_DOTfloat,
      anon_sym_DOTdouble,
      anon_sym_DOTsingle,
      anon_sym_DOTasciz,
      anon_sym_DOTascii,
      anon_sym_DOTasciiz,
      anon_sym_DOTstring,
      anon_sym_DOTstringz,
      aux_sym_control_mnemonic_token1,
      sym_opcode,
      sym_local_label,
      sym_global_label,
      sym_global_numeric_label,
      sym_local_numeric_label,
  [12283] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    ACTIONS(277), 42,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_macro_mnemonic,
      anon_sym_DOTbyte,
      anon_sym_DOT2byte,
      anon_sym_DOTshort,
      anon_sym_DOThalf,
      anon_sym_DOThword,
      anon_sym_DOT4byte,
      anon_sym_DOTword,
      anon_sym_DOTint,
      anon_sym_DOT8byte,
      anon_sym_DOTdword,
      anon_sym_DOTlong,
      anon_sym_DOTquad,
      anon_sym_DOTcomm,
      anon_sym_DOTlcomm,
      anon_sym_DOTalign,
      anon_sym_DOTbalign,
      anon_sym_DOTp2align,
      anon_sym_DOTsleb128,
      anon_sym_DOTuleb128,
      anon_sym_DOTdtprelword,
      anon_sym_DOTdtpreldword,
      anon_sym_DOTskip,
      anon_sym_DOTspace,
      anon_sym_DOTfloat,
      anon_sym_DOTdouble,
      anon_sym_DOTsingle,
      anon_sym_DOTasciz,
      anon_sym_DOTascii,
      anon_sym_DOTasciiz,
      anon_sym_DOTstring,
      anon_sym_DOTstringz,
      aux_sym_control_mnemonic_token1,
      sym_opcode,
      sym_local_label,
      sym_global_label,
      sym_global_numeric_label,
      sym_local_numeric_label,
  [12337] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    ACTIONS(281), 42,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_macro_mnemonic,
      anon_sym_DOTbyte,
      anon_sym_DOT2byte,
      anon_sym_DOTshort,
      anon_sym_DOThalf,
      anon_sym_DOThword,
      anon_sym_DOT4byte,
      anon_sym_DOTword,
      anon_sym_DOTint,
      anon_sym_DOT8byte,
      anon_sym_DOTdword,
      anon_sym_DOTlong,
      anon_sym_DOTquad,
      anon_sym_DOTcomm,
      anon_sym_DOTlcomm,
      anon_sym_DOTalign,
      anon_sym_DOTbalign,
      anon_sym_DOTp2align,
      anon_sym_DOTsleb128,
      anon_sym_DOTuleb128,
      anon_sym_DOTdtprelword,
      anon_sym_DOTdtpreldword,
      anon_sym_DOTskip,
      anon_sym_DOTspace,
      anon_sym_DOTfloat,
      anon_sym_DOTdouble,
      anon_sym_DOTsingle,
      anon_sym_DOTasciz,
      anon_sym_DOTascii,
      anon_sym_DOTasciiz,
      anon_sym_DOTstring,
      anon_sym_DOTstringz,
      aux_sym_control_mnemonic_token1,
      sym_opcode,
      sym_local_label,
      sym_global_label,
      sym_global_numeric_label,
      sym_local_numeric_label,
  [12391] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(283), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(285), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [12425] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(287), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(289), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [12459] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(291), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(293), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [12493] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(295), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(297), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [12527] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(299), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(301), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [12561] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(303), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(305), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [12595] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(307), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(309), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [12629] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(315), 1,
      sym_logical_or_operator,
    ACTIONS(311), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(313), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [12665] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(317), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(319), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [12699] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(325), 1,
      sym_logical_and_operator,
    ACTIONS(321), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(323), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [12735] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(327), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(329), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [12769] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(335), 1,
      sym_bitwise_or_operator,
    ACTIONS(331), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(333), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [12805] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(337), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(339), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [12839] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(345), 1,
      sym_bitwise_xor_operator,
    ACTIONS(341), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(343), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [12875] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(347), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(349), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [12909] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(355), 1,
      sym_bitwise_and_operator,
    ACTIONS(351), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(353), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [12945] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(357), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(359), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [12979] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(365), 1,
      sym_equality_operator,
    ACTIONS(361), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(363), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [13015] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(367), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(369), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [13049] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(375), 1,
      sym_relational_operator,
    ACTIONS(371), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(373), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [13085] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(377), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(379), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [13119] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(385), 1,
      sym_shift_operator,
    ACTIONS(381), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(383), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [13155] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(387), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(389), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [13189] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(395), 1,
      sym_additive_operator,
    ACTIONS(391), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(393), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_multiplicative_operator,
  [13225] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(401), 1,
      sym_multiplicative_operator,
    ACTIONS(397), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(399), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
  [13261] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(409), 1,
      sym_assignment_operator,
    ACTIONS(403), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(405), 17,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [13299] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(411), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(413), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [13333] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(415), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(417), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [13367] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(419), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(421), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [13401] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(325), 1,
      sym_logical_and_operator,
    ACTIONS(423), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(425), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [13437] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(335), 1,
      sym_bitwise_or_operator,
    ACTIONS(427), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(429), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [13473] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(345), 1,
      sym_bitwise_xor_operator,
    ACTIONS(431), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(433), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [13509] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(355), 1,
      sym_bitwise_and_operator,
    ACTIONS(435), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(437), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [13545] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(365), 1,
      sym_equality_operator,
    ACTIONS(439), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(441), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [13581] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(375), 1,
      sym_relational_operator,
    ACTIONS(443), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(445), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [13617] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(385), 1,
      sym_shift_operator,
    ACTIONS(447), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(449), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [13653] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(395), 1,
      sym_additive_operator,
    ACTIONS(451), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(453), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_multiplicative_operator,
  [13689] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(401), 1,
      sym_multiplicative_operator,
    ACTIONS(455), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(457), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
  [13725] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(459), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(461), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [13759] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(463), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(465), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [13793] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(467), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(469), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [13827] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(471), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(473), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [13861] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(475), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(477), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [13895] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(301), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(299), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [13923] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(367), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(369), 17,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [13953] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(303), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(305), 17,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [13983] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(307), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(309), 17,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [14013] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(479), 1,
      sym_logical_or_operator,
    ACTIONS(311), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(313), 16,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [14045] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(295), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(297), 17,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [14075] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(317), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(319), 17,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [14105] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(299), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(301), 17,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [14135] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      sym_assignment_operator,
    ACTIONS(403), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(405), 15,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [14169] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(485), 1,
      sym_logical_and_operator,
    ACTIONS(321), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(323), 16,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [14201] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(327), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(329), 17,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [14231] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(487), 1,
      sym_bitwise_or_operator,
    ACTIONS(331), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(333), 16,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [14263] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(337), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(339), 17,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [14293] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(489), 1,
      sym_bitwise_xor_operator,
    ACTIONS(341), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(343), 16,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [14325] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(347), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(349), 17,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [14355] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(491), 1,
      sym_bitwise_and_operator,
    ACTIONS(351), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(353), 16,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [14387] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(357), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(359), 17,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [14417] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(493), 1,
      sym_relational_operator,
    ACTIONS(371), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(373), 16,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [14449] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(475), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(477), 17,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [14479] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(495), 1,
      sym_shift_operator,
    ACTIONS(381), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(383), 16,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [14511] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(387), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(389), 17,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [14541] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(411), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(413), 17,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [14571] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(287), 1,
      sym__operand_separator,
    ACTIONS(497), 1,
      ts_builtin_sym_end,
    ACTIONS(499), 4,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
    ACTIONS(289), 13,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [14605] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(415), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(417), 17,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [14635] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(419), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(421), 17,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [14665] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(289), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(287), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14693] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(293), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(291), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14721] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(297), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(295), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14749] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(501), 1,
      sym_multiplicative_operator,
    ACTIONS(397), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(399), 16,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14781] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(305), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(303), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14809] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(309), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(307), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14837] = 4,
    ACTIONS(503), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(313), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(311), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14867] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(319), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(317), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14895] = 4,
    ACTIONS(505), 1,
      sym_logical_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(323), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(321), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14925] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(329), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(327), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14953] = 4,
    ACTIONS(507), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(333), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(331), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14983] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(339), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(337), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15011] = 4,
    ACTIONS(509), 1,
      sym_bitwise_xor_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(343), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(341), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15041] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(349), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(347), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15069] = 4,
    ACTIONS(511), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(353), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(351), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15099] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(359), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(357), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15127] = 4,
    ACTIONS(513), 1,
      sym_equality_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(363), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(361), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15157] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(369), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(367), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15185] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(291), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(293), 17,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [15215] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(477), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(475), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15243] = 4,
    ACTIONS(515), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(383), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(381), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [15273] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(389), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(387), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15301] = 4,
    ACTIONS(517), 1,
      sym_additive_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(393), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(391), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [15331] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(285), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(283), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15359] = 4,
    ACTIONS(519), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(399), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(397), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15389] = 5,
    ACTIONS(521), 1,
      anon_sym_LPAREN,
    ACTIONS(523), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(405), 4,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(403), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15421] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(525), 1,
      sym_additive_operator,
    ACTIONS(391), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(393), 16,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_multiplicative_operator,
  [15453] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(485), 1,
      sym_logical_and_operator,
    ACTIONS(423), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(425), 16,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [15485] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(487), 1,
      sym_bitwise_or_operator,
    ACTIONS(427), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(429), 16,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [15517] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(489), 1,
      sym_bitwise_xor_operator,
    ACTIONS(431), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(433), 16,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [15549] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(491), 1,
      sym_bitwise_and_operator,
    ACTIONS(435), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(437), 16,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [15581] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(527), 1,
      sym_equality_operator,
    ACTIONS(439), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(441), 16,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [15613] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(493), 1,
      sym_relational_operator,
    ACTIONS(443), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(445), 16,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [15645] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(495), 1,
      sym_shift_operator,
    ACTIONS(447), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(449), 16,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [15677] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(525), 1,
      sym_additive_operator,
    ACTIONS(451), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(453), 16,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_multiplicative_operator,
  [15709] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(413), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(411), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15737] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(417), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(415), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15765] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(421), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(419), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15793] = 4,
    ACTIONS(505), 1,
      sym_logical_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(425), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(423), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15823] = 4,
    ACTIONS(507), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(429), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(427), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15853] = 4,
    ACTIONS(509), 1,
      sym_bitwise_xor_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(433), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(431), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15883] = 4,
    ACTIONS(511), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(437), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(435), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15913] = 4,
    ACTIONS(513), 1,
      sym_equality_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(441), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(439), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15943] = 4,
    ACTIONS(529), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(445), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(443), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15973] = 4,
    ACTIONS(515), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(449), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(447), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [16003] = 4,
    ACTIONS(517), 1,
      sym_additive_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(453), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(451), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [16033] = 4,
    ACTIONS(519), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(457), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(455), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16063] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(461), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(459), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16091] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(287), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(289), 17,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [16121] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(465), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(463), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16149] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(469), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(467), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16177] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(473), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(471), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16205] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(377), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(379), 17,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [16235] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(527), 1,
      sym_equality_operator,
    ACTIONS(361), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(363), 16,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [16267] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(379), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(377), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16295] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(501), 1,
      sym_multiplicative_operator,
    ACTIONS(455), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(457), 16,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16327] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(459), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(461), 17,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [16357] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(283), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(285), 17,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [16387] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(463), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(465), 17,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [16417] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(467), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(469), 17,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [16447] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(471), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(473), 17,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [16477] = 4,
    ACTIONS(529), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(373), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(371), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16507] = 14,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(535), 1,
      sym_line_comment,
    ACTIONS(541), 1,
      anon_sym_COMMA,
    ACTIONS(543), 1,
      sym_assignment_operator,
    ACTIONS(545), 1,
      sym__operand_separator,
    ACTIONS(547), 1,
      sym__data_separator,
    STATE(294), 1,
      aux_sym_numeric_operands_repeat1,
    STATE(349), 1,
      aux_sym_numeric_operands_repeat2,
    STATE(447), 1,
      sym__comment,
    ACTIONS(531), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(538), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(533), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
  [16554] = 4,
    ACTIONS(551), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(553), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(549), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16580] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(319), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(317), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16604] = 4,
    ACTIONS(555), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(437), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(435), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16630] = 4,
    ACTIONS(557), 1,
      sym_equality_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(441), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(439), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16656] = 4,
    ACTIONS(559), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(445), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(443), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16682] = 4,
    ACTIONS(561), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(449), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(447), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [16708] = 4,
    ACTIONS(563), 1,
      sym_additive_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(453), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(451), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [16734] = 4,
    ACTIONS(565), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(457), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(455), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16760] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(461), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(459), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16784] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(477), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(475), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16808] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(465), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(463), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16832] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(469), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(467), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16856] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(473), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(471), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16880] = 4,
    ACTIONS(561), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(383), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(381), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [16906] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(389), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(387), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16930] = 4,
    ACTIONS(563), 1,
      sym_additive_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(393), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(391), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [16956] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(285), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(283), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16980] = 4,
    ACTIONS(565), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(399), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(397), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17006] = 5,
    ACTIONS(567), 1,
      anon_sym_LPAREN,
    ACTIONS(569), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(405), 4,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(403), 9,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17034] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(339), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(337), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17058] = 4,
    ACTIONS(571), 1,
      sym_bitwise_xor_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(343), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(341), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17084] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(349), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(347), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17108] = 4,
    ACTIONS(555), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(353), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(351), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17134] = 4,
    ACTIONS(573), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(553), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(549), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17160] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(359), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(357), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17184] = 4,
    ACTIONS(557), 1,
      sym_equality_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(363), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(361), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17210] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(379), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(377), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17234] = 4,
    ACTIONS(575), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(333), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(331), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17260] = 4,
    ACTIONS(577), 1,
      sym_logical_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(323), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(321), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17286] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(413), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(411), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17310] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(417), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(415), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17334] = 4,
    ACTIONS(579), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(553), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(549), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17360] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(421), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(419), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17384] = 4,
    ACTIONS(581), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(553), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(549), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17410] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(289), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(287), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17434] = 4,
    ACTIONS(559), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(373), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(371), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17460] = 4,
    ACTIONS(583), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(553), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(549), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17486] = 4,
    ACTIONS(585), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(553), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(549), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17512] = 4,
    ACTIONS(587), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(553), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(549), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17538] = 4,
    ACTIONS(589), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(553), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(549), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17564] = 4,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(553), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(549), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17590] = 4,
    ACTIONS(593), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(553), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(549), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17616] = 4,
    ACTIONS(595), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(553), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(549), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17642] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(329), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(327), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17666] = 4,
    ACTIONS(577), 1,
      sym_logical_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(425), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(423), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17692] = 4,
    ACTIONS(575), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(429), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(427), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17718] = 4,
    ACTIONS(571), 1,
      sym_bitwise_xor_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(433), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(431), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17744] = 4,
    ACTIONS(597), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(553), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(549), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17770] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(293), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(291), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17794] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(297), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(295), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17818] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(301), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(299), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17842] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(305), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(303), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17866] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(309), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(307), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17890] = 4,
    ACTIONS(599), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(313), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(311), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17916] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(369), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(367), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17940] = 10,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(541), 1,
      anon_sym_COMMA,
    ACTIONS(545), 1,
      sym__operand_separator,
    ACTIONS(547), 1,
      sym__data_separator,
    STATE(333), 1,
      aux_sym_numeric_operands_repeat1,
    STATE(348), 1,
      aux_sym_numeric_operands_repeat2,
    STATE(447), 1,
      sym__comment,
    ACTIONS(601), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(603), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [17977] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(315), 1,
      sym_logical_or_operator,
    ACTIONS(377), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(379), 9,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
  [18004] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(379), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(377), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18026] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(297), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(295), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18048] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(411), 1,
      aux_sym__string_directive_token1,
    ACTIONS(413), 12,
      anon_sym_LPAREN,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [18072] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(417), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(415), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18094] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(421), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(419), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18116] = 4,
    ACTIONS(605), 1,
      sym_logical_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(425), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(423), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18140] = 4,
    ACTIONS(607), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(429), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(427), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18164] = 4,
    ACTIONS(609), 1,
      sym_bitwise_xor_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(433), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(431), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18188] = 4,
    ACTIONS(611), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(437), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(435), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18212] = 4,
    ACTIONS(613), 1,
      sym_equality_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(441), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(439), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18236] = 4,
    ACTIONS(615), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(445), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(443), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18260] = 4,
    ACTIONS(617), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(449), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(447), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [18284] = 4,
    ACTIONS(619), 1,
      sym_additive_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(453), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(451), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [18308] = 4,
    ACTIONS(621), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(457), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(455), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18332] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(461), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(459), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18354] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(301), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(299), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18376] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(465), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(463), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18398] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(467), 1,
      aux_sym__string_directive_token1,
    ACTIONS(469), 12,
      anon_sym_LPAREN,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [18422] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(471), 1,
      aux_sym__string_directive_token1,
    ACTIONS(473), 12,
      anon_sym_LPAREN,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [18446] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(305), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(303), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18468] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(309), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(307), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18490] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(413), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(411), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18512] = 4,
    ACTIONS(623), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(313), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(311), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18536] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(289), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(287), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18558] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(469), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(467), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18580] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(473), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(471), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18602] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(319), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(317), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18624] = 4,
    ACTIONS(605), 1,
      sym_logical_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(323), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(321), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18648] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(329), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(327), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18670] = 4,
    ACTIONS(607), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(333), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(331), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18694] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(339), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(337), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18716] = 4,
    ACTIONS(609), 1,
      sym_bitwise_xor_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(343), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(341), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18740] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(349), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(347), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18762] = 4,
    ACTIONS(611), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(353), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(351), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18786] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(359), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(357), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18808] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(543), 1,
      sym_assignment_operator,
    ACTIONS(625), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(627), 7,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [18836] = 4,
    ACTIONS(613), 1,
      sym_equality_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(363), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(361), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18860] = 10,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(629), 1,
      sym_line_comment,
    ACTIONS(635), 1,
      anon_sym_COMMA,
    STATE(333), 1,
      aux_sym_numeric_operands_repeat1,
    STATE(447), 1,
      sym__comment,
    ACTIONS(625), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(632), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(638), 2,
      sym__operand_separator,
      sym__data_separator,
    ACTIONS(627), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
  [18896] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(369), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(367), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18918] = 4,
    ACTIONS(615), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(373), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(371), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18942] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(477), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(475), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18964] = 4,
    ACTIONS(617), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(383), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(381), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [18988] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(389), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(387), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19010] = 4,
    ACTIONS(619), 1,
      sym_additive_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(393), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(391), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [19034] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(285), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(283), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19056] = 4,
    ACTIONS(621), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(399), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(397), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19080] = 5,
    ACTIONS(641), 1,
      anon_sym_LPAREN,
    ACTIONS(643), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(405), 4,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(403), 7,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19106] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(543), 1,
      sym_assignment_operator,
    ACTIONS(645), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(647), 7,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [19134] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(543), 1,
      sym_assignment_operator,
    ACTIONS(649), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(651), 7,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [19162] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(287), 1,
      aux_sym__string_directive_token1,
    ACTIONS(289), 12,
      anon_sym_LPAREN,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [19186] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(653), 1,
      aux_sym__string_directive_token1,
    ACTIONS(553), 12,
      anon_sym_LPAREN,
      sym_assignment_operator,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [19210] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(293), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(291), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19232] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(659), 1,
      sym__data_separator,
    STATE(350), 1,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(655), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(657), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19257] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(659), 1,
      sym__data_separator,
    STATE(350), 1,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(601), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(603), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19282] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(665), 1,
      sym__data_separator,
    STATE(350), 1,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(661), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(663), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19307] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(479), 1,
      sym_logical_or_operator,
    ACTIONS(377), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(379), 7,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
  [19330] = 3,
    ACTIONS(503), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(377), 9,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_assignment_operator,
  [19349] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    ACTIONS(672), 1,
      sym_assignment_operator,
    ACTIONS(668), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(670), 5,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_COMMA,
  [19373] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    STATE(356), 1,
      aux_sym__numeric_directive_repeat1,
    ACTIONS(674), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(676), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(678), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19397] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    STATE(354), 1,
      aux_sym__numeric_directive_repeat1,
    ACTIONS(680), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(682), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(684), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19421] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    STATE(356), 1,
      aux_sym__numeric_directive_repeat1,
    ACTIONS(686), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(688), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(690), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19445] = 5,
    STATE(10), 1,
      sym__control_operand_separator,
    STATE(358), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(695), 3,
      sym__operand_separator,
      sym__data_separator,
      aux_sym__control_operand_separator_token1,
    ACTIONS(693), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19467] = 5,
    STATE(10), 1,
      sym__control_operand_separator,
    STATE(358), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(699), 3,
      sym__operand_separator,
      sym__data_separator,
      aux_sym__control_operand_separator_token1,
    ACTIONS(697), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19489] = 5,
    STATE(10), 1,
      sym__control_operand_separator,
    STATE(357), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(695), 3,
      sym__operand_separator,
      sym__data_separator,
      aux_sym__control_operand_separator_token1,
    ACTIONS(702), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19511] = 4,
    ACTIONS(521), 1,
      anon_sym_LPAREN,
    ACTIONS(706), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(704), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      aux_sym__control_operand_separator_token1,
  [19531] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(708), 1,
      ts_builtin_sym_end,
    ACTIONS(712), 1,
      aux_sym__whitespace_token1,
    ACTIONS(714), 1,
      anon_sym_LPAREN,
    STATE(386), 1,
      sym__call_expression,
    ACTIONS(710), 4,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
  [19556] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(716), 1,
      ts_builtin_sym_end,
    ACTIONS(720), 1,
      anon_sym_COMMA,
    ACTIONS(723), 1,
      sym__operand_separator,
    STATE(362), 1,
      aux_sym_operands_repeat1,
    ACTIONS(718), 4,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
  [19581] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(732), 1,
      anon_sym_COMMA,
    STATE(365), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(726), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(728), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(730), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19606] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(734), 1,
      ts_builtin_sym_end,
    ACTIONS(738), 1,
      anon_sym_COMMA,
    ACTIONS(740), 1,
      sym__operand_separator,
    STATE(366), 1,
      aux_sym_operands_repeat1,
    ACTIONS(736), 4,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
  [19631] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(749), 1,
      anon_sym_COMMA,
    STATE(365), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(742), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(744), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(746), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19656] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(738), 1,
      anon_sym_COMMA,
    ACTIONS(752), 1,
      ts_builtin_sym_end,
    ACTIONS(756), 1,
      sym__operand_separator,
    STATE(362), 1,
      aux_sym_operands_repeat1,
    ACTIONS(754), 4,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
  [19681] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(732), 1,
      anon_sym_COMMA,
    STATE(363), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(730), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(758), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(760), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [19706] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(762), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      aux_sym__control_operand_separator_token1,
  [19720] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(697), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      aux_sym__control_operand_separator_token1,
  [19734] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(764), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      aux_sym__control_operand_separator_token1,
  [19748] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(766), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(768), 5,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_COMMA,
  [19766] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(742), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(744), 5,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [19784] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(770), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(772), 5,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [19802] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(766), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      aux_sym__control_operand_separator_token1,
  [19816] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(762), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(774), 5,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_COMMA,
  [19834] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(776), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(778), 5,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_COMMA,
  [19852] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(780), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      aux_sym__control_operand_separator_token1,
  [19866] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(784), 1,
      anon_sym_CR,
    ACTIONS(786), 1,
      sym_line_comment,
    STATE(497), 1,
      sym__comment,
    ACTIONS(782), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [19889] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(784), 1,
      anon_sym_CR,
    ACTIONS(786), 1,
      sym_line_comment,
    ACTIONS(788), 1,
      ts_builtin_sym_end,
    STATE(477), 1,
      sym__comment,
    ACTIONS(782), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [19912] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(790), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(792), 4,
      anon_sym_SEMI,
      aux_sym__whitespace_token1,
      sym_line_comment,
      aux_sym__control_directive_token1,
  [19929] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(798), 1,
      aux_sym__whitespace_token1,
    ACTIONS(800), 1,
      anon_sym_LPAREN,
    ACTIONS(794), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(796), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [19950] = 3,
    ACTIONS(599), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(377), 5,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
  [19965] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(806), 1,
      aux_sym__whitespace_token1,
    ACTIONS(808), 1,
      aux_sym__control_directive_token1,
    ACTIONS(802), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(804), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [19986] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(812), 1,
      anon_sym_RPAREN,
    ACTIONS(814), 1,
      sym_macro_parameter,
    STATE(444), 1,
      sym_macro_parameters,
    ACTIONS(810), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [20006] = 5,
    ACTIONS(567), 1,
      anon_sym_LPAREN,
    ACTIONS(816), 1,
      anon_sym_RPAREN,
    ACTIONS(819), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(668), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [20024] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(821), 1,
      ts_builtin_sym_end,
    ACTIONS(823), 4,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
  [20040] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(497), 1,
      ts_builtin_sym_end,
    ACTIONS(499), 4,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
  [20056] = 5,
    ACTIONS(788), 1,
      ts_builtin_sym_end,
    ACTIONS(827), 1,
      sym_line_comment,
    STATE(477), 1,
      sym__comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(825), 2,
      sym__line_separator,
      anon_sym_SEMI,
  [20074] = 4,
    ACTIONS(567), 1,
      anon_sym_LPAREN,
    ACTIONS(819), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(668), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20090] = 5,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(827), 1,
      sym_line_comment,
    STATE(497), 1,
      sym__comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(825), 2,
      sym__line_separator,
      anon_sym_SEMI,
  [20108] = 5,
    ACTIONS(567), 1,
      anon_sym_LPAREN,
    ACTIONS(819), 1,
      sym_assignment_operator,
    ACTIONS(829), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(668), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [20126] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(814), 1,
      sym_macro_parameter,
    ACTIONS(834), 1,
      anon_sym_RPAREN,
    STATE(446), 1,
      sym_macro_parameters,
    ACTIONS(832), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [20146] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(836), 1,
      ts_builtin_sym_end,
    ACTIONS(838), 4,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
  [20162] = 5,
    ACTIONS(567), 1,
      anon_sym_LPAREN,
    ACTIONS(819), 1,
      sym_assignment_operator,
    ACTIONS(840), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(668), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [20180] = 5,
    ACTIONS(567), 1,
      anon_sym_LPAREN,
    ACTIONS(819), 1,
      sym_assignment_operator,
    ACTIONS(843), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(668), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [20198] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(846), 1,
      ts_builtin_sym_end,
    ACTIONS(848), 4,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
  [20214] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(760), 1,
      anon_sym_RPAREN,
    ACTIONS(853), 1,
      anon_sym_COMMA,
    STATE(401), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(850), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [20234] = 5,
    ACTIONS(567), 1,
      anon_sym_LPAREN,
    ACTIONS(819), 1,
      sym_assignment_operator,
    ACTIONS(855), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(668), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [20252] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(858), 1,
      ts_builtin_sym_end,
    ACTIONS(860), 4,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
  [20268] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(744), 1,
      anon_sym_RPAREN,
    ACTIONS(865), 1,
      anon_sym_COMMA,
    STATE(400), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(862), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [20288] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(728), 1,
      anon_sym_RPAREN,
    ACTIONS(853), 1,
      anon_sym_COMMA,
    STATE(400), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(868), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [20308] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(871), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20319] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(772), 4,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20332] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(873), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20343] = 4,
    ACTIONS(875), 1,
      sym_line_comment,
    STATE(451), 1,
      sym__comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(877), 2,
      sym__data_separator,
      anon_sym_COMMA,
  [20358] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(879), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20369] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(784), 1,
      anon_sym_CR,
    ACTIONS(881), 1,
      sym_line_comment,
    ACTIONS(782), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [20386] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(883), 1,
      anon_sym_DQUOTE,
    STATE(410), 1,
      aux_sym_string_repeat1,
    ACTIONS(885), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20403] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(887), 1,
      anon_sym_DQUOTE,
    STATE(431), 1,
      aux_sym_string_repeat1,
    ACTIONS(889), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20420] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(891), 1,
      anon_sym_DQUOTE,
    STATE(431), 1,
      aux_sym_string_repeat1,
    ACTIONS(889), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20437] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(893), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20448] = 5,
    ACTIONS(752), 1,
      anon_sym_RPAREN,
    ACTIONS(895), 1,
      anon_sym_COMMA,
    ACTIONS(897), 1,
      sym__operand_separator,
    STATE(429), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20465] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(899), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20476] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(901), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20487] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(903), 1,
      anon_sym_DQUOTE,
    STATE(418), 1,
      aux_sym_string_repeat1,
    ACTIONS(905), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20504] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(907), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20515] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(909), 1,
      anon_sym_DQUOTE,
    STATE(409), 1,
      aux_sym_string_repeat1,
    ACTIONS(911), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20532] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(913), 1,
      anon_sym_DQUOTE,
    STATE(431), 1,
      aux_sym_string_repeat1,
    ACTIONS(889), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20549] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(915), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20560] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(917), 1,
      anon_sym_DQUOTE,
    STATE(422), 1,
      aux_sym_string_repeat1,
    ACTIONS(919), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20577] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(921), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20588] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(923), 1,
      anon_sym_DQUOTE,
    STATE(431), 1,
      aux_sym_string_repeat1,
    ACTIONS(889), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20605] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(925), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20616] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(927), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20627] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(929), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20638] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(744), 4,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20651] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(927), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20662] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(931), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20673] = 4,
    ACTIONS(716), 1,
      anon_sym_RPAREN,
    STATE(429), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(933), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [20688] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(936), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20699] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(938), 1,
      anon_sym_DQUOTE,
    STATE(431), 1,
      aux_sym_string_repeat1,
    ACTIONS(940), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20716] = 5,
    ACTIONS(734), 1,
      anon_sym_RPAREN,
    ACTIONS(895), 1,
      anon_sym_COMMA,
    ACTIONS(943), 1,
      sym__operand_separator,
    STATE(412), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20733] = 3,
    ACTIONS(623), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(377), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_assignment_operator,
  [20746] = 4,
    ACTIONS(641), 1,
      anon_sym_LPAREN,
    ACTIONS(945), 1,
      anon_sym_RPAREN,
    ACTIONS(947), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20760] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(762), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20770] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(766), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20780] = 4,
    ACTIONS(641), 1,
      anon_sym_LPAREN,
    ACTIONS(947), 1,
      sym_assignment_operator,
    ACTIONS(949), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20794] = 4,
    ACTIONS(641), 1,
      anon_sym_LPAREN,
    ACTIONS(947), 1,
      sym_assignment_operator,
    ACTIONS(951), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20808] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(953), 1,
      anon_sym_LPAREN,
    ACTIONS(955), 1,
      sym_macro_parameter,
    STATE(416), 1,
      sym_macro_parameters,
  [20824] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(957), 1,
      ts_builtin_sym_end,
    ACTIONS(959), 1,
      anon_sym_CR,
    ACTIONS(961), 1,
      anon_sym_LF,
  [20840] = 4,
    ACTIONS(641), 1,
      anon_sym_LPAREN,
    ACTIONS(947), 1,
      sym_assignment_operator,
    ACTIONS(963), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20854] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(776), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20864] = 3,
    ACTIONS(965), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(825), 2,
      sym__line_separator,
      anon_sym_SEMI,
  [20876] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(969), 1,
      anon_sym_RPAREN,
    ACTIONS(967), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [20890] = 4,
    ACTIONS(641), 1,
      anon_sym_LPAREN,
    ACTIONS(947), 1,
      sym_assignment_operator,
    ACTIONS(971), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20904] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(975), 1,
      anon_sym_RPAREN,
    ACTIONS(973), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [20918] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(877), 2,
      sym__data_separator,
      anon_sym_COMMA,
  [20927] = 3,
    ACTIONS(521), 1,
      anon_sym_LPAREN,
    ACTIONS(947), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20938] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(959), 1,
      anon_sym_CR,
    ACTIONS(961), 1,
      anon_sym_LF,
  [20951] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(977), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [20962] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(979), 2,
      sym__data_separator,
      anon_sym_COMMA,
  [20971] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(981), 1,
      anon_sym_COMMA,
    ACTIONS(983), 1,
      sym_macro_parameter,
  [20984] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(985), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [20995] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(825), 1,
      aux_sym__statement_token1,
    ACTIONS(957), 1,
      ts_builtin_sym_end,
  [21008] = 3,
    ACTIONS(957), 1,
      ts_builtin_sym_end,
    ACTIONS(987), 1,
      sym__line_separator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21019] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(989), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [21030] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(991), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [21041] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(993), 1,
      anon_sym_COMMA,
    ACTIONS(995), 1,
      sym_macro_parameter,
  [21054] = 3,
    ACTIONS(947), 1,
      sym_assignment_operator,
    ACTIONS(997), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21065] = 3,
    ACTIONS(947), 1,
      sym_assignment_operator,
    ACTIONS(999), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21076] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1001), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [21087] = 3,
    ACTIONS(567), 1,
      anon_sym_LPAREN,
    ACTIONS(947), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21098] = 3,
    ACTIONS(947), 1,
      sym_assignment_operator,
    ACTIONS(1003), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21109] = 3,
    ACTIONS(641), 1,
      anon_sym_LPAREN,
    ACTIONS(947), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21120] = 2,
    ACTIONS(1005), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21128] = 2,
    ACTIONS(1007), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21136] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1009), 1,
      anon_sym_LF,
  [21146] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(766), 1,
      aux_sym__string_directive_token1,
  [21156] = 2,
    ACTIONS(1011), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21164] = 2,
    ACTIONS(1013), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21172] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(995), 1,
      sym_macro_parameter,
  [21182] = 2,
    ACTIONS(1015), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21190] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(762), 1,
      aux_sym__string_directive_token1,
  [21200] = 2,
    ACTIONS(1017), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21208] = 2,
    ACTIONS(1019), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21216] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1021), 1,
      aux_sym__whitespace_token1,
  [21226] = 2,
    ACTIONS(1023), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21234] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1025), 1,
      aux_sym__whitespace_token1,
  [21244] = 2,
    ACTIONS(1027), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21252] = 2,
    ACTIONS(1029), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21260] = 2,
    ACTIONS(1031), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21268] = 2,
    ACTIONS(1033), 1,
      sym_macro_name,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21276] = 2,
    ACTIONS(1035), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21284] = 2,
    ACTIONS(1037), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21292] = 2,
    ACTIONS(1039), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21300] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1041), 1,
      aux_sym__whitespace_token1,
  [21310] = 2,
    ACTIONS(1043), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21318] = 2,
    ACTIONS(1045), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21326] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1047), 1,
      aux_sym__string_directive_token1,
  [21336] = 2,
    ACTIONS(1049), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21344] = 2,
    ACTIONS(1051), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21352] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(825), 1,
      aux_sym__statement_token1,
  [21362] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(983), 1,
      sym_macro_parameter,
  [21372] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1053), 1,
      sym_macro_parameter,
  [21382] = 2,
    ACTIONS(1055), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21390] = 2,
    ACTIONS(987), 1,
      sym__line_separator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21398] = 2,
    ACTIONS(788), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21406] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1057), 1,
      aux_sym__string_directive_token1,
  [21416] = 2,
    ACTIONS(1059), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21424] = 2,
    ACTIONS(1061), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21432] = 2,
    ACTIONS(1063), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21440] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1065), 1,
      aux_sym__whitespace_token1,
  [21450] = 2,
    ACTIONS(1067), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21458] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1069), 1,
      aux_sym__whitespace_token1,
  [21468] = 2,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21476] = 2,
    ACTIONS(1071), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21484] = 2,
    ACTIONS(1073), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21492] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1075), 1,
      aux_sym__whitespace_token1,
  [21502] = 2,
    ACTIONS(1077), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21510] = 2,
    ACTIONS(1079), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21518] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(987), 1,
      anon_sym_LF,
  [21528] = 2,
    ACTIONS(1081), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21536] = 2,
    ACTIONS(1083), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21544] = 2,
    ACTIONS(1085), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21552] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1087), 1,
      sym_macro_parameter,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 140,
  [SMALL_STATE(4)] = 276,
  [SMALL_STATE(5)] = 379,
  [SMALL_STATE(6)] = 506,
  [SMALL_STATE(7)] = 606,
  [SMALL_STATE(8)] = 736,
  [SMALL_STATE(9)] = 870,
  [SMALL_STATE(10)] = 1000,
  [SMALL_STATE(11)] = 1131,
  [SMALL_STATE(12)] = 1260,
  [SMALL_STATE(13)] = 1393,
  [SMALL_STATE(14)] = 1523,
  [SMALL_STATE(15)] = 1653,
  [SMALL_STATE(16)] = 1779,
  [SMALL_STATE(17)] = 1909,
  [SMALL_STATE(18)] = 2039,
  [SMALL_STATE(19)] = 2165,
  [SMALL_STATE(20)] = 2295,
  [SMALL_STATE(21)] = 2425,
  [SMALL_STATE(22)] = 2555,
  [SMALL_STATE(23)] = 2685,
  [SMALL_STATE(24)] = 2815,
  [SMALL_STATE(25)] = 2945,
  [SMALL_STATE(26)] = 3075,
  [SMALL_STATE(27)] = 3205,
  [SMALL_STATE(28)] = 3328,
  [SMALL_STATE(29)] = 3455,
  [SMALL_STATE(30)] = 3578,
  [SMALL_STATE(31)] = 3697,
  [SMALL_STATE(32)] = 3813,
  [SMALL_STATE(33)] = 3929,
  [SMALL_STATE(34)] = 4045,
  [SMALL_STATE(35)] = 4161,
  [SMALL_STATE(36)] = 4277,
  [SMALL_STATE(37)] = 4393,
  [SMALL_STATE(38)] = 4509,
  [SMALL_STATE(39)] = 4625,
  [SMALL_STATE(40)] = 4741,
  [SMALL_STATE(41)] = 4857,
  [SMALL_STATE(42)] = 4973,
  [SMALL_STATE(43)] = 5089,
  [SMALL_STATE(44)] = 5205,
  [SMALL_STATE(45)] = 5321,
  [SMALL_STATE(46)] = 5437,
  [SMALL_STATE(47)] = 5555,
  [SMALL_STATE(48)] = 5671,
  [SMALL_STATE(49)] = 5787,
  [SMALL_STATE(50)] = 5903,
  [SMALL_STATE(51)] = 6019,
  [SMALL_STATE(52)] = 6135,
  [SMALL_STATE(53)] = 6251,
  [SMALL_STATE(54)] = 6367,
  [SMALL_STATE(55)] = 6483,
  [SMALL_STATE(56)] = 6599,
  [SMALL_STATE(57)] = 6715,
  [SMALL_STATE(58)] = 6831,
  [SMALL_STATE(59)] = 6947,
  [SMALL_STATE(60)] = 7065,
  [SMALL_STATE(61)] = 7181,
  [SMALL_STATE(62)] = 7297,
  [SMALL_STATE(63)] = 7413,
  [SMALL_STATE(64)] = 7529,
  [SMALL_STATE(65)] = 7645,
  [SMALL_STATE(66)] = 7761,
  [SMALL_STATE(67)] = 7877,
  [SMALL_STATE(68)] = 7993,
  [SMALL_STATE(69)] = 8109,
  [SMALL_STATE(70)] = 8225,
  [SMALL_STATE(71)] = 8343,
  [SMALL_STATE(72)] = 8459,
  [SMALL_STATE(73)] = 8575,
  [SMALL_STATE(74)] = 8691,
  [SMALL_STATE(75)] = 8807,
  [SMALL_STATE(76)] = 8923,
  [SMALL_STATE(77)] = 9039,
  [SMALL_STATE(78)] = 9155,
  [SMALL_STATE(79)] = 9271,
  [SMALL_STATE(80)] = 9387,
  [SMALL_STATE(81)] = 9503,
  [SMALL_STATE(82)] = 9621,
  [SMALL_STATE(83)] = 9737,
  [SMALL_STATE(84)] = 9853,
  [SMALL_STATE(85)] = 9969,
  [SMALL_STATE(86)] = 10085,
  [SMALL_STATE(87)] = 10201,
  [SMALL_STATE(88)] = 10317,
  [SMALL_STATE(89)] = 10433,
  [SMALL_STATE(90)] = 10549,
  [SMALL_STATE(91)] = 10665,
  [SMALL_STATE(92)] = 10781,
  [SMALL_STATE(93)] = 10897,
  [SMALL_STATE(94)] = 11013,
  [SMALL_STATE(95)] = 11129,
  [SMALL_STATE(96)] = 11245,
  [SMALL_STATE(97)] = 11361,
  [SMALL_STATE(98)] = 11477,
  [SMALL_STATE(99)] = 11593,
  [SMALL_STATE(100)] = 11709,
  [SMALL_STATE(101)] = 11825,
  [SMALL_STATE(102)] = 11941,
  [SMALL_STATE(103)] = 12059,
  [SMALL_STATE(104)] = 12175,
  [SMALL_STATE(105)] = 12229,
  [SMALL_STATE(106)] = 12283,
  [SMALL_STATE(107)] = 12337,
  [SMALL_STATE(108)] = 12391,
  [SMALL_STATE(109)] = 12425,
  [SMALL_STATE(110)] = 12459,
  [SMALL_STATE(111)] = 12493,
  [SMALL_STATE(112)] = 12527,
  [SMALL_STATE(113)] = 12561,
  [SMALL_STATE(114)] = 12595,
  [SMALL_STATE(115)] = 12629,
  [SMALL_STATE(116)] = 12665,
  [SMALL_STATE(117)] = 12699,
  [SMALL_STATE(118)] = 12735,
  [SMALL_STATE(119)] = 12769,
  [SMALL_STATE(120)] = 12805,
  [SMALL_STATE(121)] = 12839,
  [SMALL_STATE(122)] = 12875,
  [SMALL_STATE(123)] = 12909,
  [SMALL_STATE(124)] = 12945,
  [SMALL_STATE(125)] = 12979,
  [SMALL_STATE(126)] = 13015,
  [SMALL_STATE(127)] = 13049,
  [SMALL_STATE(128)] = 13085,
  [SMALL_STATE(129)] = 13119,
  [SMALL_STATE(130)] = 13155,
  [SMALL_STATE(131)] = 13189,
  [SMALL_STATE(132)] = 13225,
  [SMALL_STATE(133)] = 13261,
  [SMALL_STATE(134)] = 13299,
  [SMALL_STATE(135)] = 13333,
  [SMALL_STATE(136)] = 13367,
  [SMALL_STATE(137)] = 13401,
  [SMALL_STATE(138)] = 13437,
  [SMALL_STATE(139)] = 13473,
  [SMALL_STATE(140)] = 13509,
  [SMALL_STATE(141)] = 13545,
  [SMALL_STATE(142)] = 13581,
  [SMALL_STATE(143)] = 13617,
  [SMALL_STATE(144)] = 13653,
  [SMALL_STATE(145)] = 13689,
  [SMALL_STATE(146)] = 13725,
  [SMALL_STATE(147)] = 13759,
  [SMALL_STATE(148)] = 13793,
  [SMALL_STATE(149)] = 13827,
  [SMALL_STATE(150)] = 13861,
  [SMALL_STATE(151)] = 13895,
  [SMALL_STATE(152)] = 13923,
  [SMALL_STATE(153)] = 13953,
  [SMALL_STATE(154)] = 13983,
  [SMALL_STATE(155)] = 14013,
  [SMALL_STATE(156)] = 14045,
  [SMALL_STATE(157)] = 14075,
  [SMALL_STATE(158)] = 14105,
  [SMALL_STATE(159)] = 14135,
  [SMALL_STATE(160)] = 14169,
  [SMALL_STATE(161)] = 14201,
  [SMALL_STATE(162)] = 14231,
  [SMALL_STATE(163)] = 14263,
  [SMALL_STATE(164)] = 14293,
  [SMALL_STATE(165)] = 14325,
  [SMALL_STATE(166)] = 14355,
  [SMALL_STATE(167)] = 14387,
  [SMALL_STATE(168)] = 14417,
  [SMALL_STATE(169)] = 14449,
  [SMALL_STATE(170)] = 14479,
  [SMALL_STATE(171)] = 14511,
  [SMALL_STATE(172)] = 14541,
  [SMALL_STATE(173)] = 14571,
  [SMALL_STATE(174)] = 14605,
  [SMALL_STATE(175)] = 14635,
  [SMALL_STATE(176)] = 14665,
  [SMALL_STATE(177)] = 14693,
  [SMALL_STATE(178)] = 14721,
  [SMALL_STATE(179)] = 14749,
  [SMALL_STATE(180)] = 14781,
  [SMALL_STATE(181)] = 14809,
  [SMALL_STATE(182)] = 14837,
  [SMALL_STATE(183)] = 14867,
  [SMALL_STATE(184)] = 14895,
  [SMALL_STATE(185)] = 14925,
  [SMALL_STATE(186)] = 14953,
  [SMALL_STATE(187)] = 14983,
  [SMALL_STATE(188)] = 15011,
  [SMALL_STATE(189)] = 15041,
  [SMALL_STATE(190)] = 15069,
  [SMALL_STATE(191)] = 15099,
  [SMALL_STATE(192)] = 15127,
  [SMALL_STATE(193)] = 15157,
  [SMALL_STATE(194)] = 15185,
  [SMALL_STATE(195)] = 15215,
  [SMALL_STATE(196)] = 15243,
  [SMALL_STATE(197)] = 15273,
  [SMALL_STATE(198)] = 15301,
  [SMALL_STATE(199)] = 15331,
  [SMALL_STATE(200)] = 15359,
  [SMALL_STATE(201)] = 15389,
  [SMALL_STATE(202)] = 15421,
  [SMALL_STATE(203)] = 15453,
  [SMALL_STATE(204)] = 15485,
  [SMALL_STATE(205)] = 15517,
  [SMALL_STATE(206)] = 15549,
  [SMALL_STATE(207)] = 15581,
  [SMALL_STATE(208)] = 15613,
  [SMALL_STATE(209)] = 15645,
  [SMALL_STATE(210)] = 15677,
  [SMALL_STATE(211)] = 15709,
  [SMALL_STATE(212)] = 15737,
  [SMALL_STATE(213)] = 15765,
  [SMALL_STATE(214)] = 15793,
  [SMALL_STATE(215)] = 15823,
  [SMALL_STATE(216)] = 15853,
  [SMALL_STATE(217)] = 15883,
  [SMALL_STATE(218)] = 15913,
  [SMALL_STATE(219)] = 15943,
  [SMALL_STATE(220)] = 15973,
  [SMALL_STATE(221)] = 16003,
  [SMALL_STATE(222)] = 16033,
  [SMALL_STATE(223)] = 16063,
  [SMALL_STATE(224)] = 16091,
  [SMALL_STATE(225)] = 16121,
  [SMALL_STATE(226)] = 16149,
  [SMALL_STATE(227)] = 16177,
  [SMALL_STATE(228)] = 16205,
  [SMALL_STATE(229)] = 16235,
  [SMALL_STATE(230)] = 16267,
  [SMALL_STATE(231)] = 16295,
  [SMALL_STATE(232)] = 16327,
  [SMALL_STATE(233)] = 16357,
  [SMALL_STATE(234)] = 16387,
  [SMALL_STATE(235)] = 16417,
  [SMALL_STATE(236)] = 16447,
  [SMALL_STATE(237)] = 16477,
  [SMALL_STATE(238)] = 16507,
  [SMALL_STATE(239)] = 16554,
  [SMALL_STATE(240)] = 16580,
  [SMALL_STATE(241)] = 16604,
  [SMALL_STATE(242)] = 16630,
  [SMALL_STATE(243)] = 16656,
  [SMALL_STATE(244)] = 16682,
  [SMALL_STATE(245)] = 16708,
  [SMALL_STATE(246)] = 16734,
  [SMALL_STATE(247)] = 16760,
  [SMALL_STATE(248)] = 16784,
  [SMALL_STATE(249)] = 16808,
  [SMALL_STATE(250)] = 16832,
  [SMALL_STATE(251)] = 16856,
  [SMALL_STATE(252)] = 16880,
  [SMALL_STATE(253)] = 16906,
  [SMALL_STATE(254)] = 16930,
  [SMALL_STATE(255)] = 16956,
  [SMALL_STATE(256)] = 16980,
  [SMALL_STATE(257)] = 17006,
  [SMALL_STATE(258)] = 17034,
  [SMALL_STATE(259)] = 17058,
  [SMALL_STATE(260)] = 17084,
  [SMALL_STATE(261)] = 17108,
  [SMALL_STATE(262)] = 17134,
  [SMALL_STATE(263)] = 17160,
  [SMALL_STATE(264)] = 17184,
  [SMALL_STATE(265)] = 17210,
  [SMALL_STATE(266)] = 17234,
  [SMALL_STATE(267)] = 17260,
  [SMALL_STATE(268)] = 17286,
  [SMALL_STATE(269)] = 17310,
  [SMALL_STATE(270)] = 17334,
  [SMALL_STATE(271)] = 17360,
  [SMALL_STATE(272)] = 17384,
  [SMALL_STATE(273)] = 17410,
  [SMALL_STATE(274)] = 17434,
  [SMALL_STATE(275)] = 17460,
  [SMALL_STATE(276)] = 17486,
  [SMALL_STATE(277)] = 17512,
  [SMALL_STATE(278)] = 17538,
  [SMALL_STATE(279)] = 17564,
  [SMALL_STATE(280)] = 17590,
  [SMALL_STATE(281)] = 17616,
  [SMALL_STATE(282)] = 17642,
  [SMALL_STATE(283)] = 17666,
  [SMALL_STATE(284)] = 17692,
  [SMALL_STATE(285)] = 17718,
  [SMALL_STATE(286)] = 17744,
  [SMALL_STATE(287)] = 17770,
  [SMALL_STATE(288)] = 17794,
  [SMALL_STATE(289)] = 17818,
  [SMALL_STATE(290)] = 17842,
  [SMALL_STATE(291)] = 17866,
  [SMALL_STATE(292)] = 17890,
  [SMALL_STATE(293)] = 17916,
  [SMALL_STATE(294)] = 17940,
  [SMALL_STATE(295)] = 17977,
  [SMALL_STATE(296)] = 18004,
  [SMALL_STATE(297)] = 18026,
  [SMALL_STATE(298)] = 18048,
  [SMALL_STATE(299)] = 18072,
  [SMALL_STATE(300)] = 18094,
  [SMALL_STATE(301)] = 18116,
  [SMALL_STATE(302)] = 18140,
  [SMALL_STATE(303)] = 18164,
  [SMALL_STATE(304)] = 18188,
  [SMALL_STATE(305)] = 18212,
  [SMALL_STATE(306)] = 18236,
  [SMALL_STATE(307)] = 18260,
  [SMALL_STATE(308)] = 18284,
  [SMALL_STATE(309)] = 18308,
  [SMALL_STATE(310)] = 18332,
  [SMALL_STATE(311)] = 18354,
  [SMALL_STATE(312)] = 18376,
  [SMALL_STATE(313)] = 18398,
  [SMALL_STATE(314)] = 18422,
  [SMALL_STATE(315)] = 18446,
  [SMALL_STATE(316)] = 18468,
  [SMALL_STATE(317)] = 18490,
  [SMALL_STATE(318)] = 18512,
  [SMALL_STATE(319)] = 18536,
  [SMALL_STATE(320)] = 18558,
  [SMALL_STATE(321)] = 18580,
  [SMALL_STATE(322)] = 18602,
  [SMALL_STATE(323)] = 18624,
  [SMALL_STATE(324)] = 18648,
  [SMALL_STATE(325)] = 18670,
  [SMALL_STATE(326)] = 18694,
  [SMALL_STATE(327)] = 18716,
  [SMALL_STATE(328)] = 18740,
  [SMALL_STATE(329)] = 18762,
  [SMALL_STATE(330)] = 18786,
  [SMALL_STATE(331)] = 18808,
  [SMALL_STATE(332)] = 18836,
  [SMALL_STATE(333)] = 18860,
  [SMALL_STATE(334)] = 18896,
  [SMALL_STATE(335)] = 18918,
  [SMALL_STATE(336)] = 18942,
  [SMALL_STATE(337)] = 18964,
  [SMALL_STATE(338)] = 18988,
  [SMALL_STATE(339)] = 19010,
  [SMALL_STATE(340)] = 19034,
  [SMALL_STATE(341)] = 19056,
  [SMALL_STATE(342)] = 19080,
  [SMALL_STATE(343)] = 19106,
  [SMALL_STATE(344)] = 19134,
  [SMALL_STATE(345)] = 19162,
  [SMALL_STATE(346)] = 19186,
  [SMALL_STATE(347)] = 19210,
  [SMALL_STATE(348)] = 19232,
  [SMALL_STATE(349)] = 19257,
  [SMALL_STATE(350)] = 19282,
  [SMALL_STATE(351)] = 19307,
  [SMALL_STATE(352)] = 19330,
  [SMALL_STATE(353)] = 19349,
  [SMALL_STATE(354)] = 19373,
  [SMALL_STATE(355)] = 19397,
  [SMALL_STATE(356)] = 19421,
  [SMALL_STATE(357)] = 19445,
  [SMALL_STATE(358)] = 19467,
  [SMALL_STATE(359)] = 19489,
  [SMALL_STATE(360)] = 19511,
  [SMALL_STATE(361)] = 19531,
  [SMALL_STATE(362)] = 19556,
  [SMALL_STATE(363)] = 19581,
  [SMALL_STATE(364)] = 19606,
  [SMALL_STATE(365)] = 19631,
  [SMALL_STATE(366)] = 19656,
  [SMALL_STATE(367)] = 19681,
  [SMALL_STATE(368)] = 19706,
  [SMALL_STATE(369)] = 19720,
  [SMALL_STATE(370)] = 19734,
  [SMALL_STATE(371)] = 19748,
  [SMALL_STATE(372)] = 19766,
  [SMALL_STATE(373)] = 19784,
  [SMALL_STATE(374)] = 19802,
  [SMALL_STATE(375)] = 19816,
  [SMALL_STATE(376)] = 19834,
  [SMALL_STATE(377)] = 19852,
  [SMALL_STATE(378)] = 19866,
  [SMALL_STATE(379)] = 19889,
  [SMALL_STATE(380)] = 19912,
  [SMALL_STATE(381)] = 19929,
  [SMALL_STATE(382)] = 19950,
  [SMALL_STATE(383)] = 19965,
  [SMALL_STATE(384)] = 19986,
  [SMALL_STATE(385)] = 20006,
  [SMALL_STATE(386)] = 20024,
  [SMALL_STATE(387)] = 20040,
  [SMALL_STATE(388)] = 20056,
  [SMALL_STATE(389)] = 20074,
  [SMALL_STATE(390)] = 20090,
  [SMALL_STATE(391)] = 20108,
  [SMALL_STATE(392)] = 20126,
  [SMALL_STATE(393)] = 20146,
  [SMALL_STATE(394)] = 20162,
  [SMALL_STATE(395)] = 20180,
  [SMALL_STATE(396)] = 20198,
  [SMALL_STATE(397)] = 20214,
  [SMALL_STATE(398)] = 20234,
  [SMALL_STATE(399)] = 20252,
  [SMALL_STATE(400)] = 20268,
  [SMALL_STATE(401)] = 20288,
  [SMALL_STATE(402)] = 20308,
  [SMALL_STATE(403)] = 20319,
  [SMALL_STATE(404)] = 20332,
  [SMALL_STATE(405)] = 20343,
  [SMALL_STATE(406)] = 20358,
  [SMALL_STATE(407)] = 20369,
  [SMALL_STATE(408)] = 20386,
  [SMALL_STATE(409)] = 20403,
  [SMALL_STATE(410)] = 20420,
  [SMALL_STATE(411)] = 20437,
  [SMALL_STATE(412)] = 20448,
  [SMALL_STATE(413)] = 20465,
  [SMALL_STATE(414)] = 20476,
  [SMALL_STATE(415)] = 20487,
  [SMALL_STATE(416)] = 20504,
  [SMALL_STATE(417)] = 20515,
  [SMALL_STATE(418)] = 20532,
  [SMALL_STATE(419)] = 20549,
  [SMALL_STATE(420)] = 20560,
  [SMALL_STATE(421)] = 20577,
  [SMALL_STATE(422)] = 20588,
  [SMALL_STATE(423)] = 20605,
  [SMALL_STATE(424)] = 20616,
  [SMALL_STATE(425)] = 20627,
  [SMALL_STATE(426)] = 20638,
  [SMALL_STATE(427)] = 20651,
  [SMALL_STATE(428)] = 20662,
  [SMALL_STATE(429)] = 20673,
  [SMALL_STATE(430)] = 20688,
  [SMALL_STATE(431)] = 20699,
  [SMALL_STATE(432)] = 20716,
  [SMALL_STATE(433)] = 20733,
  [SMALL_STATE(434)] = 20746,
  [SMALL_STATE(435)] = 20760,
  [SMALL_STATE(436)] = 20770,
  [SMALL_STATE(437)] = 20780,
  [SMALL_STATE(438)] = 20794,
  [SMALL_STATE(439)] = 20808,
  [SMALL_STATE(440)] = 20824,
  [SMALL_STATE(441)] = 20840,
  [SMALL_STATE(442)] = 20854,
  [SMALL_STATE(443)] = 20864,
  [SMALL_STATE(444)] = 20876,
  [SMALL_STATE(445)] = 20890,
  [SMALL_STATE(446)] = 20904,
  [SMALL_STATE(447)] = 20918,
  [SMALL_STATE(448)] = 20927,
  [SMALL_STATE(449)] = 20938,
  [SMALL_STATE(450)] = 20951,
  [SMALL_STATE(451)] = 20962,
  [SMALL_STATE(452)] = 20971,
  [SMALL_STATE(453)] = 20984,
  [SMALL_STATE(454)] = 20995,
  [SMALL_STATE(455)] = 21008,
  [SMALL_STATE(456)] = 21019,
  [SMALL_STATE(457)] = 21030,
  [SMALL_STATE(458)] = 21041,
  [SMALL_STATE(459)] = 21054,
  [SMALL_STATE(460)] = 21065,
  [SMALL_STATE(461)] = 21076,
  [SMALL_STATE(462)] = 21087,
  [SMALL_STATE(463)] = 21098,
  [SMALL_STATE(464)] = 21109,
  [SMALL_STATE(465)] = 21120,
  [SMALL_STATE(466)] = 21128,
  [SMALL_STATE(467)] = 21136,
  [SMALL_STATE(468)] = 21146,
  [SMALL_STATE(469)] = 21156,
  [SMALL_STATE(470)] = 21164,
  [SMALL_STATE(471)] = 21172,
  [SMALL_STATE(472)] = 21182,
  [SMALL_STATE(473)] = 21190,
  [SMALL_STATE(474)] = 21200,
  [SMALL_STATE(475)] = 21208,
  [SMALL_STATE(476)] = 21216,
  [SMALL_STATE(477)] = 21226,
  [SMALL_STATE(478)] = 21234,
  [SMALL_STATE(479)] = 21244,
  [SMALL_STATE(480)] = 21252,
  [SMALL_STATE(481)] = 21260,
  [SMALL_STATE(482)] = 21268,
  [SMALL_STATE(483)] = 21276,
  [SMALL_STATE(484)] = 21284,
  [SMALL_STATE(485)] = 21292,
  [SMALL_STATE(486)] = 21300,
  [SMALL_STATE(487)] = 21310,
  [SMALL_STATE(488)] = 21318,
  [SMALL_STATE(489)] = 21326,
  [SMALL_STATE(490)] = 21336,
  [SMALL_STATE(491)] = 21344,
  [SMALL_STATE(492)] = 21352,
  [SMALL_STATE(493)] = 21362,
  [SMALL_STATE(494)] = 21372,
  [SMALL_STATE(495)] = 21382,
  [SMALL_STATE(496)] = 21390,
  [SMALL_STATE(497)] = 21398,
  [SMALL_STATE(498)] = 21406,
  [SMALL_STATE(499)] = 21416,
  [SMALL_STATE(500)] = 21424,
  [SMALL_STATE(501)] = 21432,
  [SMALL_STATE(502)] = 21440,
  [SMALL_STATE(503)] = 21450,
  [SMALL_STATE(504)] = 21458,
  [SMALL_STATE(505)] = 21468,
  [SMALL_STATE(506)] = 21476,
  [SMALL_STATE(507)] = 21484,
  [SMALL_STATE(508)] = 21492,
  [SMALL_STATE(509)] = 21502,
  [SMALL_STATE(510)] = 21510,
  [SMALL_STATE(511)] = 21518,
  [SMALL_STATE(512)] = 21528,
  [SMALL_STATE(513)] = 21536,
  [SMALL_STATE(514)] = 21544,
  [SMALL_STATE(515)] = 21552,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 2, 0, 5),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, 0, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat2, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat2, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(492),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(476),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(478),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(486),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(380),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(361),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(498),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2, 0, 9),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operands, 2, 0, 9),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 3, 0, 14),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operands, 3, 0, 14),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 4, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 4, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 2, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label, 2, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_multiplicative_expression, 1, 0, 11),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_multiplicative_expression, 1, 0, 11),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 15),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 3, 0, 15),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal, 1, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_label_reference, 1, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_label_reference, 1, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 11),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 11),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 11),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 11),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 11),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 11),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 11),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 11),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 11),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 11),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 11),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 11),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 11),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 11),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 11),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 11),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assignment_expression, 3, 0, 23),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__assignment_expression, 3, 0, 23),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 11),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 11),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 13),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, 0, 13),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 19),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 3, 0, 19),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 20),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 20),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logical_or_expression, 3, 0, 23),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__logical_or_expression, 3, 0, 23),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logical_and_expression, 3, 0, 23),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__logical_and_expression, 3, 0, 23),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitwise_or_expression, 3, 0, 23),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitwise_or_expression, 3, 0, 23),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitwise_xor_expression, 3, 0, 23),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitwise_xor_expression, 3, 0, 23),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitwise_and_expression, 3, 0, 23),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitwise_and_expression, 3, 0, 23),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__equality_expression, 3, 0, 23),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__equality_expression, 3, 0, 23),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relational_expression, 3, 0, 23),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__relational_expression, 3, 0, 23),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shift_expression, 3, 0, 23),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shift_expression, 3, 0, 23),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__additive_expression, 3, 0, 23),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__additive_expression, 3, 0, 23),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiplicative_expression, 3, 0, 23),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiplicative_expression, 3, 0, 23),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relocation_expression, 4, 0, 24),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relocation_expression, 4, 0, 24),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 4, 0, 25),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 4, 0, 25),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 4, 0, 26),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 4, 0, 26),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 11),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 11),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 3, 0, 15),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_expression, 3, 0, 15),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_operands, 1, 0, 0),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_operands, 1, 0, 0),
  [535] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_numeric_operands, 1, 0, 0), SHIFT(447),
  [538] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_numeric_operands, 1, 0, 0), SHIFT(405),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_expression, 1, 0, 0),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_expression, 1, 0, 0),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_operands, 2, 0, 0),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_operands, 2, 0, 0),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0),
  [629] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(447),
  [632] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(405),
  [635] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [638] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 3, 0, 0),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 3, 0, 0),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 4, 0, 0),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 4, 0, 0),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_operand, 1, 0, 0),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_operands, 3, 0, 0),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_operands, 3, 0, 0),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat2, 2, 0, 0),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat2, 2, 0, 0),
  [665] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat2, 2, 0, 0), SHIFT_REPEAT(350),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operand, 1, 0, 0),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_directive, 4, 0, 12),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__numeric_directive, 4, 0, 12),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_directive, 3, 0, 12),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__numeric_directive, 3, 0, 12),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__numeric_directive_repeat1, 2, 0, 0),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__numeric_directive_repeat1, 2, 0, 0),
  [690] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__numeric_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(356),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_operands, 2, 0, 0),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0),
  [699] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_operands, 1, 0, 0),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_operand, 1, 0, 0),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 1),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 1),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 22),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 22),
  [720] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 22), SHIFT_REPEAT(27),
  [723] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 22), SHIFT_REPEAT(27),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_parameters, 2, 0, 0),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_parameters, 2, 0, 0),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 1, 0, 9),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operands, 1, 0, 9),
  [738] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0),
  [746] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(458),
  [749] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(471),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2, 0, 14),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operands, 2, 0, 14),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_parameters, 1, 0, 0),
  [760] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_parameters, 1, 0, 0),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_flag, 1, 0, 0),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 3, 0, 0),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 3, 0, 0),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 21),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 21),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_type, 1, 0, 0),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(511),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_mnemonic, 1, 0, 0),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_mnemonic, 1, 0, 0),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 3, 0, 7),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 3, 0, 7),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 1, 0, 5),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_directive, 1, 0, 5),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(513),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [816] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(174),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 6),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, 0, 6),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [829] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(269),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 8),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3, 0, 8),
  [840] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(135),
  [843] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(299),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 2, 0, 0),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_expression, 2, 0, 0),
  [850] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_macro_parameters, 1, 0, 0), SHIFT(452),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [855] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(212),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 10),
  [860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3, 0, 10),
  [862] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(452),
  [865] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(493),
  [868] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_macro_parameters, 2, 0, 0), SHIFT(452),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 4),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 18),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_directive, 4, 0, 16),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 4, 0, 17),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 7),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 27),
  [903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 5, 0, 18),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 5, 0, 7),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [919] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 18),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 2),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 3),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 8, 0, 27),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 3, 0, 12),
  [933] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 22), SHIFT_REPEAT(29),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 7),
  [938] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [940] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(431),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment, 1, 0, 0),
  [959] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [961] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [967] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [969] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [973] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [975] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [977] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [991] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 0),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_mnemonic, 1, 0, 0),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_mnemonic, 1, 0, 0),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1061] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__operand_separator = 0,
  ts_external_token__operator_space = 1,
  ts_external_token__line_separator = 2,
  ts_external_token__data_separator = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__operand_separator] = sym__operand_separator,
  [ts_external_token__operator_space] = sym__operator_space,
  [ts_external_token__line_separator] = sym__line_separator,
  [ts_external_token__data_separator] = sym__data_separator,
};

static const bool ts_external_scanner_states[7][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__operand_separator] = true,
    [ts_external_token__operator_space] = true,
    [ts_external_token__line_separator] = true,
    [ts_external_token__data_separator] = true,
  },
  [2] = {
    [ts_external_token__operator_space] = true,
  },
  [3] = {
    [ts_external_token__operator_space] = true,
    [ts_external_token__line_separator] = true,
  },
  [4] = {
    [ts_external_token__operator_space] = true,
    [ts_external_token__line_separator] = true,
    [ts_external_token__data_separator] = true,
  },
  [5] = {
    [ts_external_token__operand_separator] = true,
    [ts_external_token__operator_space] = true,
  },
  [6] = {
    [ts_external_token__operator_space] = true,
    [ts_external_token__data_separator] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_mips_external_scanner_create(void);
void tree_sitter_mips_external_scanner_destroy(void *);
bool tree_sitter_mips_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_mips_external_scanner_serialize(void *, char *);
void tree_sitter_mips_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_mips(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_mips_external_scanner_create,
      tree_sitter_mips_external_scanner_destroy,
      tree_sitter_mips_external_scanner_scan,
      tree_sitter_mips_external_scanner_serialize,
      tree_sitter_mips_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
