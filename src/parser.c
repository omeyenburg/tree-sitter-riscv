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
#define STATE_COUNT 544
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 160
#define ALIAS_COUNT 0
#define TOKEN_COUNT 91
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
  aux_sym__immediate_block_comment_token1 = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  sym_macro_mnemonic = 11,
  anon_sym_COMMA = 12,
  anon_sym_DOTbyte = 13,
  anon_sym_DOT2byte = 14,
  anon_sym_DOTshort = 15,
  anon_sym_DOThalf = 16,
  anon_sym_DOThword = 17,
  anon_sym_DOT4byte = 18,
  anon_sym_DOTword = 19,
  anon_sym_DOTint = 20,
  anon_sym_DOT8byte = 21,
  anon_sym_DOTdword = 22,
  anon_sym_DOTlong = 23,
  anon_sym_DOTquad = 24,
  anon_sym_DOTcomm = 25,
  anon_sym_DOTlcomm = 26,
  anon_sym_DOTalign = 27,
  anon_sym_DOTbalign = 28,
  anon_sym_DOTp2align = 29,
  anon_sym_DOTsleb128 = 30,
  anon_sym_DOTuleb128 = 31,
  anon_sym_DOTdtprelword = 32,
  anon_sym_DOTdtpreldword = 33,
  anon_sym_DOTskip = 34,
  anon_sym_DOTspace = 35,
  anon_sym_DOTfloat = 36,
  anon_sym_DOTdouble = 37,
  anon_sym_DOTsingle = 38,
  anon_sym_SPACE = 39,
  anon_sym_TAB = 40,
  anon_sym_DOTasciz = 41,
  anon_sym_DOTascii = 42,
  anon_sym_DOTasciiz = 43,
  anon_sym_DOTstring = 44,
  anon_sym_DOTstringz = 45,
  aux_sym_control_mnemonic_token1 = 46,
  aux_sym__control_operand_separator_token1 = 47,
  aux_sym_section_type_token1 = 48,
  aux_sym_option_flag_token1 = 49,
  sym_opcode = 50,
  sym_assignment_operator = 51,
  sym_logical_or_operator = 52,
  sym_logical_and_operator = 53,
  sym_bitwise_or_operator = 54,
  sym_bitwise_xor_operator = 55,
  sym_bitwise_and_operator = 56,
  sym_equality_operator = 57,
  sym_relational_operator = 58,
  sym_shift_operator = 59,
  sym_additive_operator = 60,
  sym_multiplicative_operator = 61,
  sym_unary_minus_operator = 62,
  sym_bitwise_not_operator = 63,
  sym_logical_not_operator = 64,
  sym_relocation_type = 65,
  sym_octal = 66,
  sym_binary = 67,
  aux_sym_decimal_token1 = 68,
  sym_hexadecimal = 69,
  sym_float = 70,
  anon_sym_SQUOTE = 71,
  aux_sym_char_token1 = 72,
  anon_sym_DQUOTE = 73,
  aux_sym_string_token1 = 74,
  sym__escape_sequence = 75,
  sym_register = 76,
  sym_macro_variable = 77,
  sym_macro_parameter = 78,
  sym_macro_name = 79,
  sym_local_label = 80,
  aux_sym_local_label_reference_token1 = 81,
  sym_global_label = 82,
  aux_sym_symbol_token1 = 83,
  sym_global_numeric_label = 84,
  sym_local_numeric_label = 85,
  sym_local_numeric_label_reference = 86,
  sym__operand_separator = 87,
  sym__operator_space = 88,
  sym__line_separator = 89,
  sym__data_separator = 90,
  sym_program = 91,
  sym__statement = 92,
  sym__line_separator_comment = 93,
  sym__data_separator_comment = 94,
  sym__line_comment = 95,
  sym__block_comment = 96,
  sym__immediate_block_comment = 97,
  sym_directive = 98,
  sym__macro_directive = 99,
  sym_macro_parameters = 100,
  sym__numeric_directive = 101,
  sym_numeric_mnemonic = 102,
  sym_numeric_operands = 103,
  sym__string_directive = 104,
  sym_string_mnemonic = 105,
  sym_string_operands = 106,
  sym__control_directive = 107,
  sym_control_mnemonic = 108,
  sym_control_operands = 109,
  sym__control_operand = 110,
  sym__control_operand_separator = 111,
  sym_section_type = 112,
  sym_option_flag = 113,
  sym_instruction = 114,
  sym_operands = 115,
  sym__operand = 116,
  sym__call_expression = 117,
  sym__assignment_expression = 118,
  sym__wrapped_assignment_expression = 119,
  sym__logical_or_expression = 120,
  sym__wrapped_logical_or_expression = 121,
  sym__logical_and_expression = 122,
  sym__wrapped_logical_and_expression = 123,
  sym__bitwise_or_expression = 124,
  sym__wrapped_bitwise_or_expression = 125,
  sym__bitwise_xor_expression = 126,
  sym__wrapped_bitwise_xor_expression = 127,
  sym__bitwise_and_expression = 128,
  sym__wrapped_bitwise_and_expression = 129,
  sym__equality_expression = 130,
  sym__wrapped_equality_expression = 131,
  sym__relational_expression = 132,
  sym__wrapped_relational_expression = 133,
  sym__shift_expression = 134,
  sym__wrapped_shift_expression = 135,
  sym__additive_expression = 136,
  sym__wrapped_additive_expression = 137,
  sym__multiplicative_expression = 138,
  sym__wrapped_multiplicative_expression = 139,
  sym__simple_expression = 140,
  sym_parenthesized_expression = 141,
  sym_unary_expression = 142,
  sym_relocation_expression = 143,
  sym_decimal = 144,
  sym_char = 145,
  sym_string = 146,
  sym__label = 147,
  sym_local_label_reference = 148,
  sym_symbol = 149,
  sym_address = 150,
  aux_sym_program_repeat1 = 151,
  aux_sym_macro_parameters_repeat1 = 152,
  aux_sym_numeric_operands_repeat1 = 153,
  aux_sym_numeric_operands_repeat2 = 154,
  aux_sym_numeric_operands_repeat3 = 155,
  aux_sym_string_operands_repeat1 = 156,
  aux_sym_control_operands_repeat1 = 157,
  aux_sym_operands_repeat1 = 158,
  aux_sym_string_repeat1 = 159,
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
  [aux_sym__immediate_block_comment_token1] = "comment",
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
  [sym__immediate_block_comment] = "_immediate_block_comment",
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
  [aux_sym__immediate_block_comment_token1] = sym__line_separator,
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
  [sym__immediate_block_comment] = sym__immediate_block_comment,
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
  [aux_sym__immediate_block_comment_token1] = {
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
  [sym__immediate_block_comment] = {
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
  [33] = 30,
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
  [46] = 30,
  [47] = 34,
  [48] = 35,
  [49] = 36,
  [50] = 37,
  [51] = 38,
  [52] = 39,
  [53] = 40,
  [54] = 41,
  [55] = 42,
  [56] = 43,
  [57] = 30,
  [58] = 34,
  [59] = 35,
  [60] = 36,
  [61] = 37,
  [62] = 38,
  [63] = 39,
  [64] = 40,
  [65] = 41,
  [66] = 42,
  [67] = 43,
  [68] = 32,
  [69] = 34,
  [70] = 35,
  [71] = 36,
  [72] = 37,
  [73] = 38,
  [74] = 39,
  [75] = 40,
  [76] = 41,
  [77] = 42,
  [78] = 43,
  [79] = 30,
  [80] = 34,
  [81] = 35,
  [82] = 36,
  [83] = 37,
  [84] = 38,
  [85] = 39,
  [86] = 40,
  [87] = 41,
  [88] = 42,
  [89] = 43,
  [90] = 31,
  [91] = 30,
  [92] = 30,
  [93] = 30,
  [94] = 30,
  [95] = 31,
  [96] = 31,
  [97] = 31,
  [98] = 32,
  [99] = 32,
  [100] = 32,
  [101] = 30,
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
  [114] = 111,
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
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 146,
  [161] = 116,
  [162] = 117,
  [163] = 118,
  [164] = 119,
  [165] = 120,
  [166] = 121,
  [167] = 122,
  [168] = 123,
  [169] = 124,
  [170] = 125,
  [171] = 126,
  [172] = 127,
  [173] = 128,
  [174] = 129,
  [175] = 130,
  [176] = 131,
  [177] = 159,
  [178] = 133,
  [179] = 134,
  [180] = 158,
  [181] = 112,
  [182] = 136,
  [183] = 137,
  [184] = 138,
  [185] = 139,
  [186] = 140,
  [187] = 113,
  [188] = 188,
  [189] = 142,
  [190] = 143,
  [191] = 144,
  [192] = 145,
  [193] = 132,
  [194] = 147,
  [195] = 148,
  [196] = 149,
  [197] = 150,
  [198] = 151,
  [199] = 152,
  [200] = 153,
  [201] = 154,
  [202] = 155,
  [203] = 156,
  [204] = 157,
  [205] = 115,
  [206] = 135,
  [207] = 124,
  [208] = 118,
  [209] = 137,
  [210] = 138,
  [211] = 140,
  [212] = 120,
  [213] = 121,
  [214] = 122,
  [215] = 123,
  [216] = 149,
  [217] = 125,
  [218] = 126,
  [219] = 127,
  [220] = 130,
  [221] = 131,
  [222] = 128,
  [223] = 159,
  [224] = 133,
  [225] = 139,
  [226] = 129,
  [227] = 119,
  [228] = 151,
  [229] = 152,
  [230] = 153,
  [231] = 154,
  [232] = 135,
  [233] = 155,
  [234] = 113,
  [235] = 156,
  [236] = 157,
  [237] = 132,
  [238] = 112,
  [239] = 136,
  [240] = 142,
  [241] = 241,
  [242] = 143,
  [243] = 144,
  [244] = 148,
  [245] = 134,
  [246] = 145,
  [247] = 146,
  [248] = 115,
  [249] = 147,
  [250] = 116,
  [251] = 117,
  [252] = 150,
  [253] = 113,
  [254] = 254,
  [255] = 156,
  [256] = 157,
  [257] = 111,
  [258] = 141,
  [259] = 142,
  [260] = 158,
  [261] = 261,
  [262] = 261,
  [263] = 116,
  [264] = 155,
  [265] = 156,
  [266] = 157,
  [267] = 117,
  [268] = 118,
  [269] = 119,
  [270] = 120,
  [271] = 121,
  [272] = 122,
  [273] = 123,
  [274] = 124,
  [275] = 125,
  [276] = 126,
  [277] = 127,
  [278] = 128,
  [279] = 129,
  [280] = 130,
  [281] = 131,
  [282] = 159,
  [283] = 133,
  [284] = 134,
  [285] = 135,
  [286] = 112,
  [287] = 136,
  [288] = 137,
  [289] = 138,
  [290] = 139,
  [291] = 140,
  [292] = 292,
  [293] = 113,
  [294] = 115,
  [295] = 142,
  [296] = 143,
  [297] = 144,
  [298] = 145,
  [299] = 146,
  [300] = 147,
  [301] = 148,
  [302] = 149,
  [303] = 150,
  [304] = 151,
  [305] = 152,
  [306] = 153,
  [307] = 154,
  [308] = 132,
  [309] = 292,
  [310] = 261,
  [311] = 292,
  [312] = 261,
  [313] = 292,
  [314] = 261,
  [315] = 292,
  [316] = 261,
  [317] = 292,
  [318] = 318,
  [319] = 113,
  [320] = 135,
  [321] = 112,
  [322] = 322,
  [323] = 140,
  [324] = 143,
  [325] = 144,
  [326] = 145,
  [327] = 146,
  [328] = 147,
  [329] = 148,
  [330] = 149,
  [331] = 150,
  [332] = 151,
  [333] = 152,
  [334] = 153,
  [335] = 154,
  [336] = 115,
  [337] = 116,
  [338] = 117,
  [339] = 118,
  [340] = 142,
  [341] = 120,
  [342] = 136,
  [343] = 156,
  [344] = 157,
  [345] = 137,
  [346] = 121,
  [347] = 132,
  [348] = 122,
  [349] = 155,
  [350] = 123,
  [351] = 124,
  [352] = 125,
  [353] = 126,
  [354] = 138,
  [355] = 127,
  [356] = 128,
  [357] = 139,
  [358] = 129,
  [359] = 130,
  [360] = 131,
  [361] = 159,
  [362] = 133,
  [363] = 134,
  [364] = 119,
  [365] = 132,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 132,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 132,
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
  [392] = 382,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 380,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 132,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 380,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 382,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 417,
  [421] = 417,
  [422] = 417,
  [423] = 423,
  [424] = 379,
  [425] = 417,
  [426] = 426,
  [427] = 402,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 393,
  [432] = 432,
  [433] = 433,
  [434] = 397,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 132,
  [443] = 443,
  [444] = 444,
  [445] = 437,
  [446] = 446,
  [447] = 401,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 443,
  [452] = 437,
  [453] = 453,
  [454] = 443,
  [455] = 437,
  [456] = 456,
  [457] = 389,
  [458] = 383,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 443,
  [465] = 407,
  [466] = 466,
  [467] = 380,
  [468] = 466,
  [469] = 469,
  [470] = 470,
  [471] = 410,
  [472] = 472,
  [473] = 466,
  [474] = 466,
  [475] = 413,
  [476] = 466,
  [477] = 382,
  [478] = 406,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 485,
  [489] = 111,
  [490] = 485,
  [491] = 482,
  [492] = 485,
  [493] = 493,
  [494] = 494,
  [495] = 485,
  [496] = 483,
  [497] = 497,
  [498] = 498,
  [499] = 498,
  [500] = 498,
  [501] = 498,
  [502] = 498,
  [503] = 498,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 506,
  [508] = 508,
  [509] = 504,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 508,
  [514] = 514,
  [515] = 511,
  [516] = 511,
  [517] = 517,
  [518] = 518,
  [519] = 511,
  [520] = 508,
  [521] = 521,
  [522] = 508,
  [523] = 506,
  [524] = 524,
  [525] = 511,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 510,
  [531] = 531,
  [532] = 532,
  [533] = 506,
  [534] = 534,
  [535] = 504,
  [536] = 508,
  [537] = 504,
  [538] = 531,
  [539] = 504,
  [540] = 508,
  [541] = 511,
  [542] = 506,
  [543] = 111,
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
      if (eof) ADVANCE(106);
      ADVANCE_MAP(
        '!', 442,
        '"', 466,
        '#', 116,
        '$', 38,
        '&', 428,
        '\'', 462,
        '(', 122,
        ')', 123,
        '+', 434,
        ',', 126,
        '-', 438,
        '.', 569,
        '/', 436,
        '0', 477,
        '3', 478,
        ';', 107,
        '<', 431,
        '=', 423,
        '>', 432,
        '@', 75,
        'A', 557,
        'S', 546,
        'T', 559,
        '\\', 2,
        '^', 427,
        'a', 558,
        'f', 548,
        'g', 553,
        'r', 550,
        's', 547,
        't', 560,
        'z', 551,
        '|', 426,
        '~', 440,
        '%', 435,
        '*', 435,
        'C', 556,
        'c', 556,
        'K', 555,
        'k', 555,
        'V', 555,
        'v', 555,
        '1', 479,
        '2', 479,
        'F', 549,
        'R', 549,
        'X', 549,
        'x', 549,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(98);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(561);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(17);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(17);
      if (lookahead == '\r') SKIP(1);
      if (lookahead == 'U') ADVANCE(74);
      if (lookahead == 'u') ADVANCE(70);
      if (lookahead == 'x') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(472);
      if (set_contains(sym__escape_sequence_character_set_1, 12, lookahead)) ADVANCE(470);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(18);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(18);
      if (lookahead == '\r') SKIP(3);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(544);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(19);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(19);
      if (lookahead == '\r') SKIP(5);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(544);
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
      if (lookahead == 'U') ADVANCE(74);
      if (lookahead == 'u') ADVANCE(70);
      if (lookahead == 'x') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(472);
      if (set_contains(sym__escape_sequence_character_set_1, 12, lookahead)) ADVANCE(470);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(34);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(34);
      if (lookahead == '\r') SKIP(11);
      if (lookahead == 'U') ADVANCE(74);
      if (lookahead == 'u') ADVANCE(70);
      if (lookahead == 'x') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(472);
      if (set_contains(sym__escape_sequence_character_set_1, 12, lookahead)) ADVANCE(470);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '\\') SKIP(15);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(13);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(13);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(13);
      if (lookahead == '\r') SKIP(14);
      END_STATE();
    case 16:
      if (lookahead == '\r') ADVANCE(117);
      if (lookahead != 0) ADVANCE(116);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '!', 442,
        '"', 466,
        '#', 116,
        '$', 38,
        '&', 428,
        '\'', 462,
        '(', 122,
        ')', 123,
        '+', 434,
        ',', 126,
        '-', 438,
        '.', 569,
        '/', 437,
        '0', 477,
        '3', 478,
        ';', 107,
        '<', 431,
        '=', 423,
        '>', 432,
        '@', 75,
        'A', 557,
        'S', 546,
        'T', 559,
        '\\', 2,
        '^', 427,
        'a', 558,
        'f', 548,
        'g', 553,
        'r', 550,
        's', 547,
        't', 560,
        'z', 551,
        '|', 426,
        '~', 440,
        '%', 435,
        '*', 435,
        'C', 556,
        'c', 556,
        'K', 555,
        'k', 555,
        'V', 555,
        'v', 555,
        '1', 479,
        '2', 479,
        'F', 549,
        'R', 549,
        'X', 549,
        'x', 549,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(561);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '!', 441,
        '"', 466,
        '#', 116,
        '$', 42,
        '%', 48,
        '\'', 462,
        '(', 122,
        ')', 123,
        '+', 76,
        ',', 416,
        '-', 439,
        '.', 574,
        '/', 32,
        '0', 446,
        '3', 451,
        ';', 107,
        '=', 422,
        '@', 75,
        'A', 583,
        'S', 567,
        'T', 585,
        '\\', 4,
        'a', 584,
        'f', 570,
        'g', 578,
        'r', 572,
        's', 568,
        't', 586,
        'z', 576,
        '|', 53,
        '~', 440,
        '\t', 18,
        ' ', 18,
        'C', 582,
        'c', 582,
        'K', 581,
        'k', 581,
        'V', 581,
        'v', 581,
        '1', 452,
        '2', 452,
        'F', 571,
        'R', 571,
        'X', 571,
        'x', 571,
      );
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(18);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(452);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(587);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '!', 441,
        '"', 466,
        '#', 116,
        '$', 42,
        '%', 48,
        '\'', 462,
        '(', 122,
        ')', 123,
        ',', 126,
        '-', 439,
        '.', 575,
        '/', 32,
        '0', 446,
        '3', 451,
        ';', 107,
        '=', 422,
        'A', 583,
        'S', 567,
        'T', 585,
        '\\', 6,
        'a', 584,
        'f', 570,
        'g', 578,
        'r', 572,
        's', 568,
        't', 586,
        'z', 576,
        '|', 53,
        '~', 440,
        'C', 582,
        'c', 582,
        'K', 581,
        'k', 581,
        'V', 581,
        'v', 581,
        '1', 452,
        '2', 452,
        'F', 571,
        'R', 571,
        'X', 571,
        'x', 571,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(452);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(587);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '!', 47,
        '"', 466,
        '#', 116,
        '&', 428,
        '(', 122,
        ')', 123,
        ',', 416,
        '/', 437,
        ';', 107,
        '<', 431,
        '=', 423,
        '>', 432,
      );
      if (lookahead == '\\') SKIP(8);
      if (lookahead == '^') ADVANCE(427);
      if (lookahead == '|') ADVANCE(426);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(435);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(434);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(466);
      if (lookahead == '/') ADVANCE(468);
      if (lookahead == '\\') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(469);
      if (lookahead != 0) ADVANCE(467);
      END_STATE();
    case 22:
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == ',') ADVANCE(126);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(545);
      if (lookahead == '$' ||
          lookahead == '%') ADVANCE(545);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 23:
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(545);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '%') ADVANCE(545);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(23);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 24:
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '/') ADVANCE(116);
      END_STATE();
    case 25:
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '/') ADVANCE(121);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == '*') ADVANCE(27);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(119);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(30);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(29);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '/') ADVANCE(116);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == ':') ADVANCE(563);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '/') ADVANCE(464);
      if (lookahead == '\\') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(463);
      END_STATE();
    case 35:
      if (lookahead == '1') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(473);
      END_STATE();
    case 36:
      if (lookahead == '1') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(473);
      END_STATE();
    case 37:
      ADVANCE_MAP(
        '2', 222,
        '4', 228,
        '8', 230,
        ':', 566,
        'L', 33,
        'a', 309,
        'b', 216,
        'c', 345,
        'd', 349,
        'f', 311,
        'h', 217,
        'i', 337,
        'l', 238,
        'm', 209,
        'p', 198,
        'q', 404,
        's', 288,
        'u', 318,
        'w', 350,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      END_STATE();
    case 38:
      ADVANCE_MAP(
        '3', 482,
        'A', 59,
        'S', 35,
        'T', 61,
        'a', 60,
        'f', 39,
        'g', 51,
        'r', 41,
        's', 36,
        't', 65,
        'z', 49,
        'C', 58,
        'c', 58,
        'K', 56,
        'k', 56,
        'V', 56,
        'v', 56,
        '1', 485,
        '2', 485,
        'F', 40,
        'R', 40,
        'X', 40,
        'x', 40,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(473);
      END_STATE();
    case 39:
      if (lookahead == '3') ADVANCE(482);
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(485);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(473);
      END_STATE();
    case 40:
      if (lookahead == '3') ADVANCE(482);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(473);
      END_STATE();
    case 41:
      if (lookahead == '3') ADVANCE(482);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(473);
      END_STATE();
    case 42:
      ADVANCE_MAP(
        '3', 483,
        'A', 539,
        'S', 490,
        'T', 541,
        'a', 540,
        'f', 495,
        'g', 527,
        'r', 497,
        's', 491,
        't', 542,
        'z', 510,
        'C', 538,
        'c', 538,
        'K', 537,
        'k', 537,
        'V', 537,
        'v', 537,
        '1', 486,
        '2', 486,
        'F', 496,
        'R', 496,
        'X', 496,
        'x', 496,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(544);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(589);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead == '=') ADVANCE(429);
      END_STATE();
    case 48:
      ADVANCE_MAP(
        'a', 505,
        'c', 503,
        'd', 534,
        'g', 525,
        'h', 516,
        'l', 524,
        'p', 506,
        't', 520,
      );
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(473);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(473);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 53:
      if (lookahead == '|') ADVANCE(424);
      END_STATE();
    case 54:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(456);
      END_STATE();
    case 55:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(460);
      END_STATE();
    case 56:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(473);
      END_STATE();
    case 57:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(450);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(473);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(473);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(473);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(473);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(458);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(456);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(460);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(473);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(470);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(454);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
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
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 76:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 77:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 78:
      if (eof) ADVANCE(106);
      ADVANCE_MAP(
        '\t', 180,
        ' ', 179,
        '!', 47,
        '#', 116,
        '&', 428,
        '(', 122,
        ',', 126,
        '/', 437,
        ';', 107,
        '<', 431,
        '=', 423,
        '>', 432,
      );
      if (lookahead == '\\') SKIP(86);
      if (lookahead == '^') ADVANCE(427);
      if (lookahead == '|') ADVANCE(426);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(435);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(434);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(78);
      END_STATE();
    case 79:
      if (eof) ADVANCE(106);
      if (lookahead == '\n') SKIP(81);
      END_STATE();
    case 80:
      if (eof) ADVANCE(106);
      if (lookahead == '\n') SKIP(81);
      if (lookahead == '\r') SKIP(79);
      END_STATE();
    case 81:
      if (eof) ADVANCE(106);
      ADVANCE_MAP(
        '\n', 110,
        '\r', 108,
        '#', 116,
        '%', 77,
        '.', 37,
        '/', 32,
        '0', 44,
        ';', 107,
      );
      if (lookahead == '\\') SKIP(80);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(81);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 82:
      if (eof) ADVANCE(106);
      if (lookahead == '\n') SKIP(84);
      END_STATE();
    case 83:
      if (eof) ADVANCE(106);
      if (lookahead == '\n') SKIP(84);
      if (lookahead == '\r') SKIP(82);
      END_STATE();
    case 84:
      if (eof) ADVANCE(106);
      ADVANCE_MAP(
        '\n', 111,
        '\r', 109,
        '#', 116,
        '%', 77,
        '.', 37,
        '/', 32,
        '0', 44,
        ';', 107,
      );
      if (lookahead == '\\') SKIP(83);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(113);
      if (lookahead == 0x0b ||
          lookahead == '\f') SKIP(84);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 85:
      if (eof) ADVANCE(106);
      if (lookahead == '\n') SKIP(78);
      END_STATE();
    case 86:
      if (eof) ADVANCE(106);
      if (lookahead == '\n') SKIP(78);
      if (lookahead == '\r') SKIP(85);
      END_STATE();
    case 87:
      if (eof) ADVANCE(106);
      if (lookahead == '\n') SKIP(101);
      END_STATE();
    case 88:
      if (eof) ADVANCE(106);
      if (lookahead == '\n') SKIP(101);
      if (lookahead == '\r') SKIP(87);
      END_STATE();
    case 89:
      if (eof) ADVANCE(106);
      if (lookahead == '\n') SKIP(102);
      END_STATE();
    case 90:
      if (eof) ADVANCE(106);
      if (lookahead == '\n') SKIP(102);
      if (lookahead == '\r') SKIP(89);
      END_STATE();
    case 91:
      if (eof) ADVANCE(106);
      if (lookahead == '\n') SKIP(103);
      END_STATE();
    case 92:
      if (eof) ADVANCE(106);
      if (lookahead == '\n') SKIP(103);
      if (lookahead == '\r') SKIP(91);
      END_STATE();
    case 93:
      if (eof) ADVANCE(106);
      if (lookahead == '\n') SKIP(95);
      END_STATE();
    case 94:
      if (eof) ADVANCE(106);
      if (lookahead == '\n') SKIP(95);
      if (lookahead == '\r') SKIP(93);
      END_STATE();
    case 95:
      if (eof) ADVANCE(106);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '\\') SKIP(94);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(95);
      END_STATE();
    case 96:
      if (eof) ADVANCE(106);
      if (lookahead == '\n') SKIP(104);
      END_STATE();
    case 97:
      if (eof) ADVANCE(106);
      if (lookahead == '\n') SKIP(104);
      if (lookahead == '\r') SKIP(96);
      END_STATE();
    case 98:
      if (eof) ADVANCE(106);
      ADVANCE_MAP(
        '!', 442,
        '"', 466,
        '#', 116,
        '$', 38,
        '&', 428,
        '\'', 462,
        '(', 122,
        ')', 123,
        '+', 434,
        ',', 126,
        '-', 438,
        '.', 569,
        '/', 437,
        '0', 477,
        '3', 478,
        ';', 107,
        '<', 431,
        '=', 423,
        '>', 432,
        '@', 75,
        'A', 557,
        'S', 546,
        'T', 559,
        '\\', 2,
        '^', 427,
        'a', 558,
        'f', 548,
        'g', 553,
        'r', 550,
        's', 547,
        't', 560,
        'z', 551,
        '|', 426,
        '~', 440,
        '%', 435,
        '*', 435,
        'C', 556,
        'c', 556,
        'K', 555,
        'k', 555,
        'V', 555,
        'v', 555,
        '1', 479,
        '2', 479,
        'F', 549,
        'R', 549,
        'X', 549,
        'x', 549,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(98);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(561);
      END_STATE();
    case 99:
      if (eof) ADVANCE(106);
      ADVANCE_MAP(
        '!', 441,
        '"', 466,
        '#', 116,
        '$', 42,
        '%', 48,
        '\'', 462,
        '(', 122,
        ')', 123,
        '+', 76,
        ',', 416,
        '-', 439,
        '.', 574,
        '/', 32,
        '0', 446,
        '3', 451,
        ';', 107,
        '=', 422,
        '@', 75,
        'A', 583,
        'S', 567,
        'T', 585,
        '\\', 4,
        'a', 584,
        'f', 570,
        'g', 578,
        'r', 572,
        's', 568,
        't', 586,
        'z', 576,
        '|', 53,
        '~', 440,
        '\t', 18,
        ' ', 18,
        'C', 582,
        'c', 582,
        'K', 581,
        'k', 581,
        'V', 581,
        'v', 581,
        '1', 452,
        '2', 452,
        'F', 571,
        'R', 571,
        'X', 571,
        'x', 571,
      );
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(99);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(452);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(587);
      END_STATE();
    case 100:
      if (eof) ADVANCE(106);
      ADVANCE_MAP(
        '!', 441,
        '"', 466,
        '#', 116,
        '$', 42,
        '%', 48,
        '\'', 462,
        '(', 122,
        ')', 123,
        ',', 126,
        '-', 439,
        '.', 575,
        '/', 32,
        '0', 446,
        '3', 451,
        ';', 107,
        '=', 422,
        'A', 583,
        'S', 567,
        'T', 585,
        '\\', 6,
        'a', 584,
        'f', 570,
        'g', 578,
        'r', 572,
        's', 568,
        't', 586,
        'z', 576,
        '|', 53,
        '~', 440,
        'C', 582,
        'c', 582,
        'K', 581,
        'k', 581,
        'V', 581,
        'v', 581,
        '1', 452,
        '2', 452,
        'F', 571,
        'R', 571,
        'X', 571,
        'x', 571,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(100);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(452);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(587);
      END_STATE();
    case 101:
      if (eof) ADVANCE(106);
      ADVANCE_MAP(
        '!', 47,
        '"', 466,
        '#', 116,
        '&', 428,
        '(', 122,
        ')', 123,
        ',', 416,
        '/', 437,
        ';', 107,
        '<', 431,
        '=', 423,
        '>', 432,
      );
      if (lookahead == '\\') SKIP(88);
      if (lookahead == '^') ADVANCE(427);
      if (lookahead == '|') ADVANCE(426);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(435);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(434);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 102:
      if (eof) ADVANCE(106);
      ADVANCE_MAP(
        '!', 47,
        '#', 116,
        '&', 428,
        '(', 122,
        ')', 123,
        ',', 126,
        '/', 437,
        ';', 107,
        '<', 431,
        '=', 423,
        '>', 432,
      );
      if (lookahead == '\\') SKIP(90);
      if (lookahead == '^') ADVANCE(427);
      if (lookahead == '|') ADVANCE(426);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(435);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(434);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(102);
      END_STATE();
    case 103:
      if (eof) ADVANCE(106);
      ADVANCE_MAP(
        '!', 47,
        '#', 116,
        '&', 428,
        '(', 122,
        ')', 123,
        ',', 126,
        '/', 437,
        ';', 107,
        '<', 431,
        '=', 423,
        '>', 432,
      );
      if (lookahead == '\\') SKIP(92);
      if (lookahead == '^') ADVANCE(427);
      if (lookahead == '|') ADVANCE(426);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(435);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(434);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(103);
      END_STATE();
    case 104:
      if (eof) ADVANCE(106);
      if (lookahead == '"') ADVANCE(466);
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == ',') ADVANCE(126);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == ';') ADVANCE(107);
      if (lookahead == '\\') SKIP(97);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(115);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(104);
      END_STATE();
    case 105:
      if (eof) ADVANCE(106);
      if (lookahead == '"') ADVANCE(466);
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == ',') ADVANCE(126);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == ';') ADVANCE(107);
      if (lookahead == '\\') SKIP(97);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(115);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(104);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead == '\r') ADVANCE(108);
      if (lookahead == '%') ADVANCE(77);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '0') ADVANCE(44);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '\r') ADVANCE(109);
      if (lookahead == '%') ADVANCE(77);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(113);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead == '\r') ADVANCE(108);
      if (lookahead == '%') ADVANCE(77);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '0') ADVANCE(44);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '\r') ADVANCE(109);
      if (lookahead == '%') ADVANCE(77);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(113);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '\r') ADVANCE(13);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '\r') ADVANCE(109);
      if (lookahead == '%') ADVANCE(77);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(113);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\\') ADVANCE(545);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym__line_comment_token1);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym__line_comment_token1);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0) ADVANCE(116);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym__immediate_block_comment_token1);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym__immediate_block_comment_token1);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_macro_mnemonic);
      if (lookahead == ':') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_macro_mnemonic);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_DOTbyte);
      if (lookahead == ':') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_DOTbyte);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_DOT2byte);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_DOT2byte);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_DOTshort);
      if (lookahead == ':') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_DOTshort);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_DOThalf);
      if (lookahead == ':') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_DOThalf);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_DOThword);
      if (lookahead == ':') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_DOThword);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_DOT4byte);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_DOT4byte);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_DOTword);
      if (lookahead == ':') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_DOTword);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_DOTint);
      if (lookahead == ':') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_DOTint);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_DOT8byte);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_DOT8byte);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_DOTdword);
      if (lookahead == ':') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_DOTdword);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_DOTlong);
      if (lookahead == ':') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_DOTlong);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_DOTquad);
      if (lookahead == ':') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_DOTquad);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DOTcomm);
      if (lookahead == ':') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_DOTcomm);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_DOTlcomm);
      if (lookahead == ':') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_DOTlcomm);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_DOTalign);
      if (lookahead == ':') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_DOTalign);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_DOTbalign);
      if (lookahead == ':') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_DOTbalign);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_DOTp2align);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_DOTp2align);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_DOTsleb128);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_DOTsleb128);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_DOTuleb128);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_DOTuleb128);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_DOTdtprelword);
      if (lookahead == ':') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_DOTdtprelword);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_DOTdtpreldword);
      if (lookahead == ':') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_DOTdtpreldword);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_DOTskip);
      if (lookahead == ':') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_DOTskip);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_DOTspace);
      if (lookahead == ':') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_DOTspace);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_DOTfloat);
      if (lookahead == ':') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_DOTfloat);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_DOTdouble);
      if (lookahead == ':') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_DOTdouble);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_DOTsingle);
      if (lookahead == ':') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_DOTsingle);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(180);
      if (lookahead == ' ') ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(180);
      if (lookahead == ' ') ADVANCE(179);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_DOTasciz);
      if (lookahead == ':') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_DOTasciz);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_DOTascii);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'z') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'y')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_DOTascii);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'z') ADVANCE(186);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(415);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_DOTasciiz);
      if (lookahead == ':') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_DOTasciiz);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DOTstring);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'z') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'y')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DOTstring);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'z') ADVANCE(190);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(415);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_DOTstringz);
      if (lookahead == ':') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_DOTstringz);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(196);
      if (lookahead == ':') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(199);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(197);
      if (lookahead == ':') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(200);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(205);
      if (lookahead == ':') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(201);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(202);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(218);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(203);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(204);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(161);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(163);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(162);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(164);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'a') ADVANCE(305);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'a') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'a') ADVANCE(246);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'a') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'a') ADVANCE(235);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'a') ADVANCE(316);
      if (lookahead == 'y') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'a') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'a') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'a') ADVANCE(236);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'a') ADVANCE(304);
      if (lookahead == 'w') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'a') ADVANCE(392);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'a') ADVANCE(317);
      if (lookahead == 'y') ADVANCE(397);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'a') ADVANCE(307);
      if (lookahead == 'w') ADVANCE(360);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'a') ADVANCE(319);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'b') ADVANCE(407);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'b') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'b') ADVANCE(192);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'b') ADVANCE(409);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'b') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'b') ADVANCE(314);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'b') ADVANCE(408);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'b') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'b') ADVANCE(194);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'b') ADVANCE(411);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'b') ADVANCE(410);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'b') ADVANCE(412);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'c') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'c') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'c') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'c') ADVANCE(293);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'c') ADVANCE(378);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'c') ADVANCE(261);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'c') ADVANCE(355);
      if (lookahead == 'o') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'c') ADVANCE(356);
      if (lookahead == 'o') ADVANCE(339);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'd') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'd') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'd') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'd') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'd') ADVANCE(405);
      if (lookahead == 'w') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'd') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'd') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'd') ADVANCE(150);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'd') ADVANCE(140);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'd') ADVANCE(146);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'd') ADVANCE(406);
      if (lookahead == 'w') ADVANCE(362);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'd') ADVANCE(166);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'd') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'e') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'e') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'e') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'e') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'e') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'e') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'e') ADVANCE(308);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'e') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'f') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'f') ADVANCE(134);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'g') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'g') ADVANCE(331);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'g') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'g') ADVANCE(148);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'g') ADVANCE(188);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'g') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'g') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'g') ADVANCE(332);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'g') ADVANCE(333);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'g') ADVANCE(336);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'g') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'g') ADVANCE(315);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'h') ADVANCE(353);
      if (lookahead == 'i') ADVANCE(338);
      if (lookahead == 'k') ADVANCE(295);
      if (lookahead == 'l') ADVANCE(264);
      if (lookahead == 'p') ADVANCE(211);
      if (lookahead == 't') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'h') ADVANCE(354);
      if (lookahead == 'i') ADVANCE(341);
      if (lookahead == 'k') ADVANCE(297);
      if (lookahead == 'l') ADVANCE(268);
      if (lookahead == 'p') ADVANCE(213);
      if (lookahead == 't') ADVANCE(382);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(183);
      if (lookahead == 'z') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'y')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(276);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(184);
      if (lookahead == 'z') ADVANCE(182);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(415);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(282);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(366);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(342);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(283);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'i') ADVANCE(284);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'l') ADVANCE(289);
      if (lookahead == 's') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'l') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'l') ADVANCE(292);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'l') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'l') ADVANCE(274);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'l') ADVANCE(250);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'l') ADVANCE(296);
      if (lookahead == 's') ADVANCE(234);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'l') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'l') ADVANCE(352);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'l') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'l') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'l') ADVANCE(262);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'l') ADVANCE(263);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'l') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'l') ADVANCE(300);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'l') ADVANCE(272);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'l') ADVANCE(302);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'l') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'm') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'm') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'm') ADVANCE(152);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'm') ADVANCE(154);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'm') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'm') ADVANCE(323);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'm') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'm') ADVANCE(324);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'n') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'n') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'n') ADVANCE(159);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'n') ADVANCE(156);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'n') ADVANCE(158);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'n') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'n') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'n') ADVANCE(160);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'n') ADVANCE(391);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'n') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'n') ADVANCE(278);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'n') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'n') ADVANCE(286);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'n') ADVANCE(279);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'o') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'o') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'o') ADVANCE(326);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'o') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'o') ADVANCE(401);
      if (lookahead == 't') ADVANCE(367);
      if (lookahead == 'w') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'o') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'o') ADVANCE(403);
      if (lookahead == 't') ADVANCE(368);
      if (lookahead == 'w') ADVANCE(358);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'o') ADVANCE(370);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'o') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'o') ADVANCE(215);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'o') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'o') ADVANCE(380);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'o') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'o') ADVANCE(328);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'o') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'o') ADVANCE(373);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'o') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'o') ADVANCE(379);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'o') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'o') ADVANCE(383);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'o') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'o') ADVANCE(385);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'p') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'p') ADVANCE(170);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'p') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'p') ADVANCE(386);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'r') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'r') ADVANCE(247);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'r') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'r') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'r') ADVANCE(248);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'r') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'r') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'r') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'r') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'r') ADVANCE(346);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'r') ADVANCE(249);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'r') ADVANCE(393);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'r') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'r') ADVANCE(298);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'r') ADVANCE(251);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'r') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'r') ADVANCE(252);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'r') ADVANCE(270);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 't') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 't') ADVANCE(254);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 't') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 't') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 't') ADVANCE(174);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 't') ADVANCE(132);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 't') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 't') ADVANCE(255);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 't') ADVANCE(256);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 't') ADVANCE(260);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 't') ADVANCE(265);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 't') ADVANCE(266);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 't') ADVANCE(267);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'u') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'u') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'u') ADVANCE(224);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'u') ADVANCE(207);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'w') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'w') ADVANCE(364);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'y') ADVANCE(388);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'y') ADVANCE(395);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'y') ADVANCE(398);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'y') ADVANCE(396);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'y') ADVANCE(399);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'y') ADVANCE(400);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym__control_operand_separator_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(587);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_option_flag_token1);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '$') ADVANCE(43);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_assignment_operator);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_assignment_operator);
      if (lookahead == '=') ADVANCE(429);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_logical_or_operator);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_logical_and_operator);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_bitwise_or_operator);
      if (lookahead == '|') ADVANCE(424);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_bitwise_xor_operator);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_bitwise_and_operator);
      if (lookahead == '&') ADVANCE(425);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_equality_operator);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_relational_operator);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_relational_operator);
      if (lookahead == '<') ADVANCE(433);
      if (lookahead == '=') ADVANCE(430);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_relational_operator);
      if (lookahead == '=') ADVANCE(430);
      if (lookahead == '>') ADVANCE(433);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_shift_operator);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_additive_operator);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_multiplicative_operator);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_multiplicative_operator);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '/') ADVANCE(116);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_multiplicative_operator);
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '/') ADVANCE(116);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_unary_minus_operator);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_unary_minus_operator);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '0') ADVANCE(447);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(453);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_bitwise_not_operator);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_logical_not_operator);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_logical_not_operator);
      if (lookahead == '=') ADVANCE(429);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_relocation_type);
      if (lookahead == '_') ADVANCE(515);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_relocation_type);
      if (lookahead == '_') ADVANCE(504);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_relocation_type);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_octal);
      ADVANCE_MAP(
        '.', 458,
        'B', 57,
        'b', 591,
        'f', 590,
        'o', 449,
        'E', 54,
        'e', 54,
        'X', 67,
        'x', 67,
        '8', 453,
        '9', 453,
      );
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(448);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_octal);
      ADVANCE_MAP(
        '.', 458,
        'o', 449,
        'B', 57,
        'b', 57,
        'E', 54,
        'e', 54,
        'X', 67,
        'x', 67,
        '8', 453,
        '9', 453,
      );
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(448);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_octal);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(448);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_octal);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(449);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_binary);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(450);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(590);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(453);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(453);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(453);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(458);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(453);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(454);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'f') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(456);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(580);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(457);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(55);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(458);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(460);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '*') ADVANCE(29);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '/') ADVANCE(464);
      if (lookahead == '\\') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(463);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(29);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(468);
      if (lookahead == '\\') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(467);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(470);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(471);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.') ADVANCE(573);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(476);
      if (lookahead == '$' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(561);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.') ADVANCE(573);
      if (lookahead == ':') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(476);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(561);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.') ADVANCE(573);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(561);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(589);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(590);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(589);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(590);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(481);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(589);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(589);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(473);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(489);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('2' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(544);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(473);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(544);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(544);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(544);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(489);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(544);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(499);
      if (lookahead == '3') ADVANCE(494);
      if (lookahead == 'r') ADVANCE(512);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(499);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '2') ADVANCE(445);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '3') ADVANCE(483);
      if (lookahead == 'a') ADVANCE(539);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(486);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(489);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(544);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '3') ADVANCE(483);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(544);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '3') ADVANCE(483);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(489);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(544);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '4') ADVANCE(445);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '6') ADVANCE(445);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '6') ADVANCE(498);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '_') ADVANCE(515);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '_') ADVANCE(514);
      if (lookahead == 'g') ADVANCE(508);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'a') ADVANCE(521);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'a') ADVANCE(509);
      if (lookahead == 'h') ADVANCE(516);
      if (lookahead == 'l') ADVANCE(524);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'b') ADVANCE(532);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'c') ADVANCE(492);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'd') ADVANCE(445);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'd') ADVANCE(501);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'd') ADVANCE(507);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(529);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(544);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(517);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(519);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(522);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'g') ADVANCE(526);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'h') ADVANCE(516);
      if (lookahead == 'l') ADVANCE(524);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'i') ADVANCE(445);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(445);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(493);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(501);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(533);
      if (lookahead == 'p') ADVANCE(531);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(518);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(444);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(489);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(544);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(445);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(535);
      if (lookahead == 'p') ADVANCE(530);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(536);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'p') ADVANCE(489);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(544);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'p') ADVANCE(530);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'r') ADVANCE(523);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(544);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'r') ADVANCE(511);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'r') ADVANCE(513);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 's') ADVANCE(500);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 's') ADVANCE(502);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 't') ADVANCE(528);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 't') ADVANCE(443);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 't') ADVANCE(501);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(489);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('2' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(544);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(489);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('4' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(544);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(489);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('8' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(544);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(489);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('8' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(544);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(544);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(489);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(544);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(543);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(544);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_macro_parameter);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(573);
      if (lookahead == '1') ADVANCE(474);
      if (lookahead == ':') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(476);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(561);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(573);
      if (lookahead == '1') ADVANCE(474);
      if (lookahead == ':') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(476);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(561);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(573);
      if (lookahead == '3') ADVANCE(474);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'a') ADVANCE(557);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(475);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(476);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(561);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(573);
      if (lookahead == '3') ADVANCE(474);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(476);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(561);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(573);
      if (lookahead == '3') ADVANCE(474);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(476);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(561);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(573);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'e') ADVANCE(554);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(561);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(573);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'o') ADVANCE(476);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(561);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(573);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'p') ADVANCE(476);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(561);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(573);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == 'r') ADVANCE(552);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(561);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(573);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(476);
      if (lookahead == '$' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(561);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(573);
      if (lookahead == ':') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(476);
      if (lookahead == '$' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(561);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(573);
      if (lookahead == ':') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(476);
      if (lookahead == '$' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(561);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(573);
      if (lookahead == ':') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(476);
      if (lookahead == '$' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(561);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(573);
      if (lookahead == ':') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(476);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(561);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(573);
      if (lookahead == ':') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(476);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(561);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(573);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(561);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(562);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_local_label);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_local_label_reference_token1);
      if (lookahead == '.') ADVANCE(573);
      if (lookahead == ':') ADVANCE(563);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_local_label_reference_token1);
      if (lookahead == '.') ADVANCE(587);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_global_label);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '1') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '1') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      ADVANCE_MAP(
        '2', 219,
        '4', 225,
        '8', 229,
        ':', 566,
        'L', 564,
        'a', 303,
        'b', 210,
        'c', 343,
        'd', 347,
        'f', 310,
        'h', 214,
        'i', 334,
        'l', 237,
        'm', 208,
        'p', 195,
        'q', 402,
        's', 287,
        'u', 320,
        'w', 348,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(414);
      if (('e' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(573);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '3') ADVANCE(484);
      if (lookahead == 'a') ADVANCE(583);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(487);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '3') ADVANCE(484);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '3') ADVANCE(484);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == ':') ADVANCE(566);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(573);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'L') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(457);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(418);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(587);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'L') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(457);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'e') ADVANCE(579);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'o') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'p') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'r') ADVANCE(577);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(488);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_global_numeric_label);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_local_numeric_label);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_local_numeric_label_reference);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_local_numeric_label_reference);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(450);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 81, .external_lex_state = 2},
  [2] = {.lex_state = 99, .external_lex_state = 3},
  [3] = {.lex_state = 100, .external_lex_state = 3},
  [4] = {.lex_state = 81, .external_lex_state = 2},
  [5] = {.lex_state = 81, .external_lex_state = 2},
  [6] = {.lex_state = 100, .external_lex_state = 3},
  [7] = {.lex_state = 100, .external_lex_state = 3},
  [8] = {.lex_state = 99, .external_lex_state = 2},
  [9] = {.lex_state = 100, .external_lex_state = 2},
  [10] = {.lex_state = 100, .external_lex_state = 3},
  [11] = {.lex_state = 100, .external_lex_state = 2},
  [12] = {.lex_state = 100, .external_lex_state = 4},
  [13] = {.lex_state = 100, .external_lex_state = 2},
  [14] = {.lex_state = 100, .external_lex_state = 2},
  [15] = {.lex_state = 100, .external_lex_state = 2},
  [16] = {.lex_state = 100, .external_lex_state = 2},
  [17] = {.lex_state = 100, .external_lex_state = 2},
  [18] = {.lex_state = 100, .external_lex_state = 2},
  [19] = {.lex_state = 100, .external_lex_state = 2},
  [20] = {.lex_state = 100, .external_lex_state = 2},
  [21] = {.lex_state = 100, .external_lex_state = 2},
  [22] = {.lex_state = 100, .external_lex_state = 2},
  [23] = {.lex_state = 100, .external_lex_state = 2},
  [24] = {.lex_state = 100, .external_lex_state = 2},
  [25] = {.lex_state = 100, .external_lex_state = 2},
  [26] = {.lex_state = 100, .external_lex_state = 2},
  [27] = {.lex_state = 100, .external_lex_state = 2},
  [28] = {.lex_state = 100, .external_lex_state = 2},
  [29] = {.lex_state = 100, .external_lex_state = 2},
  [30] = {.lex_state = 100, .external_lex_state = 2},
  [31] = {.lex_state = 100, .external_lex_state = 2},
  [32] = {.lex_state = 100, .external_lex_state = 2},
  [33] = {.lex_state = 100, .external_lex_state = 2},
  [34] = {.lex_state = 100, .external_lex_state = 2},
  [35] = {.lex_state = 100, .external_lex_state = 2},
  [36] = {.lex_state = 100, .external_lex_state = 2},
  [37] = {.lex_state = 100, .external_lex_state = 2},
  [38] = {.lex_state = 100, .external_lex_state = 2},
  [39] = {.lex_state = 100, .external_lex_state = 2},
  [40] = {.lex_state = 100, .external_lex_state = 2},
  [41] = {.lex_state = 100, .external_lex_state = 2},
  [42] = {.lex_state = 100, .external_lex_state = 2},
  [43] = {.lex_state = 100, .external_lex_state = 2},
  [44] = {.lex_state = 100, .external_lex_state = 2},
  [45] = {.lex_state = 100, .external_lex_state = 2},
  [46] = {.lex_state = 100, .external_lex_state = 2},
  [47] = {.lex_state = 100, .external_lex_state = 2},
  [48] = {.lex_state = 100, .external_lex_state = 2},
  [49] = {.lex_state = 100, .external_lex_state = 2},
  [50] = {.lex_state = 100, .external_lex_state = 2},
  [51] = {.lex_state = 100, .external_lex_state = 2},
  [52] = {.lex_state = 100, .external_lex_state = 2},
  [53] = {.lex_state = 100, .external_lex_state = 2},
  [54] = {.lex_state = 100, .external_lex_state = 2},
  [55] = {.lex_state = 100, .external_lex_state = 2},
  [56] = {.lex_state = 100, .external_lex_state = 2},
  [57] = {.lex_state = 100, .external_lex_state = 2},
  [58] = {.lex_state = 100, .external_lex_state = 2},
  [59] = {.lex_state = 100, .external_lex_state = 2},
  [60] = {.lex_state = 100, .external_lex_state = 2},
  [61] = {.lex_state = 100, .external_lex_state = 2},
  [62] = {.lex_state = 100, .external_lex_state = 2},
  [63] = {.lex_state = 100, .external_lex_state = 2},
  [64] = {.lex_state = 100, .external_lex_state = 2},
  [65] = {.lex_state = 100, .external_lex_state = 2},
  [66] = {.lex_state = 100, .external_lex_state = 2},
  [67] = {.lex_state = 100, .external_lex_state = 2},
  [68] = {.lex_state = 100, .external_lex_state = 2},
  [69] = {.lex_state = 100, .external_lex_state = 2},
  [70] = {.lex_state = 100, .external_lex_state = 2},
  [71] = {.lex_state = 100, .external_lex_state = 2},
  [72] = {.lex_state = 100, .external_lex_state = 2},
  [73] = {.lex_state = 100, .external_lex_state = 2},
  [74] = {.lex_state = 100, .external_lex_state = 2},
  [75] = {.lex_state = 100, .external_lex_state = 2},
  [76] = {.lex_state = 100, .external_lex_state = 2},
  [77] = {.lex_state = 100, .external_lex_state = 2},
  [78] = {.lex_state = 100, .external_lex_state = 2},
  [79] = {.lex_state = 100, .external_lex_state = 2},
  [80] = {.lex_state = 100, .external_lex_state = 2},
  [81] = {.lex_state = 100, .external_lex_state = 2},
  [82] = {.lex_state = 100, .external_lex_state = 2},
  [83] = {.lex_state = 100, .external_lex_state = 2},
  [84] = {.lex_state = 100, .external_lex_state = 2},
  [85] = {.lex_state = 100, .external_lex_state = 2},
  [86] = {.lex_state = 100, .external_lex_state = 2},
  [87] = {.lex_state = 100, .external_lex_state = 2},
  [88] = {.lex_state = 100, .external_lex_state = 2},
  [89] = {.lex_state = 100, .external_lex_state = 2},
  [90] = {.lex_state = 100, .external_lex_state = 2},
  [91] = {.lex_state = 100, .external_lex_state = 2},
  [92] = {.lex_state = 100, .external_lex_state = 2},
  [93] = {.lex_state = 100, .external_lex_state = 2},
  [94] = {.lex_state = 100, .external_lex_state = 2},
  [95] = {.lex_state = 100, .external_lex_state = 2},
  [96] = {.lex_state = 100, .external_lex_state = 2},
  [97] = {.lex_state = 100, .external_lex_state = 2},
  [98] = {.lex_state = 100, .external_lex_state = 2},
  [99] = {.lex_state = 100, .external_lex_state = 2},
  [100] = {.lex_state = 100, .external_lex_state = 2},
  [101] = {.lex_state = 100, .external_lex_state = 2},
  [102] = {.lex_state = 84, .external_lex_state = 2},
  [103] = {.lex_state = 81, .external_lex_state = 2},
  [104] = {.lex_state = 81, .external_lex_state = 2},
  [105] = {.lex_state = 81, .external_lex_state = 2},
  [106] = {.lex_state = 81, .external_lex_state = 2},
  [107] = {.lex_state = 81, .external_lex_state = 2},
  [108] = {.lex_state = 81, .external_lex_state = 2},
  [109] = {.lex_state = 81, .external_lex_state = 2},
  [110] = {.lex_state = 81, .external_lex_state = 2},
  [111] = {.lex_state = 99, .external_lex_state = 3},
  [112] = {.lex_state = 78, .external_lex_state = 1},
  [113] = {.lex_state = 78, .external_lex_state = 1},
  [114] = {.lex_state = 100, .external_lex_state = 3},
  [115] = {.lex_state = 78, .external_lex_state = 1},
  [116] = {.lex_state = 78, .external_lex_state = 1},
  [117] = {.lex_state = 78, .external_lex_state = 1},
  [118] = {.lex_state = 78, .external_lex_state = 1},
  [119] = {.lex_state = 78, .external_lex_state = 1},
  [120] = {.lex_state = 78, .external_lex_state = 1},
  [121] = {.lex_state = 78, .external_lex_state = 1},
  [122] = {.lex_state = 78, .external_lex_state = 1},
  [123] = {.lex_state = 78, .external_lex_state = 1},
  [124] = {.lex_state = 78, .external_lex_state = 1},
  [125] = {.lex_state = 78, .external_lex_state = 1},
  [126] = {.lex_state = 78, .external_lex_state = 1},
  [127] = {.lex_state = 78, .external_lex_state = 1},
  [128] = {.lex_state = 78, .external_lex_state = 1},
  [129] = {.lex_state = 78, .external_lex_state = 1},
  [130] = {.lex_state = 78, .external_lex_state = 1},
  [131] = {.lex_state = 78, .external_lex_state = 1},
  [132] = {.lex_state = 78, .external_lex_state = 1},
  [133] = {.lex_state = 78, .external_lex_state = 1},
  [134] = {.lex_state = 78, .external_lex_state = 1},
  [135] = {.lex_state = 78, .external_lex_state = 1},
  [136] = {.lex_state = 78, .external_lex_state = 1},
  [137] = {.lex_state = 78, .external_lex_state = 1},
  [138] = {.lex_state = 78, .external_lex_state = 1},
  [139] = {.lex_state = 78, .external_lex_state = 1},
  [140] = {.lex_state = 78, .external_lex_state = 1},
  [141] = {.lex_state = 100, .external_lex_state = 3},
  [142] = {.lex_state = 78, .external_lex_state = 1},
  [143] = {.lex_state = 78, .external_lex_state = 1},
  [144] = {.lex_state = 78, .external_lex_state = 1},
  [145] = {.lex_state = 78, .external_lex_state = 1},
  [146] = {.lex_state = 78, .external_lex_state = 1},
  [147] = {.lex_state = 78, .external_lex_state = 1},
  [148] = {.lex_state = 78, .external_lex_state = 1},
  [149] = {.lex_state = 78, .external_lex_state = 1},
  [150] = {.lex_state = 78, .external_lex_state = 1},
  [151] = {.lex_state = 78, .external_lex_state = 1},
  [152] = {.lex_state = 78, .external_lex_state = 1},
  [153] = {.lex_state = 78, .external_lex_state = 1},
  [154] = {.lex_state = 78, .external_lex_state = 1},
  [155] = {.lex_state = 78, .external_lex_state = 1},
  [156] = {.lex_state = 78, .external_lex_state = 1},
  [157] = {.lex_state = 78, .external_lex_state = 1},
  [158] = {.lex_state = 100, .external_lex_state = 4},
  [159] = {.lex_state = 78, .external_lex_state = 1},
  [160] = {.lex_state = 101, .external_lex_state = 1},
  [161] = {.lex_state = 101, .external_lex_state = 1},
  [162] = {.lex_state = 101, .external_lex_state = 1},
  [163] = {.lex_state = 101, .external_lex_state = 1},
  [164] = {.lex_state = 101, .external_lex_state = 1},
  [165] = {.lex_state = 101, .external_lex_state = 1},
  [166] = {.lex_state = 101, .external_lex_state = 1},
  [167] = {.lex_state = 101, .external_lex_state = 1},
  [168] = {.lex_state = 101, .external_lex_state = 1},
  [169] = {.lex_state = 101, .external_lex_state = 1},
  [170] = {.lex_state = 101, .external_lex_state = 1},
  [171] = {.lex_state = 101, .external_lex_state = 1},
  [172] = {.lex_state = 101, .external_lex_state = 1},
  [173] = {.lex_state = 101, .external_lex_state = 1},
  [174] = {.lex_state = 101, .external_lex_state = 1},
  [175] = {.lex_state = 101, .external_lex_state = 1},
  [176] = {.lex_state = 101, .external_lex_state = 1},
  [177] = {.lex_state = 101, .external_lex_state = 1},
  [178] = {.lex_state = 101, .external_lex_state = 1},
  [179] = {.lex_state = 101, .external_lex_state = 1},
  [180] = {.lex_state = 99, .external_lex_state = 2},
  [181] = {.lex_state = 101, .external_lex_state = 1},
  [182] = {.lex_state = 101, .external_lex_state = 1},
  [183] = {.lex_state = 101, .external_lex_state = 1},
  [184] = {.lex_state = 101, .external_lex_state = 1},
  [185] = {.lex_state = 101, .external_lex_state = 1},
  [186] = {.lex_state = 101, .external_lex_state = 1},
  [187] = {.lex_state = 101, .external_lex_state = 1},
  [188] = {.lex_state = 99, .external_lex_state = 2},
  [189] = {.lex_state = 101, .external_lex_state = 1},
  [190] = {.lex_state = 101, .external_lex_state = 1},
  [191] = {.lex_state = 101, .external_lex_state = 1},
  [192] = {.lex_state = 101, .external_lex_state = 1},
  [193] = {.lex_state = 101, .external_lex_state = 1},
  [194] = {.lex_state = 101, .external_lex_state = 1},
  [195] = {.lex_state = 101, .external_lex_state = 1},
  [196] = {.lex_state = 101, .external_lex_state = 1},
  [197] = {.lex_state = 101, .external_lex_state = 1},
  [198] = {.lex_state = 101, .external_lex_state = 1},
  [199] = {.lex_state = 101, .external_lex_state = 1},
  [200] = {.lex_state = 101, .external_lex_state = 1},
  [201] = {.lex_state = 101, .external_lex_state = 1},
  [202] = {.lex_state = 101, .external_lex_state = 1},
  [203] = {.lex_state = 101, .external_lex_state = 1},
  [204] = {.lex_state = 101, .external_lex_state = 1},
  [205] = {.lex_state = 101, .external_lex_state = 1},
  [206] = {.lex_state = 101, .external_lex_state = 1},
  [207] = {.lex_state = 102, .external_lex_state = 5},
  [208] = {.lex_state = 102, .external_lex_state = 5},
  [209] = {.lex_state = 102, .external_lex_state = 5},
  [210] = {.lex_state = 102, .external_lex_state = 5},
  [211] = {.lex_state = 102, .external_lex_state = 5},
  [212] = {.lex_state = 102, .external_lex_state = 5},
  [213] = {.lex_state = 102, .external_lex_state = 5},
  [214] = {.lex_state = 102, .external_lex_state = 5},
  [215] = {.lex_state = 102, .external_lex_state = 5},
  [216] = {.lex_state = 102, .external_lex_state = 5},
  [217] = {.lex_state = 102, .external_lex_state = 5},
  [218] = {.lex_state = 102, .external_lex_state = 5},
  [219] = {.lex_state = 102, .external_lex_state = 5},
  [220] = {.lex_state = 102, .external_lex_state = 5},
  [221] = {.lex_state = 102, .external_lex_state = 5},
  [222] = {.lex_state = 102, .external_lex_state = 5},
  [223] = {.lex_state = 102, .external_lex_state = 5},
  [224] = {.lex_state = 102, .external_lex_state = 5},
  [225] = {.lex_state = 102, .external_lex_state = 5},
  [226] = {.lex_state = 102, .external_lex_state = 5},
  [227] = {.lex_state = 102, .external_lex_state = 5},
  [228] = {.lex_state = 102, .external_lex_state = 5},
  [229] = {.lex_state = 102, .external_lex_state = 5},
  [230] = {.lex_state = 102, .external_lex_state = 5},
  [231] = {.lex_state = 102, .external_lex_state = 5},
  [232] = {.lex_state = 102, .external_lex_state = 5},
  [233] = {.lex_state = 102, .external_lex_state = 5},
  [234] = {.lex_state = 102, .external_lex_state = 5},
  [235] = {.lex_state = 102, .external_lex_state = 5},
  [236] = {.lex_state = 102, .external_lex_state = 5},
  [237] = {.lex_state = 102, .external_lex_state = 5},
  [238] = {.lex_state = 102, .external_lex_state = 5},
  [239] = {.lex_state = 102, .external_lex_state = 5},
  [240] = {.lex_state = 102, .external_lex_state = 5},
  [241] = {.lex_state = 102, .external_lex_state = 5},
  [242] = {.lex_state = 102, .external_lex_state = 5},
  [243] = {.lex_state = 102, .external_lex_state = 5},
  [244] = {.lex_state = 102, .external_lex_state = 5},
  [245] = {.lex_state = 102, .external_lex_state = 5},
  [246] = {.lex_state = 102, .external_lex_state = 5},
  [247] = {.lex_state = 102, .external_lex_state = 5},
  [248] = {.lex_state = 102, .external_lex_state = 5},
  [249] = {.lex_state = 102, .external_lex_state = 5},
  [250] = {.lex_state = 102, .external_lex_state = 5},
  [251] = {.lex_state = 102, .external_lex_state = 5},
  [252] = {.lex_state = 102, .external_lex_state = 5},
  [253] = {.lex_state = 103, .external_lex_state = 3},
  [254] = {.lex_state = 103, .external_lex_state = 3},
  [255] = {.lex_state = 103, .external_lex_state = 3},
  [256] = {.lex_state = 103, .external_lex_state = 3},
  [257] = {.lex_state = 100, .external_lex_state = 2},
  [258] = {.lex_state = 100, .external_lex_state = 2},
  [259] = {.lex_state = 103, .external_lex_state = 3},
  [260] = {.lex_state = 100, .external_lex_state = 2},
  [261] = {.lex_state = 102, .external_lex_state = 6},
  [262] = {.lex_state = 102, .external_lex_state = 6},
  [263] = {.lex_state = 102, .external_lex_state = 6},
  [264] = {.lex_state = 102, .external_lex_state = 6},
  [265] = {.lex_state = 102, .external_lex_state = 6},
  [266] = {.lex_state = 102, .external_lex_state = 6},
  [267] = {.lex_state = 102, .external_lex_state = 6},
  [268] = {.lex_state = 102, .external_lex_state = 6},
  [269] = {.lex_state = 102, .external_lex_state = 6},
  [270] = {.lex_state = 102, .external_lex_state = 6},
  [271] = {.lex_state = 102, .external_lex_state = 6},
  [272] = {.lex_state = 102, .external_lex_state = 6},
  [273] = {.lex_state = 102, .external_lex_state = 6},
  [274] = {.lex_state = 102, .external_lex_state = 6},
  [275] = {.lex_state = 102, .external_lex_state = 6},
  [276] = {.lex_state = 102, .external_lex_state = 6},
  [277] = {.lex_state = 102, .external_lex_state = 6},
  [278] = {.lex_state = 102, .external_lex_state = 6},
  [279] = {.lex_state = 102, .external_lex_state = 6},
  [280] = {.lex_state = 102, .external_lex_state = 6},
  [281] = {.lex_state = 102, .external_lex_state = 6},
  [282] = {.lex_state = 102, .external_lex_state = 6},
  [283] = {.lex_state = 102, .external_lex_state = 6},
  [284] = {.lex_state = 102, .external_lex_state = 6},
  [285] = {.lex_state = 102, .external_lex_state = 6},
  [286] = {.lex_state = 102, .external_lex_state = 6},
  [287] = {.lex_state = 102, .external_lex_state = 6},
  [288] = {.lex_state = 102, .external_lex_state = 6},
  [289] = {.lex_state = 102, .external_lex_state = 6},
  [290] = {.lex_state = 102, .external_lex_state = 6},
  [291] = {.lex_state = 102, .external_lex_state = 6},
  [292] = {.lex_state = 102, .external_lex_state = 6},
  [293] = {.lex_state = 102, .external_lex_state = 6},
  [294] = {.lex_state = 102, .external_lex_state = 6},
  [295] = {.lex_state = 102, .external_lex_state = 6},
  [296] = {.lex_state = 102, .external_lex_state = 6},
  [297] = {.lex_state = 102, .external_lex_state = 6},
  [298] = {.lex_state = 102, .external_lex_state = 6},
  [299] = {.lex_state = 102, .external_lex_state = 6},
  [300] = {.lex_state = 102, .external_lex_state = 6},
  [301] = {.lex_state = 102, .external_lex_state = 6},
  [302] = {.lex_state = 102, .external_lex_state = 6},
  [303] = {.lex_state = 102, .external_lex_state = 6},
  [304] = {.lex_state = 102, .external_lex_state = 6},
  [305] = {.lex_state = 102, .external_lex_state = 6},
  [306] = {.lex_state = 102, .external_lex_state = 6},
  [307] = {.lex_state = 102, .external_lex_state = 6},
  [308] = {.lex_state = 102, .external_lex_state = 6},
  [309] = {.lex_state = 102, .external_lex_state = 6},
  [310] = {.lex_state = 102, .external_lex_state = 6},
  [311] = {.lex_state = 102, .external_lex_state = 6},
  [312] = {.lex_state = 102, .external_lex_state = 6},
  [313] = {.lex_state = 102, .external_lex_state = 6},
  [314] = {.lex_state = 102, .external_lex_state = 6},
  [315] = {.lex_state = 102, .external_lex_state = 6},
  [316] = {.lex_state = 102, .external_lex_state = 6},
  [317] = {.lex_state = 102, .external_lex_state = 6},
  [318] = {.lex_state = 78, .external_lex_state = 1},
  [319] = {.lex_state = 101, .external_lex_state = 2},
  [320] = {.lex_state = 101, .external_lex_state = 2},
  [321] = {.lex_state = 101, .external_lex_state = 2},
  [322] = {.lex_state = 78, .external_lex_state = 1},
  [323] = {.lex_state = 101, .external_lex_state = 2},
  [324] = {.lex_state = 101, .external_lex_state = 2},
  [325] = {.lex_state = 101, .external_lex_state = 2},
  [326] = {.lex_state = 101, .external_lex_state = 2},
  [327] = {.lex_state = 101, .external_lex_state = 2},
  [328] = {.lex_state = 101, .external_lex_state = 2},
  [329] = {.lex_state = 101, .external_lex_state = 2},
  [330] = {.lex_state = 101, .external_lex_state = 2},
  [331] = {.lex_state = 101, .external_lex_state = 2},
  [332] = {.lex_state = 101, .external_lex_state = 2},
  [333] = {.lex_state = 101, .external_lex_state = 2},
  [334] = {.lex_state = 101, .external_lex_state = 2},
  [335] = {.lex_state = 101, .external_lex_state = 2},
  [336] = {.lex_state = 101, .external_lex_state = 2},
  [337] = {.lex_state = 101, .external_lex_state = 2},
  [338] = {.lex_state = 101, .external_lex_state = 2},
  [339] = {.lex_state = 101, .external_lex_state = 2},
  [340] = {.lex_state = 101, .external_lex_state = 2},
  [341] = {.lex_state = 101, .external_lex_state = 2},
  [342] = {.lex_state = 101, .external_lex_state = 2},
  [343] = {.lex_state = 101, .external_lex_state = 2},
  [344] = {.lex_state = 101, .external_lex_state = 2},
  [345] = {.lex_state = 101, .external_lex_state = 2},
  [346] = {.lex_state = 101, .external_lex_state = 2},
  [347] = {.lex_state = 101, .external_lex_state = 2},
  [348] = {.lex_state = 101, .external_lex_state = 2},
  [349] = {.lex_state = 101, .external_lex_state = 2},
  [350] = {.lex_state = 101, .external_lex_state = 2},
  [351] = {.lex_state = 101, .external_lex_state = 2},
  [352] = {.lex_state = 101, .external_lex_state = 2},
  [353] = {.lex_state = 101, .external_lex_state = 2},
  [354] = {.lex_state = 101, .external_lex_state = 2},
  [355] = {.lex_state = 101, .external_lex_state = 2},
  [356] = {.lex_state = 101, .external_lex_state = 2},
  [357] = {.lex_state = 101, .external_lex_state = 2},
  [358] = {.lex_state = 101, .external_lex_state = 2},
  [359] = {.lex_state = 101, .external_lex_state = 2},
  [360] = {.lex_state = 101, .external_lex_state = 2},
  [361] = {.lex_state = 101, .external_lex_state = 2},
  [362] = {.lex_state = 101, .external_lex_state = 2},
  [363] = {.lex_state = 101, .external_lex_state = 2},
  [364] = {.lex_state = 101, .external_lex_state = 2},
  [365] = {.lex_state = 78, .external_lex_state = 1},
  [366] = {.lex_state = 78, .external_lex_state = 1},
  [367] = {.lex_state = 78, .external_lex_state = 1},
  [368] = {.lex_state = 78, .external_lex_state = 1},
  [369] = {.lex_state = 105, .external_lex_state = 3},
  [370] = {.lex_state = 105, .external_lex_state = 3},
  [371] = {.lex_state = 105, .external_lex_state = 3},
  [372] = {.lex_state = 99, .external_lex_state = 1},
  [373] = {.lex_state = 99, .external_lex_state = 1},
  [374] = {.lex_state = 99, .external_lex_state = 1},
  [375] = {.lex_state = 99, .external_lex_state = 1},
  [376] = {.lex_state = 99, .external_lex_state = 1},
  [377] = {.lex_state = 105, .external_lex_state = 3},
  [378] = {.lex_state = 100, .external_lex_state = 5},
  [379] = {.lex_state = 100, .external_lex_state = 5},
  [380] = {.lex_state = 105, .external_lex_state = 3},
  [381] = {.lex_state = 105, .external_lex_state = 3},
  [382] = {.lex_state = 105, .external_lex_state = 3},
  [383] = {.lex_state = 100, .external_lex_state = 5},
  [384] = {.lex_state = 99, .external_lex_state = 4},
  [385] = {.lex_state = 99, .external_lex_state = 1},
  [386] = {.lex_state = 99, .external_lex_state = 4},
  [387] = {.lex_state = 78, .external_lex_state = 3},
  [388] = {.lex_state = 78, .external_lex_state = 3},
  [389] = {.lex_state = 103, .external_lex_state = 3},
  [390] = {.lex_state = 99, .external_lex_state = 4},
  [391] = {.lex_state = 105, .external_lex_state = 3},
  [392] = {.lex_state = 99, .external_lex_state = 1},
  [393] = {.lex_state = 103, .external_lex_state = 3},
  [394] = {.lex_state = 99, .external_lex_state = 1},
  [395] = {.lex_state = 78, .external_lex_state = 3},
  [396] = {.lex_state = 99, .external_lex_state = 1},
  [397] = {.lex_state = 100, .external_lex_state = 5},
  [398] = {.lex_state = 105, .external_lex_state = 3},
  [399] = {.lex_state = 99, .external_lex_state = 1},
  [400] = {.lex_state = 99, .external_lex_state = 1},
  [401] = {.lex_state = 100, .external_lex_state = 5},
  [402] = {.lex_state = 103, .external_lex_state = 3},
  [403] = {.lex_state = 78, .external_lex_state = 3},
  [404] = {.lex_state = 100, .external_lex_state = 6},
  [405] = {.lex_state = 105, .external_lex_state = 3},
  [406] = {.lex_state = 100, .external_lex_state = 5},
  [407] = {.lex_state = 100, .external_lex_state = 5},
  [408] = {.lex_state = 99, .external_lex_state = 3},
  [409] = {.lex_state = 100, .external_lex_state = 5},
  [410] = {.lex_state = 103, .external_lex_state = 3},
  [411] = {.lex_state = 105, .external_lex_state = 3},
  [412] = {.lex_state = 103, .external_lex_state = 3},
  [413] = {.lex_state = 103, .external_lex_state = 3},
  [414] = {.lex_state = 100, .external_lex_state = 5},
  [415] = {.lex_state = 78, .external_lex_state = 3},
  [416] = {.lex_state = 99, .external_lex_state = 3},
  [417] = {.lex_state = 100, .external_lex_state = 6},
  [418] = {.lex_state = 103, .external_lex_state = 3},
  [419] = {.lex_state = 99, .external_lex_state = 3},
  [420] = {.lex_state = 100, .external_lex_state = 6},
  [421] = {.lex_state = 100, .external_lex_state = 6},
  [422] = {.lex_state = 100, .external_lex_state = 6},
  [423] = {.lex_state = 99, .external_lex_state = 4},
  [424] = {.lex_state = 100, .external_lex_state = 6},
  [425] = {.lex_state = 100, .external_lex_state = 6},
  [426] = {.lex_state = 99, .external_lex_state = 3},
  [427] = {.lex_state = 103, .external_lex_state = 2},
  [428] = {.lex_state = 99, .external_lex_state = 3},
  [429] = {.lex_state = 99, .external_lex_state = 3},
  [430] = {.lex_state = 99, .external_lex_state = 3},
  [431] = {.lex_state = 103, .external_lex_state = 2},
  [432] = {.lex_state = 99, .external_lex_state = 3},
  [433] = {.lex_state = 99, .external_lex_state = 3},
  [434] = {.lex_state = 100, .external_lex_state = 6},
  [435] = {.lex_state = 99, .external_lex_state = 3},
  [436] = {.lex_state = 21, .external_lex_state = 2},
  [437] = {.lex_state = 21, .external_lex_state = 2},
  [438] = {.lex_state = 99, .external_lex_state = 3},
  [439] = {.lex_state = 99, .external_lex_state = 3},
  [440] = {.lex_state = 99, .external_lex_state = 3},
  [441] = {.lex_state = 99, .external_lex_state = 3},
  [442] = {.lex_state = 99, .external_lex_state = 2},
  [443] = {.lex_state = 21, .external_lex_state = 2},
  [444] = {.lex_state = 99, .external_lex_state = 3},
  [445] = {.lex_state = 21, .external_lex_state = 2},
  [446] = {.lex_state = 99, .external_lex_state = 3},
  [447] = {.lex_state = 100, .external_lex_state = 6},
  [448] = {.lex_state = 99, .external_lex_state = 3},
  [449] = {.lex_state = 99, .external_lex_state = 3},
  [450] = {.lex_state = 99, .external_lex_state = 3},
  [451] = {.lex_state = 21, .external_lex_state = 2},
  [452] = {.lex_state = 21, .external_lex_state = 2},
  [453] = {.lex_state = 99, .external_lex_state = 3},
  [454] = {.lex_state = 21, .external_lex_state = 2},
  [455] = {.lex_state = 21, .external_lex_state = 2},
  [456] = {.lex_state = 99, .external_lex_state = 3},
  [457] = {.lex_state = 103, .external_lex_state = 2},
  [458] = {.lex_state = 100, .external_lex_state = 6},
  [459] = {.lex_state = 99, .external_lex_state = 3},
  [460] = {.lex_state = 23, .external_lex_state = 2},
  [461] = {.lex_state = 99, .external_lex_state = 3},
  [462] = {.lex_state = 99, .external_lex_state = 3},
  [463] = {.lex_state = 23, .external_lex_state = 2},
  [464] = {.lex_state = 21, .external_lex_state = 2},
  [465] = {.lex_state = 100, .external_lex_state = 6},
  [466] = {.lex_state = 99, .external_lex_state = 2},
  [467] = {.lex_state = 100, .external_lex_state = 6},
  [468] = {.lex_state = 99, .external_lex_state = 2},
  [469] = {.lex_state = 105, .external_lex_state = 2},
  [470] = {.lex_state = 21, .external_lex_state = 2},
  [471] = {.lex_state = 103, .external_lex_state = 2},
  [472] = {.lex_state = 99, .external_lex_state = 3},
  [473] = {.lex_state = 99, .external_lex_state = 2},
  [474] = {.lex_state = 99, .external_lex_state = 2},
  [475] = {.lex_state = 103, .external_lex_state = 2},
  [476] = {.lex_state = 99, .external_lex_state = 2},
  [477] = {.lex_state = 100, .external_lex_state = 6},
  [478] = {.lex_state = 100, .external_lex_state = 6},
  [479] = {.lex_state = 22, .external_lex_state = 2},
  [480] = {.lex_state = 99, .external_lex_state = 3},
  [481] = {.lex_state = 103, .external_lex_state = 2},
  [482] = {.lex_state = 22, .external_lex_state = 2},
  [483] = {.lex_state = 99, .external_lex_state = 3},
  [484] = {.lex_state = 99, .external_lex_state = 2},
  [485] = {.lex_state = 34, .external_lex_state = 2},
  [486] = {.lex_state = 103, .external_lex_state = 2},
  [487] = {.lex_state = 95, .external_lex_state = 2},
  [488] = {.lex_state = 34, .external_lex_state = 2},
  [489] = {.lex_state = 101, .external_lex_state = 2},
  [490] = {.lex_state = 34, .external_lex_state = 2},
  [491] = {.lex_state = 22, .external_lex_state = 2},
  [492] = {.lex_state = 34, .external_lex_state = 2},
  [493] = {.lex_state = 105, .external_lex_state = 2},
  [494] = {.lex_state = 99, .external_lex_state = 3},
  [495] = {.lex_state = 34, .external_lex_state = 2},
  [496] = {.lex_state = 95, .external_lex_state = 2},
  [497] = {.lex_state = 95, .external_lex_state = 2},
  [498] = {.lex_state = 99, .external_lex_state = 2},
  [499] = {.lex_state = 99, .external_lex_state = 2},
  [500] = {.lex_state = 99, .external_lex_state = 2},
  [501] = {.lex_state = 99, .external_lex_state = 2},
  [502] = {.lex_state = 99, .external_lex_state = 2},
  [503] = {.lex_state = 99, .external_lex_state = 2},
  [504] = {.lex_state = 99, .external_lex_state = 2},
  [505] = {.lex_state = 99, .external_lex_state = 2},
  [506] = {.lex_state = 99, .external_lex_state = 2},
  [507] = {.lex_state = 99, .external_lex_state = 2},
  [508] = {.lex_state = 99, .external_lex_state = 2},
  [509] = {.lex_state = 99, .external_lex_state = 2},
  [510] = {.lex_state = 22, .external_lex_state = 2},
  [511] = {.lex_state = 99, .external_lex_state = 2},
  [512] = {.lex_state = 95, .external_lex_state = 2},
  [513] = {.lex_state = 99, .external_lex_state = 2},
  [514] = {.lex_state = 99, .external_lex_state = 2},
  [515] = {.lex_state = 99, .external_lex_state = 2},
  [516] = {.lex_state = 99, .external_lex_state = 2},
  [517] = {.lex_state = 103, .external_lex_state = 2},
  [518] = {.lex_state = 99, .external_lex_state = 2},
  [519] = {.lex_state = 99, .external_lex_state = 2},
  [520] = {.lex_state = 99, .external_lex_state = 2},
  [521] = {.lex_state = 99, .external_lex_state = 2},
  [522] = {.lex_state = 99, .external_lex_state = 2},
  [523] = {.lex_state = 99, .external_lex_state = 2},
  [524] = {.lex_state = 99, .external_lex_state = 2},
  [525] = {.lex_state = 99, .external_lex_state = 2},
  [526] = {.lex_state = 100, .external_lex_state = 2},
  [527] = {.lex_state = 99, .external_lex_state = 2},
  [528] = {.lex_state = 101, .external_lex_state = 2},
  [529] = {.lex_state = 99, .external_lex_state = 2},
  [530] = {.lex_state = 22, .external_lex_state = 2},
  [531] = {.lex_state = 22, .external_lex_state = 2},
  [532] = {.lex_state = 99, .external_lex_state = 2},
  [533] = {.lex_state = 99, .external_lex_state = 2},
  [534] = {.lex_state = 99, .external_lex_state = 2},
  [535] = {.lex_state = 99, .external_lex_state = 2},
  [536] = {.lex_state = 99, .external_lex_state = 2},
  [537] = {.lex_state = 99, .external_lex_state = 2},
  [538] = {.lex_state = 22, .external_lex_state = 2},
  [539] = {.lex_state = 99, .external_lex_state = 2},
  [540] = {.lex_state = 99, .external_lex_state = 2},
  [541] = {.lex_state = 99, .external_lex_state = 2},
  [542] = {.lex_state = 99, .external_lex_state = 2},
  [543] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym__block_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym__line_comment_token1] = ACTIONS(1),
    [aux_sym__block_comment_token1] = ACTIONS(3),
    [aux_sym__immediate_block_comment_token1] = ACTIONS(1),
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
    [sym_program] = STATE(527),
    [sym__statement] = STATE(106),
    [sym__line_comment] = STATE(497),
    [sym__block_comment] = STATE(1),
    [sym_directive] = STATE(416),
    [sym__macro_directive] = STATE(444),
    [sym__numeric_directive] = STATE(450),
    [sym_numeric_mnemonic] = STATE(391),
    [sym__string_directive] = STATE(433),
    [sym_string_mnemonic] = STATE(469),
    [sym__control_directive] = STATE(439),
    [sym_control_mnemonic] = STATE(398),
    [sym_instruction] = STATE(416),
    [sym__label] = STATE(103),
    [aux_sym_program_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_CR] = ACTIONS(9),
    [anon_sym_LF] = ACTIONS(9),
    [aux_sym__line_comment_token1] = ACTIONS(11),
    [aux_sym__block_comment_token1] = ACTIONS(3),
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
    [sym__operator_space] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 44,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(164), 1,
      sym__assignment_expression,
    STATE(165), 1,
      sym__logical_or_expression,
    STATE(166), 1,
      sym__wrapped_logical_or_expression,
    STATE(167), 1,
      sym__logical_and_expression,
    STATE(168), 1,
      sym__wrapped_logical_and_expression,
    STATE(169), 1,
      sym__bitwise_or_expression,
    STATE(170), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(171), 1,
      sym__bitwise_xor_expression,
    STATE(172), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(173), 1,
      sym__bitwise_and_expression,
    STATE(174), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(175), 1,
      sym__equality_expression,
    STATE(176), 1,
      sym__wrapped_equality_expression,
    STATE(177), 1,
      sym__relational_expression,
    STATE(178), 1,
      sym__wrapped_relational_expression,
    STATE(179), 1,
      sym__shift_expression,
    STATE(181), 1,
      sym__additive_expression,
    STATE(182), 1,
      sym__wrapped_additive_expression,
    STATE(183), 1,
      sym__multiplicative_expression,
    STATE(184), 1,
      sym__wrapped_multiplicative_expression,
    STATE(185), 1,
      sym__simple_expression,
    STATE(206), 1,
      sym__wrapped_shift_expression,
    STATE(372), 1,
      sym__control_operand,
    STATE(376), 1,
      sym__wrapped_assignment_expression,
    STATE(449), 1,
      sym_control_operands,
    ACTIONS(37), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(43), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(394), 3,
      sym_section_type,
      sym_option_flag,
      sym_string,
    ACTIONS(25), 4,
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
    STATE(205), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [151] = 43,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(63), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    STATE(3), 1,
      sym__block_comment,
    STATE(207), 1,
      sym__bitwise_or_expression,
    STATE(209), 1,
      sym__multiplicative_expression,
    STATE(210), 1,
      sym__wrapped_multiplicative_expression,
    STATE(212), 1,
      sym__logical_or_expression,
    STATE(213), 1,
      sym__wrapped_logical_or_expression,
    STATE(214), 1,
      sym__logical_and_expression,
    STATE(215), 1,
      sym__wrapped_logical_and_expression,
    STATE(217), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(218), 1,
      sym__bitwise_xor_expression,
    STATE(219), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(220), 1,
      sym__equality_expression,
    STATE(221), 1,
      sym__wrapped_equality_expression,
    STATE(222), 1,
      sym__bitwise_and_expression,
    STATE(223), 1,
      sym__relational_expression,
    STATE(224), 1,
      sym__wrapped_relational_expression,
    STATE(225), 1,
      sym__simple_expression,
    STATE(226), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(227), 1,
      sym__assignment_expression,
    STATE(232), 1,
      sym__wrapped_shift_expression,
    STATE(238), 1,
      sym__additive_expression,
    STATE(239), 1,
      sym__wrapped_additive_expression,
    STATE(245), 1,
      sym__shift_expression,
    STATE(379), 1,
      sym__wrapped_assignment_expression,
    STATE(397), 1,
      sym__operand,
    STATE(407), 1,
      sym_string,
    STATE(435), 1,
      sym_operands,
    STATE(438), 1,
      sym__call_expression,
    ACTIONS(61), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(67), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(55), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(65), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(248), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [297] = 24,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      aux_sym__line_comment_token1,
    ACTIONS(13), 1,
      sym_macro_mnemonic,
    ACTIONS(19), 1,
      aux_sym_control_mnemonic_token1,
    ACTIONS(21), 1,
      sym_opcode,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym__block_comment,
    STATE(5), 1,
      aux_sym_program_repeat1,
    STATE(104), 1,
      sym__label,
    STATE(106), 1,
      sym__statement,
    STATE(391), 1,
      sym_numeric_mnemonic,
    STATE(398), 1,
      sym_control_mnemonic,
    STATE(433), 1,
      sym__string_directive,
    STATE(439), 1,
      sym__control_directive,
    STATE(444), 1,
      sym__macro_directive,
    STATE(450), 1,
      sym__numeric_directive,
    STATE(469), 1,
      sym_string_mnemonic,
    STATE(487), 1,
      sym__line_comment,
    STATE(408), 2,
      sym_directive,
      sym_instruction,
    ACTIONS(9), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [405] = 23,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(86), 1,
      aux_sym__line_comment_token1,
    ACTIONS(89), 1,
      sym_macro_mnemonic,
    ACTIONS(98), 1,
      aux_sym_control_mnemonic_token1,
    ACTIONS(101), 1,
      sym_opcode,
    STATE(106), 1,
      sym__statement,
    STATE(110), 1,
      sym__label,
    STATE(391), 1,
      sym_numeric_mnemonic,
    STATE(398), 1,
      sym_control_mnemonic,
    STATE(433), 1,
      sym__string_directive,
    STATE(439), 1,
      sym__control_directive,
    STATE(444), 1,
      sym__macro_directive,
    STATE(450), 1,
      sym__numeric_directive,
    STATE(469), 1,
      sym_string_mnemonic,
    STATE(512), 1,
      sym__line_comment,
    STATE(5), 2,
      sym__block_comment,
      aux_sym_program_repeat1,
    STATE(419), 2,
      sym_directive,
      sym_instruction,
    ACTIONS(83), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
    ACTIONS(104), 4,
      sym_local_label,
      sym_global_label,
      sym_global_numeric_label,
      sym_local_numeric_label,
    ACTIONS(95), 5,
      anon_sym_DOTasciz,
      anon_sym_DOTascii,
      anon_sym_DOTasciiz,
      anon_sym_DOTstring,
      anon_sym_DOTstringz,
    ACTIONS(92), 26,
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
  [511] = 41,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(63), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym__block_comment,
    STATE(207), 1,
      sym__bitwise_or_expression,
    STATE(209), 1,
      sym__multiplicative_expression,
    STATE(210), 1,
      sym__wrapped_multiplicative_expression,
    STATE(212), 1,
      sym__logical_or_expression,
    STATE(213), 1,
      sym__wrapped_logical_or_expression,
    STATE(214), 1,
      sym__logical_and_expression,
    STATE(215), 1,
      sym__wrapped_logical_and_expression,
    STATE(217), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(218), 1,
      sym__bitwise_xor_expression,
    STATE(219), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(220), 1,
      sym__equality_expression,
    STATE(221), 1,
      sym__wrapped_equality_expression,
    STATE(222), 1,
      sym__bitwise_and_expression,
    STATE(223), 1,
      sym__relational_expression,
    STATE(224), 1,
      sym__wrapped_relational_expression,
    STATE(225), 1,
      sym__simple_expression,
    STATE(226), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(227), 1,
      sym__assignment_expression,
    STATE(232), 1,
      sym__wrapped_shift_expression,
    STATE(238), 1,
      sym__additive_expression,
    STATE(239), 1,
      sym__wrapped_additive_expression,
    STATE(245), 1,
      sym__shift_expression,
    STATE(379), 1,
      sym__wrapped_assignment_expression,
    STATE(406), 1,
      sym__operand,
    STATE(407), 1,
      sym_string,
    ACTIONS(61), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(67), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(107), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(65), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(248), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [651] = 41,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(63), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym__block_comment,
    STATE(207), 1,
      sym__bitwise_or_expression,
    STATE(209), 1,
      sym__multiplicative_expression,
    STATE(210), 1,
      sym__wrapped_multiplicative_expression,
    STATE(212), 1,
      sym__logical_or_expression,
    STATE(213), 1,
      sym__wrapped_logical_or_expression,
    STATE(214), 1,
      sym__logical_and_expression,
    STATE(215), 1,
      sym__wrapped_logical_and_expression,
    STATE(217), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(218), 1,
      sym__bitwise_xor_expression,
    STATE(219), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(220), 1,
      sym__equality_expression,
    STATE(221), 1,
      sym__wrapped_equality_expression,
    STATE(222), 1,
      sym__bitwise_and_expression,
    STATE(223), 1,
      sym__relational_expression,
    STATE(224), 1,
      sym__wrapped_relational_expression,
    STATE(225), 1,
      sym__simple_expression,
    STATE(226), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(227), 1,
      sym__assignment_expression,
    STATE(232), 1,
      sym__wrapped_shift_expression,
    STATE(238), 1,
      sym__additive_expression,
    STATE(239), 1,
      sym__wrapped_additive_expression,
    STATE(245), 1,
      sym__shift_expression,
    STATE(379), 1,
      sym__wrapped_assignment_expression,
    STATE(406), 1,
      sym__operand,
    STATE(407), 1,
      sym_string,
    ACTIONS(61), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(67), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(111), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(65), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(248), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [791] = 42,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(164), 1,
      sym__assignment_expression,
    STATE(165), 1,
      sym__logical_or_expression,
    STATE(166), 1,
      sym__wrapped_logical_or_expression,
    STATE(167), 1,
      sym__logical_and_expression,
    STATE(168), 1,
      sym__wrapped_logical_and_expression,
    STATE(169), 1,
      sym__bitwise_or_expression,
    STATE(170), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(171), 1,
      sym__bitwise_xor_expression,
    STATE(172), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(173), 1,
      sym__bitwise_and_expression,
    STATE(174), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(175), 1,
      sym__equality_expression,
    STATE(176), 1,
      sym__wrapped_equality_expression,
    STATE(177), 1,
      sym__relational_expression,
    STATE(178), 1,
      sym__wrapped_relational_expression,
    STATE(179), 1,
      sym__shift_expression,
    STATE(181), 1,
      sym__additive_expression,
    STATE(182), 1,
      sym__wrapped_additive_expression,
    STATE(183), 1,
      sym__multiplicative_expression,
    STATE(184), 1,
      sym__wrapped_multiplicative_expression,
    STATE(185), 1,
      sym__simple_expression,
    STATE(206), 1,
      sym__wrapped_shift_expression,
    STATE(376), 1,
      sym__wrapped_assignment_expression,
    STATE(396), 1,
      sym__control_operand,
    ACTIONS(37), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(43), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(394), 3,
      sym_section_type,
      sym_option_flag,
      sym_string,
    ACTIONS(41), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(205), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [933] = 44,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(9), 1,
      sym__block_comment,
    STATE(269), 1,
      sym__assignment_expression,
    STATE(270), 1,
      sym__logical_or_expression,
    STATE(271), 1,
      sym__wrapped_logical_or_expression,
    STATE(272), 1,
      sym__logical_and_expression,
    STATE(273), 1,
      sym__wrapped_logical_and_expression,
    STATE(274), 1,
      sym__bitwise_or_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(276), 1,
      sym__bitwise_xor_expression,
    STATE(277), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(278), 1,
      sym__bitwise_and_expression,
    STATE(279), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(280), 1,
      sym__equality_expression,
    STATE(281), 1,
      sym__wrapped_equality_expression,
    STATE(282), 1,
      sym__relational_expression,
    STATE(283), 1,
      sym__wrapped_relational_expression,
    STATE(284), 1,
      sym__shift_expression,
    STATE(285), 1,
      sym__wrapped_shift_expression,
    STATE(286), 1,
      sym__additive_expression,
    STATE(287), 1,
      sym__wrapped_additive_expression,
    STATE(288), 1,
      sym__multiplicative_expression,
    STATE(289), 1,
      sym__wrapped_multiplicative_expression,
    STATE(290), 1,
      sym__simple_expression,
    STATE(292), 1,
      sym_symbol,
    STATE(417), 1,
      sym__wrapped_assignment_expression,
    STATE(434), 1,
      sym__operand,
    STATE(465), 1,
      sym_string,
    STATE(521), 1,
      sym_operands,
    ACTIONS(119), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(125), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(133), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(123), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(294), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1077] = 39,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      sym_unary_minus_operator,
    ACTIONS(147), 1,
      sym_relocation_type,
    ACTIONS(153), 1,
      aux_sym_decimal_token1,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(10), 1,
      sym__block_comment,
    STATE(112), 1,
      sym__additive_expression,
    STATE(119), 1,
      sym__assignment_expression,
    STATE(120), 1,
      sym__logical_or_expression,
    STATE(121), 1,
      sym__wrapped_logical_or_expression,
    STATE(122), 1,
      sym__logical_and_expression,
    STATE(123), 1,
      sym__wrapped_logical_and_expression,
    STATE(124), 1,
      sym__bitwise_or_expression,
    STATE(125), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(126), 1,
      sym__bitwise_xor_expression,
    STATE(127), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(128), 1,
      sym__bitwise_and_expression,
    STATE(129), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(130), 1,
      sym__equality_expression,
    STATE(131), 1,
      sym__wrapped_equality_expression,
    STATE(133), 1,
      sym__wrapped_relational_expression,
    STATE(134), 1,
      sym__shift_expression,
    STATE(135), 1,
      sym__wrapped_shift_expression,
    STATE(136), 1,
      sym__wrapped_additive_expression,
    STATE(137), 1,
      sym__multiplicative_expression,
    STATE(138), 1,
      sym__wrapped_multiplicative_expression,
    STATE(139), 1,
      sym__simple_expression,
    STATE(159), 1,
      sym__relational_expression,
    STATE(318), 1,
      sym__wrapped_assignment_expression,
    STATE(441), 1,
      sym_numeric_operands,
    ACTIONS(145), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(151), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(139), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(149), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(115), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1211] = 42,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(11), 1,
      sym__block_comment,
    STATE(269), 1,
      sym__assignment_expression,
    STATE(270), 1,
      sym__logical_or_expression,
    STATE(271), 1,
      sym__wrapped_logical_or_expression,
    STATE(272), 1,
      sym__logical_and_expression,
    STATE(273), 1,
      sym__wrapped_logical_and_expression,
    STATE(274), 1,
      sym__bitwise_or_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(276), 1,
      sym__bitwise_xor_expression,
    STATE(277), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(278), 1,
      sym__bitwise_and_expression,
    STATE(279), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(280), 1,
      sym__equality_expression,
    STATE(281), 1,
      sym__wrapped_equality_expression,
    STATE(282), 1,
      sym__relational_expression,
    STATE(283), 1,
      sym__wrapped_relational_expression,
    STATE(284), 1,
      sym__shift_expression,
    STATE(285), 1,
      sym__wrapped_shift_expression,
    STATE(286), 1,
      sym__additive_expression,
    STATE(287), 1,
      sym__wrapped_additive_expression,
    STATE(288), 1,
      sym__multiplicative_expression,
    STATE(289), 1,
      sym__wrapped_multiplicative_expression,
    STATE(290), 1,
      sym__simple_expression,
    STATE(424), 1,
      sym__wrapped_assignment_expression,
    STATE(434), 1,
      sym__operand,
    STATE(465), 1,
      sym_string,
    STATE(505), 1,
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
    STATE(294), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1351] = 38,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      sym_unary_minus_operator,
    ACTIONS(147), 1,
      sym_relocation_type,
    ACTIONS(153), 1,
      aux_sym_decimal_token1,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(12), 1,
      sym__block_comment,
    STATE(112), 1,
      sym__additive_expression,
    STATE(119), 1,
      sym__assignment_expression,
    STATE(120), 1,
      sym__logical_or_expression,
    STATE(121), 1,
      sym__wrapped_logical_or_expression,
    STATE(122), 1,
      sym__logical_and_expression,
    STATE(123), 1,
      sym__wrapped_logical_and_expression,
    STATE(124), 1,
      sym__bitwise_or_expression,
    STATE(125), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(126), 1,
      sym__bitwise_xor_expression,
    STATE(127), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(128), 1,
      sym__bitwise_and_expression,
    STATE(129), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(130), 1,
      sym__equality_expression,
    STATE(131), 1,
      sym__wrapped_equality_expression,
    STATE(133), 1,
      sym__wrapped_relational_expression,
    STATE(134), 1,
      sym__shift_expression,
    STATE(135), 1,
      sym__wrapped_shift_expression,
    STATE(136), 1,
      sym__wrapped_additive_expression,
    STATE(137), 1,
      sym__multiplicative_expression,
    STATE(138), 1,
      sym__wrapped_multiplicative_expression,
    STATE(139), 1,
      sym__simple_expression,
    STATE(159), 1,
      sym__relational_expression,
    STATE(368), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(145), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(151), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(149), 5,
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
    STATE(115), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1483] = 43,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(13), 1,
      sym__block_comment,
    STATE(261), 1,
      sym_symbol,
    STATE(269), 1,
      sym__assignment_expression,
    STATE(270), 1,
      sym__logical_or_expression,
    STATE(271), 1,
      sym__wrapped_logical_or_expression,
    STATE(272), 1,
      sym__logical_and_expression,
    STATE(273), 1,
      sym__wrapped_logical_and_expression,
    STATE(274), 1,
      sym__bitwise_or_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(276), 1,
      sym__bitwise_xor_expression,
    STATE(277), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(278), 1,
      sym__bitwise_and_expression,
    STATE(279), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(280), 1,
      sym__equality_expression,
    STATE(281), 1,
      sym__wrapped_equality_expression,
    STATE(282), 1,
      sym__relational_expression,
    STATE(283), 1,
      sym__wrapped_relational_expression,
    STATE(284), 1,
      sym__shift_expression,
    STATE(285), 1,
      sym__wrapped_shift_expression,
    STATE(286), 1,
      sym__additive_expression,
    STATE(287), 1,
      sym__wrapped_additive_expression,
    STATE(288), 1,
      sym__multiplicative_expression,
    STATE(289), 1,
      sym__wrapped_multiplicative_expression,
    STATE(290), 1,
      sym__simple_expression,
    STATE(424), 1,
      sym__wrapped_assignment_expression,
    STATE(434), 1,
      sym__operand,
    STATE(465), 1,
      sym_string,
    STATE(515), 1,
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
    STATE(294), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1624] = 43,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(14), 1,
      sym__block_comment,
    STATE(269), 1,
      sym__assignment_expression,
    STATE(270), 1,
      sym__logical_or_expression,
    STATE(271), 1,
      sym__wrapped_logical_or_expression,
    STATE(272), 1,
      sym__logical_and_expression,
    STATE(273), 1,
      sym__wrapped_logical_and_expression,
    STATE(274), 1,
      sym__bitwise_or_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(276), 1,
      sym__bitwise_xor_expression,
    STATE(277), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(278), 1,
      sym__bitwise_and_expression,
    STATE(279), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(280), 1,
      sym__equality_expression,
    STATE(281), 1,
      sym__wrapped_equality_expression,
    STATE(282), 1,
      sym__relational_expression,
    STATE(283), 1,
      sym__wrapped_relational_expression,
    STATE(284), 1,
      sym__shift_expression,
    STATE(285), 1,
      sym__wrapped_shift_expression,
    STATE(286), 1,
      sym__additive_expression,
    STATE(287), 1,
      sym__wrapped_additive_expression,
    STATE(288), 1,
      sym__multiplicative_expression,
    STATE(289), 1,
      sym__wrapped_multiplicative_expression,
    STATE(290), 1,
      sym__simple_expression,
    STATE(309), 1,
      sym_symbol,
    STATE(421), 1,
      sym__wrapped_assignment_expression,
    STATE(434), 1,
      sym__operand,
    STATE(465), 1,
      sym_string,
    STATE(540), 1,
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
    STATE(294), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1765] = 43,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(15), 1,
      sym__block_comment,
    STATE(262), 1,
      sym_symbol,
    STATE(269), 1,
      sym__assignment_expression,
    STATE(270), 1,
      sym__logical_or_expression,
    STATE(271), 1,
      sym__wrapped_logical_or_expression,
    STATE(272), 1,
      sym__logical_and_expression,
    STATE(273), 1,
      sym__wrapped_logical_and_expression,
    STATE(274), 1,
      sym__bitwise_or_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(276), 1,
      sym__bitwise_xor_expression,
    STATE(277), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(278), 1,
      sym__bitwise_and_expression,
    STATE(279), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(280), 1,
      sym__equality_expression,
    STATE(281), 1,
      sym__wrapped_equality_expression,
    STATE(282), 1,
      sym__relational_expression,
    STATE(283), 1,
      sym__wrapped_relational_expression,
    STATE(284), 1,
      sym__shift_expression,
    STATE(285), 1,
      sym__wrapped_shift_expression,
    STATE(286), 1,
      sym__additive_expression,
    STATE(287), 1,
      sym__wrapped_additive_expression,
    STATE(288), 1,
      sym__multiplicative_expression,
    STATE(289), 1,
      sym__wrapped_multiplicative_expression,
    STATE(290), 1,
      sym__simple_expression,
    STATE(424), 1,
      sym__wrapped_assignment_expression,
    STATE(434), 1,
      sym__operand,
    STATE(465), 1,
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
    STATE(294), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1906] = 43,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(16), 1,
      sym__block_comment,
    STATE(269), 1,
      sym__assignment_expression,
    STATE(270), 1,
      sym__logical_or_expression,
    STATE(271), 1,
      sym__wrapped_logical_or_expression,
    STATE(272), 1,
      sym__logical_and_expression,
    STATE(273), 1,
      sym__wrapped_logical_and_expression,
    STATE(274), 1,
      sym__bitwise_or_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(276), 1,
      sym__bitwise_xor_expression,
    STATE(277), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(278), 1,
      sym__bitwise_and_expression,
    STATE(279), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(280), 1,
      sym__equality_expression,
    STATE(281), 1,
      sym__wrapped_equality_expression,
    STATE(282), 1,
      sym__relational_expression,
    STATE(283), 1,
      sym__wrapped_relational_expression,
    STATE(284), 1,
      sym__shift_expression,
    STATE(285), 1,
      sym__wrapped_shift_expression,
    STATE(286), 1,
      sym__additive_expression,
    STATE(287), 1,
      sym__wrapped_additive_expression,
    STATE(288), 1,
      sym__multiplicative_expression,
    STATE(289), 1,
      sym__wrapped_multiplicative_expression,
    STATE(290), 1,
      sym__simple_expression,
    STATE(310), 1,
      sym_symbol,
    STATE(424), 1,
      sym__wrapped_assignment_expression,
    STATE(434), 1,
      sym__operand,
    STATE(465), 1,
      sym_string,
    STATE(519), 1,
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
    STATE(294), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2047] = 41,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(17), 1,
      sym__block_comment,
    STATE(269), 1,
      sym__assignment_expression,
    STATE(270), 1,
      sym__logical_or_expression,
    STATE(271), 1,
      sym__wrapped_logical_or_expression,
    STATE(272), 1,
      sym__logical_and_expression,
    STATE(273), 1,
      sym__wrapped_logical_and_expression,
    STATE(274), 1,
      sym__bitwise_or_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(276), 1,
      sym__bitwise_xor_expression,
    STATE(277), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(278), 1,
      sym__bitwise_and_expression,
    STATE(279), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(280), 1,
      sym__equality_expression,
    STATE(281), 1,
      sym__wrapped_equality_expression,
    STATE(282), 1,
      sym__relational_expression,
    STATE(283), 1,
      sym__wrapped_relational_expression,
    STATE(284), 1,
      sym__shift_expression,
    STATE(285), 1,
      sym__wrapped_shift_expression,
    STATE(286), 1,
      sym__additive_expression,
    STATE(287), 1,
      sym__wrapped_additive_expression,
    STATE(288), 1,
      sym__multiplicative_expression,
    STATE(289), 1,
      sym__wrapped_multiplicative_expression,
    STATE(290), 1,
      sym__simple_expression,
    STATE(424), 1,
      sym__wrapped_assignment_expression,
    STATE(465), 1,
      sym_string,
    STATE(478), 1,
      sym__operand,
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
    STATE(294), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [2184] = 41,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(18), 1,
      sym__block_comment,
    STATE(269), 1,
      sym__assignment_expression,
    STATE(270), 1,
      sym__logical_or_expression,
    STATE(271), 1,
      sym__wrapped_logical_or_expression,
    STATE(272), 1,
      sym__logical_and_expression,
    STATE(273), 1,
      sym__wrapped_logical_and_expression,
    STATE(274), 1,
      sym__bitwise_or_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(276), 1,
      sym__bitwise_xor_expression,
    STATE(277), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(278), 1,
      sym__bitwise_and_expression,
    STATE(279), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(280), 1,
      sym__equality_expression,
    STATE(281), 1,
      sym__wrapped_equality_expression,
    STATE(282), 1,
      sym__relational_expression,
    STATE(283), 1,
      sym__wrapped_relational_expression,
    STATE(284), 1,
      sym__shift_expression,
    STATE(285), 1,
      sym__wrapped_shift_expression,
    STATE(286), 1,
      sym__additive_expression,
    STATE(287), 1,
      sym__wrapped_additive_expression,
    STATE(288), 1,
      sym__multiplicative_expression,
    STATE(289), 1,
      sym__wrapped_multiplicative_expression,
    STATE(290), 1,
      sym__simple_expression,
    STATE(424), 1,
      sym__wrapped_assignment_expression,
    STATE(465), 1,
      sym_string,
    STATE(478), 1,
      sym__operand,
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
    STATE(294), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [2321] = 43,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(19), 1,
      sym__block_comment,
    STATE(269), 1,
      sym__assignment_expression,
    STATE(270), 1,
      sym__logical_or_expression,
    STATE(271), 1,
      sym__wrapped_logical_or_expression,
    STATE(272), 1,
      sym__logical_and_expression,
    STATE(273), 1,
      sym__wrapped_logical_and_expression,
    STATE(274), 1,
      sym__bitwise_or_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(276), 1,
      sym__bitwise_xor_expression,
    STATE(277), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(278), 1,
      sym__bitwise_and_expression,
    STATE(279), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(280), 1,
      sym__equality_expression,
    STATE(281), 1,
      sym__wrapped_equality_expression,
    STATE(282), 1,
      sym__relational_expression,
    STATE(283), 1,
      sym__wrapped_relational_expression,
    STATE(284), 1,
      sym__shift_expression,
    STATE(285), 1,
      sym__wrapped_shift_expression,
    STATE(286), 1,
      sym__additive_expression,
    STATE(287), 1,
      sym__wrapped_additive_expression,
    STATE(288), 1,
      sym__multiplicative_expression,
    STATE(289), 1,
      sym__wrapped_multiplicative_expression,
    STATE(290), 1,
      sym__simple_expression,
    STATE(311), 1,
      sym_symbol,
    STATE(422), 1,
      sym__wrapped_assignment_expression,
    STATE(434), 1,
      sym__operand,
    STATE(465), 1,
      sym_string,
    STATE(520), 1,
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
    STATE(294), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2462] = 43,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(20), 1,
      sym__block_comment,
    STATE(269), 1,
      sym__assignment_expression,
    STATE(270), 1,
      sym__logical_or_expression,
    STATE(271), 1,
      sym__wrapped_logical_or_expression,
    STATE(272), 1,
      sym__logical_and_expression,
    STATE(273), 1,
      sym__wrapped_logical_and_expression,
    STATE(274), 1,
      sym__bitwise_or_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(276), 1,
      sym__bitwise_xor_expression,
    STATE(277), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(278), 1,
      sym__bitwise_and_expression,
    STATE(279), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(280), 1,
      sym__equality_expression,
    STATE(281), 1,
      sym__wrapped_equality_expression,
    STATE(282), 1,
      sym__relational_expression,
    STATE(283), 1,
      sym__wrapped_relational_expression,
    STATE(284), 1,
      sym__shift_expression,
    STATE(285), 1,
      sym__wrapped_shift_expression,
    STATE(286), 1,
      sym__additive_expression,
    STATE(287), 1,
      sym__wrapped_additive_expression,
    STATE(288), 1,
      sym__multiplicative_expression,
    STATE(289), 1,
      sym__wrapped_multiplicative_expression,
    STATE(290), 1,
      sym__simple_expression,
    STATE(312), 1,
      sym_symbol,
    STATE(424), 1,
      sym__wrapped_assignment_expression,
    STATE(434), 1,
      sym__operand,
    STATE(465), 1,
      sym_string,
    STATE(525), 1,
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
    STATE(294), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2603] = 43,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(21), 1,
      sym__block_comment,
    STATE(269), 1,
      sym__assignment_expression,
    STATE(270), 1,
      sym__logical_or_expression,
    STATE(271), 1,
      sym__wrapped_logical_or_expression,
    STATE(272), 1,
      sym__logical_and_expression,
    STATE(273), 1,
      sym__wrapped_logical_and_expression,
    STATE(274), 1,
      sym__bitwise_or_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(276), 1,
      sym__bitwise_xor_expression,
    STATE(277), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(278), 1,
      sym__bitwise_and_expression,
    STATE(279), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(280), 1,
      sym__equality_expression,
    STATE(281), 1,
      sym__wrapped_equality_expression,
    STATE(282), 1,
      sym__relational_expression,
    STATE(283), 1,
      sym__wrapped_relational_expression,
    STATE(284), 1,
      sym__shift_expression,
    STATE(285), 1,
      sym__wrapped_shift_expression,
    STATE(286), 1,
      sym__additive_expression,
    STATE(287), 1,
      sym__wrapped_additive_expression,
    STATE(288), 1,
      sym__multiplicative_expression,
    STATE(289), 1,
      sym__wrapped_multiplicative_expression,
    STATE(290), 1,
      sym__simple_expression,
    STATE(313), 1,
      sym_symbol,
    STATE(425), 1,
      sym__wrapped_assignment_expression,
    STATE(434), 1,
      sym__operand,
    STATE(465), 1,
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
    STATE(294), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2744] = 43,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(22), 1,
      sym__block_comment,
    STATE(269), 1,
      sym__assignment_expression,
    STATE(270), 1,
      sym__logical_or_expression,
    STATE(271), 1,
      sym__wrapped_logical_or_expression,
    STATE(272), 1,
      sym__logical_and_expression,
    STATE(273), 1,
      sym__wrapped_logical_and_expression,
    STATE(274), 1,
      sym__bitwise_or_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(276), 1,
      sym__bitwise_xor_expression,
    STATE(277), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(278), 1,
      sym__bitwise_and_expression,
    STATE(279), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(280), 1,
      sym__equality_expression,
    STATE(281), 1,
      sym__wrapped_equality_expression,
    STATE(282), 1,
      sym__relational_expression,
    STATE(283), 1,
      sym__wrapped_relational_expression,
    STATE(284), 1,
      sym__shift_expression,
    STATE(285), 1,
      sym__wrapped_shift_expression,
    STATE(286), 1,
      sym__additive_expression,
    STATE(287), 1,
      sym__wrapped_additive_expression,
    STATE(288), 1,
      sym__multiplicative_expression,
    STATE(289), 1,
      sym__wrapped_multiplicative_expression,
    STATE(290), 1,
      sym__simple_expression,
    STATE(315), 1,
      sym_symbol,
    STATE(420), 1,
      sym__wrapped_assignment_expression,
    STATE(434), 1,
      sym__operand,
    STATE(465), 1,
      sym_string,
    STATE(536), 1,
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
    STATE(294), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2885] = 43,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(23), 1,
      sym__block_comment,
    STATE(269), 1,
      sym__assignment_expression,
    STATE(270), 1,
      sym__logical_or_expression,
    STATE(271), 1,
      sym__wrapped_logical_or_expression,
    STATE(272), 1,
      sym__logical_and_expression,
    STATE(273), 1,
      sym__wrapped_logical_and_expression,
    STATE(274), 1,
      sym__bitwise_or_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(276), 1,
      sym__bitwise_xor_expression,
    STATE(277), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(278), 1,
      sym__bitwise_and_expression,
    STATE(279), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(280), 1,
      sym__equality_expression,
    STATE(281), 1,
      sym__wrapped_equality_expression,
    STATE(282), 1,
      sym__relational_expression,
    STATE(283), 1,
      sym__wrapped_relational_expression,
    STATE(284), 1,
      sym__shift_expression,
    STATE(285), 1,
      sym__wrapped_shift_expression,
    STATE(286), 1,
      sym__additive_expression,
    STATE(287), 1,
      sym__wrapped_additive_expression,
    STATE(288), 1,
      sym__multiplicative_expression,
    STATE(289), 1,
      sym__wrapped_multiplicative_expression,
    STATE(290), 1,
      sym__simple_expression,
    STATE(292), 1,
      sym_symbol,
    STATE(417), 1,
      sym__wrapped_assignment_expression,
    STATE(434), 1,
      sym__operand,
    STATE(465), 1,
      sym_string,
    STATE(508), 1,
      sym_operands,
    ACTIONS(119), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(125), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(133), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(123), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(294), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3026] = 43,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(24), 1,
      sym__block_comment,
    STATE(269), 1,
      sym__assignment_expression,
    STATE(270), 1,
      sym__logical_or_expression,
    STATE(271), 1,
      sym__wrapped_logical_or_expression,
    STATE(272), 1,
      sym__logical_and_expression,
    STATE(273), 1,
      sym__wrapped_logical_and_expression,
    STATE(274), 1,
      sym__bitwise_or_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(276), 1,
      sym__bitwise_xor_expression,
    STATE(277), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(278), 1,
      sym__bitwise_and_expression,
    STATE(279), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(280), 1,
      sym__equality_expression,
    STATE(281), 1,
      sym__wrapped_equality_expression,
    STATE(282), 1,
      sym__relational_expression,
    STATE(283), 1,
      sym__wrapped_relational_expression,
    STATE(284), 1,
      sym__shift_expression,
    STATE(285), 1,
      sym__wrapped_shift_expression,
    STATE(286), 1,
      sym__additive_expression,
    STATE(287), 1,
      sym__wrapped_additive_expression,
    STATE(288), 1,
      sym__multiplicative_expression,
    STATE(289), 1,
      sym__wrapped_multiplicative_expression,
    STATE(290), 1,
      sym__simple_expression,
    STATE(314), 1,
      sym_symbol,
    STATE(424), 1,
      sym__wrapped_assignment_expression,
    STATE(434), 1,
      sym__operand,
    STATE(465), 1,
      sym_string,
    STATE(541), 1,
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
    STATE(294), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3167] = 43,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(25), 1,
      sym__block_comment,
    STATE(269), 1,
      sym__assignment_expression,
    STATE(270), 1,
      sym__logical_or_expression,
    STATE(271), 1,
      sym__wrapped_logical_or_expression,
    STATE(272), 1,
      sym__logical_and_expression,
    STATE(273), 1,
      sym__wrapped_logical_and_expression,
    STATE(274), 1,
      sym__bitwise_or_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(276), 1,
      sym__bitwise_xor_expression,
    STATE(277), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(278), 1,
      sym__bitwise_and_expression,
    STATE(279), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(280), 1,
      sym__equality_expression,
    STATE(281), 1,
      sym__wrapped_equality_expression,
    STATE(282), 1,
      sym__relational_expression,
    STATE(283), 1,
      sym__wrapped_relational_expression,
    STATE(284), 1,
      sym__shift_expression,
    STATE(285), 1,
      sym__wrapped_shift_expression,
    STATE(286), 1,
      sym__additive_expression,
    STATE(287), 1,
      sym__wrapped_additive_expression,
    STATE(288), 1,
      sym__multiplicative_expression,
    STATE(289), 1,
      sym__wrapped_multiplicative_expression,
    STATE(290), 1,
      sym__simple_expression,
    STATE(316), 1,
      sym_symbol,
    STATE(424), 1,
      sym__wrapped_assignment_expression,
    STATE(434), 1,
      sym__operand,
    STATE(465), 1,
      sym_string,
    STATE(511), 1,
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
    STATE(294), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3308] = 43,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(26), 1,
      sym__block_comment,
    STATE(269), 1,
      sym__assignment_expression,
    STATE(270), 1,
      sym__logical_or_expression,
    STATE(271), 1,
      sym__wrapped_logical_or_expression,
    STATE(272), 1,
      sym__logical_and_expression,
    STATE(273), 1,
      sym__wrapped_logical_and_expression,
    STATE(274), 1,
      sym__bitwise_or_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(276), 1,
      sym__bitwise_xor_expression,
    STATE(277), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(278), 1,
      sym__bitwise_and_expression,
    STATE(279), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(280), 1,
      sym__equality_expression,
    STATE(281), 1,
      sym__wrapped_equality_expression,
    STATE(282), 1,
      sym__relational_expression,
    STATE(283), 1,
      sym__wrapped_relational_expression,
    STATE(284), 1,
      sym__shift_expression,
    STATE(285), 1,
      sym__wrapped_shift_expression,
    STATE(286), 1,
      sym__additive_expression,
    STATE(287), 1,
      sym__wrapped_additive_expression,
    STATE(288), 1,
      sym__multiplicative_expression,
    STATE(289), 1,
      sym__wrapped_multiplicative_expression,
    STATE(290), 1,
      sym__simple_expression,
    STATE(317), 1,
      sym_symbol,
    STATE(425), 1,
      sym__wrapped_assignment_expression,
    STATE(434), 1,
      sym__operand,
    STATE(465), 1,
      sym_string,
    STATE(513), 1,
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
    STATE(294), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3449] = 42,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(254), 1,
      sym_address,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(342), 1,
      sym__wrapped_additive_expression,
    STATE(345), 1,
      sym__multiplicative_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(354), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(356), 1,
      sym__bitwise_and_expression,
    STATE(357), 1,
      sym__simple_expression,
    STATE(358), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(359), 1,
      sym__equality_expression,
    STATE(360), 1,
      sym__wrapped_equality_expression,
    STATE(361), 1,
      sym__relational_expression,
    STATE(362), 1,
      sym__wrapped_relational_expression,
    STATE(363), 1,
      sym__shift_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(371), 1,
      sym_string,
    STATE(418), 1,
      sym_string_operands,
    STATE(498), 1,
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
    STATE(336), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
  [3587] = 40,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(63), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym__block_comment,
    STATE(207), 1,
      sym__bitwise_or_expression,
    STATE(209), 1,
      sym__multiplicative_expression,
    STATE(210), 1,
      sym__wrapped_multiplicative_expression,
    STATE(212), 1,
      sym__logical_or_expression,
    STATE(213), 1,
      sym__wrapped_logical_or_expression,
    STATE(214), 1,
      sym__logical_and_expression,
    STATE(215), 1,
      sym__wrapped_logical_and_expression,
    STATE(217), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(218), 1,
      sym__bitwise_xor_expression,
    STATE(219), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(220), 1,
      sym__equality_expression,
    STATE(221), 1,
      sym__wrapped_equality_expression,
    STATE(222), 1,
      sym__bitwise_and_expression,
    STATE(223), 1,
      sym__relational_expression,
    STATE(224), 1,
      sym__wrapped_relational_expression,
    STATE(225), 1,
      sym__simple_expression,
    STATE(226), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(227), 1,
      sym__assignment_expression,
    STATE(232), 1,
      sym__wrapped_shift_expression,
    STATE(238), 1,
      sym__additive_expression,
    STATE(239), 1,
      sym__wrapped_additive_expression,
    STATE(245), 1,
      sym__shift_expression,
    STATE(379), 1,
      sym__wrapped_assignment_expression,
    STATE(406), 1,
      sym__operand,
    STATE(407), 1,
      sym_string,
    ACTIONS(61), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(67), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(65), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(248), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3721] = 40,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(29), 1,
      sym__block_comment,
    STATE(269), 1,
      sym__assignment_expression,
    STATE(270), 1,
      sym__logical_or_expression,
    STATE(271), 1,
      sym__wrapped_logical_or_expression,
    STATE(272), 1,
      sym__logical_and_expression,
    STATE(273), 1,
      sym__wrapped_logical_and_expression,
    STATE(274), 1,
      sym__bitwise_or_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(276), 1,
      sym__bitwise_xor_expression,
    STATE(277), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(278), 1,
      sym__bitwise_and_expression,
    STATE(279), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(280), 1,
      sym__equality_expression,
    STATE(281), 1,
      sym__wrapped_equality_expression,
    STATE(282), 1,
      sym__relational_expression,
    STATE(283), 1,
      sym__wrapped_relational_expression,
    STATE(284), 1,
      sym__shift_expression,
    STATE(285), 1,
      sym__wrapped_shift_expression,
    STATE(286), 1,
      sym__additive_expression,
    STATE(287), 1,
      sym__wrapped_additive_expression,
    STATE(288), 1,
      sym__multiplicative_expression,
    STATE(289), 1,
      sym__wrapped_multiplicative_expression,
    STATE(290), 1,
      sym__simple_expression,
    STATE(424), 1,
      sym__wrapped_assignment_expression,
    STATE(465), 1,
      sym_string,
    STATE(478), 1,
      sym__operand,
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
    STATE(294), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3855] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      sym_unary_minus_operator,
    ACTIONS(147), 1,
      sym_relocation_type,
    ACTIONS(153), 1,
      aux_sym_decimal_token1,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(30), 1,
      sym__block_comment,
    STATE(112), 1,
      sym__additive_expression,
    STATE(120), 1,
      sym__logical_or_expression,
    STATE(122), 1,
      sym__logical_and_expression,
    STATE(123), 1,
      sym__wrapped_logical_and_expression,
    STATE(124), 1,
      sym__bitwise_or_expression,
    STATE(125), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(126), 1,
      sym__bitwise_xor_expression,
    STATE(127), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(128), 1,
      sym__bitwise_and_expression,
    STATE(129), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(130), 1,
      sym__equality_expression,
    STATE(131), 1,
      sym__wrapped_equality_expression,
    STATE(132), 1,
      sym__wrapped_logical_or_expression,
    STATE(133), 1,
      sym__wrapped_relational_expression,
    STATE(134), 1,
      sym__shift_expression,
    STATE(135), 1,
      sym__wrapped_shift_expression,
    STATE(136), 1,
      sym__wrapped_additive_expression,
    STATE(137), 1,
      sym__multiplicative_expression,
    STATE(138), 1,
      sym__wrapped_multiplicative_expression,
    STATE(139), 1,
      sym__simple_expression,
    STATE(159), 1,
      sym__relational_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(501), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(145), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(151), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(149), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(115), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3980] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(63), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym__block_comment,
    STATE(207), 1,
      sym__bitwise_or_expression,
    STATE(209), 1,
      sym__multiplicative_expression,
    STATE(210), 1,
      sym__wrapped_multiplicative_expression,
    STATE(211), 1,
      sym__wrapped_assignment_expression,
    STATE(212), 1,
      sym__logical_or_expression,
    STATE(213), 1,
      sym__wrapped_logical_or_expression,
    STATE(214), 1,
      sym__logical_and_expression,
    STATE(215), 1,
      sym__wrapped_logical_and_expression,
    STATE(217), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(218), 1,
      sym__bitwise_xor_expression,
    STATE(219), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(220), 1,
      sym__equality_expression,
    STATE(221), 1,
      sym__wrapped_equality_expression,
    STATE(222), 1,
      sym__bitwise_and_expression,
    STATE(223), 1,
      sym__relational_expression,
    STATE(224), 1,
      sym__wrapped_relational_expression,
    STATE(225), 1,
      sym__simple_expression,
    STATE(226), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(227), 1,
      sym__assignment_expression,
    STATE(232), 1,
      sym__wrapped_shift_expression,
    STATE(238), 1,
      sym__additive_expression,
    STATE(239), 1,
      sym__wrapped_additive_expression,
    STATE(245), 1,
      sym__shift_expression,
    ACTIONS(61), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(67), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(65), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(248), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4105] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(32), 1,
      sym__block_comment,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(342), 1,
      sym__wrapped_additive_expression,
    STATE(345), 1,
      sym__multiplicative_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(354), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(356), 1,
      sym__bitwise_and_expression,
    STATE(357), 1,
      sym__simple_expression,
    STATE(358), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(359), 1,
      sym__equality_expression,
    STATE(360), 1,
      sym__wrapped_equality_expression,
    STATE(361), 1,
      sym__relational_expression,
    STATE(362), 1,
      sym__wrapped_relational_expression,
    STATE(363), 1,
      sym__shift_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(466), 1,
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
    STATE(336), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4230] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(63), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym__block_comment,
    STATE(207), 1,
      sym__bitwise_or_expression,
    STATE(209), 1,
      sym__multiplicative_expression,
    STATE(210), 1,
      sym__wrapped_multiplicative_expression,
    STATE(212), 1,
      sym__logical_or_expression,
    STATE(214), 1,
      sym__logical_and_expression,
    STATE(215), 1,
      sym__wrapped_logical_and_expression,
    STATE(217), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(218), 1,
      sym__bitwise_xor_expression,
    STATE(219), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(220), 1,
      sym__equality_expression,
    STATE(221), 1,
      sym__wrapped_equality_expression,
    STATE(222), 1,
      sym__bitwise_and_expression,
    STATE(223), 1,
      sym__relational_expression,
    STATE(224), 1,
      sym__wrapped_relational_expression,
    STATE(225), 1,
      sym__simple_expression,
    STATE(226), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(232), 1,
      sym__wrapped_shift_expression,
    STATE(238), 1,
      sym__additive_expression,
    STATE(239), 1,
      sym__wrapped_additive_expression,
    STATE(245), 1,
      sym__shift_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(378), 1,
      sym__wrapped_logical_or_expression,
    STATE(499), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(61), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(67), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(65), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(248), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4355] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(63), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym__block_comment,
    STATE(207), 1,
      sym__bitwise_or_expression,
    STATE(209), 1,
      sym__multiplicative_expression,
    STATE(210), 1,
      sym__wrapped_multiplicative_expression,
    STATE(214), 1,
      sym__logical_and_expression,
    STATE(217), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(218), 1,
      sym__bitwise_xor_expression,
    STATE(219), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(220), 1,
      sym__equality_expression,
    STATE(221), 1,
      sym__wrapped_equality_expression,
    STATE(222), 1,
      sym__bitwise_and_expression,
    STATE(223), 1,
      sym__relational_expression,
    STATE(224), 1,
      sym__wrapped_relational_expression,
    STATE(225), 1,
      sym__simple_expression,
    STATE(226), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(232), 1,
      sym__wrapped_shift_expression,
    STATE(238), 1,
      sym__additive_expression,
    STATE(239), 1,
      sym__wrapped_additive_expression,
    STATE(245), 1,
      sym__shift_expression,
    STATE(246), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(499), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(61), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(67), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(65), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(248), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4480] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(63), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym__block_comment,
    STATE(207), 1,
      sym__bitwise_or_expression,
    STATE(209), 1,
      sym__multiplicative_expression,
    STATE(210), 1,
      sym__wrapped_multiplicative_expression,
    STATE(218), 1,
      sym__bitwise_xor_expression,
    STATE(219), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(220), 1,
      sym__equality_expression,
    STATE(221), 1,
      sym__wrapped_equality_expression,
    STATE(222), 1,
      sym__bitwise_and_expression,
    STATE(223), 1,
      sym__relational_expression,
    STATE(224), 1,
      sym__wrapped_relational_expression,
    STATE(225), 1,
      sym__simple_expression,
    STATE(226), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(232), 1,
      sym__wrapped_shift_expression,
    STATE(238), 1,
      sym__additive_expression,
    STATE(239), 1,
      sym__wrapped_additive_expression,
    STATE(245), 1,
      sym__shift_expression,
    STATE(247), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(499), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(61), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(67), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(65), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(248), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4605] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(63), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym__block_comment,
    STATE(209), 1,
      sym__multiplicative_expression,
    STATE(210), 1,
      sym__wrapped_multiplicative_expression,
    STATE(218), 1,
      sym__bitwise_xor_expression,
    STATE(220), 1,
      sym__equality_expression,
    STATE(221), 1,
      sym__wrapped_equality_expression,
    STATE(222), 1,
      sym__bitwise_and_expression,
    STATE(223), 1,
      sym__relational_expression,
    STATE(224), 1,
      sym__wrapped_relational_expression,
    STATE(225), 1,
      sym__simple_expression,
    STATE(226), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(232), 1,
      sym__wrapped_shift_expression,
    STATE(238), 1,
      sym__additive_expression,
    STATE(239), 1,
      sym__wrapped_additive_expression,
    STATE(245), 1,
      sym__shift_expression,
    STATE(249), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(499), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(61), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(67), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(65), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(248), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4730] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(63), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym__block_comment,
    STATE(209), 1,
      sym__multiplicative_expression,
    STATE(210), 1,
      sym__wrapped_multiplicative_expression,
    STATE(220), 1,
      sym__equality_expression,
    STATE(221), 1,
      sym__wrapped_equality_expression,
    STATE(222), 1,
      sym__bitwise_and_expression,
    STATE(223), 1,
      sym__relational_expression,
    STATE(224), 1,
      sym__wrapped_relational_expression,
    STATE(225), 1,
      sym__simple_expression,
    STATE(232), 1,
      sym__wrapped_shift_expression,
    STATE(238), 1,
      sym__additive_expression,
    STATE(239), 1,
      sym__wrapped_additive_expression,
    STATE(244), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(245), 1,
      sym__shift_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(499), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(61), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(67), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(65), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(248), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4855] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(63), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      sym__block_comment,
    STATE(209), 1,
      sym__multiplicative_expression,
    STATE(210), 1,
      sym__wrapped_multiplicative_expression,
    STATE(216), 1,
      sym__wrapped_equality_expression,
    STATE(220), 1,
      sym__equality_expression,
    STATE(223), 1,
      sym__relational_expression,
    STATE(224), 1,
      sym__wrapped_relational_expression,
    STATE(225), 1,
      sym__simple_expression,
    STATE(232), 1,
      sym__wrapped_shift_expression,
    STATE(238), 1,
      sym__additive_expression,
    STATE(239), 1,
      sym__wrapped_additive_expression,
    STATE(245), 1,
      sym__shift_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(356), 1,
      sym__bitwise_and_expression,
    STATE(358), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(499), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(61), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(67), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(65), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(248), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4980] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(63), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      sym__block_comment,
    STATE(209), 1,
      sym__multiplicative_expression,
    STATE(210), 1,
      sym__wrapped_multiplicative_expression,
    STATE(223), 1,
      sym__relational_expression,
    STATE(225), 1,
      sym__simple_expression,
    STATE(232), 1,
      sym__wrapped_shift_expression,
    STATE(238), 1,
      sym__additive_expression,
    STATE(239), 1,
      sym__wrapped_additive_expression,
    STATE(245), 1,
      sym__shift_expression,
    STATE(252), 1,
      sym__wrapped_relational_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(356), 1,
      sym__bitwise_and_expression,
    STATE(358), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(359), 1,
      sym__equality_expression,
    STATE(360), 1,
      sym__wrapped_equality_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(499), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(61), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(67), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(65), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(248), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5105] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(63), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(40), 1,
      sym__block_comment,
    STATE(209), 1,
      sym__multiplicative_expression,
    STATE(210), 1,
      sym__wrapped_multiplicative_expression,
    STATE(225), 1,
      sym__simple_expression,
    STATE(228), 1,
      sym__wrapped_shift_expression,
    STATE(238), 1,
      sym__additive_expression,
    STATE(239), 1,
      sym__wrapped_additive_expression,
    STATE(245), 1,
      sym__shift_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(356), 1,
      sym__bitwise_and_expression,
    STATE(358), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(359), 1,
      sym__equality_expression,
    STATE(360), 1,
      sym__wrapped_equality_expression,
    STATE(361), 1,
      sym__relational_expression,
    STATE(362), 1,
      sym__wrapped_relational_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(499), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(61), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(67), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(65), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(248), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5230] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(63), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym__block_comment,
    STATE(209), 1,
      sym__multiplicative_expression,
    STATE(210), 1,
      sym__wrapped_multiplicative_expression,
    STATE(225), 1,
      sym__simple_expression,
    STATE(229), 1,
      sym__wrapped_additive_expression,
    STATE(238), 1,
      sym__additive_expression,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(356), 1,
      sym__bitwise_and_expression,
    STATE(358), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(359), 1,
      sym__equality_expression,
    STATE(360), 1,
      sym__wrapped_equality_expression,
    STATE(361), 1,
      sym__relational_expression,
    STATE(362), 1,
      sym__wrapped_relational_expression,
    STATE(363), 1,
      sym__shift_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(499), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(61), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(67), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(65), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(248), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5355] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(63), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(42), 1,
      sym__block_comment,
    STATE(209), 1,
      sym__multiplicative_expression,
    STATE(225), 1,
      sym__simple_expression,
    STATE(230), 1,
      sym__wrapped_multiplicative_expression,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(342), 1,
      sym__wrapped_additive_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(356), 1,
      sym__bitwise_and_expression,
    STATE(358), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(359), 1,
      sym__equality_expression,
    STATE(360), 1,
      sym__wrapped_equality_expression,
    STATE(361), 1,
      sym__relational_expression,
    STATE(362), 1,
      sym__wrapped_relational_expression,
    STATE(363), 1,
      sym__shift_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(499), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(61), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(67), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(65), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(248), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5480] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(63), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(43), 1,
      sym__block_comment,
    STATE(231), 1,
      sym__simple_expression,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(342), 1,
      sym__wrapped_additive_expression,
    STATE(345), 1,
      sym__multiplicative_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(354), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(356), 1,
      sym__bitwise_and_expression,
    STATE(358), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(359), 1,
      sym__equality_expression,
    STATE(360), 1,
      sym__wrapped_equality_expression,
    STATE(361), 1,
      sym__relational_expression,
    STATE(362), 1,
      sym__wrapped_relational_expression,
    STATE(363), 1,
      sym__shift_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(499), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(61), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(67), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(65), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(248), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5605] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      sym_unary_minus_operator,
    ACTIONS(147), 1,
      sym_relocation_type,
    ACTIONS(153), 1,
      aux_sym_decimal_token1,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(44), 1,
      sym__block_comment,
    STATE(112), 1,
      sym__additive_expression,
    STATE(119), 1,
      sym__assignment_expression,
    STATE(120), 1,
      sym__logical_or_expression,
    STATE(121), 1,
      sym__wrapped_logical_or_expression,
    STATE(122), 1,
      sym__logical_and_expression,
    STATE(123), 1,
      sym__wrapped_logical_and_expression,
    STATE(124), 1,
      sym__bitwise_or_expression,
    STATE(125), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(126), 1,
      sym__bitwise_xor_expression,
    STATE(127), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(128), 1,
      sym__bitwise_and_expression,
    STATE(129), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(130), 1,
      sym__equality_expression,
    STATE(131), 1,
      sym__wrapped_equality_expression,
    STATE(133), 1,
      sym__wrapped_relational_expression,
    STATE(134), 1,
      sym__shift_expression,
    STATE(135), 1,
      sym__wrapped_shift_expression,
    STATE(136), 1,
      sym__wrapped_additive_expression,
    STATE(137), 1,
      sym__multiplicative_expression,
    STATE(138), 1,
      sym__wrapped_multiplicative_expression,
    STATE(139), 1,
      sym__simple_expression,
    STATE(159), 1,
      sym__relational_expression,
    STATE(368), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(145), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(151), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(149), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(115), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5730] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      sym_unary_minus_operator,
    ACTIONS(147), 1,
      sym_relocation_type,
    ACTIONS(153), 1,
      aux_sym_decimal_token1,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(45), 1,
      sym__block_comment,
    STATE(112), 1,
      sym__additive_expression,
    STATE(119), 1,
      sym__assignment_expression,
    STATE(120), 1,
      sym__logical_or_expression,
    STATE(121), 1,
      sym__wrapped_logical_or_expression,
    STATE(122), 1,
      sym__logical_and_expression,
    STATE(123), 1,
      sym__wrapped_logical_and_expression,
    STATE(124), 1,
      sym__bitwise_or_expression,
    STATE(125), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(126), 1,
      sym__bitwise_xor_expression,
    STATE(127), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(128), 1,
      sym__bitwise_and_expression,
    STATE(129), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(130), 1,
      sym__equality_expression,
    STATE(131), 1,
      sym__wrapped_equality_expression,
    STATE(133), 1,
      sym__wrapped_relational_expression,
    STATE(134), 1,
      sym__shift_expression,
    STATE(135), 1,
      sym__wrapped_shift_expression,
    STATE(136), 1,
      sym__wrapped_additive_expression,
    STATE(137), 1,
      sym__multiplicative_expression,
    STATE(138), 1,
      sym__wrapped_multiplicative_expression,
    STATE(139), 1,
      sym__simple_expression,
    STATE(159), 1,
      sym__relational_expression,
    STATE(366), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(145), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(151), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(149), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(115), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5855] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(46), 1,
      sym__block_comment,
    STATE(270), 1,
      sym__logical_or_expression,
    STATE(272), 1,
      sym__logical_and_expression,
    STATE(273), 1,
      sym__wrapped_logical_and_expression,
    STATE(274), 1,
      sym__bitwise_or_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(276), 1,
      sym__bitwise_xor_expression,
    STATE(277), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(278), 1,
      sym__bitwise_and_expression,
    STATE(279), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(280), 1,
      sym__equality_expression,
    STATE(281), 1,
      sym__wrapped_equality_expression,
    STATE(282), 1,
      sym__relational_expression,
    STATE(283), 1,
      sym__wrapped_relational_expression,
    STATE(284), 1,
      sym__shift_expression,
    STATE(285), 1,
      sym__wrapped_shift_expression,
    STATE(286), 1,
      sym__additive_expression,
    STATE(287), 1,
      sym__wrapped_additive_expression,
    STATE(288), 1,
      sym__multiplicative_expression,
    STATE(289), 1,
      sym__wrapped_multiplicative_expression,
    STATE(290), 1,
      sym__simple_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(404), 1,
      sym__wrapped_logical_or_expression,
    STATE(500), 1,
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
    STATE(294), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5980] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(47), 1,
      sym__block_comment,
    STATE(272), 1,
      sym__logical_and_expression,
    STATE(274), 1,
      sym__bitwise_or_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(276), 1,
      sym__bitwise_xor_expression,
    STATE(277), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(278), 1,
      sym__bitwise_and_expression,
    STATE(279), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(280), 1,
      sym__equality_expression,
    STATE(281), 1,
      sym__wrapped_equality_expression,
    STATE(282), 1,
      sym__relational_expression,
    STATE(283), 1,
      sym__wrapped_relational_expression,
    STATE(284), 1,
      sym__shift_expression,
    STATE(285), 1,
      sym__wrapped_shift_expression,
    STATE(286), 1,
      sym__additive_expression,
    STATE(287), 1,
      sym__wrapped_additive_expression,
    STATE(288), 1,
      sym__multiplicative_expression,
    STATE(289), 1,
      sym__wrapped_multiplicative_expression,
    STATE(290), 1,
      sym__simple_expression,
    STATE(298), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(500), 1,
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
    STATE(294), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6105] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(48), 1,
      sym__block_comment,
    STATE(274), 1,
      sym__bitwise_or_expression,
    STATE(276), 1,
      sym__bitwise_xor_expression,
    STATE(277), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(278), 1,
      sym__bitwise_and_expression,
    STATE(279), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(280), 1,
      sym__equality_expression,
    STATE(281), 1,
      sym__wrapped_equality_expression,
    STATE(282), 1,
      sym__relational_expression,
    STATE(283), 1,
      sym__wrapped_relational_expression,
    STATE(284), 1,
      sym__shift_expression,
    STATE(285), 1,
      sym__wrapped_shift_expression,
    STATE(286), 1,
      sym__additive_expression,
    STATE(287), 1,
      sym__wrapped_additive_expression,
    STATE(288), 1,
      sym__multiplicative_expression,
    STATE(289), 1,
      sym__wrapped_multiplicative_expression,
    STATE(290), 1,
      sym__simple_expression,
    STATE(299), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(500), 1,
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
    STATE(294), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6230] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(49), 1,
      sym__block_comment,
    STATE(276), 1,
      sym__bitwise_xor_expression,
    STATE(278), 1,
      sym__bitwise_and_expression,
    STATE(279), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(280), 1,
      sym__equality_expression,
    STATE(281), 1,
      sym__wrapped_equality_expression,
    STATE(282), 1,
      sym__relational_expression,
    STATE(283), 1,
      sym__wrapped_relational_expression,
    STATE(284), 1,
      sym__shift_expression,
    STATE(285), 1,
      sym__wrapped_shift_expression,
    STATE(286), 1,
      sym__additive_expression,
    STATE(287), 1,
      sym__wrapped_additive_expression,
    STATE(288), 1,
      sym__multiplicative_expression,
    STATE(289), 1,
      sym__wrapped_multiplicative_expression,
    STATE(290), 1,
      sym__simple_expression,
    STATE(300), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(500), 1,
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
    STATE(294), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6355] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(50), 1,
      sym__block_comment,
    STATE(278), 1,
      sym__bitwise_and_expression,
    STATE(280), 1,
      sym__equality_expression,
    STATE(281), 1,
      sym__wrapped_equality_expression,
    STATE(282), 1,
      sym__relational_expression,
    STATE(283), 1,
      sym__wrapped_relational_expression,
    STATE(284), 1,
      sym__shift_expression,
    STATE(285), 1,
      sym__wrapped_shift_expression,
    STATE(286), 1,
      sym__additive_expression,
    STATE(287), 1,
      sym__wrapped_additive_expression,
    STATE(288), 1,
      sym__multiplicative_expression,
    STATE(289), 1,
      sym__wrapped_multiplicative_expression,
    STATE(290), 1,
      sym__simple_expression,
    STATE(301), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(500), 1,
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
    STATE(294), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6480] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(51), 1,
      sym__block_comment,
    STATE(280), 1,
      sym__equality_expression,
    STATE(282), 1,
      sym__relational_expression,
    STATE(283), 1,
      sym__wrapped_relational_expression,
    STATE(284), 1,
      sym__shift_expression,
    STATE(285), 1,
      sym__wrapped_shift_expression,
    STATE(286), 1,
      sym__additive_expression,
    STATE(287), 1,
      sym__wrapped_additive_expression,
    STATE(288), 1,
      sym__multiplicative_expression,
    STATE(289), 1,
      sym__wrapped_multiplicative_expression,
    STATE(290), 1,
      sym__simple_expression,
    STATE(302), 1,
      sym__wrapped_equality_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(356), 1,
      sym__bitwise_and_expression,
    STATE(358), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(500), 1,
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
    STATE(294), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6605] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(52), 1,
      sym__block_comment,
    STATE(282), 1,
      sym__relational_expression,
    STATE(284), 1,
      sym__shift_expression,
    STATE(285), 1,
      sym__wrapped_shift_expression,
    STATE(286), 1,
      sym__additive_expression,
    STATE(287), 1,
      sym__wrapped_additive_expression,
    STATE(288), 1,
      sym__multiplicative_expression,
    STATE(289), 1,
      sym__wrapped_multiplicative_expression,
    STATE(290), 1,
      sym__simple_expression,
    STATE(303), 1,
      sym__wrapped_relational_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(356), 1,
      sym__bitwise_and_expression,
    STATE(358), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(359), 1,
      sym__equality_expression,
    STATE(360), 1,
      sym__wrapped_equality_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(500), 1,
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
    STATE(294), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6730] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(53), 1,
      sym__block_comment,
    STATE(284), 1,
      sym__shift_expression,
    STATE(286), 1,
      sym__additive_expression,
    STATE(287), 1,
      sym__wrapped_additive_expression,
    STATE(288), 1,
      sym__multiplicative_expression,
    STATE(289), 1,
      sym__wrapped_multiplicative_expression,
    STATE(290), 1,
      sym__simple_expression,
    STATE(304), 1,
      sym__wrapped_shift_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(356), 1,
      sym__bitwise_and_expression,
    STATE(358), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(359), 1,
      sym__equality_expression,
    STATE(360), 1,
      sym__wrapped_equality_expression,
    STATE(361), 1,
      sym__relational_expression,
    STATE(362), 1,
      sym__wrapped_relational_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(500), 1,
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
    STATE(294), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6855] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(54), 1,
      sym__block_comment,
    STATE(286), 1,
      sym__additive_expression,
    STATE(288), 1,
      sym__multiplicative_expression,
    STATE(289), 1,
      sym__wrapped_multiplicative_expression,
    STATE(290), 1,
      sym__simple_expression,
    STATE(305), 1,
      sym__wrapped_additive_expression,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(356), 1,
      sym__bitwise_and_expression,
    STATE(358), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(359), 1,
      sym__equality_expression,
    STATE(360), 1,
      sym__wrapped_equality_expression,
    STATE(361), 1,
      sym__relational_expression,
    STATE(362), 1,
      sym__wrapped_relational_expression,
    STATE(363), 1,
      sym__shift_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(500), 1,
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
    STATE(294), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6980] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(55), 1,
      sym__block_comment,
    STATE(288), 1,
      sym__multiplicative_expression,
    STATE(290), 1,
      sym__simple_expression,
    STATE(306), 1,
      sym__wrapped_multiplicative_expression,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(342), 1,
      sym__wrapped_additive_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(356), 1,
      sym__bitwise_and_expression,
    STATE(358), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(359), 1,
      sym__equality_expression,
    STATE(360), 1,
      sym__wrapped_equality_expression,
    STATE(361), 1,
      sym__relational_expression,
    STATE(362), 1,
      sym__wrapped_relational_expression,
    STATE(363), 1,
      sym__shift_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(500), 1,
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
    STATE(294), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7105] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(56), 1,
      sym__block_comment,
    STATE(307), 1,
      sym__simple_expression,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(342), 1,
      sym__wrapped_additive_expression,
    STATE(345), 1,
      sym__multiplicative_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(354), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(356), 1,
      sym__bitwise_and_expression,
    STATE(358), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(359), 1,
      sym__equality_expression,
    STATE(360), 1,
      sym__wrapped_equality_expression,
    STATE(361), 1,
      sym__relational_expression,
    STATE(362), 1,
      sym__wrapped_relational_expression,
    STATE(363), 1,
      sym__shift_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(500), 1,
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
    STATE(294), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7230] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      sym_unary_minus_operator,
    ACTIONS(147), 1,
      sym_relocation_type,
    ACTIONS(153), 1,
      aux_sym_decimal_token1,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(57), 1,
      sym__block_comment,
    STATE(112), 1,
      sym__additive_expression,
    STATE(120), 1,
      sym__logical_or_expression,
    STATE(122), 1,
      sym__logical_and_expression,
    STATE(123), 1,
      sym__wrapped_logical_and_expression,
    STATE(124), 1,
      sym__bitwise_or_expression,
    STATE(125), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(126), 1,
      sym__bitwise_xor_expression,
    STATE(127), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(128), 1,
      sym__bitwise_and_expression,
    STATE(129), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(130), 1,
      sym__equality_expression,
    STATE(131), 1,
      sym__wrapped_equality_expression,
    STATE(133), 1,
      sym__wrapped_relational_expression,
    STATE(134), 1,
      sym__shift_expression,
    STATE(135), 1,
      sym__wrapped_shift_expression,
    STATE(136), 1,
      sym__wrapped_additive_expression,
    STATE(137), 1,
      sym__multiplicative_expression,
    STATE(138), 1,
      sym__wrapped_multiplicative_expression,
    STATE(139), 1,
      sym__simple_expression,
    STATE(159), 1,
      sym__relational_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(365), 1,
      sym__wrapped_logical_or_expression,
    STATE(501), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(145), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(151), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(149), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(115), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7355] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      sym_unary_minus_operator,
    ACTIONS(147), 1,
      sym_relocation_type,
    ACTIONS(153), 1,
      aux_sym_decimal_token1,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(58), 1,
      sym__block_comment,
    STATE(112), 1,
      sym__additive_expression,
    STATE(122), 1,
      sym__logical_and_expression,
    STATE(124), 1,
      sym__bitwise_or_expression,
    STATE(125), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(126), 1,
      sym__bitwise_xor_expression,
    STATE(127), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(128), 1,
      sym__bitwise_and_expression,
    STATE(129), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(130), 1,
      sym__equality_expression,
    STATE(131), 1,
      sym__wrapped_equality_expression,
    STATE(133), 1,
      sym__wrapped_relational_expression,
    STATE(134), 1,
      sym__shift_expression,
    STATE(135), 1,
      sym__wrapped_shift_expression,
    STATE(136), 1,
      sym__wrapped_additive_expression,
    STATE(137), 1,
      sym__multiplicative_expression,
    STATE(138), 1,
      sym__wrapped_multiplicative_expression,
    STATE(139), 1,
      sym__simple_expression,
    STATE(145), 1,
      sym__wrapped_logical_and_expression,
    STATE(159), 1,
      sym__relational_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(501), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(145), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(151), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(149), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(115), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7480] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      sym_unary_minus_operator,
    ACTIONS(147), 1,
      sym_relocation_type,
    ACTIONS(153), 1,
      aux_sym_decimal_token1,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(59), 1,
      sym__block_comment,
    STATE(112), 1,
      sym__additive_expression,
    STATE(124), 1,
      sym__bitwise_or_expression,
    STATE(126), 1,
      sym__bitwise_xor_expression,
    STATE(127), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(128), 1,
      sym__bitwise_and_expression,
    STATE(129), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(130), 1,
      sym__equality_expression,
    STATE(131), 1,
      sym__wrapped_equality_expression,
    STATE(133), 1,
      sym__wrapped_relational_expression,
    STATE(134), 1,
      sym__shift_expression,
    STATE(135), 1,
      sym__wrapped_shift_expression,
    STATE(136), 1,
      sym__wrapped_additive_expression,
    STATE(137), 1,
      sym__multiplicative_expression,
    STATE(138), 1,
      sym__wrapped_multiplicative_expression,
    STATE(139), 1,
      sym__simple_expression,
    STATE(146), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(159), 1,
      sym__relational_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(501), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(145), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(151), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(149), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(115), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7605] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      sym_unary_minus_operator,
    ACTIONS(147), 1,
      sym_relocation_type,
    ACTIONS(153), 1,
      aux_sym_decimal_token1,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(60), 1,
      sym__block_comment,
    STATE(112), 1,
      sym__additive_expression,
    STATE(126), 1,
      sym__bitwise_xor_expression,
    STATE(128), 1,
      sym__bitwise_and_expression,
    STATE(129), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(130), 1,
      sym__equality_expression,
    STATE(131), 1,
      sym__wrapped_equality_expression,
    STATE(133), 1,
      sym__wrapped_relational_expression,
    STATE(134), 1,
      sym__shift_expression,
    STATE(135), 1,
      sym__wrapped_shift_expression,
    STATE(136), 1,
      sym__wrapped_additive_expression,
    STATE(137), 1,
      sym__multiplicative_expression,
    STATE(138), 1,
      sym__wrapped_multiplicative_expression,
    STATE(139), 1,
      sym__simple_expression,
    STATE(147), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(159), 1,
      sym__relational_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(501), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(145), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(151), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(149), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(115), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7730] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      sym_unary_minus_operator,
    ACTIONS(147), 1,
      sym_relocation_type,
    ACTIONS(153), 1,
      aux_sym_decimal_token1,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(61), 1,
      sym__block_comment,
    STATE(112), 1,
      sym__additive_expression,
    STATE(128), 1,
      sym__bitwise_and_expression,
    STATE(130), 1,
      sym__equality_expression,
    STATE(131), 1,
      sym__wrapped_equality_expression,
    STATE(133), 1,
      sym__wrapped_relational_expression,
    STATE(134), 1,
      sym__shift_expression,
    STATE(135), 1,
      sym__wrapped_shift_expression,
    STATE(136), 1,
      sym__wrapped_additive_expression,
    STATE(137), 1,
      sym__multiplicative_expression,
    STATE(138), 1,
      sym__wrapped_multiplicative_expression,
    STATE(139), 1,
      sym__simple_expression,
    STATE(148), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(159), 1,
      sym__relational_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(501), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(145), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(151), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(149), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(115), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7855] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      sym_unary_minus_operator,
    ACTIONS(147), 1,
      sym_relocation_type,
    ACTIONS(153), 1,
      aux_sym_decimal_token1,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(62), 1,
      sym__block_comment,
    STATE(112), 1,
      sym__additive_expression,
    STATE(130), 1,
      sym__equality_expression,
    STATE(133), 1,
      sym__wrapped_relational_expression,
    STATE(134), 1,
      sym__shift_expression,
    STATE(135), 1,
      sym__wrapped_shift_expression,
    STATE(136), 1,
      sym__wrapped_additive_expression,
    STATE(137), 1,
      sym__multiplicative_expression,
    STATE(138), 1,
      sym__wrapped_multiplicative_expression,
    STATE(139), 1,
      sym__simple_expression,
    STATE(149), 1,
      sym__wrapped_equality_expression,
    STATE(159), 1,
      sym__relational_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(356), 1,
      sym__bitwise_and_expression,
    STATE(358), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(501), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(145), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(151), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(149), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(115), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7980] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      sym_unary_minus_operator,
    ACTIONS(147), 1,
      sym_relocation_type,
    ACTIONS(153), 1,
      aux_sym_decimal_token1,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(63), 1,
      sym__block_comment,
    STATE(112), 1,
      sym__additive_expression,
    STATE(134), 1,
      sym__shift_expression,
    STATE(135), 1,
      sym__wrapped_shift_expression,
    STATE(136), 1,
      sym__wrapped_additive_expression,
    STATE(137), 1,
      sym__multiplicative_expression,
    STATE(138), 1,
      sym__wrapped_multiplicative_expression,
    STATE(139), 1,
      sym__simple_expression,
    STATE(150), 1,
      sym__wrapped_relational_expression,
    STATE(159), 1,
      sym__relational_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(356), 1,
      sym__bitwise_and_expression,
    STATE(358), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(359), 1,
      sym__equality_expression,
    STATE(360), 1,
      sym__wrapped_equality_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(501), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(145), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(151), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(149), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(115), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8105] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      sym_unary_minus_operator,
    ACTIONS(147), 1,
      sym_relocation_type,
    ACTIONS(153), 1,
      aux_sym_decimal_token1,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(64), 1,
      sym__block_comment,
    STATE(112), 1,
      sym__additive_expression,
    STATE(134), 1,
      sym__shift_expression,
    STATE(136), 1,
      sym__wrapped_additive_expression,
    STATE(137), 1,
      sym__multiplicative_expression,
    STATE(138), 1,
      sym__wrapped_multiplicative_expression,
    STATE(139), 1,
      sym__simple_expression,
    STATE(151), 1,
      sym__wrapped_shift_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(356), 1,
      sym__bitwise_and_expression,
    STATE(358), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(359), 1,
      sym__equality_expression,
    STATE(360), 1,
      sym__wrapped_equality_expression,
    STATE(361), 1,
      sym__relational_expression,
    STATE(362), 1,
      sym__wrapped_relational_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(501), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(145), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(151), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(149), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(115), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8230] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      sym_unary_minus_operator,
    ACTIONS(147), 1,
      sym_relocation_type,
    ACTIONS(153), 1,
      aux_sym_decimal_token1,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(65), 1,
      sym__block_comment,
    STATE(112), 1,
      sym__additive_expression,
    STATE(137), 1,
      sym__multiplicative_expression,
    STATE(138), 1,
      sym__wrapped_multiplicative_expression,
    STATE(139), 1,
      sym__simple_expression,
    STATE(152), 1,
      sym__wrapped_additive_expression,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(356), 1,
      sym__bitwise_and_expression,
    STATE(358), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(359), 1,
      sym__equality_expression,
    STATE(360), 1,
      sym__wrapped_equality_expression,
    STATE(361), 1,
      sym__relational_expression,
    STATE(362), 1,
      sym__wrapped_relational_expression,
    STATE(363), 1,
      sym__shift_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(501), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(145), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(151), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(149), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(115), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8355] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      sym_unary_minus_operator,
    ACTIONS(147), 1,
      sym_relocation_type,
    ACTIONS(153), 1,
      aux_sym_decimal_token1,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(66), 1,
      sym__block_comment,
    STATE(137), 1,
      sym__multiplicative_expression,
    STATE(139), 1,
      sym__simple_expression,
    STATE(153), 1,
      sym__wrapped_multiplicative_expression,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(342), 1,
      sym__wrapped_additive_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(356), 1,
      sym__bitwise_and_expression,
    STATE(358), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(359), 1,
      sym__equality_expression,
    STATE(360), 1,
      sym__wrapped_equality_expression,
    STATE(361), 1,
      sym__relational_expression,
    STATE(362), 1,
      sym__wrapped_relational_expression,
    STATE(363), 1,
      sym__shift_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(501), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(145), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(151), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(149), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(115), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8480] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      sym_unary_minus_operator,
    ACTIONS(147), 1,
      sym_relocation_type,
    ACTIONS(153), 1,
      aux_sym_decimal_token1,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(67), 1,
      sym__block_comment,
    STATE(154), 1,
      sym__simple_expression,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(342), 1,
      sym__wrapped_additive_expression,
    STATE(345), 1,
      sym__multiplicative_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(354), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(356), 1,
      sym__bitwise_and_expression,
    STATE(358), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(359), 1,
      sym__equality_expression,
    STATE(360), 1,
      sym__wrapped_equality_expression,
    STATE(361), 1,
      sym__relational_expression,
    STATE(362), 1,
      sym__wrapped_relational_expression,
    STATE(363), 1,
      sym__shift_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(501), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(145), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(151), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(149), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(115), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8605] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(342), 1,
      sym__wrapped_additive_expression,
    STATE(345), 1,
      sym__multiplicative_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(354), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(356), 1,
      sym__bitwise_and_expression,
    STATE(357), 1,
      sym__simple_expression,
    STATE(358), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(359), 1,
      sym__equality_expression,
    STATE(360), 1,
      sym__wrapped_equality_expression,
    STATE(361), 1,
      sym__relational_expression,
    STATE(362), 1,
      sym__wrapped_relational_expression,
    STATE(363), 1,
      sym__shift_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(476), 1,
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
    STATE(336), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8730] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(69), 1,
      sym__block_comment,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(326), 1,
      sym__wrapped_logical_and_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(342), 1,
      sym__wrapped_additive_expression,
    STATE(345), 1,
      sym__multiplicative_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(354), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(356), 1,
      sym__bitwise_and_expression,
    STATE(357), 1,
      sym__simple_expression,
    STATE(358), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(359), 1,
      sym__equality_expression,
    STATE(360), 1,
      sym__wrapped_equality_expression,
    STATE(361), 1,
      sym__relational_expression,
    STATE(362), 1,
      sym__wrapped_relational_expression,
    STATE(363), 1,
      sym__shift_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(502), 1,
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
    STATE(336), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8855] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(70), 1,
      sym__block_comment,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(327), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(342), 1,
      sym__wrapped_additive_expression,
    STATE(345), 1,
      sym__multiplicative_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(354), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(356), 1,
      sym__bitwise_and_expression,
    STATE(357), 1,
      sym__simple_expression,
    STATE(358), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(359), 1,
      sym__equality_expression,
    STATE(360), 1,
      sym__wrapped_equality_expression,
    STATE(361), 1,
      sym__relational_expression,
    STATE(362), 1,
      sym__wrapped_relational_expression,
    STATE(363), 1,
      sym__shift_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(502), 1,
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
    STATE(336), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8980] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(71), 1,
      sym__block_comment,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(342), 1,
      sym__wrapped_additive_expression,
    STATE(345), 1,
      sym__multiplicative_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(354), 1,
      sym__wrapped_multiplicative_expression,
    STATE(356), 1,
      sym__bitwise_and_expression,
    STATE(357), 1,
      sym__simple_expression,
    STATE(358), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(359), 1,
      sym__equality_expression,
    STATE(360), 1,
      sym__wrapped_equality_expression,
    STATE(361), 1,
      sym__relational_expression,
    STATE(362), 1,
      sym__wrapped_relational_expression,
    STATE(363), 1,
      sym__shift_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(502), 1,
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
    STATE(336), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9105] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(72), 1,
      sym__block_comment,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(329), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(342), 1,
      sym__wrapped_additive_expression,
    STATE(345), 1,
      sym__multiplicative_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(354), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(356), 1,
      sym__bitwise_and_expression,
    STATE(357), 1,
      sym__simple_expression,
    STATE(359), 1,
      sym__equality_expression,
    STATE(360), 1,
      sym__wrapped_equality_expression,
    STATE(361), 1,
      sym__relational_expression,
    STATE(362), 1,
      sym__wrapped_relational_expression,
    STATE(363), 1,
      sym__shift_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(502), 1,
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
    STATE(336), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9230] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(73), 1,
      sym__block_comment,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(330), 1,
      sym__wrapped_equality_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(342), 1,
      sym__wrapped_additive_expression,
    STATE(345), 1,
      sym__multiplicative_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(354), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(356), 1,
      sym__bitwise_and_expression,
    STATE(357), 1,
      sym__simple_expression,
    STATE(358), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(359), 1,
      sym__equality_expression,
    STATE(361), 1,
      sym__relational_expression,
    STATE(362), 1,
      sym__wrapped_relational_expression,
    STATE(363), 1,
      sym__shift_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(502), 1,
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
    STATE(336), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9355] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(74), 1,
      sym__block_comment,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(331), 1,
      sym__wrapped_relational_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(342), 1,
      sym__wrapped_additive_expression,
    STATE(345), 1,
      sym__multiplicative_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(354), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(356), 1,
      sym__bitwise_and_expression,
    STATE(357), 1,
      sym__simple_expression,
    STATE(358), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(359), 1,
      sym__equality_expression,
    STATE(360), 1,
      sym__wrapped_equality_expression,
    STATE(361), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__shift_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(502), 1,
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
    STATE(336), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9480] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(75), 1,
      sym__block_comment,
    STATE(321), 1,
      sym__additive_expression,
    STATE(332), 1,
      sym__wrapped_shift_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(342), 1,
      sym__wrapped_additive_expression,
    STATE(345), 1,
      sym__multiplicative_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(354), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(356), 1,
      sym__bitwise_and_expression,
    STATE(357), 1,
      sym__simple_expression,
    STATE(358), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(359), 1,
      sym__equality_expression,
    STATE(360), 1,
      sym__wrapped_equality_expression,
    STATE(361), 1,
      sym__relational_expression,
    STATE(362), 1,
      sym__wrapped_relational_expression,
    STATE(363), 1,
      sym__shift_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(502), 1,
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
    STATE(336), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9605] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(76), 1,
      sym__block_comment,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(333), 1,
      sym__wrapped_additive_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(345), 1,
      sym__multiplicative_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(354), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(356), 1,
      sym__bitwise_and_expression,
    STATE(357), 1,
      sym__simple_expression,
    STATE(358), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(359), 1,
      sym__equality_expression,
    STATE(360), 1,
      sym__wrapped_equality_expression,
    STATE(361), 1,
      sym__relational_expression,
    STATE(362), 1,
      sym__wrapped_relational_expression,
    STATE(363), 1,
      sym__shift_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(502), 1,
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
    STATE(336), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9730] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(77), 1,
      sym__block_comment,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(334), 1,
      sym__wrapped_multiplicative_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(342), 1,
      sym__wrapped_additive_expression,
    STATE(345), 1,
      sym__multiplicative_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(356), 1,
      sym__bitwise_and_expression,
    STATE(357), 1,
      sym__simple_expression,
    STATE(358), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(359), 1,
      sym__equality_expression,
    STATE(360), 1,
      sym__wrapped_equality_expression,
    STATE(361), 1,
      sym__relational_expression,
    STATE(362), 1,
      sym__wrapped_relational_expression,
    STATE(363), 1,
      sym__shift_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(502), 1,
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
    STATE(336), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9855] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(78), 1,
      sym__block_comment,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(335), 1,
      sym__simple_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(342), 1,
      sym__wrapped_additive_expression,
    STATE(345), 1,
      sym__multiplicative_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(354), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(356), 1,
      sym__bitwise_and_expression,
    STATE(358), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(359), 1,
      sym__equality_expression,
    STATE(360), 1,
      sym__wrapped_equality_expression,
    STATE(361), 1,
      sym__relational_expression,
    STATE(362), 1,
      sym__wrapped_relational_expression,
    STATE(363), 1,
      sym__shift_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(502), 1,
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
    STATE(336), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9980] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(165), 1,
      sym__logical_or_expression,
    STATE(167), 1,
      sym__logical_and_expression,
    STATE(168), 1,
      sym__wrapped_logical_and_expression,
    STATE(169), 1,
      sym__bitwise_or_expression,
    STATE(170), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(171), 1,
      sym__bitwise_xor_expression,
    STATE(172), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(173), 1,
      sym__bitwise_and_expression,
    STATE(174), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(175), 1,
      sym__equality_expression,
    STATE(176), 1,
      sym__wrapped_equality_expression,
    STATE(177), 1,
      sym__relational_expression,
    STATE(178), 1,
      sym__wrapped_relational_expression,
    STATE(179), 1,
      sym__shift_expression,
    STATE(181), 1,
      sym__additive_expression,
    STATE(182), 1,
      sym__wrapped_additive_expression,
    STATE(183), 1,
      sym__multiplicative_expression,
    STATE(184), 1,
      sym__wrapped_multiplicative_expression,
    STATE(185), 1,
      sym__simple_expression,
    STATE(206), 1,
      sym__wrapped_shift_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(373), 1,
      sym__wrapped_logical_or_expression,
    STATE(503), 1,
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
    STATE(205), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10105] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(167), 1,
      sym__logical_and_expression,
    STATE(169), 1,
      sym__bitwise_or_expression,
    STATE(170), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(171), 1,
      sym__bitwise_xor_expression,
    STATE(172), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(173), 1,
      sym__bitwise_and_expression,
    STATE(174), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(175), 1,
      sym__equality_expression,
    STATE(176), 1,
      sym__wrapped_equality_expression,
    STATE(177), 1,
      sym__relational_expression,
    STATE(178), 1,
      sym__wrapped_relational_expression,
    STATE(179), 1,
      sym__shift_expression,
    STATE(181), 1,
      sym__additive_expression,
    STATE(182), 1,
      sym__wrapped_additive_expression,
    STATE(183), 1,
      sym__multiplicative_expression,
    STATE(184), 1,
      sym__wrapped_multiplicative_expression,
    STATE(185), 1,
      sym__simple_expression,
    STATE(192), 1,
      sym__wrapped_logical_and_expression,
    STATE(206), 1,
      sym__wrapped_shift_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(503), 1,
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
    STATE(205), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10230] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(81), 1,
      sym__block_comment,
    STATE(160), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(169), 1,
      sym__bitwise_or_expression,
    STATE(171), 1,
      sym__bitwise_xor_expression,
    STATE(172), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(173), 1,
      sym__bitwise_and_expression,
    STATE(174), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(175), 1,
      sym__equality_expression,
    STATE(176), 1,
      sym__wrapped_equality_expression,
    STATE(177), 1,
      sym__relational_expression,
    STATE(178), 1,
      sym__wrapped_relational_expression,
    STATE(179), 1,
      sym__shift_expression,
    STATE(181), 1,
      sym__additive_expression,
    STATE(182), 1,
      sym__wrapped_additive_expression,
    STATE(183), 1,
      sym__multiplicative_expression,
    STATE(184), 1,
      sym__wrapped_multiplicative_expression,
    STATE(185), 1,
      sym__simple_expression,
    STATE(206), 1,
      sym__wrapped_shift_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(503), 1,
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
    STATE(205), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10355] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(82), 1,
      sym__block_comment,
    STATE(171), 1,
      sym__bitwise_xor_expression,
    STATE(173), 1,
      sym__bitwise_and_expression,
    STATE(174), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(175), 1,
      sym__equality_expression,
    STATE(176), 1,
      sym__wrapped_equality_expression,
    STATE(177), 1,
      sym__relational_expression,
    STATE(178), 1,
      sym__wrapped_relational_expression,
    STATE(179), 1,
      sym__shift_expression,
    STATE(181), 1,
      sym__additive_expression,
    STATE(182), 1,
      sym__wrapped_additive_expression,
    STATE(183), 1,
      sym__multiplicative_expression,
    STATE(184), 1,
      sym__wrapped_multiplicative_expression,
    STATE(185), 1,
      sym__simple_expression,
    STATE(194), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(206), 1,
      sym__wrapped_shift_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(503), 1,
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
    STATE(205), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10480] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(83), 1,
      sym__block_comment,
    STATE(173), 1,
      sym__bitwise_and_expression,
    STATE(175), 1,
      sym__equality_expression,
    STATE(176), 1,
      sym__wrapped_equality_expression,
    STATE(177), 1,
      sym__relational_expression,
    STATE(178), 1,
      sym__wrapped_relational_expression,
    STATE(179), 1,
      sym__shift_expression,
    STATE(181), 1,
      sym__additive_expression,
    STATE(182), 1,
      sym__wrapped_additive_expression,
    STATE(183), 1,
      sym__multiplicative_expression,
    STATE(184), 1,
      sym__wrapped_multiplicative_expression,
    STATE(185), 1,
      sym__simple_expression,
    STATE(195), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(206), 1,
      sym__wrapped_shift_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(503), 1,
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
    STATE(205), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10605] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(84), 1,
      sym__block_comment,
    STATE(175), 1,
      sym__equality_expression,
    STATE(177), 1,
      sym__relational_expression,
    STATE(178), 1,
      sym__wrapped_relational_expression,
    STATE(179), 1,
      sym__shift_expression,
    STATE(181), 1,
      sym__additive_expression,
    STATE(182), 1,
      sym__wrapped_additive_expression,
    STATE(183), 1,
      sym__multiplicative_expression,
    STATE(184), 1,
      sym__wrapped_multiplicative_expression,
    STATE(185), 1,
      sym__simple_expression,
    STATE(196), 1,
      sym__wrapped_equality_expression,
    STATE(206), 1,
      sym__wrapped_shift_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(356), 1,
      sym__bitwise_and_expression,
    STATE(358), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(503), 1,
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
    STATE(205), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10730] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(85), 1,
      sym__block_comment,
    STATE(177), 1,
      sym__relational_expression,
    STATE(179), 1,
      sym__shift_expression,
    STATE(181), 1,
      sym__additive_expression,
    STATE(182), 1,
      sym__wrapped_additive_expression,
    STATE(183), 1,
      sym__multiplicative_expression,
    STATE(184), 1,
      sym__wrapped_multiplicative_expression,
    STATE(185), 1,
      sym__simple_expression,
    STATE(197), 1,
      sym__wrapped_relational_expression,
    STATE(206), 1,
      sym__wrapped_shift_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(356), 1,
      sym__bitwise_and_expression,
    STATE(358), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(359), 1,
      sym__equality_expression,
    STATE(360), 1,
      sym__wrapped_equality_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(503), 1,
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
    STATE(205), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10855] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(179), 1,
      sym__shift_expression,
    STATE(181), 1,
      sym__additive_expression,
    STATE(182), 1,
      sym__wrapped_additive_expression,
    STATE(183), 1,
      sym__multiplicative_expression,
    STATE(184), 1,
      sym__wrapped_multiplicative_expression,
    STATE(185), 1,
      sym__simple_expression,
    STATE(198), 1,
      sym__wrapped_shift_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(356), 1,
      sym__bitwise_and_expression,
    STATE(358), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(359), 1,
      sym__equality_expression,
    STATE(360), 1,
      sym__wrapped_equality_expression,
    STATE(361), 1,
      sym__relational_expression,
    STATE(362), 1,
      sym__wrapped_relational_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(503), 1,
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
    STATE(205), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10980] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(87), 1,
      sym__block_comment,
    STATE(181), 1,
      sym__additive_expression,
    STATE(183), 1,
      sym__multiplicative_expression,
    STATE(184), 1,
      sym__wrapped_multiplicative_expression,
    STATE(185), 1,
      sym__simple_expression,
    STATE(199), 1,
      sym__wrapped_additive_expression,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(356), 1,
      sym__bitwise_and_expression,
    STATE(358), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(359), 1,
      sym__equality_expression,
    STATE(360), 1,
      sym__wrapped_equality_expression,
    STATE(361), 1,
      sym__relational_expression,
    STATE(362), 1,
      sym__wrapped_relational_expression,
    STATE(363), 1,
      sym__shift_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(503), 1,
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
    STATE(205), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11105] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(88), 1,
      sym__block_comment,
    STATE(183), 1,
      sym__multiplicative_expression,
    STATE(185), 1,
      sym__simple_expression,
    STATE(200), 1,
      sym__wrapped_multiplicative_expression,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(342), 1,
      sym__wrapped_additive_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(356), 1,
      sym__bitwise_and_expression,
    STATE(358), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(359), 1,
      sym__equality_expression,
    STATE(360), 1,
      sym__wrapped_equality_expression,
    STATE(361), 1,
      sym__relational_expression,
    STATE(362), 1,
      sym__wrapped_relational_expression,
    STATE(363), 1,
      sym__shift_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(503), 1,
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
    STATE(205), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11230] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(201), 1,
      sym__simple_expression,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(342), 1,
      sym__wrapped_additive_expression,
    STATE(345), 1,
      sym__multiplicative_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(354), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(356), 1,
      sym__bitwise_and_expression,
    STATE(358), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(359), 1,
      sym__equality_expression,
    STATE(360), 1,
      sym__wrapped_equality_expression,
    STATE(361), 1,
      sym__relational_expression,
    STATE(362), 1,
      sym__wrapped_relational_expression,
    STATE(363), 1,
      sym__shift_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(503), 1,
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
    STATE(205), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11355] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(90), 1,
      sym__block_comment,
    STATE(269), 1,
      sym__assignment_expression,
    STATE(270), 1,
      sym__logical_or_expression,
    STATE(271), 1,
      sym__wrapped_logical_or_expression,
    STATE(272), 1,
      sym__logical_and_expression,
    STATE(273), 1,
      sym__wrapped_logical_and_expression,
    STATE(274), 1,
      sym__bitwise_or_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(276), 1,
      sym__bitwise_xor_expression,
    STATE(277), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(278), 1,
      sym__bitwise_and_expression,
    STATE(279), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(280), 1,
      sym__equality_expression,
    STATE(281), 1,
      sym__wrapped_equality_expression,
    STATE(282), 1,
      sym__relational_expression,
    STATE(283), 1,
      sym__wrapped_relational_expression,
    STATE(284), 1,
      sym__shift_expression,
    STATE(285), 1,
      sym__wrapped_shift_expression,
    STATE(286), 1,
      sym__additive_expression,
    STATE(287), 1,
      sym__wrapped_additive_expression,
    STATE(288), 1,
      sym__multiplicative_expression,
    STATE(289), 1,
      sym__wrapped_multiplicative_expression,
    STATE(290), 1,
      sym__simple_expression,
    STATE(291), 1,
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
    STATE(294), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11480] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(59), 1,
      sym_unary_minus_operator,
    ACTIONS(63), 1,
      sym_relocation_type,
    ACTIONS(69), 1,
      aux_sym_decimal_token1,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(91), 1,
      sym__block_comment,
    STATE(207), 1,
      sym__bitwise_or_expression,
    STATE(209), 1,
      sym__multiplicative_expression,
    STATE(210), 1,
      sym__wrapped_multiplicative_expression,
    STATE(212), 1,
      sym__logical_or_expression,
    STATE(214), 1,
      sym__logical_and_expression,
    STATE(215), 1,
      sym__wrapped_logical_and_expression,
    STATE(217), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(218), 1,
      sym__bitwise_xor_expression,
    STATE(219), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(220), 1,
      sym__equality_expression,
    STATE(221), 1,
      sym__wrapped_equality_expression,
    STATE(222), 1,
      sym__bitwise_and_expression,
    STATE(223), 1,
      sym__relational_expression,
    STATE(224), 1,
      sym__wrapped_relational_expression,
    STATE(225), 1,
      sym__simple_expression,
    STATE(226), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(232), 1,
      sym__wrapped_shift_expression,
    STATE(237), 1,
      sym__wrapped_logical_or_expression,
    STATE(238), 1,
      sym__additive_expression,
    STATE(239), 1,
      sym__wrapped_additive_expression,
    STATE(245), 1,
      sym__shift_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(499), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(61), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(67), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(65), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(248), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11605] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(92), 1,
      sym__block_comment,
    STATE(270), 1,
      sym__logical_or_expression,
    STATE(272), 1,
      sym__logical_and_expression,
    STATE(273), 1,
      sym__wrapped_logical_and_expression,
    STATE(274), 1,
      sym__bitwise_or_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(276), 1,
      sym__bitwise_xor_expression,
    STATE(277), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(278), 1,
      sym__bitwise_and_expression,
    STATE(279), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(280), 1,
      sym__equality_expression,
    STATE(281), 1,
      sym__wrapped_equality_expression,
    STATE(282), 1,
      sym__relational_expression,
    STATE(283), 1,
      sym__wrapped_relational_expression,
    STATE(284), 1,
      sym__shift_expression,
    STATE(285), 1,
      sym__wrapped_shift_expression,
    STATE(286), 1,
      sym__additive_expression,
    STATE(287), 1,
      sym__wrapped_additive_expression,
    STATE(288), 1,
      sym__multiplicative_expression,
    STATE(289), 1,
      sym__wrapped_multiplicative_expression,
    STATE(290), 1,
      sym__simple_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(500), 1,
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
    STATE(294), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11730] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(93), 1,
      sym__block_comment,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(342), 1,
      sym__wrapped_additive_expression,
    STATE(345), 1,
      sym__multiplicative_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(354), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(356), 1,
      sym__bitwise_and_expression,
    STATE(357), 1,
      sym__simple_expression,
    STATE(358), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(359), 1,
      sym__equality_expression,
    STATE(360), 1,
      sym__wrapped_equality_expression,
    STATE(361), 1,
      sym__relational_expression,
    STATE(362), 1,
      sym__wrapped_relational_expression,
    STATE(363), 1,
      sym__shift_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(502), 1,
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
    STATE(336), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11855] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(94), 1,
      sym__block_comment,
    STATE(165), 1,
      sym__logical_or_expression,
    STATE(167), 1,
      sym__logical_and_expression,
    STATE(168), 1,
      sym__wrapped_logical_and_expression,
    STATE(169), 1,
      sym__bitwise_or_expression,
    STATE(170), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(171), 1,
      sym__bitwise_xor_expression,
    STATE(172), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(173), 1,
      sym__bitwise_and_expression,
    STATE(174), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(175), 1,
      sym__equality_expression,
    STATE(176), 1,
      sym__wrapped_equality_expression,
    STATE(177), 1,
      sym__relational_expression,
    STATE(178), 1,
      sym__wrapped_relational_expression,
    STATE(179), 1,
      sym__shift_expression,
    STATE(181), 1,
      sym__additive_expression,
    STATE(182), 1,
      sym__wrapped_additive_expression,
    STATE(183), 1,
      sym__multiplicative_expression,
    STATE(184), 1,
      sym__wrapped_multiplicative_expression,
    STATE(185), 1,
      sym__simple_expression,
    STATE(193), 1,
      sym__wrapped_logical_or_expression,
    STATE(206), 1,
      sym__wrapped_shift_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(503), 1,
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
    STATE(205), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11980] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      sym_unary_minus_operator,
    ACTIONS(147), 1,
      sym_relocation_type,
    ACTIONS(153), 1,
      aux_sym_decimal_token1,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(95), 1,
      sym__block_comment,
    STATE(112), 1,
      sym__additive_expression,
    STATE(119), 1,
      sym__assignment_expression,
    STATE(120), 1,
      sym__logical_or_expression,
    STATE(121), 1,
      sym__wrapped_logical_or_expression,
    STATE(122), 1,
      sym__logical_and_expression,
    STATE(123), 1,
      sym__wrapped_logical_and_expression,
    STATE(124), 1,
      sym__bitwise_or_expression,
    STATE(125), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(126), 1,
      sym__bitwise_xor_expression,
    STATE(127), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(128), 1,
      sym__bitwise_and_expression,
    STATE(129), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(130), 1,
      sym__equality_expression,
    STATE(131), 1,
      sym__wrapped_equality_expression,
    STATE(133), 1,
      sym__wrapped_relational_expression,
    STATE(134), 1,
      sym__shift_expression,
    STATE(135), 1,
      sym__wrapped_shift_expression,
    STATE(136), 1,
      sym__wrapped_additive_expression,
    STATE(137), 1,
      sym__multiplicative_expression,
    STATE(138), 1,
      sym__wrapped_multiplicative_expression,
    STATE(139), 1,
      sym__simple_expression,
    STATE(140), 1,
      sym__wrapped_assignment_expression,
    STATE(159), 1,
      sym__relational_expression,
    ACTIONS(145), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(151), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(149), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(115), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12105] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(96), 1,
      sym__block_comment,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(323), 1,
      sym__wrapped_assignment_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(342), 1,
      sym__wrapped_additive_expression,
    STATE(345), 1,
      sym__multiplicative_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(354), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(356), 1,
      sym__bitwise_and_expression,
    STATE(357), 1,
      sym__simple_expression,
    STATE(358), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(359), 1,
      sym__equality_expression,
    STATE(360), 1,
      sym__wrapped_equality_expression,
    STATE(361), 1,
      sym__relational_expression,
    STATE(362), 1,
      sym__wrapped_relational_expression,
    STATE(363), 1,
      sym__shift_expression,
    STATE(364), 1,
      sym__assignment_expression,
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
    STATE(336), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12230] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(97), 1,
      sym__block_comment,
    STATE(164), 1,
      sym__assignment_expression,
    STATE(165), 1,
      sym__logical_or_expression,
    STATE(166), 1,
      sym__wrapped_logical_or_expression,
    STATE(167), 1,
      sym__logical_and_expression,
    STATE(168), 1,
      sym__wrapped_logical_and_expression,
    STATE(169), 1,
      sym__bitwise_or_expression,
    STATE(170), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(171), 1,
      sym__bitwise_xor_expression,
    STATE(172), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(173), 1,
      sym__bitwise_and_expression,
    STATE(174), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(175), 1,
      sym__equality_expression,
    STATE(176), 1,
      sym__wrapped_equality_expression,
    STATE(177), 1,
      sym__relational_expression,
    STATE(178), 1,
      sym__wrapped_relational_expression,
    STATE(179), 1,
      sym__shift_expression,
    STATE(181), 1,
      sym__additive_expression,
    STATE(182), 1,
      sym__wrapped_additive_expression,
    STATE(183), 1,
      sym__multiplicative_expression,
    STATE(184), 1,
      sym__wrapped_multiplicative_expression,
    STATE(185), 1,
      sym__simple_expression,
    STATE(186), 1,
      sym__wrapped_assignment_expression,
    STATE(206), 1,
      sym__wrapped_shift_expression,
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
    STATE(205), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12355] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(98), 1,
      sym__block_comment,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(342), 1,
      sym__wrapped_additive_expression,
    STATE(345), 1,
      sym__multiplicative_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(354), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(356), 1,
      sym__bitwise_and_expression,
    STATE(357), 1,
      sym__simple_expression,
    STATE(358), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(359), 1,
      sym__equality_expression,
    STATE(360), 1,
      sym__wrapped_equality_expression,
    STATE(361), 1,
      sym__relational_expression,
    STATE(362), 1,
      sym__wrapped_relational_expression,
    STATE(363), 1,
      sym__shift_expression,
    STATE(364), 1,
      sym__assignment_expression,
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
    STATE(336), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12480] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(99), 1,
      sym__block_comment,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(342), 1,
      sym__wrapped_additive_expression,
    STATE(345), 1,
      sym__multiplicative_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(354), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(356), 1,
      sym__bitwise_and_expression,
    STATE(357), 1,
      sym__simple_expression,
    STATE(358), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(359), 1,
      sym__equality_expression,
    STATE(360), 1,
      sym__wrapped_equality_expression,
    STATE(361), 1,
      sym__relational_expression,
    STATE(362), 1,
      sym__wrapped_relational_expression,
    STATE(363), 1,
      sym__shift_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(473), 1,
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
    STATE(336), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12605] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(100), 1,
      sym__block_comment,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(342), 1,
      sym__wrapped_additive_expression,
    STATE(345), 1,
      sym__multiplicative_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(354), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(356), 1,
      sym__bitwise_and_expression,
    STATE(357), 1,
      sym__simple_expression,
    STATE(358), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(359), 1,
      sym__equality_expression,
    STATE(360), 1,
      sym__wrapped_equality_expression,
    STATE(361), 1,
      sym__relational_expression,
    STATE(362), 1,
      sym__wrapped_relational_expression,
    STATE(363), 1,
      sym__shift_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(474), 1,
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
    STATE(336), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12730] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(341), 1,
      sym__logical_or_expression,
    STATE(342), 1,
      sym__wrapped_additive_expression,
    STATE(345), 1,
      sym__multiplicative_expression,
    STATE(348), 1,
      sym__logical_and_expression,
    STATE(350), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__bitwise_or_expression,
    STATE(352), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(353), 1,
      sym__bitwise_xor_expression,
    STATE(354), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(356), 1,
      sym__bitwise_and_expression,
    STATE(357), 1,
      sym__simple_expression,
    STATE(358), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(359), 1,
      sym__equality_expression,
    STATE(360), 1,
      sym__wrapped_equality_expression,
    STATE(361), 1,
      sym__relational_expression,
    STATE(362), 1,
      sym__wrapped_relational_expression,
    STATE(363), 1,
      sym__shift_expression,
    STATE(364), 1,
      sym__assignment_expression,
    STATE(442), 1,
      sym__wrapped_logical_or_expression,
    STATE(502), 1,
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
    STATE(336), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12855] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    ACTIONS(215), 1,
      aux_sym__whitespace_token1,
    STATE(102), 1,
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
  [12915] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      sym__block_comment,
    STATE(534), 1,
      sym__line_comment,
    ACTIONS(219), 42,
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
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    STATE(104), 1,
      sym__block_comment,
    STATE(524), 1,
      sym__line_comment,
    ACTIONS(219), 42,
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
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
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
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
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
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
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
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
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
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
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
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    STATE(110), 1,
      sym__block_comment,
    ACTIONS(219), 42,
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
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
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
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
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
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(114), 1,
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
  [13519] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(115), 1,
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
  [13554] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(116), 1,
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
  [13589] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(117), 1,
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
  [13624] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(118), 1,
      sym__block_comment,
    ACTIONS(265), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(267), 17,
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
  [13659] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(119), 1,
      sym__block_comment,
    ACTIONS(269), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(271), 17,
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
  [13694] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(120), 1,
      sym__block_comment,
    ACTIONS(273), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(275), 17,
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
  [13729] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(281), 1,
      sym_logical_or_operator,
    STATE(121), 1,
      sym__block_comment,
    ACTIONS(277), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(279), 16,
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
  [13766] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(122), 1,
      sym__block_comment,
    ACTIONS(283), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(285), 17,
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
  [13801] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(291), 1,
      sym_logical_and_operator,
    STATE(123), 1,
      sym__block_comment,
    ACTIONS(287), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(289), 16,
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
  [13838] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(124), 1,
      sym__block_comment,
    ACTIONS(293), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(295), 17,
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
  [13873] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(301), 1,
      sym_bitwise_or_operator,
    STATE(125), 1,
      sym__block_comment,
    ACTIONS(297), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(299), 16,
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
  [13910] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(126), 1,
      sym__block_comment,
    ACTIONS(303), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(305), 17,
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
  [13945] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(311), 1,
      sym_bitwise_xor_operator,
    STATE(127), 1,
      sym__block_comment,
    ACTIONS(307), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(309), 16,
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
  [13982] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(128), 1,
      sym__block_comment,
    ACTIONS(313), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(315), 17,
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
  [14017] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(321), 1,
      sym_bitwise_and_operator,
    STATE(129), 1,
      sym__block_comment,
    ACTIONS(317), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(319), 16,
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
  [14054] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(130), 1,
      sym__block_comment,
    ACTIONS(323), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(325), 17,
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
  [14089] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(331), 1,
      sym_equality_operator,
    STATE(131), 1,
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
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [14126] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(132), 1,
      sym__block_comment,
    ACTIONS(333), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(335), 17,
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
  [14161] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(341), 1,
      sym_relational_operator,
    STATE(133), 1,
      sym__block_comment,
    ACTIONS(337), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(339), 16,
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
  [14198] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(134), 1,
      sym__block_comment,
    ACTIONS(343), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(345), 17,
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
  [14233] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(351), 1,
      sym_shift_operator,
    STATE(135), 1,
      sym__block_comment,
    ACTIONS(347), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(349), 16,
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
  [14270] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(357), 1,
      sym_additive_operator,
    STATE(136), 1,
      sym__block_comment,
    ACTIONS(353), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(355), 16,
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
  [14307] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(137), 1,
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
  [14342] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(367), 1,
      sym_multiplicative_operator,
    STATE(138), 1,
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
  [14379] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(139), 1,
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
  [14414] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(379), 1,
      sym_assignment_operator,
    STATE(140), 1,
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
  [14453] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(141), 1,
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
  [14488] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(142), 1,
      sym__block_comment,
    ACTIONS(385), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(387), 17,
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
  [14523] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(143), 1,
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
  [14558] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(144), 1,
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
  [14593] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(291), 1,
      sym_logical_and_operator,
    STATE(145), 1,
      sym__block_comment,
    ACTIONS(397), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(399), 16,
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
  [14630] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(301), 1,
      sym_bitwise_or_operator,
    STATE(146), 1,
      sym__block_comment,
    ACTIONS(401), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(403), 16,
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
  [14667] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(311), 1,
      sym_bitwise_xor_operator,
    STATE(147), 1,
      sym__block_comment,
    ACTIONS(405), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(407), 16,
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
  [14704] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(321), 1,
      sym_bitwise_and_operator,
    STATE(148), 1,
      sym__block_comment,
    ACTIONS(409), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(411), 16,
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
  [14741] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(331), 1,
      sym_equality_operator,
    STATE(149), 1,
      sym__block_comment,
    ACTIONS(413), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(415), 16,
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
  [14778] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(341), 1,
      sym_relational_operator,
    STATE(150), 1,
      sym__block_comment,
    ACTIONS(417), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(419), 16,
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
  [14815] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(351), 1,
      sym_shift_operator,
    STATE(151), 1,
      sym__block_comment,
    ACTIONS(421), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(423), 16,
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
  [14852] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(357), 1,
      sym_additive_operator,
    STATE(152), 1,
      sym__block_comment,
    ACTIONS(425), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(427), 16,
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
  [14889] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(367), 1,
      sym_multiplicative_operator,
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
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14926] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(154), 1,
      sym__block_comment,
    ACTIONS(433), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(435), 17,
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
  [14961] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(155), 1,
      sym__block_comment,
    ACTIONS(437), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(439), 17,
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
  [14996] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(156), 1,
      sym__block_comment,
    ACTIONS(441), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(443), 17,
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
  [15031] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(157), 1,
      sym__block_comment,
    ACTIONS(445), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(447), 17,
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
  [15066] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(158), 1,
      sym__block_comment,
    ACTIONS(451), 10,
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
    ACTIONS(449), 11,
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
  [15101] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(159), 1,
      sym__block_comment,
    ACTIONS(453), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(455), 17,
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
  [15136] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(457), 1,
      sym_bitwise_or_operator,
    STATE(160), 1,
      sym__block_comment,
    ACTIONS(403), 4,
      sym_assignment_operator,
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
  [15171] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(161), 1,
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
  [15204] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(162), 1,
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
  [15237] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(163), 1,
      sym__block_comment,
    ACTIONS(267), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(265), 14,
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
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(164), 1,
      sym__block_comment,
    ACTIONS(271), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(269), 14,
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
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(165), 1,
      sym__block_comment,
    ACTIONS(275), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(273), 14,
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
  [15336] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(459), 1,
      sym_logical_or_operator,
    STATE(166), 1,
      sym__block_comment,
    ACTIONS(279), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(277), 13,
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
  [15371] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(167), 1,
      sym__block_comment,
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
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15404] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(461), 1,
      sym_logical_and_operator,
    STATE(168), 1,
      sym__block_comment,
    ACTIONS(289), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(287), 13,
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
  [15439] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(169), 1,
      sym__block_comment,
    ACTIONS(295), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(293), 14,
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
  [15472] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(457), 1,
      sym_bitwise_or_operator,
    STATE(170), 1,
      sym__block_comment,
    ACTIONS(299), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(297), 14,
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
  [15507] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(171), 1,
      sym__block_comment,
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
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15540] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(463), 1,
      sym_bitwise_xor_operator,
    STATE(172), 1,
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
  [15575] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(173), 1,
      sym__block_comment,
    ACTIONS(315), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(313), 14,
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
  [15608] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(465), 1,
      sym_bitwise_and_operator,
    STATE(174), 1,
      sym__block_comment,
    ACTIONS(319), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [15643] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(175), 1,
      sym__block_comment,
    ACTIONS(325), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(323), 14,
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
  [15676] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(467), 1,
      sym_equality_operator,
    STATE(176), 1,
      sym__block_comment,
    ACTIONS(329), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(327), 13,
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
  [15711] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(177), 1,
      sym__block_comment,
    ACTIONS(455), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(453), 14,
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
  [15744] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(469), 1,
      sym_relational_operator,
    STATE(178), 1,
      sym__block_comment,
    ACTIONS(339), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [15779] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(179), 1,
      sym__block_comment,
    ACTIONS(345), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(343), 14,
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
  [15812] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(180), 1,
      sym__block_comment,
    ACTIONS(449), 8,
      anon_sym_LPAREN,
      aux_sym_option_flag_token1,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
      sym_binary,
      sym_hexadecimal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(451), 11,
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
  [15845] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(181), 1,
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
  [15878] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(471), 1,
      sym_additive_operator,
    STATE(182), 1,
      sym__block_comment,
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
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [15913] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(183), 1,
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
  [15946] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(473), 1,
      sym_multiplicative_operator,
    STATE(184), 1,
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
  [15981] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(185), 1,
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
  [16014] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(475), 1,
      anon_sym_LPAREN,
    ACTIONS(477), 1,
      sym_assignment_operator,
    STATE(186), 1,
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
  [16051] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(187), 1,
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
  [16084] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(188), 1,
      sym__block_comment,
    ACTIONS(479), 8,
      anon_sym_LPAREN,
      aux_sym_option_flag_token1,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
      sym_binary,
      sym_hexadecimal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(481), 11,
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
  [16117] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(189), 1,
      sym__block_comment,
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
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16150] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(190), 1,
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
  [16183] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(191), 1,
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
  [16216] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(461), 1,
      sym_logical_and_operator,
    STATE(192), 1,
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
  [16251] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(193), 1,
      sym__block_comment,
    ACTIONS(335), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
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
  [16284] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(463), 1,
      sym_bitwise_xor_operator,
    STATE(194), 1,
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
  [16319] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(465), 1,
      sym_bitwise_and_operator,
    STATE(195), 1,
      sym__block_comment,
    ACTIONS(411), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [16354] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(467), 1,
      sym_equality_operator,
    STATE(196), 1,
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
  [16389] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(469), 1,
      sym_relational_operator,
    STATE(197), 1,
      sym__block_comment,
    ACTIONS(419), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [16424] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(483), 1,
      sym_shift_operator,
    STATE(198), 1,
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
  [16459] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(471), 1,
      sym_additive_operator,
    STATE(199), 1,
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
  [16494] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(473), 1,
      sym_multiplicative_operator,
    STATE(200), 1,
      sym__block_comment,
    ACTIONS(431), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(429), 14,
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
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(201), 1,
      sym__block_comment,
    ACTIONS(435), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [16562] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(202), 1,
      sym__block_comment,
    ACTIONS(439), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(437), 14,
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
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(203), 1,
      sym__block_comment,
    ACTIONS(443), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [16628] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(204), 1,
      sym__block_comment,
    ACTIONS(447), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(445), 14,
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
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(205), 1,
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
  [16694] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(483), 1,
      sym_shift_operator,
    STATE(206), 1,
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
  [16729] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(207), 1,
      sym__block_comment,
    ACTIONS(295), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(293), 13,
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
  [16761] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(208), 1,
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
  [16793] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(209), 1,
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
  [16825] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(485), 1,
      sym_multiplicative_operator,
    STATE(210), 1,
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
  [16859] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(487), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      sym_assignment_operator,
    STATE(211), 1,
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
  [16895] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(212), 1,
      sym__block_comment,
    ACTIONS(275), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(273), 13,
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
  [16927] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(491), 1,
      sym_logical_or_operator,
    STATE(213), 1,
      sym__block_comment,
    ACTIONS(279), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(277), 12,
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
  [16961] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(214), 1,
      sym__block_comment,
    ACTIONS(285), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(283), 13,
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
  [16993] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(493), 1,
      sym_logical_and_operator,
    STATE(215), 1,
      sym__block_comment,
    ACTIONS(289), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(287), 12,
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
  [17027] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(495), 1,
      sym_equality_operator,
    STATE(216), 1,
      sym__block_comment,
    ACTIONS(415), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(413), 12,
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
  [17061] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(497), 1,
      sym_bitwise_or_operator,
    STATE(217), 1,
      sym__block_comment,
    ACTIONS(299), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(297), 13,
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
  [17095] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(218), 1,
      sym__block_comment,
    ACTIONS(305), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(303), 13,
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
  [17127] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(499), 1,
      sym_bitwise_xor_operator,
    STATE(219), 1,
      sym__block_comment,
    ACTIONS(309), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(307), 12,
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
  [17161] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(220), 1,
      sym__block_comment,
    ACTIONS(325), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(323), 13,
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
  [17193] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(495), 1,
      sym_equality_operator,
    STATE(221), 1,
      sym__block_comment,
    ACTIONS(329), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(327), 12,
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
  [17227] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(222), 1,
      sym__block_comment,
    ACTIONS(315), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(313), 13,
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
  [17259] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(223), 1,
      sym__block_comment,
    ACTIONS(455), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(453), 13,
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
  [17291] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(501), 1,
      sym_relational_operator,
    STATE(224), 1,
      sym__block_comment,
    ACTIONS(339), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [17325] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(225), 1,
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
  [17357] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(503), 1,
      sym_bitwise_and_operator,
    STATE(226), 1,
      sym__block_comment,
    ACTIONS(319), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [17391] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(227), 1,
      sym__block_comment,
    ACTIONS(271), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(269), 13,
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
  [17423] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(505), 1,
      sym_shift_operator,
    STATE(228), 1,
      sym__block_comment,
    ACTIONS(423), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(421), 12,
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
  [17457] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(507), 1,
      sym_additive_operator,
    STATE(229), 1,
      sym__block_comment,
    ACTIONS(427), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(425), 12,
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
  [17491] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(485), 1,
      sym_multiplicative_operator,
    STATE(230), 1,
      sym__block_comment,
    ACTIONS(431), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(429), 13,
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
  [17525] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(231), 1,
      sym__block_comment,
    ACTIONS(435), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [17557] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(505), 1,
      sym_shift_operator,
    STATE(232), 1,
      sym__block_comment,
    ACTIONS(349), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(347), 12,
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
  [17591] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(233), 1,
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
  [17623] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(234), 1,
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
  [17655] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(235), 1,
      sym__block_comment,
    ACTIONS(443), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [17687] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(236), 1,
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
  [17719] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(237), 1,
      sym__block_comment,
    ACTIONS(335), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
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
  [17751] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(238), 1,
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
  [17783] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(507), 1,
      sym_additive_operator,
    STATE(239), 1,
      sym__block_comment,
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
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [17817] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(240), 1,
      sym__block_comment,
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
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17849] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(241), 1,
      sym__block_comment,
    ACTIONS(509), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(251), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(249), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17883] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(242), 1,
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
  [17915] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(243), 1,
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
  [17947] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(503), 1,
      sym_bitwise_and_operator,
    STATE(244), 1,
      sym__block_comment,
    ACTIONS(411), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [17981] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(245), 1,
      sym__block_comment,
    ACTIONS(345), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(343), 13,
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
  [18013] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(493), 1,
      sym_logical_and_operator,
    STATE(246), 1,
      sym__block_comment,
    ACTIONS(399), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(397), 12,
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
  [18047] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(497), 1,
      sym_bitwise_or_operator,
    STATE(247), 1,
      sym__block_comment,
    ACTIONS(403), 4,
      sym_assignment_operator,
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
  [18081] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(248), 1,
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
  [18113] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(499), 1,
      sym_bitwise_xor_operator,
    STATE(249), 1,
      sym__block_comment,
    ACTIONS(407), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(405), 12,
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
  [18147] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(250), 1,
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
  [18179] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(251), 1,
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
  [18211] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(501), 1,
      sym_relational_operator,
    STATE(252), 1,
      sym__block_comment,
    ACTIONS(419), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [18245] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(253), 1,
      sym__block_comment,
    ACTIONS(249), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(251), 14,
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
  [18276] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(254), 1,
      sym__block_comment,
    ACTIONS(513), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(511), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(255), 12,
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
  [18309] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(255), 1,
      sym__block_comment,
    ACTIONS(441), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(443), 14,
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
  [18340] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(256), 1,
      sym__block_comment,
    ACTIONS(445), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(447), 14,
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
  [18371] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
  [18402] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(258), 1,
      sym__block_comment,
    ACTIONS(381), 7,
      anon_sym_LPAREN,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
      sym_binary,
      sym_hexadecimal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
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
  [18433] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(259), 1,
      sym__block_comment,
    ACTIONS(385), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(387), 14,
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
  [18464] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(260), 1,
      sym__block_comment,
    ACTIONS(449), 6,
      anon_sym_LPAREN,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
      sym_binary,
      sym_hexadecimal,
      anon_sym_SQUOTE,
    ACTIONS(451), 10,
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
  [18494] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(515), 1,
      anon_sym_RPAREN,
    STATE(261), 1,
      sym__block_comment,
    ACTIONS(255), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(253), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18525] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(517), 1,
      anon_sym_RPAREN,
    STATE(262), 1,
      sym__block_comment,
    ACTIONS(255), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(253), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18556] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(263), 1,
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
  [18585] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(264), 1,
      sym__block_comment,
    ACTIONS(439), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(437), 10,
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
  [18614] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(265), 1,
      sym__block_comment,
    ACTIONS(443), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [18643] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(266), 1,
      sym__block_comment,
    ACTIONS(447), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(445), 10,
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
  [18672] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(267), 1,
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
  [18701] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(268), 1,
      sym__block_comment,
    ACTIONS(267), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(265), 10,
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
  [18730] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(269), 1,
      sym__block_comment,
    ACTIONS(271), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(269), 10,
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
  [18759] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(270), 1,
      sym__block_comment,
    ACTIONS(275), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(273), 10,
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
  [18788] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(519), 1,
      sym_logical_or_operator,
    STATE(271), 1,
      sym__block_comment,
    ACTIONS(279), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(277), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18819] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(272), 1,
      sym__block_comment,
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
  [18848] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(521), 1,
      sym_logical_and_operator,
    STATE(273), 1,
      sym__block_comment,
    ACTIONS(289), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(287), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18879] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(274), 1,
      sym__block_comment,
    ACTIONS(295), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(293), 10,
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
  [18908] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(523), 1,
      sym_bitwise_or_operator,
    STATE(275), 1,
      sym__block_comment,
    ACTIONS(299), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(297), 10,
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
  [18939] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(276), 1,
      sym__block_comment,
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
  [18968] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(525), 1,
      sym_bitwise_xor_operator,
    STATE(277), 1,
      sym__block_comment,
    ACTIONS(309), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(307), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18999] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(278), 1,
      sym__block_comment,
    ACTIONS(315), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(313), 10,
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
  [19028] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(527), 1,
      sym_bitwise_and_operator,
    STATE(279), 1,
      sym__block_comment,
    ACTIONS(319), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [19059] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(280), 1,
      sym__block_comment,
    ACTIONS(325), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
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
  [19088] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(529), 1,
      sym_equality_operator,
    STATE(281), 1,
      sym__block_comment,
    ACTIONS(329), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(327), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19119] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(282), 1,
      sym__block_comment,
    ACTIONS(455), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(453), 10,
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
  [19148] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(531), 1,
      sym_relational_operator,
    STATE(283), 1,
      sym__block_comment,
    ACTIONS(339), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [19179] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(284), 1,
      sym__block_comment,
    ACTIONS(345), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(343), 10,
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
  [19208] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(533), 1,
      sym_shift_operator,
    STATE(285), 1,
      sym__block_comment,
    ACTIONS(349), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(347), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [19239] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(286), 1,
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
  [19268] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(535), 1,
      sym_additive_operator,
    STATE(287), 1,
      sym__block_comment,
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
  [19299] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(288), 1,
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
  [19328] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(537), 1,
      sym_multiplicative_operator,
    STATE(289), 1,
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
  [19359] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(290), 1,
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
  [19388] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(539), 1,
      anon_sym_LPAREN,
    ACTIONS(541), 1,
      sym_assignment_operator,
    STATE(291), 1,
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
  [19421] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(543), 1,
      anon_sym_RPAREN,
    STATE(292), 1,
      sym__block_comment,
    ACTIONS(255), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(253), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19452] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(293), 1,
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
  [19481] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(294), 1,
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
  [19510] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(295), 1,
      sym__block_comment,
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
  [19539] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(296), 1,
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
  [19568] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(297), 1,
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
  [19597] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(521), 1,
      sym_logical_and_operator,
    STATE(298), 1,
      sym__block_comment,
    ACTIONS(399), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(397), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19628] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(523), 1,
      sym_bitwise_or_operator,
    STATE(299), 1,
      sym__block_comment,
    ACTIONS(403), 4,
      sym_assignment_operator,
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
  [19659] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(525), 1,
      sym_bitwise_xor_operator,
    STATE(300), 1,
      sym__block_comment,
    ACTIONS(407), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(405), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19690] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(527), 1,
      sym_bitwise_and_operator,
    STATE(301), 1,
      sym__block_comment,
    ACTIONS(411), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [19721] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(529), 1,
      sym_equality_operator,
    STATE(302), 1,
      sym__block_comment,
    ACTIONS(415), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(413), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19752] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(531), 1,
      sym_relational_operator,
    STATE(303), 1,
      sym__block_comment,
    ACTIONS(419), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [19783] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(533), 1,
      sym_shift_operator,
    STATE(304), 1,
      sym__block_comment,
    ACTIONS(423), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(421), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [19814] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(535), 1,
      sym_additive_operator,
    STATE(305), 1,
      sym__block_comment,
    ACTIONS(427), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(425), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [19845] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(537), 1,
      sym_multiplicative_operator,
    STATE(306), 1,
      sym__block_comment,
    ACTIONS(431), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(429), 10,
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
  [19876] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(307), 1,
      sym__block_comment,
    ACTIONS(435), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [19905] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(308), 1,
      sym__block_comment,
    ACTIONS(335), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
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
  [19934] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(545), 1,
      anon_sym_RPAREN,
    STATE(309), 1,
      sym__block_comment,
    ACTIONS(255), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(253), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19965] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(547), 1,
      anon_sym_RPAREN,
    STATE(310), 1,
      sym__block_comment,
    ACTIONS(255), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(253), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19996] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
    STATE(311), 1,
      sym__block_comment,
    ACTIONS(255), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(253), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20027] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(551), 1,
      anon_sym_RPAREN,
    STATE(312), 1,
      sym__block_comment,
    ACTIONS(255), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(253), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20058] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    STATE(313), 1,
      sym__block_comment,
    ACTIONS(255), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(253), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20089] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
    STATE(314), 1,
      sym__block_comment,
    ACTIONS(255), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(253), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20120] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
    STATE(315), 1,
      sym__block_comment,
    ACTIONS(255), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(253), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20151] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
    STATE(316), 1,
      sym__block_comment,
    ACTIONS(255), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(253), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20182] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
    STATE(317), 1,
      sym__block_comment,
    ACTIONS(255), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(253), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20213] = 15,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    ACTIONS(571), 1,
      sym_assignment_operator,
    ACTIONS(573), 1,
      sym__operand_separator,
    ACTIONS(575), 1,
      sym__data_separator,
    STATE(12), 1,
      sym__data_separator_comment,
    STATE(318), 1,
      sym__block_comment,
    STATE(322), 1,
      aux_sym_numeric_operands_repeat1,
    STATE(386), 1,
      aux_sym_numeric_operands_repeat2,
    STATE(387), 1,
      aux_sym_numeric_operands_repeat3,
    ACTIONS(563), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(565), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(569), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [20262] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(319), 1,
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
  [20289] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(577), 1,
      sym_shift_operator,
    STATE(320), 1,
      sym__block_comment,
    ACTIONS(349), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(347), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [20318] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(321), 1,
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
  [20345] = 13,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    ACTIONS(573), 1,
      sym__operand_separator,
    ACTIONS(575), 1,
      sym__data_separator,
    STATE(12), 1,
      sym__data_separator_comment,
    STATE(322), 1,
      sym__block_comment,
    STATE(367), 1,
      aux_sym_numeric_operands_repeat1,
    STATE(390), 1,
      aux_sym_numeric_operands_repeat2,
    STATE(395), 1,
      aux_sym_numeric_operands_repeat3,
    ACTIONS(569), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(579), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(581), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [20388] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(583), 1,
      anon_sym_LPAREN,
    ACTIONS(585), 1,
      sym_assignment_operator,
    STATE(323), 1,
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
  [20419] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(324), 1,
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
  [20446] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(325), 1,
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
  [20473] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(587), 1,
      sym_logical_and_operator,
    STATE(326), 1,
      sym__block_comment,
    ACTIONS(399), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(397), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20502] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(589), 1,
      sym_bitwise_or_operator,
    STATE(327), 1,
      sym__block_comment,
    ACTIONS(403), 4,
      sym_assignment_operator,
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
  [20531] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(591), 1,
      sym_bitwise_xor_operator,
    STATE(328), 1,
      sym__block_comment,
    ACTIONS(407), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(405), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20560] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(593), 1,
      sym_bitwise_and_operator,
    STATE(329), 1,
      sym__block_comment,
    ACTIONS(411), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [20589] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(595), 1,
      sym_equality_operator,
    STATE(330), 1,
      sym__block_comment,
    ACTIONS(415), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(413), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20618] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(597), 1,
      sym_relational_operator,
    STATE(331), 1,
      sym__block_comment,
    ACTIONS(419), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [20647] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(577), 1,
      sym_shift_operator,
    STATE(332), 1,
      sym__block_comment,
    ACTIONS(423), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(421), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [20676] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(599), 1,
      sym_additive_operator,
    STATE(333), 1,
      sym__block_comment,
    ACTIONS(427), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(425), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [20705] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(601), 1,
      sym_multiplicative_operator,
    STATE(334), 1,
      sym__block_comment,
    ACTIONS(431), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(429), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20734] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(335), 1,
      sym__block_comment,
    ACTIONS(435), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [20761] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
  [20788] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
  [20815] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
  [20842] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(339), 1,
      sym__block_comment,
    ACTIONS(267), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(265), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20869] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(340), 1,
      sym__block_comment,
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
  [20896] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(341), 1,
      sym__block_comment,
    ACTIONS(275), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(273), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20923] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(599), 1,
      sym_additive_operator,
    STATE(342), 1,
      sym__block_comment,
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
  [20952] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(343), 1,
      sym__block_comment,
    ACTIONS(443), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [20979] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(344), 1,
      sym__block_comment,
    ACTIONS(447), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(445), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21006] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(345), 1,
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
  [21033] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(603), 1,
      sym_logical_or_operator,
    STATE(346), 1,
      sym__block_comment,
    ACTIONS(279), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(277), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21062] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(347), 1,
      sym__block_comment,
    ACTIONS(335), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
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
  [21089] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(348), 1,
      sym__block_comment,
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
  [21116] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(349), 1,
      sym__block_comment,
    ACTIONS(439), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(437), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21143] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(587), 1,
      sym_logical_and_operator,
    STATE(350), 1,
      sym__block_comment,
    ACTIONS(289), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(287), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21172] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(351), 1,
      sym__block_comment,
    ACTIONS(295), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(293), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21199] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(589), 1,
      sym_bitwise_or_operator,
    STATE(352), 1,
      sym__block_comment,
    ACTIONS(299), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(297), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21228] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(353), 1,
      sym__block_comment,
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
  [21255] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(601), 1,
      sym_multiplicative_operator,
    STATE(354), 1,
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
  [21284] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(591), 1,
      sym_bitwise_xor_operator,
    STATE(355), 1,
      sym__block_comment,
    ACTIONS(309), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(307), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21313] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(356), 1,
      sym__block_comment,
    ACTIONS(315), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(313), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21340] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(357), 1,
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
  [21367] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(593), 1,
      sym_bitwise_and_operator,
    STATE(358), 1,
      sym__block_comment,
    ACTIONS(319), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [21396] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(359), 1,
      sym__block_comment,
    ACTIONS(325), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
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
  [21423] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(595), 1,
      sym_equality_operator,
    STATE(360), 1,
      sym__block_comment,
    ACTIONS(329), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(327), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21452] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(361), 1,
      sym__block_comment,
    ACTIONS(455), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(453), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21479] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(597), 1,
      sym_relational_operator,
    STATE(362), 1,
      sym__block_comment,
    ACTIONS(339), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [21508] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(363), 1,
      sym__block_comment,
    ACTIONS(345), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(343), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21535] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(364), 1,
      sym__block_comment,
    ACTIONS(271), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(269), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21562] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(281), 1,
      sym_logical_or_operator,
    STATE(365), 1,
      sym__block_comment,
    ACTIONS(333), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(335), 7,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
      sym_assignment_operator,
  [21590] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(571), 1,
      sym_assignment_operator,
    STATE(366), 1,
      sym__block_comment,
    ACTIONS(605), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(607), 5,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
  [21619] = 10,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(613), 1,
      anon_sym_COMMA,
    ACTIONS(619), 1,
      sym__operand_separator,
    ACTIONS(622), 1,
      sym__data_separator,
    STATE(44), 1,
      sym__data_separator_comment,
    ACTIONS(609), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(611), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(616), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(367), 2,
      sym__block_comment,
      aux_sym_numeric_operands_repeat1,
  [21654] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
    ACTIONS(571), 1,
      sym_assignment_operator,
    STATE(368), 1,
      sym__block_comment,
    ACTIONS(609), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(611), 5,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
  [21683] = 10,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(629), 1,
      aux_sym__whitespace_token1,
    ACTIONS(632), 1,
      aux_sym__block_comment_token1,
    ACTIONS(635), 1,
      aux_sym__immediate_block_comment_token1,
    ACTIONS(638), 1,
      anon_sym_COMMA,
    ACTIONS(641), 1,
      anon_sym_DQUOTE,
    STATE(484), 1,
      sym__immediate_block_comment,
    ACTIONS(625), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(627), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    STATE(369), 3,
      sym__block_comment,
      sym_string,
      aux_sym_string_operands_repeat1,
  [21718] = 11,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(648), 1,
      aux_sym__whitespace_token1,
    ACTIONS(651), 1,
      aux_sym__block_comment_token1,
    ACTIONS(653), 1,
      aux_sym__immediate_block_comment_token1,
    ACTIONS(655), 1,
      anon_sym_COMMA,
    ACTIONS(657), 1,
      anon_sym_DQUOTE,
    STATE(370), 1,
      sym__block_comment,
    STATE(484), 1,
      sym__immediate_block_comment,
    ACTIONS(644), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(646), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    STATE(369), 2,
      sym_string,
      aux_sym_string_operands_repeat1,
  [21755] = 11,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(651), 1,
      aux_sym__block_comment_token1,
    ACTIONS(653), 1,
      aux_sym__immediate_block_comment_token1,
    ACTIONS(655), 1,
      anon_sym_COMMA,
    ACTIONS(657), 1,
      anon_sym_DQUOTE,
    ACTIONS(659), 1,
      aux_sym__whitespace_token1,
    STATE(371), 1,
      sym__block_comment,
    STATE(484), 1,
      sym__immediate_block_comment,
    ACTIONS(511), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(513), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    STATE(370), 2,
      sym_string,
      aux_sym_string_operands_repeat1,
  [21792] = 9,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(666), 1,
      sym__data_separator,
    STATE(8), 1,
      sym__control_operand_separator,
    STATE(188), 1,
      sym__data_separator_comment,
    STATE(372), 1,
      sym__block_comment,
    STATE(374), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(664), 2,
      sym__operand_separator,
      aux_sym__control_operand_separator_token1,
    ACTIONS(662), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [21824] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(459), 1,
      sym_logical_or_operator,
    STATE(373), 1,
      sym__block_comment,
    ACTIONS(333), 9,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_assignment_operator,
  [21848] = 9,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(666), 1,
      sym__data_separator,
    STATE(8), 1,
      sym__control_operand_separator,
    STATE(188), 1,
      sym__data_separator_comment,
    STATE(374), 1,
      sym__block_comment,
    STATE(375), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(664), 2,
      sym__operand_separator,
      aux_sym__control_operand_separator_token1,
    ACTIONS(668), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [21880] = 8,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(675), 1,
      sym__data_separator,
    STATE(8), 1,
      sym__control_operand_separator,
    STATE(188), 1,
      sym__data_separator_comment,
    ACTIONS(672), 2,
      sym__operand_separator,
      aux_sym__control_operand_separator_token1,
    STATE(375), 2,
      sym__block_comment,
      aux_sym_control_operands_repeat1,
    ACTIONS(670), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [21910] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(475), 1,
      anon_sym_LPAREN,
    ACTIONS(680), 1,
      sym_assignment_operator,
    STATE(376), 1,
      sym__block_comment,
    ACTIONS(678), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      aux_sym__control_operand_separator_token1,
  [21935] = 10,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(686), 1,
      aux_sym__whitespace_token1,
    ACTIONS(688), 1,
      aux_sym__block_comment_token1,
    ACTIONS(690), 1,
      aux_sym__immediate_block_comment_token1,
    ACTIONS(692), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym__immediate_block_comment,
    STATE(377), 1,
      sym__block_comment,
    STATE(448), 1,
      sym__call_expression,
    ACTIONS(682), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(684), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [21968] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(491), 1,
      sym_logical_or_operator,
    STATE(378), 1,
      sym__block_comment,
    ACTIONS(333), 8,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
  [21991] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(487), 1,
      anon_sym_LPAREN,
    ACTIONS(696), 1,
      sym_assignment_operator,
    STATE(379), 1,
      sym__block_comment,
    ACTIONS(694), 6,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [22015] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(380), 1,
      sym__block_comment,
    ACTIONS(698), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__immediate_block_comment_token1,
    ACTIONS(700), 5,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      aux_sym__block_comment_token1,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
  [22035] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(381), 1,
      sym__block_comment,
    ACTIONS(625), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__immediate_block_comment_token1,
    ACTIONS(627), 5,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      aux_sym__block_comment_token1,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
  [22055] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(382), 1,
      sym__block_comment,
    ACTIONS(702), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__immediate_block_comment_token1,
    ACTIONS(704), 5,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      aux_sym__block_comment_token1,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
  [22075] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(708), 2,
      sym__operand_separator,
      anon_sym_COMMA,
    STATE(383), 2,
      sym__block_comment,
      aux_sym_operands_repeat1,
    ACTIONS(706), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22096] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(713), 1,
      sym__data_separator,
    STATE(423), 1,
      sym__data_separator_comment,
    STATE(384), 2,
      sym__block_comment,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(711), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22119] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(385), 1,
      sym__block_comment,
    ACTIONS(716), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      aux_sym__control_operand_separator_token1,
  [22138] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(575), 1,
      sym__data_separator,
    STATE(384), 1,
      aux_sym_numeric_operands_repeat2,
    STATE(386), 1,
      sym__block_comment,
    STATE(423), 1,
      sym__data_separator_comment,
    ACTIONS(579), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22163] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(387), 1,
      sym__block_comment,
    STATE(388), 1,
      aux_sym_numeric_operands_repeat3,
    ACTIONS(579), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(581), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(718), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [22188] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(720), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(722), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(724), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(388), 2,
      sym__block_comment,
      aux_sym_numeric_operands_repeat3,
  [22211] = 8,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(731), 1,
      aux_sym__whitespace_token1,
    ACTIONS(733), 1,
      anon_sym_COMMA,
    STATE(389), 1,
      sym__block_comment,
    STATE(402), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(727), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(729), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22238] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(575), 1,
      sym__data_separator,
    STATE(384), 1,
      aux_sym_numeric_operands_repeat2,
    STATE(390), 1,
      sym__block_comment,
    STATE(423), 1,
      sym__data_separator_comment,
    ACTIONS(735), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22263] = 8,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(688), 1,
      aux_sym__block_comment_token1,
    ACTIONS(690), 1,
      aux_sym__immediate_block_comment_token1,
    ACTIONS(741), 1,
      aux_sym__whitespace_token1,
    STATE(10), 1,
      sym__immediate_block_comment,
    STATE(391), 1,
      sym__block_comment,
    ACTIONS(737), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(739), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22290] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(392), 1,
      sym__block_comment,
    ACTIONS(702), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      aux_sym__control_operand_separator_token1,
  [22309] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(747), 1,
      aux_sym__whitespace_token1,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    ACTIONS(743), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(745), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    STATE(393), 2,
      sym__block_comment,
      aux_sym_macro_parameters_repeat1,
  [22334] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(394), 1,
      sym__block_comment,
    ACTIONS(678), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      aux_sym__control_operand_separator_token1,
  [22353] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(388), 1,
      aux_sym_numeric_operands_repeat3,
    STATE(395), 1,
      sym__block_comment,
    ACTIONS(718), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(735), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(753), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22378] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(396), 1,
      sym__block_comment,
    ACTIONS(670), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      aux_sym__control_operand_separator_token1,
  [22397] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(757), 1,
      anon_sym_COMMA,
    ACTIONS(759), 1,
      sym__operand_separator,
    STATE(397), 1,
      sym__block_comment,
    STATE(401), 1,
      aux_sym_operands_repeat1,
    ACTIONS(755), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22422] = 8,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(690), 1,
      aux_sym__immediate_block_comment_token1,
    ACTIONS(765), 1,
      aux_sym__whitespace_token1,
    ACTIONS(767), 1,
      aux_sym__block_comment_token1,
    STATE(398), 1,
      sym__block_comment,
    STATE(426), 1,
      sym__immediate_block_comment,
    ACTIONS(761), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(763), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22449] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(399), 1,
      sym__block_comment,
    ACTIONS(769), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      aux_sym__control_operand_separator_token1,
  [22468] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(400), 1,
      sym__block_comment,
    ACTIONS(698), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      aux_sym__control_operand_separator_token1,
  [22487] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(757), 1,
      anon_sym_COMMA,
    ACTIONS(773), 1,
      sym__operand_separator,
    STATE(383), 1,
      aux_sym_operands_repeat1,
    STATE(401), 1,
      sym__block_comment,
    ACTIONS(771), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22512] = 8,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(731), 1,
      aux_sym__whitespace_token1,
    ACTIONS(733), 1,
      anon_sym_COMMA,
    STATE(393), 1,
      aux_sym_macro_parameters_repeat1,
    STATE(402), 1,
      sym__block_comment,
    ACTIONS(775), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(777), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22539] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(783), 1,
      anon_sym_COMMA,
    STATE(403), 1,
      sym__block_comment,
    ACTIONS(779), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(781), 4,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_SPACE,
      anon_sym_TAB,
  [22562] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(519), 1,
      sym_logical_or_operator,
    STATE(404), 1,
      sym__block_comment,
    ACTIONS(333), 5,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
  [22582] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(405), 1,
      sym__block_comment,
    ACTIONS(787), 3,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      aux_sym__block_comment_token1,
    ACTIONS(785), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__immediate_block_comment_token1,
  [22600] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(406), 1,
      sym__block_comment,
    ACTIONS(789), 6,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [22618] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(407), 1,
      sym__block_comment,
    ACTIONS(694), 6,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [22636] = 9,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(791), 1,
      ts_builtin_sym_end,
    ACTIONS(793), 1,
      anon_sym_SEMI,
    ACTIONS(795), 1,
      aux_sym__line_comment_token1,
    ACTIONS(797), 1,
      sym__line_separator,
    STATE(108), 1,
      sym__line_separator_comment,
    STATE(408), 1,
      sym__block_comment,
    STATE(472), 1,
      sym__line_comment,
  [22664] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(409), 1,
      sym__block_comment,
    ACTIONS(698), 6,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [22682] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(410), 1,
      sym__block_comment,
    ACTIONS(743), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(745), 3,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [22702] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(411), 1,
      sym__block_comment,
    ACTIONS(801), 3,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      aux_sym__block_comment_token1,
    ACTIONS(799), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__immediate_block_comment_token1,
  [22720] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(807), 1,
      aux_sym__whitespace_token1,
    ACTIONS(809), 1,
      anon_sym_LPAREN,
    STATE(412), 1,
      sym__block_comment,
    ACTIONS(803), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(805), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22744] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(413), 1,
      sym__block_comment,
    ACTIONS(811), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(813), 3,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [22764] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(414), 1,
      sym__block_comment,
    ACTIONS(702), 6,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [22782] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(415), 1,
      sym__block_comment,
    ACTIONS(779), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(781), 4,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_SPACE,
      anon_sym_TAB,
  [22802] = 9,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(793), 1,
      anon_sym_SEMI,
    ACTIONS(795), 1,
      aux_sym__line_comment_token1,
    ACTIONS(797), 1,
      sym__line_separator,
    STATE(108), 1,
      sym__line_separator_comment,
    STATE(416), 1,
      sym__block_comment,
    STATE(480), 1,
      sym__line_comment,
  [22830] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(539), 1,
      anon_sym_LPAREN,
    ACTIONS(815), 1,
      anon_sym_RPAREN,
    ACTIONS(818), 1,
      sym_assignment_operator,
    STATE(417), 1,
      sym__block_comment,
    ACTIONS(694), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [22853] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(824), 1,
      aux_sym__whitespace_token1,
    STATE(418), 1,
      sym__block_comment,
    ACTIONS(820), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(822), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22874] = 8,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(793), 1,
      anon_sym_SEMI,
    ACTIONS(795), 1,
      aux_sym__line_comment_token1,
    ACTIONS(797), 1,
      sym__line_separator,
    STATE(108), 1,
      sym__line_separator_comment,
    STATE(419), 1,
      sym__block_comment,
    STATE(494), 1,
      sym__line_comment,
  [22899] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(539), 1,
      anon_sym_LPAREN,
    ACTIONS(818), 1,
      sym_assignment_operator,
    ACTIONS(826), 1,
      anon_sym_RPAREN,
    STATE(420), 1,
      sym__block_comment,
    ACTIONS(694), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [22922] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(539), 1,
      anon_sym_LPAREN,
    ACTIONS(818), 1,
      sym_assignment_operator,
    ACTIONS(829), 1,
      anon_sym_RPAREN,
    STATE(421), 1,
      sym__block_comment,
    ACTIONS(694), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [22945] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(539), 1,
      anon_sym_LPAREN,
    ACTIONS(818), 1,
      sym_assignment_operator,
    ACTIONS(832), 1,
      anon_sym_RPAREN,
    STATE(422), 1,
      sym__block_comment,
    ACTIONS(694), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [22968] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(423), 1,
      sym__block_comment,
    ACTIONS(161), 5,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22985] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(539), 1,
      anon_sym_LPAREN,
    ACTIONS(818), 1,
      sym_assignment_operator,
    STATE(424), 1,
      sym__block_comment,
    ACTIONS(694), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23006] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(539), 1,
      anon_sym_LPAREN,
    ACTIONS(818), 1,
      sym_assignment_operator,
    ACTIONS(835), 1,
      anon_sym_RPAREN,
    STATE(425), 1,
      sym__block_comment,
    ACTIONS(694), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [23029] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(426), 1,
      sym__block_comment,
    ACTIONS(25), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23045] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(777), 1,
      anon_sym_RPAREN,
    ACTIONS(838), 1,
      aux_sym__whitespace_token1,
    ACTIONS(841), 1,
      anon_sym_COMMA,
    STATE(427), 1,
      sym__block_comment,
    STATE(431), 1,
      aux_sym_macro_parameters_repeat1,
  [23067] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(428), 1,
      sym__block_comment,
    ACTIONS(843), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23083] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(429), 1,
      sym__block_comment,
    ACTIONS(845), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23099] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(430), 1,
      sym__block_comment,
    ACTIONS(847), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23115] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(745), 1,
      anon_sym_RPAREN,
    ACTIONS(849), 1,
      aux_sym__whitespace_token1,
    ACTIONS(852), 1,
      anon_sym_COMMA,
    STATE(431), 2,
      sym__block_comment,
      aux_sym_macro_parameters_repeat1,
  [23135] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(432), 1,
      sym__block_comment,
    ACTIONS(855), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23151] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(433), 1,
      sym__block_comment,
    ACTIONS(857), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23167] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(755), 1,
      anon_sym_RPAREN,
    ACTIONS(859), 1,
      anon_sym_COMMA,
    ACTIONS(861), 1,
      sym__operand_separator,
    STATE(434), 1,
      sym__block_comment,
    STATE(447), 1,
      aux_sym_operands_repeat1,
  [23189] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(435), 1,
      sym__block_comment,
    ACTIONS(863), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23205] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(865), 1,
      anon_sym_DQUOTE,
    ACTIONS(867), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
    STATE(436), 2,
      sym__block_comment,
      aux_sym_string_repeat1,
  [23223] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(870), 1,
      anon_sym_DQUOTE,
    STATE(436), 1,
      aux_sym_string_repeat1,
    STATE(437), 1,
      sym__block_comment,
    ACTIONS(872), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23243] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(438), 1,
      sym__block_comment,
    ACTIONS(874), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23259] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(439), 1,
      sym__block_comment,
    ACTIONS(857), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23275] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(440), 1,
      sym__block_comment,
    ACTIONS(876), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23291] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(441), 1,
      sym__block_comment,
    ACTIONS(878), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23307] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(603), 1,
      sym_logical_or_operator,
    STATE(442), 1,
      sym__block_comment,
    ACTIONS(333), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_assignment_operator,
  [23325] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(880), 1,
      anon_sym_DQUOTE,
    STATE(443), 1,
      sym__block_comment,
    STATE(445), 1,
      aux_sym_string_repeat1,
    ACTIONS(872), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23345] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(444), 1,
      sym__block_comment,
    ACTIONS(882), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23361] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(884), 1,
      anon_sym_DQUOTE,
    STATE(436), 1,
      aux_sym_string_repeat1,
    STATE(445), 1,
      sym__block_comment,
    ACTIONS(872), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23381] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(446), 1,
      sym__block_comment,
    ACTIONS(509), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23397] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(771), 1,
      anon_sym_RPAREN,
    ACTIONS(859), 1,
      anon_sym_COMMA,
    ACTIONS(886), 1,
      sym__operand_separator,
    STATE(447), 1,
      sym__block_comment,
    STATE(458), 1,
      aux_sym_operands_repeat1,
  [23419] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(448), 1,
      sym__block_comment,
    ACTIONS(888), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23435] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(449), 1,
      sym__block_comment,
    ACTIONS(890), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23451] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(450), 1,
      sym__block_comment,
    ACTIONS(857), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23467] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(892), 1,
      anon_sym_DQUOTE,
    STATE(451), 1,
      sym__block_comment,
    STATE(452), 1,
      aux_sym_string_repeat1,
    ACTIONS(872), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23487] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(894), 1,
      anon_sym_DQUOTE,
    STATE(436), 1,
      aux_sym_string_repeat1,
    STATE(452), 1,
      sym__block_comment,
    ACTIONS(872), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23507] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(453), 1,
      sym__block_comment,
    ACTIONS(896), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23523] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(898), 1,
      anon_sym_DQUOTE,
    STATE(454), 1,
      sym__block_comment,
    STATE(455), 1,
      aux_sym_string_repeat1,
    ACTIONS(872), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23543] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(900), 1,
      anon_sym_DQUOTE,
    STATE(436), 1,
      aux_sym_string_repeat1,
    STATE(455), 1,
      sym__block_comment,
    ACTIONS(872), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23563] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(456), 1,
      sym__block_comment,
    ACTIONS(902), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23579] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(729), 1,
      anon_sym_RPAREN,
    ACTIONS(841), 1,
      anon_sym_COMMA,
    ACTIONS(904), 1,
      aux_sym__whitespace_token1,
    STATE(427), 1,
      aux_sym_macro_parameters_repeat1,
    STATE(457), 1,
      sym__block_comment,
  [23601] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(706), 1,
      anon_sym_RPAREN,
    ACTIONS(907), 2,
      sym__operand_separator,
      anon_sym_COMMA,
    STATE(458), 2,
      sym__block_comment,
      aux_sym_operands_repeat1,
  [23619] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(459), 1,
      sym__block_comment,
    ACTIONS(910), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23635] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(912), 1,
      aux_sym__whitespace_token1,
    ACTIONS(914), 1,
      anon_sym_RPAREN,
    ACTIONS(916), 1,
      sym_macro_parameter,
    STATE(460), 1,
      sym__block_comment,
    STATE(486), 1,
      sym_macro_parameters,
  [23657] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(461), 1,
      sym__block_comment,
    ACTIONS(918), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23673] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(462), 1,
      sym__block_comment,
    ACTIONS(920), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23689] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(916), 1,
      sym_macro_parameter,
    ACTIONS(922), 1,
      aux_sym__whitespace_token1,
    ACTIONS(924), 1,
      anon_sym_RPAREN,
    STATE(463), 1,
      sym__block_comment,
    STATE(481), 1,
      sym_macro_parameters,
  [23711] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(926), 1,
      anon_sym_DQUOTE,
    STATE(437), 1,
      aux_sym_string_repeat1,
    STATE(464), 1,
      sym__block_comment,
    ACTIONS(872), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23731] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(465), 1,
      sym__block_comment,
    ACTIONS(694), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23746] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(583), 1,
      anon_sym_LPAREN,
    ACTIONS(928), 1,
      anon_sym_RPAREN,
    ACTIONS(930), 1,
      sym_assignment_operator,
    STATE(466), 1,
      sym__block_comment,
  [23765] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(467), 1,
      sym__block_comment,
    ACTIONS(698), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23780] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(583), 1,
      anon_sym_LPAREN,
    ACTIONS(930), 1,
      sym_assignment_operator,
    ACTIONS(932), 1,
      anon_sym_RPAREN,
    STATE(468), 1,
      sym__block_comment,
  [23799] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(653), 1,
      aux_sym__immediate_block_comment_token1,
    ACTIONS(934), 1,
      aux_sym__whitespace_token1,
    ACTIONS(936), 1,
      aux_sym__block_comment_token1,
    STATE(27), 1,
      sym__immediate_block_comment,
    STATE(469), 1,
      sym__block_comment,
  [23818] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(470), 1,
      sym__block_comment,
    ACTIONS(938), 3,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23833] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(743), 1,
      aux_sym__whitespace_token1,
    STATE(471), 1,
      sym__block_comment,
    ACTIONS(745), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23850] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(797), 1,
      sym__line_separator,
    ACTIONS(940), 1,
      ts_builtin_sym_end,
    STATE(105), 1,
      sym__line_separator_comment,
    STATE(472), 1,
      sym__block_comment,
  [23869] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(583), 1,
      anon_sym_LPAREN,
    ACTIONS(930), 1,
      sym_assignment_operator,
    ACTIONS(942), 1,
      anon_sym_RPAREN,
    STATE(473), 1,
      sym__block_comment,
  [23888] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(583), 1,
      anon_sym_LPAREN,
    ACTIONS(930), 1,
      sym_assignment_operator,
    ACTIONS(944), 1,
      anon_sym_RPAREN,
    STATE(474), 1,
      sym__block_comment,
  [23907] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(811), 1,
      aux_sym__whitespace_token1,
    STATE(475), 1,
      sym__block_comment,
    ACTIONS(813), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23924] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(583), 1,
      anon_sym_LPAREN,
    ACTIONS(930), 1,
      sym_assignment_operator,
    ACTIONS(946), 1,
      anon_sym_RPAREN,
    STATE(476), 1,
      sym__block_comment,
  [23943] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(477), 1,
      sym__block_comment,
    ACTIONS(702), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23958] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(478), 1,
      sym__block_comment,
    ACTIONS(789), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23973] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(948), 1,
      anon_sym_LPAREN,
    ACTIONS(950), 1,
      sym_macro_parameter,
    STATE(430), 1,
      sym_macro_parameters,
    STATE(479), 1,
      sym__block_comment,
  [23992] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(791), 1,
      ts_builtin_sym_end,
    ACTIONS(797), 1,
      sym__line_separator,
    STATE(105), 1,
      sym__line_separator_comment,
    STATE(480), 1,
      sym__block_comment,
  [24011] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(952), 1,
      aux_sym__whitespace_token1,
    ACTIONS(954), 1,
      anon_sym_RPAREN,
    STATE(481), 1,
      sym__block_comment,
  [24027] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(956), 1,
      anon_sym_COMMA,
    ACTIONS(958), 1,
      sym_macro_parameter,
    STATE(482), 1,
      sym__block_comment,
  [24043] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(483), 1,
      sym__block_comment,
    ACTIONS(960), 2,
      sym__line_separator,
      ts_builtin_sym_end,
  [24057] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    STATE(381), 1,
      sym_string,
    STATE(484), 1,
      sym__block_comment,
  [24073] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(485), 1,
      sym__block_comment,
    ACTIONS(962), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [24087] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(964), 1,
      aux_sym__whitespace_token1,
    ACTIONS(966), 1,
      anon_sym_RPAREN,
    STATE(486), 1,
      sym__block_comment,
  [24103] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(791), 1,
      ts_builtin_sym_end,
    ACTIONS(793), 1,
      aux_sym__statement_token1,
    STATE(487), 1,
      sym__block_comment,
  [24119] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(488), 1,
      sym__block_comment,
    ACTIONS(968), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [24133] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(489), 1,
      sym__block_comment,
    ACTIONS(241), 2,
      anon_sym_DQUOTE,
      sym_macro_name,
  [24147] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(490), 1,
      sym__block_comment,
    ACTIONS(970), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [24161] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(972), 1,
      anon_sym_COMMA,
    ACTIONS(974), 1,
      sym_macro_parameter,
    STATE(491), 1,
      sym__block_comment,
  [24177] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(492), 1,
      sym__block_comment,
    ACTIONS(976), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [24191] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(980), 1,
      aux_sym__block_comment_token1,
    STATE(493), 1,
      sym__block_comment,
    ACTIONS(978), 2,
      aux_sym__whitespace_token1,
      aux_sym__immediate_block_comment_token1,
  [24205] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(797), 1,
      sym__line_separator,
    STATE(105), 1,
      sym__line_separator_comment,
    STATE(494), 1,
      sym__block_comment,
  [24221] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(495), 1,
      sym__block_comment,
    ACTIONS(982), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [24235] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(496), 1,
      sym__block_comment,
    ACTIONS(960), 2,
      ts_builtin_sym_end,
      aux_sym__statement_token1,
  [24249] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(793), 1,
      aux_sym__statement_token1,
    STATE(497), 1,
      sym__block_comment,
  [24265] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(930), 1,
      sym_assignment_operator,
    ACTIONS(984), 1,
      anon_sym_LPAREN,
    STATE(498), 1,
      sym__block_comment,
  [24281] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(487), 1,
      anon_sym_LPAREN,
    ACTIONS(930), 1,
      sym_assignment_operator,
    STATE(499), 1,
      sym__block_comment,
  [24297] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(539), 1,
      anon_sym_LPAREN,
    ACTIONS(930), 1,
      sym_assignment_operator,
    STATE(500), 1,
      sym__block_comment,
  [24313] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(930), 1,
      sym_assignment_operator,
    ACTIONS(986), 1,
      anon_sym_LPAREN,
    STATE(501), 1,
      sym__block_comment,
  [24329] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(583), 1,
      anon_sym_LPAREN,
    ACTIONS(930), 1,
      sym_assignment_operator,
    STATE(502), 1,
      sym__block_comment,
  [24345] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(475), 1,
      anon_sym_LPAREN,
    ACTIONS(930), 1,
      sym_assignment_operator,
    STATE(503), 1,
      sym__block_comment,
  [24361] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(988), 1,
      anon_sym_LPAREN,
    STATE(504), 1,
      sym__block_comment,
  [24374] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(990), 1,
      anon_sym_RPAREN,
    STATE(505), 1,
      sym__block_comment,
  [24387] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(992), 1,
      anon_sym_SQUOTE,
    STATE(506), 1,
      sym__block_comment,
  [24400] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(994), 1,
      anon_sym_SQUOTE,
    STATE(507), 1,
      sym__block_comment,
  [24413] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(996), 1,
      anon_sym_RPAREN,
    STATE(508), 1,
      sym__block_comment,
  [24426] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(998), 1,
      anon_sym_LPAREN,
    STATE(509), 1,
      sym__block_comment,
  [24439] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(958), 1,
      sym_macro_parameter,
    STATE(510), 1,
      sym__block_comment,
  [24452] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1000), 1,
      anon_sym_RPAREN,
    STATE(511), 1,
      sym__block_comment,
  [24465] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(793), 1,
      aux_sym__statement_token1,
    STATE(512), 1,
      sym__block_comment,
  [24478] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1002), 1,
      anon_sym_RPAREN,
    STATE(513), 1,
      sym__block_comment,
  [24491] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1004), 1,
      anon_sym_RPAREN,
    STATE(514), 1,
      sym__block_comment,
  [24504] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1006), 1,
      anon_sym_RPAREN,
    STATE(515), 1,
      sym__block_comment,
  [24517] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1008), 1,
      anon_sym_RPAREN,
    STATE(516), 1,
      sym__block_comment,
  [24530] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(651), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1010), 1,
      aux_sym__whitespace_token1,
    STATE(517), 1,
      sym__block_comment,
  [24543] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1012), 1,
      anon_sym_RPAREN,
    STATE(518), 1,
      sym__block_comment,
  [24556] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1014), 1,
      anon_sym_RPAREN,
    STATE(519), 1,
      sym__block_comment,
  [24569] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1016), 1,
      anon_sym_RPAREN,
    STATE(520), 1,
      sym__block_comment,
  [24582] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1018), 1,
      anon_sym_RPAREN,
    STATE(521), 1,
      sym__block_comment,
  [24595] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1020), 1,
      anon_sym_RPAREN,
    STATE(522), 1,
      sym__block_comment,
  [24608] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1022), 1,
      anon_sym_SQUOTE,
    STATE(523), 1,
      sym__block_comment,
  [24621] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(940), 1,
      ts_builtin_sym_end,
    STATE(524), 1,
      sym__block_comment,
  [24634] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1024), 1,
      anon_sym_RPAREN,
    STATE(525), 1,
      sym__block_comment,
  [24647] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1026), 1,
      anon_sym_COMMA,
    STATE(526), 1,
      sym__block_comment,
  [24660] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1028), 1,
      ts_builtin_sym_end,
    STATE(527), 1,
      sym__block_comment,
  [24673] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1030), 1,
      sym_macro_name,
    STATE(528), 1,
      sym__block_comment,
  [24686] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1032), 1,
      anon_sym_RPAREN,
    STATE(529), 1,
      sym__block_comment,
  [24699] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(974), 1,
      sym_macro_parameter,
    STATE(530), 1,
      sym__block_comment,
  [24712] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1034), 1,
      sym_macro_parameter,
    STATE(531), 1,
      sym__block_comment,
  [24725] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1036), 1,
      anon_sym_RPAREN,
    STATE(532), 1,
      sym__block_comment,
  [24738] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1038), 1,
      anon_sym_SQUOTE,
    STATE(533), 1,
      sym__block_comment,
  [24751] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(791), 1,
      ts_builtin_sym_end,
    STATE(534), 1,
      sym__block_comment,
  [24764] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1040), 1,
      anon_sym_LPAREN,
    STATE(535), 1,
      sym__block_comment,
  [24777] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1042), 1,
      anon_sym_RPAREN,
    STATE(536), 1,
      sym__block_comment,
  [24790] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1044), 1,
      anon_sym_LPAREN,
    STATE(537), 1,
      sym__block_comment,
  [24803] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1046), 1,
      sym_macro_parameter,
    STATE(538), 1,
      sym__block_comment,
  [24816] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1048), 1,
      anon_sym_LPAREN,
    STATE(539), 1,
      sym__block_comment,
  [24829] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1050), 1,
      anon_sym_RPAREN,
    STATE(540), 1,
      sym__block_comment,
  [24842] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1052), 1,
      anon_sym_RPAREN,
    STATE(541), 1,
      sym__block_comment,
  [24855] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1054), 1,
      anon_sym_SQUOTE,
    STATE(542), 1,
      sym__block_comment,
  [24868] = 1,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 151,
  [SMALL_STATE(4)] = 297,
  [SMALL_STATE(5)] = 405,
  [SMALL_STATE(6)] = 511,
  [SMALL_STATE(7)] = 651,
  [SMALL_STATE(8)] = 791,
  [SMALL_STATE(9)] = 933,
  [SMALL_STATE(10)] = 1077,
  [SMALL_STATE(11)] = 1211,
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
  [SMALL_STATE(118)] = 13624,
  [SMALL_STATE(119)] = 13659,
  [SMALL_STATE(120)] = 13694,
  [SMALL_STATE(121)] = 13729,
  [SMALL_STATE(122)] = 13766,
  [SMALL_STATE(123)] = 13801,
  [SMALL_STATE(124)] = 13838,
  [SMALL_STATE(125)] = 13873,
  [SMALL_STATE(126)] = 13910,
  [SMALL_STATE(127)] = 13945,
  [SMALL_STATE(128)] = 13982,
  [SMALL_STATE(129)] = 14017,
  [SMALL_STATE(130)] = 14054,
  [SMALL_STATE(131)] = 14089,
  [SMALL_STATE(132)] = 14126,
  [SMALL_STATE(133)] = 14161,
  [SMALL_STATE(134)] = 14198,
  [SMALL_STATE(135)] = 14233,
  [SMALL_STATE(136)] = 14270,
  [SMALL_STATE(137)] = 14307,
  [SMALL_STATE(138)] = 14342,
  [SMALL_STATE(139)] = 14379,
  [SMALL_STATE(140)] = 14414,
  [SMALL_STATE(141)] = 14453,
  [SMALL_STATE(142)] = 14488,
  [SMALL_STATE(143)] = 14523,
  [SMALL_STATE(144)] = 14558,
  [SMALL_STATE(145)] = 14593,
  [SMALL_STATE(146)] = 14630,
  [SMALL_STATE(147)] = 14667,
  [SMALL_STATE(148)] = 14704,
  [SMALL_STATE(149)] = 14741,
  [SMALL_STATE(150)] = 14778,
  [SMALL_STATE(151)] = 14815,
  [SMALL_STATE(152)] = 14852,
  [SMALL_STATE(153)] = 14889,
  [SMALL_STATE(154)] = 14926,
  [SMALL_STATE(155)] = 14961,
  [SMALL_STATE(156)] = 14996,
  [SMALL_STATE(157)] = 15031,
  [SMALL_STATE(158)] = 15066,
  [SMALL_STATE(159)] = 15101,
  [SMALL_STATE(160)] = 15136,
  [SMALL_STATE(161)] = 15171,
  [SMALL_STATE(162)] = 15204,
  [SMALL_STATE(163)] = 15237,
  [SMALL_STATE(164)] = 15270,
  [SMALL_STATE(165)] = 15303,
  [SMALL_STATE(166)] = 15336,
  [SMALL_STATE(167)] = 15371,
  [SMALL_STATE(168)] = 15404,
  [SMALL_STATE(169)] = 15439,
  [SMALL_STATE(170)] = 15472,
  [SMALL_STATE(171)] = 15507,
  [SMALL_STATE(172)] = 15540,
  [SMALL_STATE(173)] = 15575,
  [SMALL_STATE(174)] = 15608,
  [SMALL_STATE(175)] = 15643,
  [SMALL_STATE(176)] = 15676,
  [SMALL_STATE(177)] = 15711,
  [SMALL_STATE(178)] = 15744,
  [SMALL_STATE(179)] = 15779,
  [SMALL_STATE(180)] = 15812,
  [SMALL_STATE(181)] = 15845,
  [SMALL_STATE(182)] = 15878,
  [SMALL_STATE(183)] = 15913,
  [SMALL_STATE(184)] = 15946,
  [SMALL_STATE(185)] = 15981,
  [SMALL_STATE(186)] = 16014,
  [SMALL_STATE(187)] = 16051,
  [SMALL_STATE(188)] = 16084,
  [SMALL_STATE(189)] = 16117,
  [SMALL_STATE(190)] = 16150,
  [SMALL_STATE(191)] = 16183,
  [SMALL_STATE(192)] = 16216,
  [SMALL_STATE(193)] = 16251,
  [SMALL_STATE(194)] = 16284,
  [SMALL_STATE(195)] = 16319,
  [SMALL_STATE(196)] = 16354,
  [SMALL_STATE(197)] = 16389,
  [SMALL_STATE(198)] = 16424,
  [SMALL_STATE(199)] = 16459,
  [SMALL_STATE(200)] = 16494,
  [SMALL_STATE(201)] = 16529,
  [SMALL_STATE(202)] = 16562,
  [SMALL_STATE(203)] = 16595,
  [SMALL_STATE(204)] = 16628,
  [SMALL_STATE(205)] = 16661,
  [SMALL_STATE(206)] = 16694,
  [SMALL_STATE(207)] = 16729,
  [SMALL_STATE(208)] = 16761,
  [SMALL_STATE(209)] = 16793,
  [SMALL_STATE(210)] = 16825,
  [SMALL_STATE(211)] = 16859,
  [SMALL_STATE(212)] = 16895,
  [SMALL_STATE(213)] = 16927,
  [SMALL_STATE(214)] = 16961,
  [SMALL_STATE(215)] = 16993,
  [SMALL_STATE(216)] = 17027,
  [SMALL_STATE(217)] = 17061,
  [SMALL_STATE(218)] = 17095,
  [SMALL_STATE(219)] = 17127,
  [SMALL_STATE(220)] = 17161,
  [SMALL_STATE(221)] = 17193,
  [SMALL_STATE(222)] = 17227,
  [SMALL_STATE(223)] = 17259,
  [SMALL_STATE(224)] = 17291,
  [SMALL_STATE(225)] = 17325,
  [SMALL_STATE(226)] = 17357,
  [SMALL_STATE(227)] = 17391,
  [SMALL_STATE(228)] = 17423,
  [SMALL_STATE(229)] = 17457,
  [SMALL_STATE(230)] = 17491,
  [SMALL_STATE(231)] = 17525,
  [SMALL_STATE(232)] = 17557,
  [SMALL_STATE(233)] = 17591,
  [SMALL_STATE(234)] = 17623,
  [SMALL_STATE(235)] = 17655,
  [SMALL_STATE(236)] = 17687,
  [SMALL_STATE(237)] = 17719,
  [SMALL_STATE(238)] = 17751,
  [SMALL_STATE(239)] = 17783,
  [SMALL_STATE(240)] = 17817,
  [SMALL_STATE(241)] = 17849,
  [SMALL_STATE(242)] = 17883,
  [SMALL_STATE(243)] = 17915,
  [SMALL_STATE(244)] = 17947,
  [SMALL_STATE(245)] = 17981,
  [SMALL_STATE(246)] = 18013,
  [SMALL_STATE(247)] = 18047,
  [SMALL_STATE(248)] = 18081,
  [SMALL_STATE(249)] = 18113,
  [SMALL_STATE(250)] = 18147,
  [SMALL_STATE(251)] = 18179,
  [SMALL_STATE(252)] = 18211,
  [SMALL_STATE(253)] = 18245,
  [SMALL_STATE(254)] = 18276,
  [SMALL_STATE(255)] = 18309,
  [SMALL_STATE(256)] = 18340,
  [SMALL_STATE(257)] = 18371,
  [SMALL_STATE(258)] = 18402,
  [SMALL_STATE(259)] = 18433,
  [SMALL_STATE(260)] = 18464,
  [SMALL_STATE(261)] = 18494,
  [SMALL_STATE(262)] = 18525,
  [SMALL_STATE(263)] = 18556,
  [SMALL_STATE(264)] = 18585,
  [SMALL_STATE(265)] = 18614,
  [SMALL_STATE(266)] = 18643,
  [SMALL_STATE(267)] = 18672,
  [SMALL_STATE(268)] = 18701,
  [SMALL_STATE(269)] = 18730,
  [SMALL_STATE(270)] = 18759,
  [SMALL_STATE(271)] = 18788,
  [SMALL_STATE(272)] = 18819,
  [SMALL_STATE(273)] = 18848,
  [SMALL_STATE(274)] = 18879,
  [SMALL_STATE(275)] = 18908,
  [SMALL_STATE(276)] = 18939,
  [SMALL_STATE(277)] = 18968,
  [SMALL_STATE(278)] = 18999,
  [SMALL_STATE(279)] = 19028,
  [SMALL_STATE(280)] = 19059,
  [SMALL_STATE(281)] = 19088,
  [SMALL_STATE(282)] = 19119,
  [SMALL_STATE(283)] = 19148,
  [SMALL_STATE(284)] = 19179,
  [SMALL_STATE(285)] = 19208,
  [SMALL_STATE(286)] = 19239,
  [SMALL_STATE(287)] = 19268,
  [SMALL_STATE(288)] = 19299,
  [SMALL_STATE(289)] = 19328,
  [SMALL_STATE(290)] = 19359,
  [SMALL_STATE(291)] = 19388,
  [SMALL_STATE(292)] = 19421,
  [SMALL_STATE(293)] = 19452,
  [SMALL_STATE(294)] = 19481,
  [SMALL_STATE(295)] = 19510,
  [SMALL_STATE(296)] = 19539,
  [SMALL_STATE(297)] = 19568,
  [SMALL_STATE(298)] = 19597,
  [SMALL_STATE(299)] = 19628,
  [SMALL_STATE(300)] = 19659,
  [SMALL_STATE(301)] = 19690,
  [SMALL_STATE(302)] = 19721,
  [SMALL_STATE(303)] = 19752,
  [SMALL_STATE(304)] = 19783,
  [SMALL_STATE(305)] = 19814,
  [SMALL_STATE(306)] = 19845,
  [SMALL_STATE(307)] = 19876,
  [SMALL_STATE(308)] = 19905,
  [SMALL_STATE(309)] = 19934,
  [SMALL_STATE(310)] = 19965,
  [SMALL_STATE(311)] = 19996,
  [SMALL_STATE(312)] = 20027,
  [SMALL_STATE(313)] = 20058,
  [SMALL_STATE(314)] = 20089,
  [SMALL_STATE(315)] = 20120,
  [SMALL_STATE(316)] = 20151,
  [SMALL_STATE(317)] = 20182,
  [SMALL_STATE(318)] = 20213,
  [SMALL_STATE(319)] = 20262,
  [SMALL_STATE(320)] = 20289,
  [SMALL_STATE(321)] = 20318,
  [SMALL_STATE(322)] = 20345,
  [SMALL_STATE(323)] = 20388,
  [SMALL_STATE(324)] = 20419,
  [SMALL_STATE(325)] = 20446,
  [SMALL_STATE(326)] = 20473,
  [SMALL_STATE(327)] = 20502,
  [SMALL_STATE(328)] = 20531,
  [SMALL_STATE(329)] = 20560,
  [SMALL_STATE(330)] = 20589,
  [SMALL_STATE(331)] = 20618,
  [SMALL_STATE(332)] = 20647,
  [SMALL_STATE(333)] = 20676,
  [SMALL_STATE(334)] = 20705,
  [SMALL_STATE(335)] = 20734,
  [SMALL_STATE(336)] = 20761,
  [SMALL_STATE(337)] = 20788,
  [SMALL_STATE(338)] = 20815,
  [SMALL_STATE(339)] = 20842,
  [SMALL_STATE(340)] = 20869,
  [SMALL_STATE(341)] = 20896,
  [SMALL_STATE(342)] = 20923,
  [SMALL_STATE(343)] = 20952,
  [SMALL_STATE(344)] = 20979,
  [SMALL_STATE(345)] = 21006,
  [SMALL_STATE(346)] = 21033,
  [SMALL_STATE(347)] = 21062,
  [SMALL_STATE(348)] = 21089,
  [SMALL_STATE(349)] = 21116,
  [SMALL_STATE(350)] = 21143,
  [SMALL_STATE(351)] = 21172,
  [SMALL_STATE(352)] = 21199,
  [SMALL_STATE(353)] = 21228,
  [SMALL_STATE(354)] = 21255,
  [SMALL_STATE(355)] = 21284,
  [SMALL_STATE(356)] = 21313,
  [SMALL_STATE(357)] = 21340,
  [SMALL_STATE(358)] = 21367,
  [SMALL_STATE(359)] = 21396,
  [SMALL_STATE(360)] = 21423,
  [SMALL_STATE(361)] = 21452,
  [SMALL_STATE(362)] = 21479,
  [SMALL_STATE(363)] = 21508,
  [SMALL_STATE(364)] = 21535,
  [SMALL_STATE(365)] = 21562,
  [SMALL_STATE(366)] = 21590,
  [SMALL_STATE(367)] = 21619,
  [SMALL_STATE(368)] = 21654,
  [SMALL_STATE(369)] = 21683,
  [SMALL_STATE(370)] = 21718,
  [SMALL_STATE(371)] = 21755,
  [SMALL_STATE(372)] = 21792,
  [SMALL_STATE(373)] = 21824,
  [SMALL_STATE(374)] = 21848,
  [SMALL_STATE(375)] = 21880,
  [SMALL_STATE(376)] = 21910,
  [SMALL_STATE(377)] = 21935,
  [SMALL_STATE(378)] = 21968,
  [SMALL_STATE(379)] = 21991,
  [SMALL_STATE(380)] = 22015,
  [SMALL_STATE(381)] = 22035,
  [SMALL_STATE(382)] = 22055,
  [SMALL_STATE(383)] = 22075,
  [SMALL_STATE(384)] = 22096,
  [SMALL_STATE(385)] = 22119,
  [SMALL_STATE(386)] = 22138,
  [SMALL_STATE(387)] = 22163,
  [SMALL_STATE(388)] = 22188,
  [SMALL_STATE(389)] = 22211,
  [SMALL_STATE(390)] = 22238,
  [SMALL_STATE(391)] = 22263,
  [SMALL_STATE(392)] = 22290,
  [SMALL_STATE(393)] = 22309,
  [SMALL_STATE(394)] = 22334,
  [SMALL_STATE(395)] = 22353,
  [SMALL_STATE(396)] = 22378,
  [SMALL_STATE(397)] = 22397,
  [SMALL_STATE(398)] = 22422,
  [SMALL_STATE(399)] = 22449,
  [SMALL_STATE(400)] = 22468,
  [SMALL_STATE(401)] = 22487,
  [SMALL_STATE(402)] = 22512,
  [SMALL_STATE(403)] = 22539,
  [SMALL_STATE(404)] = 22562,
  [SMALL_STATE(405)] = 22582,
  [SMALL_STATE(406)] = 22600,
  [SMALL_STATE(407)] = 22618,
  [SMALL_STATE(408)] = 22636,
  [SMALL_STATE(409)] = 22664,
  [SMALL_STATE(410)] = 22682,
  [SMALL_STATE(411)] = 22702,
  [SMALL_STATE(412)] = 22720,
  [SMALL_STATE(413)] = 22744,
  [SMALL_STATE(414)] = 22764,
  [SMALL_STATE(415)] = 22782,
  [SMALL_STATE(416)] = 22802,
  [SMALL_STATE(417)] = 22830,
  [SMALL_STATE(418)] = 22853,
  [SMALL_STATE(419)] = 22874,
  [SMALL_STATE(420)] = 22899,
  [SMALL_STATE(421)] = 22922,
  [SMALL_STATE(422)] = 22945,
  [SMALL_STATE(423)] = 22968,
  [SMALL_STATE(424)] = 22985,
  [SMALL_STATE(425)] = 23006,
  [SMALL_STATE(426)] = 23029,
  [SMALL_STATE(427)] = 23045,
  [SMALL_STATE(428)] = 23067,
  [SMALL_STATE(429)] = 23083,
  [SMALL_STATE(430)] = 23099,
  [SMALL_STATE(431)] = 23115,
  [SMALL_STATE(432)] = 23135,
  [SMALL_STATE(433)] = 23151,
  [SMALL_STATE(434)] = 23167,
  [SMALL_STATE(435)] = 23189,
  [SMALL_STATE(436)] = 23205,
  [SMALL_STATE(437)] = 23223,
  [SMALL_STATE(438)] = 23243,
  [SMALL_STATE(439)] = 23259,
  [SMALL_STATE(440)] = 23275,
  [SMALL_STATE(441)] = 23291,
  [SMALL_STATE(442)] = 23307,
  [SMALL_STATE(443)] = 23325,
  [SMALL_STATE(444)] = 23345,
  [SMALL_STATE(445)] = 23361,
  [SMALL_STATE(446)] = 23381,
  [SMALL_STATE(447)] = 23397,
  [SMALL_STATE(448)] = 23419,
  [SMALL_STATE(449)] = 23435,
  [SMALL_STATE(450)] = 23451,
  [SMALL_STATE(451)] = 23467,
  [SMALL_STATE(452)] = 23487,
  [SMALL_STATE(453)] = 23507,
  [SMALL_STATE(454)] = 23523,
  [SMALL_STATE(455)] = 23543,
  [SMALL_STATE(456)] = 23563,
  [SMALL_STATE(457)] = 23579,
  [SMALL_STATE(458)] = 23601,
  [SMALL_STATE(459)] = 23619,
  [SMALL_STATE(460)] = 23635,
  [SMALL_STATE(461)] = 23657,
  [SMALL_STATE(462)] = 23673,
  [SMALL_STATE(463)] = 23689,
  [SMALL_STATE(464)] = 23711,
  [SMALL_STATE(465)] = 23731,
  [SMALL_STATE(466)] = 23746,
  [SMALL_STATE(467)] = 23765,
  [SMALL_STATE(468)] = 23780,
  [SMALL_STATE(469)] = 23799,
  [SMALL_STATE(470)] = 23818,
  [SMALL_STATE(471)] = 23833,
  [SMALL_STATE(472)] = 23850,
  [SMALL_STATE(473)] = 23869,
  [SMALL_STATE(474)] = 23888,
  [SMALL_STATE(475)] = 23907,
  [SMALL_STATE(476)] = 23924,
  [SMALL_STATE(477)] = 23943,
  [SMALL_STATE(478)] = 23958,
  [SMALL_STATE(479)] = 23973,
  [SMALL_STATE(480)] = 23992,
  [SMALL_STATE(481)] = 24011,
  [SMALL_STATE(482)] = 24027,
  [SMALL_STATE(483)] = 24043,
  [SMALL_STATE(484)] = 24057,
  [SMALL_STATE(485)] = 24073,
  [SMALL_STATE(486)] = 24087,
  [SMALL_STATE(487)] = 24103,
  [SMALL_STATE(488)] = 24119,
  [SMALL_STATE(489)] = 24133,
  [SMALL_STATE(490)] = 24147,
  [SMALL_STATE(491)] = 24161,
  [SMALL_STATE(492)] = 24177,
  [SMALL_STATE(493)] = 24191,
  [SMALL_STATE(494)] = 24205,
  [SMALL_STATE(495)] = 24221,
  [SMALL_STATE(496)] = 24235,
  [SMALL_STATE(497)] = 24249,
  [SMALL_STATE(498)] = 24265,
  [SMALL_STATE(499)] = 24281,
  [SMALL_STATE(500)] = 24297,
  [SMALL_STATE(501)] = 24313,
  [SMALL_STATE(502)] = 24329,
  [SMALL_STATE(503)] = 24345,
  [SMALL_STATE(504)] = 24361,
  [SMALL_STATE(505)] = 24374,
  [SMALL_STATE(506)] = 24387,
  [SMALL_STATE(507)] = 24400,
  [SMALL_STATE(508)] = 24413,
  [SMALL_STATE(509)] = 24426,
  [SMALL_STATE(510)] = 24439,
  [SMALL_STATE(511)] = 24452,
  [SMALL_STATE(512)] = 24465,
  [SMALL_STATE(513)] = 24478,
  [SMALL_STATE(514)] = 24491,
  [SMALL_STATE(515)] = 24504,
  [SMALL_STATE(516)] = 24517,
  [SMALL_STATE(517)] = 24530,
  [SMALL_STATE(518)] = 24543,
  [SMALL_STATE(519)] = 24556,
  [SMALL_STATE(520)] = 24569,
  [SMALL_STATE(521)] = 24582,
  [SMALL_STATE(522)] = 24595,
  [SMALL_STATE(523)] = 24608,
  [SMALL_STATE(524)] = 24621,
  [SMALL_STATE(525)] = 24634,
  [SMALL_STATE(526)] = 24647,
  [SMALL_STATE(527)] = 24660,
  [SMALL_STATE(528)] = 24673,
  [SMALL_STATE(529)] = 24686,
  [SMALL_STATE(530)] = 24699,
  [SMALL_STATE(531)] = 24712,
  [SMALL_STATE(532)] = 24725,
  [SMALL_STATE(533)] = 24738,
  [SMALL_STATE(534)] = 24751,
  [SMALL_STATE(535)] = 24764,
  [SMALL_STATE(536)] = 24777,
  [SMALL_STATE(537)] = 24790,
  [SMALL_STATE(538)] = 24803,
  [SMALL_STATE(539)] = 24816,
  [SMALL_STATE(540)] = 24829,
  [SMALL_STATE(541)] = 24842,
  [SMALL_STATE(542)] = 24855,
  [SMALL_STATE(543)] = 24868,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(543),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 2, 0, 4),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(539),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(496),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(517),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(405),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(493),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(411),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(377),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2, 0, 8),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 3, 0, 13),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_directive, 2, 0, 4),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat2, 1, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(537),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 1, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label, 1, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 2, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label, 2, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_separator_comment, 1, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_separator_comment, 1, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_comment, 1, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_comment, 1, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 10),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 10),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 14),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 3, 0, 14),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_expression, 1, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_expression, 1, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal, 1, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_label_reference, 1, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_label_reference, 1, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 10),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 10),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 10),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 10),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 10),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 10),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 10),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 10),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 10),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 10),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 10),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 10),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 10),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 10),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assignment_expression, 3, 0, 20),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__assignment_expression, 3, 0, 20),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 10),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 10),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_multiplicative_expression, 1, 0, 10),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_multiplicative_expression, 1, 0, 10),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_multiplicative_expression, 1, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_multiplicative_expression, 1, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 12),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, 0, 12),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immediate_block_comment, 1, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__immediate_block_comment, 1, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 16),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 3, 0, 16),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 17),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 17),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logical_or_expression, 3, 0, 20),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__logical_or_expression, 3, 0, 20),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logical_and_expression, 3, 0, 20),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__logical_and_expression, 3, 0, 20),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitwise_or_expression, 3, 0, 20),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitwise_or_expression, 3, 0, 20),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitwise_xor_expression, 3, 0, 20),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitwise_xor_expression, 3, 0, 20),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitwise_and_expression, 3, 0, 20),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitwise_and_expression, 3, 0, 20),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__equality_expression, 3, 0, 20),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__equality_expression, 3, 0, 20),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relational_expression, 3, 0, 20),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__relational_expression, 3, 0, 20),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shift_expression, 3, 0, 20),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shift_expression, 3, 0, 20),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__additive_expression, 3, 0, 20),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__additive_expression, 3, 0, 20),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiplicative_expression, 3, 0, 20),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiplicative_expression, 3, 0, 20),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relocation_expression, 4, 0, 21),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relocation_expression, 4, 0, 21),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 4, 0, 22),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 4, 0, 22),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 4, 0, 23),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 4, 0, 23),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__data_separator_comment, 1, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__data_separator_comment, 1, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 10),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 10),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_operand_separator, 1, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_operand_separator, 1, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 3, 0, 14),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_operands, 1, 0, 0),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_operands, 1, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_operands, 1, 0, 0),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_operands, 1, 0, 0),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_operands, 2, 0, 0),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_operands, 2, 0, 0),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 3, 0, 0),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 3, 0, 0),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0),
  [613] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [616] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(526),
  [619] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(260),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_operands_repeat1, 2, 0, 0),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_operands_repeat1, 2, 0, 0),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(484),
  [632] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(489),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(258),
  [638] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(484),
  [641] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(451),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_operands, 2, 0, 0),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_operands, 2, 0, 0),
  [648] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_string_operands, 2, 0, 0), SHIFT(484),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [659] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_string_operands, 1, 0, 0), SHIFT(484),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_operands, 1, 0, 0),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_operands, 2, 0, 0),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0),
  [672] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(188),
  [675] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_operand, 1, 0, 0),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 1),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 1),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 19),
  [708] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 19), SHIFT_REPEAT(28),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat2, 2, 0, 0),
  [713] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat2, 2, 0, 0), SHIFT_REPEAT(158),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_flag, 1, 0, 0),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat3, 2, 0, 0),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat3, 2, 0, 0),
  [724] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat3, 2, 0, 0), SHIFT_REPEAT(415),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_parameters, 1, 0, 0),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_parameters, 1, 0, 0),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_operands, 3, 0, 0),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_directive, 1, 0, 4),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__numeric_directive, 1, 0, 4),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0),
  [747] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(482),
  [750] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(510),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_operands, 3, 0, 0),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 1, 0, 8),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 1, 0, 4),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_directive, 1, 0, 4),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_type, 1, 0, 0),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2, 0, 13),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_parameters, 2, 0, 0),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_parameters, 2, 0, 0),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat3, 1, 0, 0),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat3, 1, 0, 0),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_mnemonic, 1, 0, 0),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_mnemonic, 1, 0, 0),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 18),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_mnemonic, 1, 0, 0),
  [801] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_mnemonic, 1, 0, 0),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 3, 0, 6),
  [805] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 3, 0, 6),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 3, 0, 0),
  [813] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 3, 0, 0),
  [815] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(242),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_directive, 3, 0, 11),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_directive, 3, 0, 11),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [826] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(190),
  [829] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(296),
  [832] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(143),
  [835] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(324),
  [838] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_macro_parameters, 2, 0, 0), SHIFT(491),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 15),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 8, 0, 24),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 5, 0, 15),
  [849] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(491),
  [852] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(530),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 5, 0, 6),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 3),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 7),
  [865] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [867] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(470),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [872] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 9),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 2, 0, 0),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_directive, 3, 0, 11),
  [880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 2),
  [884] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 5),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 3, 0, 11),
  [892] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [894] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_directive, 4, 0, 11),
  [898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 6),
  [904] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_macro_parameters, 1, 0, 0), SHIFT(491),
  [907] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 19), SHIFT_REPEAT(29),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 15),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [914] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [916] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 6),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 24),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [936] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [938] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1, 0, 0),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 0),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [948] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_comment, 1, 0, 0),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_mnemonic, 1, 0, 0),
  [980] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_mnemonic, 1, 0, 0),
  [982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1028] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
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
