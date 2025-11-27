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
#define STATE_COUNT 541
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 158
#define ALIAS_COUNT 0
#define TOKEN_COUNT 90
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 25

enum ts_symbol_identifiers {
  anon_sym_SEMI = 1,
  anon_sym_CR = 2,
  anon_sym_LF = 3,
  aux_sym__statement_token1 = 4,
  aux_sym__whitespace_token1 = 5,
  aux_sym__line_comment_token1 = 6,
  aux_sym__block_comment_token1 = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  sym_macro_mnemonic = 10,
  anon_sym_COMMA = 11,
  anon_sym_DOTbyte = 12,
  anon_sym_DOT2byte = 13,
  anon_sym_DOTshort = 14,
  anon_sym_DOThalf = 15,
  anon_sym_DOThword = 16,
  anon_sym_DOT4byte = 17,
  anon_sym_DOTword = 18,
  anon_sym_DOTint = 19,
  anon_sym_DOT8byte = 20,
  anon_sym_DOTdword = 21,
  anon_sym_DOTlong = 22,
  anon_sym_DOTquad = 23,
  anon_sym_DOTcomm = 24,
  anon_sym_DOTlcomm = 25,
  anon_sym_DOTalign = 26,
  anon_sym_DOTbalign = 27,
  anon_sym_DOTp2align = 28,
  anon_sym_DOTsleb128 = 29,
  anon_sym_DOTuleb128 = 30,
  anon_sym_DOTdtprelword = 31,
  anon_sym_DOTdtpreldword = 32,
  anon_sym_DOTskip = 33,
  anon_sym_DOTspace = 34,
  anon_sym_DOTfloat = 35,
  anon_sym_DOTdouble = 36,
  anon_sym_DOTsingle = 37,
  anon_sym_SPACE = 38,
  anon_sym_TAB = 39,
  anon_sym_DOTasciz = 40,
  anon_sym_DOTascii = 41,
  anon_sym_DOTasciiz = 42,
  anon_sym_DOTstring = 43,
  anon_sym_DOTstringz = 44,
  aux_sym_control_mnemonic_token1 = 45,
  aux_sym__control_operand_separator_token1 = 46,
  aux_sym_section_type_token1 = 47,
  aux_sym_option_flag_token1 = 48,
  sym_opcode = 49,
  sym_assignment_operator = 50,
  sym_logical_or_operator = 51,
  sym_logical_and_operator = 52,
  sym_bitwise_or_operator = 53,
  sym_bitwise_xor_operator = 54,
  sym_bitwise_and_operator = 55,
  sym_equality_operator = 56,
  sym_relational_operator = 57,
  sym_shift_operator = 58,
  sym_additive_operator = 59,
  sym_multiplicative_operator = 60,
  sym_unary_minus_operator = 61,
  sym_bitwise_not_operator = 62,
  sym_logical_not_operator = 63,
  sym_relocation_type = 64,
  sym_octal = 65,
  sym_binary = 66,
  aux_sym_decimal_token1 = 67,
  sym_hexadecimal = 68,
  sym_float = 69,
  anon_sym_SQUOTE = 70,
  aux_sym_char_token1 = 71,
  anon_sym_DQUOTE = 72,
  aux_sym_string_token1 = 73,
  sym__escape_sequence = 74,
  sym_register = 75,
  sym_macro_variable = 76,
  sym_macro_parameter = 77,
  sym_macro_name = 78,
  sym_local_label = 79,
  aux_sym_local_label_reference_token1 = 80,
  sym_global_label = 81,
  aux_sym_symbol_token1 = 82,
  sym_global_numeric_label = 83,
  sym_local_numeric_label = 84,
  sym_local_numeric_label_reference = 85,
  sym__operand_separator = 86,
  sym__operator_space = 87,
  sym__line_separator = 88,
  sym__data_separator = 89,
  sym_program = 90,
  sym__statement = 91,
  sym__line_separator_comment = 92,
  sym__data_separator_comment = 93,
  sym__line_comment = 94,
  sym__block_comment = 95,
  sym_directive = 96,
  sym__macro_directive = 97,
  sym_macro_parameters = 98,
  sym__numeric_directive = 99,
  sym_numeric_mnemonic = 100,
  sym_numeric_operands = 101,
  sym__string_directive = 102,
  sym_string_mnemonic = 103,
  sym_string_operands = 104,
  sym__control_directive = 105,
  sym_control_mnemonic = 106,
  sym_control_operands = 107,
  sym__control_operand = 108,
  sym__control_operand_separator = 109,
  sym_section_type = 110,
  sym_option_flag = 111,
  sym_instruction = 112,
  sym_operands = 113,
  sym__operand = 114,
  sym__call_expression = 115,
  sym__assignment_expression = 116,
  sym__wrapped_assignment_expression = 117,
  sym__logical_or_expression = 118,
  sym__wrapped_logical_or_expression = 119,
  sym__logical_and_expression = 120,
  sym__wrapped_logical_and_expression = 121,
  sym__bitwise_or_expression = 122,
  sym__wrapped_bitwise_or_expression = 123,
  sym__bitwise_xor_expression = 124,
  sym__wrapped_bitwise_xor_expression = 125,
  sym__bitwise_and_expression = 126,
  sym__wrapped_bitwise_and_expression = 127,
  sym__equality_expression = 128,
  sym__wrapped_equality_expression = 129,
  sym__relational_expression = 130,
  sym__wrapped_relational_expression = 131,
  sym__shift_expression = 132,
  sym__wrapped_shift_expression = 133,
  sym__additive_expression = 134,
  sym__wrapped_additive_expression = 135,
  sym__multiplicative_expression = 136,
  sym__wrapped_multiplicative_expression = 137,
  sym__simple_expression = 138,
  sym_parenthesized_expression = 139,
  sym_unary_expression = 140,
  sym_relocation_expression = 141,
  sym_decimal = 142,
  sym_char = 143,
  sym_string = 144,
  sym__label = 145,
  sym_local_label_reference = 146,
  sym_symbol = 147,
  sym_address = 148,
  aux_sym_program_repeat1 = 149,
  aux_sym_macro_parameters_repeat1 = 150,
  aux_sym_numeric_operands_repeat1 = 151,
  aux_sym_numeric_operands_repeat2 = 152,
  aux_sym_numeric_operands_repeat3 = 153,
  aux_sym_string_operands_repeat1 = 154,
  aux_sym_control_operands_repeat1 = 155,
  aux_sym_operands_repeat1 = 156,
  aux_sym_string_repeat1 = 157,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_CR] = "\r",
  [anon_sym_LF] = "\n",
  [aux_sym__statement_token1] = "_statement_token1",
  [aux_sym__whitespace_token1] = "_whitespace_token1",
  [aux_sym__line_comment_token1] = "comment",
  [aux_sym__block_comment_token1] = "comment",
  [anon_sym_LPAREN] = "(",
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
  [anon_sym_SPACE] = " ",
  [anon_sym_TAB] = "\t",
  [anon_sym_DOTasciz] = ".asciz",
  [anon_sym_DOTascii] = ".ascii",
  [anon_sym_DOTasciiz] = ".asciiz",
  [anon_sym_DOTstring] = ".string",
  [anon_sym_DOTstringz] = ".stringz",
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
  [sym__line_separator] = "comment",
  [sym__data_separator] = "comment",
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym__line_separator_comment] = "_line_separator_comment",
  [sym__data_separator_comment] = "_data_separator_comment",
  [sym__line_comment] = "_line_comment",
  [sym__block_comment] = "_block_comment",
  [sym_directive] = "directive",
  [sym__macro_directive] = "_macro_directive",
  [sym_macro_parameters] = "macro_parameters",
  [sym__numeric_directive] = "_numeric_directive",
  [sym_numeric_mnemonic] = "numeric_mnemonic",
  [sym_numeric_operands] = "numeric_operands",
  [sym__string_directive] = "_string_directive",
  [sym_string_mnemonic] = "string_mnemonic",
  [sym_string_operands] = "string_operands",
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
  [aux_sym_numeric_operands_repeat1] = "numeric_operands_repeat1",
  [aux_sym_numeric_operands_repeat2] = "numeric_operands_repeat2",
  [aux_sym_numeric_operands_repeat3] = "numeric_operands_repeat3",
  [aux_sym_string_operands_repeat1] = "string_operands_repeat1",
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
  [aux_sym__line_comment_token1] = sym__line_separator,
  [aux_sym__block_comment_token1] = sym__line_separator,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
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
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_TAB] = anon_sym_TAB,
  [anon_sym_DOTasciz] = anon_sym_DOTasciz,
  [anon_sym_DOTascii] = anon_sym_DOTascii,
  [anon_sym_DOTasciiz] = anon_sym_DOTasciiz,
  [anon_sym_DOTstring] = anon_sym_DOTstring,
  [anon_sym_DOTstringz] = anon_sym_DOTstringz,
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
  [sym__data_separator] = sym__line_separator,
  [sym_program] = sym_program,
  [sym__statement] = sym__statement,
  [sym__line_separator_comment] = sym__line_separator_comment,
  [sym__data_separator_comment] = sym__data_separator_comment,
  [sym__line_comment] = sym__line_comment,
  [sym__block_comment] = sym__block_comment,
  [sym_directive] = sym_directive,
  [sym__macro_directive] = sym__macro_directive,
  [sym_macro_parameters] = sym_macro_parameters,
  [sym__numeric_directive] = sym__numeric_directive,
  [sym_numeric_mnemonic] = sym_numeric_mnemonic,
  [sym_numeric_operands] = sym_numeric_operands,
  [sym__string_directive] = sym__string_directive,
  [sym_string_mnemonic] = sym_string_mnemonic,
  [sym_string_operands] = sym_string_operands,
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
  [aux_sym_numeric_operands_repeat1] = aux_sym_numeric_operands_repeat1,
  [aux_sym_numeric_operands_repeat2] = aux_sym_numeric_operands_repeat2,
  [aux_sym_numeric_operands_repeat3] = aux_sym_numeric_operands_repeat3,
  [aux_sym_string_operands_repeat1] = aux_sym_string_operands_repeat1,
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
  [aux_sym__line_comment_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__block_comment_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
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
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAB] = {
    .visible = true,
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
    .visible = true,
    .named = true,
  },
  [sym__data_separator] = {
    .visible = true,
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
  [sym__line_separator_comment] = {
    .visible = false,
    .named = true,
  },
  [sym__data_separator_comment] = {
    .visible = false,
    .named = true,
  },
  [sym__line_comment] = {
    .visible = false,
    .named = true,
  },
  [sym__block_comment] = {
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
  [sym_string_operands] = {
    .visible = true,
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
  [aux_sym_numeric_operands_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_operands_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_operands_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_operands_repeat1] = {
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
  field_type = 13,
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
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 3},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 1},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 2},
  [7] = {.index = 11, .length = 2},
  [8] = {.index = 13, .length = 1},
  [9] = {.index = 14, .length = 2},
  [10] = {.index = 16, .length = 3},
  [11] = {.index = 19, .length = 2},
  [12] = {.index = 21, .length = 2},
  [13] = {.index = 23, .length = 2},
  [14] = {.index = 25, .length = 1},
  [15] = {.index = 26, .length = 3},
  [16] = {.index = 29, .length = 1},
  [17] = {.index = 30, .length = 1},
  [18] = {.index = 31, .length = 1},
  [19] = {.index = 32, .length = 2},
  [20] = {.index = 34, .length = 3},
  [21] = {.index = 37, .length = 2},
  [22] = {.index = 39, .length = 2},
  [23] = {.index = 41, .length = 2},
  [24] = {.index = 43, .length = 3},
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
    {field_mnemonic, 0},
  [7] =
    {field_opcode, 0},
    {field_operands, 1, .inherited = true},
  [9] =
    {field_mnemonic, 0},
    {field_name, 2},
  [11] =
    {field_opcode, 0},
    {field_operands, 2},
  [13] =
    {field_operand, 0},
  [14] =
    {field_opcode, 0},
    {field_operands, 2, .inherited = true},
  [16] =
    {field_left, 0, .inherited = true},
    {field_operator, 0, .inherited = true},
    {field_right, 0, .inherited = true},
  [19] =
    {field_mnemonic, 0},
    {field_operands, 2},
  [21] =
    {field_argument, 1},
    {field_operator, 0},
  [23] =
    {field_operand, 0},
    {field_operand, 1, .inherited = true},
  [25] =
    {field_operands, 1},
  [26] =
    {field_mnemonic, 0},
    {field_name, 2},
    {field_parameters, 4},
  [29] =
    {field_base, 1},
  [30] =
    {field_argument, 1},
  [31] =
    {field_operand, 1},
  [32] =
    {field_operand, 0, .inherited = true},
    {field_operand, 1, .inherited = true},
  [34] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [37] =
    {field_argument, 2},
    {field_type, 0},
  [39] =
    {field_base, 2},
    {field_offset, 0},
  [41] =
    {field_offset, 0},
    {field_operands, 2},
  [43] =
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
  [15] = 13,
  [16] = 13,
  [17] = 7,
  [18] = 6,
  [19] = 14,
  [20] = 13,
  [21] = 14,
  [22] = 14,
  [23] = 14,
  [24] = 13,
  [25] = 13,
  [26] = 14,
  [27] = 27,
  [28] = 28,
  [29] = 28,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 30,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 31,
  [46] = 32,
  [47] = 33,
  [48] = 30,
  [49] = 38,
  [50] = 39,
  [51] = 40,
  [52] = 41,
  [53] = 42,
  [54] = 43,
  [55] = 44,
  [56] = 31,
  [57] = 32,
  [58] = 33,
  [59] = 30,
  [60] = 38,
  [61] = 39,
  [62] = 40,
  [63] = 41,
  [64] = 42,
  [65] = 43,
  [66] = 44,
  [67] = 31,
  [68] = 32,
  [69] = 44,
  [70] = 30,
  [71] = 38,
  [72] = 39,
  [73] = 40,
  [74] = 41,
  [75] = 42,
  [76] = 43,
  [77] = 44,
  [78] = 31,
  [79] = 32,
  [80] = 33,
  [81] = 35,
  [82] = 30,
  [83] = 30,
  [84] = 30,
  [85] = 85,
  [86] = 30,
  [87] = 35,
  [88] = 35,
  [89] = 35,
  [90] = 85,
  [91] = 85,
  [92] = 30,
  [93] = 38,
  [94] = 85,
  [95] = 39,
  [96] = 40,
  [97] = 85,
  [98] = 41,
  [99] = 42,
  [100] = 43,
  [101] = 33,
  [102] = 102,
  [103] = 103,
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
  [147] = 111,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 144,
  [160] = 117,
  [161] = 118,
  [162] = 119,
  [163] = 120,
  [164] = 150,
  [165] = 151,
  [166] = 152,
  [167] = 153,
  [168] = 154,
  [169] = 155,
  [170] = 156,
  [171] = 157,
  [172] = 129,
  [173] = 132,
  [174] = 124,
  [175] = 141,
  [176] = 142,
  [177] = 143,
  [178] = 115,
  [179] = 116,
  [180] = 121,
  [181] = 136,
  [182] = 122,
  [183] = 123,
  [184] = 125,
  [185] = 126,
  [186] = 127,
  [187] = 128,
  [188] = 188,
  [189] = 112,
  [190] = 140,
  [191] = 130,
  [192] = 131,
  [193] = 158,
  [194] = 133,
  [195] = 134,
  [196] = 135,
  [197] = 137,
  [198] = 138,
  [199] = 139,
  [200] = 146,
  [201] = 148,
  [202] = 149,
  [203] = 113,
  [204] = 114,
  [205] = 145,
  [206] = 121,
  [207] = 148,
  [208] = 149,
  [209] = 113,
  [210] = 114,
  [211] = 115,
  [212] = 116,
  [213] = 117,
  [214] = 118,
  [215] = 119,
  [216] = 120,
  [217] = 122,
  [218] = 123,
  [219] = 125,
  [220] = 126,
  [221] = 127,
  [222] = 128,
  [223] = 112,
  [224] = 130,
  [225] = 131,
  [226] = 158,
  [227] = 133,
  [228] = 134,
  [229] = 135,
  [230] = 145,
  [231] = 138,
  [232] = 139,
  [233] = 150,
  [234] = 234,
  [235] = 151,
  [236] = 152,
  [237] = 153,
  [238] = 154,
  [239] = 155,
  [240] = 156,
  [241] = 157,
  [242] = 129,
  [243] = 132,
  [244] = 124,
  [245] = 141,
  [246] = 142,
  [247] = 146,
  [248] = 136,
  [249] = 143,
  [250] = 144,
  [251] = 137,
  [252] = 150,
  [253] = 144,
  [254] = 145,
  [255] = 255,
  [256] = 146,
  [257] = 111,
  [258] = 140,
  [259] = 126,
  [260] = 127,
  [261] = 128,
  [262] = 112,
  [263] = 130,
  [264] = 131,
  [265] = 158,
  [266] = 133,
  [267] = 114,
  [268] = 135,
  [269] = 137,
  [270] = 138,
  [271] = 139,
  [272] = 115,
  [273] = 116,
  [274] = 274,
  [275] = 117,
  [276] = 118,
  [277] = 277,
  [278] = 119,
  [279] = 120,
  [280] = 121,
  [281] = 122,
  [282] = 149,
  [283] = 150,
  [284] = 151,
  [285] = 152,
  [286] = 123,
  [287] = 287,
  [288] = 153,
  [289] = 154,
  [290] = 155,
  [291] = 156,
  [292] = 157,
  [293] = 129,
  [294] = 132,
  [295] = 124,
  [296] = 141,
  [297] = 142,
  [298] = 146,
  [299] = 125,
  [300] = 143,
  [301] = 136,
  [302] = 277,
  [303] = 287,
  [304] = 144,
  [305] = 277,
  [306] = 287,
  [307] = 145,
  [308] = 277,
  [309] = 287,
  [310] = 113,
  [311] = 277,
  [312] = 287,
  [313] = 277,
  [314] = 287,
  [315] = 148,
  [316] = 134,
  [317] = 148,
  [318] = 139,
  [319] = 151,
  [320] = 152,
  [321] = 153,
  [322] = 154,
  [323] = 155,
  [324] = 156,
  [325] = 157,
  [326] = 129,
  [327] = 132,
  [328] = 124,
  [329] = 141,
  [330] = 142,
  [331] = 143,
  [332] = 332,
  [333] = 137,
  [334] = 138,
  [335] = 113,
  [336] = 114,
  [337] = 115,
  [338] = 116,
  [339] = 117,
  [340] = 118,
  [341] = 150,
  [342] = 119,
  [343] = 146,
  [344] = 144,
  [345] = 145,
  [346] = 120,
  [347] = 136,
  [348] = 121,
  [349] = 122,
  [350] = 123,
  [351] = 125,
  [352] = 126,
  [353] = 127,
  [354] = 128,
  [355] = 112,
  [356] = 130,
  [357] = 131,
  [358] = 158,
  [359] = 133,
  [360] = 134,
  [361] = 135,
  [362] = 149,
  [363] = 136,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 136,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 136,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 389,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 382,
  [400] = 400,
  [401] = 136,
  [402] = 382,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 389,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 376,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 417,
  [419] = 417,
  [420] = 420,
  [421] = 417,
  [422] = 417,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 388,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 377,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 386,
  [438] = 136,
  [439] = 439,
  [440] = 428,
  [441] = 398,
  [442] = 442,
  [443] = 428,
  [444] = 424,
  [445] = 445,
  [446] = 424,
  [447] = 428,
  [448] = 424,
  [449] = 385,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 384,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 389,
  [464] = 409,
  [465] = 462,
  [466] = 466,
  [467] = 467,
  [468] = 462,
  [469] = 462,
  [470] = 403,
  [471] = 471,
  [472] = 462,
  [473] = 473,
  [474] = 382,
  [475] = 407,
  [476] = 410,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 480,
  [482] = 482,
  [483] = 478,
  [484] = 478,
  [485] = 478,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 478,
  [490] = 490,
  [491] = 111,
  [492] = 492,
  [493] = 492,
  [494] = 490,
  [495] = 490,
  [496] = 490,
  [497] = 490,
  [498] = 490,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 505,
  [507] = 507,
  [508] = 500,
  [509] = 505,
  [510] = 505,
  [511] = 500,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 500,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 499,
  [521] = 521,
  [522] = 505,
  [523] = 499,
  [524] = 500,
  [525] = 525,
  [526] = 500,
  [527] = 527,
  [528] = 499,
  [529] = 529,
  [530] = 530,
  [531] = 519,
  [532] = 530,
  [533] = 499,
  [534] = 530,
  [535] = 529,
  [536] = 530,
  [537] = 505,
  [538] = 530,
  [539] = 539,
  [540] = 111,
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
      if (eof) ADVANCE(97);
      ADVANCE_MAP(
        '!', 430,
        '"', 454,
        '#', 107,
        '$', 34,
        '&', 417,
        '\'', 450,
        '(', 111,
        ')', 112,
        '+', 423,
        ',', 115,
        '-', 426,
        '.', 557,
        '/', 425,
        '0', 465,
        '3', 466,
        ';', 98,
        '<', 420,
        '=', 412,
        '>', 421,
        '@', 71,
        'A', 545,
        'S', 534,
        'T', 547,
        '\\', 2,
        '^', 416,
        'a', 546,
        'f', 536,
        'g', 541,
        'r', 538,
        's', 535,
        't', 548,
        'z', 539,
        '|', 415,
        '~', 428,
        '%', 424,
        '*', 424,
        'C', 544,
        'c', 544,
        'K', 543,
        'k', 543,
        'V', 543,
        'v', 543,
        '1', 467,
        '2', 467,
        'F', 537,
        'R', 537,
        'X', 537,
        'x', 537,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(468);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(549);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(17);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(17);
      if (lookahead == '\r') SKIP(1);
      if (lookahead == 'U') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(66);
      if (lookahead == 'x') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(460);
      if (set_contains(sym__escape_sequence_character_set_1, 12, lookahead)) ADVANCE(458);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(19);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(19);
      if (lookahead == '\r') SKIP(3);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(18);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(18);
      if (lookahead == '\r') SKIP(5);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(20);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(20);
      if (lookahead == '\r') SKIP(7);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(21);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(21);
      if (lookahead == '\r') SKIP(9);
      if (lookahead == 'U') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(66);
      if (lookahead == 'x') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(460);
      if (set_contains(sym__escape_sequence_character_set_1, 12, lookahead)) ADVANCE(458);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(103);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '\\') SKIP(13);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(11);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(11);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(11);
      if (lookahead == '\r') SKIP(12);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(30);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(30);
      if (lookahead == '\r') SKIP(14);
      if (lookahead == 'U') ADVANCE(70);
      if (lookahead == 'u') ADVANCE(66);
      if (lookahead == 'x') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(460);
      if (set_contains(sym__escape_sequence_character_set_1, 12, lookahead)) ADVANCE(458);
      END_STATE();
    case 16:
      if (lookahead == '\r') ADVANCE(108);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '!', 430,
        '"', 454,
        '#', 107,
        '$', 34,
        '&', 417,
        '\'', 450,
        '(', 111,
        ')', 112,
        '+', 423,
        ',', 115,
        '-', 426,
        '.', 557,
        '/', 425,
        '0', 465,
        '3', 466,
        ';', 98,
        '<', 420,
        '=', 412,
        '>', 421,
        '@', 71,
        'A', 545,
        'S', 534,
        'T', 547,
        '\\', 2,
        '^', 416,
        'a', 546,
        'f', 536,
        'g', 541,
        'r', 538,
        's', 535,
        't', 548,
        'z', 539,
        '|', 415,
        '~', 428,
        '%', 424,
        '*', 424,
        'C', 544,
        'c', 544,
        'K', 543,
        'k', 543,
        'V', 543,
        'v', 543,
        '1', 467,
        '2', 467,
        'F', 537,
        'R', 537,
        'X', 537,
        'x', 537,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(468);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(549);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '!', 429,
        '"', 454,
        '#', 107,
        '$', 38,
        '%', 44,
        '\'', 450,
        '(', 111,
        ')', 112,
        '-', 427,
        '.', 563,
        '/', 25,
        '0', 434,
        '3', 439,
        ';', 98,
        'A', 571,
        'S', 555,
        'T', 573,
        '\\', 6,
        'a', 572,
        'f', 558,
        'g', 566,
        'r', 560,
        's', 556,
        't', 574,
        'z', 564,
        '~', 428,
        'C', 570,
        'c', 570,
        'K', 569,
        'k', 569,
        'V', 569,
        'v', 569,
        '1', 440,
        '2', 440,
        'F', 559,
        'R', 559,
        'X', 559,
        'x', 559,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(440);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(575);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '!', 429,
        '"', 454,
        '#', 107,
        '$', 38,
        '%', 44,
        '\'', 450,
        '(', 111,
        '+', 72,
        ',', 405,
        '-', 427,
        '.', 562,
        '/', 25,
        '0', 434,
        '3', 439,
        ';', 98,
        '=', 411,
        '@', 71,
        'A', 571,
        'S', 555,
        'T', 573,
        '\\', 4,
        'a', 572,
        'f', 558,
        'g', 566,
        'r', 560,
        's', 556,
        't', 574,
        'z', 564,
        '|', 49,
        '~', 428,
        '\t', 19,
        ' ', 19,
        'C', 570,
        'c', 570,
        'K', 569,
        'k', 569,
        'V', 569,
        'v', 569,
        '1', 440,
        '2', 440,
        'F', 559,
        'R', 559,
        'X', 559,
        'x', 559,
      );
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(19);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(440);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(575);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '!', 43,
        '"', 454,
        '#', 107,
        '&', 417,
        '(', 111,
        ')', 112,
        ',', 405,
        '/', 425,
        ';', 98,
        '<', 420,
        '=', 412,
        '>', 421,
      );
      if (lookahead == '\\') SKIP(8);
      if (lookahead == '^') ADVANCE(416);
      if (lookahead == '|') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(424);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(423);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(454);
      if (lookahead == '/') ADVANCE(456);
      if (lookahead == '\\') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(457);
      if (lookahead != 0) ADVANCE(455);
      END_STATE();
    case 22:
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == ',') ADVANCE(115);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(533);
      if (lookahead == '$' ||
          lookahead == '%') ADVANCE(533);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 23:
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(533);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead == '$' ||
          lookahead == '%') ADVANCE(533);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(23);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 24:
      if (lookahead == '*') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '/') ADVANCE(107);
      END_STATE();
    case 26:
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == '*') ADVANCE(28);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == ':') ADVANCE(551);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '/') ADVANCE(452);
      if (lookahead == '\\') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(451);
      END_STATE();
    case 31:
      if (lookahead == '1') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(461);
      END_STATE();
    case 32:
      if (lookahead == '1') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(461);
      END_STATE();
    case 33:
      ADVANCE_MAP(
        '2', 211,
        '4', 217,
        '8', 219,
        ':', 554,
        'L', 29,
        'a', 298,
        'b', 205,
        'c', 334,
        'd', 338,
        'f', 300,
        'h', 206,
        'i', 326,
        'l', 227,
        'm', 198,
        'p', 187,
        'q', 393,
        's', 277,
        'u', 307,
        'w', 339,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      END_STATE();
    case 34:
      ADVANCE_MAP(
        '3', 470,
        'A', 55,
        'S', 31,
        'T', 57,
        'a', 56,
        'f', 35,
        'g', 47,
        'r', 37,
        's', 32,
        't', 61,
        'z', 45,
        'C', 54,
        'c', 54,
        'K', 52,
        'k', 52,
        'V', 52,
        'v', 52,
        '1', 473,
        '2', 473,
        'F', 36,
        'R', 36,
        'X', 36,
        'x', 36,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(461);
      END_STATE();
    case 35:
      if (lookahead == '3') ADVANCE(470);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(473);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(461);
      END_STATE();
    case 36:
      if (lookahead == '3') ADVANCE(470);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(461);
      END_STATE();
    case 37:
      if (lookahead == '3') ADVANCE(470);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(461);
      END_STATE();
    case 38:
      ADVANCE_MAP(
        '3', 471,
        'A', 527,
        'S', 478,
        'T', 529,
        'a', 528,
        'f', 483,
        'g', 515,
        'r', 485,
        's', 479,
        't', 530,
        'z', 498,
        'C', 526,
        'c', 526,
        'K', 525,
        'k', 525,
        'V', 525,
        'v', 525,
        '1', 474,
        '2', 474,
        'F', 484,
        'R', 484,
        'X', 484,
        'x', 484,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(532);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(577);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == '=') ADVANCE(418);
      END_STATE();
    case 44:
      ADVANCE_MAP(
        'a', 493,
        'c', 491,
        'd', 522,
        'g', 513,
        'h', 504,
        'l', 512,
        'p', 494,
        't', 508,
      );
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(461);
      END_STATE();
    case 47:
      if (lookahead == 'p') ADVANCE(461);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 49:
      if (lookahead == '|') ADVANCE(413);
      END_STATE();
    case 50:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      END_STATE();
    case 51:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      END_STATE();
    case 52:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(461);
      END_STATE();
    case 53:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(438);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(461);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(461);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(461);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(461);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(461);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(458);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(442);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 71:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 72:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(408);
      END_STATE();
    case 73:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 74:
      if (eof) ADVANCE(97);
      ADVANCE_MAP(
        '\t', 169,
        ' ', 168,
        '!', 43,
        '#', 107,
        '&', 417,
        '(', 111,
        ',', 115,
        '/', 425,
        ';', 98,
        '<', 420,
        '=', 412,
        '>', 421,
      );
      if (lookahead == '\\') SKIP(82);
      if (lookahead == '^') ADVANCE(416);
      if (lookahead == '|') ADVANCE(415);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(424);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(423);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(74);
      END_STATE();
    case 75:
      if (eof) ADVANCE(97);
      if (lookahead == '\n') SKIP(77);
      END_STATE();
    case 76:
      if (eof) ADVANCE(97);
      if (lookahead == '\n') SKIP(77);
      if (lookahead == '\r') SKIP(75);
      END_STATE();
    case 77:
      if (eof) ADVANCE(97);
      ADVANCE_MAP(
        '\n', 101,
        '\r', 99,
        '#', 107,
        '%', 73,
        '.', 33,
        '/', 25,
        '0', 40,
        ';', 98,
      );
      if (lookahead == '\\') SKIP(76);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(77);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 78:
      if (eof) ADVANCE(97);
      if (lookahead == '\n') SKIP(80);
      END_STATE();
    case 79:
      if (eof) ADVANCE(97);
      if (lookahead == '\n') SKIP(80);
      if (lookahead == '\r') SKIP(78);
      END_STATE();
    case 80:
      if (eof) ADVANCE(97);
      ADVANCE_MAP(
        '\n', 102,
        '\r', 100,
        '#', 107,
        '%', 73,
        '.', 33,
        '/', 25,
        '0', 40,
        ';', 98,
      );
      if (lookahead == '\\') SKIP(79);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead == 0x0b ||
          lookahead == '\f') SKIP(80);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 81:
      if (eof) ADVANCE(97);
      if (lookahead == '\n') SKIP(74);
      END_STATE();
    case 82:
      if (eof) ADVANCE(97);
      if (lookahead == '\n') SKIP(74);
      if (lookahead == '\r') SKIP(81);
      END_STATE();
    case 83:
      if (eof) ADVANCE(97);
      if (lookahead == '\n') SKIP(95);
      END_STATE();
    case 84:
      if (eof) ADVANCE(97);
      if (lookahead == '\n') SKIP(95);
      if (lookahead == '\r') SKIP(83);
      END_STATE();
    case 85:
      if (eof) ADVANCE(97);
      if (lookahead == '\n') SKIP(96);
      END_STATE();
    case 86:
      if (eof) ADVANCE(97);
      if (lookahead == '\n') SKIP(96);
      if (lookahead == '\r') SKIP(85);
      END_STATE();
    case 87:
      if (eof) ADVANCE(97);
      if (lookahead == '\n') SKIP(94);
      END_STATE();
    case 88:
      if (eof) ADVANCE(97);
      if (lookahead == '\n') SKIP(94);
      if (lookahead == '\r') SKIP(87);
      END_STATE();
    case 89:
      if (eof) ADVANCE(97);
      if (lookahead == '\n') SKIP(91);
      END_STATE();
    case 90:
      if (eof) ADVANCE(97);
      if (lookahead == '\n') SKIP(91);
      if (lookahead == '\r') SKIP(89);
      END_STATE();
    case 91:
      if (eof) ADVANCE(97);
      if (lookahead == '\n') ADVANCE(103);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '\\') SKIP(90);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(91);
      END_STATE();
    case 92:
      if (eof) ADVANCE(97);
      ADVANCE_MAP(
        '!', 429,
        '"', 454,
        '#', 107,
        '$', 38,
        '%', 44,
        '\'', 450,
        '(', 111,
        ')', 112,
        '-', 427,
        '.', 563,
        '/', 25,
        '0', 434,
        '3', 439,
        ';', 98,
        'A', 571,
        'S', 555,
        'T', 573,
        '\\', 6,
        'a', 572,
        'f', 558,
        'g', 566,
        'r', 560,
        's', 556,
        't', 574,
        'z', 564,
        '~', 428,
        'C', 570,
        'c', 570,
        'K', 569,
        'k', 569,
        'V', 569,
        'v', 569,
        '1', 440,
        '2', 440,
        'F', 559,
        'R', 559,
        'X', 559,
        'x', 559,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(92);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(440);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(575);
      END_STATE();
    case 93:
      if (eof) ADVANCE(97);
      ADVANCE_MAP(
        '!', 429,
        '"', 454,
        '#', 107,
        '$', 38,
        '%', 44,
        '\'', 450,
        '(', 111,
        '+', 72,
        ',', 405,
        '-', 427,
        '.', 562,
        '/', 25,
        '0', 434,
        '3', 439,
        ';', 98,
        '=', 411,
        '@', 71,
        'A', 571,
        'S', 555,
        'T', 573,
        '\\', 4,
        'a', 572,
        'f', 558,
        'g', 566,
        'r', 560,
        's', 556,
        't', 574,
        'z', 564,
        '|', 49,
        '~', 428,
        '\t', 19,
        ' ', 19,
        'C', 570,
        'c', 570,
        'K', 569,
        'k', 569,
        'V', 569,
        'v', 569,
        '1', 440,
        '2', 440,
        'F', 559,
        'R', 559,
        'X', 559,
        'x', 559,
      );
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(93);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(440);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(575);
      END_STATE();
    case 94:
      if (eof) ADVANCE(97);
      ADVANCE_MAP(
        '!', 43,
        '"', 454,
        '#', 107,
        '&', 417,
        '(', 111,
        ')', 112,
        ',', 115,
        '/', 425,
        ';', 98,
        '<', 420,
        '=', 412,
        '>', 421,
      );
      if (lookahead == '\\') SKIP(88);
      if (lookahead == '^') ADVANCE(416);
      if (lookahead == '|') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(424);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(423);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(94);
      END_STATE();
    case 95:
      if (eof) ADVANCE(97);
      ADVANCE_MAP(
        '!', 43,
        '"', 454,
        '#', 107,
        '&', 417,
        '(', 111,
        ')', 112,
        ',', 405,
        '/', 425,
        ';', 98,
        '<', 420,
        '=', 412,
        '>', 421,
      );
      if (lookahead == '\\') SKIP(84);
      if (lookahead == '^') ADVANCE(416);
      if (lookahead == '|') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(424);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(423);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 96:
      if (eof) ADVANCE(97);
      ADVANCE_MAP(
        '!', 43,
        '#', 107,
        '&', 417,
        '(', 111,
        ')', 112,
        ',', 115,
        '/', 425,
        ';', 98,
        '<', 420,
        '=', 412,
        '>', 421,
      );
      if (lookahead == '\\') SKIP(86);
      if (lookahead == '^') ADVANCE(416);
      if (lookahead == '|') ADVANCE(415);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(424);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(423);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == '\r') ADVANCE(99);
      if (lookahead == '%') ADVANCE(73);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '0') ADVANCE(40);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead == '\r') ADVANCE(100);
      if (lookahead == '%') ADVANCE(73);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '0') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == '\r') ADVANCE(99);
      if (lookahead == '%') ADVANCE(73);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '0') ADVANCE(40);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead == '\r') ADVANCE(100);
      if (lookahead == '%') ADVANCE(73);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '0') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\n') ADVANCE(103);
      if (lookahead == '\r') ADVANCE(11);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead == '\r') ADVANCE(100);
      if (lookahead == '%') ADVANCE(73);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '0') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\\') ADVANCE(533);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym__line_comment_token1);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__line_comment_token1);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_macro_mnemonic);
      if (lookahead == ':') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_macro_mnemonic);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_DOTbyte);
      if (lookahead == ':') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_DOTbyte);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_DOT2byte);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_DOT2byte);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_DOTshort);
      if (lookahead == ':') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_DOTshort);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DOThalf);
      if (lookahead == ':') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_DOThalf);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_DOThword);
      if (lookahead == ':') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_DOThword);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_DOT4byte);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_DOT4byte);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_DOTword);
      if (lookahead == ':') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_DOTword);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_DOTint);
      if (lookahead == ':') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_DOTint);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_DOT8byte);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_DOT8byte);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_DOTdword);
      if (lookahead == ':') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_DOTdword);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_DOTlong);
      if (lookahead == ':') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_DOTlong);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_DOTquad);
      if (lookahead == ':') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_DOTquad);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_DOTcomm);
      if (lookahead == ':') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_DOTcomm);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_DOTlcomm);
      if (lookahead == ':') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_DOTlcomm);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_DOTalign);
      if (lookahead == ':') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_DOTalign);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_DOTbalign);
      if (lookahead == ':') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_DOTbalign);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_DOTp2align);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_DOTp2align);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_DOTsleb128);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DOTsleb128);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_DOTuleb128);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_DOTuleb128);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_DOTdtprelword);
      if (lookahead == ':') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_DOTdtprelword);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_DOTdtpreldword);
      if (lookahead == ':') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_DOTdtpreldword);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_DOTskip);
      if (lookahead == ':') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_DOTskip);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_DOTspace);
      if (lookahead == ':') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_DOTspace);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_DOTfloat);
      if (lookahead == ':') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_DOTfloat);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_DOTdouble);
      if (lookahead == ':') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_DOTdouble);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_DOTsingle);
      if (lookahead == ':') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_DOTsingle);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(169);
      if (lookahead == ' ') ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(169);
      if (lookahead == ' ') ADVANCE(168);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_DOTasciz);
      if (lookahead == ':') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_DOTasciz);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_DOTascii);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'z') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'y')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_DOTascii);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'z') ADVANCE(175);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(404);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_DOTasciiz);
      if (lookahead == ':') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_DOTasciiz);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_DOTstring);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'z') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'y')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_DOTstring);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'z') ADVANCE(179);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(404);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_DOTstringz);
      if (lookahead == ':') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_DOTstringz);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(185);
      if (lookahead == ':') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(188);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(186);
      if (lookahead == ':') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(189);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(194);
      if (lookahead == ':') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(190);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(191);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(207);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(192);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(193);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(150);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(152);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(151);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(153);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'a') ADVANCE(294);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'a') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'a') ADVANCE(235);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'a') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'a') ADVANCE(224);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'a') ADVANCE(305);
      if (lookahead == 'y') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'a') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'a') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'a') ADVANCE(225);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'a') ADVANCE(293);
      if (lookahead == 'w') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'a') ADVANCE(381);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'a') ADVANCE(306);
      if (lookahead == 'y') ADVANCE(386);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'a') ADVANCE(296);
      if (lookahead == 'w') ADVANCE(349);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'a') ADVANCE(308);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'b') ADVANCE(396);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'b') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'b') ADVANCE(181);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'b') ADVANCE(398);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'b') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'b') ADVANCE(303);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'b') ADVANCE(397);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'b') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'b') ADVANCE(183);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'b') ADVANCE(400);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'b') ADVANCE(399);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'b') ADVANCE(401);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'c') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'c') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'c') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'c') ADVANCE(282);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'c') ADVANCE(250);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'c') ADVANCE(344);
      if (lookahead == 'o') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'c') ADVANCE(345);
      if (lookahead == 'o') ADVANCE(328);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'd') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'd') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'd') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'd') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'd') ADVANCE(394);
      if (lookahead == 'w') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'd') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'd') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'd') ADVANCE(139);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'd') ADVANCE(129);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'd') ADVANCE(395);
      if (lookahead == 'w') ADVANCE(351);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'd') ADVANCE(155);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'd') ADVANCE(157);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'e') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'e') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'e') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'e') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'e') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'e') ADVANCE(210);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'e') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'e') ADVANCE(297);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'e') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'f') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'f') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'g') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'g') ADVANCE(320);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'g') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'g') ADVANCE(137);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'g') ADVANCE(177);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'g') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'g') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'g') ADVANCE(321);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'g') ADVANCE(322);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'g') ADVANCE(325);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'g') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'g') ADVANCE(304);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'h') ADVANCE(342);
      if (lookahead == 'i') ADVANCE(327);
      if (lookahead == 'k') ADVANCE(284);
      if (lookahead == 'l') ADVANCE(253);
      if (lookahead == 'p') ADVANCE(200);
      if (lookahead == 't') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'h') ADVANCE(343);
      if (lookahead == 'i') ADVANCE(330);
      if (lookahead == 'k') ADVANCE(286);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead == 'p') ADVANCE(202);
      if (lookahead == 't') ADVANCE(371);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'i') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'i') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead == 'z') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'y')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'i') ADVANCE(265);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'i') ADVANCE(283);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'i') ADVANCE(173);
      if (lookahead == 'z') ADVANCE(171);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(404);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'i') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'i') ADVANCE(271);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'i') ADVANCE(355);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'i') ADVANCE(331);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'i') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'i') ADVANCE(272);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'i') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'i') ADVANCE(273);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'l') ADVANCE(278);
      if (lookahead == 's') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'l') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'l') ADVANCE(281);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'l') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'l') ADVANCE(263);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'l') ADVANCE(239);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'l') ADVANCE(285);
      if (lookahead == 's') ADVANCE(223);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'l') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'l') ADVANCE(341);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'l') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'l') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'l') ADVANCE(251);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'l') ADVANCE(252);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'l') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'l') ADVANCE(289);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'l') ADVANCE(261);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'l') ADVANCE(291);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'l') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'm') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'm') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'm') ADVANCE(141);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'm') ADVANCE(143);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'm') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'm') ADVANCE(312);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'm') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'm') ADVANCE(313);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'n') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'n') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'n') ADVANCE(148);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'n') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'n') ADVANCE(147);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'n') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'n') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'n') ADVANCE(149);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'n') ADVANCE(380);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'n') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'n') ADVANCE(267);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'n') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'n') ADVANCE(275);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'n') ADVANCE(268);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'o') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'o') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'o') ADVANCE(315);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'o') ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'o') ADVANCE(390);
      if (lookahead == 't') ADVANCE(356);
      if (lookahead == 'w') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'o') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'o') ADVANCE(392);
      if (lookahead == 't') ADVANCE(357);
      if (lookahead == 'w') ADVANCE(347);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'o') ADVANCE(359);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'o') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'o') ADVANCE(204);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'o') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'o') ADVANCE(369);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'o') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'o') ADVANCE(317);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'o') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'o') ADVANCE(362);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'o') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'o') ADVANCE(368);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'o') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'o') ADVANCE(372);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'o') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'o') ADVANCE(374);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'p') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'p') ADVANCE(159);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'p') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'p') ADVANCE(375);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'r') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'r') ADVANCE(236);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'r') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'r') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'r') ADVANCE(237);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'r') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'r') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'r') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'r') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'r') ADVANCE(335);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'r') ADVANCE(238);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'r') ADVANCE(382);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'r') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'r') ADVANCE(287);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'r') ADVANCE(240);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'r') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'r') ADVANCE(241);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'r') ADVANCE(259);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 't') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 't') ADVANCE(243);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 't') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 't') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 't') ADVANCE(131);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 't') ADVANCE(163);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 't') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 't') ADVANCE(244);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 't') ADVANCE(245);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 't') ADVANCE(249);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 't') ADVANCE(254);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 't') ADVANCE(255);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 't') ADVANCE(256);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'u') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'u') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'u') ADVANCE(213);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'u') ADVANCE(196);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'w') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'w') ADVANCE(353);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'y') ADVANCE(377);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'y') ADVANCE(384);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'y') ADVANCE(387);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'y') ADVANCE(385);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'y') ADVANCE(388);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'y') ADVANCE(389);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(404);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym__control_operand_separator_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_option_flag_token1);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '$') ADVANCE(39);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_assignment_operator);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_assignment_operator);
      if (lookahead == '=') ADVANCE(418);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_logical_or_operator);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_logical_and_operator);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_bitwise_or_operator);
      if (lookahead == '|') ADVANCE(413);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_bitwise_xor_operator);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_bitwise_and_operator);
      if (lookahead == '&') ADVANCE(414);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_equality_operator);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_relational_operator);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_relational_operator);
      if (lookahead == '<') ADVANCE(422);
      if (lookahead == '=') ADVANCE(419);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_relational_operator);
      if (lookahead == '=') ADVANCE(419);
      if (lookahead == '>') ADVANCE(422);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_shift_operator);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_additive_operator);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_multiplicative_operator);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_multiplicative_operator);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '/') ADVANCE(107);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_unary_minus_operator);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_unary_minus_operator);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '0') ADVANCE(435);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(441);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_bitwise_not_operator);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_logical_not_operator);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_logical_not_operator);
      if (lookahead == '=') ADVANCE(418);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_relocation_type);
      if (lookahead == '_') ADVANCE(503);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_relocation_type);
      if (lookahead == '_') ADVANCE(492);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_relocation_type);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_octal);
      ADVANCE_MAP(
        '.', 446,
        'B', 53,
        'b', 579,
        'f', 578,
        'o', 437,
        'E', 50,
        'e', 50,
        'X', 63,
        'x', 63,
        '8', 441,
        '9', 441,
      );
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(436);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_octal);
      ADVANCE_MAP(
        '.', 446,
        'o', 437,
        'B', 53,
        'b', 53,
        'E', 50,
        'e', 50,
        'X', 63,
        'x', 63,
        '8', 441,
        '9', 441,
      );
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(436);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_octal);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(436);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_octal);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(437);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_binary);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(438);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(578);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(441);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(441);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(441);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(441);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(442);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'f') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(568);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(445);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(446);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '*') ADVANCE(27);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '/') ADVANCE(452);
      if (lookahead == '\\') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(451);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(27);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(456);
      if (lookahead == '\\') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(455);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(458);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(459);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.') ADVANCE(561);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(464);
      if (lookahead == '$' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.') ADVANCE(561);
      if (lookahead == ':') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(464);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.') ADVANCE(561);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(577);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(578);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(577);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(578);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(469);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(577);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(469);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(577);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(461);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('2' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(476);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(461);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(476);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(487);
      if (lookahead == '3') ADVANCE(482);
      if (lookahead == 'r') ADVANCE(500);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(487);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '2') ADVANCE(433);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '3') ADVANCE(471);
      if (lookahead == 'a') ADVANCE(527);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(474);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '3') ADVANCE(471);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '3') ADVANCE(471);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '4') ADVANCE(433);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '6') ADVANCE(433);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '6') ADVANCE(486);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '_') ADVANCE(503);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '_') ADVANCE(502);
      if (lookahead == 'g') ADVANCE(496);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'a') ADVANCE(509);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'a') ADVANCE(497);
      if (lookahead == 'h') ADVANCE(504);
      if (lookahead == 'l') ADVANCE(512);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'b') ADVANCE(520);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'c') ADVANCE(480);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'd') ADVANCE(433);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'd') ADVANCE(489);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'd') ADVANCE(495);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(517);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(505);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(507);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(510);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'g') ADVANCE(514);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'h') ADVANCE(504);
      if (lookahead == 'l') ADVANCE(512);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'i') ADVANCE(433);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(433);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(481);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(489);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(521);
      if (lookahead == 'p') ADVANCE(519);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(506);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(432);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(433);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(523);
      if (lookahead == 'p') ADVANCE(518);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(524);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'p') ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'p') ADVANCE(518);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'r') ADVANCE(511);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'r') ADVANCE(499);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'r') ADVANCE(501);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 's') ADVANCE(488);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 's') ADVANCE(490);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 't') ADVANCE(516);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 't') ADVANCE(431);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 't') ADVANCE(489);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('2' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('4' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('8' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('8' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(477);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(531);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(532);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_macro_parameter);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(533);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(561);
      if (lookahead == '1') ADVANCE(462);
      if (lookahead == ':') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(464);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(561);
      if (lookahead == '1') ADVANCE(462);
      if (lookahead == ':') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(464);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(561);
      if (lookahead == '3') ADVANCE(462);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'a') ADVANCE(545);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(463);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(464);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(561);
      if (lookahead == '3') ADVANCE(462);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(464);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(561);
      if (lookahead == '3') ADVANCE(462);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(464);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(561);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'e') ADVANCE(542);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(561);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'o') ADVANCE(464);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(561);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'p') ADVANCE(464);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(561);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == 'r') ADVANCE(540);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(561);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(464);
      if (lookahead == '$' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(561);
      if (lookahead == ':') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(464);
      if (lookahead == '$' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(561);
      if (lookahead == ':') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(464);
      if (lookahead == '$' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(561);
      if (lookahead == ':') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(464);
      if (lookahead == '$' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(561);
      if (lookahead == ':') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(464);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(561);
      if (lookahead == ':') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(464);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(561);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_local_label);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_local_label_reference_token1);
      if (lookahead == '.') ADVANCE(561);
      if (lookahead == ':') ADVANCE(551);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(552);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_local_label_reference_token1);
      if (lookahead == '.') ADVANCE(575);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_global_label);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '1') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(476);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '1') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(476);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      ADVANCE_MAP(
        '2', 208,
        '4', 214,
        '8', 218,
        ':', 554,
        'L', 552,
        'a', 292,
        'b', 199,
        'c', 332,
        'd', 336,
        'f', 299,
        'h', 203,
        'i', 323,
        'l', 226,
        'm', 197,
        'p', 184,
        'q', 391,
        's', 276,
        'u', 309,
        'w', 337,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(403);
      if (('e' <= lookahead && lookahead <= 'z')) ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(561);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '3') ADVANCE(472);
      if (lookahead == 'a') ADVANCE(571);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(475);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(476);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '3') ADVANCE(472);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(476);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '3') ADVANCE(472);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(476);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(561);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'L') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(445);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(575);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'L') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(445);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'e') ADVANCE(567);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'o') ADVANCE(476);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'p') ADVANCE(476);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'r') ADVANCE(565);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(447);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(476);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(476);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(476);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(476);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(476);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(476);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_global_numeric_label);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_local_numeric_label);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_local_numeric_label_reference);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_local_numeric_label_reference);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(438);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 77, .external_lex_state = 2},
  [2] = {.lex_state = 93, .external_lex_state = 3},
  [3] = {.lex_state = 77, .external_lex_state = 2},
  [4] = {.lex_state = 77, .external_lex_state = 2},
  [5] = {.lex_state = 92, .external_lex_state = 3},
  [6] = {.lex_state = 92, .external_lex_state = 3},
  [7] = {.lex_state = 92, .external_lex_state = 3},
  [8] = {.lex_state = 93, .external_lex_state = 2},
  [9] = {.lex_state = 92, .external_lex_state = 2},
  [10] = {.lex_state = 92, .external_lex_state = 3},
  [11] = {.lex_state = 92, .external_lex_state = 2},
  [12] = {.lex_state = 92, .external_lex_state = 4},
  [13] = {.lex_state = 92, .external_lex_state = 2},
  [14] = {.lex_state = 92, .external_lex_state = 2},
  [15] = {.lex_state = 92, .external_lex_state = 2},
  [16] = {.lex_state = 92, .external_lex_state = 2},
  [17] = {.lex_state = 92, .external_lex_state = 2},
  [18] = {.lex_state = 92, .external_lex_state = 2},
  [19] = {.lex_state = 92, .external_lex_state = 2},
  [20] = {.lex_state = 92, .external_lex_state = 2},
  [21] = {.lex_state = 92, .external_lex_state = 2},
  [22] = {.lex_state = 92, .external_lex_state = 2},
  [23] = {.lex_state = 92, .external_lex_state = 2},
  [24] = {.lex_state = 92, .external_lex_state = 2},
  [25] = {.lex_state = 92, .external_lex_state = 2},
  [26] = {.lex_state = 92, .external_lex_state = 2},
  [27] = {.lex_state = 92, .external_lex_state = 2},
  [28] = {.lex_state = 92, .external_lex_state = 2},
  [29] = {.lex_state = 92, .external_lex_state = 2},
  [30] = {.lex_state = 92, .external_lex_state = 2},
  [31] = {.lex_state = 92, .external_lex_state = 2},
  [32] = {.lex_state = 92, .external_lex_state = 2},
  [33] = {.lex_state = 92, .external_lex_state = 2},
  [34] = {.lex_state = 92, .external_lex_state = 2},
  [35] = {.lex_state = 92, .external_lex_state = 2},
  [36] = {.lex_state = 92, .external_lex_state = 2},
  [37] = {.lex_state = 92, .external_lex_state = 2},
  [38] = {.lex_state = 92, .external_lex_state = 2},
  [39] = {.lex_state = 92, .external_lex_state = 2},
  [40] = {.lex_state = 92, .external_lex_state = 2},
  [41] = {.lex_state = 92, .external_lex_state = 2},
  [42] = {.lex_state = 92, .external_lex_state = 2},
  [43] = {.lex_state = 92, .external_lex_state = 2},
  [44] = {.lex_state = 92, .external_lex_state = 2},
  [45] = {.lex_state = 92, .external_lex_state = 2},
  [46] = {.lex_state = 92, .external_lex_state = 2},
  [47] = {.lex_state = 92, .external_lex_state = 2},
  [48] = {.lex_state = 92, .external_lex_state = 2},
  [49] = {.lex_state = 92, .external_lex_state = 2},
  [50] = {.lex_state = 92, .external_lex_state = 2},
  [51] = {.lex_state = 92, .external_lex_state = 2},
  [52] = {.lex_state = 92, .external_lex_state = 2},
  [53] = {.lex_state = 92, .external_lex_state = 2},
  [54] = {.lex_state = 92, .external_lex_state = 2},
  [55] = {.lex_state = 92, .external_lex_state = 2},
  [56] = {.lex_state = 92, .external_lex_state = 2},
  [57] = {.lex_state = 92, .external_lex_state = 2},
  [58] = {.lex_state = 92, .external_lex_state = 2},
  [59] = {.lex_state = 92, .external_lex_state = 2},
  [60] = {.lex_state = 92, .external_lex_state = 2},
  [61] = {.lex_state = 92, .external_lex_state = 2},
  [62] = {.lex_state = 92, .external_lex_state = 2},
  [63] = {.lex_state = 92, .external_lex_state = 2},
  [64] = {.lex_state = 92, .external_lex_state = 2},
  [65] = {.lex_state = 92, .external_lex_state = 2},
  [66] = {.lex_state = 92, .external_lex_state = 2},
  [67] = {.lex_state = 92, .external_lex_state = 2},
  [68] = {.lex_state = 92, .external_lex_state = 2},
  [69] = {.lex_state = 92, .external_lex_state = 2},
  [70] = {.lex_state = 92, .external_lex_state = 2},
  [71] = {.lex_state = 92, .external_lex_state = 2},
  [72] = {.lex_state = 92, .external_lex_state = 2},
  [73] = {.lex_state = 92, .external_lex_state = 2},
  [74] = {.lex_state = 92, .external_lex_state = 2},
  [75] = {.lex_state = 92, .external_lex_state = 2},
  [76] = {.lex_state = 92, .external_lex_state = 2},
  [77] = {.lex_state = 92, .external_lex_state = 2},
  [78] = {.lex_state = 92, .external_lex_state = 2},
  [79] = {.lex_state = 92, .external_lex_state = 2},
  [80] = {.lex_state = 92, .external_lex_state = 2},
  [81] = {.lex_state = 92, .external_lex_state = 2},
  [82] = {.lex_state = 92, .external_lex_state = 2},
  [83] = {.lex_state = 92, .external_lex_state = 2},
  [84] = {.lex_state = 92, .external_lex_state = 2},
  [85] = {.lex_state = 92, .external_lex_state = 2},
  [86] = {.lex_state = 92, .external_lex_state = 2},
  [87] = {.lex_state = 92, .external_lex_state = 2},
  [88] = {.lex_state = 92, .external_lex_state = 2},
  [89] = {.lex_state = 92, .external_lex_state = 2},
  [90] = {.lex_state = 92, .external_lex_state = 2},
  [91] = {.lex_state = 92, .external_lex_state = 2},
  [92] = {.lex_state = 92, .external_lex_state = 2},
  [93] = {.lex_state = 92, .external_lex_state = 2},
  [94] = {.lex_state = 92, .external_lex_state = 2},
  [95] = {.lex_state = 92, .external_lex_state = 2},
  [96] = {.lex_state = 92, .external_lex_state = 2},
  [97] = {.lex_state = 92, .external_lex_state = 2},
  [98] = {.lex_state = 92, .external_lex_state = 2},
  [99] = {.lex_state = 92, .external_lex_state = 2},
  [100] = {.lex_state = 92, .external_lex_state = 2},
  [101] = {.lex_state = 92, .external_lex_state = 2},
  [102] = {.lex_state = 77, .external_lex_state = 2},
  [103] = {.lex_state = 77, .external_lex_state = 2},
  [104] = {.lex_state = 80, .external_lex_state = 2},
  [105] = {.lex_state = 77, .external_lex_state = 2},
  [106] = {.lex_state = 77, .external_lex_state = 2},
  [107] = {.lex_state = 77, .external_lex_state = 2},
  [108] = {.lex_state = 77, .external_lex_state = 2},
  [109] = {.lex_state = 77, .external_lex_state = 2},
  [110] = {.lex_state = 77, .external_lex_state = 2},
  [111] = {.lex_state = 93, .external_lex_state = 3},
  [112] = {.lex_state = 74, .external_lex_state = 1},
  [113] = {.lex_state = 74, .external_lex_state = 1},
  [114] = {.lex_state = 74, .external_lex_state = 1},
  [115] = {.lex_state = 74, .external_lex_state = 1},
  [116] = {.lex_state = 74, .external_lex_state = 1},
  [117] = {.lex_state = 74, .external_lex_state = 1},
  [118] = {.lex_state = 74, .external_lex_state = 1},
  [119] = {.lex_state = 74, .external_lex_state = 1},
  [120] = {.lex_state = 74, .external_lex_state = 1},
  [121] = {.lex_state = 74, .external_lex_state = 1},
  [122] = {.lex_state = 74, .external_lex_state = 1},
  [123] = {.lex_state = 74, .external_lex_state = 1},
  [124] = {.lex_state = 74, .external_lex_state = 1},
  [125] = {.lex_state = 74, .external_lex_state = 1},
  [126] = {.lex_state = 74, .external_lex_state = 1},
  [127] = {.lex_state = 74, .external_lex_state = 1},
  [128] = {.lex_state = 74, .external_lex_state = 1},
  [129] = {.lex_state = 74, .external_lex_state = 1},
  [130] = {.lex_state = 74, .external_lex_state = 1},
  [131] = {.lex_state = 74, .external_lex_state = 1},
  [132] = {.lex_state = 74, .external_lex_state = 1},
  [133] = {.lex_state = 74, .external_lex_state = 1},
  [134] = {.lex_state = 74, .external_lex_state = 1},
  [135] = {.lex_state = 74, .external_lex_state = 1},
  [136] = {.lex_state = 74, .external_lex_state = 1},
  [137] = {.lex_state = 74, .external_lex_state = 1},
  [138] = {.lex_state = 74, .external_lex_state = 1},
  [139] = {.lex_state = 74, .external_lex_state = 1},
  [140] = {.lex_state = 92, .external_lex_state = 4},
  [141] = {.lex_state = 74, .external_lex_state = 1},
  [142] = {.lex_state = 74, .external_lex_state = 1},
  [143] = {.lex_state = 74, .external_lex_state = 1},
  [144] = {.lex_state = 74, .external_lex_state = 1},
  [145] = {.lex_state = 74, .external_lex_state = 1},
  [146] = {.lex_state = 74, .external_lex_state = 1},
  [147] = {.lex_state = 92, .external_lex_state = 3},
  [148] = {.lex_state = 74, .external_lex_state = 1},
  [149] = {.lex_state = 74, .external_lex_state = 1},
  [150] = {.lex_state = 74, .external_lex_state = 1},
  [151] = {.lex_state = 74, .external_lex_state = 1},
  [152] = {.lex_state = 74, .external_lex_state = 1},
  [153] = {.lex_state = 74, .external_lex_state = 1},
  [154] = {.lex_state = 74, .external_lex_state = 1},
  [155] = {.lex_state = 74, .external_lex_state = 1},
  [156] = {.lex_state = 74, .external_lex_state = 1},
  [157] = {.lex_state = 74, .external_lex_state = 1},
  [158] = {.lex_state = 74, .external_lex_state = 1},
  [159] = {.lex_state = 95, .external_lex_state = 1},
  [160] = {.lex_state = 95, .external_lex_state = 1},
  [161] = {.lex_state = 95, .external_lex_state = 1},
  [162] = {.lex_state = 95, .external_lex_state = 1},
  [163] = {.lex_state = 95, .external_lex_state = 1},
  [164] = {.lex_state = 95, .external_lex_state = 1},
  [165] = {.lex_state = 95, .external_lex_state = 1},
  [166] = {.lex_state = 95, .external_lex_state = 1},
  [167] = {.lex_state = 95, .external_lex_state = 1},
  [168] = {.lex_state = 95, .external_lex_state = 1},
  [169] = {.lex_state = 95, .external_lex_state = 1},
  [170] = {.lex_state = 95, .external_lex_state = 1},
  [171] = {.lex_state = 95, .external_lex_state = 1},
  [172] = {.lex_state = 95, .external_lex_state = 1},
  [173] = {.lex_state = 95, .external_lex_state = 1},
  [174] = {.lex_state = 95, .external_lex_state = 1},
  [175] = {.lex_state = 95, .external_lex_state = 1},
  [176] = {.lex_state = 95, .external_lex_state = 1},
  [177] = {.lex_state = 95, .external_lex_state = 1},
  [178] = {.lex_state = 95, .external_lex_state = 1},
  [179] = {.lex_state = 95, .external_lex_state = 1},
  [180] = {.lex_state = 95, .external_lex_state = 1},
  [181] = {.lex_state = 95, .external_lex_state = 1},
  [182] = {.lex_state = 95, .external_lex_state = 1},
  [183] = {.lex_state = 95, .external_lex_state = 1},
  [184] = {.lex_state = 95, .external_lex_state = 1},
  [185] = {.lex_state = 95, .external_lex_state = 1},
  [186] = {.lex_state = 95, .external_lex_state = 1},
  [187] = {.lex_state = 95, .external_lex_state = 1},
  [188] = {.lex_state = 93, .external_lex_state = 2},
  [189] = {.lex_state = 95, .external_lex_state = 1},
  [190] = {.lex_state = 93, .external_lex_state = 2},
  [191] = {.lex_state = 95, .external_lex_state = 1},
  [192] = {.lex_state = 95, .external_lex_state = 1},
  [193] = {.lex_state = 95, .external_lex_state = 1},
  [194] = {.lex_state = 95, .external_lex_state = 1},
  [195] = {.lex_state = 95, .external_lex_state = 1},
  [196] = {.lex_state = 95, .external_lex_state = 1},
  [197] = {.lex_state = 95, .external_lex_state = 1},
  [198] = {.lex_state = 95, .external_lex_state = 1},
  [199] = {.lex_state = 95, .external_lex_state = 1},
  [200] = {.lex_state = 95, .external_lex_state = 1},
  [201] = {.lex_state = 95, .external_lex_state = 1},
  [202] = {.lex_state = 95, .external_lex_state = 1},
  [203] = {.lex_state = 95, .external_lex_state = 1},
  [204] = {.lex_state = 95, .external_lex_state = 1},
  [205] = {.lex_state = 95, .external_lex_state = 1},
  [206] = {.lex_state = 96, .external_lex_state = 5},
  [207] = {.lex_state = 96, .external_lex_state = 5},
  [208] = {.lex_state = 96, .external_lex_state = 5},
  [209] = {.lex_state = 96, .external_lex_state = 5},
  [210] = {.lex_state = 96, .external_lex_state = 5},
  [211] = {.lex_state = 96, .external_lex_state = 5},
  [212] = {.lex_state = 96, .external_lex_state = 5},
  [213] = {.lex_state = 96, .external_lex_state = 5},
  [214] = {.lex_state = 96, .external_lex_state = 5},
  [215] = {.lex_state = 96, .external_lex_state = 5},
  [216] = {.lex_state = 96, .external_lex_state = 5},
  [217] = {.lex_state = 96, .external_lex_state = 5},
  [218] = {.lex_state = 96, .external_lex_state = 5},
  [219] = {.lex_state = 96, .external_lex_state = 5},
  [220] = {.lex_state = 96, .external_lex_state = 5},
  [221] = {.lex_state = 96, .external_lex_state = 5},
  [222] = {.lex_state = 96, .external_lex_state = 5},
  [223] = {.lex_state = 96, .external_lex_state = 5},
  [224] = {.lex_state = 96, .external_lex_state = 5},
  [225] = {.lex_state = 96, .external_lex_state = 5},
  [226] = {.lex_state = 96, .external_lex_state = 5},
  [227] = {.lex_state = 96, .external_lex_state = 5},
  [228] = {.lex_state = 96, .external_lex_state = 5},
  [229] = {.lex_state = 96, .external_lex_state = 5},
  [230] = {.lex_state = 96, .external_lex_state = 5},
  [231] = {.lex_state = 96, .external_lex_state = 5},
  [232] = {.lex_state = 96, .external_lex_state = 5},
  [233] = {.lex_state = 96, .external_lex_state = 5},
  [234] = {.lex_state = 96, .external_lex_state = 5},
  [235] = {.lex_state = 96, .external_lex_state = 5},
  [236] = {.lex_state = 96, .external_lex_state = 5},
  [237] = {.lex_state = 96, .external_lex_state = 5},
  [238] = {.lex_state = 96, .external_lex_state = 5},
  [239] = {.lex_state = 96, .external_lex_state = 5},
  [240] = {.lex_state = 96, .external_lex_state = 5},
  [241] = {.lex_state = 96, .external_lex_state = 5},
  [242] = {.lex_state = 96, .external_lex_state = 5},
  [243] = {.lex_state = 96, .external_lex_state = 5},
  [244] = {.lex_state = 96, .external_lex_state = 5},
  [245] = {.lex_state = 96, .external_lex_state = 5},
  [246] = {.lex_state = 96, .external_lex_state = 5},
  [247] = {.lex_state = 96, .external_lex_state = 5},
  [248] = {.lex_state = 96, .external_lex_state = 5},
  [249] = {.lex_state = 96, .external_lex_state = 5},
  [250] = {.lex_state = 96, .external_lex_state = 5},
  [251] = {.lex_state = 96, .external_lex_state = 5},
  [252] = {.lex_state = 94, .external_lex_state = 3},
  [253] = {.lex_state = 94, .external_lex_state = 3},
  [254] = {.lex_state = 94, .external_lex_state = 3},
  [255] = {.lex_state = 94, .external_lex_state = 3},
  [256] = {.lex_state = 94, .external_lex_state = 3},
  [257] = {.lex_state = 92, .external_lex_state = 2},
  [258] = {.lex_state = 92, .external_lex_state = 2},
  [259] = {.lex_state = 96, .external_lex_state = 6},
  [260] = {.lex_state = 96, .external_lex_state = 6},
  [261] = {.lex_state = 96, .external_lex_state = 6},
  [262] = {.lex_state = 96, .external_lex_state = 6},
  [263] = {.lex_state = 96, .external_lex_state = 6},
  [264] = {.lex_state = 96, .external_lex_state = 6},
  [265] = {.lex_state = 96, .external_lex_state = 6},
  [266] = {.lex_state = 96, .external_lex_state = 6},
  [267] = {.lex_state = 96, .external_lex_state = 6},
  [268] = {.lex_state = 96, .external_lex_state = 6},
  [269] = {.lex_state = 96, .external_lex_state = 6},
  [270] = {.lex_state = 96, .external_lex_state = 6},
  [271] = {.lex_state = 96, .external_lex_state = 6},
  [272] = {.lex_state = 96, .external_lex_state = 6},
  [273] = {.lex_state = 96, .external_lex_state = 6},
  [274] = {.lex_state = 74, .external_lex_state = 1},
  [275] = {.lex_state = 96, .external_lex_state = 6},
  [276] = {.lex_state = 96, .external_lex_state = 6},
  [277] = {.lex_state = 96, .external_lex_state = 6},
  [278] = {.lex_state = 96, .external_lex_state = 6},
  [279] = {.lex_state = 96, .external_lex_state = 6},
  [280] = {.lex_state = 96, .external_lex_state = 6},
  [281] = {.lex_state = 96, .external_lex_state = 6},
  [282] = {.lex_state = 96, .external_lex_state = 6},
  [283] = {.lex_state = 96, .external_lex_state = 6},
  [284] = {.lex_state = 96, .external_lex_state = 6},
  [285] = {.lex_state = 96, .external_lex_state = 6},
  [286] = {.lex_state = 96, .external_lex_state = 6},
  [287] = {.lex_state = 96, .external_lex_state = 6},
  [288] = {.lex_state = 96, .external_lex_state = 6},
  [289] = {.lex_state = 96, .external_lex_state = 6},
  [290] = {.lex_state = 96, .external_lex_state = 6},
  [291] = {.lex_state = 96, .external_lex_state = 6},
  [292] = {.lex_state = 96, .external_lex_state = 6},
  [293] = {.lex_state = 96, .external_lex_state = 6},
  [294] = {.lex_state = 96, .external_lex_state = 6},
  [295] = {.lex_state = 96, .external_lex_state = 6},
  [296] = {.lex_state = 96, .external_lex_state = 6},
  [297] = {.lex_state = 96, .external_lex_state = 6},
  [298] = {.lex_state = 96, .external_lex_state = 6},
  [299] = {.lex_state = 96, .external_lex_state = 6},
  [300] = {.lex_state = 96, .external_lex_state = 6},
  [301] = {.lex_state = 96, .external_lex_state = 6},
  [302] = {.lex_state = 96, .external_lex_state = 6},
  [303] = {.lex_state = 96, .external_lex_state = 6},
  [304] = {.lex_state = 96, .external_lex_state = 6},
  [305] = {.lex_state = 96, .external_lex_state = 6},
  [306] = {.lex_state = 96, .external_lex_state = 6},
  [307] = {.lex_state = 96, .external_lex_state = 6},
  [308] = {.lex_state = 96, .external_lex_state = 6},
  [309] = {.lex_state = 96, .external_lex_state = 6},
  [310] = {.lex_state = 96, .external_lex_state = 6},
  [311] = {.lex_state = 96, .external_lex_state = 6},
  [312] = {.lex_state = 96, .external_lex_state = 6},
  [313] = {.lex_state = 96, .external_lex_state = 6},
  [314] = {.lex_state = 96, .external_lex_state = 6},
  [315] = {.lex_state = 96, .external_lex_state = 6},
  [316] = {.lex_state = 96, .external_lex_state = 6},
  [317] = {.lex_state = 95, .external_lex_state = 2},
  [318] = {.lex_state = 95, .external_lex_state = 2},
  [319] = {.lex_state = 95, .external_lex_state = 2},
  [320] = {.lex_state = 95, .external_lex_state = 2},
  [321] = {.lex_state = 95, .external_lex_state = 2},
  [322] = {.lex_state = 95, .external_lex_state = 2},
  [323] = {.lex_state = 95, .external_lex_state = 2},
  [324] = {.lex_state = 95, .external_lex_state = 2},
  [325] = {.lex_state = 95, .external_lex_state = 2},
  [326] = {.lex_state = 95, .external_lex_state = 2},
  [327] = {.lex_state = 95, .external_lex_state = 2},
  [328] = {.lex_state = 95, .external_lex_state = 2},
  [329] = {.lex_state = 95, .external_lex_state = 2},
  [330] = {.lex_state = 95, .external_lex_state = 2},
  [331] = {.lex_state = 95, .external_lex_state = 2},
  [332] = {.lex_state = 74, .external_lex_state = 1},
  [333] = {.lex_state = 95, .external_lex_state = 2},
  [334] = {.lex_state = 95, .external_lex_state = 2},
  [335] = {.lex_state = 95, .external_lex_state = 2},
  [336] = {.lex_state = 95, .external_lex_state = 2},
  [337] = {.lex_state = 95, .external_lex_state = 2},
  [338] = {.lex_state = 95, .external_lex_state = 2},
  [339] = {.lex_state = 95, .external_lex_state = 2},
  [340] = {.lex_state = 95, .external_lex_state = 2},
  [341] = {.lex_state = 95, .external_lex_state = 2},
  [342] = {.lex_state = 95, .external_lex_state = 2},
  [343] = {.lex_state = 95, .external_lex_state = 2},
  [344] = {.lex_state = 95, .external_lex_state = 2},
  [345] = {.lex_state = 95, .external_lex_state = 2},
  [346] = {.lex_state = 95, .external_lex_state = 2},
  [347] = {.lex_state = 95, .external_lex_state = 2},
  [348] = {.lex_state = 95, .external_lex_state = 2},
  [349] = {.lex_state = 95, .external_lex_state = 2},
  [350] = {.lex_state = 95, .external_lex_state = 2},
  [351] = {.lex_state = 95, .external_lex_state = 2},
  [352] = {.lex_state = 95, .external_lex_state = 2},
  [353] = {.lex_state = 95, .external_lex_state = 2},
  [354] = {.lex_state = 95, .external_lex_state = 2},
  [355] = {.lex_state = 95, .external_lex_state = 2},
  [356] = {.lex_state = 95, .external_lex_state = 2},
  [357] = {.lex_state = 95, .external_lex_state = 2},
  [358] = {.lex_state = 95, .external_lex_state = 2},
  [359] = {.lex_state = 95, .external_lex_state = 2},
  [360] = {.lex_state = 95, .external_lex_state = 2},
  [361] = {.lex_state = 95, .external_lex_state = 2},
  [362] = {.lex_state = 95, .external_lex_state = 2},
  [363] = {.lex_state = 74, .external_lex_state = 1},
  [364] = {.lex_state = 74, .external_lex_state = 1},
  [365] = {.lex_state = 74, .external_lex_state = 1},
  [366] = {.lex_state = 74, .external_lex_state = 1},
  [367] = {.lex_state = 93, .external_lex_state = 1},
  [368] = {.lex_state = 93, .external_lex_state = 1},
  [369] = {.lex_state = 93, .external_lex_state = 1},
  [370] = {.lex_state = 93, .external_lex_state = 1},
  [371] = {.lex_state = 94, .external_lex_state = 3},
  [372] = {.lex_state = 93, .external_lex_state = 1},
  [373] = {.lex_state = 94, .external_lex_state = 3},
  [374] = {.lex_state = 0, .external_lex_state = 5},
  [375] = {.lex_state = 94, .external_lex_state = 3},
  [376] = {.lex_state = 0, .external_lex_state = 5},
  [377] = {.lex_state = 94, .external_lex_state = 3},
  [378] = {.lex_state = 94, .external_lex_state = 3},
  [379] = {.lex_state = 0, .external_lex_state = 4},
  [380] = {.lex_state = 74, .external_lex_state = 3},
  [381] = {.lex_state = 93, .external_lex_state = 1},
  [382] = {.lex_state = 94, .external_lex_state = 3},
  [383] = {.lex_state = 0, .external_lex_state = 4},
  [384] = {.lex_state = 0, .external_lex_state = 5},
  [385] = {.lex_state = 94, .external_lex_state = 3},
  [386] = {.lex_state = 0, .external_lex_state = 5},
  [387] = {.lex_state = 93, .external_lex_state = 1},
  [388] = {.lex_state = 0, .external_lex_state = 5},
  [389] = {.lex_state = 94, .external_lex_state = 3},
  [390] = {.lex_state = 94, .external_lex_state = 3},
  [391] = {.lex_state = 74, .external_lex_state = 3},
  [392] = {.lex_state = 93, .external_lex_state = 1},
  [393] = {.lex_state = 93, .external_lex_state = 1},
  [394] = {.lex_state = 0, .external_lex_state = 4},
  [395] = {.lex_state = 93, .external_lex_state = 1},
  [396] = {.lex_state = 74, .external_lex_state = 3},
  [397] = {.lex_state = 74, .external_lex_state = 3},
  [398] = {.lex_state = 94, .external_lex_state = 3},
  [399] = {.lex_state = 93, .external_lex_state = 1},
  [400] = {.lex_state = 94, .external_lex_state = 3},
  [401] = {.lex_state = 0, .external_lex_state = 6},
  [402] = {.lex_state = 0, .external_lex_state = 5},
  [403] = {.lex_state = 0, .external_lex_state = 5},
  [404] = {.lex_state = 74, .external_lex_state = 3},
  [405] = {.lex_state = 0, .external_lex_state = 3},
  [406] = {.lex_state = 0, .external_lex_state = 3},
  [407] = {.lex_state = 0, .external_lex_state = 5},
  [408] = {.lex_state = 0, .external_lex_state = 5},
  [409] = {.lex_state = 94, .external_lex_state = 3},
  [410] = {.lex_state = 94, .external_lex_state = 3},
  [411] = {.lex_state = 94, .external_lex_state = 3},
  [412] = {.lex_state = 94, .external_lex_state = 3},
  [413] = {.lex_state = 94, .external_lex_state = 3},
  [414] = {.lex_state = 0, .external_lex_state = 6},
  [415] = {.lex_state = 0, .external_lex_state = 3},
  [416] = {.lex_state = 0, .external_lex_state = 4},
  [417] = {.lex_state = 0, .external_lex_state = 6},
  [418] = {.lex_state = 0, .external_lex_state = 6},
  [419] = {.lex_state = 0, .external_lex_state = 6},
  [420] = {.lex_state = 94, .external_lex_state = 3},
  [421] = {.lex_state = 0, .external_lex_state = 6},
  [422] = {.lex_state = 0, .external_lex_state = 6},
  [423] = {.lex_state = 94, .external_lex_state = 3},
  [424] = {.lex_state = 21, .external_lex_state = 2},
  [425] = {.lex_state = 0, .external_lex_state = 3},
  [426] = {.lex_state = 0, .external_lex_state = 6},
  [427] = {.lex_state = 0, .external_lex_state = 3},
  [428] = {.lex_state = 21, .external_lex_state = 2},
  [429] = {.lex_state = 23, .external_lex_state = 2},
  [430] = {.lex_state = 94, .external_lex_state = 2},
  [431] = {.lex_state = 23, .external_lex_state = 2},
  [432] = {.lex_state = 0, .external_lex_state = 3},
  [433] = {.lex_state = 0, .external_lex_state = 3},
  [434] = {.lex_state = 0, .external_lex_state = 3},
  [435] = {.lex_state = 0, .external_lex_state = 3},
  [436] = {.lex_state = 0, .external_lex_state = 3},
  [437] = {.lex_state = 0, .external_lex_state = 6},
  [438] = {.lex_state = 0, .external_lex_state = 2},
  [439] = {.lex_state = 0, .external_lex_state = 3},
  [440] = {.lex_state = 21, .external_lex_state = 2},
  [441] = {.lex_state = 94, .external_lex_state = 2},
  [442] = {.lex_state = 0, .external_lex_state = 3},
  [443] = {.lex_state = 21, .external_lex_state = 2},
  [444] = {.lex_state = 21, .external_lex_state = 2},
  [445] = {.lex_state = 0, .external_lex_state = 3},
  [446] = {.lex_state = 21, .external_lex_state = 2},
  [447] = {.lex_state = 21, .external_lex_state = 2},
  [448] = {.lex_state = 21, .external_lex_state = 2},
  [449] = {.lex_state = 94, .external_lex_state = 2},
  [450] = {.lex_state = 0, .external_lex_state = 3},
  [451] = {.lex_state = 21, .external_lex_state = 2},
  [452] = {.lex_state = 0, .external_lex_state = 3},
  [453] = {.lex_state = 0, .external_lex_state = 3},
  [454] = {.lex_state = 0, .external_lex_state = 6},
  [455] = {.lex_state = 0, .external_lex_state = 3},
  [456] = {.lex_state = 0, .external_lex_state = 3},
  [457] = {.lex_state = 0, .external_lex_state = 3},
  [458] = {.lex_state = 0, .external_lex_state = 3},
  [459] = {.lex_state = 0, .external_lex_state = 3},
  [460] = {.lex_state = 0, .external_lex_state = 3},
  [461] = {.lex_state = 0, .external_lex_state = 3},
  [462] = {.lex_state = 0, .external_lex_state = 2},
  [463] = {.lex_state = 0, .external_lex_state = 6},
  [464] = {.lex_state = 94, .external_lex_state = 2},
  [465] = {.lex_state = 0, .external_lex_state = 2},
  [466] = {.lex_state = 21, .external_lex_state = 2},
  [467] = {.lex_state = 0, .external_lex_state = 3},
  [468] = {.lex_state = 0, .external_lex_state = 2},
  [469] = {.lex_state = 0, .external_lex_state = 2},
  [470] = {.lex_state = 0, .external_lex_state = 6},
  [471] = {.lex_state = 0, .external_lex_state = 3},
  [472] = {.lex_state = 0, .external_lex_state = 2},
  [473] = {.lex_state = 22, .external_lex_state = 2},
  [474] = {.lex_state = 0, .external_lex_state = 6},
  [475] = {.lex_state = 0, .external_lex_state = 6},
  [476] = {.lex_state = 94, .external_lex_state = 2},
  [477] = {.lex_state = 91, .external_lex_state = 2},
  [478] = {.lex_state = 30, .external_lex_state = 2},
  [479] = {.lex_state = 94, .external_lex_state = 2},
  [480] = {.lex_state = 22, .external_lex_state = 2},
  [481] = {.lex_state = 22, .external_lex_state = 2},
  [482] = {.lex_state = 91, .external_lex_state = 2},
  [483] = {.lex_state = 30, .external_lex_state = 2},
  [484] = {.lex_state = 30, .external_lex_state = 2},
  [485] = {.lex_state = 30, .external_lex_state = 2},
  [486] = {.lex_state = 0, .external_lex_state = 3},
  [487] = {.lex_state = 0, .external_lex_state = 2},
  [488] = {.lex_state = 94, .external_lex_state = 2},
  [489] = {.lex_state = 30, .external_lex_state = 2},
  [490] = {.lex_state = 0, .external_lex_state = 2},
  [491] = {.lex_state = 95, .external_lex_state = 2},
  [492] = {.lex_state = 0, .external_lex_state = 3},
  [493] = {.lex_state = 91, .external_lex_state = 2},
  [494] = {.lex_state = 0, .external_lex_state = 2},
  [495] = {.lex_state = 0, .external_lex_state = 2},
  [496] = {.lex_state = 0, .external_lex_state = 2},
  [497] = {.lex_state = 0, .external_lex_state = 2},
  [498] = {.lex_state = 0, .external_lex_state = 2},
  [499] = {.lex_state = 0, .external_lex_state = 2},
  [500] = {.lex_state = 0, .external_lex_state = 2},
  [501] = {.lex_state = 0, .external_lex_state = 2},
  [502] = {.lex_state = 0, .external_lex_state = 2},
  [503] = {.lex_state = 0, .external_lex_state = 2},
  [504] = {.lex_state = 94, .external_lex_state = 2},
  [505] = {.lex_state = 0, .external_lex_state = 2},
  [506] = {.lex_state = 0, .external_lex_state = 2},
  [507] = {.lex_state = 0, .external_lex_state = 2},
  [508] = {.lex_state = 0, .external_lex_state = 2},
  [509] = {.lex_state = 0, .external_lex_state = 2},
  [510] = {.lex_state = 0, .external_lex_state = 2},
  [511] = {.lex_state = 0, .external_lex_state = 2},
  [512] = {.lex_state = 0, .external_lex_state = 2},
  [513] = {.lex_state = 0, .external_lex_state = 2},
  [514] = {.lex_state = 0, .external_lex_state = 2},
  [515] = {.lex_state = 0, .external_lex_state = 2},
  [516] = {.lex_state = 0, .external_lex_state = 2},
  [517] = {.lex_state = 0, .external_lex_state = 2},
  [518] = {.lex_state = 94, .external_lex_state = 2},
  [519] = {.lex_state = 22, .external_lex_state = 2},
  [520] = {.lex_state = 0, .external_lex_state = 2},
  [521] = {.lex_state = 94, .external_lex_state = 2},
  [522] = {.lex_state = 0, .external_lex_state = 2},
  [523] = {.lex_state = 0, .external_lex_state = 2},
  [524] = {.lex_state = 0, .external_lex_state = 2},
  [525] = {.lex_state = 0, .external_lex_state = 2},
  [526] = {.lex_state = 0, .external_lex_state = 2},
  [527] = {.lex_state = 95, .external_lex_state = 2},
  [528] = {.lex_state = 0, .external_lex_state = 2},
  [529] = {.lex_state = 22, .external_lex_state = 2},
  [530] = {.lex_state = 0, .external_lex_state = 2},
  [531] = {.lex_state = 22, .external_lex_state = 2},
  [532] = {.lex_state = 0, .external_lex_state = 2},
  [533] = {.lex_state = 0, .external_lex_state = 2},
  [534] = {.lex_state = 0, .external_lex_state = 2},
  [535] = {.lex_state = 22, .external_lex_state = 2},
  [536] = {.lex_state = 0, .external_lex_state = 2},
  [537] = {.lex_state = 0, .external_lex_state = 2},
  [538] = {.lex_state = 0, .external_lex_state = 2},
  [539] = {.lex_state = 91, .external_lex_state = 2},
  [540] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym__block_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym__line_comment_token1] = ACTIONS(1),
    [aux_sym__block_comment_token1] = ACTIONS(3),
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
    [sym__operator_space] = ACTIONS(5),
    [sym__line_separator] = ACTIONS(1),
    [sym__data_separator] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(512),
    [sym__statement] = STATE(105),
    [sym__line_comment] = STATE(477),
    [sym__block_comment] = STATE(1),
    [sym_directive] = STATE(405),
    [sym__macro_directive] = STATE(450),
    [sym__numeric_directive] = STATE(458),
    [sym_numeric_mnemonic] = STATE(412),
    [sym__string_directive] = STATE(425),
    [sym_string_mnemonic] = STATE(504),
    [sym__control_directive] = STATE(442),
    [sym_control_mnemonic] = STATE(413),
    [sym_instruction] = STATE(405),
    [sym__label] = STATE(102),
    [aux_sym_program_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_CR] = ACTIONS(9),
    [anon_sym_LF] = ACTIONS(9),
    [aux_sym__line_comment_token1] = ACTIONS(11),
    [aux_sym__block_comment_token1] = ACTIONS(13),
    [sym_macro_mnemonic] = ACTIONS(15),
    [anon_sym_DOTbyte] = ACTIONS(17),
    [anon_sym_DOT2byte] = ACTIONS(17),
    [anon_sym_DOTshort] = ACTIONS(17),
    [anon_sym_DOThalf] = ACTIONS(17),
    [anon_sym_DOThword] = ACTIONS(17),
    [anon_sym_DOT4byte] = ACTIONS(17),
    [anon_sym_DOTword] = ACTIONS(17),
    [anon_sym_DOTint] = ACTIONS(17),
    [anon_sym_DOT8byte] = ACTIONS(17),
    [anon_sym_DOTdword] = ACTIONS(17),
    [anon_sym_DOTlong] = ACTIONS(17),
    [anon_sym_DOTquad] = ACTIONS(17),
    [anon_sym_DOTcomm] = ACTIONS(17),
    [anon_sym_DOTlcomm] = ACTIONS(17),
    [anon_sym_DOTalign] = ACTIONS(17),
    [anon_sym_DOTbalign] = ACTIONS(17),
    [anon_sym_DOTp2align] = ACTIONS(17),
    [anon_sym_DOTsleb128] = ACTIONS(17),
    [anon_sym_DOTuleb128] = ACTIONS(17),
    [anon_sym_DOTdtprelword] = ACTIONS(17),
    [anon_sym_DOTdtpreldword] = ACTIONS(17),
    [anon_sym_DOTskip] = ACTIONS(17),
    [anon_sym_DOTspace] = ACTIONS(17),
    [anon_sym_DOTfloat] = ACTIONS(17),
    [anon_sym_DOTdouble] = ACTIONS(17),
    [anon_sym_DOTsingle] = ACTIONS(17),
    [anon_sym_DOTasciz] = ACTIONS(19),
    [anon_sym_DOTascii] = ACTIONS(19),
    [anon_sym_DOTasciiz] = ACTIONS(19),
    [anon_sym_DOTstring] = ACTIONS(19),
    [anon_sym_DOTstringz] = ACTIONS(19),
    [aux_sym_control_mnemonic_token1] = ACTIONS(21),
    [sym_opcode] = ACTIONS(23),
    [sym_local_label] = ACTIONS(25),
    [sym_global_label] = ACTIONS(25),
    [sym_global_numeric_label] = ACTIONS(25),
    [sym_local_numeric_label] = ACTIONS(25),
    [sym__operator_space] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 44,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      aux_sym_section_type_token1,
    ACTIONS(33), 1,
      aux_sym_option_flag_token1,
    ACTIONS(35), 1,
      sym_unary_minus_operator,
    ACTIONS(39), 1,
      sym_relocation_type,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    STATE(2), 1,
      sym__block_comment,
    STATE(160), 1,
      sym__wrapped_logical_or_expression,
    STATE(161), 1,
      sym__logical_and_expression,
    STATE(162), 1,
      sym__wrapped_logical_and_expression,
    STATE(163), 1,
      sym__bitwise_or_expression,
    STATE(178), 1,
      sym__assignment_expression,
    STATE(179), 1,
      sym__logical_or_expression,
    STATE(180), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(182), 1,
      sym__bitwise_xor_expression,
    STATE(183), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(184), 1,
      sym__bitwise_and_expression,
    STATE(185), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(186), 1,
      sym__equality_expression,
    STATE(187), 1,
      sym__wrapped_equality_expression,
    STATE(189), 1,
      sym__relational_expression,
    STATE(191), 1,
      sym__wrapped_relational_expression,
    STATE(192), 1,
      sym__shift_expression,
    STATE(193), 1,
      sym__wrapped_shift_expression,
    STATE(194), 1,
      sym__additive_expression,
    STATE(195), 1,
      sym__wrapped_additive_expression,
    STATE(196), 1,
      sym__multiplicative_expression,
    STATE(197), 1,
      sym__wrapped_multiplicative_expression,
    STATE(198), 1,
      sym__simple_expression,
    STATE(370), 1,
      sym__control_operand,
    STATE(372), 1,
      sym__wrapped_assignment_expression,
    STATE(427), 1,
      sym_control_operands,
    ACTIONS(37), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(43), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(395), 3,
      sym_section_type,
      sym_option_flag,
      sym_string,
    ACTIONS(27), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(41), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(201), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [151] = 23,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 1,
      aux_sym__line_comment_token1,
    ACTIONS(63), 1,
      sym_macro_mnemonic,
    ACTIONS(72), 1,
      aux_sym_control_mnemonic_token1,
    ACTIONS(75), 1,
      sym_opcode,
    STATE(105), 1,
      sym__statement,
    STATE(110), 1,
      sym__label,
    STATE(412), 1,
      sym_numeric_mnemonic,
    STATE(413), 1,
      sym_control_mnemonic,
    STATE(425), 1,
      sym__string_directive,
    STATE(442), 1,
      sym__control_directive,
    STATE(450), 1,
      sym__macro_directive,
    STATE(458), 1,
      sym__numeric_directive,
    STATE(504), 1,
      sym_string_mnemonic,
    STATE(539), 1,
      sym__line_comment,
    STATE(3), 2,
      sym__block_comment,
      aux_sym_program_repeat1,
    STATE(415), 2,
      sym_directive,
      sym_instruction,
    ACTIONS(57), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
    ACTIONS(78), 4,
      sym_local_label,
      sym_global_label,
      sym_global_numeric_label,
      sym_local_numeric_label,
    ACTIONS(69), 5,
      anon_sym_DOTasciz,
      anon_sym_DOTascii,
      anon_sym_DOTasciiz,
      anon_sym_DOTstring,
      anon_sym_DOTstringz,
    ACTIONS(66), 26,
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
  [257] = 24,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      aux_sym__line_comment_token1,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(15), 1,
      sym_macro_mnemonic,
    ACTIONS(21), 1,
      aux_sym_control_mnemonic_token1,
    ACTIONS(23), 1,
      sym_opcode,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_program_repeat1,
    STATE(4), 1,
      sym__block_comment,
    STATE(103), 1,
      sym__label,
    STATE(105), 1,
      sym__statement,
    STATE(412), 1,
      sym_numeric_mnemonic,
    STATE(413), 1,
      sym_control_mnemonic,
    STATE(425), 1,
      sym__string_directive,
    STATE(442), 1,
      sym__control_directive,
    STATE(450), 1,
      sym__macro_directive,
    STATE(458), 1,
      sym__numeric_directive,
    STATE(482), 1,
      sym__line_comment,
    STATE(504), 1,
      sym_string_mnemonic,
    STATE(406), 2,
      sym_directive,
      sym_instruction,
    ACTIONS(9), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
    ACTIONS(25), 4,
      sym_local_label,
      sym_global_label,
      sym_global_numeric_label,
      sym_local_numeric_label,
    ACTIONS(19), 5,
      anon_sym_DOTasciz,
      anon_sym_DOTascii,
      anon_sym_DOTasciiz,
      anon_sym_DOTstring,
      anon_sym_DOTstringz,
    ACTIONS(17), 26,
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
  [365] = 43,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      sym_unary_minus_operator,
    ACTIONS(91), 1,
      sym_relocation_type,
    ACTIONS(97), 1,
      aux_sym_decimal_token1,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(105), 1,
      aux_sym_symbol_token1,
    STATE(5), 1,
      sym__block_comment,
    STATE(206), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(211), 1,
      sym__assignment_expression,
    STATE(212), 1,
      sym__logical_or_expression,
    STATE(213), 1,
      sym__wrapped_logical_or_expression,
    STATE(214), 1,
      sym__logical_and_expression,
    STATE(215), 1,
      sym__wrapped_logical_and_expression,
    STATE(216), 1,
      sym__bitwise_or_expression,
    STATE(217), 1,
      sym__bitwise_xor_expression,
    STATE(218), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(219), 1,
      sym__bitwise_and_expression,
    STATE(220), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(221), 1,
      sym__equality_expression,
    STATE(222), 1,
      sym__wrapped_equality_expression,
    STATE(223), 1,
      sym__relational_expression,
    STATE(224), 1,
      sym__wrapped_relational_expression,
    STATE(225), 1,
      sym__shift_expression,
    STATE(226), 1,
      sym__wrapped_shift_expression,
    STATE(227), 1,
      sym__additive_expression,
    STATE(228), 1,
      sym__wrapped_additive_expression,
    STATE(229), 1,
      sym__multiplicative_expression,
    STATE(231), 1,
      sym__simple_expression,
    STATE(251), 1,
      sym__wrapped_multiplicative_expression,
    STATE(376), 1,
      sym__wrapped_assignment_expression,
    STATE(386), 1,
      sym__operand,
    STATE(407), 1,
      sym_string,
    STATE(436), 1,
      sym_operands,
    STATE(453), 1,
      sym__call_expression,
    ACTIONS(89), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(95), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(83), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(93), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(207), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [511] = 41,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(87), 1,
      sym_unary_minus_operator,
    ACTIONS(91), 1,
      sym_relocation_type,
    ACTIONS(97), 1,
      aux_sym_decimal_token1,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(105), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__block_comment,
    STATE(206), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(211), 1,
      sym__assignment_expression,
    STATE(212), 1,
      sym__logical_or_expression,
    STATE(213), 1,
      sym__wrapped_logical_or_expression,
    STATE(214), 1,
      sym__logical_and_expression,
    STATE(215), 1,
      sym__wrapped_logical_and_expression,
    STATE(216), 1,
      sym__bitwise_or_expression,
    STATE(217), 1,
      sym__bitwise_xor_expression,
    STATE(218), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(219), 1,
      sym__bitwise_and_expression,
    STATE(220), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(221), 1,
      sym__equality_expression,
    STATE(222), 1,
      sym__wrapped_equality_expression,
    STATE(223), 1,
      sym__relational_expression,
    STATE(224), 1,
      sym__wrapped_relational_expression,
    STATE(225), 1,
      sym__shift_expression,
    STATE(226), 1,
      sym__wrapped_shift_expression,
    STATE(227), 1,
      sym__additive_expression,
    STATE(228), 1,
      sym__wrapped_additive_expression,
    STATE(229), 1,
      sym__multiplicative_expression,
    STATE(231), 1,
      sym__simple_expression,
    STATE(251), 1,
      sym__wrapped_multiplicative_expression,
    STATE(376), 1,
      sym__wrapped_assignment_expression,
    STATE(403), 1,
      sym__operand,
    STATE(407), 1,
      sym_string,
    ACTIONS(89), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(95), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(107), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(93), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(207), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [651] = 41,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(87), 1,
      sym_unary_minus_operator,
    ACTIONS(91), 1,
      sym_relocation_type,
    ACTIONS(97), 1,
      aux_sym_decimal_token1,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(105), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym__block_comment,
    STATE(206), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(211), 1,
      sym__assignment_expression,
    STATE(212), 1,
      sym__logical_or_expression,
    STATE(213), 1,
      sym__wrapped_logical_or_expression,
    STATE(214), 1,
      sym__logical_and_expression,
    STATE(215), 1,
      sym__wrapped_logical_and_expression,
    STATE(216), 1,
      sym__bitwise_or_expression,
    STATE(217), 1,
      sym__bitwise_xor_expression,
    STATE(218), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(219), 1,
      sym__bitwise_and_expression,
    STATE(220), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(221), 1,
      sym__equality_expression,
    STATE(222), 1,
      sym__wrapped_equality_expression,
    STATE(223), 1,
      sym__relational_expression,
    STATE(224), 1,
      sym__wrapped_relational_expression,
    STATE(225), 1,
      sym__shift_expression,
    STATE(226), 1,
      sym__wrapped_shift_expression,
    STATE(227), 1,
      sym__additive_expression,
    STATE(228), 1,
      sym__wrapped_additive_expression,
    STATE(229), 1,
      sym__multiplicative_expression,
    STATE(231), 1,
      sym__simple_expression,
    STATE(251), 1,
      sym__wrapped_multiplicative_expression,
    STATE(376), 1,
      sym__wrapped_assignment_expression,
    STATE(403), 1,
      sym__operand,
    STATE(407), 1,
      sym_string,
    ACTIONS(89), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(95), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(111), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(93), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(207), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [791] = 42,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      aux_sym_section_type_token1,
    ACTIONS(33), 1,
      aux_sym_option_flag_token1,
    ACTIONS(35), 1,
      sym_unary_minus_operator,
    ACTIONS(39), 1,
      sym_relocation_type,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    STATE(8), 1,
      sym__block_comment,
    STATE(160), 1,
      sym__wrapped_logical_or_expression,
    STATE(161), 1,
      sym__logical_and_expression,
    STATE(162), 1,
      sym__wrapped_logical_and_expression,
    STATE(163), 1,
      sym__bitwise_or_expression,
    STATE(178), 1,
      sym__assignment_expression,
    STATE(179), 1,
      sym__logical_or_expression,
    STATE(180), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(182), 1,
      sym__bitwise_xor_expression,
    STATE(183), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(184), 1,
      sym__bitwise_and_expression,
    STATE(185), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(186), 1,
      sym__equality_expression,
    STATE(187), 1,
      sym__wrapped_equality_expression,
    STATE(189), 1,
      sym__relational_expression,
    STATE(191), 1,
      sym__wrapped_relational_expression,
    STATE(192), 1,
      sym__shift_expression,
    STATE(193), 1,
      sym__wrapped_shift_expression,
    STATE(194), 1,
      sym__additive_expression,
    STATE(195), 1,
      sym__wrapped_additive_expression,
    STATE(196), 1,
      sym__multiplicative_expression,
    STATE(197), 1,
      sym__wrapped_multiplicative_expression,
    STATE(198), 1,
      sym__simple_expression,
    STATE(372), 1,
      sym__wrapped_assignment_expression,
    STATE(387), 1,
      sym__control_operand,
    ACTIONS(37), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(43), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(395), 3,
      sym_section_type,
      sym_option_flag,
      sym_string,
    ACTIONS(41), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(201), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [933] = 42,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      anon_sym_RPAREN,
    ACTIONS(117), 1,
      sym_unary_minus_operator,
    ACTIONS(121), 1,
      sym_relocation_type,
    ACTIONS(127), 1,
      aux_sym_decimal_token1,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    STATE(9), 1,
      sym__block_comment,
    STATE(259), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(260), 1,
      sym__equality_expression,
    STATE(261), 1,
      sym__wrapped_equality_expression,
    STATE(262), 1,
      sym__relational_expression,
    STATE(263), 1,
      sym__wrapped_relational_expression,
    STATE(264), 1,
      sym__shift_expression,
    STATE(265), 1,
      sym__wrapped_shift_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__multiplicative_expression,
    STATE(269), 1,
      sym__wrapped_multiplicative_expression,
    STATE(270), 1,
      sym__simple_expression,
    STATE(272), 1,
      sym__assignment_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(275), 1,
      sym__wrapped_logical_or_expression,
    STATE(276), 1,
      sym__logical_and_expression,
    STATE(278), 1,
      sym__wrapped_logical_and_expression,
    STATE(279), 1,
      sym__bitwise_or_expression,
    STATE(280), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(281), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(299), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_additive_expression,
    STATE(414), 1,
      sym__wrapped_assignment_expression,
    STATE(437), 1,
      sym__operand,
    STATE(475), 1,
      sym_string,
    STATE(503), 1,
      sym_operands,
    ACTIONS(119), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(125), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(123), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(315), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1073] = 39,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_unary_minus_operator,
    ACTIONS(145), 1,
      sym_relocation_type,
    ACTIONS(151), 1,
      aux_sym_decimal_token1,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(10), 1,
      sym__block_comment,
    STATE(112), 1,
      sym__relational_expression,
    STATE(115), 1,
      sym__assignment_expression,
    STATE(116), 1,
      sym__logical_or_expression,
    STATE(117), 1,
      sym__wrapped_logical_or_expression,
    STATE(118), 1,
      sym__logical_and_expression,
    STATE(119), 1,
      sym__wrapped_logical_and_expression,
    STATE(120), 1,
      sym__bitwise_or_expression,
    STATE(121), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(122), 1,
      sym__bitwise_xor_expression,
    STATE(123), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(125), 1,
      sym__bitwise_and_expression,
    STATE(126), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(127), 1,
      sym__equality_expression,
    STATE(128), 1,
      sym__wrapped_equality_expression,
    STATE(130), 1,
      sym__wrapped_relational_expression,
    STATE(131), 1,
      sym__shift_expression,
    STATE(133), 1,
      sym__additive_expression,
    STATE(134), 1,
      sym__wrapped_additive_expression,
    STATE(135), 1,
      sym__multiplicative_expression,
    STATE(137), 1,
      sym__wrapped_multiplicative_expression,
    STATE(138), 1,
      sym__simple_expression,
    STATE(158), 1,
      sym__wrapped_shift_expression,
    STATE(274), 1,
      sym__wrapped_assignment_expression,
    STATE(432), 1,
      sym_numeric_operands,
    ACTIONS(143), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(149), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(137), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(147), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(148), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1207] = 44,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      anon_sym_RPAREN,
    ACTIONS(117), 1,
      sym_unary_minus_operator,
    ACTIONS(121), 1,
      sym_relocation_type,
    ACTIONS(127), 1,
      aux_sym_decimal_token1,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    STATE(11), 1,
      sym__block_comment,
    STATE(259), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(260), 1,
      sym__equality_expression,
    STATE(261), 1,
      sym__wrapped_equality_expression,
    STATE(262), 1,
      sym__relational_expression,
    STATE(263), 1,
      sym__wrapped_relational_expression,
    STATE(264), 1,
      sym__shift_expression,
    STATE(265), 1,
      sym__wrapped_shift_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__multiplicative_expression,
    STATE(269), 1,
      sym__wrapped_multiplicative_expression,
    STATE(270), 1,
      sym__simple_expression,
    STATE(272), 1,
      sym__assignment_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(275), 1,
      sym__wrapped_logical_or_expression,
    STATE(276), 1,
      sym__logical_and_expression,
    STATE(277), 1,
      sym_symbol,
    STATE(278), 1,
      sym__wrapped_logical_and_expression,
    STATE(279), 1,
      sym__bitwise_or_expression,
    STATE(280), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(281), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(299), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_additive_expression,
    STATE(417), 1,
      sym__wrapped_assignment_expression,
    STATE(437), 1,
      sym__operand,
    STATE(475), 1,
      sym_string,
    STATE(502), 1,
      sym_operands,
    ACTIONS(119), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(125), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(159), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(123), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(315), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1351] = 38,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_unary_minus_operator,
    ACTIONS(145), 1,
      sym_relocation_type,
    ACTIONS(151), 1,
      aux_sym_decimal_token1,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(12), 1,
      sym__block_comment,
    STATE(112), 1,
      sym__relational_expression,
    STATE(115), 1,
      sym__assignment_expression,
    STATE(116), 1,
      sym__logical_or_expression,
    STATE(117), 1,
      sym__wrapped_logical_or_expression,
    STATE(118), 1,
      sym__logical_and_expression,
    STATE(119), 1,
      sym__wrapped_logical_and_expression,
    STATE(120), 1,
      sym__bitwise_or_expression,
    STATE(121), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(122), 1,
      sym__bitwise_xor_expression,
    STATE(123), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(125), 1,
      sym__bitwise_and_expression,
    STATE(126), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(127), 1,
      sym__equality_expression,
    STATE(128), 1,
      sym__wrapped_equality_expression,
    STATE(130), 1,
      sym__wrapped_relational_expression,
    STATE(131), 1,
      sym__shift_expression,
    STATE(133), 1,
      sym__additive_expression,
    STATE(134), 1,
      sym__wrapped_additive_expression,
    STATE(135), 1,
      sym__multiplicative_expression,
    STATE(137), 1,
      sym__wrapped_multiplicative_expression,
    STATE(138), 1,
      sym__simple_expression,
    STATE(158), 1,
      sym__wrapped_shift_expression,
    STATE(364), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(143), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(149), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(147), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    ACTIONS(161), 5,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    STATE(148), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1483] = 43,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym_unary_minus_operator,
    ACTIONS(121), 1,
      sym_relocation_type,
    ACTIONS(127), 1,
      aux_sym_decimal_token1,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    STATE(13), 1,
      sym__block_comment,
    STATE(259), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(260), 1,
      sym__equality_expression,
    STATE(261), 1,
      sym__wrapped_equality_expression,
    STATE(262), 1,
      sym__relational_expression,
    STATE(263), 1,
      sym__wrapped_relational_expression,
    STATE(264), 1,
      sym__shift_expression,
    STATE(265), 1,
      sym__wrapped_shift_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__multiplicative_expression,
    STATE(269), 1,
      sym__wrapped_multiplicative_expression,
    STATE(270), 1,
      sym__simple_expression,
    STATE(272), 1,
      sym__assignment_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(275), 1,
      sym__wrapped_logical_or_expression,
    STATE(276), 1,
      sym__logical_and_expression,
    STATE(278), 1,
      sym__wrapped_logical_and_expression,
    STATE(279), 1,
      sym__bitwise_or_expression,
    STATE(280), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(281), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(299), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym_symbol,
    STATE(316), 1,
      sym__wrapped_additive_expression,
    STATE(414), 1,
      sym__wrapped_assignment_expression,
    STATE(437), 1,
      sym__operand,
    STATE(475), 1,
      sym_string,
    STATE(511), 1,
      sym_operands,
    ACTIONS(119), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(125), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(163), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(123), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(315), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1624] = 43,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym_unary_minus_operator,
    ACTIONS(121), 1,
      sym_relocation_type,
    ACTIONS(127), 1,
      aux_sym_decimal_token1,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    STATE(14), 1,
      sym__block_comment,
    STATE(259), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(260), 1,
      sym__equality_expression,
    STATE(261), 1,
      sym__wrapped_equality_expression,
    STATE(262), 1,
      sym__relational_expression,
    STATE(263), 1,
      sym__wrapped_relational_expression,
    STATE(264), 1,
      sym__shift_expression,
    STATE(265), 1,
      sym__wrapped_shift_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__multiplicative_expression,
    STATE(269), 1,
      sym__wrapped_multiplicative_expression,
    STATE(270), 1,
      sym__simple_expression,
    STATE(272), 1,
      sym__assignment_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(275), 1,
      sym__wrapped_logical_or_expression,
    STATE(276), 1,
      sym__logical_and_expression,
    STATE(278), 1,
      sym__wrapped_logical_and_expression,
    STATE(279), 1,
      sym__bitwise_or_expression,
    STATE(280), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(281), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(299), 1,
      sym__bitwise_and_expression,
    STATE(302), 1,
      sym_symbol,
    STATE(316), 1,
      sym__wrapped_additive_expression,
    STATE(418), 1,
      sym__wrapped_assignment_expression,
    STATE(437), 1,
      sym__operand,
    STATE(475), 1,
      sym_string,
    STATE(510), 1,
      sym_operands,
    ACTIONS(119), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(125), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(165), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(123), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(315), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1765] = 43,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym_unary_minus_operator,
    ACTIONS(121), 1,
      sym_relocation_type,
    ACTIONS(127), 1,
      aux_sym_decimal_token1,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    STATE(15), 1,
      sym__block_comment,
    STATE(259), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(260), 1,
      sym__equality_expression,
    STATE(261), 1,
      sym__wrapped_equality_expression,
    STATE(262), 1,
      sym__relational_expression,
    STATE(263), 1,
      sym__wrapped_relational_expression,
    STATE(264), 1,
      sym__shift_expression,
    STATE(265), 1,
      sym__wrapped_shift_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__multiplicative_expression,
    STATE(269), 1,
      sym__wrapped_multiplicative_expression,
    STATE(270), 1,
      sym__simple_expression,
    STATE(272), 1,
      sym__assignment_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(275), 1,
      sym__wrapped_logical_or_expression,
    STATE(276), 1,
      sym__logical_and_expression,
    STATE(278), 1,
      sym__wrapped_logical_and_expression,
    STATE(279), 1,
      sym__bitwise_or_expression,
    STATE(280), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(281), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(287), 1,
      sym_symbol,
    STATE(299), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_additive_expression,
    STATE(414), 1,
      sym__wrapped_assignment_expression,
    STATE(437), 1,
      sym__operand,
    STATE(475), 1,
      sym_string,
    STATE(516), 1,
      sym_operands,
    ACTIONS(119), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(125), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(167), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(123), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(315), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1906] = 43,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym_unary_minus_operator,
    ACTIONS(121), 1,
      sym_relocation_type,
    ACTIONS(127), 1,
      aux_sym_decimal_token1,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    STATE(16), 1,
      sym__block_comment,
    STATE(259), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(260), 1,
      sym__equality_expression,
    STATE(261), 1,
      sym__wrapped_equality_expression,
    STATE(262), 1,
      sym__relational_expression,
    STATE(263), 1,
      sym__wrapped_relational_expression,
    STATE(264), 1,
      sym__shift_expression,
    STATE(265), 1,
      sym__wrapped_shift_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__multiplicative_expression,
    STATE(269), 1,
      sym__wrapped_multiplicative_expression,
    STATE(270), 1,
      sym__simple_expression,
    STATE(272), 1,
      sym__assignment_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(275), 1,
      sym__wrapped_logical_or_expression,
    STATE(276), 1,
      sym__logical_and_expression,
    STATE(278), 1,
      sym__wrapped_logical_and_expression,
    STATE(279), 1,
      sym__bitwise_or_expression,
    STATE(280), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(281), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(299), 1,
      sym__bitwise_and_expression,
    STATE(303), 1,
      sym_symbol,
    STATE(316), 1,
      sym__wrapped_additive_expression,
    STATE(414), 1,
      sym__wrapped_assignment_expression,
    STATE(437), 1,
      sym__operand,
    STATE(475), 1,
      sym_string,
    STATE(524), 1,
      sym_operands,
    ACTIONS(119), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(125), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(169), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(123), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(315), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2047] = 41,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym_unary_minus_operator,
    ACTIONS(121), 1,
      sym_relocation_type,
    ACTIONS(127), 1,
      aux_sym_decimal_token1,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    STATE(17), 1,
      sym__block_comment,
    STATE(259), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(260), 1,
      sym__equality_expression,
    STATE(261), 1,
      sym__wrapped_equality_expression,
    STATE(262), 1,
      sym__relational_expression,
    STATE(263), 1,
      sym__wrapped_relational_expression,
    STATE(264), 1,
      sym__shift_expression,
    STATE(265), 1,
      sym__wrapped_shift_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__multiplicative_expression,
    STATE(269), 1,
      sym__wrapped_multiplicative_expression,
    STATE(270), 1,
      sym__simple_expression,
    STATE(272), 1,
      sym__assignment_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(275), 1,
      sym__wrapped_logical_or_expression,
    STATE(276), 1,
      sym__logical_and_expression,
    STATE(278), 1,
      sym__wrapped_logical_and_expression,
    STATE(279), 1,
      sym__bitwise_or_expression,
    STATE(280), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(281), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(299), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_additive_expression,
    STATE(414), 1,
      sym__wrapped_assignment_expression,
    STATE(470), 1,
      sym__operand,
    STATE(475), 1,
      sym_string,
    ACTIONS(119), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(125), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(123), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(315), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [2184] = 41,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym_unary_minus_operator,
    ACTIONS(121), 1,
      sym_relocation_type,
    ACTIONS(127), 1,
      aux_sym_decimal_token1,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    STATE(18), 1,
      sym__block_comment,
    STATE(259), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(260), 1,
      sym__equality_expression,
    STATE(261), 1,
      sym__wrapped_equality_expression,
    STATE(262), 1,
      sym__relational_expression,
    STATE(263), 1,
      sym__wrapped_relational_expression,
    STATE(264), 1,
      sym__shift_expression,
    STATE(265), 1,
      sym__wrapped_shift_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__multiplicative_expression,
    STATE(269), 1,
      sym__wrapped_multiplicative_expression,
    STATE(270), 1,
      sym__simple_expression,
    STATE(272), 1,
      sym__assignment_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(275), 1,
      sym__wrapped_logical_or_expression,
    STATE(276), 1,
      sym__logical_and_expression,
    STATE(278), 1,
      sym__wrapped_logical_and_expression,
    STATE(279), 1,
      sym__bitwise_or_expression,
    STATE(280), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(281), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(299), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_additive_expression,
    STATE(414), 1,
      sym__wrapped_assignment_expression,
    STATE(470), 1,
      sym__operand,
    STATE(475), 1,
      sym_string,
    ACTIONS(119), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(125), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(123), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(315), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [2321] = 43,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym_unary_minus_operator,
    ACTIONS(121), 1,
      sym_relocation_type,
    ACTIONS(127), 1,
      aux_sym_decimal_token1,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    STATE(19), 1,
      sym__block_comment,
    STATE(259), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(260), 1,
      sym__equality_expression,
    STATE(261), 1,
      sym__wrapped_equality_expression,
    STATE(262), 1,
      sym__relational_expression,
    STATE(263), 1,
      sym__wrapped_relational_expression,
    STATE(264), 1,
      sym__shift_expression,
    STATE(265), 1,
      sym__wrapped_shift_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__multiplicative_expression,
    STATE(269), 1,
      sym__wrapped_multiplicative_expression,
    STATE(270), 1,
      sym__simple_expression,
    STATE(272), 1,
      sym__assignment_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(275), 1,
      sym__wrapped_logical_or_expression,
    STATE(276), 1,
      sym__logical_and_expression,
    STATE(278), 1,
      sym__wrapped_logical_and_expression,
    STATE(279), 1,
      sym__bitwise_or_expression,
    STATE(280), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(281), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(299), 1,
      sym__bitwise_and_expression,
    STATE(305), 1,
      sym_symbol,
    STATE(316), 1,
      sym__wrapped_additive_expression,
    STATE(419), 1,
      sym__wrapped_assignment_expression,
    STATE(437), 1,
      sym__operand,
    STATE(475), 1,
      sym_string,
    STATE(506), 1,
      sym_operands,
    ACTIONS(119), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(125), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(171), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(123), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(315), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2462] = 43,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym_unary_minus_operator,
    ACTIONS(121), 1,
      sym_relocation_type,
    ACTIONS(127), 1,
      aux_sym_decimal_token1,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    STATE(20), 1,
      sym__block_comment,
    STATE(259), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(260), 1,
      sym__equality_expression,
    STATE(261), 1,
      sym__wrapped_equality_expression,
    STATE(262), 1,
      sym__relational_expression,
    STATE(263), 1,
      sym__wrapped_relational_expression,
    STATE(264), 1,
      sym__shift_expression,
    STATE(265), 1,
      sym__wrapped_shift_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__multiplicative_expression,
    STATE(269), 1,
      sym__wrapped_multiplicative_expression,
    STATE(270), 1,
      sym__simple_expression,
    STATE(272), 1,
      sym__assignment_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(275), 1,
      sym__wrapped_logical_or_expression,
    STATE(276), 1,
      sym__logical_and_expression,
    STATE(278), 1,
      sym__wrapped_logical_and_expression,
    STATE(279), 1,
      sym__bitwise_or_expression,
    STATE(280), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(281), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(299), 1,
      sym__bitwise_and_expression,
    STATE(306), 1,
      sym_symbol,
    STATE(316), 1,
      sym__wrapped_additive_expression,
    STATE(414), 1,
      sym__wrapped_assignment_expression,
    STATE(437), 1,
      sym__operand,
    STATE(475), 1,
      sym_string,
    STATE(526), 1,
      sym_operands,
    ACTIONS(119), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(125), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(173), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(123), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(315), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2603] = 43,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym_unary_minus_operator,
    ACTIONS(121), 1,
      sym_relocation_type,
    ACTIONS(127), 1,
      aux_sym_decimal_token1,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    STATE(21), 1,
      sym__block_comment,
    STATE(259), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(260), 1,
      sym__equality_expression,
    STATE(261), 1,
      sym__wrapped_equality_expression,
    STATE(262), 1,
      sym__relational_expression,
    STATE(263), 1,
      sym__wrapped_relational_expression,
    STATE(264), 1,
      sym__shift_expression,
    STATE(265), 1,
      sym__wrapped_shift_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__multiplicative_expression,
    STATE(269), 1,
      sym__wrapped_multiplicative_expression,
    STATE(270), 1,
      sym__simple_expression,
    STATE(272), 1,
      sym__assignment_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(275), 1,
      sym__wrapped_logical_or_expression,
    STATE(276), 1,
      sym__logical_and_expression,
    STATE(278), 1,
      sym__wrapped_logical_and_expression,
    STATE(279), 1,
      sym__bitwise_or_expression,
    STATE(280), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(281), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(299), 1,
      sym__bitwise_and_expression,
    STATE(308), 1,
      sym_symbol,
    STATE(316), 1,
      sym__wrapped_additive_expression,
    STATE(421), 1,
      sym__wrapped_assignment_expression,
    STATE(437), 1,
      sym__operand,
    STATE(475), 1,
      sym_string,
    STATE(522), 1,
      sym_operands,
    ACTIONS(119), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(125), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(175), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(123), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(315), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2744] = 43,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym_unary_minus_operator,
    ACTIONS(121), 1,
      sym_relocation_type,
    ACTIONS(127), 1,
      aux_sym_decimal_token1,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    STATE(22), 1,
      sym__block_comment,
    STATE(259), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(260), 1,
      sym__equality_expression,
    STATE(261), 1,
      sym__wrapped_equality_expression,
    STATE(262), 1,
      sym__relational_expression,
    STATE(263), 1,
      sym__wrapped_relational_expression,
    STATE(264), 1,
      sym__shift_expression,
    STATE(265), 1,
      sym__wrapped_shift_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__multiplicative_expression,
    STATE(269), 1,
      sym__wrapped_multiplicative_expression,
    STATE(270), 1,
      sym__simple_expression,
    STATE(272), 1,
      sym__assignment_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(275), 1,
      sym__wrapped_logical_or_expression,
    STATE(276), 1,
      sym__logical_and_expression,
    STATE(278), 1,
      sym__wrapped_logical_and_expression,
    STATE(279), 1,
      sym__bitwise_or_expression,
    STATE(280), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(281), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(299), 1,
      sym__bitwise_and_expression,
    STATE(311), 1,
      sym_symbol,
    STATE(316), 1,
      sym__wrapped_additive_expression,
    STATE(422), 1,
      sym__wrapped_assignment_expression,
    STATE(437), 1,
      sym__operand,
    STATE(475), 1,
      sym_string,
    STATE(537), 1,
      sym_operands,
    ACTIONS(119), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(125), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(177), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(123), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(315), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2885] = 43,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym_unary_minus_operator,
    ACTIONS(121), 1,
      sym_relocation_type,
    ACTIONS(127), 1,
      aux_sym_decimal_token1,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    STATE(23), 1,
      sym__block_comment,
    STATE(259), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(260), 1,
      sym__equality_expression,
    STATE(261), 1,
      sym__wrapped_equality_expression,
    STATE(262), 1,
      sym__relational_expression,
    STATE(263), 1,
      sym__wrapped_relational_expression,
    STATE(264), 1,
      sym__shift_expression,
    STATE(265), 1,
      sym__wrapped_shift_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__multiplicative_expression,
    STATE(269), 1,
      sym__wrapped_multiplicative_expression,
    STATE(270), 1,
      sym__simple_expression,
    STATE(272), 1,
      sym__assignment_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(275), 1,
      sym__wrapped_logical_or_expression,
    STATE(276), 1,
      sym__logical_and_expression,
    STATE(277), 1,
      sym_symbol,
    STATE(278), 1,
      sym__wrapped_logical_and_expression,
    STATE(279), 1,
      sym__bitwise_or_expression,
    STATE(280), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(281), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(299), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_additive_expression,
    STATE(417), 1,
      sym__wrapped_assignment_expression,
    STATE(437), 1,
      sym__operand,
    STATE(475), 1,
      sym_string,
    STATE(505), 1,
      sym_operands,
    ACTIONS(119), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(125), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(159), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(123), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(315), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3026] = 43,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym_unary_minus_operator,
    ACTIONS(121), 1,
      sym_relocation_type,
    ACTIONS(127), 1,
      aux_sym_decimal_token1,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    STATE(24), 1,
      sym__block_comment,
    STATE(259), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(260), 1,
      sym__equality_expression,
    STATE(261), 1,
      sym__wrapped_equality_expression,
    STATE(262), 1,
      sym__relational_expression,
    STATE(263), 1,
      sym__wrapped_relational_expression,
    STATE(264), 1,
      sym__shift_expression,
    STATE(265), 1,
      sym__wrapped_shift_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__multiplicative_expression,
    STATE(269), 1,
      sym__wrapped_multiplicative_expression,
    STATE(270), 1,
      sym__simple_expression,
    STATE(272), 1,
      sym__assignment_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(275), 1,
      sym__wrapped_logical_or_expression,
    STATE(276), 1,
      sym__logical_and_expression,
    STATE(278), 1,
      sym__wrapped_logical_and_expression,
    STATE(279), 1,
      sym__bitwise_or_expression,
    STATE(280), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(281), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(299), 1,
      sym__bitwise_and_expression,
    STATE(309), 1,
      sym_symbol,
    STATE(316), 1,
      sym__wrapped_additive_expression,
    STATE(414), 1,
      sym__wrapped_assignment_expression,
    STATE(437), 1,
      sym__operand,
    STATE(475), 1,
      sym_string,
    STATE(500), 1,
      sym_operands,
    ACTIONS(119), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(125), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(179), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(123), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(315), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3167] = 43,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym_unary_minus_operator,
    ACTIONS(121), 1,
      sym_relocation_type,
    ACTIONS(127), 1,
      aux_sym_decimal_token1,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    STATE(25), 1,
      sym__block_comment,
    STATE(259), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(260), 1,
      sym__equality_expression,
    STATE(261), 1,
      sym__wrapped_equality_expression,
    STATE(262), 1,
      sym__relational_expression,
    STATE(263), 1,
      sym__wrapped_relational_expression,
    STATE(264), 1,
      sym__shift_expression,
    STATE(265), 1,
      sym__wrapped_shift_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__multiplicative_expression,
    STATE(269), 1,
      sym__wrapped_multiplicative_expression,
    STATE(270), 1,
      sym__simple_expression,
    STATE(272), 1,
      sym__assignment_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(275), 1,
      sym__wrapped_logical_or_expression,
    STATE(276), 1,
      sym__logical_and_expression,
    STATE(278), 1,
      sym__wrapped_logical_and_expression,
    STATE(279), 1,
      sym__bitwise_or_expression,
    STATE(280), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(281), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(299), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym_symbol,
    STATE(316), 1,
      sym__wrapped_additive_expression,
    STATE(414), 1,
      sym__wrapped_assignment_expression,
    STATE(437), 1,
      sym__operand,
    STATE(475), 1,
      sym_string,
    STATE(508), 1,
      sym_operands,
    ACTIONS(119), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(125), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(181), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(123), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(315), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3308] = 43,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym_unary_minus_operator,
    ACTIONS(121), 1,
      sym_relocation_type,
    ACTIONS(127), 1,
      aux_sym_decimal_token1,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    STATE(26), 1,
      sym__block_comment,
    STATE(259), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(260), 1,
      sym__equality_expression,
    STATE(261), 1,
      sym__wrapped_equality_expression,
    STATE(262), 1,
      sym__relational_expression,
    STATE(263), 1,
      sym__wrapped_relational_expression,
    STATE(264), 1,
      sym__shift_expression,
    STATE(265), 1,
      sym__wrapped_shift_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__multiplicative_expression,
    STATE(269), 1,
      sym__wrapped_multiplicative_expression,
    STATE(270), 1,
      sym__simple_expression,
    STATE(272), 1,
      sym__assignment_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(275), 1,
      sym__wrapped_logical_or_expression,
    STATE(276), 1,
      sym__logical_and_expression,
    STATE(278), 1,
      sym__wrapped_logical_and_expression,
    STATE(279), 1,
      sym__bitwise_or_expression,
    STATE(280), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(281), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(299), 1,
      sym__bitwise_and_expression,
    STATE(313), 1,
      sym_symbol,
    STATE(316), 1,
      sym__wrapped_additive_expression,
    STATE(421), 1,
      sym__wrapped_assignment_expression,
    STATE(437), 1,
      sym__operand,
    STATE(475), 1,
      sym_string,
    STATE(509), 1,
      sym_operands,
    ACTIONS(119), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(125), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(183), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(123), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(315), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3449] = 42,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      sym_unary_minus_operator,
    ACTIONS(191), 1,
      sym_relocation_type,
    ACTIONS(197), 1,
      aux_sym_decimal_token1,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    ACTIONS(203), 1,
      sym_macro_variable,
    ACTIONS(205), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(207), 1,
      aux_sym_symbol_token1,
    STATE(27), 1,
      sym__block_comment,
    STATE(255), 1,
      sym_address,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(334), 1,
      sym__simple_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(351), 1,
      sym__bitwise_and_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(353), 1,
      sym__equality_expression,
    STATE(354), 1,
      sym__wrapped_equality_expression,
    STATE(355), 1,
      sym__relational_expression,
    STATE(356), 1,
      sym__wrapped_relational_expression,
    STATE(357), 1,
      sym__shift_expression,
    STATE(358), 1,
      sym__wrapped_shift_expression,
    STATE(359), 1,
      sym__additive_expression,
    STATE(360), 1,
      sym__wrapped_additive_expression,
    STATE(361), 1,
      sym__multiplicative_expression,
    STATE(375), 1,
      sym_string,
    STATE(411), 1,
      sym_string_operands,
    STATE(490), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(189), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(195), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(193), 4,
      sym_octal,
      sym_float,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(317), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
  [3587] = 40,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(87), 1,
      sym_unary_minus_operator,
    ACTIONS(91), 1,
      sym_relocation_type,
    ACTIONS(97), 1,
      aux_sym_decimal_token1,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(105), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym__block_comment,
    STATE(206), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(211), 1,
      sym__assignment_expression,
    STATE(212), 1,
      sym__logical_or_expression,
    STATE(213), 1,
      sym__wrapped_logical_or_expression,
    STATE(214), 1,
      sym__logical_and_expression,
    STATE(215), 1,
      sym__wrapped_logical_and_expression,
    STATE(216), 1,
      sym__bitwise_or_expression,
    STATE(217), 1,
      sym__bitwise_xor_expression,
    STATE(218), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(219), 1,
      sym__bitwise_and_expression,
    STATE(220), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(221), 1,
      sym__equality_expression,
    STATE(222), 1,
      sym__wrapped_equality_expression,
    STATE(223), 1,
      sym__relational_expression,
    STATE(224), 1,
      sym__wrapped_relational_expression,
    STATE(225), 1,
      sym__shift_expression,
    STATE(226), 1,
      sym__wrapped_shift_expression,
    STATE(227), 1,
      sym__additive_expression,
    STATE(228), 1,
      sym__wrapped_additive_expression,
    STATE(229), 1,
      sym__multiplicative_expression,
    STATE(231), 1,
      sym__simple_expression,
    STATE(251), 1,
      sym__wrapped_multiplicative_expression,
    STATE(376), 1,
      sym__wrapped_assignment_expression,
    STATE(403), 1,
      sym__operand,
    STATE(407), 1,
      sym_string,
    ACTIONS(89), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(95), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(93), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(207), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3721] = 40,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym_unary_minus_operator,
    ACTIONS(121), 1,
      sym_relocation_type,
    ACTIONS(127), 1,
      aux_sym_decimal_token1,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    STATE(29), 1,
      sym__block_comment,
    STATE(259), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(260), 1,
      sym__equality_expression,
    STATE(261), 1,
      sym__wrapped_equality_expression,
    STATE(262), 1,
      sym__relational_expression,
    STATE(263), 1,
      sym__wrapped_relational_expression,
    STATE(264), 1,
      sym__shift_expression,
    STATE(265), 1,
      sym__wrapped_shift_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__multiplicative_expression,
    STATE(269), 1,
      sym__wrapped_multiplicative_expression,
    STATE(270), 1,
      sym__simple_expression,
    STATE(272), 1,
      sym__assignment_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(275), 1,
      sym__wrapped_logical_or_expression,
    STATE(276), 1,
      sym__logical_and_expression,
    STATE(278), 1,
      sym__wrapped_logical_and_expression,
    STATE(279), 1,
      sym__bitwise_or_expression,
    STATE(280), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(281), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(299), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_additive_expression,
    STATE(414), 1,
      sym__wrapped_assignment_expression,
    STATE(470), 1,
      sym__operand,
    STATE(475), 1,
      sym_string,
    ACTIONS(119), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(125), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(123), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(315), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3855] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(187), 1,
      sym_unary_minus_operator,
    ACTIONS(191), 1,
      sym_relocation_type,
    ACTIONS(197), 1,
      aux_sym_decimal_token1,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(207), 1,
      aux_sym_symbol_token1,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(30), 1,
      sym__block_comment,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(334), 1,
      sym__simple_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(351), 1,
      sym__bitwise_and_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(353), 1,
      sym__equality_expression,
    STATE(354), 1,
      sym__wrapped_equality_expression,
    STATE(355), 1,
      sym__relational_expression,
    STATE(356), 1,
      sym__wrapped_relational_expression,
    STATE(357), 1,
      sym__shift_expression,
    STATE(358), 1,
      sym__wrapped_shift_expression,
    STATE(359), 1,
      sym__additive_expression,
    STATE(360), 1,
      sym__wrapped_additive_expression,
    STATE(361), 1,
      sym__multiplicative_expression,
    STATE(497), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(189), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(195), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(193), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(317), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3980] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(87), 1,
      sym_unary_minus_operator,
    ACTIONS(91), 1,
      sym_relocation_type,
    ACTIONS(97), 1,
      aux_sym_decimal_token1,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(105), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym__block_comment,
    STATE(227), 1,
      sym__additive_expression,
    STATE(229), 1,
      sym__multiplicative_expression,
    STATE(231), 1,
      sym__simple_expression,
    STATE(244), 1,
      sym__wrapped_additive_expression,
    STATE(251), 1,
      sym__wrapped_multiplicative_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(351), 1,
      sym__bitwise_and_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(353), 1,
      sym__equality_expression,
    STATE(354), 1,
      sym__wrapped_equality_expression,
    STATE(355), 1,
      sym__relational_expression,
    STATE(356), 1,
      sym__wrapped_relational_expression,
    STATE(357), 1,
      sym__shift_expression,
    STATE(358), 1,
      sym__wrapped_shift_expression,
    STATE(494), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(89), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(95), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(93), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(207), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4105] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(87), 1,
      sym_unary_minus_operator,
    ACTIONS(91), 1,
      sym_relocation_type,
    ACTIONS(97), 1,
      aux_sym_decimal_token1,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(105), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym__block_comment,
    STATE(229), 1,
      sym__multiplicative_expression,
    STATE(231), 1,
      sym__simple_expression,
    STATE(245), 1,
      sym__wrapped_multiplicative_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(351), 1,
      sym__bitwise_and_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(353), 1,
      sym__equality_expression,
    STATE(354), 1,
      sym__wrapped_equality_expression,
    STATE(355), 1,
      sym__relational_expression,
    STATE(356), 1,
      sym__wrapped_relational_expression,
    STATE(357), 1,
      sym__shift_expression,
    STATE(358), 1,
      sym__wrapped_shift_expression,
    STATE(359), 1,
      sym__additive_expression,
    STATE(360), 1,
      sym__wrapped_additive_expression,
    STATE(494), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(89), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(95), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(93), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(207), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4230] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(87), 1,
      sym_unary_minus_operator,
    ACTIONS(91), 1,
      sym_relocation_type,
    ACTIONS(97), 1,
      aux_sym_decimal_token1,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(105), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym__block_comment,
    STATE(246), 1,
      sym__simple_expression,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(351), 1,
      sym__bitwise_and_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(353), 1,
      sym__equality_expression,
    STATE(354), 1,
      sym__wrapped_equality_expression,
    STATE(355), 1,
      sym__relational_expression,
    STATE(356), 1,
      sym__wrapped_relational_expression,
    STATE(357), 1,
      sym__shift_expression,
    STATE(358), 1,
      sym__wrapped_shift_expression,
    STATE(359), 1,
      sym__additive_expression,
    STATE(360), 1,
      sym__wrapped_additive_expression,
    STATE(361), 1,
      sym__multiplicative_expression,
    STATE(494), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(89), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(95), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(93), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(207), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4355] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_unary_minus_operator,
    ACTIONS(145), 1,
      sym_relocation_type,
    ACTIONS(151), 1,
      aux_sym_decimal_token1,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(34), 1,
      sym__block_comment,
    STATE(112), 1,
      sym__relational_expression,
    STATE(115), 1,
      sym__assignment_expression,
    STATE(116), 1,
      sym__logical_or_expression,
    STATE(117), 1,
      sym__wrapped_logical_or_expression,
    STATE(118), 1,
      sym__logical_and_expression,
    STATE(119), 1,
      sym__wrapped_logical_and_expression,
    STATE(120), 1,
      sym__bitwise_or_expression,
    STATE(121), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(122), 1,
      sym__bitwise_xor_expression,
    STATE(123), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(125), 1,
      sym__bitwise_and_expression,
    STATE(126), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(127), 1,
      sym__equality_expression,
    STATE(128), 1,
      sym__wrapped_equality_expression,
    STATE(130), 1,
      sym__wrapped_relational_expression,
    STATE(131), 1,
      sym__shift_expression,
    STATE(133), 1,
      sym__additive_expression,
    STATE(134), 1,
      sym__wrapped_additive_expression,
    STATE(135), 1,
      sym__multiplicative_expression,
    STATE(137), 1,
      sym__wrapped_multiplicative_expression,
    STATE(138), 1,
      sym__simple_expression,
    STATE(158), 1,
      sym__wrapped_shift_expression,
    STATE(364), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(143), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(149), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(147), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(148), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4480] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(87), 1,
      sym_unary_minus_operator,
    ACTIONS(91), 1,
      sym_relocation_type,
    ACTIONS(97), 1,
      aux_sym_decimal_token1,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(105), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym__block_comment,
    STATE(206), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(211), 1,
      sym__assignment_expression,
    STATE(212), 1,
      sym__logical_or_expression,
    STATE(213), 1,
      sym__wrapped_logical_or_expression,
    STATE(214), 1,
      sym__logical_and_expression,
    STATE(215), 1,
      sym__wrapped_logical_and_expression,
    STATE(216), 1,
      sym__bitwise_or_expression,
    STATE(217), 1,
      sym__bitwise_xor_expression,
    STATE(218), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(219), 1,
      sym__bitwise_and_expression,
    STATE(220), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(221), 1,
      sym__equality_expression,
    STATE(222), 1,
      sym__wrapped_equality_expression,
    STATE(223), 1,
      sym__relational_expression,
    STATE(224), 1,
      sym__wrapped_relational_expression,
    STATE(225), 1,
      sym__shift_expression,
    STATE(226), 1,
      sym__wrapped_shift_expression,
    STATE(227), 1,
      sym__additive_expression,
    STATE(228), 1,
      sym__wrapped_additive_expression,
    STATE(229), 1,
      sym__multiplicative_expression,
    STATE(231), 1,
      sym__simple_expression,
    STATE(232), 1,
      sym__wrapped_assignment_expression,
    STATE(251), 1,
      sym__wrapped_multiplicative_expression,
    ACTIONS(89), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(95), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(93), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(207), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4605] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_unary_minus_operator,
    ACTIONS(145), 1,
      sym_relocation_type,
    ACTIONS(151), 1,
      aux_sym_decimal_token1,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(36), 1,
      sym__block_comment,
    STATE(112), 1,
      sym__relational_expression,
    STATE(115), 1,
      sym__assignment_expression,
    STATE(116), 1,
      sym__logical_or_expression,
    STATE(117), 1,
      sym__wrapped_logical_or_expression,
    STATE(118), 1,
      sym__logical_and_expression,
    STATE(119), 1,
      sym__wrapped_logical_and_expression,
    STATE(120), 1,
      sym__bitwise_or_expression,
    STATE(121), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(122), 1,
      sym__bitwise_xor_expression,
    STATE(123), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(125), 1,
      sym__bitwise_and_expression,
    STATE(126), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(127), 1,
      sym__equality_expression,
    STATE(128), 1,
      sym__wrapped_equality_expression,
    STATE(130), 1,
      sym__wrapped_relational_expression,
    STATE(131), 1,
      sym__shift_expression,
    STATE(133), 1,
      sym__additive_expression,
    STATE(134), 1,
      sym__wrapped_additive_expression,
    STATE(135), 1,
      sym__multiplicative_expression,
    STATE(137), 1,
      sym__wrapped_multiplicative_expression,
    STATE(138), 1,
      sym__simple_expression,
    STATE(158), 1,
      sym__wrapped_shift_expression,
    STATE(366), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(143), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(149), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(147), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(148), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4730] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym_unary_minus_operator,
    ACTIONS(121), 1,
      sym_relocation_type,
    ACTIONS(127), 1,
      aux_sym_decimal_token1,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    STATE(37), 1,
      sym__block_comment,
    STATE(259), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(260), 1,
      sym__equality_expression,
    STATE(261), 1,
      sym__wrapped_equality_expression,
    STATE(262), 1,
      sym__relational_expression,
    STATE(263), 1,
      sym__wrapped_relational_expression,
    STATE(264), 1,
      sym__shift_expression,
    STATE(265), 1,
      sym__wrapped_shift_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__multiplicative_expression,
    STATE(269), 1,
      sym__wrapped_multiplicative_expression,
    STATE(270), 1,
      sym__simple_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(276), 1,
      sym__logical_and_expression,
    STATE(278), 1,
      sym__wrapped_logical_and_expression,
    STATE(279), 1,
      sym__bitwise_or_expression,
    STATE(280), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(281), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(299), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_additive_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(401), 1,
      sym__wrapped_logical_or_expression,
    STATE(495), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(119), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(125), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(123), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(315), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4855] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym_unary_minus_operator,
    ACTIONS(121), 1,
      sym_relocation_type,
    ACTIONS(127), 1,
      aux_sym_decimal_token1,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    STATE(38), 1,
      sym__block_comment,
    STATE(259), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(260), 1,
      sym__equality_expression,
    STATE(261), 1,
      sym__wrapped_equality_expression,
    STATE(262), 1,
      sym__relational_expression,
    STATE(263), 1,
      sym__wrapped_relational_expression,
    STATE(264), 1,
      sym__shift_expression,
    STATE(265), 1,
      sym__wrapped_shift_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__multiplicative_expression,
    STATE(269), 1,
      sym__wrapped_multiplicative_expression,
    STATE(270), 1,
      sym__simple_expression,
    STATE(276), 1,
      sym__logical_and_expression,
    STATE(279), 1,
      sym__bitwise_or_expression,
    STATE(280), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(281), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(288), 1,
      sym__wrapped_logical_and_expression,
    STATE(299), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_additive_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(495), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(119), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(125), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(123), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(315), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4980] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym_unary_minus_operator,
    ACTIONS(121), 1,
      sym_relocation_type,
    ACTIONS(127), 1,
      aux_sym_decimal_token1,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    STATE(39), 1,
      sym__block_comment,
    STATE(259), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(260), 1,
      sym__equality_expression,
    STATE(261), 1,
      sym__wrapped_equality_expression,
    STATE(262), 1,
      sym__relational_expression,
    STATE(263), 1,
      sym__wrapped_relational_expression,
    STATE(264), 1,
      sym__shift_expression,
    STATE(265), 1,
      sym__wrapped_shift_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__multiplicative_expression,
    STATE(269), 1,
      sym__wrapped_multiplicative_expression,
    STATE(270), 1,
      sym__simple_expression,
    STATE(279), 1,
      sym__bitwise_or_expression,
    STATE(281), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(289), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(299), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_additive_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(495), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(119), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(125), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(123), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(315), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5105] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym_unary_minus_operator,
    ACTIONS(121), 1,
      sym_relocation_type,
    ACTIONS(127), 1,
      aux_sym_decimal_token1,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    STATE(40), 1,
      sym__block_comment,
    STATE(259), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(260), 1,
      sym__equality_expression,
    STATE(261), 1,
      sym__wrapped_equality_expression,
    STATE(262), 1,
      sym__relational_expression,
    STATE(263), 1,
      sym__wrapped_relational_expression,
    STATE(264), 1,
      sym__shift_expression,
    STATE(265), 1,
      sym__wrapped_shift_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__multiplicative_expression,
    STATE(269), 1,
      sym__wrapped_multiplicative_expression,
    STATE(270), 1,
      sym__simple_expression,
    STATE(281), 1,
      sym__bitwise_xor_expression,
    STATE(290), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(299), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_additive_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(495), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(119), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(125), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(123), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(315), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5230] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym_unary_minus_operator,
    ACTIONS(121), 1,
      sym_relocation_type,
    ACTIONS(127), 1,
      aux_sym_decimal_token1,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    STATE(41), 1,
      sym__block_comment,
    STATE(260), 1,
      sym__equality_expression,
    STATE(261), 1,
      sym__wrapped_equality_expression,
    STATE(262), 1,
      sym__relational_expression,
    STATE(263), 1,
      sym__wrapped_relational_expression,
    STATE(264), 1,
      sym__shift_expression,
    STATE(265), 1,
      sym__wrapped_shift_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__multiplicative_expression,
    STATE(269), 1,
      sym__wrapped_multiplicative_expression,
    STATE(270), 1,
      sym__simple_expression,
    STATE(291), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(299), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_additive_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(495), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(119), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(125), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(123), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(315), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5355] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym_unary_minus_operator,
    ACTIONS(121), 1,
      sym_relocation_type,
    ACTIONS(127), 1,
      aux_sym_decimal_token1,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    STATE(42), 1,
      sym__block_comment,
    STATE(260), 1,
      sym__equality_expression,
    STATE(262), 1,
      sym__relational_expression,
    STATE(263), 1,
      sym__wrapped_relational_expression,
    STATE(264), 1,
      sym__shift_expression,
    STATE(265), 1,
      sym__wrapped_shift_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__multiplicative_expression,
    STATE(269), 1,
      sym__wrapped_multiplicative_expression,
    STATE(270), 1,
      sym__simple_expression,
    STATE(292), 1,
      sym__wrapped_equality_expression,
    STATE(316), 1,
      sym__wrapped_additive_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(351), 1,
      sym__bitwise_and_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(495), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(119), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(125), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(123), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(315), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5480] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym_unary_minus_operator,
    ACTIONS(121), 1,
      sym_relocation_type,
    ACTIONS(127), 1,
      aux_sym_decimal_token1,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    STATE(43), 1,
      sym__block_comment,
    STATE(262), 1,
      sym__relational_expression,
    STATE(264), 1,
      sym__shift_expression,
    STATE(265), 1,
      sym__wrapped_shift_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__multiplicative_expression,
    STATE(269), 1,
      sym__wrapped_multiplicative_expression,
    STATE(270), 1,
      sym__simple_expression,
    STATE(293), 1,
      sym__wrapped_relational_expression,
    STATE(316), 1,
      sym__wrapped_additive_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(351), 1,
      sym__bitwise_and_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(353), 1,
      sym__equality_expression,
    STATE(354), 1,
      sym__wrapped_equality_expression,
    STATE(495), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(119), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(125), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(123), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(315), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5605] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym_unary_minus_operator,
    ACTIONS(121), 1,
      sym_relocation_type,
    ACTIONS(127), 1,
      aux_sym_decimal_token1,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    STATE(44), 1,
      sym__block_comment,
    STATE(264), 1,
      sym__shift_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__multiplicative_expression,
    STATE(269), 1,
      sym__wrapped_multiplicative_expression,
    STATE(270), 1,
      sym__simple_expression,
    STATE(294), 1,
      sym__wrapped_shift_expression,
    STATE(316), 1,
      sym__wrapped_additive_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(351), 1,
      sym__bitwise_and_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(353), 1,
      sym__equality_expression,
    STATE(354), 1,
      sym__wrapped_equality_expression,
    STATE(355), 1,
      sym__relational_expression,
    STATE(356), 1,
      sym__wrapped_relational_expression,
    STATE(495), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(119), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(125), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(123), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(315), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5730] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym_unary_minus_operator,
    ACTIONS(121), 1,
      sym_relocation_type,
    ACTIONS(127), 1,
      aux_sym_decimal_token1,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    STATE(45), 1,
      sym__block_comment,
    STATE(266), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__multiplicative_expression,
    STATE(269), 1,
      sym__wrapped_multiplicative_expression,
    STATE(270), 1,
      sym__simple_expression,
    STATE(295), 1,
      sym__wrapped_additive_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(351), 1,
      sym__bitwise_and_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(353), 1,
      sym__equality_expression,
    STATE(354), 1,
      sym__wrapped_equality_expression,
    STATE(355), 1,
      sym__relational_expression,
    STATE(356), 1,
      sym__wrapped_relational_expression,
    STATE(357), 1,
      sym__shift_expression,
    STATE(358), 1,
      sym__wrapped_shift_expression,
    STATE(495), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(119), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(125), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(123), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(315), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5855] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym_unary_minus_operator,
    ACTIONS(121), 1,
      sym_relocation_type,
    ACTIONS(127), 1,
      aux_sym_decimal_token1,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    STATE(46), 1,
      sym__block_comment,
    STATE(268), 1,
      sym__multiplicative_expression,
    STATE(270), 1,
      sym__simple_expression,
    STATE(296), 1,
      sym__wrapped_multiplicative_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(351), 1,
      sym__bitwise_and_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(353), 1,
      sym__equality_expression,
    STATE(354), 1,
      sym__wrapped_equality_expression,
    STATE(355), 1,
      sym__relational_expression,
    STATE(356), 1,
      sym__wrapped_relational_expression,
    STATE(357), 1,
      sym__shift_expression,
    STATE(358), 1,
      sym__wrapped_shift_expression,
    STATE(359), 1,
      sym__additive_expression,
    STATE(360), 1,
      sym__wrapped_additive_expression,
    STATE(495), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(119), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(125), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(123), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(315), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5980] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym_unary_minus_operator,
    ACTIONS(121), 1,
      sym_relocation_type,
    ACTIONS(127), 1,
      aux_sym_decimal_token1,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    STATE(47), 1,
      sym__block_comment,
    STATE(297), 1,
      sym__simple_expression,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(351), 1,
      sym__bitwise_and_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(353), 1,
      sym__equality_expression,
    STATE(354), 1,
      sym__wrapped_equality_expression,
    STATE(355), 1,
      sym__relational_expression,
    STATE(356), 1,
      sym__wrapped_relational_expression,
    STATE(357), 1,
      sym__shift_expression,
    STATE(358), 1,
      sym__wrapped_shift_expression,
    STATE(359), 1,
      sym__additive_expression,
    STATE(360), 1,
      sym__wrapped_additive_expression,
    STATE(361), 1,
      sym__multiplicative_expression,
    STATE(495), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(119), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(125), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(123), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(315), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6105] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_unary_minus_operator,
    ACTIONS(145), 1,
      sym_relocation_type,
    ACTIONS(151), 1,
      aux_sym_decimal_token1,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(48), 1,
      sym__block_comment,
    STATE(112), 1,
      sym__relational_expression,
    STATE(116), 1,
      sym__logical_or_expression,
    STATE(118), 1,
      sym__logical_and_expression,
    STATE(119), 1,
      sym__wrapped_logical_and_expression,
    STATE(120), 1,
      sym__bitwise_or_expression,
    STATE(121), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(122), 1,
      sym__bitwise_xor_expression,
    STATE(123), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(125), 1,
      sym__bitwise_and_expression,
    STATE(126), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(127), 1,
      sym__equality_expression,
    STATE(128), 1,
      sym__wrapped_equality_expression,
    STATE(130), 1,
      sym__wrapped_relational_expression,
    STATE(131), 1,
      sym__shift_expression,
    STATE(133), 1,
      sym__additive_expression,
    STATE(134), 1,
      sym__wrapped_additive_expression,
    STATE(135), 1,
      sym__multiplicative_expression,
    STATE(137), 1,
      sym__wrapped_multiplicative_expression,
    STATE(138), 1,
      sym__simple_expression,
    STATE(158), 1,
      sym__wrapped_shift_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(363), 1,
      sym__wrapped_logical_or_expression,
    STATE(496), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(143), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(149), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(147), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(148), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6230] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_unary_minus_operator,
    ACTIONS(145), 1,
      sym_relocation_type,
    ACTIONS(151), 1,
      aux_sym_decimal_token1,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(49), 1,
      sym__block_comment,
    STATE(112), 1,
      sym__relational_expression,
    STATE(118), 1,
      sym__logical_and_expression,
    STATE(120), 1,
      sym__bitwise_or_expression,
    STATE(121), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(122), 1,
      sym__bitwise_xor_expression,
    STATE(123), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(125), 1,
      sym__bitwise_and_expression,
    STATE(126), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(127), 1,
      sym__equality_expression,
    STATE(128), 1,
      sym__wrapped_equality_expression,
    STATE(130), 1,
      sym__wrapped_relational_expression,
    STATE(131), 1,
      sym__shift_expression,
    STATE(133), 1,
      sym__additive_expression,
    STATE(134), 1,
      sym__wrapped_additive_expression,
    STATE(135), 1,
      sym__multiplicative_expression,
    STATE(137), 1,
      sym__wrapped_multiplicative_expression,
    STATE(138), 1,
      sym__simple_expression,
    STATE(153), 1,
      sym__wrapped_logical_and_expression,
    STATE(158), 1,
      sym__wrapped_shift_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(496), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(143), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(149), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(147), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(148), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6355] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_unary_minus_operator,
    ACTIONS(145), 1,
      sym_relocation_type,
    ACTIONS(151), 1,
      aux_sym_decimal_token1,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(50), 1,
      sym__block_comment,
    STATE(112), 1,
      sym__relational_expression,
    STATE(120), 1,
      sym__bitwise_or_expression,
    STATE(122), 1,
      sym__bitwise_xor_expression,
    STATE(123), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(125), 1,
      sym__bitwise_and_expression,
    STATE(126), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(127), 1,
      sym__equality_expression,
    STATE(128), 1,
      sym__wrapped_equality_expression,
    STATE(130), 1,
      sym__wrapped_relational_expression,
    STATE(131), 1,
      sym__shift_expression,
    STATE(133), 1,
      sym__additive_expression,
    STATE(134), 1,
      sym__wrapped_additive_expression,
    STATE(135), 1,
      sym__multiplicative_expression,
    STATE(137), 1,
      sym__wrapped_multiplicative_expression,
    STATE(138), 1,
      sym__simple_expression,
    STATE(154), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(158), 1,
      sym__wrapped_shift_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(496), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(143), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(149), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(147), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(148), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6480] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_unary_minus_operator,
    ACTIONS(145), 1,
      sym_relocation_type,
    ACTIONS(151), 1,
      aux_sym_decimal_token1,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(51), 1,
      sym__block_comment,
    STATE(112), 1,
      sym__relational_expression,
    STATE(122), 1,
      sym__bitwise_xor_expression,
    STATE(125), 1,
      sym__bitwise_and_expression,
    STATE(126), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(127), 1,
      sym__equality_expression,
    STATE(128), 1,
      sym__wrapped_equality_expression,
    STATE(130), 1,
      sym__wrapped_relational_expression,
    STATE(131), 1,
      sym__shift_expression,
    STATE(133), 1,
      sym__additive_expression,
    STATE(134), 1,
      sym__wrapped_additive_expression,
    STATE(135), 1,
      sym__multiplicative_expression,
    STATE(137), 1,
      sym__wrapped_multiplicative_expression,
    STATE(138), 1,
      sym__simple_expression,
    STATE(155), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(158), 1,
      sym__wrapped_shift_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(496), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(143), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(149), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(147), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(148), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6605] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_unary_minus_operator,
    ACTIONS(145), 1,
      sym_relocation_type,
    ACTIONS(151), 1,
      aux_sym_decimal_token1,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(52), 1,
      sym__block_comment,
    STATE(112), 1,
      sym__relational_expression,
    STATE(125), 1,
      sym__bitwise_and_expression,
    STATE(127), 1,
      sym__equality_expression,
    STATE(128), 1,
      sym__wrapped_equality_expression,
    STATE(130), 1,
      sym__wrapped_relational_expression,
    STATE(131), 1,
      sym__shift_expression,
    STATE(133), 1,
      sym__additive_expression,
    STATE(134), 1,
      sym__wrapped_additive_expression,
    STATE(135), 1,
      sym__multiplicative_expression,
    STATE(137), 1,
      sym__wrapped_multiplicative_expression,
    STATE(138), 1,
      sym__simple_expression,
    STATE(156), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(158), 1,
      sym__wrapped_shift_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(496), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(143), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(149), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(147), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(148), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6730] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_unary_minus_operator,
    ACTIONS(145), 1,
      sym_relocation_type,
    ACTIONS(151), 1,
      aux_sym_decimal_token1,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(53), 1,
      sym__block_comment,
    STATE(112), 1,
      sym__relational_expression,
    STATE(127), 1,
      sym__equality_expression,
    STATE(130), 1,
      sym__wrapped_relational_expression,
    STATE(131), 1,
      sym__shift_expression,
    STATE(133), 1,
      sym__additive_expression,
    STATE(134), 1,
      sym__wrapped_additive_expression,
    STATE(135), 1,
      sym__multiplicative_expression,
    STATE(137), 1,
      sym__wrapped_multiplicative_expression,
    STATE(138), 1,
      sym__simple_expression,
    STATE(157), 1,
      sym__wrapped_equality_expression,
    STATE(158), 1,
      sym__wrapped_shift_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(351), 1,
      sym__bitwise_and_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(496), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(143), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(149), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(147), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(148), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6855] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_unary_minus_operator,
    ACTIONS(145), 1,
      sym_relocation_type,
    ACTIONS(151), 1,
      aux_sym_decimal_token1,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(54), 1,
      sym__block_comment,
    STATE(112), 1,
      sym__relational_expression,
    STATE(129), 1,
      sym__wrapped_relational_expression,
    STATE(131), 1,
      sym__shift_expression,
    STATE(133), 1,
      sym__additive_expression,
    STATE(134), 1,
      sym__wrapped_additive_expression,
    STATE(135), 1,
      sym__multiplicative_expression,
    STATE(137), 1,
      sym__wrapped_multiplicative_expression,
    STATE(138), 1,
      sym__simple_expression,
    STATE(158), 1,
      sym__wrapped_shift_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(351), 1,
      sym__bitwise_and_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(353), 1,
      sym__equality_expression,
    STATE(354), 1,
      sym__wrapped_equality_expression,
    STATE(496), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(143), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(149), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(147), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(148), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6980] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_unary_minus_operator,
    ACTIONS(145), 1,
      sym_relocation_type,
    ACTIONS(151), 1,
      aux_sym_decimal_token1,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(55), 1,
      sym__block_comment,
    STATE(131), 1,
      sym__shift_expression,
    STATE(132), 1,
      sym__wrapped_shift_expression,
    STATE(133), 1,
      sym__additive_expression,
    STATE(134), 1,
      sym__wrapped_additive_expression,
    STATE(135), 1,
      sym__multiplicative_expression,
    STATE(137), 1,
      sym__wrapped_multiplicative_expression,
    STATE(138), 1,
      sym__simple_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(351), 1,
      sym__bitwise_and_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(353), 1,
      sym__equality_expression,
    STATE(354), 1,
      sym__wrapped_equality_expression,
    STATE(355), 1,
      sym__relational_expression,
    STATE(356), 1,
      sym__wrapped_relational_expression,
    STATE(496), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(143), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(149), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(147), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(148), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7105] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_unary_minus_operator,
    ACTIONS(145), 1,
      sym_relocation_type,
    ACTIONS(151), 1,
      aux_sym_decimal_token1,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(56), 1,
      sym__block_comment,
    STATE(124), 1,
      sym__wrapped_additive_expression,
    STATE(133), 1,
      sym__additive_expression,
    STATE(135), 1,
      sym__multiplicative_expression,
    STATE(137), 1,
      sym__wrapped_multiplicative_expression,
    STATE(138), 1,
      sym__simple_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(351), 1,
      sym__bitwise_and_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(353), 1,
      sym__equality_expression,
    STATE(354), 1,
      sym__wrapped_equality_expression,
    STATE(355), 1,
      sym__relational_expression,
    STATE(356), 1,
      sym__wrapped_relational_expression,
    STATE(357), 1,
      sym__shift_expression,
    STATE(358), 1,
      sym__wrapped_shift_expression,
    STATE(496), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(143), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(149), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(147), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(148), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7230] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_unary_minus_operator,
    ACTIONS(145), 1,
      sym_relocation_type,
    ACTIONS(151), 1,
      aux_sym_decimal_token1,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(57), 1,
      sym__block_comment,
    STATE(135), 1,
      sym__multiplicative_expression,
    STATE(138), 1,
      sym__simple_expression,
    STATE(141), 1,
      sym__wrapped_multiplicative_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(351), 1,
      sym__bitwise_and_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(353), 1,
      sym__equality_expression,
    STATE(354), 1,
      sym__wrapped_equality_expression,
    STATE(355), 1,
      sym__relational_expression,
    STATE(356), 1,
      sym__wrapped_relational_expression,
    STATE(357), 1,
      sym__shift_expression,
    STATE(358), 1,
      sym__wrapped_shift_expression,
    STATE(359), 1,
      sym__additive_expression,
    STATE(360), 1,
      sym__wrapped_additive_expression,
    STATE(496), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(143), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(149), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(147), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(148), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7355] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_unary_minus_operator,
    ACTIONS(145), 1,
      sym_relocation_type,
    ACTIONS(151), 1,
      aux_sym_decimal_token1,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(58), 1,
      sym__block_comment,
    STATE(142), 1,
      sym__simple_expression,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(351), 1,
      sym__bitwise_and_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(353), 1,
      sym__equality_expression,
    STATE(354), 1,
      sym__wrapped_equality_expression,
    STATE(355), 1,
      sym__relational_expression,
    STATE(356), 1,
      sym__wrapped_relational_expression,
    STATE(357), 1,
      sym__shift_expression,
    STATE(358), 1,
      sym__wrapped_shift_expression,
    STATE(359), 1,
      sym__additive_expression,
    STATE(360), 1,
      sym__wrapped_additive_expression,
    STATE(361), 1,
      sym__multiplicative_expression,
    STATE(496), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(143), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(149), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(147), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(148), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7480] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(187), 1,
      sym_unary_minus_operator,
    ACTIONS(191), 1,
      sym_relocation_type,
    ACTIONS(197), 1,
      aux_sym_decimal_token1,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(207), 1,
      aux_sym_symbol_token1,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      sym__block_comment,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(334), 1,
      sym__simple_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(351), 1,
      sym__bitwise_and_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(353), 1,
      sym__equality_expression,
    STATE(354), 1,
      sym__wrapped_equality_expression,
    STATE(355), 1,
      sym__relational_expression,
    STATE(356), 1,
      sym__wrapped_relational_expression,
    STATE(357), 1,
      sym__shift_expression,
    STATE(358), 1,
      sym__wrapped_shift_expression,
    STATE(359), 1,
      sym__additive_expression,
    STATE(360), 1,
      sym__wrapped_additive_expression,
    STATE(361), 1,
      sym__multiplicative_expression,
    STATE(438), 1,
      sym__wrapped_logical_or_expression,
    STATE(497), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(189), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(195), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(193), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(317), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7605] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(187), 1,
      sym_unary_minus_operator,
    ACTIONS(191), 1,
      sym_relocation_type,
    ACTIONS(197), 1,
      aux_sym_decimal_token1,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(207), 1,
      aux_sym_symbol_token1,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      sym__block_comment,
    STATE(321), 1,
      sym__wrapped_logical_and_expression,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(334), 1,
      sym__simple_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(351), 1,
      sym__bitwise_and_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(353), 1,
      sym__equality_expression,
    STATE(354), 1,
      sym__wrapped_equality_expression,
    STATE(355), 1,
      sym__relational_expression,
    STATE(356), 1,
      sym__wrapped_relational_expression,
    STATE(357), 1,
      sym__shift_expression,
    STATE(358), 1,
      sym__wrapped_shift_expression,
    STATE(359), 1,
      sym__additive_expression,
    STATE(360), 1,
      sym__wrapped_additive_expression,
    STATE(361), 1,
      sym__multiplicative_expression,
    STATE(497), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(189), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(195), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(193), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(317), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7730] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(187), 1,
      sym_unary_minus_operator,
    ACTIONS(191), 1,
      sym_relocation_type,
    ACTIONS(197), 1,
      aux_sym_decimal_token1,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(207), 1,
      aux_sym_symbol_token1,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(61), 1,
      sym__block_comment,
    STATE(322), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(334), 1,
      sym__simple_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(351), 1,
      sym__bitwise_and_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(353), 1,
      sym__equality_expression,
    STATE(354), 1,
      sym__wrapped_equality_expression,
    STATE(355), 1,
      sym__relational_expression,
    STATE(356), 1,
      sym__wrapped_relational_expression,
    STATE(357), 1,
      sym__shift_expression,
    STATE(358), 1,
      sym__wrapped_shift_expression,
    STATE(359), 1,
      sym__additive_expression,
    STATE(360), 1,
      sym__wrapped_additive_expression,
    STATE(361), 1,
      sym__multiplicative_expression,
    STATE(497), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(189), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(195), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(193), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(317), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7855] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(187), 1,
      sym_unary_minus_operator,
    ACTIONS(191), 1,
      sym_relocation_type,
    ACTIONS(197), 1,
      aux_sym_decimal_token1,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(207), 1,
      aux_sym_symbol_token1,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym__block_comment,
    STATE(323), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(334), 1,
      sym__simple_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(351), 1,
      sym__bitwise_and_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(353), 1,
      sym__equality_expression,
    STATE(354), 1,
      sym__wrapped_equality_expression,
    STATE(355), 1,
      sym__relational_expression,
    STATE(356), 1,
      sym__wrapped_relational_expression,
    STATE(357), 1,
      sym__shift_expression,
    STATE(358), 1,
      sym__wrapped_shift_expression,
    STATE(359), 1,
      sym__additive_expression,
    STATE(360), 1,
      sym__wrapped_additive_expression,
    STATE(361), 1,
      sym__multiplicative_expression,
    STATE(497), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(189), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(195), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(193), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(317), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7980] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(187), 1,
      sym_unary_minus_operator,
    ACTIONS(191), 1,
      sym_relocation_type,
    ACTIONS(197), 1,
      aux_sym_decimal_token1,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(207), 1,
      aux_sym_symbol_token1,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym__block_comment,
    STATE(324), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(334), 1,
      sym__simple_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(351), 1,
      sym__bitwise_and_expression,
    STATE(353), 1,
      sym__equality_expression,
    STATE(354), 1,
      sym__wrapped_equality_expression,
    STATE(355), 1,
      sym__relational_expression,
    STATE(356), 1,
      sym__wrapped_relational_expression,
    STATE(357), 1,
      sym__shift_expression,
    STATE(358), 1,
      sym__wrapped_shift_expression,
    STATE(359), 1,
      sym__additive_expression,
    STATE(360), 1,
      sym__wrapped_additive_expression,
    STATE(361), 1,
      sym__multiplicative_expression,
    STATE(497), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(189), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(195), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(193), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(317), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8105] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(187), 1,
      sym_unary_minus_operator,
    ACTIONS(191), 1,
      sym_relocation_type,
    ACTIONS(197), 1,
      aux_sym_decimal_token1,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(207), 1,
      aux_sym_symbol_token1,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym__block_comment,
    STATE(325), 1,
      sym__wrapped_equality_expression,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(334), 1,
      sym__simple_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(351), 1,
      sym__bitwise_and_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(353), 1,
      sym__equality_expression,
    STATE(355), 1,
      sym__relational_expression,
    STATE(356), 1,
      sym__wrapped_relational_expression,
    STATE(357), 1,
      sym__shift_expression,
    STATE(358), 1,
      sym__wrapped_shift_expression,
    STATE(359), 1,
      sym__additive_expression,
    STATE(360), 1,
      sym__wrapped_additive_expression,
    STATE(361), 1,
      sym__multiplicative_expression,
    STATE(497), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(189), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(195), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(193), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(317), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8230] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(187), 1,
      sym_unary_minus_operator,
    ACTIONS(191), 1,
      sym_relocation_type,
    ACTIONS(197), 1,
      aux_sym_decimal_token1,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(207), 1,
      aux_sym_symbol_token1,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(65), 1,
      sym__block_comment,
    STATE(326), 1,
      sym__wrapped_relational_expression,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(334), 1,
      sym__simple_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(351), 1,
      sym__bitwise_and_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(353), 1,
      sym__equality_expression,
    STATE(354), 1,
      sym__wrapped_equality_expression,
    STATE(355), 1,
      sym__relational_expression,
    STATE(357), 1,
      sym__shift_expression,
    STATE(358), 1,
      sym__wrapped_shift_expression,
    STATE(359), 1,
      sym__additive_expression,
    STATE(360), 1,
      sym__wrapped_additive_expression,
    STATE(361), 1,
      sym__multiplicative_expression,
    STATE(497), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(189), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(195), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(193), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(317), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8355] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(187), 1,
      sym_unary_minus_operator,
    ACTIONS(191), 1,
      sym_relocation_type,
    ACTIONS(197), 1,
      aux_sym_decimal_token1,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(207), 1,
      aux_sym_symbol_token1,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(66), 1,
      sym__block_comment,
    STATE(327), 1,
      sym__wrapped_shift_expression,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(334), 1,
      sym__simple_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(351), 1,
      sym__bitwise_and_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(353), 1,
      sym__equality_expression,
    STATE(354), 1,
      sym__wrapped_equality_expression,
    STATE(355), 1,
      sym__relational_expression,
    STATE(356), 1,
      sym__wrapped_relational_expression,
    STATE(357), 1,
      sym__shift_expression,
    STATE(359), 1,
      sym__additive_expression,
    STATE(360), 1,
      sym__wrapped_additive_expression,
    STATE(361), 1,
      sym__multiplicative_expression,
    STATE(497), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(189), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(195), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(193), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(317), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8480] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(187), 1,
      sym_unary_minus_operator,
    ACTIONS(191), 1,
      sym_relocation_type,
    ACTIONS(197), 1,
      aux_sym_decimal_token1,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(207), 1,
      aux_sym_symbol_token1,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(67), 1,
      sym__block_comment,
    STATE(328), 1,
      sym__wrapped_additive_expression,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(334), 1,
      sym__simple_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(351), 1,
      sym__bitwise_and_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(353), 1,
      sym__equality_expression,
    STATE(354), 1,
      sym__wrapped_equality_expression,
    STATE(355), 1,
      sym__relational_expression,
    STATE(356), 1,
      sym__wrapped_relational_expression,
    STATE(357), 1,
      sym__shift_expression,
    STATE(358), 1,
      sym__wrapped_shift_expression,
    STATE(359), 1,
      sym__additive_expression,
    STATE(361), 1,
      sym__multiplicative_expression,
    STATE(497), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(189), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(195), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(193), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(317), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8605] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(187), 1,
      sym_unary_minus_operator,
    ACTIONS(191), 1,
      sym_relocation_type,
    ACTIONS(197), 1,
      aux_sym_decimal_token1,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(207), 1,
      aux_sym_symbol_token1,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym__block_comment,
    STATE(329), 1,
      sym__wrapped_multiplicative_expression,
    STATE(334), 1,
      sym__simple_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(351), 1,
      sym__bitwise_and_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(353), 1,
      sym__equality_expression,
    STATE(354), 1,
      sym__wrapped_equality_expression,
    STATE(355), 1,
      sym__relational_expression,
    STATE(356), 1,
      sym__wrapped_relational_expression,
    STATE(357), 1,
      sym__shift_expression,
    STATE(358), 1,
      sym__wrapped_shift_expression,
    STATE(359), 1,
      sym__additive_expression,
    STATE(360), 1,
      sym__wrapped_additive_expression,
    STATE(361), 1,
      sym__multiplicative_expression,
    STATE(497), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(189), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(195), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(193), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(317), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8730] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(87), 1,
      sym_unary_minus_operator,
    ACTIONS(91), 1,
      sym_relocation_type,
    ACTIONS(97), 1,
      aux_sym_decimal_token1,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(105), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(69), 1,
      sym__block_comment,
    STATE(225), 1,
      sym__shift_expression,
    STATE(227), 1,
      sym__additive_expression,
    STATE(228), 1,
      sym__wrapped_additive_expression,
    STATE(229), 1,
      sym__multiplicative_expression,
    STATE(231), 1,
      sym__simple_expression,
    STATE(243), 1,
      sym__wrapped_shift_expression,
    STATE(251), 1,
      sym__wrapped_multiplicative_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(351), 1,
      sym__bitwise_and_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(353), 1,
      sym__equality_expression,
    STATE(354), 1,
      sym__wrapped_equality_expression,
    STATE(355), 1,
      sym__relational_expression,
    STATE(356), 1,
      sym__wrapped_relational_expression,
    STATE(494), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(89), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(95), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(93), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(207), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8855] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      sym_unary_minus_operator,
    ACTIONS(39), 1,
      sym_relocation_type,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    STATE(70), 1,
      sym__block_comment,
    STATE(161), 1,
      sym__logical_and_expression,
    STATE(162), 1,
      sym__wrapped_logical_and_expression,
    STATE(163), 1,
      sym__bitwise_or_expression,
    STATE(179), 1,
      sym__logical_or_expression,
    STATE(180), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(182), 1,
      sym__bitwise_xor_expression,
    STATE(183), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(184), 1,
      sym__bitwise_and_expression,
    STATE(185), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(186), 1,
      sym__equality_expression,
    STATE(187), 1,
      sym__wrapped_equality_expression,
    STATE(189), 1,
      sym__relational_expression,
    STATE(191), 1,
      sym__wrapped_relational_expression,
    STATE(192), 1,
      sym__shift_expression,
    STATE(193), 1,
      sym__wrapped_shift_expression,
    STATE(194), 1,
      sym__additive_expression,
    STATE(195), 1,
      sym__wrapped_additive_expression,
    STATE(196), 1,
      sym__multiplicative_expression,
    STATE(197), 1,
      sym__wrapped_multiplicative_expression,
    STATE(198), 1,
      sym__simple_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(367), 1,
      sym__wrapped_logical_or_expression,
    STATE(498), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(37), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(43), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(41), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(201), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8980] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      sym_unary_minus_operator,
    ACTIONS(39), 1,
      sym_relocation_type,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    STATE(71), 1,
      sym__block_comment,
    STATE(161), 1,
      sym__logical_and_expression,
    STATE(163), 1,
      sym__bitwise_or_expression,
    STATE(167), 1,
      sym__wrapped_logical_and_expression,
    STATE(180), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(182), 1,
      sym__bitwise_xor_expression,
    STATE(183), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(184), 1,
      sym__bitwise_and_expression,
    STATE(185), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(186), 1,
      sym__equality_expression,
    STATE(187), 1,
      sym__wrapped_equality_expression,
    STATE(189), 1,
      sym__relational_expression,
    STATE(191), 1,
      sym__wrapped_relational_expression,
    STATE(192), 1,
      sym__shift_expression,
    STATE(193), 1,
      sym__wrapped_shift_expression,
    STATE(194), 1,
      sym__additive_expression,
    STATE(195), 1,
      sym__wrapped_additive_expression,
    STATE(196), 1,
      sym__multiplicative_expression,
    STATE(197), 1,
      sym__wrapped_multiplicative_expression,
    STATE(198), 1,
      sym__simple_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(498), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(37), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(43), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(41), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(201), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9105] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      sym_unary_minus_operator,
    ACTIONS(39), 1,
      sym_relocation_type,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    STATE(72), 1,
      sym__block_comment,
    STATE(163), 1,
      sym__bitwise_or_expression,
    STATE(168), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(182), 1,
      sym__bitwise_xor_expression,
    STATE(183), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(184), 1,
      sym__bitwise_and_expression,
    STATE(185), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(186), 1,
      sym__equality_expression,
    STATE(187), 1,
      sym__wrapped_equality_expression,
    STATE(189), 1,
      sym__relational_expression,
    STATE(191), 1,
      sym__wrapped_relational_expression,
    STATE(192), 1,
      sym__shift_expression,
    STATE(193), 1,
      sym__wrapped_shift_expression,
    STATE(194), 1,
      sym__additive_expression,
    STATE(195), 1,
      sym__wrapped_additive_expression,
    STATE(196), 1,
      sym__multiplicative_expression,
    STATE(197), 1,
      sym__wrapped_multiplicative_expression,
    STATE(198), 1,
      sym__simple_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(498), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(37), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(43), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(41), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(201), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9230] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      sym_unary_minus_operator,
    ACTIONS(39), 1,
      sym_relocation_type,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    STATE(73), 1,
      sym__block_comment,
    STATE(169), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(182), 1,
      sym__bitwise_xor_expression,
    STATE(184), 1,
      sym__bitwise_and_expression,
    STATE(185), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(186), 1,
      sym__equality_expression,
    STATE(187), 1,
      sym__wrapped_equality_expression,
    STATE(189), 1,
      sym__relational_expression,
    STATE(191), 1,
      sym__wrapped_relational_expression,
    STATE(192), 1,
      sym__shift_expression,
    STATE(193), 1,
      sym__wrapped_shift_expression,
    STATE(194), 1,
      sym__additive_expression,
    STATE(195), 1,
      sym__wrapped_additive_expression,
    STATE(196), 1,
      sym__multiplicative_expression,
    STATE(197), 1,
      sym__wrapped_multiplicative_expression,
    STATE(198), 1,
      sym__simple_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(498), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(37), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(43), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(41), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(201), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9355] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      sym_unary_minus_operator,
    ACTIONS(39), 1,
      sym_relocation_type,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    STATE(74), 1,
      sym__block_comment,
    STATE(170), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(184), 1,
      sym__bitwise_and_expression,
    STATE(186), 1,
      sym__equality_expression,
    STATE(187), 1,
      sym__wrapped_equality_expression,
    STATE(189), 1,
      sym__relational_expression,
    STATE(191), 1,
      sym__wrapped_relational_expression,
    STATE(192), 1,
      sym__shift_expression,
    STATE(193), 1,
      sym__wrapped_shift_expression,
    STATE(194), 1,
      sym__additive_expression,
    STATE(195), 1,
      sym__wrapped_additive_expression,
    STATE(196), 1,
      sym__multiplicative_expression,
    STATE(197), 1,
      sym__wrapped_multiplicative_expression,
    STATE(198), 1,
      sym__simple_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(498), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(37), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(43), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(41), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(201), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9480] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      sym_unary_minus_operator,
    ACTIONS(39), 1,
      sym_relocation_type,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    STATE(75), 1,
      sym__block_comment,
    STATE(171), 1,
      sym__wrapped_equality_expression,
    STATE(186), 1,
      sym__equality_expression,
    STATE(189), 1,
      sym__relational_expression,
    STATE(191), 1,
      sym__wrapped_relational_expression,
    STATE(192), 1,
      sym__shift_expression,
    STATE(193), 1,
      sym__wrapped_shift_expression,
    STATE(194), 1,
      sym__additive_expression,
    STATE(195), 1,
      sym__wrapped_additive_expression,
    STATE(196), 1,
      sym__multiplicative_expression,
    STATE(197), 1,
      sym__wrapped_multiplicative_expression,
    STATE(198), 1,
      sym__simple_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(351), 1,
      sym__bitwise_and_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(498), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(37), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(43), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(41), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(201), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9605] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      sym_unary_minus_operator,
    ACTIONS(39), 1,
      sym_relocation_type,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    STATE(76), 1,
      sym__block_comment,
    STATE(172), 1,
      sym__wrapped_relational_expression,
    STATE(189), 1,
      sym__relational_expression,
    STATE(192), 1,
      sym__shift_expression,
    STATE(193), 1,
      sym__wrapped_shift_expression,
    STATE(194), 1,
      sym__additive_expression,
    STATE(195), 1,
      sym__wrapped_additive_expression,
    STATE(196), 1,
      sym__multiplicative_expression,
    STATE(197), 1,
      sym__wrapped_multiplicative_expression,
    STATE(198), 1,
      sym__simple_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(351), 1,
      sym__bitwise_and_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(353), 1,
      sym__equality_expression,
    STATE(354), 1,
      sym__wrapped_equality_expression,
    STATE(498), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(37), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(43), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(41), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(201), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9730] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      sym_unary_minus_operator,
    ACTIONS(39), 1,
      sym_relocation_type,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    STATE(77), 1,
      sym__block_comment,
    STATE(173), 1,
      sym__wrapped_shift_expression,
    STATE(192), 1,
      sym__shift_expression,
    STATE(194), 1,
      sym__additive_expression,
    STATE(195), 1,
      sym__wrapped_additive_expression,
    STATE(196), 1,
      sym__multiplicative_expression,
    STATE(197), 1,
      sym__wrapped_multiplicative_expression,
    STATE(198), 1,
      sym__simple_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(351), 1,
      sym__bitwise_and_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(353), 1,
      sym__equality_expression,
    STATE(354), 1,
      sym__wrapped_equality_expression,
    STATE(355), 1,
      sym__relational_expression,
    STATE(356), 1,
      sym__wrapped_relational_expression,
    STATE(498), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(37), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(43), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(41), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(201), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9855] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      sym_unary_minus_operator,
    ACTIONS(39), 1,
      sym_relocation_type,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    STATE(78), 1,
      sym__block_comment,
    STATE(174), 1,
      sym__wrapped_additive_expression,
    STATE(194), 1,
      sym__additive_expression,
    STATE(196), 1,
      sym__multiplicative_expression,
    STATE(197), 1,
      sym__wrapped_multiplicative_expression,
    STATE(198), 1,
      sym__simple_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(351), 1,
      sym__bitwise_and_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(353), 1,
      sym__equality_expression,
    STATE(354), 1,
      sym__wrapped_equality_expression,
    STATE(355), 1,
      sym__relational_expression,
    STATE(356), 1,
      sym__wrapped_relational_expression,
    STATE(357), 1,
      sym__shift_expression,
    STATE(358), 1,
      sym__wrapped_shift_expression,
    STATE(498), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(37), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(43), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(41), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(201), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9980] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      sym_unary_minus_operator,
    ACTIONS(39), 1,
      sym_relocation_type,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    STATE(79), 1,
      sym__block_comment,
    STATE(175), 1,
      sym__wrapped_multiplicative_expression,
    STATE(196), 1,
      sym__multiplicative_expression,
    STATE(198), 1,
      sym__simple_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(351), 1,
      sym__bitwise_and_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(353), 1,
      sym__equality_expression,
    STATE(354), 1,
      sym__wrapped_equality_expression,
    STATE(355), 1,
      sym__relational_expression,
    STATE(356), 1,
      sym__wrapped_relational_expression,
    STATE(357), 1,
      sym__shift_expression,
    STATE(358), 1,
      sym__wrapped_shift_expression,
    STATE(359), 1,
      sym__additive_expression,
    STATE(360), 1,
      sym__wrapped_additive_expression,
    STATE(498), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(37), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(43), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(41), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(201), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10105] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      sym_unary_minus_operator,
    ACTIONS(39), 1,
      sym_relocation_type,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    STATE(80), 1,
      sym__block_comment,
    STATE(176), 1,
      sym__simple_expression,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(351), 1,
      sym__bitwise_and_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(353), 1,
      sym__equality_expression,
    STATE(354), 1,
      sym__wrapped_equality_expression,
    STATE(355), 1,
      sym__relational_expression,
    STATE(356), 1,
      sym__wrapped_relational_expression,
    STATE(357), 1,
      sym__shift_expression,
    STATE(358), 1,
      sym__wrapped_shift_expression,
    STATE(359), 1,
      sym__additive_expression,
    STATE(360), 1,
      sym__wrapped_additive_expression,
    STATE(361), 1,
      sym__multiplicative_expression,
    STATE(498), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(37), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(43), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(41), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(201), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10230] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym_unary_minus_operator,
    ACTIONS(121), 1,
      sym_relocation_type,
    ACTIONS(127), 1,
      aux_sym_decimal_token1,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    STATE(81), 1,
      sym__block_comment,
    STATE(259), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(260), 1,
      sym__equality_expression,
    STATE(261), 1,
      sym__wrapped_equality_expression,
    STATE(262), 1,
      sym__relational_expression,
    STATE(263), 1,
      sym__wrapped_relational_expression,
    STATE(264), 1,
      sym__shift_expression,
    STATE(265), 1,
      sym__wrapped_shift_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__multiplicative_expression,
    STATE(269), 1,
      sym__wrapped_multiplicative_expression,
    STATE(270), 1,
      sym__simple_expression,
    STATE(271), 1,
      sym__wrapped_assignment_expression,
    STATE(272), 1,
      sym__assignment_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(275), 1,
      sym__wrapped_logical_or_expression,
    STATE(276), 1,
      sym__logical_and_expression,
    STATE(278), 1,
      sym__wrapped_logical_and_expression,
    STATE(279), 1,
      sym__bitwise_or_expression,
    STATE(280), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(281), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(299), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_additive_expression,
    ACTIONS(119), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(125), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(123), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(315), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10355] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(87), 1,
      sym_unary_minus_operator,
    ACTIONS(91), 1,
      sym_relocation_type,
    ACTIONS(97), 1,
      aux_sym_decimal_token1,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(105), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(82), 1,
      sym__block_comment,
    STATE(206), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(212), 1,
      sym__logical_or_expression,
    STATE(214), 1,
      sym__logical_and_expression,
    STATE(215), 1,
      sym__wrapped_logical_and_expression,
    STATE(216), 1,
      sym__bitwise_or_expression,
    STATE(217), 1,
      sym__bitwise_xor_expression,
    STATE(218), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(219), 1,
      sym__bitwise_and_expression,
    STATE(220), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(221), 1,
      sym__equality_expression,
    STATE(222), 1,
      sym__wrapped_equality_expression,
    STATE(223), 1,
      sym__relational_expression,
    STATE(224), 1,
      sym__wrapped_relational_expression,
    STATE(225), 1,
      sym__shift_expression,
    STATE(226), 1,
      sym__wrapped_shift_expression,
    STATE(227), 1,
      sym__additive_expression,
    STATE(228), 1,
      sym__wrapped_additive_expression,
    STATE(229), 1,
      sym__multiplicative_expression,
    STATE(231), 1,
      sym__simple_expression,
    STATE(248), 1,
      sym__wrapped_logical_or_expression,
    STATE(251), 1,
      sym__wrapped_multiplicative_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(494), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(89), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(95), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(93), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(207), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10480] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      sym_unary_minus_operator,
    ACTIONS(121), 1,
      sym_relocation_type,
    ACTIONS(127), 1,
      aux_sym_decimal_token1,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(135), 1,
      aux_sym_symbol_token1,
    STATE(83), 1,
      sym__block_comment,
    STATE(259), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(260), 1,
      sym__equality_expression,
    STATE(261), 1,
      sym__wrapped_equality_expression,
    STATE(262), 1,
      sym__relational_expression,
    STATE(263), 1,
      sym__wrapped_relational_expression,
    STATE(264), 1,
      sym__shift_expression,
    STATE(265), 1,
      sym__wrapped_shift_expression,
    STATE(266), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__multiplicative_expression,
    STATE(269), 1,
      sym__wrapped_multiplicative_expression,
    STATE(270), 1,
      sym__simple_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(276), 1,
      sym__logical_and_expression,
    STATE(278), 1,
      sym__wrapped_logical_and_expression,
    STATE(279), 1,
      sym__bitwise_or_expression,
    STATE(280), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(281), 1,
      sym__bitwise_xor_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(299), 1,
      sym__bitwise_and_expression,
    STATE(301), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__wrapped_additive_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(495), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(119), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(125), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(123), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(315), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10605] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_unary_minus_operator,
    ACTIONS(145), 1,
      sym_relocation_type,
    ACTIONS(151), 1,
      aux_sym_decimal_token1,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(84), 1,
      sym__block_comment,
    STATE(112), 1,
      sym__relational_expression,
    STATE(116), 1,
      sym__logical_or_expression,
    STATE(118), 1,
      sym__logical_and_expression,
    STATE(119), 1,
      sym__wrapped_logical_and_expression,
    STATE(120), 1,
      sym__bitwise_or_expression,
    STATE(121), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(122), 1,
      sym__bitwise_xor_expression,
    STATE(123), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(125), 1,
      sym__bitwise_and_expression,
    STATE(126), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(127), 1,
      sym__equality_expression,
    STATE(128), 1,
      sym__wrapped_equality_expression,
    STATE(130), 1,
      sym__wrapped_relational_expression,
    STATE(131), 1,
      sym__shift_expression,
    STATE(133), 1,
      sym__additive_expression,
    STATE(134), 1,
      sym__wrapped_additive_expression,
    STATE(135), 1,
      sym__multiplicative_expression,
    STATE(136), 1,
      sym__wrapped_logical_or_expression,
    STATE(137), 1,
      sym__wrapped_multiplicative_expression,
    STATE(138), 1,
      sym__simple_expression,
    STATE(158), 1,
      sym__wrapped_shift_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(496), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(143), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(149), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(147), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(148), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10730] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(187), 1,
      sym_unary_minus_operator,
    ACTIONS(191), 1,
      sym_relocation_type,
    ACTIONS(197), 1,
      aux_sym_decimal_token1,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(207), 1,
      aux_sym_symbol_token1,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(85), 1,
      sym__block_comment,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(334), 1,
      sym__simple_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(351), 1,
      sym__bitwise_and_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(353), 1,
      sym__equality_expression,
    STATE(354), 1,
      sym__wrapped_equality_expression,
    STATE(355), 1,
      sym__relational_expression,
    STATE(356), 1,
      sym__wrapped_relational_expression,
    STATE(357), 1,
      sym__shift_expression,
    STATE(358), 1,
      sym__wrapped_shift_expression,
    STATE(359), 1,
      sym__additive_expression,
    STATE(360), 1,
      sym__wrapped_additive_expression,
    STATE(361), 1,
      sym__multiplicative_expression,
    STATE(469), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(189), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(195), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(193), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(317), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10855] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      sym_unary_minus_operator,
    ACTIONS(39), 1,
      sym_relocation_type,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    STATE(86), 1,
      sym__block_comment,
    STATE(161), 1,
      sym__logical_and_expression,
    STATE(162), 1,
      sym__wrapped_logical_and_expression,
    STATE(163), 1,
      sym__bitwise_or_expression,
    STATE(179), 1,
      sym__logical_or_expression,
    STATE(180), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(181), 1,
      sym__wrapped_logical_or_expression,
    STATE(182), 1,
      sym__bitwise_xor_expression,
    STATE(183), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(184), 1,
      sym__bitwise_and_expression,
    STATE(185), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(186), 1,
      sym__equality_expression,
    STATE(187), 1,
      sym__wrapped_equality_expression,
    STATE(189), 1,
      sym__relational_expression,
    STATE(191), 1,
      sym__wrapped_relational_expression,
    STATE(192), 1,
      sym__shift_expression,
    STATE(193), 1,
      sym__wrapped_shift_expression,
    STATE(194), 1,
      sym__additive_expression,
    STATE(195), 1,
      sym__wrapped_additive_expression,
    STATE(196), 1,
      sym__multiplicative_expression,
    STATE(197), 1,
      sym__wrapped_multiplicative_expression,
    STATE(198), 1,
      sym__simple_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(498), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(37), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(43), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(41), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(201), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10980] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_unary_minus_operator,
    ACTIONS(145), 1,
      sym_relocation_type,
    ACTIONS(151), 1,
      aux_sym_decimal_token1,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(87), 1,
      sym__block_comment,
    STATE(112), 1,
      sym__relational_expression,
    STATE(115), 1,
      sym__assignment_expression,
    STATE(116), 1,
      sym__logical_or_expression,
    STATE(117), 1,
      sym__wrapped_logical_or_expression,
    STATE(118), 1,
      sym__logical_and_expression,
    STATE(119), 1,
      sym__wrapped_logical_and_expression,
    STATE(120), 1,
      sym__bitwise_or_expression,
    STATE(121), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(122), 1,
      sym__bitwise_xor_expression,
    STATE(123), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(125), 1,
      sym__bitwise_and_expression,
    STATE(126), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(127), 1,
      sym__equality_expression,
    STATE(128), 1,
      sym__wrapped_equality_expression,
    STATE(130), 1,
      sym__wrapped_relational_expression,
    STATE(131), 1,
      sym__shift_expression,
    STATE(133), 1,
      sym__additive_expression,
    STATE(134), 1,
      sym__wrapped_additive_expression,
    STATE(135), 1,
      sym__multiplicative_expression,
    STATE(137), 1,
      sym__wrapped_multiplicative_expression,
    STATE(138), 1,
      sym__simple_expression,
    STATE(139), 1,
      sym__wrapped_assignment_expression,
    STATE(158), 1,
      sym__wrapped_shift_expression,
    ACTIONS(143), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(149), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(147), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(148), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11105] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(187), 1,
      sym_unary_minus_operator,
    ACTIONS(191), 1,
      sym_relocation_type,
    ACTIONS(197), 1,
      aux_sym_decimal_token1,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(207), 1,
      aux_sym_symbol_token1,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym__block_comment,
    STATE(318), 1,
      sym__wrapped_assignment_expression,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(334), 1,
      sym__simple_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(351), 1,
      sym__bitwise_and_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(353), 1,
      sym__equality_expression,
    STATE(354), 1,
      sym__wrapped_equality_expression,
    STATE(355), 1,
      sym__relational_expression,
    STATE(356), 1,
      sym__wrapped_relational_expression,
    STATE(357), 1,
      sym__shift_expression,
    STATE(358), 1,
      sym__wrapped_shift_expression,
    STATE(359), 1,
      sym__additive_expression,
    STATE(360), 1,
      sym__wrapped_additive_expression,
    STATE(361), 1,
      sym__multiplicative_expression,
    ACTIONS(189), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(195), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(193), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(317), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11230] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      sym_unary_minus_operator,
    ACTIONS(39), 1,
      sym_relocation_type,
    ACTIONS(45), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(51), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(53), 1,
      aux_sym_symbol_token1,
    STATE(89), 1,
      sym__block_comment,
    STATE(160), 1,
      sym__wrapped_logical_or_expression,
    STATE(161), 1,
      sym__logical_and_expression,
    STATE(162), 1,
      sym__wrapped_logical_and_expression,
    STATE(163), 1,
      sym__bitwise_or_expression,
    STATE(178), 1,
      sym__assignment_expression,
    STATE(179), 1,
      sym__logical_or_expression,
    STATE(180), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(182), 1,
      sym__bitwise_xor_expression,
    STATE(183), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(184), 1,
      sym__bitwise_and_expression,
    STATE(185), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(186), 1,
      sym__equality_expression,
    STATE(187), 1,
      sym__wrapped_equality_expression,
    STATE(189), 1,
      sym__relational_expression,
    STATE(191), 1,
      sym__wrapped_relational_expression,
    STATE(192), 1,
      sym__shift_expression,
    STATE(193), 1,
      sym__wrapped_shift_expression,
    STATE(194), 1,
      sym__additive_expression,
    STATE(195), 1,
      sym__wrapped_additive_expression,
    STATE(196), 1,
      sym__multiplicative_expression,
    STATE(197), 1,
      sym__wrapped_multiplicative_expression,
    STATE(198), 1,
      sym__simple_expression,
    STATE(199), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(37), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(43), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(41), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(201), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11355] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(187), 1,
      sym_unary_minus_operator,
    ACTIONS(191), 1,
      sym_relocation_type,
    ACTIONS(197), 1,
      aux_sym_decimal_token1,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(207), 1,
      aux_sym_symbol_token1,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(90), 1,
      sym__block_comment,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(334), 1,
      sym__simple_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(351), 1,
      sym__bitwise_and_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(353), 1,
      sym__equality_expression,
    STATE(354), 1,
      sym__wrapped_equality_expression,
    STATE(355), 1,
      sym__relational_expression,
    STATE(356), 1,
      sym__wrapped_relational_expression,
    STATE(357), 1,
      sym__shift_expression,
    STATE(358), 1,
      sym__wrapped_shift_expression,
    STATE(359), 1,
      sym__additive_expression,
    STATE(360), 1,
      sym__wrapped_additive_expression,
    STATE(361), 1,
      sym__multiplicative_expression,
    STATE(465), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(189), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(195), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(193), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(317), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11480] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(187), 1,
      sym_unary_minus_operator,
    ACTIONS(191), 1,
      sym_relocation_type,
    ACTIONS(197), 1,
      aux_sym_decimal_token1,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(207), 1,
      aux_sym_symbol_token1,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(91), 1,
      sym__block_comment,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(334), 1,
      sym__simple_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(351), 1,
      sym__bitwise_and_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(353), 1,
      sym__equality_expression,
    STATE(354), 1,
      sym__wrapped_equality_expression,
    STATE(355), 1,
      sym__relational_expression,
    STATE(356), 1,
      sym__wrapped_relational_expression,
    STATE(357), 1,
      sym__shift_expression,
    STATE(358), 1,
      sym__wrapped_shift_expression,
    STATE(359), 1,
      sym__additive_expression,
    STATE(360), 1,
      sym__wrapped_additive_expression,
    STATE(361), 1,
      sym__multiplicative_expression,
    STATE(468), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(189), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(195), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(193), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(317), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11605] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(87), 1,
      sym_unary_minus_operator,
    ACTIONS(91), 1,
      sym_relocation_type,
    ACTIONS(97), 1,
      aux_sym_decimal_token1,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(105), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(92), 1,
      sym__block_comment,
    STATE(206), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(212), 1,
      sym__logical_or_expression,
    STATE(214), 1,
      sym__logical_and_expression,
    STATE(215), 1,
      sym__wrapped_logical_and_expression,
    STATE(216), 1,
      sym__bitwise_or_expression,
    STATE(217), 1,
      sym__bitwise_xor_expression,
    STATE(218), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(219), 1,
      sym__bitwise_and_expression,
    STATE(220), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(221), 1,
      sym__equality_expression,
    STATE(222), 1,
      sym__wrapped_equality_expression,
    STATE(223), 1,
      sym__relational_expression,
    STATE(224), 1,
      sym__wrapped_relational_expression,
    STATE(225), 1,
      sym__shift_expression,
    STATE(226), 1,
      sym__wrapped_shift_expression,
    STATE(227), 1,
      sym__additive_expression,
    STATE(228), 1,
      sym__wrapped_additive_expression,
    STATE(229), 1,
      sym__multiplicative_expression,
    STATE(231), 1,
      sym__simple_expression,
    STATE(251), 1,
      sym__wrapped_multiplicative_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(374), 1,
      sym__wrapped_logical_or_expression,
    STATE(494), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(89), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(95), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(93), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(207), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11730] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(87), 1,
      sym_unary_minus_operator,
    ACTIONS(91), 1,
      sym_relocation_type,
    ACTIONS(97), 1,
      aux_sym_decimal_token1,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(105), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(93), 1,
      sym__block_comment,
    STATE(206), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(214), 1,
      sym__logical_and_expression,
    STATE(216), 1,
      sym__bitwise_or_expression,
    STATE(217), 1,
      sym__bitwise_xor_expression,
    STATE(218), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(219), 1,
      sym__bitwise_and_expression,
    STATE(220), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(221), 1,
      sym__equality_expression,
    STATE(222), 1,
      sym__wrapped_equality_expression,
    STATE(223), 1,
      sym__relational_expression,
    STATE(224), 1,
      sym__wrapped_relational_expression,
    STATE(225), 1,
      sym__shift_expression,
    STATE(226), 1,
      sym__wrapped_shift_expression,
    STATE(227), 1,
      sym__additive_expression,
    STATE(228), 1,
      sym__wrapped_additive_expression,
    STATE(229), 1,
      sym__multiplicative_expression,
    STATE(231), 1,
      sym__simple_expression,
    STATE(237), 1,
      sym__wrapped_logical_and_expression,
    STATE(251), 1,
      sym__wrapped_multiplicative_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(494), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(89), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(95), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(93), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(207), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11855] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(187), 1,
      sym_unary_minus_operator,
    ACTIONS(191), 1,
      sym_relocation_type,
    ACTIONS(197), 1,
      aux_sym_decimal_token1,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(207), 1,
      aux_sym_symbol_token1,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(94), 1,
      sym__block_comment,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(334), 1,
      sym__simple_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(351), 1,
      sym__bitwise_and_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(353), 1,
      sym__equality_expression,
    STATE(354), 1,
      sym__wrapped_equality_expression,
    STATE(355), 1,
      sym__relational_expression,
    STATE(356), 1,
      sym__wrapped_relational_expression,
    STATE(357), 1,
      sym__shift_expression,
    STATE(358), 1,
      sym__wrapped_shift_expression,
    STATE(359), 1,
      sym__additive_expression,
    STATE(360), 1,
      sym__wrapped_additive_expression,
    STATE(361), 1,
      sym__multiplicative_expression,
    STATE(462), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(189), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(195), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(193), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(317), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11980] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(87), 1,
      sym_unary_minus_operator,
    ACTIONS(91), 1,
      sym_relocation_type,
    ACTIONS(97), 1,
      aux_sym_decimal_token1,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(105), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(95), 1,
      sym__block_comment,
    STATE(216), 1,
      sym__bitwise_or_expression,
    STATE(217), 1,
      sym__bitwise_xor_expression,
    STATE(218), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(219), 1,
      sym__bitwise_and_expression,
    STATE(220), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(221), 1,
      sym__equality_expression,
    STATE(222), 1,
      sym__wrapped_equality_expression,
    STATE(223), 1,
      sym__relational_expression,
    STATE(224), 1,
      sym__wrapped_relational_expression,
    STATE(225), 1,
      sym__shift_expression,
    STATE(226), 1,
      sym__wrapped_shift_expression,
    STATE(227), 1,
      sym__additive_expression,
    STATE(228), 1,
      sym__wrapped_additive_expression,
    STATE(229), 1,
      sym__multiplicative_expression,
    STATE(231), 1,
      sym__simple_expression,
    STATE(238), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(251), 1,
      sym__wrapped_multiplicative_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(494), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(89), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(95), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(93), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(207), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12105] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(87), 1,
      sym_unary_minus_operator,
    ACTIONS(91), 1,
      sym_relocation_type,
    ACTIONS(97), 1,
      aux_sym_decimal_token1,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(105), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(96), 1,
      sym__block_comment,
    STATE(217), 1,
      sym__bitwise_xor_expression,
    STATE(219), 1,
      sym__bitwise_and_expression,
    STATE(220), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(221), 1,
      sym__equality_expression,
    STATE(222), 1,
      sym__wrapped_equality_expression,
    STATE(223), 1,
      sym__relational_expression,
    STATE(224), 1,
      sym__wrapped_relational_expression,
    STATE(225), 1,
      sym__shift_expression,
    STATE(226), 1,
      sym__wrapped_shift_expression,
    STATE(227), 1,
      sym__additive_expression,
    STATE(228), 1,
      sym__wrapped_additive_expression,
    STATE(229), 1,
      sym__multiplicative_expression,
    STATE(231), 1,
      sym__simple_expression,
    STATE(239), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(251), 1,
      sym__wrapped_multiplicative_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(494), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(89), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(95), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(93), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(207), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12230] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(187), 1,
      sym_unary_minus_operator,
    ACTIONS(191), 1,
      sym_relocation_type,
    ACTIONS(197), 1,
      aux_sym_decimal_token1,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(207), 1,
      aux_sym_symbol_token1,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(97), 1,
      sym__block_comment,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(334), 1,
      sym__simple_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(351), 1,
      sym__bitwise_and_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(353), 1,
      sym__equality_expression,
    STATE(354), 1,
      sym__wrapped_equality_expression,
    STATE(355), 1,
      sym__relational_expression,
    STATE(356), 1,
      sym__wrapped_relational_expression,
    STATE(357), 1,
      sym__shift_expression,
    STATE(358), 1,
      sym__wrapped_shift_expression,
    STATE(359), 1,
      sym__additive_expression,
    STATE(360), 1,
      sym__wrapped_additive_expression,
    STATE(361), 1,
      sym__multiplicative_expression,
    STATE(472), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(189), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(195), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(193), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(317), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12355] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(87), 1,
      sym_unary_minus_operator,
    ACTIONS(91), 1,
      sym_relocation_type,
    ACTIONS(97), 1,
      aux_sym_decimal_token1,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(105), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(98), 1,
      sym__block_comment,
    STATE(219), 1,
      sym__bitwise_and_expression,
    STATE(221), 1,
      sym__equality_expression,
    STATE(222), 1,
      sym__wrapped_equality_expression,
    STATE(223), 1,
      sym__relational_expression,
    STATE(224), 1,
      sym__wrapped_relational_expression,
    STATE(225), 1,
      sym__shift_expression,
    STATE(226), 1,
      sym__wrapped_shift_expression,
    STATE(227), 1,
      sym__additive_expression,
    STATE(228), 1,
      sym__wrapped_additive_expression,
    STATE(229), 1,
      sym__multiplicative_expression,
    STATE(231), 1,
      sym__simple_expression,
    STATE(240), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(251), 1,
      sym__wrapped_multiplicative_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(494), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(89), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(95), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(93), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(207), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12480] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(87), 1,
      sym_unary_minus_operator,
    ACTIONS(91), 1,
      sym_relocation_type,
    ACTIONS(97), 1,
      aux_sym_decimal_token1,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(105), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(99), 1,
      sym__block_comment,
    STATE(221), 1,
      sym__equality_expression,
    STATE(223), 1,
      sym__relational_expression,
    STATE(224), 1,
      sym__wrapped_relational_expression,
    STATE(225), 1,
      sym__shift_expression,
    STATE(226), 1,
      sym__wrapped_shift_expression,
    STATE(227), 1,
      sym__additive_expression,
    STATE(228), 1,
      sym__wrapped_additive_expression,
    STATE(229), 1,
      sym__multiplicative_expression,
    STATE(231), 1,
      sym__simple_expression,
    STATE(241), 1,
      sym__wrapped_equality_expression,
    STATE(251), 1,
      sym__wrapped_multiplicative_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(351), 1,
      sym__bitwise_and_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(494), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(89), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(95), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(93), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(207), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12605] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(87), 1,
      sym_unary_minus_operator,
    ACTIONS(91), 1,
      sym_relocation_type,
    ACTIONS(97), 1,
      aux_sym_decimal_token1,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(105), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(100), 1,
      sym__block_comment,
    STATE(223), 1,
      sym__relational_expression,
    STATE(225), 1,
      sym__shift_expression,
    STATE(226), 1,
      sym__wrapped_shift_expression,
    STATE(227), 1,
      sym__additive_expression,
    STATE(228), 1,
      sym__wrapped_additive_expression,
    STATE(229), 1,
      sym__multiplicative_expression,
    STATE(231), 1,
      sym__simple_expression,
    STATE(242), 1,
      sym__wrapped_relational_expression,
    STATE(251), 1,
      sym__wrapped_multiplicative_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(351), 1,
      sym__bitwise_and_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(353), 1,
      sym__equality_expression,
    STATE(354), 1,
      sym__wrapped_equality_expression,
    STATE(494), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(89), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(95), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(93), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(207), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12730] = 37,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(187), 1,
      sym_unary_minus_operator,
    ACTIONS(191), 1,
      sym_relocation_type,
    ACTIONS(197), 1,
      aux_sym_decimal_token1,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(207), 1,
      aux_sym_symbol_token1,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    STATE(101), 1,
      sym__block_comment,
    STATE(330), 1,
      sym__simple_expression,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(337), 1,
      sym__assignment_expression,
    STATE(338), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__wrapped_logical_or_expression,
    STATE(340), 1,
      sym__logical_and_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__bitwise_or_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(349), 1,
      sym__bitwise_xor_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(351), 1,
      sym__bitwise_and_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(353), 1,
      sym__equality_expression,
    STATE(354), 1,
      sym__wrapped_equality_expression,
    STATE(355), 1,
      sym__relational_expression,
    STATE(356), 1,
      sym__wrapped_relational_expression,
    STATE(357), 1,
      sym__shift_expression,
    STATE(358), 1,
      sym__wrapped_shift_expression,
    STATE(359), 1,
      sym__additive_expression,
    STATE(360), 1,
      sym__wrapped_additive_expression,
    STATE(361), 1,
      sym__multiplicative_expression,
    STATE(497), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(189), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(195), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(193), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(317), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12855] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    STATE(102), 1,
      sym__block_comment,
    STATE(507), 1,
      sym__line_comment,
    ACTIONS(213), 42,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      aux_sym__line_comment_token1,
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
  [12915] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      sym__block_comment,
    STATE(513), 1,
      sym__line_comment,
    ACTIONS(213), 42,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      aux_sym__line_comment_token1,
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
  [12975] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    ACTIONS(219), 1,
      aux_sym__whitespace_token1,
    STATE(104), 1,
      sym__block_comment,
    ACTIONS(217), 42,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      aux_sym__line_comment_token1,
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
  [13035] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
    STATE(105), 1,
      sym__block_comment,
    ACTIONS(223), 42,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      aux_sym__line_comment_token1,
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
  [13092] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(225), 1,
      ts_builtin_sym_end,
    STATE(106), 1,
      sym__block_comment,
    ACTIONS(227), 42,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      aux_sym__line_comment_token1,
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
  [13149] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
    STATE(107), 1,
      sym__block_comment,
    ACTIONS(231), 42,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      aux_sym__line_comment_token1,
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
  [13206] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
    STATE(108), 1,
      sym__block_comment,
    ACTIONS(235), 42,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      aux_sym__line_comment_token1,
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
  [13263] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    STATE(109), 1,
      sym__block_comment,
    ACTIONS(239), 42,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      aux_sym__line_comment_token1,
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
  [13320] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    STATE(110), 1,
      sym__block_comment,
    ACTIONS(213), 42,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      aux_sym__line_comment_token1,
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
  [13377] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(111), 1,
      sym__block_comment,
    ACTIONS(243), 11,
      aux_sym_section_type_token1,
      sym_unary_minus_operator,
      sym_relocation_type,
      sym_octal,
      aux_sym_decimal_token1,
      sym_float,
      sym_register,
      sym_macro_variable,
      aux_sym_local_label_reference_token1,
      aux_sym_symbol_token1,
      sym_local_numeric_label_reference,
    ACTIONS(241), 12,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym_option_flag_token1,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
      sym_binary,
      sym_hexadecimal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [13414] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    STATE(112), 1,
      sym__block_comment,
    ACTIONS(245), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(247), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [13449] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    STATE(113), 1,
      sym__block_comment,
    ACTIONS(249), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(251), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [13484] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    STATE(114), 1,
      sym__block_comment,
    ACTIONS(253), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(255), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [13519] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    STATE(115), 1,
      sym__block_comment,
    ACTIONS(257), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(259), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [13554] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    STATE(116), 1,
      sym__block_comment,
    ACTIONS(261), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(263), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [13589] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(269), 1,
      sym_logical_or_operator,
    STATE(117), 1,
      sym__block_comment,
    ACTIONS(265), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(267), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [13626] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    STATE(118), 1,
      sym__block_comment,
    ACTIONS(271), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(273), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [13661] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(279), 1,
      sym_logical_and_operator,
    STATE(119), 1,
      sym__block_comment,
    ACTIONS(275), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(277), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [13698] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    STATE(120), 1,
      sym__block_comment,
    ACTIONS(281), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(283), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [13733] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(289), 1,
      sym_bitwise_or_operator,
    STATE(121), 1,
      sym__block_comment,
    ACTIONS(285), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(287), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [13770] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    STATE(122), 1,
      sym__block_comment,
    ACTIONS(291), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(293), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [13805] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(299), 1,
      sym_bitwise_xor_operator,
    STATE(123), 1,
      sym__block_comment,
    ACTIONS(295), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(297), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [13842] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(305), 1,
      sym_additive_operator,
    STATE(124), 1,
      sym__block_comment,
    ACTIONS(301), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(303), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [13879] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    STATE(125), 1,
      sym__block_comment,
    ACTIONS(307), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(309), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [13914] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(315), 1,
      sym_bitwise_and_operator,
    STATE(126), 1,
      sym__block_comment,
    ACTIONS(311), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(313), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [13951] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    STATE(127), 1,
      sym__block_comment,
    ACTIONS(317), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(319), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [13986] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(325), 1,
      sym_equality_operator,
    STATE(128), 1,
      sym__block_comment,
    ACTIONS(321), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(323), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [14023] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(331), 1,
      sym_relational_operator,
    STATE(129), 1,
      sym__block_comment,
    ACTIONS(327), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(329), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [14060] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(331), 1,
      sym_relational_operator,
    STATE(130), 1,
      sym__block_comment,
    ACTIONS(333), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(335), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [14097] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    STATE(131), 1,
      sym__block_comment,
    ACTIONS(337), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(339), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [14132] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(345), 1,
      sym_shift_operator,
    STATE(132), 1,
      sym__block_comment,
    ACTIONS(341), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(343), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [14169] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    STATE(133), 1,
      sym__block_comment,
    ACTIONS(347), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(349), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [14204] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(305), 1,
      sym_additive_operator,
    STATE(134), 1,
      sym__block_comment,
    ACTIONS(351), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(353), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [14241] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    STATE(135), 1,
      sym__block_comment,
    ACTIONS(355), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(357), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [14276] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    STATE(136), 1,
      sym__block_comment,
    ACTIONS(359), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(361), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [14311] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(367), 1,
      sym_multiplicative_operator,
    STATE(137), 1,
      sym__block_comment,
    ACTIONS(363), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(365), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [14348] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    STATE(138), 1,
      sym__block_comment,
    ACTIONS(369), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(371), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [14383] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      sym_assignment_operator,
    STATE(139), 1,
      sym__block_comment,
    ACTIONS(373), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(375), 15,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [14422] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(140), 1,
      sym__block_comment,
    ACTIONS(383), 10,
      sym_unary_minus_operator,
      sym_relocation_type,
      sym_octal,
      aux_sym_decimal_token1,
      sym_float,
      sym_register,
      sym_macro_variable,
      aux_sym_local_label_reference_token1,
      aux_sym_symbol_token1,
      sym_local_numeric_label_reference,
    ACTIONS(381), 11,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
      sym_binary,
      sym_hexadecimal,
      anon_sym_SQUOTE,
  [14457] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(367), 1,
      sym_multiplicative_operator,
    STATE(141), 1,
      sym__block_comment,
    ACTIONS(385), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(387), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [14494] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    STATE(142), 1,
      sym__block_comment,
    ACTIONS(389), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(391), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [14529] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    STATE(143), 1,
      sym__block_comment,
    ACTIONS(393), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(395), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [14564] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    STATE(144), 1,
      sym__block_comment,
    ACTIONS(397), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(399), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [14599] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    STATE(145), 1,
      sym__block_comment,
    ACTIONS(401), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(403), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [14634] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    STATE(146), 1,
      sym__block_comment,
    ACTIONS(405), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(407), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [14669] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(147), 1,
      sym__block_comment,
    ACTIONS(243), 10,
      sym_unary_minus_operator,
      sym_relocation_type,
      sym_octal,
      aux_sym_decimal_token1,
      sym_float,
      sym_register,
      sym_macro_variable,
      aux_sym_local_label_reference_token1,
      aux_sym_symbol_token1,
      sym_local_numeric_label_reference,
    ACTIONS(241), 11,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
      sym_binary,
      sym_hexadecimal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [14704] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    STATE(148), 1,
      sym__block_comment,
    ACTIONS(409), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(411), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [14739] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    STATE(149), 1,
      sym__block_comment,
    ACTIONS(413), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(415), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [14774] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    STATE(150), 1,
      sym__block_comment,
    ACTIONS(417), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(419), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [14809] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    STATE(151), 1,
      sym__block_comment,
    ACTIONS(421), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(423), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [14844] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    STATE(152), 1,
      sym__block_comment,
    ACTIONS(425), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(427), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [14879] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(279), 1,
      sym_logical_and_operator,
    STATE(153), 1,
      sym__block_comment,
    ACTIONS(429), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(431), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [14916] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(289), 1,
      sym_bitwise_or_operator,
    STATE(154), 1,
      sym__block_comment,
    ACTIONS(433), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(435), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [14953] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(299), 1,
      sym_bitwise_xor_operator,
    STATE(155), 1,
      sym__block_comment,
    ACTIONS(437), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(439), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [14990] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(315), 1,
      sym_bitwise_and_operator,
    STATE(156), 1,
      sym__block_comment,
    ACTIONS(441), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(443), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [15027] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(325), 1,
      sym_equality_operator,
    STATE(157), 1,
      sym__block_comment,
    ACTIONS(445), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(447), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [15064] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(345), 1,
      sym_shift_operator,
    STATE(158), 1,
      sym__block_comment,
    ACTIONS(449), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(451), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
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
  [15101] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(159), 1,
      sym__block_comment,
    ACTIONS(399), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(397), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15134] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(453), 1,
      sym_logical_or_operator,
    STATE(160), 1,
      sym__block_comment,
    ACTIONS(267), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(265), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15169] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(161), 1,
      sym__block_comment,
    ACTIONS(273), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(271), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15202] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(455), 1,
      sym_logical_and_operator,
    STATE(162), 1,
      sym__block_comment,
    ACTIONS(277), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(275), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15237] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(163), 1,
      sym__block_comment,
    ACTIONS(283), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(281), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15270] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(164), 1,
      sym__block_comment,
    ACTIONS(419), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(417), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15303] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(165), 1,
      sym__block_comment,
    ACTIONS(423), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(421), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15336] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(166), 1,
      sym__block_comment,
    ACTIONS(427), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(425), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15369] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(455), 1,
      sym_logical_and_operator,
    STATE(167), 1,
      sym__block_comment,
    ACTIONS(431), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(429), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15404] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(457), 1,
      sym_bitwise_or_operator,
    STATE(168), 1,
      sym__block_comment,
    ACTIONS(435), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(433), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15439] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(459), 1,
      sym_bitwise_xor_operator,
    STATE(169), 1,
      sym__block_comment,
    ACTIONS(439), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(437), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15474] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(461), 1,
      sym_bitwise_and_operator,
    STATE(170), 1,
      sym__block_comment,
    ACTIONS(443), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(441), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15509] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(463), 1,
      sym_equality_operator,
    STATE(171), 1,
      sym__block_comment,
    ACTIONS(447), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(445), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15544] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(465), 1,
      sym_relational_operator,
    STATE(172), 1,
      sym__block_comment,
    ACTIONS(329), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(327), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15579] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(467), 1,
      sym_shift_operator,
    STATE(173), 1,
      sym__block_comment,
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
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [15614] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(469), 1,
      sym_additive_operator,
    STATE(174), 1,
      sym__block_comment,
    ACTIONS(303), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(301), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [15649] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(471), 1,
      sym_multiplicative_operator,
    STATE(175), 1,
      sym__block_comment,
    ACTIONS(387), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(385), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15684] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(176), 1,
      sym__block_comment,
    ACTIONS(391), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(389), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15717] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(177), 1,
      sym__block_comment,
    ACTIONS(395), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(393), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15750] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(178), 1,
      sym__block_comment,
    ACTIONS(259), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(257), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15783] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(179), 1,
      sym__block_comment,
    ACTIONS(263), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(261), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15816] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(457), 1,
      sym_bitwise_or_operator,
    STATE(180), 1,
      sym__block_comment,
    ACTIONS(287), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(285), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15851] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(181), 1,
      sym__block_comment,
    ACTIONS(361), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(359), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15884] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(182), 1,
      sym__block_comment,
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
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15917] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(459), 1,
      sym_bitwise_xor_operator,
    STATE(183), 1,
      sym__block_comment,
    ACTIONS(297), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(295), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15952] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(184), 1,
      sym__block_comment,
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
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15985] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(461), 1,
      sym_bitwise_and_operator,
    STATE(185), 1,
      sym__block_comment,
    ACTIONS(313), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(311), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16020] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(186), 1,
      sym__block_comment,
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
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16053] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(463), 1,
      sym_equality_operator,
    STATE(187), 1,
      sym__block_comment,
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
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16088] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(188), 1,
      sym__block_comment,
    ACTIONS(473), 8,
      anon_sym_LPAREN,
      aux_sym_option_flag_token1,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
      sym_binary,
      sym_hexadecimal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(475), 11,
      aux_sym_section_type_token1,
      sym_unary_minus_operator,
      sym_relocation_type,
      sym_octal,
      aux_sym_decimal_token1,
      sym_float,
      sym_register,
      sym_macro_variable,
      aux_sym_local_label_reference_token1,
      aux_sym_symbol_token1,
      sym_local_numeric_label_reference,
  [16121] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(189), 1,
      sym__block_comment,
    ACTIONS(247), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(245), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16154] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(190), 1,
      sym__block_comment,
    ACTIONS(381), 8,
      anon_sym_LPAREN,
      aux_sym_option_flag_token1,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
      sym_binary,
      sym_hexadecimal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(383), 11,
      aux_sym_section_type_token1,
      sym_unary_minus_operator,
      sym_relocation_type,
      sym_octal,
      aux_sym_decimal_token1,
      sym_float,
      sym_register,
      sym_macro_variable,
      aux_sym_local_label_reference_token1,
      aux_sym_symbol_token1,
      sym_local_numeric_label_reference,
  [16187] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(465), 1,
      sym_relational_operator,
    STATE(191), 1,
      sym__block_comment,
    ACTIONS(335), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(333), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16222] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(192), 1,
      sym__block_comment,
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
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16255] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(467), 1,
      sym_shift_operator,
    STATE(193), 1,
      sym__block_comment,
    ACTIONS(451), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(449), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [16290] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(194), 1,
      sym__block_comment,
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
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16323] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(469), 1,
      sym_additive_operator,
    STATE(195), 1,
      sym__block_comment,
    ACTIONS(353), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(351), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [16358] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(196), 1,
      sym__block_comment,
    ACTIONS(357), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(355), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16391] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(471), 1,
      sym_multiplicative_operator,
    STATE(197), 1,
      sym__block_comment,
    ACTIONS(365), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(363), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16426] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(198), 1,
      sym__block_comment,
    ACTIONS(371), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(369), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16459] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(479), 1,
      sym_assignment_operator,
    STATE(199), 1,
      sym__block_comment,
    ACTIONS(375), 4,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(373), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16496] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(200), 1,
      sym__block_comment,
    ACTIONS(407), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(405), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16529] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(201), 1,
      sym__block_comment,
    ACTIONS(411), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(409), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16562] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(202), 1,
      sym__block_comment,
    ACTIONS(415), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(413), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16595] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(203), 1,
      sym__block_comment,
    ACTIONS(251), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(249), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16628] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(204), 1,
      sym__block_comment,
    ACTIONS(255), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(253), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16661] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(205), 1,
      sym__block_comment,
    ACTIONS(403), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(401), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16694] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(481), 1,
      sym_bitwise_or_operator,
    STATE(206), 1,
      sym__block_comment,
    ACTIONS(287), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(285), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16728] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(207), 1,
      sym__block_comment,
    ACTIONS(411), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(409), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16760] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(208), 1,
      sym__block_comment,
    ACTIONS(415), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(413), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16792] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(209), 1,
      sym__block_comment,
    ACTIONS(251), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(249), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16824] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(210), 1,
      sym__block_comment,
    ACTIONS(255), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(253), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16856] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(211), 1,
      sym__block_comment,
    ACTIONS(259), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(257), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16888] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(212), 1,
      sym__block_comment,
    ACTIONS(263), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(261), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16920] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(483), 1,
      sym_logical_or_operator,
    STATE(213), 1,
      sym__block_comment,
    ACTIONS(267), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(265), 12,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16954] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(214), 1,
      sym__block_comment,
    ACTIONS(273), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(271), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16986] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(485), 1,
      sym_logical_and_operator,
    STATE(215), 1,
      sym__block_comment,
    ACTIONS(277), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(275), 12,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17020] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(216), 1,
      sym__block_comment,
    ACTIONS(283), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(281), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17052] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(217), 1,
      sym__block_comment,
    ACTIONS(293), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(291), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17084] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(487), 1,
      sym_bitwise_xor_operator,
    STATE(218), 1,
      sym__block_comment,
    ACTIONS(297), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(295), 12,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17118] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(219), 1,
      sym__block_comment,
    ACTIONS(309), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(307), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17150] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(489), 1,
      sym_bitwise_and_operator,
    STATE(220), 1,
      sym__block_comment,
    ACTIONS(313), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(311), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17184] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(221), 1,
      sym__block_comment,
    ACTIONS(319), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(317), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17216] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(491), 1,
      sym_equality_operator,
    STATE(222), 1,
      sym__block_comment,
    ACTIONS(323), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(321), 12,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17250] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(223), 1,
      sym__block_comment,
    ACTIONS(247), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(245), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17282] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(493), 1,
      sym_relational_operator,
    STATE(224), 1,
      sym__block_comment,
    ACTIONS(335), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(333), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17316] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(225), 1,
      sym__block_comment,
    ACTIONS(339), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(337), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17348] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(495), 1,
      sym_shift_operator,
    STATE(226), 1,
      sym__block_comment,
    ACTIONS(451), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(449), 12,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [17382] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(227), 1,
      sym__block_comment,
    ACTIONS(349), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(347), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17414] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(497), 1,
      sym_additive_operator,
    STATE(228), 1,
      sym__block_comment,
    ACTIONS(353), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(351), 12,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [17448] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(229), 1,
      sym__block_comment,
    ACTIONS(357), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(355), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17480] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(230), 1,
      sym__block_comment,
    ACTIONS(403), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(401), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17512] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(231), 1,
      sym__block_comment,
    ACTIONS(371), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(369), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17544] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(501), 1,
      sym_assignment_operator,
    STATE(232), 1,
      sym__block_comment,
    ACTIONS(375), 4,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(373), 12,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17580] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(233), 1,
      sym__block_comment,
    ACTIONS(419), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(417), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17612] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(234), 1,
      sym__block_comment,
    ACTIONS(503), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(407), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(405), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17646] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(235), 1,
      sym__block_comment,
    ACTIONS(423), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(421), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17678] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(236), 1,
      sym__block_comment,
    ACTIONS(427), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(425), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17710] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(485), 1,
      sym_logical_and_operator,
    STATE(237), 1,
      sym__block_comment,
    ACTIONS(431), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(429), 12,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17744] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(481), 1,
      sym_bitwise_or_operator,
    STATE(238), 1,
      sym__block_comment,
    ACTIONS(435), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(433), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17778] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(487), 1,
      sym_bitwise_xor_operator,
    STATE(239), 1,
      sym__block_comment,
    ACTIONS(439), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(437), 12,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17812] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(489), 1,
      sym_bitwise_and_operator,
    STATE(240), 1,
      sym__block_comment,
    ACTIONS(443), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(441), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17846] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(491), 1,
      sym_equality_operator,
    STATE(241), 1,
      sym__block_comment,
    ACTIONS(447), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(445), 12,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17880] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(493), 1,
      sym_relational_operator,
    STATE(242), 1,
      sym__block_comment,
    ACTIONS(329), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(327), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17914] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(495), 1,
      sym_shift_operator,
    STATE(243), 1,
      sym__block_comment,
    ACTIONS(343), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(341), 12,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [17948] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(497), 1,
      sym_additive_operator,
    STATE(244), 1,
      sym__block_comment,
    ACTIONS(303), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(301), 12,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [17982] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(505), 1,
      sym_multiplicative_operator,
    STATE(245), 1,
      sym__block_comment,
    ACTIONS(387), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(385), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18016] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(246), 1,
      sym__block_comment,
    ACTIONS(391), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(389), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18048] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(247), 1,
      sym__block_comment,
    ACTIONS(407), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(405), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18080] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(248), 1,
      sym__block_comment,
    ACTIONS(361), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(359), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18112] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(249), 1,
      sym__block_comment,
    ACTIONS(395), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(393), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18144] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(250), 1,
      sym__block_comment,
    ACTIONS(399), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(397), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18176] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(505), 1,
      sym_multiplicative_operator,
    STATE(251), 1,
      sym__block_comment,
    ACTIONS(365), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(363), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18210] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    STATE(252), 1,
      sym__block_comment,
    ACTIONS(417), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(419), 14,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [18241] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    STATE(253), 1,
      sym__block_comment,
    ACTIONS(397), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(399), 14,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [18272] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    STATE(254), 1,
      sym__block_comment,
    ACTIONS(401), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(403), 14,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [18303] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    STATE(255), 1,
      sym__block_comment,
    ACTIONS(509), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(507), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(411), 12,
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
  [18336] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    STATE(256), 1,
      sym__block_comment,
    ACTIONS(405), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(407), 14,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
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
  [18367] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(257), 1,
      sym__block_comment,
    ACTIONS(241), 7,
      anon_sym_LPAREN,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
      sym_binary,
      sym_hexadecimal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(243), 10,
      sym_unary_minus_operator,
      sym_relocation_type,
      sym_octal,
      aux_sym_decimal_token1,
      sym_float,
      sym_register,
      sym_macro_variable,
      aux_sym_local_label_reference_token1,
      aux_sym_symbol_token1,
      sym_local_numeric_label_reference,
  [18398] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(258), 1,
      sym__block_comment,
    ACTIONS(381), 6,
      anon_sym_LPAREN,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
      sym_binary,
      sym_hexadecimal,
      anon_sym_SQUOTE,
    ACTIONS(383), 10,
      sym_unary_minus_operator,
      sym_relocation_type,
      sym_octal,
      aux_sym_decimal_token1,
      sym_float,
      sym_register,
      sym_macro_variable,
      aux_sym_local_label_reference_token1,
      aux_sym_symbol_token1,
      sym_local_numeric_label_reference,
  [18428] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(511), 1,
      sym_bitwise_and_operator,
    STATE(259), 1,
      sym__block_comment,
    ACTIONS(313), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(311), 10,
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
  [18459] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(260), 1,
      sym__block_comment,
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
  [18488] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(513), 1,
      sym_equality_operator,
    STATE(261), 1,
      sym__block_comment,
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
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18519] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(262), 1,
      sym__block_comment,
    ACTIONS(247), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(245), 10,
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
  [18548] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(515), 1,
      sym_relational_operator,
    STATE(263), 1,
      sym__block_comment,
    ACTIONS(335), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(333), 10,
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
  [18579] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(264), 1,
      sym__block_comment,
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
  [18608] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(517), 1,
      sym_shift_operator,
    STATE(265), 1,
      sym__block_comment,
    ACTIONS(451), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(449), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [18639] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(266), 1,
      sym__block_comment,
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
  [18668] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(267), 1,
      sym__block_comment,
    ACTIONS(255), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(253), 10,
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
  [18697] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(268), 1,
      sym__block_comment,
    ACTIONS(357), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(355), 10,
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
  [18726] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(519), 1,
      sym_multiplicative_operator,
    STATE(269), 1,
      sym__block_comment,
    ACTIONS(365), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(363), 10,
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
  [18757] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(270), 1,
      sym__block_comment,
    ACTIONS(371), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(369), 10,
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
  [18786] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(521), 1,
      anon_sym_LPAREN,
    ACTIONS(523), 1,
      sym_assignment_operator,
    STATE(271), 1,
      sym__block_comment,
    ACTIONS(375), 4,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(373), 9,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18819] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(272), 1,
      sym__block_comment,
    ACTIONS(259), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(257), 10,
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
  [18848] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(273), 1,
      sym__block_comment,
    ACTIONS(263), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(261), 10,
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
  [18877] = 15,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(529), 1,
      anon_sym_COMMA,
    ACTIONS(533), 1,
      sym_assignment_operator,
    ACTIONS(535), 1,
      sym__operand_separator,
    ACTIONS(537), 1,
      sym__data_separator,
    STATE(12), 1,
      sym__data_separator_comment,
    STATE(274), 1,
      sym__block_comment,
    STATE(332), 1,
      aux_sym_numeric_operands_repeat1,
    STATE(379), 1,
      aux_sym_numeric_operands_repeat2,
    STATE(380), 1,
      aux_sym_numeric_operands_repeat3,
    ACTIONS(525), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(527), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(531), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [18926] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(539), 1,
      sym_logical_or_operator,
    STATE(275), 1,
      sym__block_comment,
    ACTIONS(267), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(265), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18957] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(276), 1,
      sym__block_comment,
    ACTIONS(273), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(271), 10,
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
  [18986] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(541), 1,
      anon_sym_RPAREN,
    STATE(277), 1,
      sym__block_comment,
    ACTIONS(411), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(409), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19017] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(543), 1,
      sym_logical_and_operator,
    STATE(278), 1,
      sym__block_comment,
    ACTIONS(277), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(275), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19048] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(279), 1,
      sym__block_comment,
    ACTIONS(283), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(281), 10,
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
  [19077] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(545), 1,
      sym_bitwise_or_operator,
    STATE(280), 1,
      sym__block_comment,
    ACTIONS(287), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(285), 10,
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
  [19108] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(281), 1,
      sym__block_comment,
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
  [19137] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(282), 1,
      sym__block_comment,
    ACTIONS(415), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(413), 10,
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
  [19166] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(283), 1,
      sym__block_comment,
    ACTIONS(419), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(417), 10,
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
  [19195] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(284), 1,
      sym__block_comment,
    ACTIONS(423), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(421), 10,
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
  [19224] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(285), 1,
      sym__block_comment,
    ACTIONS(427), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(425), 10,
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
  [19253] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(547), 1,
      sym_bitwise_xor_operator,
    STATE(286), 1,
      sym__block_comment,
    ACTIONS(297), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(295), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19284] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
    STATE(287), 1,
      sym__block_comment,
    ACTIONS(411), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(409), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19315] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(543), 1,
      sym_logical_and_operator,
    STATE(288), 1,
      sym__block_comment,
    ACTIONS(431), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(429), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19346] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(545), 1,
      sym_bitwise_or_operator,
    STATE(289), 1,
      sym__block_comment,
    ACTIONS(435), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(433), 10,
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
  [19377] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(547), 1,
      sym_bitwise_xor_operator,
    STATE(290), 1,
      sym__block_comment,
    ACTIONS(439), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(437), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19408] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(511), 1,
      sym_bitwise_and_operator,
    STATE(291), 1,
      sym__block_comment,
    ACTIONS(443), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(441), 10,
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
  [19439] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(513), 1,
      sym_equality_operator,
    STATE(292), 1,
      sym__block_comment,
    ACTIONS(447), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(445), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19470] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(515), 1,
      sym_relational_operator,
    STATE(293), 1,
      sym__block_comment,
    ACTIONS(329), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [19501] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(517), 1,
      sym_shift_operator,
    STATE(294), 1,
      sym__block_comment,
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
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [19532] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(551), 1,
      sym_additive_operator,
    STATE(295), 1,
      sym__block_comment,
    ACTIONS(303), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(301), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [19563] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(519), 1,
      sym_multiplicative_operator,
    STATE(296), 1,
      sym__block_comment,
    ACTIONS(387), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(385), 10,
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
  [19594] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(297), 1,
      sym__block_comment,
    ACTIONS(391), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(389), 10,
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
  [19623] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(298), 1,
      sym__block_comment,
    ACTIONS(407), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(405), 10,
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
  [19652] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(299), 1,
      sym__block_comment,
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
  [19681] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(300), 1,
      sym__block_comment,
    ACTIONS(395), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(393), 10,
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
  [19710] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(301), 1,
      sym__block_comment,
    ACTIONS(361), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(359), 10,
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
  [19739] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    STATE(302), 1,
      sym__block_comment,
    ACTIONS(411), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(409), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19770] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
    STATE(303), 1,
      sym__block_comment,
    ACTIONS(411), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(409), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19801] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(304), 1,
      sym__block_comment,
    ACTIONS(399), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
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
  [19830] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
    STATE(305), 1,
      sym__block_comment,
    ACTIONS(411), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(409), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19861] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
    STATE(306), 1,
      sym__block_comment,
    ACTIONS(411), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(409), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19892] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(307), 1,
      sym__block_comment,
    ACTIONS(403), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(401), 10,
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
  [19921] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
    STATE(308), 1,
      sym__block_comment,
    ACTIONS(411), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(409), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19952] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(563), 1,
      anon_sym_RPAREN,
    STATE(309), 1,
      sym__block_comment,
    ACTIONS(411), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(409), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19983] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(310), 1,
      sym__block_comment,
    ACTIONS(251), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(249), 10,
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
  [20012] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
    STATE(311), 1,
      sym__block_comment,
    ACTIONS(411), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(409), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20043] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(567), 1,
      anon_sym_RPAREN,
    STATE(312), 1,
      sym__block_comment,
    ACTIONS(411), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(409), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20074] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(569), 1,
      anon_sym_RPAREN,
    STATE(313), 1,
      sym__block_comment,
    ACTIONS(411), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(409), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20105] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(571), 1,
      anon_sym_RPAREN,
    STATE(314), 1,
      sym__block_comment,
    ACTIONS(411), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(409), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20136] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(315), 1,
      sym__block_comment,
    ACTIONS(411), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(409), 10,
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
  [20165] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(551), 1,
      sym_additive_operator,
    STATE(316), 1,
      sym__block_comment,
    ACTIONS(353), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(351), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [20196] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(317), 1,
      sym__block_comment,
    ACTIONS(411), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(409), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20223] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(573), 1,
      anon_sym_LPAREN,
    ACTIONS(575), 1,
      sym_assignment_operator,
    STATE(318), 1,
      sym__block_comment,
    ACTIONS(375), 4,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(373), 7,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20254] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(319), 1,
      sym__block_comment,
    ACTIONS(423), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(421), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20281] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(320), 1,
      sym__block_comment,
    ACTIONS(427), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(425), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20308] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(577), 1,
      sym_logical_and_operator,
    STATE(321), 1,
      sym__block_comment,
    ACTIONS(431), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(429), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20337] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(579), 1,
      sym_bitwise_or_operator,
    STATE(322), 1,
      sym__block_comment,
    ACTIONS(435), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(433), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20366] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(581), 1,
      sym_bitwise_xor_operator,
    STATE(323), 1,
      sym__block_comment,
    ACTIONS(439), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(437), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20395] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(583), 1,
      sym_bitwise_and_operator,
    STATE(324), 1,
      sym__block_comment,
    ACTIONS(443), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(441), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20424] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(585), 1,
      sym_equality_operator,
    STATE(325), 1,
      sym__block_comment,
    ACTIONS(447), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(445), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20453] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(587), 1,
      sym_relational_operator,
    STATE(326), 1,
      sym__block_comment,
    ACTIONS(329), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [20482] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(589), 1,
      sym_shift_operator,
    STATE(327), 1,
      sym__block_comment,
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
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [20511] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(591), 1,
      sym_additive_operator,
    STATE(328), 1,
      sym__block_comment,
    ACTIONS(303), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(301), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [20540] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(593), 1,
      sym_multiplicative_operator,
    STATE(329), 1,
      sym__block_comment,
    ACTIONS(387), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(385), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20569] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(330), 1,
      sym__block_comment,
    ACTIONS(391), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(389), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20596] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(331), 1,
      sym__block_comment,
    ACTIONS(395), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(393), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20623] = 13,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(529), 1,
      anon_sym_COMMA,
    ACTIONS(535), 1,
      sym__operand_separator,
    ACTIONS(537), 1,
      sym__data_separator,
    STATE(12), 1,
      sym__data_separator_comment,
    STATE(332), 1,
      sym__block_comment,
    STATE(365), 1,
      aux_sym_numeric_operands_repeat1,
    STATE(383), 1,
      aux_sym_numeric_operands_repeat2,
    STATE(391), 1,
      aux_sym_numeric_operands_repeat3,
    ACTIONS(531), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(595), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(597), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [20666] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(593), 1,
      sym_multiplicative_operator,
    STATE(333), 1,
      sym__block_comment,
    ACTIONS(365), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(363), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20695] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(334), 1,
      sym__block_comment,
    ACTIONS(371), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(369), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20722] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(335), 1,
      sym__block_comment,
    ACTIONS(251), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(249), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20749] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(336), 1,
      sym__block_comment,
    ACTIONS(255), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(253), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20776] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(337), 1,
      sym__block_comment,
    ACTIONS(259), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(257), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20803] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(338), 1,
      sym__block_comment,
    ACTIONS(263), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(261), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20830] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(599), 1,
      sym_logical_or_operator,
    STATE(339), 1,
      sym__block_comment,
    ACTIONS(267), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(265), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20859] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(340), 1,
      sym__block_comment,
    ACTIONS(273), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(271), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20886] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(341), 1,
      sym__block_comment,
    ACTIONS(419), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(417), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20913] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(577), 1,
      sym_logical_and_operator,
    STATE(342), 1,
      sym__block_comment,
    ACTIONS(277), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(275), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20942] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(343), 1,
      sym__block_comment,
    ACTIONS(407), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(405), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20969] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(344), 1,
      sym__block_comment,
    ACTIONS(399), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(397), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20996] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(345), 1,
      sym__block_comment,
    ACTIONS(403), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(401), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21023] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(346), 1,
      sym__block_comment,
    ACTIONS(283), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(281), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21050] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(347), 1,
      sym__block_comment,
    ACTIONS(361), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(359), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21077] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(579), 1,
      sym_bitwise_or_operator,
    STATE(348), 1,
      sym__block_comment,
    ACTIONS(287), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(285), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21106] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(349), 1,
      sym__block_comment,
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
  [21133] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(581), 1,
      sym_bitwise_xor_operator,
    STATE(350), 1,
      sym__block_comment,
    ACTIONS(297), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(295), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21162] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(351), 1,
      sym__block_comment,
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
  [21189] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(583), 1,
      sym_bitwise_and_operator,
    STATE(352), 1,
      sym__block_comment,
    ACTIONS(313), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(311), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21218] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(353), 1,
      sym__block_comment,
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
  [21245] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(585), 1,
      sym_equality_operator,
    STATE(354), 1,
      sym__block_comment,
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
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21274] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(355), 1,
      sym__block_comment,
    ACTIONS(247), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(245), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21301] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(587), 1,
      sym_relational_operator,
    STATE(356), 1,
      sym__block_comment,
    ACTIONS(335), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(333), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21330] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(357), 1,
      sym__block_comment,
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
  [21357] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(589), 1,
      sym_shift_operator,
    STATE(358), 1,
      sym__block_comment,
    ACTIONS(451), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(449), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [21386] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(359), 1,
      sym__block_comment,
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
  [21413] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(591), 1,
      sym_additive_operator,
    STATE(360), 1,
      sym__block_comment,
    ACTIONS(353), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(351), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [21442] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(361), 1,
      sym__block_comment,
    ACTIONS(357), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(355), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21469] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(362), 1,
      sym__block_comment,
    ACTIONS(415), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(413), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21496] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(269), 1,
      sym_logical_or_operator,
    STATE(363), 1,
      sym__block_comment,
    ACTIONS(359), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(361), 7,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
      sym_assignment_operator,
  [21524] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      sym_assignment_operator,
    STATE(364), 1,
      sym__block_comment,
    ACTIONS(601), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(603), 5,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
  [21553] = 10,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(605), 1,
      anon_sym_COMMA,
    ACTIONS(611), 1,
      sym__operand_separator,
    ACTIONS(614), 1,
      sym__data_separator,
    STATE(34), 1,
      sym__data_separator_comment,
    ACTIONS(601), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(603), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(608), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(365), 2,
      sym__block_comment,
      aux_sym_numeric_operands_repeat1,
  [21588] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      sym_assignment_operator,
    STATE(366), 1,
      sym__block_comment,
    ACTIONS(617), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(619), 5,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
  [21617] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(453), 1,
      sym_logical_or_operator,
    STATE(367), 1,
      sym__block_comment,
    ACTIONS(359), 9,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_assignment_operator,
  [21641] = 9,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(625), 1,
      sym__data_separator,
    STATE(8), 1,
      sym__control_operand_separator,
    STATE(188), 1,
      sym__data_separator_comment,
    STATE(368), 1,
      sym__block_comment,
    STATE(369), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(623), 2,
      sym__operand_separator,
      aux_sym__control_operand_separator_token1,
    ACTIONS(621), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [21673] = 8,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(632), 1,
      sym__data_separator,
    STATE(8), 1,
      sym__control_operand_separator,
    STATE(188), 1,
      sym__data_separator_comment,
    ACTIONS(629), 2,
      sym__operand_separator,
      aux_sym__control_operand_separator_token1,
    STATE(369), 2,
      sym__block_comment,
      aux_sym_control_operands_repeat1,
    ACTIONS(627), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [21703] = 9,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(625), 1,
      sym__data_separator,
    STATE(8), 1,
      sym__control_operand_separator,
    STATE(188), 1,
      sym__data_separator_comment,
    STATE(368), 1,
      aux_sym_control_operands_repeat1,
    STATE(370), 1,
      sym__block_comment,
    ACTIONS(623), 2,
      sym__operand_separator,
      aux_sym__control_operand_separator_token1,
    ACTIONS(635), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [21735] = 9,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(641), 1,
      aux_sym__whitespace_token1,
    ACTIONS(644), 1,
      aux_sym__block_comment_token1,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    ACTIONS(648), 1,
      anon_sym_DQUOTE,
    STATE(371), 1,
      sym__block_comment,
    ACTIONS(637), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(639), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    STATE(373), 2,
      sym_string,
      aux_sym_string_operands_repeat1,
  [21766] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(652), 1,
      sym_assignment_operator,
    STATE(372), 1,
      sym__block_comment,
    ACTIONS(650), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      aux_sym__control_operand_separator_token1,
  [21791] = 8,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(658), 1,
      aux_sym__whitespace_token1,
    ACTIONS(661), 1,
      aux_sym__block_comment_token1,
    ACTIONS(664), 1,
      anon_sym_COMMA,
    ACTIONS(667), 1,
      anon_sym_DQUOTE,
    ACTIONS(654), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(656), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    STATE(373), 3,
      sym__block_comment,
      sym_string,
      aux_sym_string_operands_repeat1,
  [21820] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(483), 1,
      sym_logical_or_operator,
    STATE(374), 1,
      sym__block_comment,
    ACTIONS(359), 8,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
  [21843] = 9,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(644), 1,
      aux_sym__block_comment_token1,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    ACTIONS(648), 1,
      anon_sym_DQUOTE,
    ACTIONS(670), 1,
      aux_sym__whitespace_token1,
    STATE(375), 1,
      sym__block_comment,
    ACTIONS(507), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(509), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    STATE(371), 2,
      sym_string,
      aux_sym_string_operands_repeat1,
  [21874] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(675), 1,
      sym_assignment_operator,
    STATE(376), 1,
      sym__block_comment,
    ACTIONS(673), 6,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [21898] = 8,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(681), 1,
      aux_sym__whitespace_token1,
    ACTIONS(683), 1,
      anon_sym_COMMA,
    STATE(377), 1,
      sym__block_comment,
    STATE(385), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(677), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(679), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [21925] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(378), 1,
      sym__block_comment,
    ACTIONS(654), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(656), 5,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      aux_sym__block_comment_token1,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
  [21944] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(537), 1,
      sym__data_separator,
    STATE(379), 1,
      sym__block_comment,
    STATE(394), 1,
      aux_sym_numeric_operands_repeat2,
    STATE(416), 1,
      sym__data_separator_comment,
    ACTIONS(595), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [21969] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    STATE(380), 1,
      sym__block_comment,
    STATE(397), 1,
      aux_sym_numeric_operands_repeat3,
    ACTIONS(595), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(597), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(685), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [21994] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(381), 1,
      sym__block_comment,
    ACTIONS(687), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      aux_sym__control_operand_separator_token1,
  [22013] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(382), 1,
      sym__block_comment,
    ACTIONS(689), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(691), 5,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      aux_sym__block_comment_token1,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
  [22032] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(537), 1,
      sym__data_separator,
    STATE(383), 1,
      sym__block_comment,
    STATE(394), 1,
      aux_sym_numeric_operands_repeat2,
    STATE(416), 1,
      sym__data_separator_comment,
    ACTIONS(693), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22057] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(697), 2,
      sym__operand_separator,
      anon_sym_COMMA,
    STATE(384), 2,
      sym__block_comment,
      aux_sym_operands_repeat1,
    ACTIONS(695), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22078] = 8,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(681), 1,
      aux_sym__whitespace_token1,
    ACTIONS(683), 1,
      anon_sym_COMMA,
    STATE(385), 1,
      sym__block_comment,
    STATE(398), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(700), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(702), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22105] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(706), 1,
      anon_sym_COMMA,
    ACTIONS(708), 1,
      sym__operand_separator,
    STATE(386), 1,
      sym__block_comment,
    STATE(388), 1,
      aux_sym_operands_repeat1,
    ACTIONS(704), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22130] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(387), 1,
      sym__block_comment,
    ACTIONS(627), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      aux_sym__control_operand_separator_token1,
  [22149] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(706), 1,
      anon_sym_COMMA,
    ACTIONS(712), 1,
      sym__operand_separator,
    STATE(384), 1,
      aux_sym_operands_repeat1,
    STATE(388), 1,
      sym__block_comment,
    ACTIONS(710), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22174] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(389), 1,
      sym__block_comment,
    ACTIONS(714), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(716), 5,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      aux_sym__block_comment_token1,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
  [22193] = 8,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(722), 1,
      aux_sym__whitespace_token1,
    ACTIONS(724), 1,
      aux_sym__block_comment_token1,
    ACTIONS(726), 1,
      anon_sym_LPAREN,
    STATE(390), 1,
      sym__block_comment,
    STATE(452), 1,
      sym__call_expression,
    ACTIONS(718), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(720), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22220] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    STATE(391), 1,
      sym__block_comment,
    STATE(397), 1,
      aux_sym_numeric_operands_repeat3,
    ACTIONS(685), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(693), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(728), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22245] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(392), 1,
      sym__block_comment,
    ACTIONS(714), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      aux_sym__control_operand_separator_token1,
  [22264] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(393), 1,
      sym__block_comment,
    ACTIONS(730), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      aux_sym__control_operand_separator_token1,
  [22283] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(734), 1,
      sym__data_separator,
    STATE(416), 1,
      sym__data_separator_comment,
    STATE(394), 2,
      sym__block_comment,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(732), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22306] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(395), 1,
      sym__block_comment,
    ACTIONS(650), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      aux_sym__control_operand_separator_token1,
  [22325] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(741), 1,
      anon_sym_COMMA,
    STATE(396), 1,
      sym__block_comment,
    ACTIONS(737), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(739), 4,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_SPACE,
      anon_sym_TAB,
  [22348] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(743), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(745), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(747), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(397), 2,
      sym__block_comment,
      aux_sym_numeric_operands_repeat3,
  [22371] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(754), 1,
      aux_sym__whitespace_token1,
    ACTIONS(757), 1,
      anon_sym_COMMA,
    ACTIONS(750), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(752), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    STATE(398), 2,
      sym__block_comment,
      aux_sym_macro_parameters_repeat1,
  [22396] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(399), 1,
      sym__block_comment,
    ACTIONS(689), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      aux_sym__control_operand_separator_token1,
  [22415] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(764), 1,
      aux_sym__whitespace_token1,
    ACTIONS(766), 1,
      anon_sym_LPAREN,
    STATE(400), 1,
      sym__block_comment,
    ACTIONS(760), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(762), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22439] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(539), 1,
      sym_logical_or_operator,
    STATE(401), 1,
      sym__block_comment,
    ACTIONS(359), 5,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
  [22459] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(402), 1,
      sym__block_comment,
    ACTIONS(689), 6,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [22477] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(403), 1,
      sym__block_comment,
    ACTIONS(768), 6,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [22495] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    STATE(404), 1,
      sym__block_comment,
    ACTIONS(737), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(739), 4,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_SPACE,
      anon_sym_TAB,
  [22515] = 9,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(770), 1,
      anon_sym_SEMI,
    ACTIONS(772), 1,
      aux_sym__line_comment_token1,
    ACTIONS(774), 1,
      sym__line_separator,
    STATE(109), 1,
      sym__line_separator_comment,
    STATE(405), 1,
      sym__block_comment,
    STATE(467), 1,
      sym__line_comment,
  [22543] = 9,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(770), 1,
      anon_sym_SEMI,
    ACTIONS(772), 1,
      aux_sym__line_comment_token1,
    ACTIONS(774), 1,
      sym__line_separator,
    ACTIONS(776), 1,
      ts_builtin_sym_end,
    STATE(109), 1,
      sym__line_separator_comment,
    STATE(406), 1,
      sym__block_comment,
    STATE(471), 1,
      sym__line_comment,
  [22571] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(407), 1,
      sym__block_comment,
    ACTIONS(673), 6,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [22589] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(408), 1,
      sym__block_comment,
    ACTIONS(714), 6,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [22607] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    STATE(409), 1,
      sym__block_comment,
    ACTIONS(750), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(752), 3,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [22627] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    STATE(410), 1,
      sym__block_comment,
    ACTIONS(778), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(780), 3,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [22647] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(786), 1,
      aux_sym__whitespace_token1,
    STATE(411), 1,
      sym__block_comment,
    ACTIONS(782), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(784), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22668] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(724), 1,
      aux_sym__block_comment_token1,
    ACTIONS(792), 1,
      aux_sym__whitespace_token1,
    STATE(412), 1,
      sym__block_comment,
    ACTIONS(788), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(790), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22689] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(798), 1,
      aux_sym__whitespace_token1,
    ACTIONS(800), 1,
      aux_sym__block_comment_token1,
    STATE(413), 1,
      sym__block_comment,
    ACTIONS(794), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(796), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22710] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(521), 1,
      anon_sym_LPAREN,
    ACTIONS(802), 1,
      sym_assignment_operator,
    STATE(414), 1,
      sym__block_comment,
    ACTIONS(673), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [22731] = 8,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(770), 1,
      anon_sym_SEMI,
    ACTIONS(772), 1,
      aux_sym__line_comment_token1,
    ACTIONS(774), 1,
      sym__line_separator,
    STATE(109), 1,
      sym__line_separator_comment,
    STATE(415), 1,
      sym__block_comment,
    STATE(486), 1,
      sym__line_comment,
  [22756] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(416), 1,
      sym__block_comment,
    ACTIONS(161), 5,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22773] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(521), 1,
      anon_sym_LPAREN,
    ACTIONS(802), 1,
      sym_assignment_operator,
    ACTIONS(804), 1,
      anon_sym_RPAREN,
    STATE(417), 1,
      sym__block_comment,
    ACTIONS(673), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [22796] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(521), 1,
      anon_sym_LPAREN,
    ACTIONS(802), 1,
      sym_assignment_operator,
    ACTIONS(807), 1,
      anon_sym_RPAREN,
    STATE(418), 1,
      sym__block_comment,
    ACTIONS(673), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [22819] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(521), 1,
      anon_sym_LPAREN,
    ACTIONS(802), 1,
      sym_assignment_operator,
    ACTIONS(810), 1,
      anon_sym_RPAREN,
    STATE(419), 1,
      sym__block_comment,
    ACTIONS(673), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [22842] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(420), 1,
      sym__block_comment,
    ACTIONS(813), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(815), 3,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      aux_sym__block_comment_token1,
  [22859] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(521), 1,
      anon_sym_LPAREN,
    ACTIONS(802), 1,
      sym_assignment_operator,
    ACTIONS(817), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym__block_comment,
    ACTIONS(673), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [22882] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(521), 1,
      anon_sym_LPAREN,
    ACTIONS(802), 1,
      sym_assignment_operator,
    ACTIONS(820), 1,
      anon_sym_RPAREN,
    STATE(422), 1,
      sym__block_comment,
    ACTIONS(673), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [22905] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(423), 1,
      sym__block_comment,
    ACTIONS(823), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(825), 3,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      aux_sym__block_comment_token1,
  [22922] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(827), 1,
      anon_sym_DQUOTE,
    STATE(424), 1,
      sym__block_comment,
    STATE(451), 1,
      aux_sym_string_repeat1,
    ACTIONS(829), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [22942] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(425), 1,
      sym__block_comment,
    ACTIONS(831), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22958] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(710), 1,
      anon_sym_RPAREN,
    ACTIONS(833), 1,
      anon_sym_COMMA,
    ACTIONS(835), 1,
      sym__operand_separator,
    STATE(426), 1,
      sym__block_comment,
    STATE(454), 1,
      aux_sym_operands_repeat1,
  [22980] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(427), 1,
      sym__block_comment,
    ACTIONS(837), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22996] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(839), 1,
      anon_sym_DQUOTE,
    STATE(428), 1,
      sym__block_comment,
    STATE(444), 1,
      aux_sym_string_repeat1,
    ACTIONS(829), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23016] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(841), 1,
      aux_sym__whitespace_token1,
    ACTIONS(843), 1,
      anon_sym_RPAREN,
    ACTIONS(845), 1,
      sym_macro_parameter,
    STATE(429), 1,
      sym__block_comment,
    STATE(488), 1,
      sym_macro_parameters,
  [23038] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(679), 1,
      anon_sym_RPAREN,
    ACTIONS(847), 1,
      aux_sym__whitespace_token1,
    ACTIONS(850), 1,
      anon_sym_COMMA,
    STATE(430), 1,
      sym__block_comment,
    STATE(449), 1,
      aux_sym_macro_parameters_repeat1,
  [23060] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(845), 1,
      sym_macro_parameter,
    ACTIONS(852), 1,
      aux_sym__whitespace_token1,
    ACTIONS(854), 1,
      anon_sym_RPAREN,
    STATE(431), 1,
      sym__block_comment,
    STATE(479), 1,
      sym_macro_parameters,
  [23082] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(432), 1,
      sym__block_comment,
    ACTIONS(856), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23098] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(433), 1,
      sym__block_comment,
    ACTIONS(858), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23114] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(434), 1,
      sym__block_comment,
    ACTIONS(503), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23130] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(435), 1,
      sym__block_comment,
    ACTIONS(860), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23146] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(436), 1,
      sym__block_comment,
    ACTIONS(862), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23162] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(704), 1,
      anon_sym_RPAREN,
    ACTIONS(833), 1,
      anon_sym_COMMA,
    ACTIONS(864), 1,
      sym__operand_separator,
    STATE(426), 1,
      aux_sym_operands_repeat1,
    STATE(437), 1,
      sym__block_comment,
  [23184] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(599), 1,
      sym_logical_or_operator,
    STATE(438), 1,
      sym__block_comment,
    ACTIONS(359), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_assignment_operator,
  [23202] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(439), 1,
      sym__block_comment,
    ACTIONS(866), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23218] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(868), 1,
      anon_sym_DQUOTE,
    STATE(424), 1,
      aux_sym_string_repeat1,
    STATE(440), 1,
      sym__block_comment,
    ACTIONS(829), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23238] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(752), 1,
      anon_sym_RPAREN,
    ACTIONS(870), 1,
      aux_sym__whitespace_token1,
    ACTIONS(873), 1,
      anon_sym_COMMA,
    STATE(441), 2,
      sym__block_comment,
      aux_sym_macro_parameters_repeat1,
  [23258] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(442), 1,
      sym__block_comment,
    ACTIONS(831), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23274] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(876), 1,
      anon_sym_DQUOTE,
    STATE(443), 1,
      sym__block_comment,
    STATE(446), 1,
      aux_sym_string_repeat1,
    ACTIONS(829), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23294] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(878), 1,
      anon_sym_DQUOTE,
    STATE(444), 1,
      sym__block_comment,
    STATE(451), 1,
      aux_sym_string_repeat1,
    ACTIONS(829), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23314] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(445), 1,
      sym__block_comment,
    ACTIONS(880), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23330] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(882), 1,
      anon_sym_DQUOTE,
    STATE(446), 1,
      sym__block_comment,
    STATE(451), 1,
      aux_sym_string_repeat1,
    ACTIONS(829), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23350] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(884), 1,
      anon_sym_DQUOTE,
    STATE(447), 1,
      sym__block_comment,
    STATE(448), 1,
      aux_sym_string_repeat1,
    ACTIONS(829), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23370] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(886), 1,
      anon_sym_DQUOTE,
    STATE(448), 1,
      sym__block_comment,
    STATE(451), 1,
      aux_sym_string_repeat1,
    ACTIONS(829), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23390] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(702), 1,
      anon_sym_RPAREN,
    ACTIONS(850), 1,
      anon_sym_COMMA,
    ACTIONS(888), 1,
      aux_sym__whitespace_token1,
    STATE(441), 1,
      aux_sym_macro_parameters_repeat1,
    STATE(449), 1,
      sym__block_comment,
  [23412] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(450), 1,
      sym__block_comment,
    ACTIONS(891), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23428] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(893), 1,
      anon_sym_DQUOTE,
    ACTIONS(895), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
    STATE(451), 2,
      sym__block_comment,
      aux_sym_string_repeat1,
  [23446] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(452), 1,
      sym__block_comment,
    ACTIONS(898), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23462] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(453), 1,
      sym__block_comment,
    ACTIONS(900), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23478] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(695), 1,
      anon_sym_RPAREN,
    ACTIONS(902), 2,
      sym__operand_separator,
      anon_sym_COMMA,
    STATE(454), 2,
      sym__block_comment,
      aux_sym_operands_repeat1,
  [23496] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(455), 1,
      sym__block_comment,
    ACTIONS(905), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23512] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(456), 1,
      sym__block_comment,
    ACTIONS(907), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23528] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(457), 1,
      sym__block_comment,
    ACTIONS(909), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23544] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(458), 1,
      sym__block_comment,
    ACTIONS(831), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23560] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(459), 1,
      sym__block_comment,
    ACTIONS(911), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23576] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(460), 1,
      sym__block_comment,
    ACTIONS(913), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23592] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(461), 1,
      sym__block_comment,
    ACTIONS(915), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23608] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(573), 1,
      anon_sym_LPAREN,
    ACTIONS(917), 1,
      anon_sym_RPAREN,
    ACTIONS(919), 1,
      sym_assignment_operator,
    STATE(462), 1,
      sym__block_comment,
  [23627] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(463), 1,
      sym__block_comment,
    ACTIONS(714), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23642] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(750), 1,
      aux_sym__whitespace_token1,
    STATE(464), 1,
      sym__block_comment,
    ACTIONS(752), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23659] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(573), 1,
      anon_sym_LPAREN,
    ACTIONS(919), 1,
      sym_assignment_operator,
    ACTIONS(921), 1,
      anon_sym_RPAREN,
    STATE(465), 1,
      sym__block_comment,
  [23678] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    STATE(466), 1,
      sym__block_comment,
    ACTIONS(923), 3,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23693] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(774), 1,
      sym__line_separator,
    ACTIONS(776), 1,
      ts_builtin_sym_end,
    STATE(106), 1,
      sym__line_separator_comment,
    STATE(467), 1,
      sym__block_comment,
  [23712] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(573), 1,
      anon_sym_LPAREN,
    ACTIONS(919), 1,
      sym_assignment_operator,
    ACTIONS(925), 1,
      anon_sym_RPAREN,
    STATE(468), 1,
      sym__block_comment,
  [23731] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(573), 1,
      anon_sym_LPAREN,
    ACTIONS(919), 1,
      sym_assignment_operator,
    ACTIONS(927), 1,
      anon_sym_RPAREN,
    STATE(469), 1,
      sym__block_comment,
  [23750] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(470), 1,
      sym__block_comment,
    ACTIONS(768), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23765] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(774), 1,
      sym__line_separator,
    ACTIONS(929), 1,
      ts_builtin_sym_end,
    STATE(106), 1,
      sym__line_separator_comment,
    STATE(471), 1,
      sym__block_comment,
  [23784] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(573), 1,
      anon_sym_LPAREN,
    ACTIONS(919), 1,
      sym_assignment_operator,
    ACTIONS(931), 1,
      anon_sym_RPAREN,
    STATE(472), 1,
      sym__block_comment,
  [23803] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(933), 1,
      anon_sym_LPAREN,
    ACTIONS(935), 1,
      sym_macro_parameter,
    STATE(433), 1,
      sym_macro_parameters,
    STATE(473), 1,
      sym__block_comment,
  [23822] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(474), 1,
      sym__block_comment,
    ACTIONS(689), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23837] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(475), 1,
      sym__block_comment,
    ACTIONS(673), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23852] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(778), 1,
      aux_sym__whitespace_token1,
    STATE(476), 1,
      sym__block_comment,
    ACTIONS(780), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23869] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(770), 1,
      aux_sym__statement_token1,
    STATE(477), 1,
      sym__block_comment,
  [23885] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    STATE(478), 1,
      sym__block_comment,
    ACTIONS(937), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [23899] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(939), 1,
      aux_sym__whitespace_token1,
    ACTIONS(941), 1,
      anon_sym_RPAREN,
    STATE(479), 1,
      sym__block_comment,
  [23915] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(943), 1,
      anon_sym_COMMA,
    ACTIONS(945), 1,
      sym_macro_parameter,
    STATE(480), 1,
      sym__block_comment,
  [23931] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(947), 1,
      anon_sym_COMMA,
    ACTIONS(949), 1,
      sym_macro_parameter,
    STATE(481), 1,
      sym__block_comment,
  [23947] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(770), 1,
      aux_sym__statement_token1,
    ACTIONS(776), 1,
      ts_builtin_sym_end,
    STATE(482), 1,
      sym__block_comment,
  [23963] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    STATE(483), 1,
      sym__block_comment,
    ACTIONS(951), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [23977] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    STATE(484), 1,
      sym__block_comment,
    ACTIONS(953), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [23991] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    STATE(485), 1,
      sym__block_comment,
    ACTIONS(955), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [24005] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(774), 1,
      sym__line_separator,
    STATE(106), 1,
      sym__line_separator_comment,
    STATE(486), 1,
      sym__block_comment,
  [24021] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    STATE(378), 1,
      sym_string,
    STATE(487), 1,
      sym__block_comment,
  [24037] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(957), 1,
      aux_sym__whitespace_token1,
    ACTIONS(959), 1,
      anon_sym_RPAREN,
    STATE(488), 1,
      sym__block_comment,
  [24053] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    STATE(489), 1,
      sym__block_comment,
    ACTIONS(961), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [24067] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(919), 1,
      sym_assignment_operator,
    ACTIONS(963), 1,
      anon_sym_LPAREN,
    STATE(490), 1,
      sym__block_comment,
  [24083] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(491), 1,
      sym__block_comment,
    ACTIONS(241), 2,
      anon_sym_DQUOTE,
      sym_macro_name,
  [24097] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(492), 1,
      sym__block_comment,
    ACTIONS(965), 2,
      sym__line_separator,
      ts_builtin_sym_end,
  [24111] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    STATE(493), 1,
      sym__block_comment,
    ACTIONS(965), 2,
      ts_builtin_sym_end,
      aux_sym__statement_token1,
  [24125] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(919), 1,
      sym_assignment_operator,
    STATE(494), 1,
      sym__block_comment,
  [24141] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(521), 1,
      anon_sym_LPAREN,
    ACTIONS(919), 1,
      sym_assignment_operator,
    STATE(495), 1,
      sym__block_comment,
  [24157] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(919), 1,
      sym_assignment_operator,
    ACTIONS(967), 1,
      anon_sym_LPAREN,
    STATE(496), 1,
      sym__block_comment,
  [24173] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(573), 1,
      anon_sym_LPAREN,
    ACTIONS(919), 1,
      sym_assignment_operator,
    STATE(497), 1,
      sym__block_comment,
  [24189] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(919), 1,
      sym_assignment_operator,
    STATE(498), 1,
      sym__block_comment,
  [24205] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(969), 1,
      anon_sym_SQUOTE,
    STATE(499), 1,
      sym__block_comment,
  [24218] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(971), 1,
      anon_sym_RPAREN,
    STATE(500), 1,
      sym__block_comment,
  [24231] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(973), 1,
      anon_sym_RPAREN,
    STATE(501), 1,
      sym__block_comment,
  [24244] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(975), 1,
      anon_sym_RPAREN,
    STATE(502), 1,
      sym__block_comment,
  [24257] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(977), 1,
      anon_sym_RPAREN,
    STATE(503), 1,
      sym__block_comment,
  [24270] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(979), 1,
      aux_sym__whitespace_token1,
    ACTIONS(981), 1,
      aux_sym__block_comment_token1,
    STATE(504), 1,
      sym__block_comment,
  [24283] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(983), 1,
      anon_sym_RPAREN,
    STATE(505), 1,
      sym__block_comment,
  [24296] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(985), 1,
      anon_sym_RPAREN,
    STATE(506), 1,
      sym__block_comment,
  [24309] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(776), 1,
      ts_builtin_sym_end,
    STATE(507), 1,
      sym__block_comment,
  [24322] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(987), 1,
      anon_sym_RPAREN,
    STATE(508), 1,
      sym__block_comment,
  [24335] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(989), 1,
      anon_sym_RPAREN,
    STATE(509), 1,
      sym__block_comment,
  [24348] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(991), 1,
      anon_sym_RPAREN,
    STATE(510), 1,
      sym__block_comment,
  [24361] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(993), 1,
      anon_sym_RPAREN,
    STATE(511), 1,
      sym__block_comment,
  [24374] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(995), 1,
      ts_builtin_sym_end,
    STATE(512), 1,
      sym__block_comment,
  [24387] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(929), 1,
      ts_builtin_sym_end,
    STATE(513), 1,
      sym__block_comment,
  [24400] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(997), 1,
      anon_sym_COMMA,
    STATE(514), 1,
      sym__block_comment,
  [24413] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(999), 1,
      anon_sym_RPAREN,
    STATE(515), 1,
      sym__block_comment,
  [24426] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1001), 1,
      anon_sym_RPAREN,
    STATE(516), 1,
      sym__block_comment,
  [24439] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1003), 1,
      anon_sym_RPAREN,
    STATE(517), 1,
      sym__block_comment,
  [24452] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1005), 1,
      aux_sym__whitespace_token1,
    ACTIONS(1007), 1,
      aux_sym__block_comment_token1,
    STATE(518), 1,
      sym__block_comment,
  [24465] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1009), 1,
      sym_macro_parameter,
    STATE(519), 1,
      sym__block_comment,
  [24478] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1011), 1,
      anon_sym_SQUOTE,
    STATE(520), 1,
      sym__block_comment,
  [24491] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(644), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1013), 1,
      aux_sym__whitespace_token1,
    STATE(521), 1,
      sym__block_comment,
  [24504] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1015), 1,
      anon_sym_RPAREN,
    STATE(522), 1,
      sym__block_comment,
  [24517] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1017), 1,
      anon_sym_SQUOTE,
    STATE(523), 1,
      sym__block_comment,
  [24530] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1019), 1,
      anon_sym_RPAREN,
    STATE(524), 1,
      sym__block_comment,
  [24543] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1021), 1,
      anon_sym_RPAREN,
    STATE(525), 1,
      sym__block_comment,
  [24556] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1023), 1,
      anon_sym_RPAREN,
    STATE(526), 1,
      sym__block_comment,
  [24569] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1025), 1,
      sym_macro_name,
    STATE(527), 1,
      sym__block_comment,
  [24582] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1027), 1,
      anon_sym_SQUOTE,
    STATE(528), 1,
      sym__block_comment,
  [24595] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(945), 1,
      sym_macro_parameter,
    STATE(529), 1,
      sym__block_comment,
  [24608] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1029), 1,
      anon_sym_LPAREN,
    STATE(530), 1,
      sym__block_comment,
  [24621] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1031), 1,
      sym_macro_parameter,
    STATE(531), 1,
      sym__block_comment,
  [24634] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1033), 1,
      anon_sym_LPAREN,
    STATE(532), 1,
      sym__block_comment,
  [24647] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1035), 1,
      anon_sym_SQUOTE,
    STATE(533), 1,
      sym__block_comment,
  [24660] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1037), 1,
      anon_sym_LPAREN,
    STATE(534), 1,
      sym__block_comment,
  [24673] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(949), 1,
      sym_macro_parameter,
    STATE(535), 1,
      sym__block_comment,
  [24686] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1039), 1,
      anon_sym_LPAREN,
    STATE(536), 1,
      sym__block_comment,
  [24699] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1041), 1,
      anon_sym_RPAREN,
    STATE(537), 1,
      sym__block_comment,
  [24712] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1043), 1,
      anon_sym_LPAREN,
    STATE(538), 1,
      sym__block_comment,
  [24725] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(13), 1,
      aux_sym__block_comment_token1,
    ACTIONS(770), 1,
      aux_sym__statement_token1,
    STATE(539), 1,
      sym__block_comment,
  [24738] = 1,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 151,
  [SMALL_STATE(4)] = 257,
  [SMALL_STATE(5)] = 365,
  [SMALL_STATE(6)] = 511,
  [SMALL_STATE(7)] = 651,
  [SMALL_STATE(8)] = 791,
  [SMALL_STATE(9)] = 933,
  [SMALL_STATE(10)] = 1073,
  [SMALL_STATE(11)] = 1207,
  [SMALL_STATE(12)] = 1351,
  [SMALL_STATE(13)] = 1483,
  [SMALL_STATE(14)] = 1624,
  [SMALL_STATE(15)] = 1765,
  [SMALL_STATE(16)] = 1906,
  [SMALL_STATE(17)] = 2047,
  [SMALL_STATE(18)] = 2184,
  [SMALL_STATE(19)] = 2321,
  [SMALL_STATE(20)] = 2462,
  [SMALL_STATE(21)] = 2603,
  [SMALL_STATE(22)] = 2744,
  [SMALL_STATE(23)] = 2885,
  [SMALL_STATE(24)] = 3026,
  [SMALL_STATE(25)] = 3167,
  [SMALL_STATE(26)] = 3308,
  [SMALL_STATE(27)] = 3449,
  [SMALL_STATE(28)] = 3587,
  [SMALL_STATE(29)] = 3721,
  [SMALL_STATE(30)] = 3855,
  [SMALL_STATE(31)] = 3980,
  [SMALL_STATE(32)] = 4105,
  [SMALL_STATE(33)] = 4230,
  [SMALL_STATE(34)] = 4355,
  [SMALL_STATE(35)] = 4480,
  [SMALL_STATE(36)] = 4605,
  [SMALL_STATE(37)] = 4730,
  [SMALL_STATE(38)] = 4855,
  [SMALL_STATE(39)] = 4980,
  [SMALL_STATE(40)] = 5105,
  [SMALL_STATE(41)] = 5230,
  [SMALL_STATE(42)] = 5355,
  [SMALL_STATE(43)] = 5480,
  [SMALL_STATE(44)] = 5605,
  [SMALL_STATE(45)] = 5730,
  [SMALL_STATE(46)] = 5855,
  [SMALL_STATE(47)] = 5980,
  [SMALL_STATE(48)] = 6105,
  [SMALL_STATE(49)] = 6230,
  [SMALL_STATE(50)] = 6355,
  [SMALL_STATE(51)] = 6480,
  [SMALL_STATE(52)] = 6605,
  [SMALL_STATE(53)] = 6730,
  [SMALL_STATE(54)] = 6855,
  [SMALL_STATE(55)] = 6980,
  [SMALL_STATE(56)] = 7105,
  [SMALL_STATE(57)] = 7230,
  [SMALL_STATE(58)] = 7355,
  [SMALL_STATE(59)] = 7480,
  [SMALL_STATE(60)] = 7605,
  [SMALL_STATE(61)] = 7730,
  [SMALL_STATE(62)] = 7855,
  [SMALL_STATE(63)] = 7980,
  [SMALL_STATE(64)] = 8105,
  [SMALL_STATE(65)] = 8230,
  [SMALL_STATE(66)] = 8355,
  [SMALL_STATE(67)] = 8480,
  [SMALL_STATE(68)] = 8605,
  [SMALL_STATE(69)] = 8730,
  [SMALL_STATE(70)] = 8855,
  [SMALL_STATE(71)] = 8980,
  [SMALL_STATE(72)] = 9105,
  [SMALL_STATE(73)] = 9230,
  [SMALL_STATE(74)] = 9355,
  [SMALL_STATE(75)] = 9480,
  [SMALL_STATE(76)] = 9605,
  [SMALL_STATE(77)] = 9730,
  [SMALL_STATE(78)] = 9855,
  [SMALL_STATE(79)] = 9980,
  [SMALL_STATE(80)] = 10105,
  [SMALL_STATE(81)] = 10230,
  [SMALL_STATE(82)] = 10355,
  [SMALL_STATE(83)] = 10480,
  [SMALL_STATE(84)] = 10605,
  [SMALL_STATE(85)] = 10730,
  [SMALL_STATE(86)] = 10855,
  [SMALL_STATE(87)] = 10980,
  [SMALL_STATE(88)] = 11105,
  [SMALL_STATE(89)] = 11230,
  [SMALL_STATE(90)] = 11355,
  [SMALL_STATE(91)] = 11480,
  [SMALL_STATE(92)] = 11605,
  [SMALL_STATE(93)] = 11730,
  [SMALL_STATE(94)] = 11855,
  [SMALL_STATE(95)] = 11980,
  [SMALL_STATE(96)] = 12105,
  [SMALL_STATE(97)] = 12230,
  [SMALL_STATE(98)] = 12355,
  [SMALL_STATE(99)] = 12480,
  [SMALL_STATE(100)] = 12605,
  [SMALL_STATE(101)] = 12730,
  [SMALL_STATE(102)] = 12855,
  [SMALL_STATE(103)] = 12915,
  [SMALL_STATE(104)] = 12975,
  [SMALL_STATE(105)] = 13035,
  [SMALL_STATE(106)] = 13092,
  [SMALL_STATE(107)] = 13149,
  [SMALL_STATE(108)] = 13206,
  [SMALL_STATE(109)] = 13263,
  [SMALL_STATE(110)] = 13320,
  [SMALL_STATE(111)] = 13377,
  [SMALL_STATE(112)] = 13414,
  [SMALL_STATE(113)] = 13449,
  [SMALL_STATE(114)] = 13484,
  [SMALL_STATE(115)] = 13519,
  [SMALL_STATE(116)] = 13554,
  [SMALL_STATE(117)] = 13589,
  [SMALL_STATE(118)] = 13626,
  [SMALL_STATE(119)] = 13661,
  [SMALL_STATE(120)] = 13698,
  [SMALL_STATE(121)] = 13733,
  [SMALL_STATE(122)] = 13770,
  [SMALL_STATE(123)] = 13805,
  [SMALL_STATE(124)] = 13842,
  [SMALL_STATE(125)] = 13879,
  [SMALL_STATE(126)] = 13914,
  [SMALL_STATE(127)] = 13951,
  [SMALL_STATE(128)] = 13986,
  [SMALL_STATE(129)] = 14023,
  [SMALL_STATE(130)] = 14060,
  [SMALL_STATE(131)] = 14097,
  [SMALL_STATE(132)] = 14132,
  [SMALL_STATE(133)] = 14169,
  [SMALL_STATE(134)] = 14204,
  [SMALL_STATE(135)] = 14241,
  [SMALL_STATE(136)] = 14276,
  [SMALL_STATE(137)] = 14311,
  [SMALL_STATE(138)] = 14348,
  [SMALL_STATE(139)] = 14383,
  [SMALL_STATE(140)] = 14422,
  [SMALL_STATE(141)] = 14457,
  [SMALL_STATE(142)] = 14494,
  [SMALL_STATE(143)] = 14529,
  [SMALL_STATE(144)] = 14564,
  [SMALL_STATE(145)] = 14599,
  [SMALL_STATE(146)] = 14634,
  [SMALL_STATE(147)] = 14669,
  [SMALL_STATE(148)] = 14704,
  [SMALL_STATE(149)] = 14739,
  [SMALL_STATE(150)] = 14774,
  [SMALL_STATE(151)] = 14809,
  [SMALL_STATE(152)] = 14844,
  [SMALL_STATE(153)] = 14879,
  [SMALL_STATE(154)] = 14916,
  [SMALL_STATE(155)] = 14953,
  [SMALL_STATE(156)] = 14990,
  [SMALL_STATE(157)] = 15027,
  [SMALL_STATE(158)] = 15064,
  [SMALL_STATE(159)] = 15101,
  [SMALL_STATE(160)] = 15134,
  [SMALL_STATE(161)] = 15169,
  [SMALL_STATE(162)] = 15202,
  [SMALL_STATE(163)] = 15237,
  [SMALL_STATE(164)] = 15270,
  [SMALL_STATE(165)] = 15303,
  [SMALL_STATE(166)] = 15336,
  [SMALL_STATE(167)] = 15369,
  [SMALL_STATE(168)] = 15404,
  [SMALL_STATE(169)] = 15439,
  [SMALL_STATE(170)] = 15474,
  [SMALL_STATE(171)] = 15509,
  [SMALL_STATE(172)] = 15544,
  [SMALL_STATE(173)] = 15579,
  [SMALL_STATE(174)] = 15614,
  [SMALL_STATE(175)] = 15649,
  [SMALL_STATE(176)] = 15684,
  [SMALL_STATE(177)] = 15717,
  [SMALL_STATE(178)] = 15750,
  [SMALL_STATE(179)] = 15783,
  [SMALL_STATE(180)] = 15816,
  [SMALL_STATE(181)] = 15851,
  [SMALL_STATE(182)] = 15884,
  [SMALL_STATE(183)] = 15917,
  [SMALL_STATE(184)] = 15952,
  [SMALL_STATE(185)] = 15985,
  [SMALL_STATE(186)] = 16020,
  [SMALL_STATE(187)] = 16053,
  [SMALL_STATE(188)] = 16088,
  [SMALL_STATE(189)] = 16121,
  [SMALL_STATE(190)] = 16154,
  [SMALL_STATE(191)] = 16187,
  [SMALL_STATE(192)] = 16222,
  [SMALL_STATE(193)] = 16255,
  [SMALL_STATE(194)] = 16290,
  [SMALL_STATE(195)] = 16323,
  [SMALL_STATE(196)] = 16358,
  [SMALL_STATE(197)] = 16391,
  [SMALL_STATE(198)] = 16426,
  [SMALL_STATE(199)] = 16459,
  [SMALL_STATE(200)] = 16496,
  [SMALL_STATE(201)] = 16529,
  [SMALL_STATE(202)] = 16562,
  [SMALL_STATE(203)] = 16595,
  [SMALL_STATE(204)] = 16628,
  [SMALL_STATE(205)] = 16661,
  [SMALL_STATE(206)] = 16694,
  [SMALL_STATE(207)] = 16728,
  [SMALL_STATE(208)] = 16760,
  [SMALL_STATE(209)] = 16792,
  [SMALL_STATE(210)] = 16824,
  [SMALL_STATE(211)] = 16856,
  [SMALL_STATE(212)] = 16888,
  [SMALL_STATE(213)] = 16920,
  [SMALL_STATE(214)] = 16954,
  [SMALL_STATE(215)] = 16986,
  [SMALL_STATE(216)] = 17020,
  [SMALL_STATE(217)] = 17052,
  [SMALL_STATE(218)] = 17084,
  [SMALL_STATE(219)] = 17118,
  [SMALL_STATE(220)] = 17150,
  [SMALL_STATE(221)] = 17184,
  [SMALL_STATE(222)] = 17216,
  [SMALL_STATE(223)] = 17250,
  [SMALL_STATE(224)] = 17282,
  [SMALL_STATE(225)] = 17316,
  [SMALL_STATE(226)] = 17348,
  [SMALL_STATE(227)] = 17382,
  [SMALL_STATE(228)] = 17414,
  [SMALL_STATE(229)] = 17448,
  [SMALL_STATE(230)] = 17480,
  [SMALL_STATE(231)] = 17512,
  [SMALL_STATE(232)] = 17544,
  [SMALL_STATE(233)] = 17580,
  [SMALL_STATE(234)] = 17612,
  [SMALL_STATE(235)] = 17646,
  [SMALL_STATE(236)] = 17678,
  [SMALL_STATE(237)] = 17710,
  [SMALL_STATE(238)] = 17744,
  [SMALL_STATE(239)] = 17778,
  [SMALL_STATE(240)] = 17812,
  [SMALL_STATE(241)] = 17846,
  [SMALL_STATE(242)] = 17880,
  [SMALL_STATE(243)] = 17914,
  [SMALL_STATE(244)] = 17948,
  [SMALL_STATE(245)] = 17982,
  [SMALL_STATE(246)] = 18016,
  [SMALL_STATE(247)] = 18048,
  [SMALL_STATE(248)] = 18080,
  [SMALL_STATE(249)] = 18112,
  [SMALL_STATE(250)] = 18144,
  [SMALL_STATE(251)] = 18176,
  [SMALL_STATE(252)] = 18210,
  [SMALL_STATE(253)] = 18241,
  [SMALL_STATE(254)] = 18272,
  [SMALL_STATE(255)] = 18303,
  [SMALL_STATE(256)] = 18336,
  [SMALL_STATE(257)] = 18367,
  [SMALL_STATE(258)] = 18398,
  [SMALL_STATE(259)] = 18428,
  [SMALL_STATE(260)] = 18459,
  [SMALL_STATE(261)] = 18488,
  [SMALL_STATE(262)] = 18519,
  [SMALL_STATE(263)] = 18548,
  [SMALL_STATE(264)] = 18579,
  [SMALL_STATE(265)] = 18608,
  [SMALL_STATE(266)] = 18639,
  [SMALL_STATE(267)] = 18668,
  [SMALL_STATE(268)] = 18697,
  [SMALL_STATE(269)] = 18726,
  [SMALL_STATE(270)] = 18757,
  [SMALL_STATE(271)] = 18786,
  [SMALL_STATE(272)] = 18819,
  [SMALL_STATE(273)] = 18848,
  [SMALL_STATE(274)] = 18877,
  [SMALL_STATE(275)] = 18926,
  [SMALL_STATE(276)] = 18957,
  [SMALL_STATE(277)] = 18986,
  [SMALL_STATE(278)] = 19017,
  [SMALL_STATE(279)] = 19048,
  [SMALL_STATE(280)] = 19077,
  [SMALL_STATE(281)] = 19108,
  [SMALL_STATE(282)] = 19137,
  [SMALL_STATE(283)] = 19166,
  [SMALL_STATE(284)] = 19195,
  [SMALL_STATE(285)] = 19224,
  [SMALL_STATE(286)] = 19253,
  [SMALL_STATE(287)] = 19284,
  [SMALL_STATE(288)] = 19315,
  [SMALL_STATE(289)] = 19346,
  [SMALL_STATE(290)] = 19377,
  [SMALL_STATE(291)] = 19408,
  [SMALL_STATE(292)] = 19439,
  [SMALL_STATE(293)] = 19470,
  [SMALL_STATE(294)] = 19501,
  [SMALL_STATE(295)] = 19532,
  [SMALL_STATE(296)] = 19563,
  [SMALL_STATE(297)] = 19594,
  [SMALL_STATE(298)] = 19623,
  [SMALL_STATE(299)] = 19652,
  [SMALL_STATE(300)] = 19681,
  [SMALL_STATE(301)] = 19710,
  [SMALL_STATE(302)] = 19739,
  [SMALL_STATE(303)] = 19770,
  [SMALL_STATE(304)] = 19801,
  [SMALL_STATE(305)] = 19830,
  [SMALL_STATE(306)] = 19861,
  [SMALL_STATE(307)] = 19892,
  [SMALL_STATE(308)] = 19921,
  [SMALL_STATE(309)] = 19952,
  [SMALL_STATE(310)] = 19983,
  [SMALL_STATE(311)] = 20012,
  [SMALL_STATE(312)] = 20043,
  [SMALL_STATE(313)] = 20074,
  [SMALL_STATE(314)] = 20105,
  [SMALL_STATE(315)] = 20136,
  [SMALL_STATE(316)] = 20165,
  [SMALL_STATE(317)] = 20196,
  [SMALL_STATE(318)] = 20223,
  [SMALL_STATE(319)] = 20254,
  [SMALL_STATE(320)] = 20281,
  [SMALL_STATE(321)] = 20308,
  [SMALL_STATE(322)] = 20337,
  [SMALL_STATE(323)] = 20366,
  [SMALL_STATE(324)] = 20395,
  [SMALL_STATE(325)] = 20424,
  [SMALL_STATE(326)] = 20453,
  [SMALL_STATE(327)] = 20482,
  [SMALL_STATE(328)] = 20511,
  [SMALL_STATE(329)] = 20540,
  [SMALL_STATE(330)] = 20569,
  [SMALL_STATE(331)] = 20596,
  [SMALL_STATE(332)] = 20623,
  [SMALL_STATE(333)] = 20666,
  [SMALL_STATE(334)] = 20695,
  [SMALL_STATE(335)] = 20722,
  [SMALL_STATE(336)] = 20749,
  [SMALL_STATE(337)] = 20776,
  [SMALL_STATE(338)] = 20803,
  [SMALL_STATE(339)] = 20830,
  [SMALL_STATE(340)] = 20859,
  [SMALL_STATE(341)] = 20886,
  [SMALL_STATE(342)] = 20913,
  [SMALL_STATE(343)] = 20942,
  [SMALL_STATE(344)] = 20969,
  [SMALL_STATE(345)] = 20996,
  [SMALL_STATE(346)] = 21023,
  [SMALL_STATE(347)] = 21050,
  [SMALL_STATE(348)] = 21077,
  [SMALL_STATE(349)] = 21106,
  [SMALL_STATE(350)] = 21133,
  [SMALL_STATE(351)] = 21162,
  [SMALL_STATE(352)] = 21189,
  [SMALL_STATE(353)] = 21218,
  [SMALL_STATE(354)] = 21245,
  [SMALL_STATE(355)] = 21274,
  [SMALL_STATE(356)] = 21301,
  [SMALL_STATE(357)] = 21330,
  [SMALL_STATE(358)] = 21357,
  [SMALL_STATE(359)] = 21386,
  [SMALL_STATE(360)] = 21413,
  [SMALL_STATE(361)] = 21442,
  [SMALL_STATE(362)] = 21469,
  [SMALL_STATE(363)] = 21496,
  [SMALL_STATE(364)] = 21524,
  [SMALL_STATE(365)] = 21553,
  [SMALL_STATE(366)] = 21588,
  [SMALL_STATE(367)] = 21617,
  [SMALL_STATE(368)] = 21641,
  [SMALL_STATE(369)] = 21673,
  [SMALL_STATE(370)] = 21703,
  [SMALL_STATE(371)] = 21735,
  [SMALL_STATE(372)] = 21766,
  [SMALL_STATE(373)] = 21791,
  [SMALL_STATE(374)] = 21820,
  [SMALL_STATE(375)] = 21843,
  [SMALL_STATE(376)] = 21874,
  [SMALL_STATE(377)] = 21898,
  [SMALL_STATE(378)] = 21925,
  [SMALL_STATE(379)] = 21944,
  [SMALL_STATE(380)] = 21969,
  [SMALL_STATE(381)] = 21994,
  [SMALL_STATE(382)] = 22013,
  [SMALL_STATE(383)] = 22032,
  [SMALL_STATE(384)] = 22057,
  [SMALL_STATE(385)] = 22078,
  [SMALL_STATE(386)] = 22105,
  [SMALL_STATE(387)] = 22130,
  [SMALL_STATE(388)] = 22149,
  [SMALL_STATE(389)] = 22174,
  [SMALL_STATE(390)] = 22193,
  [SMALL_STATE(391)] = 22220,
  [SMALL_STATE(392)] = 22245,
  [SMALL_STATE(393)] = 22264,
  [SMALL_STATE(394)] = 22283,
  [SMALL_STATE(395)] = 22306,
  [SMALL_STATE(396)] = 22325,
  [SMALL_STATE(397)] = 22348,
  [SMALL_STATE(398)] = 22371,
  [SMALL_STATE(399)] = 22396,
  [SMALL_STATE(400)] = 22415,
  [SMALL_STATE(401)] = 22439,
  [SMALL_STATE(402)] = 22459,
  [SMALL_STATE(403)] = 22477,
  [SMALL_STATE(404)] = 22495,
  [SMALL_STATE(405)] = 22515,
  [SMALL_STATE(406)] = 22543,
  [SMALL_STATE(407)] = 22571,
  [SMALL_STATE(408)] = 22589,
  [SMALL_STATE(409)] = 22607,
  [SMALL_STATE(410)] = 22627,
  [SMALL_STATE(411)] = 22647,
  [SMALL_STATE(412)] = 22668,
  [SMALL_STATE(413)] = 22689,
  [SMALL_STATE(414)] = 22710,
  [SMALL_STATE(415)] = 22731,
  [SMALL_STATE(416)] = 22756,
  [SMALL_STATE(417)] = 22773,
  [SMALL_STATE(418)] = 22796,
  [SMALL_STATE(419)] = 22819,
  [SMALL_STATE(420)] = 22842,
  [SMALL_STATE(421)] = 22859,
  [SMALL_STATE(422)] = 22882,
  [SMALL_STATE(423)] = 22905,
  [SMALL_STATE(424)] = 22922,
  [SMALL_STATE(425)] = 22942,
  [SMALL_STATE(426)] = 22958,
  [SMALL_STATE(427)] = 22980,
  [SMALL_STATE(428)] = 22996,
  [SMALL_STATE(429)] = 23016,
  [SMALL_STATE(430)] = 23038,
  [SMALL_STATE(431)] = 23060,
  [SMALL_STATE(432)] = 23082,
  [SMALL_STATE(433)] = 23098,
  [SMALL_STATE(434)] = 23114,
  [SMALL_STATE(435)] = 23130,
  [SMALL_STATE(436)] = 23146,
  [SMALL_STATE(437)] = 23162,
  [SMALL_STATE(438)] = 23184,
  [SMALL_STATE(439)] = 23202,
  [SMALL_STATE(440)] = 23218,
  [SMALL_STATE(441)] = 23238,
  [SMALL_STATE(442)] = 23258,
  [SMALL_STATE(443)] = 23274,
  [SMALL_STATE(444)] = 23294,
  [SMALL_STATE(445)] = 23314,
  [SMALL_STATE(446)] = 23330,
  [SMALL_STATE(447)] = 23350,
  [SMALL_STATE(448)] = 23370,
  [SMALL_STATE(449)] = 23390,
  [SMALL_STATE(450)] = 23412,
  [SMALL_STATE(451)] = 23428,
  [SMALL_STATE(452)] = 23446,
  [SMALL_STATE(453)] = 23462,
  [SMALL_STATE(454)] = 23478,
  [SMALL_STATE(455)] = 23496,
  [SMALL_STATE(456)] = 23512,
  [SMALL_STATE(457)] = 23528,
  [SMALL_STATE(458)] = 23544,
  [SMALL_STATE(459)] = 23560,
  [SMALL_STATE(460)] = 23576,
  [SMALL_STATE(461)] = 23592,
  [SMALL_STATE(462)] = 23608,
  [SMALL_STATE(463)] = 23627,
  [SMALL_STATE(464)] = 23642,
  [SMALL_STATE(465)] = 23659,
  [SMALL_STATE(466)] = 23678,
  [SMALL_STATE(467)] = 23693,
  [SMALL_STATE(468)] = 23712,
  [SMALL_STATE(469)] = 23731,
  [SMALL_STATE(470)] = 23750,
  [SMALL_STATE(471)] = 23765,
  [SMALL_STATE(472)] = 23784,
  [SMALL_STATE(473)] = 23803,
  [SMALL_STATE(474)] = 23822,
  [SMALL_STATE(475)] = 23837,
  [SMALL_STATE(476)] = 23852,
  [SMALL_STATE(477)] = 23869,
  [SMALL_STATE(478)] = 23885,
  [SMALL_STATE(479)] = 23899,
  [SMALL_STATE(480)] = 23915,
  [SMALL_STATE(481)] = 23931,
  [SMALL_STATE(482)] = 23947,
  [SMALL_STATE(483)] = 23963,
  [SMALL_STATE(484)] = 23977,
  [SMALL_STATE(485)] = 23991,
  [SMALL_STATE(486)] = 24005,
  [SMALL_STATE(487)] = 24021,
  [SMALL_STATE(488)] = 24037,
  [SMALL_STATE(489)] = 24053,
  [SMALL_STATE(490)] = 24067,
  [SMALL_STATE(491)] = 24083,
  [SMALL_STATE(492)] = 24097,
  [SMALL_STATE(493)] = 24111,
  [SMALL_STATE(494)] = 24125,
  [SMALL_STATE(495)] = 24141,
  [SMALL_STATE(496)] = 24157,
  [SMALL_STATE(497)] = 24173,
  [SMALL_STATE(498)] = 24189,
  [SMALL_STATE(499)] = 24205,
  [SMALL_STATE(500)] = 24218,
  [SMALL_STATE(501)] = 24231,
  [SMALL_STATE(502)] = 24244,
  [SMALL_STATE(503)] = 24257,
  [SMALL_STATE(504)] = 24270,
  [SMALL_STATE(505)] = 24283,
  [SMALL_STATE(506)] = 24296,
  [SMALL_STATE(507)] = 24309,
  [SMALL_STATE(508)] = 24322,
  [SMALL_STATE(509)] = 24335,
  [SMALL_STATE(510)] = 24348,
  [SMALL_STATE(511)] = 24361,
  [SMALL_STATE(512)] = 24374,
  [SMALL_STATE(513)] = 24387,
  [SMALL_STATE(514)] = 24400,
  [SMALL_STATE(515)] = 24413,
  [SMALL_STATE(516)] = 24426,
  [SMALL_STATE(517)] = 24439,
  [SMALL_STATE(518)] = 24452,
  [SMALL_STATE(519)] = 24465,
  [SMALL_STATE(520)] = 24478,
  [SMALL_STATE(521)] = 24491,
  [SMALL_STATE(522)] = 24504,
  [SMALL_STATE(523)] = 24517,
  [SMALL_STATE(524)] = 24530,
  [SMALL_STATE(525)] = 24543,
  [SMALL_STATE(526)] = 24556,
  [SMALL_STATE(527)] = 24569,
  [SMALL_STATE(528)] = 24582,
  [SMALL_STATE(529)] = 24595,
  [SMALL_STATE(530)] = 24608,
  [SMALL_STATE(531)] = 24621,
  [SMALL_STATE(532)] = 24634,
  [SMALL_STATE(533)] = 24647,
  [SMALL_STATE(534)] = 24660,
  [SMALL_STATE(535)] = 24673,
  [SMALL_STATE(536)] = 24686,
  [SMALL_STATE(537)] = 24699,
  [SMALL_STATE(538)] = 24712,
  [SMALL_STATE(539)] = 24725,
  [SMALL_STATE(540)] = 24738,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(540),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 2, 0, 4),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(536),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(493),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(521),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(420),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(518),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(423),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(390),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2, 0, 8),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 3, 0, 13),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_directive, 2, 0, 4),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat2, 1, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 1, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 2, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label, 2, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_separator_comment, 1, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_separator_comment, 1, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_comment, 1, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_comment, 1, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 10),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 10),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_label_reference, 1, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_label_reference, 1, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 10),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 10),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 10),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 10),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 10),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 10),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 10),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 10),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 10),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 10),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shift_expression, 3, 0, 20),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shift_expression, 3, 0, 20),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 10),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 10),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 10),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 10),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__equality_expression, 3, 0, 20),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__equality_expression, 3, 0, 20),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 10),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 10),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relational_expression, 3, 0, 20),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__relational_expression, 3, 0, 20),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 10),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 10),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_multiplicative_expression, 1, 0, 10),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_multiplicative_expression, 1, 0, 10),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assignment_expression, 3, 0, 20),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__assignment_expression, 3, 0, 20),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_multiplicative_expression, 1, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_multiplicative_expression, 1, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 12),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, 0, 12),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_separator_comment, 1, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__data_separator_comment, 1, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__additive_expression, 3, 0, 20),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__additive_expression, 3, 0, 20),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiplicative_expression, 3, 0, 20),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiplicative_expression, 3, 0, 20),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relocation_expression, 4, 0, 21),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relocation_expression, 4, 0, 21),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 4, 0, 22),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 4, 0, 22),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 4, 0, 23),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 4, 0, 23),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 14),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 3, 0, 14),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_expression, 1, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_expression, 1, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal, 1, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 16),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 3, 0, 16),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 17),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 17),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logical_or_expression, 3, 0, 20),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__logical_or_expression, 3, 0, 20),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logical_and_expression, 3, 0, 20),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__logical_and_expression, 3, 0, 20),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitwise_or_expression, 3, 0, 20),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitwise_or_expression, 3, 0, 20),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitwise_xor_expression, 3, 0, 20),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitwise_xor_expression, 3, 0, 20),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitwise_and_expression, 3, 0, 20),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitwise_and_expression, 3, 0, 20),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_operand_separator, 1, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_operand_separator, 1, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 3, 0, 14),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_operands, 1, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_operands, 1, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_operands, 1, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_operands, 1, 0, 0),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_operands, 2, 0, 0),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_operands, 2, 0, 0),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0),
  [605] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [608] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(514),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(258),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 3, 0, 0),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 3, 0, 0),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_operands, 2, 0, 0),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(188),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_operands, 1, 0, 0),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_operands, 2, 0, 0),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_operands, 2, 0, 0),
  [641] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_string_operands, 2, 0, 0), SHIFT(487),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_operand, 1, 0, 0),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_operands_repeat1, 2, 0, 0),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_operands_repeat1, 2, 0, 0),
  [658] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(487),
  [661] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(491),
  [664] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(487),
  [667] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(443),
  [670] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_string_operands, 1, 0, 0), SHIFT(487),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_parameters, 1, 0, 0),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_parameters, 1, 0, 0),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_type, 1, 0, 0),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_operands, 3, 0, 0),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 19),
  [697] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 19), SHIFT_REPEAT(28),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_parameters, 2, 0, 0),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_parameters, 2, 0, 0),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 1, 0, 8),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2, 0, 13),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 1),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 1),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_operands, 3, 0, 0),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_flag, 1, 0, 0),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat2, 2, 0, 0),
  [734] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat2, 2, 0, 0), SHIFT_REPEAT(140),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat3, 1, 0, 0),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat3, 1, 0, 0),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat3, 2, 0, 0),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat3, 2, 0, 0),
  [747] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat3, 2, 0, 0), SHIFT_REPEAT(404),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0),
  [754] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(481),
  [757] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(535),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 3, 0, 6),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 3, 0, 6),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 18),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 3, 0, 0),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 3, 0, 0),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_directive, 3, 0, 11),
  [784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_directive, 3, 0, 11),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_directive, 1, 0, 4),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__numeric_directive, 1, 0, 4),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 1, 0, 4),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_directive, 1, 0, 4),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [804] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(235),
  [807] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(284),
  [810] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(151),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_mnemonic, 1, 0, 0),
  [815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_mnemonic, 1, 0, 0),
  [817] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(319),
  [820] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(165),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_mnemonic, 1, 0, 0),
  [825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_mnemonic, 1, 0, 0),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 3),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 3, 0, 11),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [843] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [847] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_macro_parameters, 1, 0, 0), SHIFT(480),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_directive, 3, 0, 11),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 5, 0, 15),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 5, 0, 6),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 7),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 6),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [870] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(480),
  [873] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(529),
  [876] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 2, 0, 0),
  [882] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [884] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [888] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_macro_parameters, 2, 0, 0), SHIFT(480),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 2),
  [893] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [895] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(466),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 5),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 9),
  [902] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 19), SHIFT_REPEAT(29),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 6),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 24),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_directive, 4, 0, 11),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 15),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 8, 0, 24),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 15),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [923] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1, 0, 0),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 0),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [937] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(528),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [959] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [961] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_comment, 1, 0, 0),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [995] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_mnemonic, 1, 0, 0),
  [1007] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_mnemonic, 1, 0, 0),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
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
    [ts_external_token__line_separator] = true,
  },
  [6] = {
    [ts_external_token__operand_separator] = true,
    [ts_external_token__operator_space] = true,
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
