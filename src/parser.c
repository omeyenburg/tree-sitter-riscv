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
#define STATE_COUNT 508
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
  [15] = 14,
  [16] = 9,
  [17] = 8,
  [18] = 13,
  [19] = 14,
  [20] = 13,
  [21] = 13,
  [22] = 13,
  [23] = 14,
  [24] = 14,
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
  [47] = 33,
  [48] = 34,
  [49] = 35,
  [50] = 36,
  [51] = 37,
  [52] = 38,
  [53] = 39,
  [54] = 40,
  [55] = 41,
  [56] = 42,
  [57] = 43,
  [58] = 33,
  [59] = 34,
  [60] = 35,
  [61] = 36,
  [62] = 37,
  [63] = 38,
  [64] = 39,
  [65] = 40,
  [66] = 41,
  [67] = 42,
  [68] = 43,
  [69] = 31,
  [70] = 34,
  [71] = 35,
  [72] = 36,
  [73] = 37,
  [74] = 38,
  [75] = 39,
  [76] = 40,
  [77] = 41,
  [78] = 42,
  [79] = 43,
  [80] = 33,
  [81] = 34,
  [82] = 35,
  [83] = 36,
  [84] = 37,
  [85] = 38,
  [86] = 39,
  [87] = 40,
  [88] = 41,
  [89] = 42,
  [90] = 43,
  [91] = 32,
  [92] = 31,
  [93] = 33,
  [94] = 33,
  [95] = 33,
  [96] = 33,
  [97] = 33,
  [98] = 31,
  [99] = 31,
  [100] = 32,
  [101] = 32,
  [102] = 32,
  [103] = 33,
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
  [150] = 147,
  [151] = 128,
  [152] = 129,
  [153] = 130,
  [154] = 131,
  [155] = 132,
  [156] = 133,
  [157] = 134,
  [158] = 135,
  [159] = 137,
  [160] = 138,
  [161] = 139,
  [162] = 140,
  [163] = 141,
  [164] = 142,
  [165] = 143,
  [166] = 144,
  [167] = 145,
  [168] = 146,
  [169] = 126,
  [170] = 127,
  [171] = 125,
  [172] = 108,
  [173] = 109,
  [174] = 110,
  [175] = 107,
  [176] = 112,
  [177] = 111,
  [178] = 113,
  [179] = 136,
  [180] = 114,
  [181] = 115,
  [182] = 116,
  [183] = 117,
  [184] = 118,
  [185] = 119,
  [186] = 120,
  [187] = 121,
  [188] = 122,
  [189] = 123,
  [190] = 124,
  [191] = 149,
  [192] = 148,
  [193] = 136,
  [194] = 107,
  [195] = 112,
  [196] = 117,
  [197] = 118,
  [198] = 119,
  [199] = 120,
  [200] = 121,
  [201] = 122,
  [202] = 123,
  [203] = 124,
  [204] = 149,
  [205] = 128,
  [206] = 126,
  [207] = 129,
  [208] = 130,
  [209] = 131,
  [210] = 132,
  [211] = 133,
  [212] = 110,
  [213] = 135,
  [214] = 137,
  [215] = 138,
  [216] = 111,
  [217] = 113,
  [218] = 114,
  [219] = 115,
  [220] = 139,
  [221] = 221,
  [222] = 127,
  [223] = 140,
  [224] = 141,
  [225] = 142,
  [226] = 143,
  [227] = 144,
  [228] = 145,
  [229] = 146,
  [230] = 147,
  [231] = 148,
  [232] = 125,
  [233] = 108,
  [234] = 109,
  [235] = 116,
  [236] = 134,
  [237] = 237,
  [238] = 238,
  [239] = 114,
  [240] = 115,
  [241] = 116,
  [242] = 113,
  [243] = 118,
  [244] = 119,
  [245] = 120,
  [246] = 121,
  [247] = 122,
  [248] = 123,
  [249] = 124,
  [250] = 149,
  [251] = 126,
  [252] = 128,
  [253] = 129,
  [254] = 130,
  [255] = 131,
  [256] = 132,
  [257] = 133,
  [258] = 134,
  [259] = 139,
  [260] = 140,
  [261] = 141,
  [262] = 238,
  [263] = 142,
  [264] = 143,
  [265] = 144,
  [266] = 145,
  [267] = 146,
  [268] = 147,
  [269] = 148,
  [270] = 125,
  [271] = 108,
  [272] = 109,
  [273] = 110,
  [274] = 107,
  [275] = 112,
  [276] = 135,
  [277] = 137,
  [278] = 138,
  [279] = 279,
  [280] = 136,
  [281] = 238,
  [282] = 279,
  [283] = 238,
  [284] = 279,
  [285] = 127,
  [286] = 279,
  [287] = 238,
  [288] = 279,
  [289] = 238,
  [290] = 279,
  [291] = 111,
  [292] = 117,
  [293] = 136,
  [294] = 294,
  [295] = 117,
  [296] = 147,
  [297] = 148,
  [298] = 125,
  [299] = 299,
  [300] = 128,
  [301] = 129,
  [302] = 130,
  [303] = 131,
  [304] = 132,
  [305] = 133,
  [306] = 134,
  [307] = 135,
  [308] = 137,
  [309] = 138,
  [310] = 145,
  [311] = 111,
  [312] = 113,
  [313] = 114,
  [314] = 115,
  [315] = 116,
  [316] = 108,
  [317] = 127,
  [318] = 144,
  [319] = 127,
  [320] = 107,
  [321] = 112,
  [322] = 109,
  [323] = 118,
  [324] = 136,
  [325] = 119,
  [326] = 120,
  [327] = 139,
  [328] = 121,
  [329] = 110,
  [330] = 122,
  [331] = 123,
  [332] = 124,
  [333] = 149,
  [334] = 126,
  [335] = 107,
  [336] = 112,
  [337] = 140,
  [338] = 141,
  [339] = 142,
  [340] = 340,
  [341] = 146,
  [342] = 342,
  [343] = 343,
  [344] = 143,
  [345] = 345,
  [346] = 139,
  [347] = 347,
  [348] = 348,
  [349] = 136,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 136,
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
  [374] = 373,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 136,
  [379] = 371,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 361,
  [385] = 362,
  [386] = 386,
  [387] = 387,
  [388] = 387,
  [389] = 387,
  [390] = 387,
  [391] = 387,
  [392] = 359,
  [393] = 360,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 368,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 370,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 365,
  [411] = 411,
  [412] = 400,
  [413] = 369,
  [414] = 414,
  [415] = 415,
  [416] = 400,
  [417] = 394,
  [418] = 400,
  [419] = 419,
  [420] = 372,
  [421] = 394,
  [422] = 422,
  [423] = 394,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 136,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 371,
  [435] = 433,
  [436] = 433,
  [437] = 373,
  [438] = 438,
  [439] = 375,
  [440] = 433,
  [441] = 433,
  [442] = 442,
  [443] = 442,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 446,
  [449] = 446,
  [450] = 450,
  [451] = 446,
  [452] = 452,
  [453] = 446,
  [454] = 445,
  [455] = 442,
  [456] = 442,
  [457] = 442,
  [458] = 442,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 462,
  [470] = 462,
  [471] = 462,
  [472] = 464,
  [473] = 473,
  [474] = 474,
  [475] = 467,
  [476] = 476,
  [477] = 464,
  [478] = 474,
  [479] = 467,
  [480] = 480,
  [481] = 481,
  [482] = 464,
  [483] = 461,
  [484] = 373,
  [485] = 464,
  [486] = 486,
  [487] = 487,
  [488] = 371,
  [489] = 462,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 467,
  [495] = 495,
  [496] = 464,
  [497] = 497,
  [498] = 498,
  [499] = 467,
  [500] = 498,
  [501] = 501,
  [502] = 498,
  [503] = 467,
  [504] = 498,
  [505] = 498,
  [506] = 506,
  [507] = 507,
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
      if (eof) ADVANCE(107);
      ADVANCE_MAP(
        '!', 448,
        '"', 471,
        '#', 117,
        '$', 40,
        '&', 434,
        '\'', 467,
        '(', 121,
        ')', 130,
        '+', 440,
        ',', 133,
        '-', 444,
        '.', 574,
        '/', 443,
        '0', 482,
        '3', 483,
        ';', 108,
        '<', 437,
        '=', 429,
        '>', 438,
        '@', 77,
        'A', 562,
        'S', 551,
        'T', 564,
        '\\', 4,
        '^', 433,
        'a', 563,
        'f', 553,
        'g', 558,
        'r', 555,
        's', 552,
        't', 565,
        'z', 556,
        '|', 432,
        '~', 446,
        '%', 441,
        '*', 441,
        'C', 561,
        'c', 561,
        'K', 560,
        'k', 560,
        'V', 560,
        'v', 560,
        '1', 484,
        '2', 484,
        'F', 554,
        'R', 554,
        'X', 554,
        'x', 554,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(485);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(566);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\t', 126,
        '\n', 112,
        '\r', 109,
        ' ', 122,
        '!', 447,
        '#', 117,
        '$', 44,
        '%', 50,
        '\'', 467,
        '(', 121,
        ',', 133,
        '-', 445,
        '.', 580,
        '/', 31,
        '0', 452,
        '3', 456,
        ';', 108,
        '=', 428,
        'A', 588,
        'S', 572,
        'T', 590,
        '\\', 10,
        'a', 589,
        'f', 575,
        'g', 583,
        'r', 577,
        's', 573,
        't', 591,
        'z', 581,
        '|', 55,
        '~', 446,
        'C', 587,
        'c', 587,
        'K', 586,
        'k', 586,
        'V', 586,
        'v', 586,
      );
      if (lookahead == 0x0b ||
          lookahead == '\f') SKIP(1);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(457);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(576);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(457);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(592);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(129);
      if (lookahead == ' ') ADVANCE(125);
      if (lookahead == ')') ADVANCE(130);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(550);
      if (lookahead == '$' ||
          lookahead == '%') ADVANCE(550);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(2);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(23);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(23);
      if (lookahead == '\r') SKIP(3);
      if (lookahead == 'U') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(72);
      if (lookahead == 'x') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(477);
      if (set_contains(sym__escape_sequence_character_set_1, 12, lookahead)) ADVANCE(475);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(25);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(25);
      if (lookahead == '\r') SKIP(5);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(24);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(24);
      if (lookahead == '\r') SKIP(7);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(1);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '\r') SKIP(9);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(26);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(26);
      if (lookahead == '\r') SKIP(11);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(27);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(27);
      if (lookahead == '\r') SKIP(13);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(28);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(28);
      if (lookahead == '\r') SKIP(15);
      if (lookahead == 'U') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(72);
      if (lookahead == 'x') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(477);
      if (set_contains(sym__escape_sequence_character_set_1, 12, lookahead)) ADVANCE(475);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\\') SKIP(19);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(17);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(17);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(17);
      if (lookahead == '\r') SKIP(18);
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(36);
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(36);
      if (lookahead == '\r') SKIP(20);
      if (lookahead == 'U') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(72);
      if (lookahead == 'x') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(477);
      if (set_contains(sym__escape_sequence_character_set_1, 12, lookahead)) ADVANCE(475);
      END_STATE();
    case 22:
      if (lookahead == '\r') ADVANCE(118);
      if (lookahead != 0) ADVANCE(117);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '!', 448,
        '"', 471,
        '#', 117,
        '$', 40,
        '&', 434,
        '\'', 467,
        '(', 121,
        ')', 130,
        '+', 440,
        ',', 133,
        '-', 444,
        '.', 574,
        '/', 443,
        '0', 482,
        '3', 483,
        ';', 108,
        '<', 437,
        '=', 429,
        '>', 438,
        '@', 77,
        'A', 562,
        'S', 551,
        'T', 564,
        '\\', 4,
        '^', 433,
        'a', 563,
        'f', 553,
        'g', 558,
        'r', 555,
        's', 552,
        't', 565,
        'z', 556,
        '|', 432,
        '~', 446,
        '%', 441,
        '*', 441,
        'C', 561,
        'c', 561,
        'K', 560,
        'k', 560,
        'V', 560,
        'v', 560,
        '1', 484,
        '2', 484,
        'F', 554,
        'R', 554,
        'X', 554,
        'x', 554,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(485);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(566);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        '!', 447,
        '"', 471,
        '#', 117,
        '$', 44,
        '%', 50,
        '\'', 467,
        '(', 121,
        ')', 130,
        '-', 445,
        '.', 580,
        '/', 31,
        '0', 452,
        '3', 456,
        ';', 108,
        'A', 588,
        'S', 572,
        'T', 590,
        '\\', 8,
        'a', 589,
        'f', 575,
        'g', 583,
        'r', 577,
        's', 573,
        't', 591,
        'z', 581,
        '~', 446,
        'C', 587,
        'c', 587,
        'K', 586,
        'k', 586,
        'V', 586,
        'v', 586,
        '1', 457,
        '2', 457,
        'F', 576,
        'R', 576,
        'X', 576,
        'x', 576,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(457);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(592);
      END_STATE();
    case 25:
      ADVANCE_MAP(
        '!', 447,
        '"', 471,
        '#', 117,
        '$', 44,
        '%', 50,
        '\'', 467,
        '(', 121,
        '+', 78,
        ',', 422,
        '-', 445,
        '.', 579,
        '/', 31,
        '0', 452,
        '3', 456,
        ';', 108,
        '=', 428,
        '@', 77,
        'A', 588,
        'S', 572,
        'T', 590,
        '\\', 6,
        'a', 589,
        'f', 575,
        'g', 583,
        'r', 577,
        's', 573,
        't', 591,
        'z', 581,
        '|', 55,
        '~', 446,
        '\t', 25,
        ' ', 25,
        'C', 587,
        'c', 587,
        'K', 586,
        'k', 586,
        'V', 586,
        'v', 586,
        '1', 457,
        '2', 457,
        'F', 576,
        'R', 576,
        'X', 576,
        'x', 576,
      );
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(25);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(457);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(592);
      END_STATE();
    case 26:
      ADVANCE_MAP(
        '!', 49,
        '#', 117,
        '&', 434,
        '(', 121,
        ',', 422,
        '/', 443,
        ';', 108,
        '<', 437,
        '=', 429,
        '>', 438,
      );
      if (lookahead == '\\') SKIP(12);
      if (lookahead == '^') ADVANCE(433);
      if (lookahead == '|') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(441);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(440);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 27:
      ADVANCE_MAP(
        '!', 49,
        '&', 434,
        '(', 121,
        ')', 130,
        ',', 133,
        '/', 442,
        '<', 437,
        '=', 429,
        '>', 438,
      );
      if (lookahead == '\\') SKIP(14);
      if (lookahead == '^') ADVANCE(433);
      if (lookahead == '|') ADVANCE(432);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(441);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(440);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(471);
      if (lookahead == '/') ADVANCE(473);
      if (lookahead == '\\') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(474);
      if (lookahead != 0) ADVANCE(472);
      END_STATE();
    case 29:
      if (lookahead == '(') ADVANCE(121);
      if (lookahead == ',') ADVANCE(133);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(550);
      if (lookahead == '$' ||
          lookahead == '%') ADVANCE(550);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(29);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '/') ADVANCE(117);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == '*') ADVANCE(34);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '/') ADVANCE(119);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '/') ADVANCE(469);
      if (lookahead == '\\') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(468);
      END_STATE();
    case 37:
      if (lookahead == '1') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      END_STATE();
    case 38:
      if (lookahead == '1') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(478);
      END_STATE();
    case 39:
      ADVANCE_MAP(
        '2', 228,
        '4', 234,
        '8', 236,
        ':', 571,
        'L', 35,
        'a', 315,
        'b', 222,
        'c', 351,
        'd', 355,
        'f', 317,
        'h', 223,
        'i', 343,
        'l', 244,
        'm', 215,
        'p', 204,
        'q', 410,
        's', 294,
        'u', 324,
        'w', 356,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 40:
      ADVANCE_MAP(
        '3', 487,
        'A', 61,
        'S', 37,
        'T', 63,
        'a', 62,
        'f', 41,
        'g', 53,
        'r', 43,
        's', 38,
        't', 67,
        'z', 51,
        'C', 60,
        'c', 60,
        'K', 58,
        'k', 58,
        'V', 58,
        'v', 58,
        '1', 490,
        '2', 490,
        'F', 42,
        'R', 42,
        'X', 42,
        'x', 42,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      END_STATE();
    case 41:
      if (lookahead == '3') ADVANCE(487);
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(490);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(478);
      END_STATE();
    case 42:
      if (lookahead == '3') ADVANCE(487);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      END_STATE();
    case 43:
      if (lookahead == '3') ADVANCE(487);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(478);
      END_STATE();
    case 44:
      ADVANCE_MAP(
        '3', 488,
        'A', 544,
        'S', 495,
        'T', 546,
        'a', 545,
        'f', 500,
        'g', 532,
        'r', 502,
        's', 496,
        't', 547,
        'z', 515,
        'C', 543,
        'c', 543,
        'K', 542,
        'k', 542,
        'V', 542,
        'v', 542,
        '1', 491,
        '2', 491,
        'F', 501,
        'R', 501,
        'X', 501,
        'x', 501,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(549);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(594);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 49:
      if (lookahead == '=') ADVANCE(435);
      END_STATE();
    case 50:
      ADVANCE_MAP(
        'a', 510,
        'c', 508,
        'd', 539,
        'g', 530,
        'h', 521,
        'l', 529,
        'p', 511,
        't', 525,
      );
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(478);
      END_STATE();
    case 53:
      if (lookahead == 'p') ADVANCE(478);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 55:
      if (lookahead == '|') ADVANCE(430);
      END_STATE();
    case 56:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(461);
      END_STATE();
    case 57:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      END_STATE();
    case 58:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(478);
      END_STATE();
    case 59:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(455);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(478);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(478);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(478);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(463);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(461);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(478);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(475);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 77:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 78:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(425);
      END_STATE();
    case 79:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 80:
      if (eof) ADVANCE(107);
      ADVANCE_MAP(
        '\t', 126,
        '\n', 112,
        '\r', 109,
        ' ', 122,
        '!', 447,
        '#', 117,
        '$', 44,
        '%', 50,
        '\'', 467,
        '(', 121,
        ',', 133,
        '-', 445,
        '.', 580,
        '/', 31,
        '0', 452,
        '3', 456,
        ';', 108,
        '=', 428,
        'A', 588,
        'S', 572,
        'T', 590,
        '\\', 10,
        'a', 589,
        'f', 575,
        'g', 583,
        'r', 577,
        's', 573,
        't', 591,
        'z', 581,
        '|', 55,
        '~', 446,
        'C', 587,
        'c', 587,
        'K', 586,
        'k', 586,
        'V', 586,
        'v', 586,
      );
      if (lookahead == 0x0b ||
          lookahead == '\f') SKIP(80);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(457);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(576);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(457);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(592);
      END_STATE();
    case 81:
      if (eof) ADVANCE(107);
      ADVANCE_MAP(
        '\t', 127,
        '\n', 113,
        '\r', 110,
        ' ', 123,
        '!', 49,
        '#', 117,
        '&', 434,
        '(', 121,
        ',', 133,
        '/', 443,
        ';', 108,
        '<', 437,
        '=', 429,
        '>', 438,
      );
      if (lookahead == '\\') SKIP(87);
      if (lookahead == '^') ADVANCE(433);
      if (lookahead == '|') ADVANCE(432);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(441);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(440);
      if (lookahead == 0x0b ||
          lookahead == '\f') SKIP(81);
      END_STATE();
    case 82:
      if (eof) ADVANCE(107);
      if (lookahead == '\t') ADVANCE(128);
      if (lookahead == ' ') ADVANCE(124);
      if (lookahead == '#') ADVANCE(117);
      if (lookahead == ')') ADVANCE(130);
      if (lookahead == ',') ADVANCE(133);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == ';') ADVANCE(108);
      if (lookahead == '\\') SKIP(93);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(82);
      END_STATE();
    case 83:
      if (eof) ADVANCE(107);
      if (lookahead == '\n') SKIP(85);
      END_STATE();
    case 84:
      if (eof) ADVANCE(107);
      if (lookahead == '\n') SKIP(85);
      if (lookahead == '\r') SKIP(83);
      END_STATE();
    case 85:
      if (eof) ADVANCE(107);
      ADVANCE_MAP(
        '\n', 114,
        '\r', 111,
        '#', 117,
        '%', 79,
        '.', 39,
        '/', 31,
        '0', 46,
        ';', 108,
      );
      if (lookahead == '\\') SKIP(84);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(85);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 86:
      if (eof) ADVANCE(107);
      if (lookahead == '\n') SKIP(81);
      END_STATE();
    case 87:
      if (eof) ADVANCE(107);
      if (lookahead == '\n') SKIP(81);
      if (lookahead == '\r') SKIP(86);
      END_STATE();
    case 88:
      if (eof) ADVANCE(107);
      if (lookahead == '\n') SKIP(104);
      END_STATE();
    case 89:
      if (eof) ADVANCE(107);
      if (lookahead == '\n') SKIP(104);
      if (lookahead == '\r') SKIP(88);
      END_STATE();
    case 90:
      if (eof) ADVANCE(107);
      if (lookahead == '\n') SKIP(103);
      END_STATE();
    case 91:
      if (eof) ADVANCE(107);
      if (lookahead == '\n') SKIP(103);
      if (lookahead == '\r') SKIP(90);
      END_STATE();
    case 92:
      if (eof) ADVANCE(107);
      if (lookahead == '\n') SKIP(82);
      END_STATE();
    case 93:
      if (eof) ADVANCE(107);
      if (lookahead == '\n') SKIP(82);
      if (lookahead == '\r') SKIP(92);
      END_STATE();
    case 94:
      if (eof) ADVANCE(107);
      if (lookahead == '\n') SKIP(105);
      END_STATE();
    case 95:
      if (eof) ADVANCE(107);
      if (lookahead == '\n') SKIP(105);
      if (lookahead == '\r') SKIP(94);
      END_STATE();
    case 96:
      if (eof) ADVANCE(107);
      if (lookahead == '\n') SKIP(106);
      END_STATE();
    case 97:
      if (eof) ADVANCE(107);
      if (lookahead == '\n') SKIP(106);
      if (lookahead == '\r') SKIP(96);
      END_STATE();
    case 98:
      if (eof) ADVANCE(107);
      if (lookahead == '\n') SKIP(100);
      END_STATE();
    case 99:
      if (eof) ADVANCE(107);
      if (lookahead == '\n') SKIP(100);
      if (lookahead == '\r') SKIP(98);
      END_STATE();
    case 100:
      if (eof) ADVANCE(107);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\\') SKIP(99);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(100);
      END_STATE();
    case 101:
      if (eof) ADVANCE(107);
      ADVANCE_MAP(
        '!', 447,
        '"', 471,
        '#', 117,
        '$', 44,
        '%', 50,
        '\'', 467,
        '(', 121,
        ')', 130,
        '-', 445,
        '.', 580,
        '/', 31,
        '0', 452,
        '3', 456,
        ';', 108,
        'A', 588,
        'S', 572,
        'T', 590,
        '\\', 8,
        'a', 589,
        'f', 575,
        'g', 583,
        'r', 577,
        's', 573,
        't', 591,
        'z', 581,
        '~', 446,
        'C', 587,
        'c', 587,
        'K', 586,
        'k', 586,
        'V', 586,
        'v', 586,
        '1', 457,
        '2', 457,
        'F', 576,
        'R', 576,
        'X', 576,
        'x', 576,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(101);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(457);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(592);
      END_STATE();
    case 102:
      if (eof) ADVANCE(107);
      ADVANCE_MAP(
        '!', 447,
        '"', 471,
        '#', 117,
        '$', 44,
        '%', 50,
        '\'', 467,
        '(', 121,
        '+', 78,
        ',', 422,
        '-', 445,
        '.', 579,
        '/', 31,
        '0', 452,
        '3', 456,
        ';', 108,
        '=', 428,
        '@', 77,
        'A', 588,
        'S', 572,
        'T', 590,
        '\\', 6,
        'a', 589,
        'f', 575,
        'g', 583,
        'r', 577,
        's', 573,
        't', 591,
        'z', 581,
        '|', 55,
        '~', 446,
        '\t', 25,
        ' ', 25,
        'C', 587,
        'c', 587,
        'K', 586,
        'k', 586,
        'V', 586,
        'v', 586,
        '1', 457,
        '2', 457,
        'F', 576,
        'R', 576,
        'X', 576,
        'x', 576,
      );
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(102);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(457);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(592);
      END_STATE();
    case 103:
      if (eof) ADVANCE(107);
      ADVANCE_MAP(
        '!', 49,
        '#', 117,
        '&', 434,
        '(', 121,
        ',', 133,
        '/', 443,
        ';', 108,
        '<', 437,
        '=', 429,
        '>', 438,
      );
      if (lookahead == '\\') SKIP(91);
      if (lookahead == '^') ADVANCE(433);
      if (lookahead == '|') ADVANCE(432);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(441);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(440);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(103);
      END_STATE();
    case 104:
      if (eof) ADVANCE(107);
      ADVANCE_MAP(
        '!', 49,
        '#', 117,
        '&', 434,
        '(', 121,
        ',', 422,
        '/', 443,
        ';', 108,
        '<', 437,
        '=', 429,
        '>', 438,
      );
      if (lookahead == '\\') SKIP(89);
      if (lookahead == '^') ADVANCE(433);
      if (lookahead == '|') ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(441);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(440);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 105:
      if (eof) ADVANCE(107);
      if (lookahead == '#') ADVANCE(117);
      if (lookahead == '(') ADVANCE(121);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == ';') ADVANCE(108);
      if (lookahead == '\\') SKIP(95);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(116);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(105);
      END_STATE();
    case 106:
      if (eof) ADVANCE(107);
      if (lookahead == '#') ADVANCE(117);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == ';') ADVANCE(108);
      if (lookahead == '\\') SKIP(97);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(116);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t') ADVANCE(126);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '\r') ADVANCE(109);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(10);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t') ADVANCE(127);
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == '\r') ADVANCE(110);
      if (lookahead == ' ') ADVANCE(123);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '\r') ADVANCE(111);
      if (lookahead == '%') ADVANCE(79);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '0') ADVANCE(46);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(126);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '\r') ADVANCE(109);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(10);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(127);
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == '\r') ADVANCE(110);
      if (lookahead == ' ') ADVANCE(123);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '\r') ADVANCE(111);
      if (lookahead == '%') ADVANCE(79);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '0') ADVANCE(46);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '\r') ADVANCE(17);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead != 0) ADVANCE(117);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_block_comment);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(126);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '\r') ADVANCE(109);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(10);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(127);
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == '\r') ADVANCE(110);
      if (lookahead == ' ') ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(128);
      if (lookahead == ' ') ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(129);
      if (lookahead == ' ') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(550);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(126);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '\r') ADVANCE(109);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(10);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(127);
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == '\r') ADVANCE(110);
      if (lookahead == ' ') ADVANCE(123);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(128);
      if (lookahead == ' ') ADVANCE(124);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(129);
      if (lookahead == ' ') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(550);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_macro_mnemonic);
      if (lookahead == ':') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_macro_mnemonic);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_DOTbyte);
      if (lookahead == ':') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_DOTbyte);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_DOT2byte);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_DOT2byte);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_DOTshort);
      if (lookahead == ':') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_DOTshort);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_DOThalf);
      if (lookahead == ':') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_DOThalf);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_DOThword);
      if (lookahead == ':') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_DOThword);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_DOT4byte);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_DOT4byte);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_DOTword);
      if (lookahead == ':') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_DOTword);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_DOTint);
      if (lookahead == ':') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_DOTint);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_DOT8byte);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DOT8byte);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_DOTdword);
      if (lookahead == ':') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_DOTdword);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_DOTlong);
      if (lookahead == ':') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_DOTlong);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_DOTquad);
      if (lookahead == ':') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_DOTquad);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_DOTcomm);
      if (lookahead == ':') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_DOTcomm);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_DOTlcomm);
      if (lookahead == ':') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_DOTlcomm);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_DOTalign);
      if (lookahead == ':') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_DOTalign);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_DOTbalign);
      if (lookahead == ':') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_DOTbalign);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_DOTp2align);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_DOTp2align);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_DOTsleb128);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_DOTsleb128);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_DOTuleb128);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_DOTuleb128);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_DOTdtprelword);
      if (lookahead == ':') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_DOTdtprelword);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_DOTdtpreldword);
      if (lookahead == ':') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_DOTdtpreldword);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_DOTskip);
      if (lookahead == ':') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_DOTskip);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_DOTspace);
      if (lookahead == ':') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_DOTspace);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_DOTfloat);
      if (lookahead == ':') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_DOTfloat);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_DOTdouble);
      if (lookahead == ':') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_DOTdouble);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_DOTsingle);
      if (lookahead == ':') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_DOTsingle);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__string_directive_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DOTasciz);
      if (lookahead == ':') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DOTasciz);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_DOTascii);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'z') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'y')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_DOTascii);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'z') ADVANCE(192);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(421);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_DOTasciiz);
      if (lookahead == ':') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_DOTasciiz);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_DOTstring);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'z') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'y')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_DOTstring);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'z') ADVANCE(196);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(421);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_DOTstringz);
      if (lookahead == ':') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DOTstringz);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(202);
      if (lookahead == ':') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(205);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(203);
      if (lookahead == ':') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(206);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(211);
      if (lookahead == ':') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(207);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(208);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(224);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(209);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(210);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(168);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(170);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(169);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(171);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'a') ADVANCE(311);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'a') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'a') ADVANCE(252);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'a') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'a') ADVANCE(241);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'a') ADVANCE(322);
      if (lookahead == 'y') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'a') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'a') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'a') ADVANCE(242);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'a') ADVANCE(310);
      if (lookahead == 'w') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'a') ADVANCE(398);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'a') ADVANCE(323);
      if (lookahead == 'y') ADVANCE(403);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'a') ADVANCE(313);
      if (lookahead == 'w') ADVANCE(366);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'a') ADVANCE(325);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'b') ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'b') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'b') ADVANCE(198);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'b') ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'b') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'b') ADVANCE(320);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'b') ADVANCE(414);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'b') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'b') ADVANCE(200);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'b') ADVANCE(417);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'b') ADVANCE(416);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'b') ADVANCE(418);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'c') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'c') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'c') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'c') ADVANCE(299);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'c') ADVANCE(384);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'c') ADVANCE(267);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'c') ADVANCE(361);
      if (lookahead == 'o') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'c') ADVANCE(362);
      if (lookahead == 'o') ADVANCE(345);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'd') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'd') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'd') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'd') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'd') ADVANCE(411);
      if (lookahead == 'w') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'd') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'd') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'd') ADVANCE(157);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'd') ADVANCE(147);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'd') ADVANCE(153);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'd') ADVANCE(143);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'd') ADVANCE(412);
      if (lookahead == 'w') ADVANCE(368);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'd') ADVANCE(173);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'd') ADVANCE(175);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'e') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'e') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'e') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'e') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'e') ADVANCE(179);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'e') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'e') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'e') ADVANCE(314);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'e') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'f') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'f') ADVANCE(141);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'g') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'g') ADVANCE(337);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'g') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'g') ADVANCE(155);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'g') ADVANCE(194);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'g') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'g') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'g') ADVANCE(338);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'g') ADVANCE(339);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'g') ADVANCE(342);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'g') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'g') ADVANCE(321);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'h') ADVANCE(359);
      if (lookahead == 'i') ADVANCE(344);
      if (lookahead == 'k') ADVANCE(301);
      if (lookahead == 'l') ADVANCE(270);
      if (lookahead == 'p') ADVANCE(217);
      if (lookahead == 't') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'h') ADVANCE(360);
      if (lookahead == 'i') ADVANCE(347);
      if (lookahead == 'k') ADVANCE(303);
      if (lookahead == 'l') ADVANCE(274);
      if (lookahead == 'p') ADVANCE(219);
      if (lookahead == 't') ADVANCE(388);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'i') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'i') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'z') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'y')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'i') ADVANCE(282);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'i') ADVANCE(300);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'i') ADVANCE(190);
      if (lookahead == 'z') ADVANCE(188);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(421);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'i') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'i') ADVANCE(288);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'i') ADVANCE(372);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'i') ADVANCE(348);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'i') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'i') ADVANCE(289);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'i') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'i') ADVANCE(290);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'l') ADVANCE(295);
      if (lookahead == 's') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'l') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'l') ADVANCE(298);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'l') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'l') ADVANCE(280);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'l') ADVANCE(256);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'l') ADVANCE(302);
      if (lookahead == 's') ADVANCE(240);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'l') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'l') ADVANCE(358);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'l') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'l') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'l') ADVANCE(268);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'l') ADVANCE(269);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'l') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'l') ADVANCE(306);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'l') ADVANCE(278);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'l') ADVANCE(308);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'l') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'm') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'm') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'm') ADVANCE(159);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'm') ADVANCE(161);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'm') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'm') ADVANCE(329);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'm') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'm') ADVANCE(330);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'n') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'n') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'n') ADVANCE(163);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'n') ADVANCE(165);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'n') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'n') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'n') ADVANCE(167);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'n') ADVANCE(397);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'n') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'n') ADVANCE(284);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'n') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'n') ADVANCE(292);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'n') ADVANCE(285);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'o') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'o') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'o') ADVANCE(332);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'o') ADVANCE(132);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'o') ADVANCE(407);
      if (lookahead == 't') ADVANCE(373);
      if (lookahead == 'w') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'o') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'o') ADVANCE(409);
      if (lookahead == 't') ADVANCE(374);
      if (lookahead == 'w') ADVANCE(364);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'o') ADVANCE(376);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'o') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'o') ADVANCE(221);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'o') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'o') ADVANCE(386);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'o') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'o') ADVANCE(334);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'o') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'o') ADVANCE(379);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'o') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'o') ADVANCE(385);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'o') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'o') ADVANCE(389);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'o') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'o') ADVANCE(391);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(177);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(392);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'r') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'r') ADVANCE(253);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'r') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'r') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'r') ADVANCE(254);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'r') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'r') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'r') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'r') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'r') ADVANCE(352);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'r') ADVANCE(255);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'r') ADVANCE(399);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'r') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'r') ADVANCE(304);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'r') ADVANCE(257);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'r') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'r') ADVANCE(258);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'r') ADVANCE(276);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 't') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 't') ADVANCE(260);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 't') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 't') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 't') ADVANCE(181);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 't') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 't') ADVANCE(261);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 't') ADVANCE(262);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 't') ADVANCE(266);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 't') ADVANCE(271);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 't') ADVANCE(272);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 't') ADVANCE(273);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'u') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'u') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'u') ADVANCE(230);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'u') ADVANCE(213);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'w') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'w') ADVANCE(370);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'y') ADVANCE(394);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'y') ADVANCE(401);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'y') ADVANCE(404);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'y') ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'y') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'y') ADVANCE(406);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__control_operand_separator_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(422);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(592);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_option_flag_token1);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '$') ADVANCE(45);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_assignment_operator);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_assignment_operator);
      if (lookahead == '=') ADVANCE(435);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_logical_or_operator);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_logical_and_operator);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_bitwise_or_operator);
      if (lookahead == '|') ADVANCE(430);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_bitwise_xor_operator);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_bitwise_and_operator);
      if (lookahead == '&') ADVANCE(431);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_equality_operator);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_relational_operator);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_relational_operator);
      if (lookahead == '<') ADVANCE(439);
      if (lookahead == '=') ADVANCE(436);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_relational_operator);
      if (lookahead == '=') ADVANCE(436);
      if (lookahead == '>') ADVANCE(439);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_shift_operator);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_additive_operator);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_multiplicative_operator);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_multiplicative_operator);
      if (lookahead == '*') ADVANCE(33);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_multiplicative_operator);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '/') ADVANCE(117);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_unary_minus_operator);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_unary_minus_operator);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '0') ADVANCE(453);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(458);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_bitwise_not_operator);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_logical_not_operator);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_logical_not_operator);
      if (lookahead == '=') ADVANCE(435);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_relocation_type);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_relocation_type);
      if (lookahead == '_') ADVANCE(509);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_relocation_type);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_octal);
      ADVANCE_MAP(
        '.', 463,
        'b', 596,
        'f', 595,
        'E', 56,
        'e', 56,
        'X', 69,
        'x', 69,
        '8', 458,
        '9', 458,
      );
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(454);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_octal);
      if (lookahead == '.') ADVANCE(463);
      if (lookahead == 'b') ADVANCE(59);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(56);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(69);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(454);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_octal);
      if (lookahead == '.') ADVANCE(463);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(56);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(454);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_binary);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(455);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(463);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(56);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(595);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(458);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(458);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(463);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(56);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(458);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(463);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(458);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'f') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(461);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(585);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(462);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(463);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(464);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '*') ADVANCE(33);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '/') ADVANCE(469);
      if (lookahead == '\\') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(468);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(33);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(473);
      if (lookahead == '\\') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(472);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(475);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(476);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.') ADVANCE(578);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(481);
      if (lookahead == '$' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.') ADVANCE(578);
      if (lookahead == ':') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.') ADVANCE(578);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(594);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(595);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(594);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(595);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(486);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(594);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(594);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(478);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(494);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('2' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(493);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(493);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(494);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(504);
      if (lookahead == '3') ADVANCE(499);
      if (lookahead == 'r') ADVANCE(517);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(504);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '2') ADVANCE(451);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '3') ADVANCE(488);
      if (lookahead == 'a') ADVANCE(544);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(491);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(494);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '3') ADVANCE(488);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '3') ADVANCE(488);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(494);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '4') ADVANCE(451);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '6') ADVANCE(451);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '6') ADVANCE(503);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '_') ADVANCE(520);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '_') ADVANCE(519);
      if (lookahead == 'g') ADVANCE(513);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'a') ADVANCE(526);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'a') ADVANCE(514);
      if (lookahead == 'h') ADVANCE(521);
      if (lookahead == 'l') ADVANCE(529);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'b') ADVANCE(537);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'c') ADVANCE(497);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'd') ADVANCE(451);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'd') ADVANCE(506);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'd') ADVANCE(512);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(534);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(522);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(524);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(527);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'g') ADVANCE(531);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'h') ADVANCE(521);
      if (lookahead == 'l') ADVANCE(529);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'i') ADVANCE(451);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(451);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(498);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(506);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(538);
      if (lookahead == 'p') ADVANCE(536);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(523);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(450);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(494);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(451);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(540);
      if (lookahead == 'p') ADVANCE(535);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(541);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'p') ADVANCE(494);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'p') ADVANCE(535);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'r') ADVANCE(528);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'r') ADVANCE(516);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'r') ADVANCE(518);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 's') ADVANCE(505);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 's') ADVANCE(507);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 't') ADVANCE(533);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 't') ADVANCE(449);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 't') ADVANCE(506);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(494);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('2' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(494);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('4' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(494);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('8' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(494);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('8' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(494);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_macro_parameter);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(578);
      if (lookahead == '1') ADVANCE(479);
      if (lookahead == ':') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(578);
      if (lookahead == '1') ADVANCE(479);
      if (lookahead == ':') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(481);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(578);
      if (lookahead == '3') ADVANCE(479);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'a') ADVANCE(562);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(480);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(481);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(578);
      if (lookahead == '3') ADVANCE(479);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(578);
      if (lookahead == '3') ADVANCE(479);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(481);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(578);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'e') ADVANCE(559);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(578);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'o') ADVANCE(481);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(578);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'p') ADVANCE(481);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(578);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == 'r') ADVANCE(557);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(578);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(481);
      if (lookahead == '$' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(578);
      if (lookahead == ':') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(481);
      if (lookahead == '$' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(578);
      if (lookahead == ':') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(481);
      if (lookahead == '$' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(578);
      if (lookahead == ':') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(481);
      if (lookahead == '$' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(578);
      if (lookahead == ':') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(578);
      if (lookahead == ':') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(481);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(578);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_local_label);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_local_label_reference_token1);
      if (lookahead == '.') ADVANCE(578);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(569);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_local_label_reference_token1);
      if (lookahead == '.') ADVANCE(592);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(570);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_global_label);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '1') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(493);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '1') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(493);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      ADVANCE_MAP(
        '2', 225,
        '4', 231,
        '8', 235,
        ':', 571,
        'L', 569,
        'a', 309,
        'b', 216,
        'c', 349,
        'd', 353,
        'f', 316,
        'h', 220,
        'i', 340,
        'l', 243,
        'm', 214,
        'p', 201,
        'q', 408,
        's', 293,
        'u', 326,
        'w', 354,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(420);
      if (('e' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(578);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '3') ADVANCE(489);
      if (lookahead == 'a') ADVANCE(588);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(492);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(493);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '3') ADVANCE(489);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(493);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '3') ADVANCE(489);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(493);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == ':') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(578);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'L') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(462);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(424);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(592);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'L') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(462);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'e') ADVANCE(584);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'o') ADVANCE(493);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'p') ADVANCE(493);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'r') ADVANCE(582);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(464);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(493);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(493);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(493);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(493);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(493);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(493);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_global_numeric_label);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_local_numeric_label);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_local_numeric_label_reference);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_local_numeric_label_reference);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(455);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 85, .external_lex_state = 2},
  [2] = {.lex_state = 102, .external_lex_state = 3},
  [3] = {.lex_state = 101, .external_lex_state = 3},
  [4] = {.lex_state = 85, .external_lex_state = 2},
  [5] = {.lex_state = 80, .external_lex_state = 4},
  [6] = {.lex_state = 85, .external_lex_state = 2},
  [7] = {.lex_state = 102, .external_lex_state = 2},
  [8] = {.lex_state = 101, .external_lex_state = 3},
  [9] = {.lex_state = 101, .external_lex_state = 3},
  [10] = {.lex_state = 102, .external_lex_state = 2},
  [11] = {.lex_state = 101, .external_lex_state = 2},
  [12] = {.lex_state = 101, .external_lex_state = 2},
  [13] = {.lex_state = 101, .external_lex_state = 2},
  [14] = {.lex_state = 101, .external_lex_state = 2},
  [15] = {.lex_state = 101, .external_lex_state = 2},
  [16] = {.lex_state = 101, .external_lex_state = 2},
  [17] = {.lex_state = 101, .external_lex_state = 2},
  [18] = {.lex_state = 101, .external_lex_state = 2},
  [19] = {.lex_state = 101, .external_lex_state = 2},
  [20] = {.lex_state = 101, .external_lex_state = 2},
  [21] = {.lex_state = 101, .external_lex_state = 2},
  [22] = {.lex_state = 101, .external_lex_state = 2},
  [23] = {.lex_state = 101, .external_lex_state = 2},
  [24] = {.lex_state = 101, .external_lex_state = 2},
  [25] = {.lex_state = 101, .external_lex_state = 2},
  [26] = {.lex_state = 101, .external_lex_state = 2},
  [27] = {.lex_state = 101, .external_lex_state = 2},
  [28] = {.lex_state = 101, .external_lex_state = 2},
  [29] = {.lex_state = 101, .external_lex_state = 2},
  [30] = {.lex_state = 101, .external_lex_state = 2},
  [31] = {.lex_state = 101, .external_lex_state = 2},
  [32] = {.lex_state = 101, .external_lex_state = 2},
  [33] = {.lex_state = 101, .external_lex_state = 2},
  [34] = {.lex_state = 101, .external_lex_state = 2},
  [35] = {.lex_state = 101, .external_lex_state = 2},
  [36] = {.lex_state = 101, .external_lex_state = 2},
  [37] = {.lex_state = 101, .external_lex_state = 2},
  [38] = {.lex_state = 101, .external_lex_state = 2},
  [39] = {.lex_state = 101, .external_lex_state = 2},
  [40] = {.lex_state = 101, .external_lex_state = 2},
  [41] = {.lex_state = 101, .external_lex_state = 2},
  [42] = {.lex_state = 101, .external_lex_state = 2},
  [43] = {.lex_state = 101, .external_lex_state = 2},
  [44] = {.lex_state = 101, .external_lex_state = 2},
  [45] = {.lex_state = 101, .external_lex_state = 2},
  [46] = {.lex_state = 101, .external_lex_state = 2},
  [47] = {.lex_state = 101, .external_lex_state = 2},
  [48] = {.lex_state = 101, .external_lex_state = 2},
  [49] = {.lex_state = 101, .external_lex_state = 2},
  [50] = {.lex_state = 101, .external_lex_state = 2},
  [51] = {.lex_state = 101, .external_lex_state = 2},
  [52] = {.lex_state = 101, .external_lex_state = 2},
  [53] = {.lex_state = 101, .external_lex_state = 2},
  [54] = {.lex_state = 101, .external_lex_state = 2},
  [55] = {.lex_state = 101, .external_lex_state = 2},
  [56] = {.lex_state = 101, .external_lex_state = 2},
  [57] = {.lex_state = 101, .external_lex_state = 2},
  [58] = {.lex_state = 101, .external_lex_state = 2},
  [59] = {.lex_state = 101, .external_lex_state = 2},
  [60] = {.lex_state = 101, .external_lex_state = 2},
  [61] = {.lex_state = 101, .external_lex_state = 2},
  [62] = {.lex_state = 101, .external_lex_state = 2},
  [63] = {.lex_state = 101, .external_lex_state = 2},
  [64] = {.lex_state = 101, .external_lex_state = 2},
  [65] = {.lex_state = 101, .external_lex_state = 2},
  [66] = {.lex_state = 101, .external_lex_state = 2},
  [67] = {.lex_state = 101, .external_lex_state = 2},
  [68] = {.lex_state = 101, .external_lex_state = 2},
  [69] = {.lex_state = 101, .external_lex_state = 2},
  [70] = {.lex_state = 101, .external_lex_state = 2},
  [71] = {.lex_state = 101, .external_lex_state = 2},
  [72] = {.lex_state = 101, .external_lex_state = 2},
  [73] = {.lex_state = 101, .external_lex_state = 2},
  [74] = {.lex_state = 101, .external_lex_state = 2},
  [75] = {.lex_state = 101, .external_lex_state = 2},
  [76] = {.lex_state = 101, .external_lex_state = 2},
  [77] = {.lex_state = 101, .external_lex_state = 2},
  [78] = {.lex_state = 101, .external_lex_state = 2},
  [79] = {.lex_state = 101, .external_lex_state = 2},
  [80] = {.lex_state = 101, .external_lex_state = 2},
  [81] = {.lex_state = 101, .external_lex_state = 2},
  [82] = {.lex_state = 101, .external_lex_state = 2},
  [83] = {.lex_state = 101, .external_lex_state = 2},
  [84] = {.lex_state = 101, .external_lex_state = 2},
  [85] = {.lex_state = 101, .external_lex_state = 2},
  [86] = {.lex_state = 101, .external_lex_state = 2},
  [87] = {.lex_state = 101, .external_lex_state = 2},
  [88] = {.lex_state = 101, .external_lex_state = 2},
  [89] = {.lex_state = 101, .external_lex_state = 2},
  [90] = {.lex_state = 101, .external_lex_state = 2},
  [91] = {.lex_state = 101, .external_lex_state = 2},
  [92] = {.lex_state = 101, .external_lex_state = 2},
  [93] = {.lex_state = 101, .external_lex_state = 2},
  [94] = {.lex_state = 101, .external_lex_state = 2},
  [95] = {.lex_state = 101, .external_lex_state = 2},
  [96] = {.lex_state = 101, .external_lex_state = 2},
  [97] = {.lex_state = 101, .external_lex_state = 2},
  [98] = {.lex_state = 101, .external_lex_state = 2},
  [99] = {.lex_state = 101, .external_lex_state = 2},
  [100] = {.lex_state = 101, .external_lex_state = 2},
  [101] = {.lex_state = 101, .external_lex_state = 2},
  [102] = {.lex_state = 101, .external_lex_state = 2},
  [103] = {.lex_state = 101, .external_lex_state = 2},
  [104] = {.lex_state = 85, .external_lex_state = 2},
  [105] = {.lex_state = 85, .external_lex_state = 2},
  [106] = {.lex_state = 85, .external_lex_state = 2},
  [107] = {.lex_state = 81, .external_lex_state = 1},
  [108] = {.lex_state = 81, .external_lex_state = 1},
  [109] = {.lex_state = 81, .external_lex_state = 1},
  [110] = {.lex_state = 81, .external_lex_state = 1},
  [111] = {.lex_state = 81, .external_lex_state = 1},
  [112] = {.lex_state = 81, .external_lex_state = 1},
  [113] = {.lex_state = 81, .external_lex_state = 1},
  [114] = {.lex_state = 81, .external_lex_state = 1},
  [115] = {.lex_state = 81, .external_lex_state = 1},
  [116] = {.lex_state = 81, .external_lex_state = 1},
  [117] = {.lex_state = 81, .external_lex_state = 1},
  [118] = {.lex_state = 81, .external_lex_state = 1},
  [119] = {.lex_state = 81, .external_lex_state = 1},
  [120] = {.lex_state = 81, .external_lex_state = 1},
  [121] = {.lex_state = 81, .external_lex_state = 1},
  [122] = {.lex_state = 81, .external_lex_state = 1},
  [123] = {.lex_state = 81, .external_lex_state = 1},
  [124] = {.lex_state = 81, .external_lex_state = 1},
  [125] = {.lex_state = 81, .external_lex_state = 1},
  [126] = {.lex_state = 81, .external_lex_state = 1},
  [127] = {.lex_state = 81, .external_lex_state = 1},
  [128] = {.lex_state = 81, .external_lex_state = 1},
  [129] = {.lex_state = 81, .external_lex_state = 1},
  [130] = {.lex_state = 81, .external_lex_state = 1},
  [131] = {.lex_state = 81, .external_lex_state = 1},
  [132] = {.lex_state = 81, .external_lex_state = 1},
  [133] = {.lex_state = 81, .external_lex_state = 1},
  [134] = {.lex_state = 81, .external_lex_state = 1},
  [135] = {.lex_state = 81, .external_lex_state = 1},
  [136] = {.lex_state = 81, .external_lex_state = 1},
  [137] = {.lex_state = 81, .external_lex_state = 1},
  [138] = {.lex_state = 81, .external_lex_state = 1},
  [139] = {.lex_state = 81, .external_lex_state = 1},
  [140] = {.lex_state = 81, .external_lex_state = 1},
  [141] = {.lex_state = 81, .external_lex_state = 1},
  [142] = {.lex_state = 81, .external_lex_state = 1},
  [143] = {.lex_state = 81, .external_lex_state = 1},
  [144] = {.lex_state = 81, .external_lex_state = 1},
  [145] = {.lex_state = 81, .external_lex_state = 1},
  [146] = {.lex_state = 81, .external_lex_state = 1},
  [147] = {.lex_state = 81, .external_lex_state = 1},
  [148] = {.lex_state = 81, .external_lex_state = 1},
  [149] = {.lex_state = 81, .external_lex_state = 1},
  [150] = {.lex_state = 104, .external_lex_state = 1},
  [151] = {.lex_state = 104, .external_lex_state = 1},
  [152] = {.lex_state = 104, .external_lex_state = 1},
  [153] = {.lex_state = 104, .external_lex_state = 1},
  [154] = {.lex_state = 104, .external_lex_state = 1},
  [155] = {.lex_state = 104, .external_lex_state = 1},
  [156] = {.lex_state = 104, .external_lex_state = 1},
  [157] = {.lex_state = 104, .external_lex_state = 1},
  [158] = {.lex_state = 104, .external_lex_state = 1},
  [159] = {.lex_state = 104, .external_lex_state = 1},
  [160] = {.lex_state = 104, .external_lex_state = 1},
  [161] = {.lex_state = 104, .external_lex_state = 1},
  [162] = {.lex_state = 104, .external_lex_state = 1},
  [163] = {.lex_state = 104, .external_lex_state = 1},
  [164] = {.lex_state = 104, .external_lex_state = 1},
  [165] = {.lex_state = 104, .external_lex_state = 1},
  [166] = {.lex_state = 104, .external_lex_state = 1},
  [167] = {.lex_state = 104, .external_lex_state = 1},
  [168] = {.lex_state = 104, .external_lex_state = 1},
  [169] = {.lex_state = 104, .external_lex_state = 1},
  [170] = {.lex_state = 104, .external_lex_state = 1},
  [171] = {.lex_state = 104, .external_lex_state = 1},
  [172] = {.lex_state = 104, .external_lex_state = 1},
  [173] = {.lex_state = 104, .external_lex_state = 1},
  [174] = {.lex_state = 104, .external_lex_state = 1},
  [175] = {.lex_state = 104, .external_lex_state = 1},
  [176] = {.lex_state = 104, .external_lex_state = 1},
  [177] = {.lex_state = 104, .external_lex_state = 1},
  [178] = {.lex_state = 104, .external_lex_state = 1},
  [179] = {.lex_state = 104, .external_lex_state = 1},
  [180] = {.lex_state = 104, .external_lex_state = 1},
  [181] = {.lex_state = 104, .external_lex_state = 1},
  [182] = {.lex_state = 104, .external_lex_state = 1},
  [183] = {.lex_state = 104, .external_lex_state = 1},
  [184] = {.lex_state = 104, .external_lex_state = 1},
  [185] = {.lex_state = 104, .external_lex_state = 1},
  [186] = {.lex_state = 104, .external_lex_state = 1},
  [187] = {.lex_state = 104, .external_lex_state = 1},
  [188] = {.lex_state = 104, .external_lex_state = 1},
  [189] = {.lex_state = 104, .external_lex_state = 1},
  [190] = {.lex_state = 104, .external_lex_state = 1},
  [191] = {.lex_state = 104, .external_lex_state = 1},
  [192] = {.lex_state = 104, .external_lex_state = 1},
  [193] = {.lex_state = 103, .external_lex_state = 5},
  [194] = {.lex_state = 103, .external_lex_state = 5},
  [195] = {.lex_state = 103, .external_lex_state = 5},
  [196] = {.lex_state = 103, .external_lex_state = 5},
  [197] = {.lex_state = 103, .external_lex_state = 5},
  [198] = {.lex_state = 103, .external_lex_state = 5},
  [199] = {.lex_state = 103, .external_lex_state = 5},
  [200] = {.lex_state = 103, .external_lex_state = 5},
  [201] = {.lex_state = 103, .external_lex_state = 5},
  [202] = {.lex_state = 103, .external_lex_state = 5},
  [203] = {.lex_state = 103, .external_lex_state = 5},
  [204] = {.lex_state = 103, .external_lex_state = 5},
  [205] = {.lex_state = 103, .external_lex_state = 5},
  [206] = {.lex_state = 103, .external_lex_state = 5},
  [207] = {.lex_state = 103, .external_lex_state = 5},
  [208] = {.lex_state = 103, .external_lex_state = 5},
  [209] = {.lex_state = 103, .external_lex_state = 5},
  [210] = {.lex_state = 103, .external_lex_state = 5},
  [211] = {.lex_state = 103, .external_lex_state = 5},
  [212] = {.lex_state = 103, .external_lex_state = 5},
  [213] = {.lex_state = 103, .external_lex_state = 5},
  [214] = {.lex_state = 103, .external_lex_state = 5},
  [215] = {.lex_state = 103, .external_lex_state = 5},
  [216] = {.lex_state = 103, .external_lex_state = 5},
  [217] = {.lex_state = 103, .external_lex_state = 5},
  [218] = {.lex_state = 103, .external_lex_state = 5},
  [219] = {.lex_state = 103, .external_lex_state = 5},
  [220] = {.lex_state = 103, .external_lex_state = 5},
  [221] = {.lex_state = 103, .external_lex_state = 5},
  [222] = {.lex_state = 103, .external_lex_state = 5},
  [223] = {.lex_state = 103, .external_lex_state = 5},
  [224] = {.lex_state = 103, .external_lex_state = 5},
  [225] = {.lex_state = 103, .external_lex_state = 5},
  [226] = {.lex_state = 103, .external_lex_state = 5},
  [227] = {.lex_state = 103, .external_lex_state = 5},
  [228] = {.lex_state = 103, .external_lex_state = 5},
  [229] = {.lex_state = 103, .external_lex_state = 5},
  [230] = {.lex_state = 103, .external_lex_state = 5},
  [231] = {.lex_state = 103, .external_lex_state = 5},
  [232] = {.lex_state = 103, .external_lex_state = 5},
  [233] = {.lex_state = 103, .external_lex_state = 5},
  [234] = {.lex_state = 103, .external_lex_state = 5},
  [235] = {.lex_state = 103, .external_lex_state = 5},
  [236] = {.lex_state = 103, .external_lex_state = 5},
  [237] = {.lex_state = 80, .external_lex_state = 1},
  [238] = {.lex_state = 27, .external_lex_state = 6},
  [239] = {.lex_state = 27, .external_lex_state = 6},
  [240] = {.lex_state = 27, .external_lex_state = 6},
  [241] = {.lex_state = 27, .external_lex_state = 6},
  [242] = {.lex_state = 27, .external_lex_state = 6},
  [243] = {.lex_state = 27, .external_lex_state = 6},
  [244] = {.lex_state = 27, .external_lex_state = 6},
  [245] = {.lex_state = 27, .external_lex_state = 6},
  [246] = {.lex_state = 27, .external_lex_state = 6},
  [247] = {.lex_state = 27, .external_lex_state = 6},
  [248] = {.lex_state = 27, .external_lex_state = 6},
  [249] = {.lex_state = 27, .external_lex_state = 6},
  [250] = {.lex_state = 27, .external_lex_state = 6},
  [251] = {.lex_state = 27, .external_lex_state = 6},
  [252] = {.lex_state = 27, .external_lex_state = 6},
  [253] = {.lex_state = 27, .external_lex_state = 6},
  [254] = {.lex_state = 27, .external_lex_state = 6},
  [255] = {.lex_state = 27, .external_lex_state = 6},
  [256] = {.lex_state = 27, .external_lex_state = 6},
  [257] = {.lex_state = 27, .external_lex_state = 6},
  [258] = {.lex_state = 27, .external_lex_state = 6},
  [259] = {.lex_state = 27, .external_lex_state = 6},
  [260] = {.lex_state = 27, .external_lex_state = 6},
  [261] = {.lex_state = 27, .external_lex_state = 6},
  [262] = {.lex_state = 27, .external_lex_state = 6},
  [263] = {.lex_state = 27, .external_lex_state = 6},
  [264] = {.lex_state = 27, .external_lex_state = 6},
  [265] = {.lex_state = 27, .external_lex_state = 6},
  [266] = {.lex_state = 27, .external_lex_state = 6},
  [267] = {.lex_state = 27, .external_lex_state = 6},
  [268] = {.lex_state = 27, .external_lex_state = 6},
  [269] = {.lex_state = 27, .external_lex_state = 6},
  [270] = {.lex_state = 27, .external_lex_state = 6},
  [271] = {.lex_state = 27, .external_lex_state = 6},
  [272] = {.lex_state = 27, .external_lex_state = 6},
  [273] = {.lex_state = 27, .external_lex_state = 6},
  [274] = {.lex_state = 27, .external_lex_state = 6},
  [275] = {.lex_state = 27, .external_lex_state = 6},
  [276] = {.lex_state = 27, .external_lex_state = 6},
  [277] = {.lex_state = 27, .external_lex_state = 6},
  [278] = {.lex_state = 27, .external_lex_state = 6},
  [279] = {.lex_state = 27, .external_lex_state = 6},
  [280] = {.lex_state = 27, .external_lex_state = 6},
  [281] = {.lex_state = 27, .external_lex_state = 6},
  [282] = {.lex_state = 27, .external_lex_state = 6},
  [283] = {.lex_state = 27, .external_lex_state = 6},
  [284] = {.lex_state = 27, .external_lex_state = 6},
  [285] = {.lex_state = 27, .external_lex_state = 6},
  [286] = {.lex_state = 27, .external_lex_state = 6},
  [287] = {.lex_state = 27, .external_lex_state = 6},
  [288] = {.lex_state = 27, .external_lex_state = 6},
  [289] = {.lex_state = 27, .external_lex_state = 6},
  [290] = {.lex_state = 27, .external_lex_state = 6},
  [291] = {.lex_state = 27, .external_lex_state = 6},
  [292] = {.lex_state = 27, .external_lex_state = 6},
  [293] = {.lex_state = 80, .external_lex_state = 1},
  [294] = {.lex_state = 80, .external_lex_state = 1},
  [295] = {.lex_state = 27, .external_lex_state = 2},
  [296] = {.lex_state = 27, .external_lex_state = 2},
  [297] = {.lex_state = 27, .external_lex_state = 2},
  [298] = {.lex_state = 27, .external_lex_state = 2},
  [299] = {.lex_state = 186, .external_lex_state = 2},
  [300] = {.lex_state = 27, .external_lex_state = 2},
  [301] = {.lex_state = 27, .external_lex_state = 2},
  [302] = {.lex_state = 27, .external_lex_state = 2},
  [303] = {.lex_state = 27, .external_lex_state = 2},
  [304] = {.lex_state = 27, .external_lex_state = 2},
  [305] = {.lex_state = 27, .external_lex_state = 2},
  [306] = {.lex_state = 27, .external_lex_state = 2},
  [307] = {.lex_state = 27, .external_lex_state = 2},
  [308] = {.lex_state = 27, .external_lex_state = 2},
  [309] = {.lex_state = 27, .external_lex_state = 2},
  [310] = {.lex_state = 27, .external_lex_state = 2},
  [311] = {.lex_state = 27, .external_lex_state = 2},
  [312] = {.lex_state = 27, .external_lex_state = 2},
  [313] = {.lex_state = 27, .external_lex_state = 2},
  [314] = {.lex_state = 27, .external_lex_state = 2},
  [315] = {.lex_state = 27, .external_lex_state = 2},
  [316] = {.lex_state = 27, .external_lex_state = 2},
  [317] = {.lex_state = 186, .external_lex_state = 2},
  [318] = {.lex_state = 27, .external_lex_state = 2},
  [319] = {.lex_state = 27, .external_lex_state = 2},
  [320] = {.lex_state = 27, .external_lex_state = 2},
  [321] = {.lex_state = 27, .external_lex_state = 2},
  [322] = {.lex_state = 27, .external_lex_state = 2},
  [323] = {.lex_state = 27, .external_lex_state = 2},
  [324] = {.lex_state = 27, .external_lex_state = 2},
  [325] = {.lex_state = 27, .external_lex_state = 2},
  [326] = {.lex_state = 27, .external_lex_state = 2},
  [327] = {.lex_state = 186, .external_lex_state = 2},
  [328] = {.lex_state = 27, .external_lex_state = 2},
  [329] = {.lex_state = 27, .external_lex_state = 2},
  [330] = {.lex_state = 27, .external_lex_state = 2},
  [331] = {.lex_state = 27, .external_lex_state = 2},
  [332] = {.lex_state = 27, .external_lex_state = 2},
  [333] = {.lex_state = 27, .external_lex_state = 2},
  [334] = {.lex_state = 27, .external_lex_state = 2},
  [335] = {.lex_state = 186, .external_lex_state = 2},
  [336] = {.lex_state = 186, .external_lex_state = 2},
  [337] = {.lex_state = 27, .external_lex_state = 2},
  [338] = {.lex_state = 27, .external_lex_state = 2},
  [339] = {.lex_state = 27, .external_lex_state = 2},
  [340] = {.lex_state = 80, .external_lex_state = 1},
  [341] = {.lex_state = 27, .external_lex_state = 2},
  [342] = {.lex_state = 80, .external_lex_state = 1},
  [343] = {.lex_state = 80, .external_lex_state = 1},
  [344] = {.lex_state = 27, .external_lex_state = 2},
  [345] = {.lex_state = 80, .external_lex_state = 1},
  [346] = {.lex_state = 27, .external_lex_state = 2},
  [347] = {.lex_state = 80, .external_lex_state = 4},
  [348] = {.lex_state = 80, .external_lex_state = 4},
  [349] = {.lex_state = 102, .external_lex_state = 1},
  [350] = {.lex_state = 80, .external_lex_state = 4},
  [351] = {.lex_state = 102, .external_lex_state = 1},
  [352] = {.lex_state = 80, .external_lex_state = 3},
  [353] = {.lex_state = 102, .external_lex_state = 1},
  [354] = {.lex_state = 80, .external_lex_state = 3},
  [355] = {.lex_state = 102, .external_lex_state = 1},
  [356] = {.lex_state = 80, .external_lex_state = 3},
  [357] = {.lex_state = 102, .external_lex_state = 1},
  [358] = {.lex_state = 0, .external_lex_state = 5},
  [359] = {.lex_state = 0, .external_lex_state = 5},
  [360] = {.lex_state = 82, .external_lex_state = 3},
  [361] = {.lex_state = 82, .external_lex_state = 3},
  [362] = {.lex_state = 82, .external_lex_state = 3},
  [363] = {.lex_state = 105, .external_lex_state = 3},
  [364] = {.lex_state = 102, .external_lex_state = 1},
  [365] = {.lex_state = 82, .external_lex_state = 3},
  [366] = {.lex_state = 102, .external_lex_state = 1},
  [367] = {.lex_state = 102, .external_lex_state = 1},
  [368] = {.lex_state = 82, .external_lex_state = 3},
  [369] = {.lex_state = 0, .external_lex_state = 5},
  [370] = {.lex_state = 0, .external_lex_state = 5},
  [371] = {.lex_state = 102, .external_lex_state = 1},
  [372] = {.lex_state = 0, .external_lex_state = 5},
  [373] = {.lex_state = 102, .external_lex_state = 1},
  [374] = {.lex_state = 0, .external_lex_state = 5},
  [375] = {.lex_state = 0, .external_lex_state = 5},
  [376] = {.lex_state = 106, .external_lex_state = 3},
  [377] = {.lex_state = 105, .external_lex_state = 3},
  [378] = {.lex_state = 0, .external_lex_state = 6},
  [379] = {.lex_state = 0, .external_lex_state = 5},
  [380] = {.lex_state = 106, .external_lex_state = 3},
  [381] = {.lex_state = 0, .external_lex_state = 3},
  [382] = {.lex_state = 0, .external_lex_state = 3},
  [383] = {.lex_state = 2, .external_lex_state = 2},
  [384] = {.lex_state = 82, .external_lex_state = 2},
  [385] = {.lex_state = 82, .external_lex_state = 2},
  [386] = {.lex_state = 2, .external_lex_state = 2},
  [387] = {.lex_state = 0, .external_lex_state = 6},
  [388] = {.lex_state = 0, .external_lex_state = 6},
  [389] = {.lex_state = 0, .external_lex_state = 6},
  [390] = {.lex_state = 0, .external_lex_state = 6},
  [391] = {.lex_state = 0, .external_lex_state = 6},
  [392] = {.lex_state = 0, .external_lex_state = 6},
  [393] = {.lex_state = 82, .external_lex_state = 2},
  [394] = {.lex_state = 28, .external_lex_state = 2},
  [395] = {.lex_state = 0, .external_lex_state = 7},
  [396] = {.lex_state = 0, .external_lex_state = 3},
  [397] = {.lex_state = 0, .external_lex_state = 3},
  [398] = {.lex_state = 82, .external_lex_state = 2},
  [399] = {.lex_state = 0, .external_lex_state = 3},
  [400] = {.lex_state = 28, .external_lex_state = 2},
  [401] = {.lex_state = 0, .external_lex_state = 3},
  [402] = {.lex_state = 0, .external_lex_state = 3},
  [403] = {.lex_state = 0, .external_lex_state = 6},
  [404] = {.lex_state = 0, .external_lex_state = 3},
  [405] = {.lex_state = 0, .external_lex_state = 3},
  [406] = {.lex_state = 0, .external_lex_state = 3},
  [407] = {.lex_state = 0, .external_lex_state = 3},
  [408] = {.lex_state = 28, .external_lex_state = 2},
  [409] = {.lex_state = 0, .external_lex_state = 3},
  [410] = {.lex_state = 82, .external_lex_state = 2},
  [411] = {.lex_state = 0, .external_lex_state = 3},
  [412] = {.lex_state = 28, .external_lex_state = 2},
  [413] = {.lex_state = 0, .external_lex_state = 6},
  [414] = {.lex_state = 0, .external_lex_state = 3},
  [415] = {.lex_state = 0, .external_lex_state = 3},
  [416] = {.lex_state = 28, .external_lex_state = 2},
  [417] = {.lex_state = 28, .external_lex_state = 2},
  [418] = {.lex_state = 28, .external_lex_state = 2},
  [419] = {.lex_state = 0, .external_lex_state = 3},
  [420] = {.lex_state = 0, .external_lex_state = 6},
  [421] = {.lex_state = 28, .external_lex_state = 2},
  [422] = {.lex_state = 0, .external_lex_state = 3},
  [423] = {.lex_state = 28, .external_lex_state = 2},
  [424] = {.lex_state = 0, .external_lex_state = 3},
  [425] = {.lex_state = 0, .external_lex_state = 3},
  [426] = {.lex_state = 0, .external_lex_state = 3},
  [427] = {.lex_state = 0, .external_lex_state = 3},
  [428] = {.lex_state = 0, .external_lex_state = 2},
  [429] = {.lex_state = 0, .external_lex_state = 3},
  [430] = {.lex_state = 0, .external_lex_state = 3},
  [431] = {.lex_state = 82, .external_lex_state = 2},
  [432] = {.lex_state = 29, .external_lex_state = 2},
  [433] = {.lex_state = 0, .external_lex_state = 2},
  [434] = {.lex_state = 0, .external_lex_state = 6},
  [435] = {.lex_state = 0, .external_lex_state = 2},
  [436] = {.lex_state = 0, .external_lex_state = 2},
  [437] = {.lex_state = 0, .external_lex_state = 6},
  [438] = {.lex_state = 82, .external_lex_state = 2},
  [439] = {.lex_state = 0, .external_lex_state = 6},
  [440] = {.lex_state = 0, .external_lex_state = 2},
  [441] = {.lex_state = 0, .external_lex_state = 2},
  [442] = {.lex_state = 0, .external_lex_state = 2},
  [443] = {.lex_state = 0, .external_lex_state = 2},
  [444] = {.lex_state = 100, .external_lex_state = 2},
  [445] = {.lex_state = 29, .external_lex_state = 2},
  [446] = {.lex_state = 36, .external_lex_state = 2},
  [447] = {.lex_state = 0, .external_lex_state = 7},
  [448] = {.lex_state = 36, .external_lex_state = 2},
  [449] = {.lex_state = 36, .external_lex_state = 2},
  [450] = {.lex_state = 0, .external_lex_state = 7},
  [451] = {.lex_state = 36, .external_lex_state = 2},
  [452] = {.lex_state = 0, .external_lex_state = 3},
  [453] = {.lex_state = 36, .external_lex_state = 2},
  [454] = {.lex_state = 29, .external_lex_state = 2},
  [455] = {.lex_state = 0, .external_lex_state = 2},
  [456] = {.lex_state = 0, .external_lex_state = 2},
  [457] = {.lex_state = 0, .external_lex_state = 2},
  [458] = {.lex_state = 0, .external_lex_state = 2},
  [459] = {.lex_state = 0, .external_lex_state = 2},
  [460] = {.lex_state = 100, .external_lex_state = 2},
  [461] = {.lex_state = 29, .external_lex_state = 2},
  [462] = {.lex_state = 0, .external_lex_state = 2},
  [463] = {.lex_state = 105, .external_lex_state = 2},
  [464] = {.lex_state = 0, .external_lex_state = 2},
  [465] = {.lex_state = 0, .external_lex_state = 2},
  [466] = {.lex_state = 0, .external_lex_state = 2},
  [467] = {.lex_state = 0, .external_lex_state = 2},
  [468] = {.lex_state = 104, .external_lex_state = 2},
  [469] = {.lex_state = 0, .external_lex_state = 2},
  [470] = {.lex_state = 0, .external_lex_state = 2},
  [471] = {.lex_state = 0, .external_lex_state = 2},
  [472] = {.lex_state = 0, .external_lex_state = 2},
  [473] = {.lex_state = 186, .external_lex_state = 2},
  [474] = {.lex_state = 29, .external_lex_state = 2},
  [475] = {.lex_state = 0, .external_lex_state = 2},
  [476] = {.lex_state = 186, .external_lex_state = 2},
  [477] = {.lex_state = 0, .external_lex_state = 2},
  [478] = {.lex_state = 29, .external_lex_state = 2},
  [479] = {.lex_state = 0, .external_lex_state = 2},
  [480] = {.lex_state = 0, .external_lex_state = 2},
  [481] = {.lex_state = 105, .external_lex_state = 2},
  [482] = {.lex_state = 0, .external_lex_state = 2},
  [483] = {.lex_state = 29, .external_lex_state = 2},
  [484] = {.lex_state = 186, .external_lex_state = 2},
  [485] = {.lex_state = 0, .external_lex_state = 2},
  [486] = {.lex_state = 0, .external_lex_state = 2},
  [487] = {.lex_state = 0, .external_lex_state = 2},
  [488] = {.lex_state = 186, .external_lex_state = 2},
  [489] = {.lex_state = 0, .external_lex_state = 2},
  [490] = {.lex_state = 0, .external_lex_state = 2},
  [491] = {.lex_state = 0, .external_lex_state = 2},
  [492] = {.lex_state = 0, .external_lex_state = 2},
  [493] = {.lex_state = 105, .external_lex_state = 2},
  [494] = {.lex_state = 0, .external_lex_state = 2},
  [495] = {.lex_state = 105, .external_lex_state = 2},
  [496] = {.lex_state = 0, .external_lex_state = 2},
  [497] = {.lex_state = 105, .external_lex_state = 2},
  [498] = {.lex_state = 0, .external_lex_state = 2},
  [499] = {.lex_state = 0, .external_lex_state = 2},
  [500] = {.lex_state = 0, .external_lex_state = 2},
  [501] = {.lex_state = 0, .external_lex_state = 2},
  [502] = {.lex_state = 0, .external_lex_state = 2},
  [503] = {.lex_state = 0, .external_lex_state = 2},
  [504] = {.lex_state = 0, .external_lex_state = 2},
  [505] = {.lex_state = 0, .external_lex_state = 2},
  [506] = {.lex_state = 0, .external_lex_state = 3},
  [507] = {.lex_state = 105, .external_lex_state = 2},
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
    [sym_program] = STATE(466),
    [sym__statement] = STATE(4),
    [sym__comment] = STATE(480),
    [sym_directive] = STATE(382),
    [sym__macro_directive] = STATE(425),
    [sym__numeric_directive] = STATE(426),
    [sym_numeric_mnemonic] = STATE(495),
    [sym__string_directive] = STATE(411),
    [sym_string_mnemonic] = STATE(463),
    [sym__control_directive] = STATE(409),
    [sym_control_mnemonic] = STATE(376),
    [sym_instruction] = STATE(382),
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
    STATE(154), 1,
      sym__assignment_expression,
    STATE(155), 1,
      sym__logical_or_expression,
    STATE(156), 1,
      sym__wrapped_logical_or_expression,
    STATE(157), 1,
      sym__logical_and_expression,
    STATE(158), 1,
      sym__wrapped_logical_and_expression,
    STATE(159), 1,
      sym__bitwise_or_expression,
    STATE(160), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(177), 1,
      sym__bitwise_xor_expression,
    STATE(178), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(180), 1,
      sym__bitwise_and_expression,
    STATE(181), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(182), 1,
      sym__equality_expression,
    STATE(183), 1,
      sym__wrapped_equality_expression,
    STATE(184), 1,
      sym__relational_expression,
    STATE(185), 1,
      sym__wrapped_relational_expression,
    STATE(186), 1,
      sym__shift_expression,
    STATE(187), 1,
      sym__wrapped_shift_expression,
    STATE(188), 1,
      sym__additive_expression,
    STATE(189), 1,
      sym__wrapped_additive_expression,
    STATE(190), 1,
      sym__multiplicative_expression,
    STATE(351), 1,
      sym__wrapped_assignment_expression,
    STATE(404), 1,
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
    STATE(357), 4,
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
    STATE(191), 10,
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
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      sym_unary_minus_operator,
    ACTIONS(61), 1,
      sym_relocation_type,
    ACTIONS(67), 1,
      aux_sym_decimal_token1,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(75), 1,
      aux_sym_symbol_token1,
    STATE(196), 1,
      sym__wrapped_equality_expression,
    STATE(197), 1,
      sym__relational_expression,
    STATE(198), 1,
      sym__wrapped_relational_expression,
    STATE(199), 1,
      sym__shift_expression,
    STATE(200), 1,
      sym__wrapped_shift_expression,
    STATE(201), 1,
      sym__additive_expression,
    STATE(202), 1,
      sym__wrapped_additive_expression,
    STATE(203), 1,
      sym__multiplicative_expression,
    STATE(209), 1,
      sym__assignment_expression,
    STATE(210), 1,
      sym__logical_or_expression,
    STATE(211), 1,
      sym__wrapped_logical_or_expression,
    STATE(213), 1,
      sym__wrapped_logical_and_expression,
    STATE(214), 1,
      sym__bitwise_or_expression,
    STATE(215), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(216), 1,
      sym__bitwise_xor_expression,
    STATE(217), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(218), 1,
      sym__bitwise_and_expression,
    STATE(219), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(235), 1,
      sym__equality_expression,
    STATE(236), 1,
      sym__logical_and_expression,
    STATE(359), 1,
      sym__wrapped_assignment_expression,
    STATE(419), 1,
      sym__call_expression,
    STATE(422), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(59), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(65), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(372), 2,
      sym__operand,
      sym_string,
    ACTIONS(53), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(63), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(204), 10,
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
  [275] = 21,
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
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    STATE(376), 1,
      sym_control_mnemonic,
    STATE(409), 1,
      sym__control_directive,
    STATE(411), 1,
      sym__string_directive,
    STATE(425), 1,
      sym__macro_directive,
    STATE(426), 1,
      sym__numeric_directive,
    STATE(463), 1,
      sym_string_mnemonic,
    STATE(491), 1,
      sym__comment,
    STATE(495), 1,
      sym_numeric_mnemonic,
    STATE(381), 2,
      sym_directive,
      sym_instruction,
    ACTIONS(79), 3,
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
  [376] = 34,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      sym_relocation_type,
    ACTIONS(93), 1,
      aux_sym_decimal_token1,
    ACTIONS(95), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(99), 1,
      aux_sym_symbol_token1,
    STATE(111), 1,
      sym__bitwise_xor_expression,
    STATE(113), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(114), 1,
      sym__bitwise_and_expression,
    STATE(115), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(116), 1,
      sym__equality_expression,
    STATE(117), 1,
      sym__wrapped_equality_expression,
    STATE(118), 1,
      sym__relational_expression,
    STATE(119), 1,
      sym__wrapped_relational_expression,
    STATE(120), 1,
      sym__shift_expression,
    STATE(121), 1,
      sym__wrapped_shift_expression,
    STATE(122), 1,
      sym__additive_expression,
    STATE(123), 1,
      sym__wrapped_additive_expression,
    STATE(124), 1,
      sym__multiplicative_expression,
    STATE(131), 1,
      sym__assignment_expression,
    STATE(132), 1,
      sym__logical_or_expression,
    STATE(133), 1,
      sym__wrapped_logical_or_expression,
    STATE(134), 1,
      sym__logical_and_expression,
    STATE(135), 1,
      sym__wrapped_logical_and_expression,
    STATE(137), 1,
      sym__bitwise_or_expression,
    STATE(138), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(343), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(81), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(87), 3,
      sym_unary_minus_operator,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(83), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(91), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(149), 10,
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
  [503] = 20,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 1,
      sym_line_comment,
    ACTIONS(109), 1,
      sym_macro_mnemonic,
    ACTIONS(118), 1,
      aux_sym_control_mnemonic_token1,
    ACTIONS(121), 1,
      sym_opcode,
    STATE(376), 1,
      sym_control_mnemonic,
    STATE(409), 1,
      sym__control_directive,
    STATE(411), 1,
      sym__string_directive,
    STATE(425), 1,
      sym__macro_directive,
    STATE(426), 1,
      sym__numeric_directive,
    STATE(463), 1,
      sym_string_mnemonic,
    STATE(495), 1,
      sym_numeric_mnemonic,
    STATE(430), 2,
      sym_directive,
      sym_instruction,
    ACTIONS(103), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
    STATE(6), 3,
      sym__statement,
      sym__label,
      aux_sym_program_repeat1,
    ACTIONS(124), 4,
      sym_local_label,
      sym_global_label,
      sym_global_numeric_label,
      sym_local_numeric_label,
    ACTIONS(115), 5,
      anon_sym_DOTasciz,
      anon_sym_DOTascii,
      anon_sym_DOTasciiz,
      anon_sym_DOTstring,
      anon_sym_DOTstringz,
    ACTIONS(112), 26,
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
  [601] = 38,
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
    STATE(154), 1,
      sym__assignment_expression,
    STATE(155), 1,
      sym__logical_or_expression,
    STATE(156), 1,
      sym__wrapped_logical_or_expression,
    STATE(157), 1,
      sym__logical_and_expression,
    STATE(158), 1,
      sym__wrapped_logical_and_expression,
    STATE(159), 1,
      sym__bitwise_or_expression,
    STATE(160), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(177), 1,
      sym__bitwise_xor_expression,
    STATE(178), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(180), 1,
      sym__bitwise_and_expression,
    STATE(181), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(182), 1,
      sym__equality_expression,
    STATE(183), 1,
      sym__wrapped_equality_expression,
    STATE(184), 1,
      sym__relational_expression,
    STATE(185), 1,
      sym__wrapped_relational_expression,
    STATE(186), 1,
      sym__shift_expression,
    STATE(187), 1,
      sym__wrapped_shift_expression,
    STATE(188), 1,
      sym__additive_expression,
    STATE(189), 1,
      sym__wrapped_additive_expression,
    STATE(190), 1,
      sym__multiplicative_expression,
    STATE(351), 1,
      sym__wrapped_assignment_expression,
    STATE(399), 1,
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
    STATE(357), 4,
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
    STATE(191), 10,
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
  [735] = 36,
    ACTIONS(57), 1,
      sym_unary_minus_operator,
    ACTIONS(61), 1,
      sym_relocation_type,
    ACTIONS(67), 1,
      aux_sym_decimal_token1,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(75), 1,
      aux_sym_symbol_token1,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    STATE(196), 1,
      sym__wrapped_equality_expression,
    STATE(197), 1,
      sym__relational_expression,
    STATE(198), 1,
      sym__wrapped_relational_expression,
    STATE(199), 1,
      sym__shift_expression,
    STATE(200), 1,
      sym__wrapped_shift_expression,
    STATE(201), 1,
      sym__additive_expression,
    STATE(202), 1,
      sym__wrapped_additive_expression,
    STATE(203), 1,
      sym__multiplicative_expression,
    STATE(209), 1,
      sym__assignment_expression,
    STATE(210), 1,
      sym__logical_or_expression,
    STATE(211), 1,
      sym__wrapped_logical_or_expression,
    STATE(213), 1,
      sym__wrapped_logical_and_expression,
    STATE(214), 1,
      sym__bitwise_or_expression,
    STATE(215), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(216), 1,
      sym__bitwise_xor_expression,
    STATE(217), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(218), 1,
      sym__bitwise_and_expression,
    STATE(219), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(235), 1,
      sym__equality_expression,
    STATE(236), 1,
      sym__logical_and_expression,
    STATE(359), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(59), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(65), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(375), 2,
      sym__operand,
      sym_string,
    ACTIONS(127), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(63), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(204), 10,
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
  [864] = 36,
    ACTIONS(57), 1,
      sym_unary_minus_operator,
    ACTIONS(61), 1,
      sym_relocation_type,
    ACTIONS(67), 1,
      aux_sym_decimal_token1,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(75), 1,
      aux_sym_symbol_token1,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    STATE(196), 1,
      sym__wrapped_equality_expression,
    STATE(197), 1,
      sym__relational_expression,
    STATE(198), 1,
      sym__wrapped_relational_expression,
    STATE(199), 1,
      sym__shift_expression,
    STATE(200), 1,
      sym__wrapped_shift_expression,
    STATE(201), 1,
      sym__additive_expression,
    STATE(202), 1,
      sym__wrapped_additive_expression,
    STATE(203), 1,
      sym__multiplicative_expression,
    STATE(209), 1,
      sym__assignment_expression,
    STATE(210), 1,
      sym__logical_or_expression,
    STATE(211), 1,
      sym__wrapped_logical_or_expression,
    STATE(213), 1,
      sym__wrapped_logical_and_expression,
    STATE(214), 1,
      sym__bitwise_or_expression,
    STATE(215), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(216), 1,
      sym__bitwise_xor_expression,
    STATE(217), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(218), 1,
      sym__bitwise_and_expression,
    STATE(219), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(235), 1,
      sym__equality_expression,
    STATE(236), 1,
      sym__logical_and_expression,
    STATE(359), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(59), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(65), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(375), 2,
      sym__operand,
      sym_string,
    ACTIONS(131), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(63), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(204), 10,
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
  [993] = 37,
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
    STATE(154), 1,
      sym__assignment_expression,
    STATE(155), 1,
      sym__logical_or_expression,
    STATE(156), 1,
      sym__wrapped_logical_or_expression,
    STATE(157), 1,
      sym__logical_and_expression,
    STATE(158), 1,
      sym__wrapped_logical_and_expression,
    STATE(159), 1,
      sym__bitwise_or_expression,
    STATE(160), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(177), 1,
      sym__bitwise_xor_expression,
    STATE(178), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(180), 1,
      sym__bitwise_and_expression,
    STATE(181), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(182), 1,
      sym__equality_expression,
    STATE(183), 1,
      sym__wrapped_equality_expression,
    STATE(184), 1,
      sym__relational_expression,
    STATE(185), 1,
      sym__wrapped_relational_expression,
    STATE(186), 1,
      sym__shift_expression,
    STATE(187), 1,
      sym__wrapped_shift_expression,
    STATE(188), 1,
      sym__additive_expression,
    STATE(189), 1,
      sym__wrapped_additive_expression,
    STATE(190), 1,
      sym__multiplicative_expression,
    STATE(351), 1,
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
    STATE(364), 4,
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
    STATE(191), 10,
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
  [1124] = 39,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
    ACTIONS(137), 1,
      sym_unary_minus_operator,
    ACTIONS(141), 1,
      sym_relocation_type,
    ACTIONS(147), 1,
      aux_sym_decimal_token1,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(239), 1,
      sym__bitwise_and_expression,
    STATE(240), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(241), 1,
      sym__equality_expression,
    STATE(242), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(243), 1,
      sym__relational_expression,
    STATE(244), 1,
      sym__wrapped_relational_expression,
    STATE(245), 1,
      sym__shift_expression,
    STATE(246), 1,
      sym__wrapped_shift_expression,
    STATE(247), 1,
      sym__additive_expression,
    STATE(248), 1,
      sym__wrapped_additive_expression,
    STATE(249), 1,
      sym__multiplicative_expression,
    STATE(255), 1,
      sym__assignment_expression,
    STATE(256), 1,
      sym__logical_or_expression,
    STATE(257), 1,
      sym__wrapped_logical_or_expression,
    STATE(258), 1,
      sym__logical_and_expression,
    STATE(262), 1,
      sym_symbol,
    STATE(276), 1,
      sym__wrapped_logical_and_expression,
    STATE(277), 1,
      sym__bitwise_or_expression,
    STATE(278), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_equality_expression,
    STATE(388), 1,
      sym__wrapped_assignment_expression,
    STATE(501), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(139), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(145), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(153), 2,
      sym_register,
      sym_macro_variable,
    STATE(420), 2,
      sym__operand,
      sym_string,
    ACTIONS(143), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(250), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1257] = 37,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
    ACTIONS(137), 1,
      sym_unary_minus_operator,
    ACTIONS(141), 1,
      sym_relocation_type,
    ACTIONS(147), 1,
      aux_sym_decimal_token1,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(239), 1,
      sym__bitwise_and_expression,
    STATE(240), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(241), 1,
      sym__equality_expression,
    STATE(242), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(243), 1,
      sym__relational_expression,
    STATE(244), 1,
      sym__wrapped_relational_expression,
    STATE(245), 1,
      sym__shift_expression,
    STATE(246), 1,
      sym__wrapped_shift_expression,
    STATE(247), 1,
      sym__additive_expression,
    STATE(248), 1,
      sym__wrapped_additive_expression,
    STATE(249), 1,
      sym__multiplicative_expression,
    STATE(255), 1,
      sym__assignment_expression,
    STATE(256), 1,
      sym__logical_or_expression,
    STATE(257), 1,
      sym__wrapped_logical_or_expression,
    STATE(258), 1,
      sym__logical_and_expression,
    STATE(276), 1,
      sym__wrapped_logical_and_expression,
    STATE(277), 1,
      sym__bitwise_or_expression,
    STATE(278), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_equality_expression,
    STATE(392), 1,
      sym__wrapped_assignment_expression,
    STATE(465), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(139), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(145), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(420), 2,
      sym__operand,
      sym_string,
    ACTIONS(143), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(250), 10,
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
  [1386] = 38,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_unary_minus_operator,
    ACTIONS(141), 1,
      sym_relocation_type,
    ACTIONS(147), 1,
      aux_sym_decimal_token1,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(239), 1,
      sym__bitwise_and_expression,
    STATE(240), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(241), 1,
      sym__equality_expression,
    STATE(242), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(243), 1,
      sym__relational_expression,
    STATE(244), 1,
      sym__wrapped_relational_expression,
    STATE(245), 1,
      sym__shift_expression,
    STATE(246), 1,
      sym__wrapped_shift_expression,
    STATE(247), 1,
      sym__additive_expression,
    STATE(248), 1,
      sym__wrapped_additive_expression,
    STATE(249), 1,
      sym__multiplicative_expression,
    STATE(255), 1,
      sym__assignment_expression,
    STATE(256), 1,
      sym__logical_or_expression,
    STATE(257), 1,
      sym__wrapped_logical_or_expression,
    STATE(258), 1,
      sym__logical_and_expression,
    STATE(276), 1,
      sym__wrapped_logical_and_expression,
    STATE(277), 1,
      sym__bitwise_or_expression,
    STATE(278), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(281), 1,
      sym_symbol,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_equality_expression,
    STATE(391), 1,
      sym__wrapped_assignment_expression,
    STATE(482), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(139), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(145), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(159), 2,
      sym_register,
      sym_macro_variable,
    STATE(420), 2,
      sym__operand,
      sym_string,
    ACTIONS(143), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(250), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1516] = 38,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_unary_minus_operator,
    ACTIONS(141), 1,
      sym_relocation_type,
    ACTIONS(147), 1,
      aux_sym_decimal_token1,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(239), 1,
      sym__bitwise_and_expression,
    STATE(240), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(241), 1,
      sym__equality_expression,
    STATE(242), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(243), 1,
      sym__relational_expression,
    STATE(244), 1,
      sym__wrapped_relational_expression,
    STATE(245), 1,
      sym__shift_expression,
    STATE(246), 1,
      sym__wrapped_shift_expression,
    STATE(247), 1,
      sym__additive_expression,
    STATE(248), 1,
      sym__wrapped_additive_expression,
    STATE(249), 1,
      sym__multiplicative_expression,
    STATE(255), 1,
      sym__assignment_expression,
    STATE(256), 1,
      sym__logical_or_expression,
    STATE(257), 1,
      sym__wrapped_logical_or_expression,
    STATE(258), 1,
      sym__logical_and_expression,
    STATE(276), 1,
      sym__wrapped_logical_and_expression,
    STATE(277), 1,
      sym__bitwise_or_expression,
    STATE(278), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(279), 1,
      sym_symbol,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_equality_expression,
    STATE(392), 1,
      sym__wrapped_assignment_expression,
    STATE(499), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(139), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(145), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(161), 2,
      sym_register,
      sym_macro_variable,
    STATE(420), 2,
      sym__operand,
      sym_string,
    ACTIONS(143), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(250), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1646] = 38,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_unary_minus_operator,
    ACTIONS(141), 1,
      sym_relocation_type,
    ACTIONS(147), 1,
      aux_sym_decimal_token1,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(239), 1,
      sym__bitwise_and_expression,
    STATE(240), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(241), 1,
      sym__equality_expression,
    STATE(242), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(243), 1,
      sym__relational_expression,
    STATE(244), 1,
      sym__wrapped_relational_expression,
    STATE(245), 1,
      sym__shift_expression,
    STATE(246), 1,
      sym__wrapped_shift_expression,
    STATE(247), 1,
      sym__additive_expression,
    STATE(248), 1,
      sym__wrapped_additive_expression,
    STATE(249), 1,
      sym__multiplicative_expression,
    STATE(255), 1,
      sym__assignment_expression,
    STATE(256), 1,
      sym__logical_or_expression,
    STATE(257), 1,
      sym__wrapped_logical_or_expression,
    STATE(258), 1,
      sym__logical_and_expression,
    STATE(276), 1,
      sym__wrapped_logical_and_expression,
    STATE(277), 1,
      sym__bitwise_or_expression,
    STATE(278), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(282), 1,
      sym_symbol,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_equality_expression,
    STATE(392), 1,
      sym__wrapped_assignment_expression,
    STATE(494), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(139), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(145), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(163), 2,
      sym_register,
      sym_macro_variable,
    STATE(420), 2,
      sym__operand,
      sym_string,
    ACTIONS(143), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(250), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1776] = 36,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_unary_minus_operator,
    ACTIONS(141), 1,
      sym_relocation_type,
    ACTIONS(147), 1,
      aux_sym_decimal_token1,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(239), 1,
      sym__bitwise_and_expression,
    STATE(240), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(241), 1,
      sym__equality_expression,
    STATE(242), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(243), 1,
      sym__relational_expression,
    STATE(244), 1,
      sym__wrapped_relational_expression,
    STATE(245), 1,
      sym__shift_expression,
    STATE(246), 1,
      sym__wrapped_shift_expression,
    STATE(247), 1,
      sym__additive_expression,
    STATE(248), 1,
      sym__wrapped_additive_expression,
    STATE(249), 1,
      sym__multiplicative_expression,
    STATE(255), 1,
      sym__assignment_expression,
    STATE(256), 1,
      sym__logical_or_expression,
    STATE(257), 1,
      sym__wrapped_logical_or_expression,
    STATE(258), 1,
      sym__logical_and_expression,
    STATE(276), 1,
      sym__wrapped_logical_and_expression,
    STATE(277), 1,
      sym__bitwise_or_expression,
    STATE(278), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_equality_expression,
    STATE(392), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(139), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(145), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(439), 2,
      sym__operand,
      sym_string,
    ACTIONS(143), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(250), 10,
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
  [1902] = 36,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_unary_minus_operator,
    ACTIONS(141), 1,
      sym_relocation_type,
    ACTIONS(147), 1,
      aux_sym_decimal_token1,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(239), 1,
      sym__bitwise_and_expression,
    STATE(240), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(241), 1,
      sym__equality_expression,
    STATE(242), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(243), 1,
      sym__relational_expression,
    STATE(244), 1,
      sym__wrapped_relational_expression,
    STATE(245), 1,
      sym__shift_expression,
    STATE(246), 1,
      sym__wrapped_shift_expression,
    STATE(247), 1,
      sym__additive_expression,
    STATE(248), 1,
      sym__wrapped_additive_expression,
    STATE(249), 1,
      sym__multiplicative_expression,
    STATE(255), 1,
      sym__assignment_expression,
    STATE(256), 1,
      sym__logical_or_expression,
    STATE(257), 1,
      sym__wrapped_logical_or_expression,
    STATE(258), 1,
      sym__logical_and_expression,
    STATE(276), 1,
      sym__wrapped_logical_and_expression,
    STATE(277), 1,
      sym__bitwise_or_expression,
    STATE(278), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_equality_expression,
    STATE(392), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(139), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(145), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(439), 2,
      sym__operand,
      sym_string,
    ACTIONS(143), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(250), 10,
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
  [2028] = 38,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_unary_minus_operator,
    ACTIONS(141), 1,
      sym_relocation_type,
    ACTIONS(147), 1,
      aux_sym_decimal_token1,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(239), 1,
      sym__bitwise_and_expression,
    STATE(240), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(241), 1,
      sym__equality_expression,
    STATE(242), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(243), 1,
      sym__relational_expression,
    STATE(244), 1,
      sym__wrapped_relational_expression,
    STATE(245), 1,
      sym__shift_expression,
    STATE(246), 1,
      sym__wrapped_shift_expression,
    STATE(247), 1,
      sym__additive_expression,
    STATE(248), 1,
      sym__wrapped_additive_expression,
    STATE(249), 1,
      sym__multiplicative_expression,
    STATE(255), 1,
      sym__assignment_expression,
    STATE(256), 1,
      sym__logical_or_expression,
    STATE(257), 1,
      sym__wrapped_logical_or_expression,
    STATE(258), 1,
      sym__logical_and_expression,
    STATE(276), 1,
      sym__wrapped_logical_and_expression,
    STATE(277), 1,
      sym__bitwise_or_expression,
    STATE(278), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(283), 1,
      sym_symbol,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_equality_expression,
    STATE(387), 1,
      sym__wrapped_assignment_expression,
    STATE(485), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(139), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(145), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(165), 2,
      sym_register,
      sym_macro_variable,
    STATE(420), 2,
      sym__operand,
      sym_string,
    ACTIONS(143), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(250), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2158] = 38,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_unary_minus_operator,
    ACTIONS(141), 1,
      sym_relocation_type,
    ACTIONS(147), 1,
      aux_sym_decimal_token1,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(239), 1,
      sym__bitwise_and_expression,
    STATE(240), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(241), 1,
      sym__equality_expression,
    STATE(242), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(243), 1,
      sym__relational_expression,
    STATE(244), 1,
      sym__wrapped_relational_expression,
    STATE(245), 1,
      sym__shift_expression,
    STATE(246), 1,
      sym__wrapped_shift_expression,
    STATE(247), 1,
      sym__additive_expression,
    STATE(248), 1,
      sym__wrapped_additive_expression,
    STATE(249), 1,
      sym__multiplicative_expression,
    STATE(255), 1,
      sym__assignment_expression,
    STATE(256), 1,
      sym__logical_or_expression,
    STATE(257), 1,
      sym__wrapped_logical_or_expression,
    STATE(258), 1,
      sym__logical_and_expression,
    STATE(276), 1,
      sym__wrapped_logical_and_expression,
    STATE(277), 1,
      sym__bitwise_or_expression,
    STATE(278), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(284), 1,
      sym_symbol,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_equality_expression,
    STATE(392), 1,
      sym__wrapped_assignment_expression,
    STATE(503), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(139), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(145), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(167), 2,
      sym_register,
      sym_macro_variable,
    STATE(420), 2,
      sym__operand,
      sym_string,
    ACTIONS(143), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(250), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2288] = 38,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_unary_minus_operator,
    ACTIONS(141), 1,
      sym_relocation_type,
    ACTIONS(147), 1,
      aux_sym_decimal_token1,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(238), 1,
      sym_symbol,
    STATE(239), 1,
      sym__bitwise_and_expression,
    STATE(240), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(241), 1,
      sym__equality_expression,
    STATE(242), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(243), 1,
      sym__relational_expression,
    STATE(244), 1,
      sym__wrapped_relational_expression,
    STATE(245), 1,
      sym__shift_expression,
    STATE(246), 1,
      sym__wrapped_shift_expression,
    STATE(247), 1,
      sym__additive_expression,
    STATE(248), 1,
      sym__wrapped_additive_expression,
    STATE(249), 1,
      sym__multiplicative_expression,
    STATE(255), 1,
      sym__assignment_expression,
    STATE(256), 1,
      sym__logical_or_expression,
    STATE(257), 1,
      sym__wrapped_logical_or_expression,
    STATE(258), 1,
      sym__logical_and_expression,
    STATE(276), 1,
      sym__wrapped_logical_and_expression,
    STATE(277), 1,
      sym__bitwise_or_expression,
    STATE(278), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_equality_expression,
    STATE(389), 1,
      sym__wrapped_assignment_expression,
    STATE(496), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(139), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(145), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(169), 2,
      sym_register,
      sym_macro_variable,
    STATE(420), 2,
      sym__operand,
      sym_string,
    ACTIONS(143), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(250), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2418] = 38,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_unary_minus_operator,
    ACTIONS(141), 1,
      sym_relocation_type,
    ACTIONS(147), 1,
      aux_sym_decimal_token1,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(239), 1,
      sym__bitwise_and_expression,
    STATE(240), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(241), 1,
      sym__equality_expression,
    STATE(242), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(243), 1,
      sym__relational_expression,
    STATE(244), 1,
      sym__wrapped_relational_expression,
    STATE(245), 1,
      sym__shift_expression,
    STATE(246), 1,
      sym__wrapped_shift_expression,
    STATE(247), 1,
      sym__additive_expression,
    STATE(248), 1,
      sym__wrapped_additive_expression,
    STATE(249), 1,
      sym__multiplicative_expression,
    STATE(255), 1,
      sym__assignment_expression,
    STATE(256), 1,
      sym__logical_or_expression,
    STATE(257), 1,
      sym__wrapped_logical_or_expression,
    STATE(258), 1,
      sym__logical_and_expression,
    STATE(276), 1,
      sym__wrapped_logical_and_expression,
    STATE(277), 1,
      sym__bitwise_or_expression,
    STATE(278), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(287), 1,
      sym_symbol,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_equality_expression,
    STATE(390), 1,
      sym__wrapped_assignment_expression,
    STATE(464), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(139), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(145), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(171), 2,
      sym_register,
      sym_macro_variable,
    STATE(420), 2,
      sym__operand,
      sym_string,
    ACTIONS(143), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(250), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2548] = 38,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_unary_minus_operator,
    ACTIONS(141), 1,
      sym_relocation_type,
    ACTIONS(147), 1,
      aux_sym_decimal_token1,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(239), 1,
      sym__bitwise_and_expression,
    STATE(240), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(241), 1,
      sym__equality_expression,
    STATE(242), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(243), 1,
      sym__relational_expression,
    STATE(244), 1,
      sym__wrapped_relational_expression,
    STATE(245), 1,
      sym__shift_expression,
    STATE(246), 1,
      sym__wrapped_shift_expression,
    STATE(247), 1,
      sym__additive_expression,
    STATE(248), 1,
      sym__wrapped_additive_expression,
    STATE(249), 1,
      sym__multiplicative_expression,
    STATE(255), 1,
      sym__assignment_expression,
    STATE(256), 1,
      sym__logical_or_expression,
    STATE(257), 1,
      sym__wrapped_logical_or_expression,
    STATE(258), 1,
      sym__logical_and_expression,
    STATE(262), 1,
      sym_symbol,
    STATE(276), 1,
      sym__wrapped_logical_and_expression,
    STATE(277), 1,
      sym__bitwise_or_expression,
    STATE(278), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_equality_expression,
    STATE(388), 1,
      sym__wrapped_assignment_expression,
    STATE(472), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(139), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(145), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(153), 2,
      sym_register,
      sym_macro_variable,
    STATE(420), 2,
      sym__operand,
      sym_string,
    ACTIONS(143), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(250), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2678] = 38,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_unary_minus_operator,
    ACTIONS(141), 1,
      sym_relocation_type,
    ACTIONS(147), 1,
      aux_sym_decimal_token1,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(239), 1,
      sym__bitwise_and_expression,
    STATE(240), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(241), 1,
      sym__equality_expression,
    STATE(242), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(243), 1,
      sym__relational_expression,
    STATE(244), 1,
      sym__wrapped_relational_expression,
    STATE(245), 1,
      sym__shift_expression,
    STATE(246), 1,
      sym__wrapped_shift_expression,
    STATE(247), 1,
      sym__additive_expression,
    STATE(248), 1,
      sym__wrapped_additive_expression,
    STATE(249), 1,
      sym__multiplicative_expression,
    STATE(255), 1,
      sym__assignment_expression,
    STATE(256), 1,
      sym__logical_or_expression,
    STATE(257), 1,
      sym__wrapped_logical_or_expression,
    STATE(258), 1,
      sym__logical_and_expression,
    STATE(276), 1,
      sym__wrapped_logical_and_expression,
    STATE(277), 1,
      sym__bitwise_or_expression,
    STATE(278), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(286), 1,
      sym_symbol,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_equality_expression,
    STATE(392), 1,
      sym__wrapped_assignment_expression,
    STATE(467), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(139), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(145), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(173), 2,
      sym_register,
      sym_macro_variable,
    STATE(420), 2,
      sym__operand,
      sym_string,
    ACTIONS(143), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(250), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2808] = 38,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_unary_minus_operator,
    ACTIONS(141), 1,
      sym_relocation_type,
    ACTIONS(147), 1,
      aux_sym_decimal_token1,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(239), 1,
      sym__bitwise_and_expression,
    STATE(240), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(241), 1,
      sym__equality_expression,
    STATE(242), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(243), 1,
      sym__relational_expression,
    STATE(244), 1,
      sym__wrapped_relational_expression,
    STATE(245), 1,
      sym__shift_expression,
    STATE(246), 1,
      sym__wrapped_shift_expression,
    STATE(247), 1,
      sym__additive_expression,
    STATE(248), 1,
      sym__wrapped_additive_expression,
    STATE(249), 1,
      sym__multiplicative_expression,
    STATE(255), 1,
      sym__assignment_expression,
    STATE(256), 1,
      sym__logical_or_expression,
    STATE(257), 1,
      sym__wrapped_logical_or_expression,
    STATE(258), 1,
      sym__logical_and_expression,
    STATE(276), 1,
      sym__wrapped_logical_and_expression,
    STATE(277), 1,
      sym__bitwise_or_expression,
    STATE(278), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(288), 1,
      sym_symbol,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_equality_expression,
    STATE(392), 1,
      sym__wrapped_assignment_expression,
    STATE(475), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(139), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(145), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(175), 2,
      sym_register,
      sym_macro_variable,
    STATE(420), 2,
      sym__operand,
      sym_string,
    ACTIONS(143), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(250), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2938] = 38,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_unary_minus_operator,
    ACTIONS(141), 1,
      sym_relocation_type,
    ACTIONS(147), 1,
      aux_sym_decimal_token1,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(239), 1,
      sym__bitwise_and_expression,
    STATE(240), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(241), 1,
      sym__equality_expression,
    STATE(242), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(243), 1,
      sym__relational_expression,
    STATE(244), 1,
      sym__wrapped_relational_expression,
    STATE(245), 1,
      sym__shift_expression,
    STATE(246), 1,
      sym__wrapped_shift_expression,
    STATE(247), 1,
      sym__additive_expression,
    STATE(248), 1,
      sym__wrapped_additive_expression,
    STATE(249), 1,
      sym__multiplicative_expression,
    STATE(255), 1,
      sym__assignment_expression,
    STATE(256), 1,
      sym__logical_or_expression,
    STATE(257), 1,
      sym__wrapped_logical_or_expression,
    STATE(258), 1,
      sym__logical_and_expression,
    STATE(276), 1,
      sym__wrapped_logical_and_expression,
    STATE(277), 1,
      sym__bitwise_or_expression,
    STATE(278), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(289), 1,
      sym_symbol,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_equality_expression,
    STATE(389), 1,
      sym__wrapped_assignment_expression,
    STATE(477), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(139), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(145), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(177), 2,
      sym_register,
      sym_macro_variable,
    STATE(420), 2,
      sym__operand,
      sym_string,
    ACTIONS(143), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(250), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3068] = 38,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_unary_minus_operator,
    ACTIONS(141), 1,
      sym_relocation_type,
    ACTIONS(147), 1,
      aux_sym_decimal_token1,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(239), 1,
      sym__bitwise_and_expression,
    STATE(240), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(241), 1,
      sym__equality_expression,
    STATE(242), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(243), 1,
      sym__relational_expression,
    STATE(244), 1,
      sym__wrapped_relational_expression,
    STATE(245), 1,
      sym__shift_expression,
    STATE(246), 1,
      sym__wrapped_shift_expression,
    STATE(247), 1,
      sym__additive_expression,
    STATE(248), 1,
      sym__wrapped_additive_expression,
    STATE(249), 1,
      sym__multiplicative_expression,
    STATE(255), 1,
      sym__assignment_expression,
    STATE(256), 1,
      sym__logical_or_expression,
    STATE(257), 1,
      sym__wrapped_logical_or_expression,
    STATE(258), 1,
      sym__logical_and_expression,
    STATE(276), 1,
      sym__wrapped_logical_and_expression,
    STATE(277), 1,
      sym__bitwise_or_expression,
    STATE(278), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(290), 1,
      sym_symbol,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_equality_expression,
    STATE(392), 1,
      sym__wrapped_assignment_expression,
    STATE(479), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(139), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(145), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(179), 2,
      sym_register,
      sym_macro_variable,
    STATE(420), 2,
      sym__operand,
      sym_string,
    ACTIONS(143), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(250), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3198] = 37,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      sym_unary_minus_operator,
    ACTIONS(187), 1,
      sym_relocation_type,
    ACTIONS(193), 1,
      aux_sym_decimal_token1,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      sym_macro_variable,
    ACTIONS(201), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(203), 1,
      aux_sym_symbol_token1,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(299), 1,
      sym_address,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(313), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(315), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__additive_expression,
    STATE(331), 1,
      sym__wrapped_additive_expression,
    STATE(332), 1,
      sym__multiplicative_expression,
    STATE(442), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(185), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(191), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(476), 2,
      sym__string_operand,
      sym_string,
    ACTIONS(189), 4,
      sym_octal,
      sym_float,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(333), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
  [3325] = 35,
    ACTIONS(57), 1,
      sym_unary_minus_operator,
    ACTIONS(61), 1,
      sym_relocation_type,
    ACTIONS(67), 1,
      aux_sym_decimal_token1,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(75), 1,
      aux_sym_symbol_token1,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    STATE(196), 1,
      sym__wrapped_equality_expression,
    STATE(197), 1,
      sym__relational_expression,
    STATE(198), 1,
      sym__wrapped_relational_expression,
    STATE(199), 1,
      sym__shift_expression,
    STATE(200), 1,
      sym__wrapped_shift_expression,
    STATE(201), 1,
      sym__additive_expression,
    STATE(202), 1,
      sym__wrapped_additive_expression,
    STATE(203), 1,
      sym__multiplicative_expression,
    STATE(209), 1,
      sym__assignment_expression,
    STATE(210), 1,
      sym__logical_or_expression,
    STATE(211), 1,
      sym__wrapped_logical_or_expression,
    STATE(213), 1,
      sym__wrapped_logical_and_expression,
    STATE(214), 1,
      sym__bitwise_or_expression,
    STATE(215), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(216), 1,
      sym__bitwise_xor_expression,
    STATE(217), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(218), 1,
      sym__bitwise_and_expression,
    STATE(219), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(235), 1,
      sym__equality_expression,
    STATE(236), 1,
      sym__logical_and_expression,
    STATE(359), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(59), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(65), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(375), 2,
      sym__operand,
      sym_string,
    ACTIONS(63), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(204), 10,
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
  [3448] = 35,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_unary_minus_operator,
    ACTIONS(141), 1,
      sym_relocation_type,
    ACTIONS(147), 1,
      aux_sym_decimal_token1,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(239), 1,
      sym__bitwise_and_expression,
    STATE(240), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(241), 1,
      sym__equality_expression,
    STATE(242), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(243), 1,
      sym__relational_expression,
    STATE(244), 1,
      sym__wrapped_relational_expression,
    STATE(245), 1,
      sym__shift_expression,
    STATE(246), 1,
      sym__wrapped_shift_expression,
    STATE(247), 1,
      sym__additive_expression,
    STATE(248), 1,
      sym__wrapped_additive_expression,
    STATE(249), 1,
      sym__multiplicative_expression,
    STATE(255), 1,
      sym__assignment_expression,
    STATE(256), 1,
      sym__logical_or_expression,
    STATE(257), 1,
      sym__wrapped_logical_or_expression,
    STATE(258), 1,
      sym__logical_and_expression,
    STATE(276), 1,
      sym__wrapped_logical_and_expression,
    STATE(277), 1,
      sym__bitwise_or_expression,
    STATE(278), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_equality_expression,
    STATE(392), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(139), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(145), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(439), 2,
      sym__operand,
      sym_string,
    ACTIONS(143), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(250), 10,
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
  [3571] = 34,
    ACTIONS(87), 1,
      sym_unary_minus_operator,
    ACTIONS(89), 1,
      sym_relocation_type,
    ACTIONS(93), 1,
      aux_sym_decimal_token1,
    ACTIONS(97), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(99), 1,
      aux_sym_symbol_token1,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    STATE(111), 1,
      sym__bitwise_xor_expression,
    STATE(113), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(114), 1,
      sym__bitwise_and_expression,
    STATE(115), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(116), 1,
      sym__equality_expression,
    STATE(117), 1,
      sym__wrapped_equality_expression,
    STATE(118), 1,
      sym__relational_expression,
    STATE(119), 1,
      sym__wrapped_relational_expression,
    STATE(120), 1,
      sym__shift_expression,
    STATE(121), 1,
      sym__wrapped_shift_expression,
    STATE(122), 1,
      sym__additive_expression,
    STATE(123), 1,
      sym__wrapped_additive_expression,
    STATE(124), 1,
      sym__multiplicative_expression,
    STATE(131), 1,
      sym__assignment_expression,
    STATE(132), 1,
      sym__logical_or_expression,
    STATE(133), 1,
      sym__wrapped_logical_or_expression,
    STATE(134), 1,
      sym__logical_and_expression,
    STATE(135), 1,
      sym__wrapped_logical_and_expression,
    STATE(137), 1,
      sym__bitwise_or_expression,
    STATE(138), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(237), 1,
      sym__wrapped_assignment_expression,
    STATE(354), 1,
      sym_numeric_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(207), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(209), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(91), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(149), 10,
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
  [3690] = 33,
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
    STATE(154), 1,
      sym__assignment_expression,
    STATE(155), 1,
      sym__logical_or_expression,
    STATE(156), 1,
      sym__wrapped_logical_or_expression,
    STATE(157), 1,
      sym__logical_and_expression,
    STATE(158), 1,
      sym__wrapped_logical_and_expression,
    STATE(159), 1,
      sym__bitwise_or_expression,
    STATE(160), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(169), 1,
      sym__wrapped_assignment_expression,
    STATE(177), 1,
      sym__bitwise_xor_expression,
    STATE(178), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(180), 1,
      sym__bitwise_and_expression,
    STATE(181), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(182), 1,
      sym__equality_expression,
    STATE(183), 1,
      sym__wrapped_equality_expression,
    STATE(184), 1,
      sym__relational_expression,
    STATE(185), 1,
      sym__wrapped_relational_expression,
    STATE(186), 1,
      sym__shift_expression,
    STATE(187), 1,
      sym__wrapped_shift_expression,
    STATE(188), 1,
      sym__additive_expression,
    STATE(189), 1,
      sym__wrapped_additive_expression,
    STATE(190), 1,
      sym__multiplicative_expression,
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
    STATE(191), 10,
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
  [3806] = 33,
    ACTIONS(183), 1,
      sym_unary_minus_operator,
    ACTIONS(187), 1,
      sym_relocation_type,
    ACTIONS(193), 1,
      aux_sym_decimal_token1,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(203), 1,
      aux_sym_symbol_token1,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(313), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(315), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__additive_expression,
    STATE(331), 1,
      sym__wrapped_additive_expression,
    STATE(332), 1,
      sym__multiplicative_expression,
    STATE(436), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(185), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(191), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(189), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(333), 10,
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
  [3922] = 33,
    ACTIONS(57), 1,
      sym_unary_minus_operator,
    ACTIONS(61), 1,
      sym_relocation_type,
    ACTIONS(67), 1,
      aux_sym_decimal_token1,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(75), 1,
      aux_sym_symbol_token1,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    STATE(196), 1,
      sym__wrapped_equality_expression,
    STATE(197), 1,
      sym__relational_expression,
    STATE(198), 1,
      sym__wrapped_relational_expression,
    STATE(199), 1,
      sym__shift_expression,
    STATE(200), 1,
      sym__wrapped_shift_expression,
    STATE(201), 1,
      sym__additive_expression,
    STATE(202), 1,
      sym__wrapped_additive_expression,
    STATE(203), 1,
      sym__multiplicative_expression,
    STATE(210), 1,
      sym__logical_or_expression,
    STATE(213), 1,
      sym__wrapped_logical_and_expression,
    STATE(214), 1,
      sym__bitwise_or_expression,
    STATE(215), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(216), 1,
      sym__bitwise_xor_expression,
    STATE(217), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(218), 1,
      sym__bitwise_and_expression,
    STATE(219), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(235), 1,
      sym__equality_expression,
    STATE(236), 1,
      sym__logical_and_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(358), 1,
      sym__wrapped_logical_or_expression,
    STATE(455), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(59), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(65), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(63), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(204), 10,
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
  [4038] = 33,
    ACTIONS(57), 1,
      sym_unary_minus_operator,
    ACTIONS(61), 1,
      sym_relocation_type,
    ACTIONS(67), 1,
      aux_sym_decimal_token1,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(75), 1,
      aux_sym_symbol_token1,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    STATE(196), 1,
      sym__wrapped_equality_expression,
    STATE(197), 1,
      sym__relational_expression,
    STATE(198), 1,
      sym__wrapped_relational_expression,
    STATE(199), 1,
      sym__shift_expression,
    STATE(200), 1,
      sym__wrapped_shift_expression,
    STATE(201), 1,
      sym__additive_expression,
    STATE(202), 1,
      sym__wrapped_additive_expression,
    STATE(203), 1,
      sym__multiplicative_expression,
    STATE(214), 1,
      sym__bitwise_or_expression,
    STATE(215), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(216), 1,
      sym__bitwise_xor_expression,
    STATE(217), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(218), 1,
      sym__bitwise_and_expression,
    STATE(219), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(225), 1,
      sym__wrapped_logical_and_expression,
    STATE(235), 1,
      sym__equality_expression,
    STATE(236), 1,
      sym__logical_and_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(455), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(59), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(65), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(63), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(204), 10,
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
  [4154] = 33,
    ACTIONS(57), 1,
      sym_unary_minus_operator,
    ACTIONS(61), 1,
      sym_relocation_type,
    ACTIONS(67), 1,
      aux_sym_decimal_token1,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(75), 1,
      aux_sym_symbol_token1,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    STATE(196), 1,
      sym__wrapped_equality_expression,
    STATE(197), 1,
      sym__relational_expression,
    STATE(198), 1,
      sym__wrapped_relational_expression,
    STATE(199), 1,
      sym__shift_expression,
    STATE(200), 1,
      sym__wrapped_shift_expression,
    STATE(201), 1,
      sym__additive_expression,
    STATE(202), 1,
      sym__wrapped_additive_expression,
    STATE(203), 1,
      sym__multiplicative_expression,
    STATE(214), 1,
      sym__bitwise_or_expression,
    STATE(216), 1,
      sym__bitwise_xor_expression,
    STATE(217), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(218), 1,
      sym__bitwise_and_expression,
    STATE(219), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(226), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(235), 1,
      sym__equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(455), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(59), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(65), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(63), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(204), 10,
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
  [4270] = 33,
    ACTIONS(57), 1,
      sym_unary_minus_operator,
    ACTIONS(61), 1,
      sym_relocation_type,
    ACTIONS(67), 1,
      aux_sym_decimal_token1,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(75), 1,
      aux_sym_symbol_token1,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    STATE(196), 1,
      sym__wrapped_equality_expression,
    STATE(197), 1,
      sym__relational_expression,
    STATE(198), 1,
      sym__wrapped_relational_expression,
    STATE(199), 1,
      sym__shift_expression,
    STATE(200), 1,
      sym__wrapped_shift_expression,
    STATE(201), 1,
      sym__additive_expression,
    STATE(202), 1,
      sym__wrapped_additive_expression,
    STATE(203), 1,
      sym__multiplicative_expression,
    STATE(216), 1,
      sym__bitwise_xor_expression,
    STATE(218), 1,
      sym__bitwise_and_expression,
    STATE(219), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(227), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(235), 1,
      sym__equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(455), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(59), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(65), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(63), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(204), 10,
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
  [4386] = 33,
    ACTIONS(57), 1,
      sym_unary_minus_operator,
    ACTIONS(61), 1,
      sym_relocation_type,
    ACTIONS(67), 1,
      aux_sym_decimal_token1,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(75), 1,
      aux_sym_symbol_token1,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    STATE(196), 1,
      sym__wrapped_equality_expression,
    STATE(197), 1,
      sym__relational_expression,
    STATE(198), 1,
      sym__wrapped_relational_expression,
    STATE(199), 1,
      sym__shift_expression,
    STATE(200), 1,
      sym__wrapped_shift_expression,
    STATE(201), 1,
      sym__additive_expression,
    STATE(202), 1,
      sym__wrapped_additive_expression,
    STATE(203), 1,
      sym__multiplicative_expression,
    STATE(218), 1,
      sym__bitwise_and_expression,
    STATE(228), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(235), 1,
      sym__equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(455), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(59), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(65), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(63), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(204), 10,
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
  [4502] = 33,
    ACTIONS(57), 1,
      sym_unary_minus_operator,
    ACTIONS(61), 1,
      sym_relocation_type,
    ACTIONS(67), 1,
      aux_sym_decimal_token1,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(75), 1,
      aux_sym_symbol_token1,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    STATE(197), 1,
      sym__relational_expression,
    STATE(198), 1,
      sym__wrapped_relational_expression,
    STATE(199), 1,
      sym__shift_expression,
    STATE(200), 1,
      sym__wrapped_shift_expression,
    STATE(201), 1,
      sym__additive_expression,
    STATE(202), 1,
      sym__wrapped_additive_expression,
    STATE(203), 1,
      sym__multiplicative_expression,
    STATE(229), 1,
      sym__wrapped_equality_expression,
    STATE(235), 1,
      sym__equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(313), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(455), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(59), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(65), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(63), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(204), 10,
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
  [4618] = 33,
    ACTIONS(57), 1,
      sym_unary_minus_operator,
    ACTIONS(61), 1,
      sym_relocation_type,
    ACTIONS(67), 1,
      aux_sym_decimal_token1,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(75), 1,
      aux_sym_symbol_token1,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    STATE(197), 1,
      sym__relational_expression,
    STATE(199), 1,
      sym__shift_expression,
    STATE(200), 1,
      sym__wrapped_shift_expression,
    STATE(201), 1,
      sym__additive_expression,
    STATE(202), 1,
      sym__wrapped_additive_expression,
    STATE(203), 1,
      sym__multiplicative_expression,
    STATE(230), 1,
      sym__wrapped_relational_expression,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(313), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(315), 1,
      sym__equality_expression,
    STATE(455), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(59), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(65), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(63), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(204), 10,
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
  [4734] = 33,
    ACTIONS(57), 1,
      sym_unary_minus_operator,
    ACTIONS(61), 1,
      sym_relocation_type,
    ACTIONS(67), 1,
      aux_sym_decimal_token1,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(75), 1,
      aux_sym_symbol_token1,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    STATE(199), 1,
      sym__shift_expression,
    STATE(201), 1,
      sym__additive_expression,
    STATE(202), 1,
      sym__wrapped_additive_expression,
    STATE(203), 1,
      sym__multiplicative_expression,
    STATE(231), 1,
      sym__wrapped_shift_expression,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(313), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(315), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(455), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(59), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(65), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(63), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(204), 10,
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
  [4850] = 33,
    ACTIONS(57), 1,
      sym_unary_minus_operator,
    ACTIONS(61), 1,
      sym_relocation_type,
    ACTIONS(67), 1,
      aux_sym_decimal_token1,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(75), 1,
      aux_sym_symbol_token1,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    STATE(201), 1,
      sym__additive_expression,
    STATE(203), 1,
      sym__multiplicative_expression,
    STATE(232), 1,
      sym__wrapped_additive_expression,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(313), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(315), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(455), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(59), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(65), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(63), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(204), 10,
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
  [4966] = 33,
    ACTIONS(57), 1,
      sym_unary_minus_operator,
    ACTIONS(61), 1,
      sym_relocation_type,
    ACTIONS(67), 1,
      aux_sym_decimal_token1,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(75), 1,
      aux_sym_symbol_token1,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    STATE(203), 1,
      sym__multiplicative_expression,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(313), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(315), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__additive_expression,
    STATE(331), 1,
      sym__wrapped_additive_expression,
    STATE(455), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(59), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(217), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(215), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(233), 10,
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
  [5082] = 34,
    ACTIONS(57), 1,
      sym_unary_minus_operator,
    ACTIONS(61), 1,
      sym_relocation_type,
    ACTIONS(67), 1,
      aux_sym_decimal_token1,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(75), 1,
      aux_sym_symbol_token1,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(313), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(315), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__additive_expression,
    STATE(331), 1,
      sym__wrapped_additive_expression,
    STATE(332), 1,
      sym__multiplicative_expression,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(455), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(59), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(221), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(219), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(234), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5200] = 33,
    ACTIONS(87), 1,
      sym_unary_minus_operator,
    ACTIONS(89), 1,
      sym_relocation_type,
    ACTIONS(93), 1,
      aux_sym_decimal_token1,
    ACTIONS(97), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(99), 1,
      aux_sym_symbol_token1,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    STATE(111), 1,
      sym__bitwise_xor_expression,
    STATE(113), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(114), 1,
      sym__bitwise_and_expression,
    STATE(115), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(116), 1,
      sym__equality_expression,
    STATE(117), 1,
      sym__wrapped_equality_expression,
    STATE(118), 1,
      sym__relational_expression,
    STATE(119), 1,
      sym__wrapped_relational_expression,
    STATE(120), 1,
      sym__shift_expression,
    STATE(121), 1,
      sym__wrapped_shift_expression,
    STATE(122), 1,
      sym__additive_expression,
    STATE(123), 1,
      sym__wrapped_additive_expression,
    STATE(124), 1,
      sym__multiplicative_expression,
    STATE(131), 1,
      sym__assignment_expression,
    STATE(132), 1,
      sym__logical_or_expression,
    STATE(133), 1,
      sym__wrapped_logical_or_expression,
    STATE(134), 1,
      sym__logical_and_expression,
    STATE(135), 1,
      sym__wrapped_logical_and_expression,
    STATE(137), 1,
      sym__bitwise_or_expression,
    STATE(138), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(343), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(207), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(209), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(91), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(149), 10,
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
  [5316] = 33,
    ACTIONS(87), 1,
      sym_unary_minus_operator,
    ACTIONS(89), 1,
      sym_relocation_type,
    ACTIONS(93), 1,
      aux_sym_decimal_token1,
    ACTIONS(97), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(99), 1,
      aux_sym_symbol_token1,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    STATE(111), 1,
      sym__bitwise_xor_expression,
    STATE(113), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(114), 1,
      sym__bitwise_and_expression,
    STATE(115), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(116), 1,
      sym__equality_expression,
    STATE(117), 1,
      sym__wrapped_equality_expression,
    STATE(118), 1,
      sym__relational_expression,
    STATE(119), 1,
      sym__wrapped_relational_expression,
    STATE(120), 1,
      sym__shift_expression,
    STATE(121), 1,
      sym__wrapped_shift_expression,
    STATE(122), 1,
      sym__additive_expression,
    STATE(123), 1,
      sym__wrapped_additive_expression,
    STATE(124), 1,
      sym__multiplicative_expression,
    STATE(131), 1,
      sym__assignment_expression,
    STATE(132), 1,
      sym__logical_or_expression,
    STATE(133), 1,
      sym__wrapped_logical_or_expression,
    STATE(134), 1,
      sym__logical_and_expression,
    STATE(135), 1,
      sym__wrapped_logical_and_expression,
    STATE(137), 1,
      sym__bitwise_or_expression,
    STATE(138), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(340), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(207), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(209), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(91), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(149), 10,
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
  [5432] = 33,
    ACTIONS(87), 1,
      sym_unary_minus_operator,
    ACTIONS(89), 1,
      sym_relocation_type,
    ACTIONS(93), 1,
      aux_sym_decimal_token1,
    ACTIONS(97), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(99), 1,
      aux_sym_symbol_token1,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    STATE(111), 1,
      sym__bitwise_xor_expression,
    STATE(113), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(114), 1,
      sym__bitwise_and_expression,
    STATE(115), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(116), 1,
      sym__equality_expression,
    STATE(117), 1,
      sym__wrapped_equality_expression,
    STATE(118), 1,
      sym__relational_expression,
    STATE(119), 1,
      sym__wrapped_relational_expression,
    STATE(120), 1,
      sym__shift_expression,
    STATE(121), 1,
      sym__wrapped_shift_expression,
    STATE(122), 1,
      sym__additive_expression,
    STATE(123), 1,
      sym__wrapped_additive_expression,
    STATE(124), 1,
      sym__multiplicative_expression,
    STATE(131), 1,
      sym__assignment_expression,
    STATE(132), 1,
      sym__logical_or_expression,
    STATE(133), 1,
      sym__wrapped_logical_or_expression,
    STATE(134), 1,
      sym__logical_and_expression,
    STATE(135), 1,
      sym__wrapped_logical_and_expression,
    STATE(137), 1,
      sym__bitwise_or_expression,
    STATE(138), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(342), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(207), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(209), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(91), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(149), 10,
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
  [5548] = 33,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_unary_minus_operator,
    ACTIONS(141), 1,
      sym_relocation_type,
    ACTIONS(147), 1,
      aux_sym_decimal_token1,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(239), 1,
      sym__bitwise_and_expression,
    STATE(240), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(241), 1,
      sym__equality_expression,
    STATE(242), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(243), 1,
      sym__relational_expression,
    STATE(244), 1,
      sym__wrapped_relational_expression,
    STATE(245), 1,
      sym__shift_expression,
    STATE(246), 1,
      sym__wrapped_shift_expression,
    STATE(247), 1,
      sym__additive_expression,
    STATE(248), 1,
      sym__wrapped_additive_expression,
    STATE(249), 1,
      sym__multiplicative_expression,
    STATE(256), 1,
      sym__logical_or_expression,
    STATE(258), 1,
      sym__logical_and_expression,
    STATE(276), 1,
      sym__wrapped_logical_and_expression,
    STATE(277), 1,
      sym__bitwise_or_expression,
    STATE(278), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(378), 1,
      sym__wrapped_logical_or_expression,
    STATE(456), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(139), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(145), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(143), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(250), 10,
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
  [5664] = 33,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_unary_minus_operator,
    ACTIONS(141), 1,
      sym_relocation_type,
    ACTIONS(147), 1,
      aux_sym_decimal_token1,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(239), 1,
      sym__bitwise_and_expression,
    STATE(240), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(241), 1,
      sym__equality_expression,
    STATE(242), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(243), 1,
      sym__relational_expression,
    STATE(244), 1,
      sym__wrapped_relational_expression,
    STATE(245), 1,
      sym__shift_expression,
    STATE(246), 1,
      sym__wrapped_shift_expression,
    STATE(247), 1,
      sym__additive_expression,
    STATE(248), 1,
      sym__wrapped_additive_expression,
    STATE(249), 1,
      sym__multiplicative_expression,
    STATE(258), 1,
      sym__logical_and_expression,
    STATE(263), 1,
      sym__wrapped_logical_and_expression,
    STATE(277), 1,
      sym__bitwise_or_expression,
    STATE(278), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(456), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(139), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(145), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(143), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(250), 10,
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
  [5780] = 33,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_unary_minus_operator,
    ACTIONS(141), 1,
      sym_relocation_type,
    ACTIONS(147), 1,
      aux_sym_decimal_token1,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(239), 1,
      sym__bitwise_and_expression,
    STATE(240), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(241), 1,
      sym__equality_expression,
    STATE(242), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(243), 1,
      sym__relational_expression,
    STATE(244), 1,
      sym__wrapped_relational_expression,
    STATE(245), 1,
      sym__shift_expression,
    STATE(246), 1,
      sym__wrapped_shift_expression,
    STATE(247), 1,
      sym__additive_expression,
    STATE(248), 1,
      sym__wrapped_additive_expression,
    STATE(249), 1,
      sym__multiplicative_expression,
    STATE(264), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(277), 1,
      sym__bitwise_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(456), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(139), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(145), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(143), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(250), 10,
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
  [5896] = 33,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_unary_minus_operator,
    ACTIONS(141), 1,
      sym_relocation_type,
    ACTIONS(147), 1,
      aux_sym_decimal_token1,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(239), 1,
      sym__bitwise_and_expression,
    STATE(240), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(241), 1,
      sym__equality_expression,
    STATE(243), 1,
      sym__relational_expression,
    STATE(244), 1,
      sym__wrapped_relational_expression,
    STATE(245), 1,
      sym__shift_expression,
    STATE(246), 1,
      sym__wrapped_shift_expression,
    STATE(247), 1,
      sym__additive_expression,
    STATE(248), 1,
      sym__wrapped_additive_expression,
    STATE(249), 1,
      sym__multiplicative_expression,
    STATE(265), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(456), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(139), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(145), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(143), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(250), 10,
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
  [6012] = 33,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_unary_minus_operator,
    ACTIONS(141), 1,
      sym_relocation_type,
    ACTIONS(147), 1,
      aux_sym_decimal_token1,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(239), 1,
      sym__bitwise_and_expression,
    STATE(241), 1,
      sym__equality_expression,
    STATE(243), 1,
      sym__relational_expression,
    STATE(244), 1,
      sym__wrapped_relational_expression,
    STATE(245), 1,
      sym__shift_expression,
    STATE(246), 1,
      sym__wrapped_shift_expression,
    STATE(247), 1,
      sym__additive_expression,
    STATE(248), 1,
      sym__wrapped_additive_expression,
    STATE(249), 1,
      sym__multiplicative_expression,
    STATE(266), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(292), 1,
      sym__wrapped_equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(456), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(139), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(145), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(143), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(250), 10,
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
  [6128] = 33,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_unary_minus_operator,
    ACTIONS(141), 1,
      sym_relocation_type,
    ACTIONS(147), 1,
      aux_sym_decimal_token1,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(241), 1,
      sym__equality_expression,
    STATE(243), 1,
      sym__relational_expression,
    STATE(244), 1,
      sym__wrapped_relational_expression,
    STATE(245), 1,
      sym__shift_expression,
    STATE(246), 1,
      sym__wrapped_shift_expression,
    STATE(247), 1,
      sym__additive_expression,
    STATE(248), 1,
      sym__wrapped_additive_expression,
    STATE(249), 1,
      sym__multiplicative_expression,
    STATE(267), 1,
      sym__wrapped_equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(313), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(456), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(139), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(145), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(143), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(250), 10,
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
  [6244] = 33,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_unary_minus_operator,
    ACTIONS(141), 1,
      sym_relocation_type,
    ACTIONS(147), 1,
      aux_sym_decimal_token1,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(243), 1,
      sym__relational_expression,
    STATE(245), 1,
      sym__shift_expression,
    STATE(246), 1,
      sym__wrapped_shift_expression,
    STATE(247), 1,
      sym__additive_expression,
    STATE(248), 1,
      sym__wrapped_additive_expression,
    STATE(249), 1,
      sym__multiplicative_expression,
    STATE(268), 1,
      sym__wrapped_relational_expression,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(313), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(315), 1,
      sym__equality_expression,
    STATE(456), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(139), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(145), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(143), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(250), 10,
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
  [6360] = 33,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_unary_minus_operator,
    ACTIONS(141), 1,
      sym_relocation_type,
    ACTIONS(147), 1,
      aux_sym_decimal_token1,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(245), 1,
      sym__shift_expression,
    STATE(247), 1,
      sym__additive_expression,
    STATE(248), 1,
      sym__wrapped_additive_expression,
    STATE(249), 1,
      sym__multiplicative_expression,
    STATE(269), 1,
      sym__wrapped_shift_expression,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(313), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(315), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(456), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(139), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(145), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(143), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(250), 10,
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
  [6476] = 33,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_unary_minus_operator,
    ACTIONS(141), 1,
      sym_relocation_type,
    ACTIONS(147), 1,
      aux_sym_decimal_token1,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(247), 1,
      sym__additive_expression,
    STATE(249), 1,
      sym__multiplicative_expression,
    STATE(270), 1,
      sym__wrapped_additive_expression,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(313), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(315), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(456), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(139), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(145), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(143), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(250), 10,
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
  [6592] = 33,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_unary_minus_operator,
    ACTIONS(141), 1,
      sym_relocation_type,
    ACTIONS(147), 1,
      aux_sym_decimal_token1,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(249), 1,
      sym__multiplicative_expression,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(313), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(315), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__additive_expression,
    STATE(331), 1,
      sym__wrapped_additive_expression,
    STATE(456), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(139), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(225), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(223), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(271), 10,
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
  [6708] = 34,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_unary_minus_operator,
    ACTIONS(141), 1,
      sym_relocation_type,
    ACTIONS(147), 1,
      aux_sym_decimal_token1,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(313), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(315), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__additive_expression,
    STATE(331), 1,
      sym__wrapped_additive_expression,
    STATE(332), 1,
      sym__multiplicative_expression,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(456), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(139), 2,
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
    STATE(272), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6826] = 33,
    ACTIONS(87), 1,
      sym_unary_minus_operator,
    ACTIONS(89), 1,
      sym_relocation_type,
    ACTIONS(93), 1,
      aux_sym_decimal_token1,
    ACTIONS(97), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(99), 1,
      aux_sym_symbol_token1,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    STATE(111), 1,
      sym__bitwise_xor_expression,
    STATE(113), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(114), 1,
      sym__bitwise_and_expression,
    STATE(115), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(116), 1,
      sym__equality_expression,
    STATE(117), 1,
      sym__wrapped_equality_expression,
    STATE(118), 1,
      sym__relational_expression,
    STATE(119), 1,
      sym__wrapped_relational_expression,
    STATE(120), 1,
      sym__shift_expression,
    STATE(121), 1,
      sym__wrapped_shift_expression,
    STATE(122), 1,
      sym__additive_expression,
    STATE(123), 1,
      sym__wrapped_additive_expression,
    STATE(124), 1,
      sym__multiplicative_expression,
    STATE(132), 1,
      sym__logical_or_expression,
    STATE(134), 1,
      sym__logical_and_expression,
    STATE(135), 1,
      sym__wrapped_logical_and_expression,
    STATE(137), 1,
      sym__bitwise_or_expression,
    STATE(138), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(293), 1,
      sym__wrapped_logical_or_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(457), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(207), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(209), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(91), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(149), 10,
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
  [6942] = 33,
    ACTIONS(87), 1,
      sym_unary_minus_operator,
    ACTIONS(89), 1,
      sym_relocation_type,
    ACTIONS(93), 1,
      aux_sym_decimal_token1,
    ACTIONS(97), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(99), 1,
      aux_sym_symbol_token1,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    STATE(111), 1,
      sym__bitwise_xor_expression,
    STATE(113), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(114), 1,
      sym__bitwise_and_expression,
    STATE(115), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(116), 1,
      sym__equality_expression,
    STATE(117), 1,
      sym__wrapped_equality_expression,
    STATE(118), 1,
      sym__relational_expression,
    STATE(119), 1,
      sym__wrapped_relational_expression,
    STATE(120), 1,
      sym__shift_expression,
    STATE(121), 1,
      sym__wrapped_shift_expression,
    STATE(122), 1,
      sym__additive_expression,
    STATE(123), 1,
      sym__wrapped_additive_expression,
    STATE(124), 1,
      sym__multiplicative_expression,
    STATE(134), 1,
      sym__logical_and_expression,
    STATE(137), 1,
      sym__bitwise_or_expression,
    STATE(138), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(142), 1,
      sym__wrapped_logical_and_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(457), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(207), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(209), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(91), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(149), 10,
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
  [7058] = 33,
    ACTIONS(87), 1,
      sym_unary_minus_operator,
    ACTIONS(89), 1,
      sym_relocation_type,
    ACTIONS(93), 1,
      aux_sym_decimal_token1,
    ACTIONS(97), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(99), 1,
      aux_sym_symbol_token1,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    STATE(111), 1,
      sym__bitwise_xor_expression,
    STATE(113), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(114), 1,
      sym__bitwise_and_expression,
    STATE(115), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(116), 1,
      sym__equality_expression,
    STATE(117), 1,
      sym__wrapped_equality_expression,
    STATE(118), 1,
      sym__relational_expression,
    STATE(119), 1,
      sym__wrapped_relational_expression,
    STATE(120), 1,
      sym__shift_expression,
    STATE(121), 1,
      sym__wrapped_shift_expression,
    STATE(122), 1,
      sym__additive_expression,
    STATE(123), 1,
      sym__wrapped_additive_expression,
    STATE(124), 1,
      sym__multiplicative_expression,
    STATE(137), 1,
      sym__bitwise_or_expression,
    STATE(143), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(457), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(207), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(209), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(91), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(149), 10,
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
  [7174] = 33,
    ACTIONS(87), 1,
      sym_unary_minus_operator,
    ACTIONS(89), 1,
      sym_relocation_type,
    ACTIONS(93), 1,
      aux_sym_decimal_token1,
    ACTIONS(97), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(99), 1,
      aux_sym_symbol_token1,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    STATE(111), 1,
      sym__bitwise_xor_expression,
    STATE(114), 1,
      sym__bitwise_and_expression,
    STATE(115), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(116), 1,
      sym__equality_expression,
    STATE(117), 1,
      sym__wrapped_equality_expression,
    STATE(118), 1,
      sym__relational_expression,
    STATE(119), 1,
      sym__wrapped_relational_expression,
    STATE(120), 1,
      sym__shift_expression,
    STATE(121), 1,
      sym__wrapped_shift_expression,
    STATE(122), 1,
      sym__additive_expression,
    STATE(123), 1,
      sym__wrapped_additive_expression,
    STATE(124), 1,
      sym__multiplicative_expression,
    STATE(144), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(457), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(207), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(209), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(91), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(149), 10,
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
  [7290] = 33,
    ACTIONS(87), 1,
      sym_unary_minus_operator,
    ACTIONS(89), 1,
      sym_relocation_type,
    ACTIONS(93), 1,
      aux_sym_decimal_token1,
    ACTIONS(97), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(99), 1,
      aux_sym_symbol_token1,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    STATE(114), 1,
      sym__bitwise_and_expression,
    STATE(116), 1,
      sym__equality_expression,
    STATE(117), 1,
      sym__wrapped_equality_expression,
    STATE(118), 1,
      sym__relational_expression,
    STATE(119), 1,
      sym__wrapped_relational_expression,
    STATE(120), 1,
      sym__shift_expression,
    STATE(121), 1,
      sym__wrapped_shift_expression,
    STATE(122), 1,
      sym__additive_expression,
    STATE(123), 1,
      sym__wrapped_additive_expression,
    STATE(124), 1,
      sym__multiplicative_expression,
    STATE(145), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(457), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(207), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(209), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(91), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(149), 10,
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
  [7406] = 33,
    ACTIONS(87), 1,
      sym_unary_minus_operator,
    ACTIONS(89), 1,
      sym_relocation_type,
    ACTIONS(93), 1,
      aux_sym_decimal_token1,
    ACTIONS(97), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(99), 1,
      aux_sym_symbol_token1,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    STATE(116), 1,
      sym__equality_expression,
    STATE(118), 1,
      sym__relational_expression,
    STATE(119), 1,
      sym__wrapped_relational_expression,
    STATE(120), 1,
      sym__shift_expression,
    STATE(121), 1,
      sym__wrapped_shift_expression,
    STATE(122), 1,
      sym__additive_expression,
    STATE(123), 1,
      sym__wrapped_additive_expression,
    STATE(124), 1,
      sym__multiplicative_expression,
    STATE(146), 1,
      sym__wrapped_equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(313), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(457), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(207), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(209), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(91), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(149), 10,
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
  [7522] = 33,
    ACTIONS(87), 1,
      sym_unary_minus_operator,
    ACTIONS(89), 1,
      sym_relocation_type,
    ACTIONS(93), 1,
      aux_sym_decimal_token1,
    ACTIONS(97), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(99), 1,
      aux_sym_symbol_token1,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    STATE(118), 1,
      sym__relational_expression,
    STATE(120), 1,
      sym__shift_expression,
    STATE(121), 1,
      sym__wrapped_shift_expression,
    STATE(122), 1,
      sym__additive_expression,
    STATE(123), 1,
      sym__wrapped_additive_expression,
    STATE(124), 1,
      sym__multiplicative_expression,
    STATE(147), 1,
      sym__wrapped_relational_expression,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(313), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(315), 1,
      sym__equality_expression,
    STATE(457), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(207), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(209), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(91), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(149), 10,
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
  [7638] = 33,
    ACTIONS(87), 1,
      sym_unary_minus_operator,
    ACTIONS(89), 1,
      sym_relocation_type,
    ACTIONS(93), 1,
      aux_sym_decimal_token1,
    ACTIONS(97), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(99), 1,
      aux_sym_symbol_token1,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    STATE(120), 1,
      sym__shift_expression,
    STATE(122), 1,
      sym__additive_expression,
    STATE(123), 1,
      sym__wrapped_additive_expression,
    STATE(124), 1,
      sym__multiplicative_expression,
    STATE(148), 1,
      sym__wrapped_shift_expression,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(313), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(315), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(457), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(207), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(209), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(91), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(149), 10,
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
  [7754] = 33,
    ACTIONS(87), 1,
      sym_unary_minus_operator,
    ACTIONS(89), 1,
      sym_relocation_type,
    ACTIONS(93), 1,
      aux_sym_decimal_token1,
    ACTIONS(97), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(99), 1,
      aux_sym_symbol_token1,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    STATE(122), 1,
      sym__additive_expression,
    STATE(124), 1,
      sym__multiplicative_expression,
    STATE(125), 1,
      sym__wrapped_additive_expression,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(313), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(315), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(457), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(207), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(209), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(91), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(149), 10,
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
  [7870] = 33,
    ACTIONS(87), 1,
      sym_unary_minus_operator,
    ACTIONS(89), 1,
      sym_relocation_type,
    ACTIONS(93), 1,
      aux_sym_decimal_token1,
    ACTIONS(97), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(99), 1,
      aux_sym_symbol_token1,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    STATE(124), 1,
      sym__multiplicative_expression,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(313), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(315), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__additive_expression,
    STATE(331), 1,
      sym__wrapped_additive_expression,
    STATE(457), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(207), 2,
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
    STATE(108), 10,
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
  [7986] = 34,
    ACTIONS(87), 1,
      sym_unary_minus_operator,
    ACTIONS(89), 1,
      sym_relocation_type,
    ACTIONS(93), 1,
      aux_sym_decimal_token1,
    ACTIONS(97), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(99), 1,
      aux_sym_symbol_token1,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(313), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(315), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__additive_expression,
    STATE(331), 1,
      sym__wrapped_additive_expression,
    STATE(332), 1,
      sym__multiplicative_expression,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(457), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(207), 2,
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
    STATE(109), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8104] = 33,
    ACTIONS(57), 1,
      sym_unary_minus_operator,
    ACTIONS(61), 1,
      sym_relocation_type,
    ACTIONS(67), 1,
      aux_sym_decimal_token1,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(75), 1,
      aux_sym_symbol_token1,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    STATE(196), 1,
      sym__wrapped_equality_expression,
    STATE(197), 1,
      sym__relational_expression,
    STATE(198), 1,
      sym__wrapped_relational_expression,
    STATE(199), 1,
      sym__shift_expression,
    STATE(200), 1,
      sym__wrapped_shift_expression,
    STATE(201), 1,
      sym__additive_expression,
    STATE(202), 1,
      sym__wrapped_additive_expression,
    STATE(203), 1,
      sym__multiplicative_expression,
    STATE(206), 1,
      sym__wrapped_assignment_expression,
    STATE(209), 1,
      sym__assignment_expression,
    STATE(210), 1,
      sym__logical_or_expression,
    STATE(211), 1,
      sym__wrapped_logical_or_expression,
    STATE(213), 1,
      sym__wrapped_logical_and_expression,
    STATE(214), 1,
      sym__bitwise_or_expression,
    STATE(215), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(216), 1,
      sym__bitwise_xor_expression,
    STATE(217), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(218), 1,
      sym__bitwise_and_expression,
    STATE(219), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(235), 1,
      sym__equality_expression,
    STATE(236), 1,
      sym__logical_and_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(59), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(65), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(63), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(204), 10,
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
  [8220] = 33,
    ACTIONS(183), 1,
      sym_unary_minus_operator,
    ACTIONS(187), 1,
      sym_relocation_type,
    ACTIONS(193), 1,
      aux_sym_decimal_token1,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(203), 1,
      aux_sym_symbol_token1,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(313), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(315), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__additive_expression,
    STATE(331), 1,
      sym__wrapped_additive_expression,
    STATE(332), 1,
      sym__multiplicative_expression,
    STATE(339), 1,
      sym__wrapped_logical_and_expression,
    STATE(458), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(185), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(191), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(189), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(333), 10,
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
  [8336] = 33,
    ACTIONS(183), 1,
      sym_unary_minus_operator,
    ACTIONS(187), 1,
      sym_relocation_type,
    ACTIONS(193), 1,
      aux_sym_decimal_token1,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(203), 1,
      aux_sym_symbol_token1,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(313), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(315), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__additive_expression,
    STATE(331), 1,
      sym__wrapped_additive_expression,
    STATE(332), 1,
      sym__multiplicative_expression,
    STATE(344), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(458), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(185), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(191), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(189), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(333), 10,
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
  [8452] = 33,
    ACTIONS(183), 1,
      sym_unary_minus_operator,
    ACTIONS(187), 1,
      sym_relocation_type,
    ACTIONS(193), 1,
      aux_sym_decimal_token1,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(203), 1,
      aux_sym_symbol_token1,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(313), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(315), 1,
      sym__equality_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(323), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__additive_expression,
    STATE(331), 1,
      sym__wrapped_additive_expression,
    STATE(332), 1,
      sym__multiplicative_expression,
    STATE(458), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(185), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(191), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(189), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(333), 10,
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
  [8568] = 33,
    ACTIONS(183), 1,
      sym_unary_minus_operator,
    ACTIONS(187), 1,
      sym_relocation_type,
    ACTIONS(193), 1,
      aux_sym_decimal_token1,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(203), 1,
      aux_sym_symbol_token1,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(313), 1,
      sym__bitwise_and_expression,
    STATE(315), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__additive_expression,
    STATE(331), 1,
      sym__wrapped_additive_expression,
    STATE(332), 1,
      sym__multiplicative_expression,
    STATE(458), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(185), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(191), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(189), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(333), 10,
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
  [8684] = 33,
    ACTIONS(183), 1,
      sym_unary_minus_operator,
    ACTIONS(187), 1,
      sym_relocation_type,
    ACTIONS(193), 1,
      aux_sym_decimal_token1,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(203), 1,
      aux_sym_symbol_token1,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(313), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(315), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__additive_expression,
    STATE(331), 1,
      sym__wrapped_additive_expression,
    STATE(332), 1,
      sym__multiplicative_expression,
    STATE(341), 1,
      sym__wrapped_equality_expression,
    STATE(458), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(185), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(191), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(189), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(333), 10,
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
  [8800] = 33,
    ACTIONS(183), 1,
      sym_unary_minus_operator,
    ACTIONS(187), 1,
      sym_relocation_type,
    ACTIONS(193), 1,
      aux_sym_decimal_token1,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(203), 1,
      aux_sym_symbol_token1,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(296), 1,
      sym__wrapped_relational_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(313), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(315), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__additive_expression,
    STATE(331), 1,
      sym__wrapped_additive_expression,
    STATE(332), 1,
      sym__multiplicative_expression,
    STATE(458), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(185), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(191), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(189), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(333), 10,
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
  [8916] = 33,
    ACTIONS(183), 1,
      sym_unary_minus_operator,
    ACTIONS(187), 1,
      sym_relocation_type,
    ACTIONS(193), 1,
      aux_sym_decimal_token1,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(203), 1,
      aux_sym_symbol_token1,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(297), 1,
      sym__wrapped_shift_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(313), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(315), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(330), 1,
      sym__additive_expression,
    STATE(331), 1,
      sym__wrapped_additive_expression,
    STATE(332), 1,
      sym__multiplicative_expression,
    STATE(458), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(185), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(191), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(189), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(333), 10,
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
  [9032] = 33,
    ACTIONS(183), 1,
      sym_unary_minus_operator,
    ACTIONS(187), 1,
      sym_relocation_type,
    ACTIONS(193), 1,
      aux_sym_decimal_token1,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(203), 1,
      aux_sym_symbol_token1,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(298), 1,
      sym__wrapped_additive_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(313), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(315), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__additive_expression,
    STATE(332), 1,
      sym__multiplicative_expression,
    STATE(458), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(185), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(191), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(189), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(333), 10,
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
  [9148] = 33,
    ACTIONS(183), 1,
      sym_unary_minus_operator,
    ACTIONS(187), 1,
      sym_relocation_type,
    ACTIONS(193), 1,
      aux_sym_decimal_token1,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(203), 1,
      aux_sym_symbol_token1,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(313), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(315), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__additive_expression,
    STATE(331), 1,
      sym__wrapped_additive_expression,
    STATE(332), 1,
      sym__multiplicative_expression,
    STATE(458), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(185), 2,
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
    STATE(316), 10,
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
  [9264] = 34,
    ACTIONS(183), 1,
      sym_unary_minus_operator,
    ACTIONS(187), 1,
      sym_relocation_type,
    ACTIONS(193), 1,
      aux_sym_decimal_token1,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(203), 1,
      aux_sym_symbol_token1,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(313), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(315), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__additive_expression,
    STATE(331), 1,
      sym__wrapped_additive_expression,
    STATE(332), 1,
      sym__multiplicative_expression,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(458), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(185), 2,
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
    STATE(322), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9382] = 33,
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
    STATE(155), 1,
      sym__logical_or_expression,
    STATE(157), 1,
      sym__logical_and_expression,
    STATE(158), 1,
      sym__wrapped_logical_and_expression,
    STATE(159), 1,
      sym__bitwise_or_expression,
    STATE(160), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(177), 1,
      sym__bitwise_xor_expression,
    STATE(178), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(180), 1,
      sym__bitwise_and_expression,
    STATE(181), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(182), 1,
      sym__equality_expression,
    STATE(183), 1,
      sym__wrapped_equality_expression,
    STATE(184), 1,
      sym__relational_expression,
    STATE(185), 1,
      sym__wrapped_relational_expression,
    STATE(186), 1,
      sym__shift_expression,
    STATE(187), 1,
      sym__wrapped_shift_expression,
    STATE(188), 1,
      sym__additive_expression,
    STATE(189), 1,
      sym__wrapped_additive_expression,
    STATE(190), 1,
      sym__multiplicative_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(349), 1,
      sym__wrapped_logical_or_expression,
    STATE(443), 1,
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
    STATE(191), 10,
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
  [9498] = 33,
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
    STATE(157), 1,
      sym__logical_and_expression,
    STATE(159), 1,
      sym__bitwise_or_expression,
    STATE(160), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(164), 1,
      sym__wrapped_logical_and_expression,
    STATE(177), 1,
      sym__bitwise_xor_expression,
    STATE(178), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(180), 1,
      sym__bitwise_and_expression,
    STATE(181), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(182), 1,
      sym__equality_expression,
    STATE(183), 1,
      sym__wrapped_equality_expression,
    STATE(184), 1,
      sym__relational_expression,
    STATE(185), 1,
      sym__wrapped_relational_expression,
    STATE(186), 1,
      sym__shift_expression,
    STATE(187), 1,
      sym__wrapped_shift_expression,
    STATE(188), 1,
      sym__additive_expression,
    STATE(189), 1,
      sym__wrapped_additive_expression,
    STATE(190), 1,
      sym__multiplicative_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(443), 1,
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
    STATE(191), 10,
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
  [9614] = 33,
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
    STATE(159), 1,
      sym__bitwise_or_expression,
    STATE(165), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(177), 1,
      sym__bitwise_xor_expression,
    STATE(178), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(180), 1,
      sym__bitwise_and_expression,
    STATE(181), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(182), 1,
      sym__equality_expression,
    STATE(183), 1,
      sym__wrapped_equality_expression,
    STATE(184), 1,
      sym__relational_expression,
    STATE(185), 1,
      sym__wrapped_relational_expression,
    STATE(186), 1,
      sym__shift_expression,
    STATE(187), 1,
      sym__wrapped_shift_expression,
    STATE(188), 1,
      sym__additive_expression,
    STATE(189), 1,
      sym__wrapped_additive_expression,
    STATE(190), 1,
      sym__multiplicative_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(443), 1,
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
    STATE(191), 10,
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
  [9730] = 33,
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
    STATE(166), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(177), 1,
      sym__bitwise_xor_expression,
    STATE(180), 1,
      sym__bitwise_and_expression,
    STATE(181), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(182), 1,
      sym__equality_expression,
    STATE(183), 1,
      sym__wrapped_equality_expression,
    STATE(184), 1,
      sym__relational_expression,
    STATE(185), 1,
      sym__wrapped_relational_expression,
    STATE(186), 1,
      sym__shift_expression,
    STATE(187), 1,
      sym__wrapped_shift_expression,
    STATE(188), 1,
      sym__additive_expression,
    STATE(189), 1,
      sym__wrapped_additive_expression,
    STATE(190), 1,
      sym__multiplicative_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(443), 1,
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
    STATE(191), 10,
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
  [9846] = 33,
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
    STATE(167), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(180), 1,
      sym__bitwise_and_expression,
    STATE(182), 1,
      sym__equality_expression,
    STATE(183), 1,
      sym__wrapped_equality_expression,
    STATE(184), 1,
      sym__relational_expression,
    STATE(185), 1,
      sym__wrapped_relational_expression,
    STATE(186), 1,
      sym__shift_expression,
    STATE(187), 1,
      sym__wrapped_shift_expression,
    STATE(188), 1,
      sym__additive_expression,
    STATE(189), 1,
      sym__wrapped_additive_expression,
    STATE(190), 1,
      sym__multiplicative_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(443), 1,
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
    STATE(191), 10,
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
  [9962] = 33,
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
    STATE(168), 1,
      sym__wrapped_equality_expression,
    STATE(182), 1,
      sym__equality_expression,
    STATE(184), 1,
      sym__relational_expression,
    STATE(185), 1,
      sym__wrapped_relational_expression,
    STATE(186), 1,
      sym__shift_expression,
    STATE(187), 1,
      sym__wrapped_shift_expression,
    STATE(188), 1,
      sym__additive_expression,
    STATE(189), 1,
      sym__wrapped_additive_expression,
    STATE(190), 1,
      sym__multiplicative_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(313), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(443), 1,
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
    STATE(191), 10,
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
  [10078] = 33,
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
    STATE(150), 1,
      sym__wrapped_relational_expression,
    STATE(184), 1,
      sym__relational_expression,
    STATE(186), 1,
      sym__shift_expression,
    STATE(187), 1,
      sym__wrapped_shift_expression,
    STATE(188), 1,
      sym__additive_expression,
    STATE(189), 1,
      sym__wrapped_additive_expression,
    STATE(190), 1,
      sym__multiplicative_expression,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(313), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(315), 1,
      sym__equality_expression,
    STATE(443), 1,
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
    STATE(191), 10,
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
  [10194] = 33,
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
    STATE(186), 1,
      sym__shift_expression,
    STATE(188), 1,
      sym__additive_expression,
    STATE(189), 1,
      sym__wrapped_additive_expression,
    STATE(190), 1,
      sym__multiplicative_expression,
    STATE(192), 1,
      sym__wrapped_shift_expression,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(313), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(315), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(443), 1,
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
    STATE(191), 10,
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
  [10310] = 33,
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
    STATE(171), 1,
      sym__wrapped_additive_expression,
    STATE(188), 1,
      sym__additive_expression,
    STATE(190), 1,
      sym__multiplicative_expression,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(313), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(315), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(443), 1,
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
    STATE(191), 10,
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
  [10426] = 33,
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
    STATE(190), 1,
      sym__multiplicative_expression,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(313), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(315), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__additive_expression,
    STATE(331), 1,
      sym__wrapped_additive_expression,
    STATE(443), 1,
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
    STATE(172), 10,
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
  [10542] = 34,
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
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(313), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(315), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__additive_expression,
    STATE(331), 1,
      sym__wrapped_additive_expression,
    STATE(332), 1,
      sym__multiplicative_expression,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(443), 1,
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
    STATE(173), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10660] = 33,
    ACTIONS(183), 1,
      sym_unary_minus_operator,
    ACTIONS(187), 1,
      sym_relocation_type,
    ACTIONS(193), 1,
      aux_sym_decimal_token1,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(203), 1,
      aux_sym_symbol_token1,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(313), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(315), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__additive_expression,
    STATE(331), 1,
      sym__wrapped_additive_expression,
    STATE(332), 1,
      sym__multiplicative_expression,
    STATE(435), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(185), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(191), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(189), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(333), 10,
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
  [10776] = 33,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_unary_minus_operator,
    ACTIONS(141), 1,
      sym_relocation_type,
    ACTIONS(147), 1,
      aux_sym_decimal_token1,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(239), 1,
      sym__bitwise_and_expression,
    STATE(240), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(241), 1,
      sym__equality_expression,
    STATE(242), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(243), 1,
      sym__relational_expression,
    STATE(244), 1,
      sym__wrapped_relational_expression,
    STATE(245), 1,
      sym__shift_expression,
    STATE(246), 1,
      sym__wrapped_shift_expression,
    STATE(247), 1,
      sym__additive_expression,
    STATE(248), 1,
      sym__wrapped_additive_expression,
    STATE(249), 1,
      sym__multiplicative_expression,
    STATE(251), 1,
      sym__wrapped_assignment_expression,
    STATE(255), 1,
      sym__assignment_expression,
    STATE(256), 1,
      sym__logical_or_expression,
    STATE(257), 1,
      sym__wrapped_logical_or_expression,
    STATE(258), 1,
      sym__logical_and_expression,
    STATE(276), 1,
      sym__wrapped_logical_and_expression,
    STATE(277), 1,
      sym__bitwise_or_expression,
    STATE(278), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_equality_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(139), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(145), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(143), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(250), 10,
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
  [10892] = 33,
    ACTIONS(57), 1,
      sym_unary_minus_operator,
    ACTIONS(61), 1,
      sym_relocation_type,
    ACTIONS(67), 1,
      aux_sym_decimal_token1,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(75), 1,
      aux_sym_symbol_token1,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    STATE(193), 1,
      sym__wrapped_logical_or_expression,
    STATE(196), 1,
      sym__wrapped_equality_expression,
    STATE(197), 1,
      sym__relational_expression,
    STATE(198), 1,
      sym__wrapped_relational_expression,
    STATE(199), 1,
      sym__shift_expression,
    STATE(200), 1,
      sym__wrapped_shift_expression,
    STATE(201), 1,
      sym__additive_expression,
    STATE(202), 1,
      sym__wrapped_additive_expression,
    STATE(203), 1,
      sym__multiplicative_expression,
    STATE(210), 1,
      sym__logical_or_expression,
    STATE(213), 1,
      sym__wrapped_logical_and_expression,
    STATE(214), 1,
      sym__bitwise_or_expression,
    STATE(215), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(216), 1,
      sym__bitwise_xor_expression,
    STATE(217), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(218), 1,
      sym__bitwise_and_expression,
    STATE(219), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(235), 1,
      sym__equality_expression,
    STATE(236), 1,
      sym__logical_and_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(455), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(59), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(65), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(63), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(204), 10,
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
  [11008] = 33,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      sym_unary_minus_operator,
    ACTIONS(141), 1,
      sym_relocation_type,
    ACTIONS(147), 1,
      aux_sym_decimal_token1,
    ACTIONS(149), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(157), 1,
      aux_sym_symbol_token1,
    STATE(239), 1,
      sym__bitwise_and_expression,
    STATE(240), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(241), 1,
      sym__equality_expression,
    STATE(242), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(243), 1,
      sym__relational_expression,
    STATE(244), 1,
      sym__wrapped_relational_expression,
    STATE(245), 1,
      sym__shift_expression,
    STATE(246), 1,
      sym__wrapped_shift_expression,
    STATE(247), 1,
      sym__additive_expression,
    STATE(248), 1,
      sym__wrapped_additive_expression,
    STATE(249), 1,
      sym__multiplicative_expression,
    STATE(256), 1,
      sym__logical_or_expression,
    STATE(258), 1,
      sym__logical_and_expression,
    STATE(276), 1,
      sym__wrapped_logical_and_expression,
    STATE(277), 1,
      sym__bitwise_or_expression,
    STATE(278), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(280), 1,
      sym__wrapped_logical_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(292), 1,
      sym__wrapped_equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(456), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(139), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(145), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(143), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(250), 10,
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
  [11124] = 33,
    ACTIONS(87), 1,
      sym_unary_minus_operator,
    ACTIONS(89), 1,
      sym_relocation_type,
    ACTIONS(93), 1,
      aux_sym_decimal_token1,
    ACTIONS(97), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(99), 1,
      aux_sym_symbol_token1,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    STATE(111), 1,
      sym__bitwise_xor_expression,
    STATE(113), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(114), 1,
      sym__bitwise_and_expression,
    STATE(115), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(116), 1,
      sym__equality_expression,
    STATE(117), 1,
      sym__wrapped_equality_expression,
    STATE(118), 1,
      sym__relational_expression,
    STATE(119), 1,
      sym__wrapped_relational_expression,
    STATE(120), 1,
      sym__shift_expression,
    STATE(121), 1,
      sym__wrapped_shift_expression,
    STATE(122), 1,
      sym__additive_expression,
    STATE(123), 1,
      sym__wrapped_additive_expression,
    STATE(124), 1,
      sym__multiplicative_expression,
    STATE(132), 1,
      sym__logical_or_expression,
    STATE(134), 1,
      sym__logical_and_expression,
    STATE(135), 1,
      sym__wrapped_logical_and_expression,
    STATE(136), 1,
      sym__wrapped_logical_or_expression,
    STATE(137), 1,
      sym__bitwise_or_expression,
    STATE(138), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(457), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(207), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(209), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(91), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(149), 10,
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
  [11240] = 33,
    ACTIONS(183), 1,
      sym_unary_minus_operator,
    ACTIONS(187), 1,
      sym_relocation_type,
    ACTIONS(193), 1,
      aux_sym_decimal_token1,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(203), 1,
      aux_sym_symbol_token1,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(313), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(315), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__relational_expression,
    STATE(324), 1,
      sym__wrapped_logical_or_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__additive_expression,
    STATE(331), 1,
      sym__wrapped_additive_expression,
    STATE(332), 1,
      sym__multiplicative_expression,
    STATE(458), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(185), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(191), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(189), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(333), 10,
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
  [11356] = 33,
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
    STATE(155), 1,
      sym__logical_or_expression,
    STATE(157), 1,
      sym__logical_and_expression,
    STATE(158), 1,
      sym__wrapped_logical_and_expression,
    STATE(159), 1,
      sym__bitwise_or_expression,
    STATE(160), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(177), 1,
      sym__bitwise_xor_expression,
    STATE(178), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(179), 1,
      sym__wrapped_logical_or_expression,
    STATE(180), 1,
      sym__bitwise_and_expression,
    STATE(181), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(182), 1,
      sym__equality_expression,
    STATE(183), 1,
      sym__wrapped_equality_expression,
    STATE(184), 1,
      sym__relational_expression,
    STATE(185), 1,
      sym__wrapped_relational_expression,
    STATE(186), 1,
      sym__shift_expression,
    STATE(187), 1,
      sym__wrapped_shift_expression,
    STATE(188), 1,
      sym__additive_expression,
    STATE(189), 1,
      sym__wrapped_additive_expression,
    STATE(190), 1,
      sym__multiplicative_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(443), 1,
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
    STATE(191), 10,
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
  [11472] = 33,
    ACTIONS(87), 1,
      sym_unary_minus_operator,
    ACTIONS(89), 1,
      sym_relocation_type,
    ACTIONS(93), 1,
      aux_sym_decimal_token1,
    ACTIONS(97), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(99), 1,
      aux_sym_symbol_token1,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    STATE(111), 1,
      sym__bitwise_xor_expression,
    STATE(113), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(114), 1,
      sym__bitwise_and_expression,
    STATE(115), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(116), 1,
      sym__equality_expression,
    STATE(117), 1,
      sym__wrapped_equality_expression,
    STATE(118), 1,
      sym__relational_expression,
    STATE(119), 1,
      sym__wrapped_relational_expression,
    STATE(120), 1,
      sym__shift_expression,
    STATE(121), 1,
      sym__wrapped_shift_expression,
    STATE(122), 1,
      sym__additive_expression,
    STATE(123), 1,
      sym__wrapped_additive_expression,
    STATE(124), 1,
      sym__multiplicative_expression,
    STATE(126), 1,
      sym__wrapped_assignment_expression,
    STATE(131), 1,
      sym__assignment_expression,
    STATE(132), 1,
      sym__logical_or_expression,
    STATE(133), 1,
      sym__wrapped_logical_or_expression,
    STATE(134), 1,
      sym__logical_and_expression,
    STATE(135), 1,
      sym__wrapped_logical_and_expression,
    STATE(137), 1,
      sym__bitwise_or_expression,
    STATE(138), 1,
      sym__wrapped_bitwise_or_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(207), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(209), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(91), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(149), 10,
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
  [11588] = 33,
    ACTIONS(183), 1,
      sym_unary_minus_operator,
    ACTIONS(187), 1,
      sym_relocation_type,
    ACTIONS(193), 1,
      aux_sym_decimal_token1,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(203), 1,
      aux_sym_symbol_token1,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(313), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(315), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__additive_expression,
    STATE(331), 1,
      sym__wrapped_additive_expression,
    STATE(332), 1,
      sym__multiplicative_expression,
    STATE(334), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(185), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(191), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(189), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(333), 10,
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
  [11704] = 33,
    ACTIONS(183), 1,
      sym_unary_minus_operator,
    ACTIONS(187), 1,
      sym_relocation_type,
    ACTIONS(193), 1,
      aux_sym_decimal_token1,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(203), 1,
      aux_sym_symbol_token1,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(313), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(315), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__additive_expression,
    STATE(331), 1,
      sym__wrapped_additive_expression,
    STATE(332), 1,
      sym__multiplicative_expression,
    STATE(441), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(185), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(191), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(189), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(333), 10,
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
  [11820] = 33,
    ACTIONS(183), 1,
      sym_unary_minus_operator,
    ACTIONS(187), 1,
      sym_relocation_type,
    ACTIONS(193), 1,
      aux_sym_decimal_token1,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(203), 1,
      aux_sym_symbol_token1,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(313), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(315), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__additive_expression,
    STATE(331), 1,
      sym__wrapped_additive_expression,
    STATE(332), 1,
      sym__multiplicative_expression,
    STATE(440), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(185), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(191), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(189), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(333), 10,
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
  [11936] = 33,
    ACTIONS(183), 1,
      sym_unary_minus_operator,
    ACTIONS(187), 1,
      sym_relocation_type,
    ACTIONS(193), 1,
      aux_sym_decimal_token1,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(203), 1,
      aux_sym_symbol_token1,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(313), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(315), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__additive_expression,
    STATE(331), 1,
      sym__wrapped_additive_expression,
    STATE(332), 1,
      sym__multiplicative_expression,
    STATE(433), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(185), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(191), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(189), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(333), 10,
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
  [12052] = 33,
    ACTIONS(183), 1,
      sym_unary_minus_operator,
    ACTIONS(187), 1,
      sym_relocation_type,
    ACTIONS(193), 1,
      aux_sym_decimal_token1,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(203), 1,
      aux_sym_symbol_token1,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(303), 1,
      sym__assignment_expression,
    STATE(304), 1,
      sym__logical_or_expression,
    STATE(306), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(311), 1,
      sym__bitwise_xor_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(313), 1,
      sym__bitwise_and_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(315), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__additive_expression,
    STATE(331), 1,
      sym__wrapped_additive_expression,
    STATE(332), 1,
      sym__multiplicative_expression,
    STATE(428), 1,
      sym__wrapped_logical_or_expression,
    STATE(458), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(185), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(191), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(189), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(333), 10,
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
  [12168] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(255), 1,
      ts_builtin_sym_end,
    ACTIONS(257), 42,
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
  [12222] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(259), 1,
      ts_builtin_sym_end,
    ACTIONS(261), 42,
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
  [12276] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(263), 1,
      ts_builtin_sym_end,
    ACTIONS(265), 42,
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
  [12330] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(267), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(269), 19,
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
  [12364] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(275), 1,
      sym_multiplicative_operator,
    ACTIONS(271), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(273), 18,
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
  [12400] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(277), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(279), 19,
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
  [12434] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(281), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(283), 19,
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
  [12468] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(285), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(287), 19,
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
  [12502] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(289), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(291), 19,
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
  [12536] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(297), 1,
      sym_bitwise_xor_operator,
    ACTIONS(293), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(295), 18,
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
  [12572] = 4,
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
  [12606] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(307), 1,
      sym_bitwise_and_operator,
    ACTIONS(303), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(305), 18,
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
  [12642] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(309), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(311), 19,
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
  [12676] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(317), 1,
      sym_equality_operator,
    ACTIONS(313), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(315), 18,
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
  [12712] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(319), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(321), 19,
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
  [12746] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(327), 1,
      sym_relational_operator,
    ACTIONS(323), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(325), 18,
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
  [12782] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(329), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(331), 19,
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
  [12816] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(337), 1,
      sym_shift_operator,
    ACTIONS(333), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(335), 18,
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
  [12852] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(339), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(341), 19,
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
  [12886] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(347), 1,
      sym_additive_operator,
    ACTIONS(343), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(345), 18,
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
  [12922] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(349), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(351), 19,
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
  [12956] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(347), 1,
      sym_additive_operator,
    ACTIONS(353), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(355), 18,
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
  [12992] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(363), 1,
      sym_assignment_operator,
    ACTIONS(357), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(359), 17,
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
  [13030] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(365), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(367), 19,
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
  [13064] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(369), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(371), 19,
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
  [13098] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(373), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(375), 19,
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
  [13132] = 4,
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
  [13166] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(381), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(383), 19,
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
  [13200] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(385), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(387), 19,
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
  [13234] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(393), 1,
      sym_logical_or_operator,
    ACTIONS(389), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(391), 18,
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
  [13270] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(395), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(397), 19,
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
  [13304] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(403), 1,
      sym_logical_and_operator,
    ACTIONS(399), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(401), 18,
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
  [13340] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(405), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(407), 19,
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
  [13374] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(409), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(411), 19,
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
  [13408] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(417), 1,
      sym_bitwise_or_operator,
    ACTIONS(413), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(415), 18,
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
  [13444] = 4,
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
  [13478] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(423), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(425), 19,
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
  [13512] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(427), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(429), 19,
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
  [13546] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(403), 1,
      sym_logical_and_operator,
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
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [13582] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(417), 1,
      sym_bitwise_or_operator,
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
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [13618] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(297), 1,
      sym_bitwise_xor_operator,
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
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [13654] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(307), 1,
      sym_bitwise_and_operator,
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
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [13690] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(317), 1,
      sym_equality_operator,
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
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [13726] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(327), 1,
      sym_relational_operator,
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
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [13762] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(337), 1,
      sym_shift_operator,
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
      sym_additive_operator,
      sym_multiplicative_operator,
  [13798] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(275), 1,
      sym_multiplicative_operator,
    ACTIONS(459), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(461), 18,
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
  [13834] = 4,
    ACTIONS(463), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(453), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(451), 14,
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
  [13864] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [13892] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(375), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(373), 14,
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
  [13920] = 3,
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
  [13948] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(383), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(381), 14,
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
  [13976] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(387), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(385), 14,
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
  [14004] = 4,
    ACTIONS(465), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(391), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(389), 13,
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
  [14034] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(397), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(395), 14,
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
  [14062] = 4,
    ACTIONS(467), 1,
      sym_logical_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(401), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(399), 13,
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
  [14092] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14120] = 4,
    ACTIONS(469), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(415), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(413), 14,
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
  [14150] = 3,
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
  [14178] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(425), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(423), 14,
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
  [14206] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(429), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [14234] = 4,
    ACTIONS(467), 1,
      sym_logical_and_operator,
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
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14264] = 4,
    ACTIONS(469), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(437), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
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
  [14294] = 4,
    ACTIONS(471), 1,
      sym_bitwise_xor_operator,
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
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14324] = 4,
    ACTIONS(473), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(445), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
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
  [14354] = 4,
    ACTIONS(475), 1,
      sym_equality_operator,
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
      sym_shift_operator,
      sym_additive_operator,
  [14384] = 5,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(479), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(359), 4,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(357), 13,
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
  [14416] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(367), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(365), 14,
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
  [14444] = 4,
    ACTIONS(481), 1,
      sym_additive_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(355), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(353), 13,
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
  [14474] = 4,
    ACTIONS(483), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(273), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(271), 14,
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
  [14504] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(279), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(277), 14,
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
  [14532] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14560] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(269), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(267), 14,
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
  [14588] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(291), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(289), 14,
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
  [14616] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(287), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(285), 14,
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
  [14644] = 4,
    ACTIONS(471), 1,
      sym_bitwise_xor_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(295), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(293), 13,
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
  [14674] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14702] = 3,
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
  [14730] = 4,
    ACTIONS(473), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(305), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [14760] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(311), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(309), 14,
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
  [14788] = 4,
    ACTIONS(475), 1,
      sym_equality_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(315), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(313), 13,
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
  [14818] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(321), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(319), 14,
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
  [14846] = 4,
    ACTIONS(463), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(325), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(323), 14,
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
  [14876] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(331), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(329), 14,
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
  [14904] = 4,
    ACTIONS(485), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(335), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(333), 13,
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
  [14934] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(341), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(339), 14,
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
  [14962] = 4,
    ACTIONS(481), 1,
      sym_additive_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(345), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(343), 13,
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
  [14992] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(351), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(349), 14,
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
  [15020] = 4,
    ACTIONS(483), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(461), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
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
  [15050] = 4,
    ACTIONS(485), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(457), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(455), 13,
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
  [15080] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15107] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(269), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(267), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15134] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(291), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(289), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15161] = 4,
    ACTIONS(487), 1,
      sym_equality_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(315), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(313), 12,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15190] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(321), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(319), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15217] = 4,
    ACTIONS(489), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(325), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(323), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15246] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(331), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(329), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15273] = 4,
    ACTIONS(491), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(335), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(333), 12,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [15302] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(341), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(339), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15329] = 4,
    ACTIONS(493), 1,
      sym_additive_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(345), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(343), 12,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [15358] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(351), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(349), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15385] = 4,
    ACTIONS(495), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(461), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(459), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15414] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15441] = 5,
    ACTIONS(497), 1,
      anon_sym_LPAREN,
    ACTIONS(499), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(359), 4,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(357), 12,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15472] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(375), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(373), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15499] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(379), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(377), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15526] = 3,
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
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15553] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(387), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(385), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15580] = 4,
    ACTIONS(501), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(391), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(389), 12,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15609] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15636] = 4,
    ACTIONS(503), 1,
      sym_logical_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(401), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(399), 12,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15665] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15692] = 4,
    ACTIONS(505), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(415), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(413), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15721] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(287), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(285), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15748] = 4,
    ACTIONS(507), 1,
      sym_bitwise_xor_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(295), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(293), 12,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15777] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(301), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(299), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15804] = 4,
    ACTIONS(509), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(305), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(303), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15833] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(421), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(419), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15860] = 4,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(511), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(367), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(365), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15889] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(367), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(365), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15916] = 3,
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
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15943] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(429), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(427), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15970] = 4,
    ACTIONS(503), 1,
      sym_logical_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(433), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(431), 12,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15999] = 4,
    ACTIONS(505), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(437), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(435), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16028] = 4,
    ACTIONS(507), 1,
      sym_bitwise_xor_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(441), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(439), 12,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16057] = 4,
    ACTIONS(509), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(445), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(443), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16086] = 4,
    ACTIONS(487), 1,
      sym_equality_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(449), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(447), 12,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16115] = 4,
    ACTIONS(489), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(453), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(451), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16144] = 4,
    ACTIONS(491), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(457), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(455), 12,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [16173] = 4,
    ACTIONS(493), 1,
      sym_additive_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(355), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(353), 12,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [16202] = 4,
    ACTIONS(495), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(273), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(271), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16231] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(279), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(277), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16258] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(311), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(309), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16285] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(397), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(395), 13,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16312] = 14,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(517), 1,
      sym_line_comment,
    ACTIONS(523), 1,
      anon_sym_COMMA,
    ACTIONS(525), 1,
      sym_assignment_operator,
    ACTIONS(527), 1,
      sym__operand_separator,
    ACTIONS(529), 1,
      sym__data_separator,
    STATE(294), 1,
      aux_sym_numeric_operands_repeat1,
    STATE(348), 1,
      aux_sym_numeric_operands_repeat2,
    STATE(447), 1,
      sym__comment,
    ACTIONS(513), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(520), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(515), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
  [16359] = 4,
    ACTIONS(533), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(535), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(531), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16385] = 3,
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
  [16409] = 4,
    ACTIONS(537), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(305), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [16435] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(311), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(309), 10,
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
  [16459] = 4,
    ACTIONS(539), 1,
      sym_bitwise_xor_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(295), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(293), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16485] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(321), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(319), 10,
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
  [16509] = 4,
    ACTIONS(541), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(325), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(323), 10,
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
  [16535] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(331), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(329), 10,
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
  [16559] = 4,
    ACTIONS(543), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(335), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(333), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [16585] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(341), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(339), 10,
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
  [16609] = 4,
    ACTIONS(545), 1,
      sym_additive_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(345), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(343), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [16635] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(351), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(349), 10,
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
  [16659] = 4,
    ACTIONS(547), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(461), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
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
  [16685] = 5,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(551), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(359), 4,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(357), 9,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16713] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [16737] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(375), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(373), 10,
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
  [16761] = 3,
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
  [16785] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(383), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(381), 10,
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
  [16809] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(387), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
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
  [16833] = 4,
    ACTIONS(553), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(391), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(389), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16859] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(397), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(395), 10,
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
  [16883] = 3,
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
  [16907] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(425), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(423), 10,
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
  [16931] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(429), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [16955] = 4,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(535), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(531), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16981] = 4,
    ACTIONS(557), 1,
      sym_logical_and_operator,
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
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17007] = 4,
    ACTIONS(559), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(437), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
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
  [17033] = 4,
    ACTIONS(539), 1,
      sym_bitwise_xor_operator,
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
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17059] = 4,
    ACTIONS(537), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(445), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
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
  [17085] = 4,
    ACTIONS(561), 1,
      sym_equality_operator,
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
      sym_shift_operator,
      sym_additive_operator,
  [17111] = 4,
    ACTIONS(541), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(453), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(451), 10,
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
  [17137] = 4,
    ACTIONS(543), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(457), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(455), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [17163] = 4,
    ACTIONS(545), 1,
      sym_additive_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(355), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(353), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [17189] = 4,
    ACTIONS(547), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(273), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
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
  [17215] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(279), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(277), 10,
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
  [17239] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [17263] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(269), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(267), 10,
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
  [17287] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(291), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(289), 10,
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
  [17311] = 4,
    ACTIONS(557), 1,
      sym_logical_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(401), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(399), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17337] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [17361] = 4,
    ACTIONS(559), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(415), 4,
      sym_assignment_operator,
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
  [17387] = 4,
    ACTIONS(563), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(535), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(531), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17413] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [17437] = 4,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(535), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(531), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17463] = 4,
    ACTIONS(567), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(535), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(531), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17489] = 4,
    ACTIONS(569), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(535), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(531), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17515] = 4,
    ACTIONS(571), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(535), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(531), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17541] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(367), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(365), 10,
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
  [17565] = 4,
    ACTIONS(573), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(535), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(531), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17591] = 4,
    ACTIONS(575), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(535), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(531), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17617] = 4,
    ACTIONS(577), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(535), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(531), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17643] = 4,
    ACTIONS(579), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(535), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(531), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17669] = 4,
    ACTIONS(581), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(535), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(531), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17695] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(287), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [17719] = 4,
    ACTIONS(561), 1,
      sym_equality_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(315), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(313), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17745] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(393), 1,
      sym_logical_or_operator,
    ACTIONS(405), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(407), 9,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
  [17772] = 10,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(523), 1,
      anon_sym_COMMA,
    ACTIONS(527), 1,
      sym__operand_separator,
    ACTIONS(529), 1,
      sym__data_separator,
    STATE(345), 1,
      aux_sym_numeric_operands_repeat1,
    STATE(350), 1,
      aux_sym_numeric_operands_repeat2,
    STATE(447), 1,
      sym__comment,
    ACTIONS(583), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(585), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [17809] = 4,
    ACTIONS(587), 1,
      sym_equality_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(315), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(313), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17833] = 4,
    ACTIONS(589), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(453), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(451), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17857] = 4,
    ACTIONS(591), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(457), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(455), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [17881] = 4,
    ACTIONS(593), 1,
      sym_additive_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(355), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(353), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [17905] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(595), 1,
      aux_sym__string_directive_token1,
    ACTIONS(535), 12,
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
  [17929] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [17951] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(375), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(373), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17973] = 3,
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
  [17995] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(383), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(381), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18017] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(387), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(385), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18039] = 4,
    ACTIONS(597), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(391), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(389), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18063] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(397), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(395), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18085] = 4,
    ACTIONS(599), 1,
      sym_logical_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(401), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(399), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18109] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [18131] = 4,
    ACTIONS(601), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(415), 4,
      sym_assignment_operator,
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
  [18155] = 4,
    ACTIONS(603), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(445), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
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
  [18179] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(287), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [18201] = 4,
    ACTIONS(605), 1,
      sym_bitwise_xor_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(295), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(293), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18225] = 3,
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
  [18247] = 4,
    ACTIONS(603), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(305), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [18271] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(311), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(309), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18293] = 4,
    ACTIONS(607), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(273), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(271), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18317] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(365), 1,
      aux_sym__string_directive_token1,
    ACTIONS(367), 12,
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
  [18341] = 4,
    ACTIONS(605), 1,
      sym_bitwise_xor_operator,
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
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18365] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(367), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(365), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18387] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(269), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(267), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18409] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(291), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(289), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18431] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(279), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(277), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18453] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(321), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(319), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18475] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [18497] = 4,
    ACTIONS(589), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(325), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(323), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18521] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(331), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(329), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18543] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(419), 1,
      aux_sym__string_directive_token1,
    ACTIONS(421), 12,
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
  [18567] = 4,
    ACTIONS(591), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(335), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(333), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [18591] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [18613] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(341), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(339), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18635] = 4,
    ACTIONS(593), 1,
      sym_additive_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(345), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(343), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [18659] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(351), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(349), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18681] = 4,
    ACTIONS(607), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(461), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(459), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18705] = 5,
    ACTIONS(609), 1,
      anon_sym_LPAREN,
    ACTIONS(611), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(359), 4,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(357), 7,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18731] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(267), 1,
      aux_sym__string_directive_token1,
    ACTIONS(269), 12,
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
  [18755] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(289), 1,
      aux_sym__string_directive_token1,
    ACTIONS(291), 12,
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
  [18779] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(425), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(423), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18801] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(429), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [18823] = 4,
    ACTIONS(599), 1,
      sym_logical_and_operator,
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
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18847] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(525), 1,
      sym_assignment_operator,
    ACTIONS(613), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(615), 7,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [18875] = 4,
    ACTIONS(587), 1,
      sym_equality_operator,
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
      sym_shift_operator,
      sym_additive_operator,
  [18899] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(525), 1,
      sym_assignment_operator,
    ACTIONS(617), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(619), 7,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [18927] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
    ACTIONS(525), 1,
      sym_assignment_operator,
    ACTIONS(621), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(623), 7,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [18955] = 4,
    ACTIONS(601), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(437), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
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
  [18979] = 10,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(625), 1,
      sym_line_comment,
    ACTIONS(631), 1,
      anon_sym_COMMA,
    STATE(345), 1,
      aux_sym_numeric_operands_repeat1,
    STATE(447), 1,
      sym__comment,
    ACTIONS(621), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(628), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(634), 2,
      sym__operand_separator,
      sym__data_separator,
    ACTIONS(623), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
  [19015] = 3,
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
  [19037] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(641), 1,
      sym__data_separator,
    STATE(347), 1,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(637), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(639), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19062] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(644), 1,
      sym__data_separator,
    STATE(347), 1,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(583), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(585), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19087] = 3,
    ACTIONS(465), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(405), 9,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_assignment_operator,
  [19106] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(644), 1,
      sym__data_separator,
    STATE(347), 1,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(646), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(648), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19131] = 4,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(652), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(650), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      aux_sym__control_operand_separator_token1,
  [19151] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    STATE(352), 1,
      aux_sym__numeric_directive_repeat1,
    ACTIONS(654), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(656), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(658), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19175] = 5,
    STATE(10), 1,
      sym__control_operand_separator,
    STATE(353), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(663), 3,
      sym__operand_separator,
      sym__data_separator,
      aux_sym__control_operand_separator_token1,
    ACTIONS(661), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19197] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    STATE(356), 1,
      aux_sym__numeric_directive_repeat1,
    ACTIONS(666), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(668), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(670), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19221] = 5,
    STATE(10), 1,
      sym__control_operand_separator,
    STATE(353), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(674), 3,
      sym__operand_separator,
      sym__data_separator,
      aux_sym__control_operand_separator_token1,
    ACTIONS(672), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19243] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    STATE(352), 1,
      aux_sym__numeric_directive_repeat1,
    ACTIONS(676), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(678), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(680), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19267] = 5,
    STATE(10), 1,
      sym__control_operand_separator,
    STATE(355), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(674), 3,
      sym__operand_separator,
      sym__data_separator,
      aux_sym__control_operand_separator_token1,
    ACTIONS(682), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19289] = 3,
    ACTIONS(501), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(405), 8,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
  [19307] = 4,
    ACTIONS(497), 1,
      anon_sym_LPAREN,
    ACTIONS(686), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(684), 6,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_COMMA,
  [19326] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(694), 1,
      anon_sym_COMMA,
    STATE(361), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(688), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(690), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(692), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19351] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(703), 1,
      anon_sym_COMMA,
    STATE(361), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(696), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(698), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(700), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19376] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(694), 1,
      anon_sym_COMMA,
    STATE(360), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(692), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(706), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(708), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [19401] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(714), 1,
      aux_sym__whitespace_token1,
    ACTIONS(716), 1,
      anon_sym_LPAREN,
    STATE(424), 1,
      sym__call_expression,
    ACTIONS(710), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(712), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [19425] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(661), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      aux_sym__control_operand_separator_token1,
  [19439] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(696), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(698), 5,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [19457] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(718), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      aux_sym__control_operand_separator_token1,
  [19471] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(720), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      aux_sym__control_operand_separator_token1,
  [19485] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(722), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(724), 5,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [19503] = 4,
    STATE(369), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(728), 2,
      sym__operand_separator,
      anon_sym_COMMA,
    ACTIONS(726), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19521] = 5,
    ACTIONS(733), 1,
      anon_sym_COMMA,
    ACTIONS(735), 1,
      sym__operand_separator,
    STATE(369), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(731), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19541] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(737), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      aux_sym__control_operand_separator_token1,
  [19555] = 5,
    ACTIONS(733), 1,
      anon_sym_COMMA,
    ACTIONS(741), 1,
      sym__operand_separator,
    STATE(370), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(739), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19575] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(743), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      aux_sym__control_operand_separator_token1,
  [19589] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(743), 6,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_COMMA,
  [19602] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(745), 6,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_COMMA,
  [19615] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(751), 1,
      aux_sym__whitespace_token1,
    ACTIONS(753), 1,
      aux_sym__control_directive_token1,
    ACTIONS(747), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(749), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [19636] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(759), 1,
      aux_sym__whitespace_token1,
    ACTIONS(761), 1,
      anon_sym_LPAREN,
    ACTIONS(755), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(757), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [19657] = 3,
    ACTIONS(553), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(405), 5,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
  [19672] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(737), 6,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_COMMA,
  [19685] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(763), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(765), 4,
      anon_sym_SEMI,
      aux_sym__whitespace_token1,
      sym_line_comment,
      aux_sym__control_directive_token1,
  [19702] = 5,
    ACTIONS(767), 1,
      ts_builtin_sym_end,
    ACTIONS(771), 1,
      sym_line_comment,
    STATE(487), 1,
      sym__comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(769), 2,
      sym__line_separator,
      anon_sym_SEMI,
  [19720] = 5,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(771), 1,
      sym_line_comment,
    STATE(491), 1,
      sym__comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(769), 2,
      sym__line_separator,
      anon_sym_SEMI,
  [19738] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(775), 1,
      anon_sym_RPAREN,
    ACTIONS(777), 1,
      sym_macro_parameter,
    STATE(438), 1,
      sym_macro_parameters,
    ACTIONS(773), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19758] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(698), 1,
      anon_sym_RPAREN,
    ACTIONS(782), 1,
      anon_sym_COMMA,
    STATE(384), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(779), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19778] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(708), 1,
      anon_sym_RPAREN,
    ACTIONS(788), 1,
      anon_sym_COMMA,
    STATE(393), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(785), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19798] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(777), 1,
      sym_macro_parameter,
    ACTIONS(792), 1,
      anon_sym_RPAREN,
    STATE(431), 1,
      sym_macro_parameters,
    ACTIONS(790), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19818] = 5,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(794), 1,
      anon_sym_RPAREN,
    ACTIONS(797), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(684), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [19836] = 5,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(797), 1,
      sym_assignment_operator,
    ACTIONS(799), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(684), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [19854] = 5,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(797), 1,
      sym_assignment_operator,
    ACTIONS(802), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(684), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [19872] = 5,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(797), 1,
      sym_assignment_operator,
    ACTIONS(805), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(684), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [19890] = 5,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(797), 1,
      sym_assignment_operator,
    ACTIONS(808), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(684), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [19908] = 4,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(797), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(684), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [19924] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(690), 1,
      anon_sym_RPAREN,
    ACTIONS(788), 1,
      anon_sym_COMMA,
    STATE(384), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(811), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19944] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(814), 1,
      anon_sym_DQUOTE,
    STATE(408), 1,
      aux_sym_string_repeat1,
    ACTIONS(816), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [19961] = 4,
    ACTIONS(818), 1,
      sym_line_comment,
    STATE(450), 1,
      sym__comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(820), 2,
      sym__data_separator,
      anon_sym_COMMA,
  [19976] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(822), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19987] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(824), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19998] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(724), 4,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20011] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(826), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20022] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(828), 1,
      anon_sym_DQUOTE,
    STATE(423), 1,
      aux_sym_string_repeat1,
    ACTIONS(830), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20039] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(832), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20050] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(834), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20061] = 5,
    ACTIONS(731), 1,
      anon_sym_RPAREN,
    ACTIONS(836), 1,
      anon_sym_COMMA,
    ACTIONS(838), 1,
      sym__operand_separator,
    STATE(413), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20078] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(840), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20089] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(842), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20100] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(844), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20111] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(846), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20122] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(848), 1,
      anon_sym_DQUOTE,
    STATE(408), 1,
      aux_sym_string_repeat1,
    ACTIONS(850), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20139] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(853), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20150] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(698), 4,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20163] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(855), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20174] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(857), 1,
      anon_sym_DQUOTE,
    STATE(394), 1,
      aux_sym_string_repeat1,
    ACTIONS(859), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20191] = 4,
    ACTIONS(726), 1,
      anon_sym_RPAREN,
    STATE(413), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(861), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [20206] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(864), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20217] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(866), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20228] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(868), 1,
      anon_sym_DQUOTE,
    STATE(417), 1,
      aux_sym_string_repeat1,
    ACTIONS(870), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20245] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(872), 1,
      anon_sym_DQUOTE,
    STATE(408), 1,
      aux_sym_string_repeat1,
    ACTIONS(816), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20262] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(874), 1,
      anon_sym_DQUOTE,
    STATE(421), 1,
      aux_sym_string_repeat1,
    ACTIONS(876), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20279] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(878), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20290] = 5,
    ACTIONS(739), 1,
      anon_sym_RPAREN,
    ACTIONS(836), 1,
      anon_sym_COMMA,
    ACTIONS(880), 1,
      sym__operand_separator,
    STATE(403), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20307] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(882), 1,
      anon_sym_DQUOTE,
    STATE(408), 1,
      aux_sym_string_repeat1,
    ACTIONS(816), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20324] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(884), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20335] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(886), 1,
      anon_sym_DQUOTE,
    STATE(408), 1,
      aux_sym_string_repeat1,
    ACTIONS(816), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20352] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(888), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20363] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(890), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20374] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(853), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20385] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(511), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20396] = 3,
    ACTIONS(597), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(405), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_assignment_operator,
  [20409] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(892), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20420] = 3,
    ACTIONS(894), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(769), 2,
      sym__line_separator,
      anon_sym_SEMI,
  [20432] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(898), 1,
      anon_sym_RPAREN,
    ACTIONS(896), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [20446] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(900), 1,
      anon_sym_LPAREN,
    ACTIONS(902), 1,
      sym_macro_parameter,
    STATE(401), 1,
      sym_macro_parameters,
  [20462] = 4,
    ACTIONS(609), 1,
      anon_sym_LPAREN,
    ACTIONS(904), 1,
      anon_sym_RPAREN,
    ACTIONS(906), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20476] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(737), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20486] = 4,
    ACTIONS(609), 1,
      anon_sym_LPAREN,
    ACTIONS(906), 1,
      sym_assignment_operator,
    ACTIONS(908), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20500] = 4,
    ACTIONS(609), 1,
      anon_sym_LPAREN,
    ACTIONS(906), 1,
      sym_assignment_operator,
    ACTIONS(910), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20514] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(743), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20524] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(914), 1,
      anon_sym_RPAREN,
    ACTIONS(912), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [20538] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(745), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20548] = 4,
    ACTIONS(609), 1,
      anon_sym_LPAREN,
    ACTIONS(906), 1,
      sym_assignment_operator,
    ACTIONS(916), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20562] = 4,
    ACTIONS(609), 1,
      anon_sym_LPAREN,
    ACTIONS(906), 1,
      sym_assignment_operator,
    ACTIONS(918), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20576] = 3,
    ACTIONS(906), 1,
      sym_assignment_operator,
    ACTIONS(920), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20587] = 3,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(906), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20598] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(769), 1,
      aux_sym__statement_token1,
    ACTIONS(922), 1,
      ts_builtin_sym_end,
  [20611] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(924), 1,
      anon_sym_COMMA,
    ACTIONS(926), 1,
      sym_macro_parameter,
  [20624] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(928), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [20635] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(820), 2,
      sym__data_separator,
      anon_sym_COMMA,
  [20644] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(930), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [20655] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(932), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [20666] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(934), 2,
      sym__data_separator,
      anon_sym_COMMA,
  [20675] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(936), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [20686] = 3,
    ACTIONS(922), 1,
      ts_builtin_sym_end,
    ACTIONS(938), 1,
      sym__line_separator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20697] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(940), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [20708] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(942), 1,
      anon_sym_COMMA,
    ACTIONS(944), 1,
      sym_macro_parameter,
  [20721] = 3,
    ACTIONS(497), 1,
      anon_sym_LPAREN,
    ACTIONS(906), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20732] = 3,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(906), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20743] = 3,
    ACTIONS(906), 1,
      sym_assignment_operator,
    ACTIONS(946), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20754] = 3,
    ACTIONS(609), 1,
      anon_sym_LPAREN,
    ACTIONS(906), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20765] = 2,
    ACTIONS(948), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20773] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(769), 1,
      aux_sym__statement_token1,
  [20783] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(950), 1,
      sym_macro_parameter,
  [20793] = 2,
    ACTIONS(952), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20801] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(954), 1,
      aux_sym__whitespace_token1,
  [20811] = 2,
    ACTIONS(956), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20819] = 2,
    ACTIONS(958), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20827] = 2,
    ACTIONS(960), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20835] = 2,
    ACTIONS(962), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20843] = 2,
    ACTIONS(964), 1,
      sym_macro_name,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20851] = 2,
    ACTIONS(966), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20859] = 2,
    ACTIONS(968), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20867] = 2,
    ACTIONS(970), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20875] = 2,
    ACTIONS(972), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20883] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(974), 1,
      aux_sym__string_directive_token1,
  [20893] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(926), 1,
      sym_macro_parameter,
  [20903] = 2,
    ACTIONS(976), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20911] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(978), 1,
      aux_sym__string_directive_token1,
  [20921] = 2,
    ACTIONS(980), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20929] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(944), 1,
      sym_macro_parameter,
  [20939] = 2,
    ACTIONS(982), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20947] = 2,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20955] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(984), 1,
      aux_sym__whitespace_token1,
  [20965] = 2,
    ACTIONS(986), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20973] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(988), 1,
      sym_macro_parameter,
  [20983] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(743), 1,
      aux_sym__string_directive_token1,
  [20993] = 2,
    ACTIONS(990), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21001] = 2,
    ACTIONS(992), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21009] = 2,
    ACTIONS(994), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21017] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(737), 1,
      aux_sym__string_directive_token1,
  [21027] = 2,
    ACTIONS(996), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21035] = 2,
    ACTIONS(998), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21043] = 2,
    ACTIONS(767), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21051] = 2,
    ACTIONS(1000), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21059] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1002), 1,
      aux_sym__whitespace_token1,
  [21069] = 2,
    ACTIONS(1004), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21077] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1006), 1,
      aux_sym__whitespace_token1,
  [21087] = 2,
    ACTIONS(1008), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21095] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1010), 1,
      aux_sym__whitespace_token1,
  [21105] = 2,
    ACTIONS(1012), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21113] = 2,
    ACTIONS(1014), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21121] = 2,
    ACTIONS(1016), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21129] = 2,
    ACTIONS(1018), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21137] = 2,
    ACTIONS(1020), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21145] = 2,
    ACTIONS(1022), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21153] = 2,
    ACTIONS(1024), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21161] = 2,
    ACTIONS(1026), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21169] = 2,
    ACTIONS(938), 1,
      sym__line_separator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21177] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1028), 1,
      aux_sym__whitespace_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 140,
  [SMALL_STATE(4)] = 275,
  [SMALL_STATE(5)] = 376,
  [SMALL_STATE(6)] = 503,
  [SMALL_STATE(7)] = 601,
  [SMALL_STATE(8)] = 735,
  [SMALL_STATE(9)] = 864,
  [SMALL_STATE(10)] = 993,
  [SMALL_STATE(11)] = 1124,
  [SMALL_STATE(12)] = 1257,
  [SMALL_STATE(13)] = 1386,
  [SMALL_STATE(14)] = 1516,
  [SMALL_STATE(15)] = 1646,
  [SMALL_STATE(16)] = 1776,
  [SMALL_STATE(17)] = 1902,
  [SMALL_STATE(18)] = 2028,
  [SMALL_STATE(19)] = 2158,
  [SMALL_STATE(20)] = 2288,
  [SMALL_STATE(21)] = 2418,
  [SMALL_STATE(22)] = 2548,
  [SMALL_STATE(23)] = 2678,
  [SMALL_STATE(24)] = 2808,
  [SMALL_STATE(25)] = 2938,
  [SMALL_STATE(26)] = 3068,
  [SMALL_STATE(27)] = 3198,
  [SMALL_STATE(28)] = 3325,
  [SMALL_STATE(29)] = 3448,
  [SMALL_STATE(30)] = 3571,
  [SMALL_STATE(31)] = 3690,
  [SMALL_STATE(32)] = 3806,
  [SMALL_STATE(33)] = 3922,
  [SMALL_STATE(34)] = 4038,
  [SMALL_STATE(35)] = 4154,
  [SMALL_STATE(36)] = 4270,
  [SMALL_STATE(37)] = 4386,
  [SMALL_STATE(38)] = 4502,
  [SMALL_STATE(39)] = 4618,
  [SMALL_STATE(40)] = 4734,
  [SMALL_STATE(41)] = 4850,
  [SMALL_STATE(42)] = 4966,
  [SMALL_STATE(43)] = 5082,
  [SMALL_STATE(44)] = 5200,
  [SMALL_STATE(45)] = 5316,
  [SMALL_STATE(46)] = 5432,
  [SMALL_STATE(47)] = 5548,
  [SMALL_STATE(48)] = 5664,
  [SMALL_STATE(49)] = 5780,
  [SMALL_STATE(50)] = 5896,
  [SMALL_STATE(51)] = 6012,
  [SMALL_STATE(52)] = 6128,
  [SMALL_STATE(53)] = 6244,
  [SMALL_STATE(54)] = 6360,
  [SMALL_STATE(55)] = 6476,
  [SMALL_STATE(56)] = 6592,
  [SMALL_STATE(57)] = 6708,
  [SMALL_STATE(58)] = 6826,
  [SMALL_STATE(59)] = 6942,
  [SMALL_STATE(60)] = 7058,
  [SMALL_STATE(61)] = 7174,
  [SMALL_STATE(62)] = 7290,
  [SMALL_STATE(63)] = 7406,
  [SMALL_STATE(64)] = 7522,
  [SMALL_STATE(65)] = 7638,
  [SMALL_STATE(66)] = 7754,
  [SMALL_STATE(67)] = 7870,
  [SMALL_STATE(68)] = 7986,
  [SMALL_STATE(69)] = 8104,
  [SMALL_STATE(70)] = 8220,
  [SMALL_STATE(71)] = 8336,
  [SMALL_STATE(72)] = 8452,
  [SMALL_STATE(73)] = 8568,
  [SMALL_STATE(74)] = 8684,
  [SMALL_STATE(75)] = 8800,
  [SMALL_STATE(76)] = 8916,
  [SMALL_STATE(77)] = 9032,
  [SMALL_STATE(78)] = 9148,
  [SMALL_STATE(79)] = 9264,
  [SMALL_STATE(80)] = 9382,
  [SMALL_STATE(81)] = 9498,
  [SMALL_STATE(82)] = 9614,
  [SMALL_STATE(83)] = 9730,
  [SMALL_STATE(84)] = 9846,
  [SMALL_STATE(85)] = 9962,
  [SMALL_STATE(86)] = 10078,
  [SMALL_STATE(87)] = 10194,
  [SMALL_STATE(88)] = 10310,
  [SMALL_STATE(89)] = 10426,
  [SMALL_STATE(90)] = 10542,
  [SMALL_STATE(91)] = 10660,
  [SMALL_STATE(92)] = 10776,
  [SMALL_STATE(93)] = 10892,
  [SMALL_STATE(94)] = 11008,
  [SMALL_STATE(95)] = 11124,
  [SMALL_STATE(96)] = 11240,
  [SMALL_STATE(97)] = 11356,
  [SMALL_STATE(98)] = 11472,
  [SMALL_STATE(99)] = 11588,
  [SMALL_STATE(100)] = 11704,
  [SMALL_STATE(101)] = 11820,
  [SMALL_STATE(102)] = 11936,
  [SMALL_STATE(103)] = 12052,
  [SMALL_STATE(104)] = 12168,
  [SMALL_STATE(105)] = 12222,
  [SMALL_STATE(106)] = 12276,
  [SMALL_STATE(107)] = 12330,
  [SMALL_STATE(108)] = 12364,
  [SMALL_STATE(109)] = 12400,
  [SMALL_STATE(110)] = 12434,
  [SMALL_STATE(111)] = 12468,
  [SMALL_STATE(112)] = 12502,
  [SMALL_STATE(113)] = 12536,
  [SMALL_STATE(114)] = 12572,
  [SMALL_STATE(115)] = 12606,
  [SMALL_STATE(116)] = 12642,
  [SMALL_STATE(117)] = 12676,
  [SMALL_STATE(118)] = 12712,
  [SMALL_STATE(119)] = 12746,
  [SMALL_STATE(120)] = 12782,
  [SMALL_STATE(121)] = 12816,
  [SMALL_STATE(122)] = 12852,
  [SMALL_STATE(123)] = 12886,
  [SMALL_STATE(124)] = 12922,
  [SMALL_STATE(125)] = 12956,
  [SMALL_STATE(126)] = 12992,
  [SMALL_STATE(127)] = 13030,
  [SMALL_STATE(128)] = 13064,
  [SMALL_STATE(129)] = 13098,
  [SMALL_STATE(130)] = 13132,
  [SMALL_STATE(131)] = 13166,
  [SMALL_STATE(132)] = 13200,
  [SMALL_STATE(133)] = 13234,
  [SMALL_STATE(134)] = 13270,
  [SMALL_STATE(135)] = 13304,
  [SMALL_STATE(136)] = 13340,
  [SMALL_STATE(137)] = 13374,
  [SMALL_STATE(138)] = 13408,
  [SMALL_STATE(139)] = 13444,
  [SMALL_STATE(140)] = 13478,
  [SMALL_STATE(141)] = 13512,
  [SMALL_STATE(142)] = 13546,
  [SMALL_STATE(143)] = 13582,
  [SMALL_STATE(144)] = 13618,
  [SMALL_STATE(145)] = 13654,
  [SMALL_STATE(146)] = 13690,
  [SMALL_STATE(147)] = 13726,
  [SMALL_STATE(148)] = 13762,
  [SMALL_STATE(149)] = 13798,
  [SMALL_STATE(150)] = 13834,
  [SMALL_STATE(151)] = 13864,
  [SMALL_STATE(152)] = 13892,
  [SMALL_STATE(153)] = 13920,
  [SMALL_STATE(154)] = 13948,
  [SMALL_STATE(155)] = 13976,
  [SMALL_STATE(156)] = 14004,
  [SMALL_STATE(157)] = 14034,
  [SMALL_STATE(158)] = 14062,
  [SMALL_STATE(159)] = 14092,
  [SMALL_STATE(160)] = 14120,
  [SMALL_STATE(161)] = 14150,
  [SMALL_STATE(162)] = 14178,
  [SMALL_STATE(163)] = 14206,
  [SMALL_STATE(164)] = 14234,
  [SMALL_STATE(165)] = 14264,
  [SMALL_STATE(166)] = 14294,
  [SMALL_STATE(167)] = 14324,
  [SMALL_STATE(168)] = 14354,
  [SMALL_STATE(169)] = 14384,
  [SMALL_STATE(170)] = 14416,
  [SMALL_STATE(171)] = 14444,
  [SMALL_STATE(172)] = 14474,
  [SMALL_STATE(173)] = 14504,
  [SMALL_STATE(174)] = 14532,
  [SMALL_STATE(175)] = 14560,
  [SMALL_STATE(176)] = 14588,
  [SMALL_STATE(177)] = 14616,
  [SMALL_STATE(178)] = 14644,
  [SMALL_STATE(179)] = 14674,
  [SMALL_STATE(180)] = 14702,
  [SMALL_STATE(181)] = 14730,
  [SMALL_STATE(182)] = 14760,
  [SMALL_STATE(183)] = 14788,
  [SMALL_STATE(184)] = 14818,
  [SMALL_STATE(185)] = 14846,
  [SMALL_STATE(186)] = 14876,
  [SMALL_STATE(187)] = 14904,
  [SMALL_STATE(188)] = 14934,
  [SMALL_STATE(189)] = 14962,
  [SMALL_STATE(190)] = 14992,
  [SMALL_STATE(191)] = 15020,
  [SMALL_STATE(192)] = 15050,
  [SMALL_STATE(193)] = 15080,
  [SMALL_STATE(194)] = 15107,
  [SMALL_STATE(195)] = 15134,
  [SMALL_STATE(196)] = 15161,
  [SMALL_STATE(197)] = 15190,
  [SMALL_STATE(198)] = 15217,
  [SMALL_STATE(199)] = 15246,
  [SMALL_STATE(200)] = 15273,
  [SMALL_STATE(201)] = 15302,
  [SMALL_STATE(202)] = 15329,
  [SMALL_STATE(203)] = 15358,
  [SMALL_STATE(204)] = 15385,
  [SMALL_STATE(205)] = 15414,
  [SMALL_STATE(206)] = 15441,
  [SMALL_STATE(207)] = 15472,
  [SMALL_STATE(208)] = 15499,
  [SMALL_STATE(209)] = 15526,
  [SMALL_STATE(210)] = 15553,
  [SMALL_STATE(211)] = 15580,
  [SMALL_STATE(212)] = 15609,
  [SMALL_STATE(213)] = 15636,
  [SMALL_STATE(214)] = 15665,
  [SMALL_STATE(215)] = 15692,
  [SMALL_STATE(216)] = 15721,
  [SMALL_STATE(217)] = 15748,
  [SMALL_STATE(218)] = 15777,
  [SMALL_STATE(219)] = 15804,
  [SMALL_STATE(220)] = 15833,
  [SMALL_STATE(221)] = 15860,
  [SMALL_STATE(222)] = 15889,
  [SMALL_STATE(223)] = 15916,
  [SMALL_STATE(224)] = 15943,
  [SMALL_STATE(225)] = 15970,
  [SMALL_STATE(226)] = 15999,
  [SMALL_STATE(227)] = 16028,
  [SMALL_STATE(228)] = 16057,
  [SMALL_STATE(229)] = 16086,
  [SMALL_STATE(230)] = 16115,
  [SMALL_STATE(231)] = 16144,
  [SMALL_STATE(232)] = 16173,
  [SMALL_STATE(233)] = 16202,
  [SMALL_STATE(234)] = 16231,
  [SMALL_STATE(235)] = 16258,
  [SMALL_STATE(236)] = 16285,
  [SMALL_STATE(237)] = 16312,
  [SMALL_STATE(238)] = 16359,
  [SMALL_STATE(239)] = 16385,
  [SMALL_STATE(240)] = 16409,
  [SMALL_STATE(241)] = 16435,
  [SMALL_STATE(242)] = 16459,
  [SMALL_STATE(243)] = 16485,
  [SMALL_STATE(244)] = 16509,
  [SMALL_STATE(245)] = 16535,
  [SMALL_STATE(246)] = 16559,
  [SMALL_STATE(247)] = 16585,
  [SMALL_STATE(248)] = 16609,
  [SMALL_STATE(249)] = 16635,
  [SMALL_STATE(250)] = 16659,
  [SMALL_STATE(251)] = 16685,
  [SMALL_STATE(252)] = 16713,
  [SMALL_STATE(253)] = 16737,
  [SMALL_STATE(254)] = 16761,
  [SMALL_STATE(255)] = 16785,
  [SMALL_STATE(256)] = 16809,
  [SMALL_STATE(257)] = 16833,
  [SMALL_STATE(258)] = 16859,
  [SMALL_STATE(259)] = 16883,
  [SMALL_STATE(260)] = 16907,
  [SMALL_STATE(261)] = 16931,
  [SMALL_STATE(262)] = 16955,
  [SMALL_STATE(263)] = 16981,
  [SMALL_STATE(264)] = 17007,
  [SMALL_STATE(265)] = 17033,
  [SMALL_STATE(266)] = 17059,
  [SMALL_STATE(267)] = 17085,
  [SMALL_STATE(268)] = 17111,
  [SMALL_STATE(269)] = 17137,
  [SMALL_STATE(270)] = 17163,
  [SMALL_STATE(271)] = 17189,
  [SMALL_STATE(272)] = 17215,
  [SMALL_STATE(273)] = 17239,
  [SMALL_STATE(274)] = 17263,
  [SMALL_STATE(275)] = 17287,
  [SMALL_STATE(276)] = 17311,
  [SMALL_STATE(277)] = 17337,
  [SMALL_STATE(278)] = 17361,
  [SMALL_STATE(279)] = 17387,
  [SMALL_STATE(280)] = 17413,
  [SMALL_STATE(281)] = 17437,
  [SMALL_STATE(282)] = 17463,
  [SMALL_STATE(283)] = 17489,
  [SMALL_STATE(284)] = 17515,
  [SMALL_STATE(285)] = 17541,
  [SMALL_STATE(286)] = 17565,
  [SMALL_STATE(287)] = 17591,
  [SMALL_STATE(288)] = 17617,
  [SMALL_STATE(289)] = 17643,
  [SMALL_STATE(290)] = 17669,
  [SMALL_STATE(291)] = 17695,
  [SMALL_STATE(292)] = 17719,
  [SMALL_STATE(293)] = 17745,
  [SMALL_STATE(294)] = 17772,
  [SMALL_STATE(295)] = 17809,
  [SMALL_STATE(296)] = 17833,
  [SMALL_STATE(297)] = 17857,
  [SMALL_STATE(298)] = 17881,
  [SMALL_STATE(299)] = 17905,
  [SMALL_STATE(300)] = 17929,
  [SMALL_STATE(301)] = 17951,
  [SMALL_STATE(302)] = 17973,
  [SMALL_STATE(303)] = 17995,
  [SMALL_STATE(304)] = 18017,
  [SMALL_STATE(305)] = 18039,
  [SMALL_STATE(306)] = 18063,
  [SMALL_STATE(307)] = 18085,
  [SMALL_STATE(308)] = 18109,
  [SMALL_STATE(309)] = 18131,
  [SMALL_STATE(310)] = 18155,
  [SMALL_STATE(311)] = 18179,
  [SMALL_STATE(312)] = 18201,
  [SMALL_STATE(313)] = 18225,
  [SMALL_STATE(314)] = 18247,
  [SMALL_STATE(315)] = 18271,
  [SMALL_STATE(316)] = 18293,
  [SMALL_STATE(317)] = 18317,
  [SMALL_STATE(318)] = 18341,
  [SMALL_STATE(319)] = 18365,
  [SMALL_STATE(320)] = 18387,
  [SMALL_STATE(321)] = 18409,
  [SMALL_STATE(322)] = 18431,
  [SMALL_STATE(323)] = 18453,
  [SMALL_STATE(324)] = 18475,
  [SMALL_STATE(325)] = 18497,
  [SMALL_STATE(326)] = 18521,
  [SMALL_STATE(327)] = 18543,
  [SMALL_STATE(328)] = 18567,
  [SMALL_STATE(329)] = 18591,
  [SMALL_STATE(330)] = 18613,
  [SMALL_STATE(331)] = 18635,
  [SMALL_STATE(332)] = 18659,
  [SMALL_STATE(333)] = 18681,
  [SMALL_STATE(334)] = 18705,
  [SMALL_STATE(335)] = 18731,
  [SMALL_STATE(336)] = 18755,
  [SMALL_STATE(337)] = 18779,
  [SMALL_STATE(338)] = 18801,
  [SMALL_STATE(339)] = 18823,
  [SMALL_STATE(340)] = 18847,
  [SMALL_STATE(341)] = 18875,
  [SMALL_STATE(342)] = 18899,
  [SMALL_STATE(343)] = 18927,
  [SMALL_STATE(344)] = 18955,
  [SMALL_STATE(345)] = 18979,
  [SMALL_STATE(346)] = 19015,
  [SMALL_STATE(347)] = 19037,
  [SMALL_STATE(348)] = 19062,
  [SMALL_STATE(349)] = 19087,
  [SMALL_STATE(350)] = 19106,
  [SMALL_STATE(351)] = 19131,
  [SMALL_STATE(352)] = 19151,
  [SMALL_STATE(353)] = 19175,
  [SMALL_STATE(354)] = 19197,
  [SMALL_STATE(355)] = 19221,
  [SMALL_STATE(356)] = 19243,
  [SMALL_STATE(357)] = 19267,
  [SMALL_STATE(358)] = 19289,
  [SMALL_STATE(359)] = 19307,
  [SMALL_STATE(360)] = 19326,
  [SMALL_STATE(361)] = 19351,
  [SMALL_STATE(362)] = 19376,
  [SMALL_STATE(363)] = 19401,
  [SMALL_STATE(364)] = 19425,
  [SMALL_STATE(365)] = 19439,
  [SMALL_STATE(366)] = 19457,
  [SMALL_STATE(367)] = 19471,
  [SMALL_STATE(368)] = 19485,
  [SMALL_STATE(369)] = 19503,
  [SMALL_STATE(370)] = 19521,
  [SMALL_STATE(371)] = 19541,
  [SMALL_STATE(372)] = 19555,
  [SMALL_STATE(373)] = 19575,
  [SMALL_STATE(374)] = 19589,
  [SMALL_STATE(375)] = 19602,
  [SMALL_STATE(376)] = 19615,
  [SMALL_STATE(377)] = 19636,
  [SMALL_STATE(378)] = 19657,
  [SMALL_STATE(379)] = 19672,
  [SMALL_STATE(380)] = 19685,
  [SMALL_STATE(381)] = 19702,
  [SMALL_STATE(382)] = 19720,
  [SMALL_STATE(383)] = 19738,
  [SMALL_STATE(384)] = 19758,
  [SMALL_STATE(385)] = 19778,
  [SMALL_STATE(386)] = 19798,
  [SMALL_STATE(387)] = 19818,
  [SMALL_STATE(388)] = 19836,
  [SMALL_STATE(389)] = 19854,
  [SMALL_STATE(390)] = 19872,
  [SMALL_STATE(391)] = 19890,
  [SMALL_STATE(392)] = 19908,
  [SMALL_STATE(393)] = 19924,
  [SMALL_STATE(394)] = 19944,
  [SMALL_STATE(395)] = 19961,
  [SMALL_STATE(396)] = 19976,
  [SMALL_STATE(397)] = 19987,
  [SMALL_STATE(398)] = 19998,
  [SMALL_STATE(399)] = 20011,
  [SMALL_STATE(400)] = 20022,
  [SMALL_STATE(401)] = 20039,
  [SMALL_STATE(402)] = 20050,
  [SMALL_STATE(403)] = 20061,
  [SMALL_STATE(404)] = 20078,
  [SMALL_STATE(405)] = 20089,
  [SMALL_STATE(406)] = 20100,
  [SMALL_STATE(407)] = 20111,
  [SMALL_STATE(408)] = 20122,
  [SMALL_STATE(409)] = 20139,
  [SMALL_STATE(410)] = 20150,
  [SMALL_STATE(411)] = 20163,
  [SMALL_STATE(412)] = 20174,
  [SMALL_STATE(413)] = 20191,
  [SMALL_STATE(414)] = 20206,
  [SMALL_STATE(415)] = 20217,
  [SMALL_STATE(416)] = 20228,
  [SMALL_STATE(417)] = 20245,
  [SMALL_STATE(418)] = 20262,
  [SMALL_STATE(419)] = 20279,
  [SMALL_STATE(420)] = 20290,
  [SMALL_STATE(421)] = 20307,
  [SMALL_STATE(422)] = 20324,
  [SMALL_STATE(423)] = 20335,
  [SMALL_STATE(424)] = 20352,
  [SMALL_STATE(425)] = 20363,
  [SMALL_STATE(426)] = 20374,
  [SMALL_STATE(427)] = 20385,
  [SMALL_STATE(428)] = 20396,
  [SMALL_STATE(429)] = 20409,
  [SMALL_STATE(430)] = 20420,
  [SMALL_STATE(431)] = 20432,
  [SMALL_STATE(432)] = 20446,
  [SMALL_STATE(433)] = 20462,
  [SMALL_STATE(434)] = 20476,
  [SMALL_STATE(435)] = 20486,
  [SMALL_STATE(436)] = 20500,
  [SMALL_STATE(437)] = 20514,
  [SMALL_STATE(438)] = 20524,
  [SMALL_STATE(439)] = 20538,
  [SMALL_STATE(440)] = 20548,
  [SMALL_STATE(441)] = 20562,
  [SMALL_STATE(442)] = 20576,
  [SMALL_STATE(443)] = 20587,
  [SMALL_STATE(444)] = 20598,
  [SMALL_STATE(445)] = 20611,
  [SMALL_STATE(446)] = 20624,
  [SMALL_STATE(447)] = 20635,
  [SMALL_STATE(448)] = 20644,
  [SMALL_STATE(449)] = 20655,
  [SMALL_STATE(450)] = 20666,
  [SMALL_STATE(451)] = 20675,
  [SMALL_STATE(452)] = 20686,
  [SMALL_STATE(453)] = 20697,
  [SMALL_STATE(454)] = 20708,
  [SMALL_STATE(455)] = 20721,
  [SMALL_STATE(456)] = 20732,
  [SMALL_STATE(457)] = 20743,
  [SMALL_STATE(458)] = 20754,
  [SMALL_STATE(459)] = 20765,
  [SMALL_STATE(460)] = 20773,
  [SMALL_STATE(461)] = 20783,
  [SMALL_STATE(462)] = 20793,
  [SMALL_STATE(463)] = 20801,
  [SMALL_STATE(464)] = 20811,
  [SMALL_STATE(465)] = 20819,
  [SMALL_STATE(466)] = 20827,
  [SMALL_STATE(467)] = 20835,
  [SMALL_STATE(468)] = 20843,
  [SMALL_STATE(469)] = 20851,
  [SMALL_STATE(470)] = 20859,
  [SMALL_STATE(471)] = 20867,
  [SMALL_STATE(472)] = 20875,
  [SMALL_STATE(473)] = 20883,
  [SMALL_STATE(474)] = 20893,
  [SMALL_STATE(475)] = 20903,
  [SMALL_STATE(476)] = 20911,
  [SMALL_STATE(477)] = 20921,
  [SMALL_STATE(478)] = 20929,
  [SMALL_STATE(479)] = 20939,
  [SMALL_STATE(480)] = 20947,
  [SMALL_STATE(481)] = 20955,
  [SMALL_STATE(482)] = 20965,
  [SMALL_STATE(483)] = 20973,
  [SMALL_STATE(484)] = 20983,
  [SMALL_STATE(485)] = 20993,
  [SMALL_STATE(486)] = 21001,
  [SMALL_STATE(487)] = 21009,
  [SMALL_STATE(488)] = 21017,
  [SMALL_STATE(489)] = 21027,
  [SMALL_STATE(490)] = 21035,
  [SMALL_STATE(491)] = 21043,
  [SMALL_STATE(492)] = 21051,
  [SMALL_STATE(493)] = 21059,
  [SMALL_STATE(494)] = 21069,
  [SMALL_STATE(495)] = 21077,
  [SMALL_STATE(496)] = 21087,
  [SMALL_STATE(497)] = 21095,
  [SMALL_STATE(498)] = 21105,
  [SMALL_STATE(499)] = 21113,
  [SMALL_STATE(500)] = 21121,
  [SMALL_STATE(501)] = 21129,
  [SMALL_STATE(502)] = 21137,
  [SMALL_STATE(503)] = 21145,
  [SMALL_STATE(504)] = 21153,
  [SMALL_STATE(505)] = 21161,
  [SMALL_STATE(506)] = 21169,
  [SMALL_STATE(507)] = 21177,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(444),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 2, 0, 5),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat2, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat2, 1, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(460),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(481),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(507),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(493),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(380),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(363),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(473),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2, 0, 9),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 3, 0, 14),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 2, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label, 2, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 4, 0, 25),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 4, 0, 25),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__additive_expression, 3, 0, 23),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__additive_expression, 3, 0, 23),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiplicative_expression, 3, 0, 23),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiplicative_expression, 3, 0, 23),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relocation_expression, 4, 0, 24),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relocation_expression, 4, 0, 24),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 11),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 11),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 4, 0, 26),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 4, 0, 26),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 11),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 11),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 11),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 11),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 11),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 11),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 11),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 11),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 11),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 11),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_multiplicative_expression, 1, 0, 11),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_multiplicative_expression, 1, 0, 11),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shift_expression, 3, 0, 23),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shift_expression, 3, 0, 23),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 13),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, 0, 13),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 15),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 3, 0, 15),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal, 1, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_label_reference, 1, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_label_reference, 1, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 11),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 11),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 11),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 11),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 11),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 11),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assignment_expression, 3, 0, 23),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__assignment_expression, 3, 0, 23),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 11),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 11),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 19),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 3, 0, 19),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 20),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 20),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logical_or_expression, 3, 0, 23),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__logical_or_expression, 3, 0, 23),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logical_and_expression, 3, 0, 23),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__logical_and_expression, 3, 0, 23),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitwise_or_expression, 3, 0, 23),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitwise_or_expression, 3, 0, 23),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitwise_xor_expression, 3, 0, 23),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitwise_xor_expression, 3, 0, 23),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitwise_and_expression, 3, 0, 23),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitwise_and_expression, 3, 0, 23),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__equality_expression, 3, 0, 23),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__equality_expression, 3, 0, 23),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relational_expression, 3, 0, 23),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__relational_expression, 3, 0, 23),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 3, 0, 15),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_operands, 1, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_operands, 1, 0, 0),
  [517] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_numeric_operands, 1, 0, 0), SHIFT(447),
  [520] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_numeric_operands, 1, 0, 0), SHIFT(395),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_expression, 1, 0, 0),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_expression, 1, 0, 0),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_operands, 2, 0, 0),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_operands, 2, 0, 0),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_operand, 1, 0, 0),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 3, 0, 0),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 3, 0, 0),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 4, 0, 0),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 4, 0, 0),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0),
  [625] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(447),
  [628] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(395),
  [631] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat2, 2, 0, 0),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat2, 2, 0, 0),
  [641] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat2, 2, 0, 0), SHIFT_REPEAT(347),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_operands, 3, 0, 0),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_operands, 3, 0, 0),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_operand, 1, 0, 0),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__numeric_directive_repeat1, 2, 0, 0),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__numeric_directive_repeat1, 2, 0, 0),
  [658] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__numeric_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(352),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_directive, 3, 0, 12),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__numeric_directive, 3, 0, 12),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_operands, 2, 0, 0),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_directive, 4, 0, 12),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__numeric_directive, 4, 0, 12),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_operands, 1, 0, 0),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_parameters, 2, 0, 0),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_parameters, 2, 0, 0),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0),
  [700] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(445),
  [703] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(474),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_parameters, 1, 0, 0),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_parameters, 1, 0, 0),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 1),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 1),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_type, 1, 0, 0),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_flag, 1, 0, 0),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 3, 0, 0),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 3, 0, 0),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 22),
  [728] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 22), SHIFT_REPEAT(28),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2, 0, 14),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 1, 0, 9),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 21),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 1, 0, 5),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_directive, 1, 0, 5),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 3, 0, 7),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 3, 0, 7),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_mnemonic, 1, 0, 0),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_mnemonic, 1, 0, 0),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [779] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(454),
  [782] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(478),
  [785] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_macro_parameters, 1, 0, 0), SHIFT(454),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [794] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(140),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [799] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(223),
  [802] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(337),
  [805] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(162),
  [808] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(260),
  [811] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_macro_parameters, 2, 0, 0), SHIFT(454),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 18),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_directive, 4, 0, 16),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 4, 0, 17),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 5, 0, 18),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 5, 0, 7),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 3, 0, 12),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 2, 0, 0),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 7),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 27),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [850] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(408),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 3),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 4),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [861] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 22), SHIFT_REPEAT(29),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 8, 0, 27),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 7),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [872] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [876] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 10),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [882] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 8),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 6),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 2),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 18),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [896] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [914] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment, 1, 0, 0),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [928] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [932] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [936] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [940] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [942] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [960] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 0),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_mnemonic, 1, 0, 0),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_mnemonic, 1, 0, 0),
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

static const bool ts_external_scanner_states[8][EXTERNAL_TOKEN_COUNT] = {
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
  [7] = {
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
