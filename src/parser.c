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
#define STATE_COUNT 538
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 160
#define ALIAS_COUNT 0
#define TOKEN_COUNT 93
#define EXTERNAL_TOKEN_COUNT 6
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
  sym__inline_separator_comment = 91,
  sym__inline_end_comment = 92,
  sym_program = 93,
  sym__statement = 94,
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
  [sym__line_separator] = "_line_separator",
  [sym__data_separator] = "_data_separator",
  [sym__inline_separator_comment] = "comment",
  [sym__inline_end_comment] = "comment",
  [sym_program] = "program",
  [sym__statement] = "_statement",
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
  [aux_sym__line_comment_token1] = sym__inline_separator_comment,
  [aux_sym__block_comment_token1] = sym__inline_separator_comment,
  [aux_sym__immediate_block_comment_token1] = sym__inline_separator_comment,
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
  [sym__data_separator] = sym__data_separator,
  [sym__inline_separator_comment] = sym__inline_separator_comment,
  [sym__inline_end_comment] = sym__inline_separator_comment,
  [sym_program] = sym_program,
  [sym__statement] = sym__statement,
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
    .visible = false,
    .named = true,
  },
  [sym__data_separator] = {
    .visible = false,
    .named = true,
  },
  [sym__inline_separator_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__inline_end_comment] = {
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
  [33] = 33,
  [34] = 34,
  [35] = 30,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 31,
  [45] = 32,
  [46] = 33,
  [47] = 47,
  [48] = 36,
  [49] = 37,
  [50] = 38,
  [51] = 39,
  [52] = 40,
  [53] = 41,
  [54] = 42,
  [55] = 43,
  [56] = 31,
  [57] = 32,
  [58] = 33,
  [59] = 36,
  [60] = 37,
  [61] = 38,
  [62] = 39,
  [63] = 40,
  [64] = 41,
  [65] = 42,
  [66] = 43,
  [67] = 31,
  [68] = 32,
  [69] = 33,
  [70] = 36,
  [71] = 37,
  [72] = 38,
  [73] = 39,
  [74] = 40,
  [75] = 41,
  [76] = 42,
  [77] = 43,
  [78] = 31,
  [79] = 32,
  [80] = 33,
  [81] = 30,
  [82] = 36,
  [83] = 36,
  [84] = 36,
  [85] = 36,
  [86] = 36,
  [87] = 30,
  [88] = 30,
  [89] = 47,
  [90] = 36,
  [91] = 47,
  [92] = 37,
  [93] = 38,
  [94] = 47,
  [95] = 39,
  [96] = 40,
  [97] = 47,
  [98] = 41,
  [99] = 42,
  [100] = 43,
  [101] = 101,
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
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 110,
  [157] = 138,
  [158] = 114,
  [159] = 115,
  [160] = 147,
  [161] = 148,
  [162] = 149,
  [163] = 150,
  [164] = 151,
  [165] = 152,
  [166] = 153,
  [167] = 154,
  [168] = 125,
  [169] = 127,
  [170] = 140,
  [171] = 134,
  [172] = 135,
  [173] = 136,
  [174] = 137,
  [175] = 143,
  [176] = 116,
  [177] = 112,
  [178] = 117,
  [179] = 118,
  [180] = 119,
  [181] = 120,
  [182] = 113,
  [183] = 121,
  [184] = 122,
  [185] = 123,
  [186] = 124,
  [187] = 111,
  [188] = 126,
  [189] = 155,
  [190] = 128,
  [191] = 129,
  [192] = 130,
  [193] = 131,
  [194] = 133,
  [195] = 139,
  [196] = 142,
  [197] = 144,
  [198] = 145,
  [199] = 146,
  [200] = 141,
  [201] = 132,
  [202] = 116,
  [203] = 142,
  [204] = 144,
  [205] = 145,
  [206] = 146,
  [207] = 141,
  [208] = 143,
  [209] = 112,
  [210] = 113,
  [211] = 114,
  [212] = 115,
  [213] = 117,
  [214] = 118,
  [215] = 119,
  [216] = 120,
  [217] = 121,
  [218] = 122,
  [219] = 123,
  [220] = 124,
  [221] = 111,
  [222] = 126,
  [223] = 155,
  [224] = 128,
  [225] = 138,
  [226] = 130,
  [227] = 131,
  [228] = 133,
  [229] = 229,
  [230] = 147,
  [231] = 231,
  [232] = 148,
  [233] = 149,
  [234] = 150,
  [235] = 151,
  [236] = 152,
  [237] = 153,
  [238] = 154,
  [239] = 125,
  [240] = 127,
  [241] = 140,
  [242] = 134,
  [243] = 135,
  [244] = 139,
  [245] = 132,
  [246] = 136,
  [247] = 137,
  [248] = 129,
  [249] = 137,
  [250] = 138,
  [251] = 251,
  [252] = 139,
  [253] = 147,
  [254] = 110,
  [255] = 255,
  [256] = 117,
  [257] = 116,
  [258] = 118,
  [259] = 119,
  [260] = 120,
  [261] = 121,
  [262] = 122,
  [263] = 123,
  [264] = 124,
  [265] = 111,
  [266] = 126,
  [267] = 155,
  [268] = 128,
  [269] = 129,
  [270] = 130,
  [271] = 131,
  [272] = 133,
  [273] = 144,
  [274] = 274,
  [275] = 145,
  [276] = 146,
  [277] = 141,
  [278] = 143,
  [279] = 147,
  [280] = 148,
  [281] = 149,
  [282] = 115,
  [283] = 283,
  [284] = 150,
  [285] = 151,
  [286] = 152,
  [287] = 153,
  [288] = 154,
  [289] = 125,
  [290] = 127,
  [291] = 140,
  [292] = 134,
  [293] = 135,
  [294] = 139,
  [295] = 113,
  [296] = 136,
  [297] = 142,
  [298] = 132,
  [299] = 274,
  [300] = 283,
  [301] = 274,
  [302] = 283,
  [303] = 274,
  [304] = 283,
  [305] = 274,
  [306] = 283,
  [307] = 274,
  [308] = 283,
  [309] = 137,
  [310] = 138,
  [311] = 114,
  [312] = 112,
  [313] = 313,
  [314] = 132,
  [315] = 137,
  [316] = 131,
  [317] = 133,
  [318] = 148,
  [319] = 149,
  [320] = 150,
  [321] = 151,
  [322] = 152,
  [323] = 153,
  [324] = 154,
  [325] = 125,
  [326] = 127,
  [327] = 140,
  [328] = 134,
  [329] = 135,
  [330] = 136,
  [331] = 142,
  [332] = 144,
  [333] = 130,
  [334] = 146,
  [335] = 141,
  [336] = 143,
  [337] = 112,
  [338] = 338,
  [339] = 113,
  [340] = 147,
  [341] = 114,
  [342] = 139,
  [343] = 115,
  [344] = 138,
  [345] = 116,
  [346] = 132,
  [347] = 117,
  [348] = 118,
  [349] = 119,
  [350] = 120,
  [351] = 121,
  [352] = 122,
  [353] = 123,
  [354] = 124,
  [355] = 111,
  [356] = 126,
  [357] = 155,
  [358] = 128,
  [359] = 129,
  [360] = 360,
  [361] = 145,
  [362] = 132,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 132,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 379,
  [381] = 381,
  [382] = 382,
  [383] = 381,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 379,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 381,
  [409] = 409,
  [410] = 410,
  [411] = 132,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 414,
  [428] = 373,
  [429] = 414,
  [430] = 430,
  [431] = 431,
  [432] = 414,
  [433] = 414,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 391,
  [442] = 132,
  [443] = 443,
  [444] = 443,
  [445] = 445,
  [446] = 384,
  [447] = 443,
  [448] = 392,
  [449] = 445,
  [450] = 397,
  [451] = 394,
  [452] = 443,
  [453] = 453,
  [454] = 454,
  [455] = 386,
  [456] = 456,
  [457] = 445,
  [458] = 445,
  [459] = 459,
  [460] = 401,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 399,
  [465] = 461,
  [466] = 466,
  [467] = 467,
  [468] = 461,
  [469] = 469,
  [470] = 381,
  [471] = 400,
  [472] = 461,
  [473] = 379,
  [474] = 405,
  [475] = 461,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 110,
  [482] = 482,
  [483] = 482,
  [484] = 459,
  [485] = 485,
  [486] = 486,
  [487] = 482,
  [488] = 488,
  [489] = 482,
  [490] = 479,
  [491] = 482,
  [492] = 492,
  [493] = 493,
  [494] = 480,
  [495] = 480,
  [496] = 480,
  [497] = 480,
  [498] = 480,
  [499] = 499,
  [500] = 500,
  [501] = 500,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 502,
  [506] = 506,
  [507] = 499,
  [508] = 500,
  [509] = 502,
  [510] = 510,
  [511] = 499,
  [512] = 512,
  [513] = 502,
  [514] = 502,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 500,
  [520] = 520,
  [521] = 521,
  [522] = 499,
  [523] = 512,
  [524] = 524,
  [525] = 525,
  [526] = 500,
  [527] = 518,
  [528] = 499,
  [529] = 518,
  [530] = 530,
  [531] = 518,
  [532] = 510,
  [533] = 518,
  [534] = 502,
  [535] = 535,
  [536] = 499,
  [537] = 537,
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
  [8] = {.lex_state = 100, .external_lex_state = 4},
  [9] = {.lex_state = 99, .external_lex_state = 2},
  [10] = {.lex_state = 100, .external_lex_state = 3},
  [11] = {.lex_state = 100, .external_lex_state = 2},
  [12] = {.lex_state = 100, .external_lex_state = 2},
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
  [110] = {.lex_state = 99, .external_lex_state = 3},
  [111] = {.lex_state = 78, .external_lex_state = 1},
  [112] = {.lex_state = 78, .external_lex_state = 1},
  [113] = {.lex_state = 78, .external_lex_state = 1},
  [114] = {.lex_state = 78, .external_lex_state = 1},
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
  [141] = {.lex_state = 78, .external_lex_state = 1},
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
  [156] = {.lex_state = 100, .external_lex_state = 3},
  [157] = {.lex_state = 101, .external_lex_state = 1},
  [158] = {.lex_state = 101, .external_lex_state = 1},
  [159] = {.lex_state = 101, .external_lex_state = 1},
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
  [180] = {.lex_state = 101, .external_lex_state = 1},
  [181] = {.lex_state = 101, .external_lex_state = 1},
  [182] = {.lex_state = 101, .external_lex_state = 1},
  [183] = {.lex_state = 101, .external_lex_state = 1},
  [184] = {.lex_state = 101, .external_lex_state = 1},
  [185] = {.lex_state = 101, .external_lex_state = 1},
  [186] = {.lex_state = 101, .external_lex_state = 1},
  [187] = {.lex_state = 101, .external_lex_state = 1},
  [188] = {.lex_state = 101, .external_lex_state = 1},
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
  [202] = {.lex_state = 102, .external_lex_state = 5},
  [203] = {.lex_state = 102, .external_lex_state = 5},
  [204] = {.lex_state = 102, .external_lex_state = 5},
  [205] = {.lex_state = 102, .external_lex_state = 5},
  [206] = {.lex_state = 102, .external_lex_state = 5},
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
  [229] = {.lex_state = 99, .external_lex_state = 2},
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
  [249] = {.lex_state = 103, .external_lex_state = 3},
  [250] = {.lex_state = 103, .external_lex_state = 3},
  [251] = {.lex_state = 103, .external_lex_state = 3},
  [252] = {.lex_state = 103, .external_lex_state = 3},
  [253] = {.lex_state = 103, .external_lex_state = 3},
  [254] = {.lex_state = 100, .external_lex_state = 2},
  [255] = {.lex_state = 78, .external_lex_state = 1},
  [256] = {.lex_state = 102, .external_lex_state = 6},
  [257] = {.lex_state = 102, .external_lex_state = 6},
  [258] = {.lex_state = 102, .external_lex_state = 6},
  [259] = {.lex_state = 102, .external_lex_state = 6},
  [260] = {.lex_state = 102, .external_lex_state = 6},
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
  [313] = {.lex_state = 78, .external_lex_state = 1},
  [314] = {.lex_state = 78, .external_lex_state = 1},
  [315] = {.lex_state = 101, .external_lex_state = 2},
  [316] = {.lex_state = 101, .external_lex_state = 2},
  [317] = {.lex_state = 101, .external_lex_state = 2},
  [318] = {.lex_state = 101, .external_lex_state = 2},
  [319] = {.lex_state = 101, .external_lex_state = 2},
  [320] = {.lex_state = 101, .external_lex_state = 2},
  [321] = {.lex_state = 101, .external_lex_state = 2},
  [322] = {.lex_state = 101, .external_lex_state = 2},
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
  [338] = {.lex_state = 78, .external_lex_state = 1},
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
  [360] = {.lex_state = 78, .external_lex_state = 1},
  [361] = {.lex_state = 101, .external_lex_state = 2},
  [362] = {.lex_state = 99, .external_lex_state = 1},
  [363] = {.lex_state = 105, .external_lex_state = 3},
  [364] = {.lex_state = 78, .external_lex_state = 1},
  [365] = {.lex_state = 105, .external_lex_state = 3},
  [366] = {.lex_state = 105, .external_lex_state = 3},
  [367] = {.lex_state = 99, .external_lex_state = 1},
  [368] = {.lex_state = 99, .external_lex_state = 1},
  [369] = {.lex_state = 99, .external_lex_state = 1},
  [370] = {.lex_state = 99, .external_lex_state = 1},
  [371] = {.lex_state = 105, .external_lex_state = 3},
  [372] = {.lex_state = 100, .external_lex_state = 5},
  [373] = {.lex_state = 100, .external_lex_state = 5},
  [374] = {.lex_state = 99, .external_lex_state = 1},
  [375] = {.lex_state = 105, .external_lex_state = 3},
  [376] = {.lex_state = 99, .external_lex_state = 1},
  [377] = {.lex_state = 99, .external_lex_state = 1},
  [378] = {.lex_state = 105, .external_lex_state = 3},
  [379] = {.lex_state = 99, .external_lex_state = 1},
  [380] = {.lex_state = 105, .external_lex_state = 3},
  [381] = {.lex_state = 105, .external_lex_state = 3},
  [382] = {.lex_state = 99, .external_lex_state = 1},
  [383] = {.lex_state = 99, .external_lex_state = 1},
  [384] = {.lex_state = 100, .external_lex_state = 5},
  [385] = {.lex_state = 78, .external_lex_state = 3},
  [386] = {.lex_state = 103, .external_lex_state = 3},
  [387] = {.lex_state = 99, .external_lex_state = 4},
  [388] = {.lex_state = 78, .external_lex_state = 3},
  [389] = {.lex_state = 78, .external_lex_state = 3},
  [390] = {.lex_state = 99, .external_lex_state = 4},
  [391] = {.lex_state = 103, .external_lex_state = 3},
  [392] = {.lex_state = 100, .external_lex_state = 5},
  [393] = {.lex_state = 105, .external_lex_state = 3},
  [394] = {.lex_state = 100, .external_lex_state = 5},
  [395] = {.lex_state = 105, .external_lex_state = 3},
  [396] = {.lex_state = 99, .external_lex_state = 4},
  [397] = {.lex_state = 103, .external_lex_state = 3},
  [398] = {.lex_state = 78, .external_lex_state = 3},
  [399] = {.lex_state = 103, .external_lex_state = 3},
  [400] = {.lex_state = 103, .external_lex_state = 3},
  [401] = {.lex_state = 100, .external_lex_state = 5},
  [402] = {.lex_state = 99, .external_lex_state = 4},
  [403] = {.lex_state = 103, .external_lex_state = 3},
  [404] = {.lex_state = 100, .external_lex_state = 5},
  [405] = {.lex_state = 100, .external_lex_state = 5},
  [406] = {.lex_state = 105, .external_lex_state = 3},
  [407] = {.lex_state = 78, .external_lex_state = 3},
  [408] = {.lex_state = 100, .external_lex_state = 5},
  [409] = {.lex_state = 105, .external_lex_state = 3},
  [410] = {.lex_state = 99, .external_lex_state = 3},
  [411] = {.lex_state = 100, .external_lex_state = 6},
  [412] = {.lex_state = 103, .external_lex_state = 3},
  [413] = {.lex_state = 99, .external_lex_state = 3},
  [414] = {.lex_state = 100, .external_lex_state = 6},
  [415] = {.lex_state = 99, .external_lex_state = 3},
  [416] = {.lex_state = 99, .external_lex_state = 3},
  [417] = {.lex_state = 99, .external_lex_state = 3},
  [418] = {.lex_state = 99, .external_lex_state = 3},
  [419] = {.lex_state = 99, .external_lex_state = 3},
  [420] = {.lex_state = 99, .external_lex_state = 3},
  [421] = {.lex_state = 99, .external_lex_state = 3},
  [422] = {.lex_state = 99, .external_lex_state = 3},
  [423] = {.lex_state = 99, .external_lex_state = 3},
  [424] = {.lex_state = 99, .external_lex_state = 3},
  [425] = {.lex_state = 99, .external_lex_state = 3},
  [426] = {.lex_state = 99, .external_lex_state = 3},
  [427] = {.lex_state = 100, .external_lex_state = 6},
  [428] = {.lex_state = 100, .external_lex_state = 6},
  [429] = {.lex_state = 100, .external_lex_state = 6},
  [430] = {.lex_state = 99, .external_lex_state = 3},
  [431] = {.lex_state = 99, .external_lex_state = 3},
  [432] = {.lex_state = 100, .external_lex_state = 6},
  [433] = {.lex_state = 100, .external_lex_state = 6},
  [434] = {.lex_state = 99, .external_lex_state = 3},
  [435] = {.lex_state = 99, .external_lex_state = 3},
  [436] = {.lex_state = 99, .external_lex_state = 3},
  [437] = {.lex_state = 99, .external_lex_state = 3},
  [438] = {.lex_state = 99, .external_lex_state = 3},
  [439] = {.lex_state = 99, .external_lex_state = 3},
  [440] = {.lex_state = 99, .external_lex_state = 3},
  [441] = {.lex_state = 103, .external_lex_state = 2},
  [442] = {.lex_state = 99, .external_lex_state = 2},
  [443] = {.lex_state = 21, .external_lex_state = 2},
  [444] = {.lex_state = 21, .external_lex_state = 2},
  [445] = {.lex_state = 21, .external_lex_state = 2},
  [446] = {.lex_state = 100, .external_lex_state = 6},
  [447] = {.lex_state = 21, .external_lex_state = 2},
  [448] = {.lex_state = 100, .external_lex_state = 6},
  [449] = {.lex_state = 21, .external_lex_state = 2},
  [450] = {.lex_state = 103, .external_lex_state = 2},
  [451] = {.lex_state = 100, .external_lex_state = 6},
  [452] = {.lex_state = 21, .external_lex_state = 2},
  [453] = {.lex_state = 21, .external_lex_state = 2},
  [454] = {.lex_state = 23, .external_lex_state = 2},
  [455] = {.lex_state = 103, .external_lex_state = 2},
  [456] = {.lex_state = 23, .external_lex_state = 2},
  [457] = {.lex_state = 21, .external_lex_state = 2},
  [458] = {.lex_state = 21, .external_lex_state = 2},
  [459] = {.lex_state = 99, .external_lex_state = 3},
  [460] = {.lex_state = 100, .external_lex_state = 6},
  [461] = {.lex_state = 99, .external_lex_state = 2},
  [462] = {.lex_state = 22, .external_lex_state = 2},
  [463] = {.lex_state = 21, .external_lex_state = 2},
  [464] = {.lex_state = 103, .external_lex_state = 2},
  [465] = {.lex_state = 99, .external_lex_state = 2},
  [466] = {.lex_state = 105, .external_lex_state = 2},
  [467] = {.lex_state = 99, .external_lex_state = 3},
  [468] = {.lex_state = 99, .external_lex_state = 2},
  [469] = {.lex_state = 99, .external_lex_state = 3},
  [470] = {.lex_state = 100, .external_lex_state = 6},
  [471] = {.lex_state = 103, .external_lex_state = 2},
  [472] = {.lex_state = 99, .external_lex_state = 2},
  [473] = {.lex_state = 100, .external_lex_state = 6},
  [474] = {.lex_state = 100, .external_lex_state = 6},
  [475] = {.lex_state = 99, .external_lex_state = 2},
  [476] = {.lex_state = 105, .external_lex_state = 2},
  [477] = {.lex_state = 105, .external_lex_state = 2},
  [478] = {.lex_state = 99, .external_lex_state = 2},
  [479] = {.lex_state = 22, .external_lex_state = 2},
  [480] = {.lex_state = 99, .external_lex_state = 2},
  [481] = {.lex_state = 101, .external_lex_state = 2},
  [482] = {.lex_state = 34, .external_lex_state = 2},
  [483] = {.lex_state = 34, .external_lex_state = 2},
  [484] = {.lex_state = 95, .external_lex_state = 2},
  [485] = {.lex_state = 95, .external_lex_state = 2},
  [486] = {.lex_state = 95, .external_lex_state = 2},
  [487] = {.lex_state = 34, .external_lex_state = 2},
  [488] = {.lex_state = 103, .external_lex_state = 2},
  [489] = {.lex_state = 34, .external_lex_state = 2},
  [490] = {.lex_state = 22, .external_lex_state = 2},
  [491] = {.lex_state = 34, .external_lex_state = 2},
  [492] = {.lex_state = 99, .external_lex_state = 3},
  [493] = {.lex_state = 103, .external_lex_state = 2},
  [494] = {.lex_state = 99, .external_lex_state = 2},
  [495] = {.lex_state = 99, .external_lex_state = 2},
  [496] = {.lex_state = 99, .external_lex_state = 2},
  [497] = {.lex_state = 99, .external_lex_state = 2},
  [498] = {.lex_state = 99, .external_lex_state = 2},
  [499] = {.lex_state = 99, .external_lex_state = 2},
  [500] = {.lex_state = 99, .external_lex_state = 2},
  [501] = {.lex_state = 99, .external_lex_state = 2},
  [502] = {.lex_state = 99, .external_lex_state = 2},
  [503] = {.lex_state = 99, .external_lex_state = 2},
  [504] = {.lex_state = 99, .external_lex_state = 2},
  [505] = {.lex_state = 99, .external_lex_state = 2},
  [506] = {.lex_state = 101, .external_lex_state = 2},
  [507] = {.lex_state = 99, .external_lex_state = 2},
  [508] = {.lex_state = 99, .external_lex_state = 2},
  [509] = {.lex_state = 99, .external_lex_state = 2},
  [510] = {.lex_state = 22, .external_lex_state = 2},
  [511] = {.lex_state = 99, .external_lex_state = 2},
  [512] = {.lex_state = 22, .external_lex_state = 2},
  [513] = {.lex_state = 99, .external_lex_state = 2},
  [514] = {.lex_state = 99, .external_lex_state = 2},
  [515] = {.lex_state = 99, .external_lex_state = 2},
  [516] = {.lex_state = 99, .external_lex_state = 2},
  [517] = {.lex_state = 100, .external_lex_state = 2},
  [518] = {.lex_state = 99, .external_lex_state = 2},
  [519] = {.lex_state = 99, .external_lex_state = 2},
  [520] = {.lex_state = 99, .external_lex_state = 2},
  [521] = {.lex_state = 99, .external_lex_state = 2},
  [522] = {.lex_state = 99, .external_lex_state = 2},
  [523] = {.lex_state = 22, .external_lex_state = 2},
  [524] = {.lex_state = 99, .external_lex_state = 2},
  [525] = {.lex_state = 99, .external_lex_state = 2},
  [526] = {.lex_state = 99, .external_lex_state = 2},
  [527] = {.lex_state = 99, .external_lex_state = 2},
  [528] = {.lex_state = 99, .external_lex_state = 2},
  [529] = {.lex_state = 99, .external_lex_state = 2},
  [530] = {.lex_state = 95, .external_lex_state = 2},
  [531] = {.lex_state = 99, .external_lex_state = 2},
  [532] = {.lex_state = 22, .external_lex_state = 2},
  [533] = {.lex_state = 99, .external_lex_state = 2},
  [534] = {.lex_state = 99, .external_lex_state = 2},
  [535] = {.lex_state = 99, .external_lex_state = 2},
  [536] = {.lex_state = 99, .external_lex_state = 2},
  [537] = {(TSStateId)(-1)},
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
    [sym__inline_separator_comment] = ACTIONS(1),
    [sym__inline_end_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(504),
    [sym__statement] = STATE(107),
    [sym__line_comment] = STATE(485),
    [sym__block_comment] = STATE(1),
    [sym_directive] = STATE(410),
    [sym__macro_directive] = STATE(415),
    [sym__numeric_directive] = STATE(420),
    [sym_numeric_mnemonic] = STATE(395),
    [sym__string_directive] = STATE(417),
    [sym_string_mnemonic] = STATE(476),
    [sym__control_directive] = STATE(416),
    [sym_control_mnemonic] = STATE(393),
    [sym_instruction] = STATE(410),
    [sym__label] = STATE(103),
    [aux_sym_program_repeat1] = STATE(5),
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
    STATE(158), 1,
      sym__wrapped_logical_and_expression,
    STATE(159), 1,
      sym__bitwise_or_expression,
    STATE(175), 1,
      sym__logical_or_expression,
    STATE(176), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(177), 1,
      sym__wrapped_logical_or_expression,
    STATE(178), 1,
      sym__bitwise_xor_expression,
    STATE(179), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(180), 1,
      sym__bitwise_and_expression,
    STATE(181), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(182), 1,
      sym__logical_and_expression,
    STATE(183), 1,
      sym__equality_expression,
    STATE(184), 1,
      sym__wrapped_equality_expression,
    STATE(185), 1,
      sym__relational_expression,
    STATE(186), 1,
      sym__wrapped_relational_expression,
    STATE(187), 1,
      sym__shift_expression,
    STATE(188), 1,
      sym__wrapped_shift_expression,
    STATE(189), 1,
      sym__additive_expression,
    STATE(190), 1,
      sym__wrapped_additive_expression,
    STATE(191), 1,
      sym__multiplicative_expression,
    STATE(192), 1,
      sym__wrapped_multiplicative_expression,
    STATE(193), 1,
      sym__simple_expression,
    STATE(200), 1,
      sym__assignment_expression,
    STATE(367), 1,
      sym__control_operand,
    STATE(368), 1,
      sym__wrapped_assignment_expression,
    STATE(418), 1,
      sym_control_operands,
    ACTIONS(37), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(43), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(377), 3,
      sym_section_type,
      sym_option_flag,
      sym_string,
    ACTIONS(25), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(41), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(196), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [152] = 43,
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
    STATE(202), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(207), 1,
      sym__assignment_expression,
    STATE(208), 1,
      sym__logical_or_expression,
    STATE(209), 1,
      sym__wrapped_logical_or_expression,
    STATE(210), 1,
      sym__logical_and_expression,
    STATE(211), 1,
      sym__wrapped_logical_and_expression,
    STATE(212), 1,
      sym__bitwise_or_expression,
    STATE(213), 1,
      sym__bitwise_xor_expression,
    STATE(214), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(215), 1,
      sym__bitwise_and_expression,
    STATE(216), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(217), 1,
      sym__equality_expression,
    STATE(218), 1,
      sym__wrapped_equality_expression,
    STATE(219), 1,
      sym__relational_expression,
    STATE(220), 1,
      sym__wrapped_relational_expression,
    STATE(221), 1,
      sym__shift_expression,
    STATE(222), 1,
      sym__wrapped_shift_expression,
    STATE(223), 1,
      sym__additive_expression,
    STATE(224), 1,
      sym__wrapped_additive_expression,
    STATE(226), 1,
      sym__wrapped_multiplicative_expression,
    STATE(227), 1,
      sym__simple_expression,
    STATE(248), 1,
      sym__multiplicative_expression,
    STATE(373), 1,
      sym__wrapped_assignment_expression,
    STATE(384), 1,
      sym__operand,
    STATE(401), 1,
      sym_string,
    STATE(419), 1,
      sym_operands,
    STATE(421), 1,
      sym__call_expression,
    ACTIONS(61), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(67), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(55), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(65), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(203), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [299] = 23,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 1,
      aux_sym__line_comment_token1,
    ACTIONS(87), 1,
      sym_macro_mnemonic,
    ACTIONS(96), 1,
      aux_sym_control_mnemonic_token1,
    ACTIONS(99), 1,
      sym_opcode,
    STATE(107), 1,
      sym__statement,
    STATE(109), 1,
      sym__label,
    STATE(393), 1,
      sym_control_mnemonic,
    STATE(395), 1,
      sym_numeric_mnemonic,
    STATE(415), 1,
      sym__macro_directive,
    STATE(416), 1,
      sym__control_directive,
    STATE(417), 1,
      sym__string_directive,
    STATE(420), 1,
      sym__numeric_directive,
    STATE(476), 1,
      sym_string_mnemonic,
    STATE(530), 1,
      sym__line_comment,
    STATE(4), 2,
      sym__block_comment,
      aux_sym_program_repeat1,
    STATE(422), 2,
      sym_directive,
      sym_instruction,
    ACTIONS(81), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
    ACTIONS(102), 4,
      sym_local_label,
      sym_global_label,
      sym_global_numeric_label,
      sym_local_numeric_label,
    ACTIONS(93), 5,
      anon_sym_DOTasciz,
      anon_sym_DOTascii,
      anon_sym_DOTasciiz,
      anon_sym_DOTstring,
      anon_sym_DOTstringz,
    ACTIONS(90), 26,
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
  [405] = 24,
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
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      aux_sym_program_repeat1,
    STATE(5), 1,
      sym__block_comment,
    STATE(104), 1,
      sym__label,
    STATE(107), 1,
      sym__statement,
    STATE(393), 1,
      sym_control_mnemonic,
    STATE(395), 1,
      sym_numeric_mnemonic,
    STATE(415), 1,
      sym__macro_directive,
    STATE(416), 1,
      sym__control_directive,
    STATE(417), 1,
      sym__string_directive,
    STATE(420), 1,
      sym__numeric_directive,
    STATE(476), 1,
      sym_string_mnemonic,
    STATE(486), 1,
      sym__line_comment,
    STATE(413), 2,
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
  [513] = 41,
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
    STATE(202), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(207), 1,
      sym__assignment_expression,
    STATE(208), 1,
      sym__logical_or_expression,
    STATE(209), 1,
      sym__wrapped_logical_or_expression,
    STATE(210), 1,
      sym__logical_and_expression,
    STATE(211), 1,
      sym__wrapped_logical_and_expression,
    STATE(212), 1,
      sym__bitwise_or_expression,
    STATE(213), 1,
      sym__bitwise_xor_expression,
    STATE(214), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(215), 1,
      sym__bitwise_and_expression,
    STATE(216), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(217), 1,
      sym__equality_expression,
    STATE(218), 1,
      sym__wrapped_equality_expression,
    STATE(219), 1,
      sym__relational_expression,
    STATE(220), 1,
      sym__wrapped_relational_expression,
    STATE(221), 1,
      sym__shift_expression,
    STATE(222), 1,
      sym__wrapped_shift_expression,
    STATE(223), 1,
      sym__additive_expression,
    STATE(224), 1,
      sym__wrapped_additive_expression,
    STATE(226), 1,
      sym__wrapped_multiplicative_expression,
    STATE(227), 1,
      sym__simple_expression,
    STATE(248), 1,
      sym__multiplicative_expression,
    STATE(373), 1,
      sym__wrapped_assignment_expression,
    STATE(401), 1,
      sym_string,
    STATE(405), 1,
      sym__operand,
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
    ACTIONS(107), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    STATE(203), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [654] = 41,
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
    STATE(202), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(207), 1,
      sym__assignment_expression,
    STATE(208), 1,
      sym__logical_or_expression,
    STATE(209), 1,
      sym__wrapped_logical_or_expression,
    STATE(210), 1,
      sym__logical_and_expression,
    STATE(211), 1,
      sym__wrapped_logical_and_expression,
    STATE(212), 1,
      sym__bitwise_or_expression,
    STATE(213), 1,
      sym__bitwise_xor_expression,
    STATE(214), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(215), 1,
      sym__bitwise_and_expression,
    STATE(216), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(217), 1,
      sym__equality_expression,
    STATE(218), 1,
      sym__wrapped_equality_expression,
    STATE(219), 1,
      sym__relational_expression,
    STATE(220), 1,
      sym__wrapped_relational_expression,
    STATE(221), 1,
      sym__shift_expression,
    STATE(222), 1,
      sym__wrapped_shift_expression,
    STATE(223), 1,
      sym__additive_expression,
    STATE(224), 1,
      sym__wrapped_additive_expression,
    STATE(226), 1,
      sym__wrapped_multiplicative_expression,
    STATE(227), 1,
      sym__simple_expression,
    STATE(248), 1,
      sym__multiplicative_expression,
    STATE(373), 1,
      sym__wrapped_assignment_expression,
    STATE(401), 1,
      sym_string,
    STATE(405), 1,
      sym__operand,
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
    ACTIONS(111), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    STATE(203), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [795] = 38,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(115), 1,
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
      aux_sym_local_label_reference_token1,
    ACTIONS(133), 1,
      aux_sym_symbol_token1,
    STATE(8), 1,
      sym__block_comment,
    STATE(111), 1,
      sym__shift_expression,
    STATE(112), 1,
      sym__wrapped_logical_or_expression,
    STATE(113), 1,
      sym__logical_and_expression,
    STATE(114), 1,
      sym__wrapped_logical_and_expression,
    STATE(115), 1,
      sym__bitwise_or_expression,
    STATE(116), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(117), 1,
      sym__bitwise_xor_expression,
    STATE(118), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(119), 1,
      sym__bitwise_and_expression,
    STATE(120), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(121), 1,
      sym__equality_expression,
    STATE(122), 1,
      sym__wrapped_equality_expression,
    STATE(123), 1,
      sym__relational_expression,
    STATE(124), 1,
      sym__wrapped_relational_expression,
    STATE(126), 1,
      sym__wrapped_shift_expression,
    STATE(128), 1,
      sym__wrapped_additive_expression,
    STATE(129), 1,
      sym__multiplicative_expression,
    STATE(130), 1,
      sym__wrapped_multiplicative_expression,
    STATE(131), 1,
      sym__simple_expression,
    STATE(141), 1,
      sym__assignment_expression,
    STATE(143), 1,
      sym__logical_or_expression,
    STATE(155), 1,
      sym__additive_expression,
    STATE(338), 1,
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
    ACTIONS(113), 7,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    STATE(142), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [929] = 42,
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
    STATE(9), 1,
      sym__block_comment,
    STATE(158), 1,
      sym__wrapped_logical_and_expression,
    STATE(159), 1,
      sym__bitwise_or_expression,
    STATE(175), 1,
      sym__logical_or_expression,
    STATE(176), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(177), 1,
      sym__wrapped_logical_or_expression,
    STATE(178), 1,
      sym__bitwise_xor_expression,
    STATE(179), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(180), 1,
      sym__bitwise_and_expression,
    STATE(181), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(182), 1,
      sym__logical_and_expression,
    STATE(183), 1,
      sym__equality_expression,
    STATE(184), 1,
      sym__wrapped_equality_expression,
    STATE(185), 1,
      sym__relational_expression,
    STATE(186), 1,
      sym__wrapped_relational_expression,
    STATE(187), 1,
      sym__shift_expression,
    STATE(188), 1,
      sym__wrapped_shift_expression,
    STATE(189), 1,
      sym__additive_expression,
    STATE(190), 1,
      sym__wrapped_additive_expression,
    STATE(191), 1,
      sym__multiplicative_expression,
    STATE(192), 1,
      sym__wrapped_multiplicative_expression,
    STATE(193), 1,
      sym__simple_expression,
    STATE(200), 1,
      sym__assignment_expression,
    STATE(368), 1,
      sym__wrapped_assignment_expression,
    STATE(374), 1,
      sym__control_operand,
    ACTIONS(37), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(43), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(377), 3,
      sym_section_type,
      sym_option_flag,
      sym_string,
    ACTIONS(41), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(196), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1071] = 39,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(115), 1,
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
      aux_sym_local_label_reference_token1,
    ACTIONS(133), 1,
      aux_sym_symbol_token1,
    STATE(10), 1,
      sym__block_comment,
    STATE(111), 1,
      sym__shift_expression,
    STATE(112), 1,
      sym__wrapped_logical_or_expression,
    STATE(113), 1,
      sym__logical_and_expression,
    STATE(114), 1,
      sym__wrapped_logical_and_expression,
    STATE(115), 1,
      sym__bitwise_or_expression,
    STATE(116), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(117), 1,
      sym__bitwise_xor_expression,
    STATE(118), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(119), 1,
      sym__bitwise_and_expression,
    STATE(120), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(121), 1,
      sym__equality_expression,
    STATE(122), 1,
      sym__wrapped_equality_expression,
    STATE(123), 1,
      sym__relational_expression,
    STATE(124), 1,
      sym__wrapped_relational_expression,
    STATE(126), 1,
      sym__wrapped_shift_expression,
    STATE(128), 1,
      sym__wrapped_additive_expression,
    STATE(129), 1,
      sym__multiplicative_expression,
    STATE(130), 1,
      sym__wrapped_multiplicative_expression,
    STATE(131), 1,
      sym__simple_expression,
    STATE(141), 1,
      sym__assignment_expression,
    STATE(143), 1,
      sym__logical_or_expression,
    STATE(155), 1,
      sym__additive_expression,
    STATE(255), 1,
      sym__wrapped_assignment_expression,
    STATE(426), 1,
      sym_numeric_operands,
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
    ACTIONS(135), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    STATE(142), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1206] = 42,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    ACTIONS(141), 1,
      sym_unary_minus_operator,
    ACTIONS(145), 1,
      sym_relocation_type,
    ACTIONS(151), 1,
      aux_sym_decimal_token1,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(11), 1,
      sym__block_comment,
    STATE(256), 1,
      sym__bitwise_xor_expression,
    STATE(257), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(258), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(259), 1,
      sym__bitwise_and_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(261), 1,
      sym__equality_expression,
    STATE(262), 1,
      sym__wrapped_equality_expression,
    STATE(263), 1,
      sym__relational_expression,
    STATE(264), 1,
      sym__wrapped_relational_expression,
    STATE(265), 1,
      sym__shift_expression,
    STATE(266), 1,
      sym__wrapped_shift_expression,
    STATE(267), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__wrapped_additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(270), 1,
      sym__wrapped_multiplicative_expression,
    STATE(271), 1,
      sym__simple_expression,
    STATE(277), 1,
      sym__assignment_expression,
    STATE(278), 1,
      sym__logical_or_expression,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(295), 1,
      sym__logical_and_expression,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_or_expression,
    STATE(428), 1,
      sym__wrapped_assignment_expression,
    STATE(446), 1,
      sym__operand,
    STATE(460), 1,
      sym_string,
    STATE(521), 1,
      sym_operands,
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
    STATE(297), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1346] = 44,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    ACTIONS(141), 1,
      sym_unary_minus_operator,
    ACTIONS(145), 1,
      sym_relocation_type,
    ACTIONS(151), 1,
      aux_sym_decimal_token1,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(12), 1,
      sym__block_comment,
    STATE(256), 1,
      sym__bitwise_xor_expression,
    STATE(257), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(258), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(259), 1,
      sym__bitwise_and_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(261), 1,
      sym__equality_expression,
    STATE(262), 1,
      sym__wrapped_equality_expression,
    STATE(263), 1,
      sym__relational_expression,
    STATE(264), 1,
      sym__wrapped_relational_expression,
    STATE(265), 1,
      sym__shift_expression,
    STATE(266), 1,
      sym__wrapped_shift_expression,
    STATE(267), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__wrapped_additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(270), 1,
      sym__wrapped_multiplicative_expression,
    STATE(271), 1,
      sym__simple_expression,
    STATE(274), 1,
      sym_symbol,
    STATE(277), 1,
      sym__assignment_expression,
    STATE(278), 1,
      sym__logical_or_expression,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(295), 1,
      sym__logical_and_expression,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_or_expression,
    STATE(427), 1,
      sym__wrapped_assignment_expression,
    STATE(446), 1,
      sym__operand,
    STATE(460), 1,
      sym_string,
    STATE(525), 1,
      sym_operands,
    ACTIONS(143), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(149), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(161), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(147), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(297), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1490] = 43,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(137), 1,
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
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(13), 1,
      sym__block_comment,
    STATE(256), 1,
      sym__bitwise_xor_expression,
    STATE(257), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(258), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(259), 1,
      sym__bitwise_and_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(261), 1,
      sym__equality_expression,
    STATE(262), 1,
      sym__wrapped_equality_expression,
    STATE(263), 1,
      sym__relational_expression,
    STATE(264), 1,
      sym__wrapped_relational_expression,
    STATE(265), 1,
      sym__shift_expression,
    STATE(266), 1,
      sym__wrapped_shift_expression,
    STATE(267), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__wrapped_additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(270), 1,
      sym__wrapped_multiplicative_expression,
    STATE(271), 1,
      sym__simple_expression,
    STATE(277), 1,
      sym__assignment_expression,
    STATE(278), 1,
      sym__logical_or_expression,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(295), 1,
      sym__logical_and_expression,
    STATE(308), 1,
      sym_symbol,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_or_expression,
    STATE(428), 1,
      sym__wrapped_assignment_expression,
    STATE(446), 1,
      sym__operand,
    STATE(460), 1,
      sym_string,
    STATE(509), 1,
      sym_operands,
    ACTIONS(143), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(149), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(163), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(147), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(297), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1631] = 43,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(137), 1,
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
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(14), 1,
      sym__block_comment,
    STATE(256), 1,
      sym__bitwise_xor_expression,
    STATE(257), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(258), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(259), 1,
      sym__bitwise_and_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(261), 1,
      sym__equality_expression,
    STATE(262), 1,
      sym__wrapped_equality_expression,
    STATE(263), 1,
      sym__relational_expression,
    STATE(264), 1,
      sym__wrapped_relational_expression,
    STATE(265), 1,
      sym__shift_expression,
    STATE(266), 1,
      sym__wrapped_shift_expression,
    STATE(267), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__wrapped_additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(270), 1,
      sym__wrapped_multiplicative_expression,
    STATE(271), 1,
      sym__simple_expression,
    STATE(277), 1,
      sym__assignment_expression,
    STATE(278), 1,
      sym__logical_or_expression,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(295), 1,
      sym__logical_and_expression,
    STATE(299), 1,
      sym_symbol,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_or_expression,
    STATE(429), 1,
      sym__wrapped_assignment_expression,
    STATE(446), 1,
      sym__operand,
    STATE(460), 1,
      sym_string,
    STATE(536), 1,
      sym_operands,
    ACTIONS(143), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(149), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(165), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(147), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(297), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1772] = 43,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(137), 1,
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
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(15), 1,
      sym__block_comment,
    STATE(256), 1,
      sym__bitwise_xor_expression,
    STATE(257), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(258), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(259), 1,
      sym__bitwise_and_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(261), 1,
      sym__equality_expression,
    STATE(262), 1,
      sym__wrapped_equality_expression,
    STATE(263), 1,
      sym__relational_expression,
    STATE(264), 1,
      sym__wrapped_relational_expression,
    STATE(265), 1,
      sym__shift_expression,
    STATE(266), 1,
      sym__wrapped_shift_expression,
    STATE(267), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__wrapped_additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(270), 1,
      sym__wrapped_multiplicative_expression,
    STATE(271), 1,
      sym__simple_expression,
    STATE(277), 1,
      sym__assignment_expression,
    STATE(278), 1,
      sym__logical_or_expression,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(283), 1,
      sym_symbol,
    STATE(295), 1,
      sym__logical_and_expression,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_or_expression,
    STATE(428), 1,
      sym__wrapped_assignment_expression,
    STATE(446), 1,
      sym__operand,
    STATE(460), 1,
      sym_string,
    STATE(513), 1,
      sym_operands,
    ACTIONS(143), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(149), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(167), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(147), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(297), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1913] = 43,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(137), 1,
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
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(16), 1,
      sym__block_comment,
    STATE(256), 1,
      sym__bitwise_xor_expression,
    STATE(257), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(258), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(259), 1,
      sym__bitwise_and_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(261), 1,
      sym__equality_expression,
    STATE(262), 1,
      sym__wrapped_equality_expression,
    STATE(263), 1,
      sym__relational_expression,
    STATE(264), 1,
      sym__wrapped_relational_expression,
    STATE(265), 1,
      sym__shift_expression,
    STATE(266), 1,
      sym__wrapped_shift_expression,
    STATE(267), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__wrapped_additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(270), 1,
      sym__wrapped_multiplicative_expression,
    STATE(271), 1,
      sym__simple_expression,
    STATE(277), 1,
      sym__assignment_expression,
    STATE(278), 1,
      sym__logical_or_expression,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(295), 1,
      sym__logical_and_expression,
    STATE(300), 1,
      sym_symbol,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_or_expression,
    STATE(428), 1,
      sym__wrapped_assignment_expression,
    STATE(446), 1,
      sym__operand,
    STATE(460), 1,
      sym_string,
    STATE(502), 1,
      sym_operands,
    ACTIONS(143), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(149), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(169), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(147), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(297), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2054] = 41,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    ACTIONS(137), 1,
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
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(17), 1,
      sym__block_comment,
    STATE(256), 1,
      sym__bitwise_xor_expression,
    STATE(257), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(258), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(259), 1,
      sym__bitwise_and_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(261), 1,
      sym__equality_expression,
    STATE(262), 1,
      sym__wrapped_equality_expression,
    STATE(263), 1,
      sym__relational_expression,
    STATE(264), 1,
      sym__wrapped_relational_expression,
    STATE(265), 1,
      sym__shift_expression,
    STATE(266), 1,
      sym__wrapped_shift_expression,
    STATE(267), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__wrapped_additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(270), 1,
      sym__wrapped_multiplicative_expression,
    STATE(271), 1,
      sym__simple_expression,
    STATE(277), 1,
      sym__assignment_expression,
    STATE(278), 1,
      sym__logical_or_expression,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(295), 1,
      sym__logical_and_expression,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_or_expression,
    STATE(428), 1,
      sym__wrapped_assignment_expression,
    STATE(460), 1,
      sym_string,
    STATE(474), 1,
      sym__operand,
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
    STATE(297), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [2191] = 41,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    ACTIONS(137), 1,
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
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(18), 1,
      sym__block_comment,
    STATE(256), 1,
      sym__bitwise_xor_expression,
    STATE(257), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(258), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(259), 1,
      sym__bitwise_and_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(261), 1,
      sym__equality_expression,
    STATE(262), 1,
      sym__wrapped_equality_expression,
    STATE(263), 1,
      sym__relational_expression,
    STATE(264), 1,
      sym__wrapped_relational_expression,
    STATE(265), 1,
      sym__shift_expression,
    STATE(266), 1,
      sym__wrapped_shift_expression,
    STATE(267), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__wrapped_additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(270), 1,
      sym__wrapped_multiplicative_expression,
    STATE(271), 1,
      sym__simple_expression,
    STATE(277), 1,
      sym__assignment_expression,
    STATE(278), 1,
      sym__logical_or_expression,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(295), 1,
      sym__logical_and_expression,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_or_expression,
    STATE(428), 1,
      sym__wrapped_assignment_expression,
    STATE(460), 1,
      sym_string,
    STATE(474), 1,
      sym__operand,
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
    STATE(297), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [2328] = 43,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(137), 1,
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
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(19), 1,
      sym__block_comment,
    STATE(256), 1,
      sym__bitwise_xor_expression,
    STATE(257), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(258), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(259), 1,
      sym__bitwise_and_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(261), 1,
      sym__equality_expression,
    STATE(262), 1,
      sym__wrapped_equality_expression,
    STATE(263), 1,
      sym__relational_expression,
    STATE(264), 1,
      sym__wrapped_relational_expression,
    STATE(265), 1,
      sym__shift_expression,
    STATE(266), 1,
      sym__wrapped_shift_expression,
    STATE(267), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__wrapped_additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(270), 1,
      sym__wrapped_multiplicative_expression,
    STATE(271), 1,
      sym__simple_expression,
    STATE(277), 1,
      sym__assignment_expression,
    STATE(278), 1,
      sym__logical_or_expression,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(295), 1,
      sym__logical_and_expression,
    STATE(301), 1,
      sym_symbol,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_or_expression,
    STATE(432), 1,
      sym__wrapped_assignment_expression,
    STATE(446), 1,
      sym__operand,
    STATE(460), 1,
      sym_string,
    STATE(522), 1,
      sym_operands,
    ACTIONS(143), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(149), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(171), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(147), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(297), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2469] = 43,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(137), 1,
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
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(20), 1,
      sym__block_comment,
    STATE(256), 1,
      sym__bitwise_xor_expression,
    STATE(257), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(258), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(259), 1,
      sym__bitwise_and_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(261), 1,
      sym__equality_expression,
    STATE(262), 1,
      sym__wrapped_equality_expression,
    STATE(263), 1,
      sym__relational_expression,
    STATE(264), 1,
      sym__wrapped_relational_expression,
    STATE(265), 1,
      sym__shift_expression,
    STATE(266), 1,
      sym__wrapped_shift_expression,
    STATE(267), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__wrapped_additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(270), 1,
      sym__wrapped_multiplicative_expression,
    STATE(271), 1,
      sym__simple_expression,
    STATE(277), 1,
      sym__assignment_expression,
    STATE(278), 1,
      sym__logical_or_expression,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(295), 1,
      sym__logical_and_expression,
    STATE(302), 1,
      sym_symbol,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_or_expression,
    STATE(428), 1,
      sym__wrapped_assignment_expression,
    STATE(446), 1,
      sym__operand,
    STATE(460), 1,
      sym_string,
    STATE(514), 1,
      sym_operands,
    ACTIONS(143), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(149), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(173), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(147), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(297), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2610] = 43,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(137), 1,
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
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(21), 1,
      sym__block_comment,
    STATE(256), 1,
      sym__bitwise_xor_expression,
    STATE(257), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(258), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(259), 1,
      sym__bitwise_and_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(261), 1,
      sym__equality_expression,
    STATE(262), 1,
      sym__wrapped_equality_expression,
    STATE(263), 1,
      sym__relational_expression,
    STATE(264), 1,
      sym__wrapped_relational_expression,
    STATE(265), 1,
      sym__shift_expression,
    STATE(266), 1,
      sym__wrapped_shift_expression,
    STATE(267), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__wrapped_additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(270), 1,
      sym__wrapped_multiplicative_expression,
    STATE(271), 1,
      sym__simple_expression,
    STATE(277), 1,
      sym__assignment_expression,
    STATE(278), 1,
      sym__logical_or_expression,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(295), 1,
      sym__logical_and_expression,
    STATE(303), 1,
      sym_symbol,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_or_expression,
    STATE(433), 1,
      sym__wrapped_assignment_expression,
    STATE(446), 1,
      sym__operand,
    STATE(460), 1,
      sym_string,
    STATE(511), 1,
      sym_operands,
    ACTIONS(143), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(149), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(175), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(147), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(297), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2751] = 43,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(137), 1,
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
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(22), 1,
      sym__block_comment,
    STATE(256), 1,
      sym__bitwise_xor_expression,
    STATE(257), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(258), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(259), 1,
      sym__bitwise_and_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(261), 1,
      sym__equality_expression,
    STATE(262), 1,
      sym__wrapped_equality_expression,
    STATE(263), 1,
      sym__relational_expression,
    STATE(264), 1,
      sym__wrapped_relational_expression,
    STATE(265), 1,
      sym__shift_expression,
    STATE(266), 1,
      sym__wrapped_shift_expression,
    STATE(267), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__wrapped_additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(270), 1,
      sym__wrapped_multiplicative_expression,
    STATE(271), 1,
      sym__simple_expression,
    STATE(277), 1,
      sym__assignment_expression,
    STATE(278), 1,
      sym__logical_or_expression,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(295), 1,
      sym__logical_and_expression,
    STATE(305), 1,
      sym_symbol,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_or_expression,
    STATE(414), 1,
      sym__wrapped_assignment_expression,
    STATE(446), 1,
      sym__operand,
    STATE(460), 1,
      sym_string,
    STATE(528), 1,
      sym_operands,
    ACTIONS(143), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(149), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(177), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(147), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(297), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2892] = 43,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(137), 1,
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
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(23), 1,
      sym__block_comment,
    STATE(256), 1,
      sym__bitwise_xor_expression,
    STATE(257), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(258), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(259), 1,
      sym__bitwise_and_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(261), 1,
      sym__equality_expression,
    STATE(262), 1,
      sym__wrapped_equality_expression,
    STATE(263), 1,
      sym__relational_expression,
    STATE(264), 1,
      sym__wrapped_relational_expression,
    STATE(265), 1,
      sym__shift_expression,
    STATE(266), 1,
      sym__wrapped_shift_expression,
    STATE(267), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__wrapped_additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(270), 1,
      sym__wrapped_multiplicative_expression,
    STATE(271), 1,
      sym__simple_expression,
    STATE(274), 1,
      sym_symbol,
    STATE(277), 1,
      sym__assignment_expression,
    STATE(278), 1,
      sym__logical_or_expression,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(295), 1,
      sym__logical_and_expression,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_or_expression,
    STATE(427), 1,
      sym__wrapped_assignment_expression,
    STATE(446), 1,
      sym__operand,
    STATE(460), 1,
      sym_string,
    STATE(499), 1,
      sym_operands,
    ACTIONS(143), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(149), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(161), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(147), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(297), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3033] = 43,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(137), 1,
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
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(24), 1,
      sym__block_comment,
    STATE(256), 1,
      sym__bitwise_xor_expression,
    STATE(257), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(258), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(259), 1,
      sym__bitwise_and_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(261), 1,
      sym__equality_expression,
    STATE(262), 1,
      sym__wrapped_equality_expression,
    STATE(263), 1,
      sym__relational_expression,
    STATE(264), 1,
      sym__wrapped_relational_expression,
    STATE(265), 1,
      sym__shift_expression,
    STATE(266), 1,
      sym__wrapped_shift_expression,
    STATE(267), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__wrapped_additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(270), 1,
      sym__wrapped_multiplicative_expression,
    STATE(271), 1,
      sym__simple_expression,
    STATE(277), 1,
      sym__assignment_expression,
    STATE(278), 1,
      sym__logical_or_expression,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(295), 1,
      sym__logical_and_expression,
    STATE(304), 1,
      sym_symbol,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_or_expression,
    STATE(428), 1,
      sym__wrapped_assignment_expression,
    STATE(446), 1,
      sym__operand,
    STATE(460), 1,
      sym_string,
    STATE(534), 1,
      sym_operands,
    ACTIONS(143), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(149), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(179), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(147), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(297), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3174] = 43,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(137), 1,
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
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(25), 1,
      sym__block_comment,
    STATE(256), 1,
      sym__bitwise_xor_expression,
    STATE(257), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(258), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(259), 1,
      sym__bitwise_and_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(261), 1,
      sym__equality_expression,
    STATE(262), 1,
      sym__wrapped_equality_expression,
    STATE(263), 1,
      sym__relational_expression,
    STATE(264), 1,
      sym__wrapped_relational_expression,
    STATE(265), 1,
      sym__shift_expression,
    STATE(266), 1,
      sym__wrapped_shift_expression,
    STATE(267), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__wrapped_additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(270), 1,
      sym__wrapped_multiplicative_expression,
    STATE(271), 1,
      sym__simple_expression,
    STATE(277), 1,
      sym__assignment_expression,
    STATE(278), 1,
      sym__logical_or_expression,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(295), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym_symbol,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_or_expression,
    STATE(428), 1,
      sym__wrapped_assignment_expression,
    STATE(446), 1,
      sym__operand,
    STATE(460), 1,
      sym_string,
    STATE(505), 1,
      sym_operands,
    ACTIONS(143), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(149), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(181), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(147), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(297), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3315] = 43,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(137), 1,
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
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(26), 1,
      sym__block_comment,
    STATE(256), 1,
      sym__bitwise_xor_expression,
    STATE(257), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(258), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(259), 1,
      sym__bitwise_and_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(261), 1,
      sym__equality_expression,
    STATE(262), 1,
      sym__wrapped_equality_expression,
    STATE(263), 1,
      sym__relational_expression,
    STATE(264), 1,
      sym__wrapped_relational_expression,
    STATE(265), 1,
      sym__shift_expression,
    STATE(266), 1,
      sym__wrapped_shift_expression,
    STATE(267), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__wrapped_additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(270), 1,
      sym__wrapped_multiplicative_expression,
    STATE(271), 1,
      sym__simple_expression,
    STATE(277), 1,
      sym__assignment_expression,
    STATE(278), 1,
      sym__logical_or_expression,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(295), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym_symbol,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_or_expression,
    STATE(433), 1,
      sym__wrapped_assignment_expression,
    STATE(446), 1,
      sym__operand,
    STATE(460), 1,
      sym_string,
    STATE(507), 1,
      sym_operands,
    ACTIONS(143), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(149), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(183), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(147), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(297), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3456] = 42,
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
    STATE(251), 1,
      sym_address,
    STATE(316), 1,
      sym__simple_expression,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(349), 1,
      sym__bitwise_and_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(351), 1,
      sym__equality_expression,
    STATE(352), 1,
      sym__wrapped_equality_expression,
    STATE(353), 1,
      sym__relational_expression,
    STATE(354), 1,
      sym__wrapped_relational_expression,
    STATE(355), 1,
      sym__shift_expression,
    STATE(356), 1,
      sym__wrapped_shift_expression,
    STATE(357), 1,
      sym__additive_expression,
    STATE(358), 1,
      sym__wrapped_additive_expression,
    STATE(359), 1,
      sym__multiplicative_expression,
    STATE(366), 1,
      sym_string,
    STATE(412), 1,
      sym_string_operands,
    STATE(480), 1,
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
    STATE(331), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
  [3594] = 40,
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
    STATE(202), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(207), 1,
      sym__assignment_expression,
    STATE(208), 1,
      sym__logical_or_expression,
    STATE(209), 1,
      sym__wrapped_logical_or_expression,
    STATE(210), 1,
      sym__logical_and_expression,
    STATE(211), 1,
      sym__wrapped_logical_and_expression,
    STATE(212), 1,
      sym__bitwise_or_expression,
    STATE(213), 1,
      sym__bitwise_xor_expression,
    STATE(214), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(215), 1,
      sym__bitwise_and_expression,
    STATE(216), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(217), 1,
      sym__equality_expression,
    STATE(218), 1,
      sym__wrapped_equality_expression,
    STATE(219), 1,
      sym__relational_expression,
    STATE(220), 1,
      sym__wrapped_relational_expression,
    STATE(221), 1,
      sym__shift_expression,
    STATE(222), 1,
      sym__wrapped_shift_expression,
    STATE(223), 1,
      sym__additive_expression,
    STATE(224), 1,
      sym__wrapped_additive_expression,
    STATE(226), 1,
      sym__wrapped_multiplicative_expression,
    STATE(227), 1,
      sym__simple_expression,
    STATE(248), 1,
      sym__multiplicative_expression,
    STATE(373), 1,
      sym__wrapped_assignment_expression,
    STATE(401), 1,
      sym_string,
    STATE(405), 1,
      sym__operand,
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
    STATE(203), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3728] = 40,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(137), 1,
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
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(29), 1,
      sym__block_comment,
    STATE(256), 1,
      sym__bitwise_xor_expression,
    STATE(257), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(258), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(259), 1,
      sym__bitwise_and_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(261), 1,
      sym__equality_expression,
    STATE(262), 1,
      sym__wrapped_equality_expression,
    STATE(263), 1,
      sym__relational_expression,
    STATE(264), 1,
      sym__wrapped_relational_expression,
    STATE(265), 1,
      sym__shift_expression,
    STATE(266), 1,
      sym__wrapped_shift_expression,
    STATE(267), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__wrapped_additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(270), 1,
      sym__wrapped_multiplicative_expression,
    STATE(271), 1,
      sym__simple_expression,
    STATE(277), 1,
      sym__assignment_expression,
    STATE(278), 1,
      sym__logical_or_expression,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(295), 1,
      sym__logical_and_expression,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_or_expression,
    STATE(428), 1,
      sym__wrapped_assignment_expression,
    STATE(460), 1,
      sym_string,
    STATE(474), 1,
      sym__operand,
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
    STATE(297), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3862] = 37,
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
    STATE(30), 1,
      sym__block_comment,
    STATE(158), 1,
      sym__wrapped_logical_and_expression,
    STATE(159), 1,
      sym__bitwise_or_expression,
    STATE(175), 1,
      sym__logical_or_expression,
    STATE(176), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(177), 1,
      sym__wrapped_logical_or_expression,
    STATE(178), 1,
      sym__bitwise_xor_expression,
    STATE(179), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(180), 1,
      sym__bitwise_and_expression,
    STATE(181), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(182), 1,
      sym__logical_and_expression,
    STATE(183), 1,
      sym__equality_expression,
    STATE(184), 1,
      sym__wrapped_equality_expression,
    STATE(185), 1,
      sym__relational_expression,
    STATE(186), 1,
      sym__wrapped_relational_expression,
    STATE(187), 1,
      sym__shift_expression,
    STATE(188), 1,
      sym__wrapped_shift_expression,
    STATE(189), 1,
      sym__additive_expression,
    STATE(190), 1,
      sym__wrapped_additive_expression,
    STATE(191), 1,
      sym__multiplicative_expression,
    STATE(192), 1,
      sym__wrapped_multiplicative_expression,
    STATE(193), 1,
      sym__simple_expression,
    STATE(194), 1,
      sym__wrapped_assignment_expression,
    STATE(200), 1,
      sym__assignment_expression,
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
    STATE(196), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3987] = 37,
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
    STATE(223), 1,
      sym__additive_expression,
    STATE(226), 1,
      sym__wrapped_multiplicative_expression,
    STATE(227), 1,
      sym__simple_expression,
    STATE(241), 1,
      sym__wrapped_additive_expression,
    STATE(248), 1,
      sym__multiplicative_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(349), 1,
      sym__bitwise_and_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(351), 1,
      sym__equality_expression,
    STATE(352), 1,
      sym__wrapped_equality_expression,
    STATE(353), 1,
      sym__relational_expression,
    STATE(354), 1,
      sym__wrapped_relational_expression,
    STATE(355), 1,
      sym__shift_expression,
    STATE(356), 1,
      sym__wrapped_shift_expression,
    STATE(494), 1,
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
    STATE(203), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4112] = 37,
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
    STATE(32), 1,
      sym__block_comment,
    STATE(227), 1,
      sym__simple_expression,
    STATE(242), 1,
      sym__wrapped_multiplicative_expression,
    STATE(248), 1,
      sym__multiplicative_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(349), 1,
      sym__bitwise_and_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(351), 1,
      sym__equality_expression,
    STATE(352), 1,
      sym__wrapped_equality_expression,
    STATE(353), 1,
      sym__relational_expression,
    STATE(354), 1,
      sym__wrapped_relational_expression,
    STATE(355), 1,
      sym__shift_expression,
    STATE(356), 1,
      sym__wrapped_shift_expression,
    STATE(357), 1,
      sym__additive_expression,
    STATE(358), 1,
      sym__wrapped_additive_expression,
    STATE(494), 1,
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
    STATE(203), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4237] = 37,
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
    STATE(243), 1,
      sym__simple_expression,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(349), 1,
      sym__bitwise_and_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(351), 1,
      sym__equality_expression,
    STATE(352), 1,
      sym__wrapped_equality_expression,
    STATE(353), 1,
      sym__relational_expression,
    STATE(354), 1,
      sym__wrapped_relational_expression,
    STATE(355), 1,
      sym__shift_expression,
    STATE(356), 1,
      sym__wrapped_shift_expression,
    STATE(357), 1,
      sym__additive_expression,
    STATE(358), 1,
      sym__wrapped_additive_expression,
    STATE(359), 1,
      sym__multiplicative_expression,
    STATE(494), 1,
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
    STATE(203), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4362] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(115), 1,
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
      aux_sym_local_label_reference_token1,
    ACTIONS(133), 1,
      aux_sym_symbol_token1,
    STATE(34), 1,
      sym__block_comment,
    STATE(111), 1,
      sym__shift_expression,
    STATE(112), 1,
      sym__wrapped_logical_or_expression,
    STATE(113), 1,
      sym__logical_and_expression,
    STATE(114), 1,
      sym__wrapped_logical_and_expression,
    STATE(115), 1,
      sym__bitwise_or_expression,
    STATE(116), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(117), 1,
      sym__bitwise_xor_expression,
    STATE(118), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(119), 1,
      sym__bitwise_and_expression,
    STATE(120), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(121), 1,
      sym__equality_expression,
    STATE(122), 1,
      sym__wrapped_equality_expression,
    STATE(123), 1,
      sym__relational_expression,
    STATE(124), 1,
      sym__wrapped_relational_expression,
    STATE(126), 1,
      sym__wrapped_shift_expression,
    STATE(128), 1,
      sym__wrapped_additive_expression,
    STATE(129), 1,
      sym__multiplicative_expression,
    STATE(130), 1,
      sym__wrapped_multiplicative_expression,
    STATE(131), 1,
      sym__simple_expression,
    STATE(141), 1,
      sym__assignment_expression,
    STATE(143), 1,
      sym__logical_or_expression,
    STATE(155), 1,
      sym__additive_expression,
    STATE(338), 1,
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
    STATE(142), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4487] = 37,
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
    STATE(202), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(207), 1,
      sym__assignment_expression,
    STATE(208), 1,
      sym__logical_or_expression,
    STATE(209), 1,
      sym__wrapped_logical_or_expression,
    STATE(210), 1,
      sym__logical_and_expression,
    STATE(211), 1,
      sym__wrapped_logical_and_expression,
    STATE(212), 1,
      sym__bitwise_or_expression,
    STATE(213), 1,
      sym__bitwise_xor_expression,
    STATE(214), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(215), 1,
      sym__bitwise_and_expression,
    STATE(216), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(217), 1,
      sym__equality_expression,
    STATE(218), 1,
      sym__wrapped_equality_expression,
    STATE(219), 1,
      sym__relational_expression,
    STATE(220), 1,
      sym__wrapped_relational_expression,
    STATE(221), 1,
      sym__shift_expression,
    STATE(222), 1,
      sym__wrapped_shift_expression,
    STATE(223), 1,
      sym__additive_expression,
    STATE(224), 1,
      sym__wrapped_additive_expression,
    STATE(226), 1,
      sym__wrapped_multiplicative_expression,
    STATE(227), 1,
      sym__simple_expression,
    STATE(228), 1,
      sym__wrapped_assignment_expression,
    STATE(248), 1,
      sym__multiplicative_expression,
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
    STATE(203), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4612] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_unary_minus_operator,
    ACTIONS(145), 1,
      sym_relocation_type,
    ACTIONS(151), 1,
      aux_sym_decimal_token1,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(36), 1,
      sym__block_comment,
    STATE(256), 1,
      sym__bitwise_xor_expression,
    STATE(257), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(258), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(259), 1,
      sym__bitwise_and_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(261), 1,
      sym__equality_expression,
    STATE(262), 1,
      sym__wrapped_equality_expression,
    STATE(263), 1,
      sym__relational_expression,
    STATE(264), 1,
      sym__wrapped_relational_expression,
    STATE(265), 1,
      sym__shift_expression,
    STATE(266), 1,
      sym__wrapped_shift_expression,
    STATE(267), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__wrapped_additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(270), 1,
      sym__wrapped_multiplicative_expression,
    STATE(271), 1,
      sym__simple_expression,
    STATE(278), 1,
      sym__logical_or_expression,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(295), 1,
      sym__logical_and_expression,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(411), 1,
      sym__wrapped_logical_or_expression,
    STATE(495), 1,
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
    STATE(297), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4737] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_unary_minus_operator,
    ACTIONS(145), 1,
      sym_relocation_type,
    ACTIONS(151), 1,
      aux_sym_decimal_token1,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(37), 1,
      sym__block_comment,
    STATE(256), 1,
      sym__bitwise_xor_expression,
    STATE(257), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(258), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(259), 1,
      sym__bitwise_and_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(261), 1,
      sym__equality_expression,
    STATE(262), 1,
      sym__wrapped_equality_expression,
    STATE(263), 1,
      sym__relational_expression,
    STATE(264), 1,
      sym__wrapped_relational_expression,
    STATE(265), 1,
      sym__shift_expression,
    STATE(266), 1,
      sym__wrapped_shift_expression,
    STATE(267), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__wrapped_additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(270), 1,
      sym__wrapped_multiplicative_expression,
    STATE(271), 1,
      sym__simple_expression,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(284), 1,
      sym__wrapped_logical_and_expression,
    STATE(295), 1,
      sym__logical_and_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(495), 1,
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
    STATE(297), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4862] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_unary_minus_operator,
    ACTIONS(145), 1,
      sym_relocation_type,
    ACTIONS(151), 1,
      aux_sym_decimal_token1,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(38), 1,
      sym__block_comment,
    STATE(256), 1,
      sym__bitwise_xor_expression,
    STATE(258), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(259), 1,
      sym__bitwise_and_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(261), 1,
      sym__equality_expression,
    STATE(262), 1,
      sym__wrapped_equality_expression,
    STATE(263), 1,
      sym__relational_expression,
    STATE(264), 1,
      sym__wrapped_relational_expression,
    STATE(265), 1,
      sym__shift_expression,
    STATE(266), 1,
      sym__wrapped_shift_expression,
    STATE(267), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__wrapped_additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(270), 1,
      sym__wrapped_multiplicative_expression,
    STATE(271), 1,
      sym__simple_expression,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(285), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(495), 1,
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
    STATE(297), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4987] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_unary_minus_operator,
    ACTIONS(145), 1,
      sym_relocation_type,
    ACTIONS(151), 1,
      aux_sym_decimal_token1,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(39), 1,
      sym__block_comment,
    STATE(256), 1,
      sym__bitwise_xor_expression,
    STATE(259), 1,
      sym__bitwise_and_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(261), 1,
      sym__equality_expression,
    STATE(262), 1,
      sym__wrapped_equality_expression,
    STATE(263), 1,
      sym__relational_expression,
    STATE(264), 1,
      sym__wrapped_relational_expression,
    STATE(265), 1,
      sym__shift_expression,
    STATE(266), 1,
      sym__wrapped_shift_expression,
    STATE(267), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__wrapped_additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(270), 1,
      sym__wrapped_multiplicative_expression,
    STATE(271), 1,
      sym__simple_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(495), 1,
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
    STATE(297), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5112] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_unary_minus_operator,
    ACTIONS(145), 1,
      sym_relocation_type,
    ACTIONS(151), 1,
      aux_sym_decimal_token1,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(40), 1,
      sym__block_comment,
    STATE(259), 1,
      sym__bitwise_and_expression,
    STATE(261), 1,
      sym__equality_expression,
    STATE(262), 1,
      sym__wrapped_equality_expression,
    STATE(263), 1,
      sym__relational_expression,
    STATE(264), 1,
      sym__wrapped_relational_expression,
    STATE(265), 1,
      sym__shift_expression,
    STATE(266), 1,
      sym__wrapped_shift_expression,
    STATE(267), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__wrapped_additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(270), 1,
      sym__wrapped_multiplicative_expression,
    STATE(271), 1,
      sym__simple_expression,
    STATE(287), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(495), 1,
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
    STATE(297), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5237] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_unary_minus_operator,
    ACTIONS(145), 1,
      sym_relocation_type,
    ACTIONS(151), 1,
      aux_sym_decimal_token1,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(41), 1,
      sym__block_comment,
    STATE(261), 1,
      sym__equality_expression,
    STATE(263), 1,
      sym__relational_expression,
    STATE(264), 1,
      sym__wrapped_relational_expression,
    STATE(265), 1,
      sym__shift_expression,
    STATE(266), 1,
      sym__wrapped_shift_expression,
    STATE(267), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__wrapped_additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(270), 1,
      sym__wrapped_multiplicative_expression,
    STATE(271), 1,
      sym__simple_expression,
    STATE(288), 1,
      sym__wrapped_equality_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(349), 1,
      sym__bitwise_and_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(495), 1,
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
    STATE(297), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5362] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_unary_minus_operator,
    ACTIONS(145), 1,
      sym_relocation_type,
    ACTIONS(151), 1,
      aux_sym_decimal_token1,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(42), 1,
      sym__block_comment,
    STATE(263), 1,
      sym__relational_expression,
    STATE(265), 1,
      sym__shift_expression,
    STATE(266), 1,
      sym__wrapped_shift_expression,
    STATE(267), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__wrapped_additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(270), 1,
      sym__wrapped_multiplicative_expression,
    STATE(271), 1,
      sym__simple_expression,
    STATE(289), 1,
      sym__wrapped_relational_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(349), 1,
      sym__bitwise_and_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(351), 1,
      sym__equality_expression,
    STATE(352), 1,
      sym__wrapped_equality_expression,
    STATE(495), 1,
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
    STATE(297), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5487] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_unary_minus_operator,
    ACTIONS(145), 1,
      sym_relocation_type,
    ACTIONS(151), 1,
      aux_sym_decimal_token1,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(43), 1,
      sym__block_comment,
    STATE(265), 1,
      sym__shift_expression,
    STATE(267), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__wrapped_additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(270), 1,
      sym__wrapped_multiplicative_expression,
    STATE(271), 1,
      sym__simple_expression,
    STATE(290), 1,
      sym__wrapped_shift_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(349), 1,
      sym__bitwise_and_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(351), 1,
      sym__equality_expression,
    STATE(352), 1,
      sym__wrapped_equality_expression,
    STATE(353), 1,
      sym__relational_expression,
    STATE(354), 1,
      sym__wrapped_relational_expression,
    STATE(495), 1,
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
    STATE(297), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5612] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_unary_minus_operator,
    ACTIONS(145), 1,
      sym_relocation_type,
    ACTIONS(151), 1,
      aux_sym_decimal_token1,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(44), 1,
      sym__block_comment,
    STATE(267), 1,
      sym__additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(270), 1,
      sym__wrapped_multiplicative_expression,
    STATE(271), 1,
      sym__simple_expression,
    STATE(291), 1,
      sym__wrapped_additive_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(349), 1,
      sym__bitwise_and_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(351), 1,
      sym__equality_expression,
    STATE(352), 1,
      sym__wrapped_equality_expression,
    STATE(353), 1,
      sym__relational_expression,
    STATE(354), 1,
      sym__wrapped_relational_expression,
    STATE(355), 1,
      sym__shift_expression,
    STATE(356), 1,
      sym__wrapped_shift_expression,
    STATE(495), 1,
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
    STATE(297), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5737] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_unary_minus_operator,
    ACTIONS(145), 1,
      sym_relocation_type,
    ACTIONS(151), 1,
      aux_sym_decimal_token1,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(45), 1,
      sym__block_comment,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(271), 1,
      sym__simple_expression,
    STATE(292), 1,
      sym__wrapped_multiplicative_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(349), 1,
      sym__bitwise_and_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(351), 1,
      sym__equality_expression,
    STATE(352), 1,
      sym__wrapped_equality_expression,
    STATE(353), 1,
      sym__relational_expression,
    STATE(354), 1,
      sym__wrapped_relational_expression,
    STATE(355), 1,
      sym__shift_expression,
    STATE(356), 1,
      sym__wrapped_shift_expression,
    STATE(357), 1,
      sym__additive_expression,
    STATE(358), 1,
      sym__wrapped_additive_expression,
    STATE(495), 1,
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
    STATE(297), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5862] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_unary_minus_operator,
    ACTIONS(145), 1,
      sym_relocation_type,
    ACTIONS(151), 1,
      aux_sym_decimal_token1,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(46), 1,
      sym__block_comment,
    STATE(293), 1,
      sym__simple_expression,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(349), 1,
      sym__bitwise_and_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(351), 1,
      sym__equality_expression,
    STATE(352), 1,
      sym__wrapped_equality_expression,
    STATE(353), 1,
      sym__relational_expression,
    STATE(354), 1,
      sym__wrapped_relational_expression,
    STATE(355), 1,
      sym__shift_expression,
    STATE(356), 1,
      sym__wrapped_shift_expression,
    STATE(357), 1,
      sym__additive_expression,
    STATE(358), 1,
      sym__wrapped_additive_expression,
    STATE(359), 1,
      sym__multiplicative_expression,
    STATE(495), 1,
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
    STATE(297), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5987] = 37,
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
    STATE(47), 1,
      sym__block_comment,
    STATE(316), 1,
      sym__simple_expression,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(349), 1,
      sym__bitwise_and_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(351), 1,
      sym__equality_expression,
    STATE(352), 1,
      sym__wrapped_equality_expression,
    STATE(353), 1,
      sym__relational_expression,
    STATE(354), 1,
      sym__wrapped_relational_expression,
    STATE(355), 1,
      sym__shift_expression,
    STATE(356), 1,
      sym__wrapped_shift_expression,
    STATE(357), 1,
      sym__additive_expression,
    STATE(358), 1,
      sym__wrapped_additive_expression,
    STATE(359), 1,
      sym__multiplicative_expression,
    STATE(475), 1,
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
    STATE(331), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6112] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(115), 1,
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
      aux_sym_local_label_reference_token1,
    ACTIONS(133), 1,
      aux_sym_symbol_token1,
    STATE(48), 1,
      sym__block_comment,
    STATE(111), 1,
      sym__shift_expression,
    STATE(113), 1,
      sym__logical_and_expression,
    STATE(114), 1,
      sym__wrapped_logical_and_expression,
    STATE(115), 1,
      sym__bitwise_or_expression,
    STATE(116), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(117), 1,
      sym__bitwise_xor_expression,
    STATE(118), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(119), 1,
      sym__bitwise_and_expression,
    STATE(120), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(121), 1,
      sym__equality_expression,
    STATE(122), 1,
      sym__wrapped_equality_expression,
    STATE(123), 1,
      sym__relational_expression,
    STATE(124), 1,
      sym__wrapped_relational_expression,
    STATE(126), 1,
      sym__wrapped_shift_expression,
    STATE(128), 1,
      sym__wrapped_additive_expression,
    STATE(129), 1,
      sym__multiplicative_expression,
    STATE(130), 1,
      sym__wrapped_multiplicative_expression,
    STATE(131), 1,
      sym__simple_expression,
    STATE(143), 1,
      sym__logical_or_expression,
    STATE(155), 1,
      sym__additive_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(496), 1,
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
    STATE(142), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6237] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(115), 1,
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
      aux_sym_local_label_reference_token1,
    ACTIONS(133), 1,
      aux_sym_symbol_token1,
    STATE(49), 1,
      sym__block_comment,
    STATE(111), 1,
      sym__shift_expression,
    STATE(113), 1,
      sym__logical_and_expression,
    STATE(115), 1,
      sym__bitwise_or_expression,
    STATE(116), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(117), 1,
      sym__bitwise_xor_expression,
    STATE(118), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(119), 1,
      sym__bitwise_and_expression,
    STATE(120), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(121), 1,
      sym__equality_expression,
    STATE(122), 1,
      sym__wrapped_equality_expression,
    STATE(123), 1,
      sym__relational_expression,
    STATE(124), 1,
      sym__wrapped_relational_expression,
    STATE(126), 1,
      sym__wrapped_shift_expression,
    STATE(128), 1,
      sym__wrapped_additive_expression,
    STATE(129), 1,
      sym__multiplicative_expression,
    STATE(130), 1,
      sym__wrapped_multiplicative_expression,
    STATE(131), 1,
      sym__simple_expression,
    STATE(150), 1,
      sym__wrapped_logical_and_expression,
    STATE(155), 1,
      sym__additive_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(496), 1,
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
    STATE(142), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6362] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(115), 1,
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
      aux_sym_local_label_reference_token1,
    ACTIONS(133), 1,
      aux_sym_symbol_token1,
    STATE(50), 1,
      sym__block_comment,
    STATE(111), 1,
      sym__shift_expression,
    STATE(115), 1,
      sym__bitwise_or_expression,
    STATE(117), 1,
      sym__bitwise_xor_expression,
    STATE(118), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(119), 1,
      sym__bitwise_and_expression,
    STATE(120), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(121), 1,
      sym__equality_expression,
    STATE(122), 1,
      sym__wrapped_equality_expression,
    STATE(123), 1,
      sym__relational_expression,
    STATE(124), 1,
      sym__wrapped_relational_expression,
    STATE(126), 1,
      sym__wrapped_shift_expression,
    STATE(128), 1,
      sym__wrapped_additive_expression,
    STATE(129), 1,
      sym__multiplicative_expression,
    STATE(130), 1,
      sym__wrapped_multiplicative_expression,
    STATE(131), 1,
      sym__simple_expression,
    STATE(151), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(155), 1,
      sym__additive_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(496), 1,
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
    STATE(142), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6487] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(115), 1,
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
      aux_sym_local_label_reference_token1,
    ACTIONS(133), 1,
      aux_sym_symbol_token1,
    STATE(51), 1,
      sym__block_comment,
    STATE(111), 1,
      sym__shift_expression,
    STATE(117), 1,
      sym__bitwise_xor_expression,
    STATE(119), 1,
      sym__bitwise_and_expression,
    STATE(120), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(121), 1,
      sym__equality_expression,
    STATE(122), 1,
      sym__wrapped_equality_expression,
    STATE(123), 1,
      sym__relational_expression,
    STATE(124), 1,
      sym__wrapped_relational_expression,
    STATE(126), 1,
      sym__wrapped_shift_expression,
    STATE(128), 1,
      sym__wrapped_additive_expression,
    STATE(129), 1,
      sym__multiplicative_expression,
    STATE(130), 1,
      sym__wrapped_multiplicative_expression,
    STATE(131), 1,
      sym__simple_expression,
    STATE(152), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(155), 1,
      sym__additive_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(496), 1,
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
    STATE(142), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6612] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(115), 1,
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
      aux_sym_local_label_reference_token1,
    ACTIONS(133), 1,
      aux_sym_symbol_token1,
    STATE(52), 1,
      sym__block_comment,
    STATE(111), 1,
      sym__shift_expression,
    STATE(119), 1,
      sym__bitwise_and_expression,
    STATE(121), 1,
      sym__equality_expression,
    STATE(122), 1,
      sym__wrapped_equality_expression,
    STATE(123), 1,
      sym__relational_expression,
    STATE(124), 1,
      sym__wrapped_relational_expression,
    STATE(126), 1,
      sym__wrapped_shift_expression,
    STATE(128), 1,
      sym__wrapped_additive_expression,
    STATE(129), 1,
      sym__multiplicative_expression,
    STATE(130), 1,
      sym__wrapped_multiplicative_expression,
    STATE(131), 1,
      sym__simple_expression,
    STATE(153), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(155), 1,
      sym__additive_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(496), 1,
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
    STATE(142), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6737] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(115), 1,
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
      aux_sym_local_label_reference_token1,
    ACTIONS(133), 1,
      aux_sym_symbol_token1,
    STATE(53), 1,
      sym__block_comment,
    STATE(111), 1,
      sym__shift_expression,
    STATE(121), 1,
      sym__equality_expression,
    STATE(123), 1,
      sym__relational_expression,
    STATE(124), 1,
      sym__wrapped_relational_expression,
    STATE(126), 1,
      sym__wrapped_shift_expression,
    STATE(128), 1,
      sym__wrapped_additive_expression,
    STATE(129), 1,
      sym__multiplicative_expression,
    STATE(130), 1,
      sym__wrapped_multiplicative_expression,
    STATE(131), 1,
      sym__simple_expression,
    STATE(154), 1,
      sym__wrapped_equality_expression,
    STATE(155), 1,
      sym__additive_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(349), 1,
      sym__bitwise_and_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(496), 1,
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
    STATE(142), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6862] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(115), 1,
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
      aux_sym_local_label_reference_token1,
    ACTIONS(133), 1,
      aux_sym_symbol_token1,
    STATE(54), 1,
      sym__block_comment,
    STATE(111), 1,
      sym__shift_expression,
    STATE(123), 1,
      sym__relational_expression,
    STATE(125), 1,
      sym__wrapped_relational_expression,
    STATE(126), 1,
      sym__wrapped_shift_expression,
    STATE(128), 1,
      sym__wrapped_additive_expression,
    STATE(129), 1,
      sym__multiplicative_expression,
    STATE(130), 1,
      sym__wrapped_multiplicative_expression,
    STATE(131), 1,
      sym__simple_expression,
    STATE(155), 1,
      sym__additive_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(349), 1,
      sym__bitwise_and_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(351), 1,
      sym__equality_expression,
    STATE(352), 1,
      sym__wrapped_equality_expression,
    STATE(496), 1,
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
    STATE(142), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6987] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(115), 1,
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
      aux_sym_local_label_reference_token1,
    ACTIONS(133), 1,
      aux_sym_symbol_token1,
    STATE(55), 1,
      sym__block_comment,
    STATE(111), 1,
      sym__shift_expression,
    STATE(127), 1,
      sym__wrapped_shift_expression,
    STATE(128), 1,
      sym__wrapped_additive_expression,
    STATE(129), 1,
      sym__multiplicative_expression,
    STATE(130), 1,
      sym__wrapped_multiplicative_expression,
    STATE(131), 1,
      sym__simple_expression,
    STATE(155), 1,
      sym__additive_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(349), 1,
      sym__bitwise_and_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(351), 1,
      sym__equality_expression,
    STATE(352), 1,
      sym__wrapped_equality_expression,
    STATE(353), 1,
      sym__relational_expression,
    STATE(354), 1,
      sym__wrapped_relational_expression,
    STATE(496), 1,
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
    STATE(142), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7112] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(115), 1,
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
      aux_sym_local_label_reference_token1,
    ACTIONS(133), 1,
      aux_sym_symbol_token1,
    STATE(56), 1,
      sym__block_comment,
    STATE(129), 1,
      sym__multiplicative_expression,
    STATE(130), 1,
      sym__wrapped_multiplicative_expression,
    STATE(131), 1,
      sym__simple_expression,
    STATE(140), 1,
      sym__wrapped_additive_expression,
    STATE(155), 1,
      sym__additive_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(349), 1,
      sym__bitwise_and_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(351), 1,
      sym__equality_expression,
    STATE(352), 1,
      sym__wrapped_equality_expression,
    STATE(353), 1,
      sym__relational_expression,
    STATE(354), 1,
      sym__wrapped_relational_expression,
    STATE(355), 1,
      sym__shift_expression,
    STATE(356), 1,
      sym__wrapped_shift_expression,
    STATE(496), 1,
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
    STATE(142), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7237] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(115), 1,
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
      aux_sym_local_label_reference_token1,
    ACTIONS(133), 1,
      aux_sym_symbol_token1,
    STATE(57), 1,
      sym__block_comment,
    STATE(129), 1,
      sym__multiplicative_expression,
    STATE(131), 1,
      sym__simple_expression,
    STATE(134), 1,
      sym__wrapped_multiplicative_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(349), 1,
      sym__bitwise_and_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(351), 1,
      sym__equality_expression,
    STATE(352), 1,
      sym__wrapped_equality_expression,
    STATE(353), 1,
      sym__relational_expression,
    STATE(354), 1,
      sym__wrapped_relational_expression,
    STATE(355), 1,
      sym__shift_expression,
    STATE(356), 1,
      sym__wrapped_shift_expression,
    STATE(357), 1,
      sym__additive_expression,
    STATE(358), 1,
      sym__wrapped_additive_expression,
    STATE(496), 1,
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
    STATE(142), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7362] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(115), 1,
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
      aux_sym_local_label_reference_token1,
    ACTIONS(133), 1,
      aux_sym_symbol_token1,
    STATE(58), 1,
      sym__block_comment,
    STATE(135), 1,
      sym__simple_expression,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(349), 1,
      sym__bitwise_and_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(351), 1,
      sym__equality_expression,
    STATE(352), 1,
      sym__wrapped_equality_expression,
    STATE(353), 1,
      sym__relational_expression,
    STATE(354), 1,
      sym__wrapped_relational_expression,
    STATE(355), 1,
      sym__shift_expression,
    STATE(356), 1,
      sym__wrapped_shift_expression,
    STATE(357), 1,
      sym__additive_expression,
    STATE(358), 1,
      sym__wrapped_additive_expression,
    STATE(359), 1,
      sym__multiplicative_expression,
    STATE(496), 1,
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
    STATE(142), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7487] = 37,
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
    STATE(59), 1,
      sym__block_comment,
    STATE(316), 1,
      sym__simple_expression,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(349), 1,
      sym__bitwise_and_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(351), 1,
      sym__equality_expression,
    STATE(352), 1,
      sym__wrapped_equality_expression,
    STATE(353), 1,
      sym__relational_expression,
    STATE(354), 1,
      sym__wrapped_relational_expression,
    STATE(355), 1,
      sym__shift_expression,
    STATE(356), 1,
      sym__wrapped_shift_expression,
    STATE(357), 1,
      sym__additive_expression,
    STATE(358), 1,
      sym__wrapped_additive_expression,
    STATE(359), 1,
      sym__multiplicative_expression,
    STATE(442), 1,
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
    STATE(331), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7612] = 37,
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
    STATE(60), 1,
      sym__block_comment,
    STATE(316), 1,
      sym__simple_expression,
    STATE(320), 1,
      sym__wrapped_logical_and_expression,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(349), 1,
      sym__bitwise_and_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(351), 1,
      sym__equality_expression,
    STATE(352), 1,
      sym__wrapped_equality_expression,
    STATE(353), 1,
      sym__relational_expression,
    STATE(354), 1,
      sym__wrapped_relational_expression,
    STATE(355), 1,
      sym__shift_expression,
    STATE(356), 1,
      sym__wrapped_shift_expression,
    STATE(357), 1,
      sym__additive_expression,
    STATE(358), 1,
      sym__wrapped_additive_expression,
    STATE(359), 1,
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
    STATE(331), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7737] = 37,
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
    STATE(61), 1,
      sym__block_comment,
    STATE(316), 1,
      sym__simple_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(349), 1,
      sym__bitwise_and_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(351), 1,
      sym__equality_expression,
    STATE(352), 1,
      sym__wrapped_equality_expression,
    STATE(353), 1,
      sym__relational_expression,
    STATE(354), 1,
      sym__wrapped_relational_expression,
    STATE(355), 1,
      sym__shift_expression,
    STATE(356), 1,
      sym__wrapped_shift_expression,
    STATE(357), 1,
      sym__additive_expression,
    STATE(358), 1,
      sym__wrapped_additive_expression,
    STATE(359), 1,
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
    STATE(331), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7862] = 37,
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
    STATE(62), 1,
      sym__block_comment,
    STATE(316), 1,
      sym__simple_expression,
    STATE(322), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(349), 1,
      sym__bitwise_and_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(351), 1,
      sym__equality_expression,
    STATE(352), 1,
      sym__wrapped_equality_expression,
    STATE(353), 1,
      sym__relational_expression,
    STATE(354), 1,
      sym__wrapped_relational_expression,
    STATE(355), 1,
      sym__shift_expression,
    STATE(356), 1,
      sym__wrapped_shift_expression,
    STATE(357), 1,
      sym__additive_expression,
    STATE(358), 1,
      sym__wrapped_additive_expression,
    STATE(359), 1,
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
    STATE(331), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7987] = 37,
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
    STATE(63), 1,
      sym__block_comment,
    STATE(316), 1,
      sym__simple_expression,
    STATE(323), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(349), 1,
      sym__bitwise_and_expression,
    STATE(351), 1,
      sym__equality_expression,
    STATE(352), 1,
      sym__wrapped_equality_expression,
    STATE(353), 1,
      sym__relational_expression,
    STATE(354), 1,
      sym__wrapped_relational_expression,
    STATE(355), 1,
      sym__shift_expression,
    STATE(356), 1,
      sym__wrapped_shift_expression,
    STATE(357), 1,
      sym__additive_expression,
    STATE(358), 1,
      sym__wrapped_additive_expression,
    STATE(359), 1,
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
    STATE(331), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8112] = 37,
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
    STATE(64), 1,
      sym__block_comment,
    STATE(316), 1,
      sym__simple_expression,
    STATE(324), 1,
      sym__wrapped_equality_expression,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(349), 1,
      sym__bitwise_and_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(351), 1,
      sym__equality_expression,
    STATE(353), 1,
      sym__relational_expression,
    STATE(354), 1,
      sym__wrapped_relational_expression,
    STATE(355), 1,
      sym__shift_expression,
    STATE(356), 1,
      sym__wrapped_shift_expression,
    STATE(357), 1,
      sym__additive_expression,
    STATE(358), 1,
      sym__wrapped_additive_expression,
    STATE(359), 1,
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
    STATE(331), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8237] = 37,
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
    STATE(65), 1,
      sym__block_comment,
    STATE(316), 1,
      sym__simple_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(349), 1,
      sym__bitwise_and_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(351), 1,
      sym__equality_expression,
    STATE(352), 1,
      sym__wrapped_equality_expression,
    STATE(353), 1,
      sym__relational_expression,
    STATE(355), 1,
      sym__shift_expression,
    STATE(356), 1,
      sym__wrapped_shift_expression,
    STATE(357), 1,
      sym__additive_expression,
    STATE(358), 1,
      sym__wrapped_additive_expression,
    STATE(359), 1,
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
    STATE(331), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8362] = 37,
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
    STATE(66), 1,
      sym__block_comment,
    STATE(316), 1,
      sym__simple_expression,
    STATE(326), 1,
      sym__wrapped_shift_expression,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(349), 1,
      sym__bitwise_and_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(351), 1,
      sym__equality_expression,
    STATE(352), 1,
      sym__wrapped_equality_expression,
    STATE(353), 1,
      sym__relational_expression,
    STATE(354), 1,
      sym__wrapped_relational_expression,
    STATE(355), 1,
      sym__shift_expression,
    STATE(357), 1,
      sym__additive_expression,
    STATE(358), 1,
      sym__wrapped_additive_expression,
    STATE(359), 1,
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
    STATE(331), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8487] = 37,
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
    STATE(67), 1,
      sym__block_comment,
    STATE(316), 1,
      sym__simple_expression,
    STATE(327), 1,
      sym__wrapped_additive_expression,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(349), 1,
      sym__bitwise_and_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(351), 1,
      sym__equality_expression,
    STATE(352), 1,
      sym__wrapped_equality_expression,
    STATE(353), 1,
      sym__relational_expression,
    STATE(354), 1,
      sym__wrapped_relational_expression,
    STATE(355), 1,
      sym__shift_expression,
    STATE(356), 1,
      sym__wrapped_shift_expression,
    STATE(357), 1,
      sym__additive_expression,
    STATE(359), 1,
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
    STATE(331), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8612] = 37,
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
    STATE(316), 1,
      sym__simple_expression,
    STATE(328), 1,
      sym__wrapped_multiplicative_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(349), 1,
      sym__bitwise_and_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(351), 1,
      sym__equality_expression,
    STATE(352), 1,
      sym__wrapped_equality_expression,
    STATE(353), 1,
      sym__relational_expression,
    STATE(354), 1,
      sym__wrapped_relational_expression,
    STATE(355), 1,
      sym__shift_expression,
    STATE(356), 1,
      sym__wrapped_shift_expression,
    STATE(357), 1,
      sym__additive_expression,
    STATE(358), 1,
      sym__wrapped_additive_expression,
    STATE(359), 1,
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
    STATE(331), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8737] = 37,
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
    STATE(329), 1,
      sym__simple_expression,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(349), 1,
      sym__bitwise_and_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(351), 1,
      sym__equality_expression,
    STATE(352), 1,
      sym__wrapped_equality_expression,
    STATE(353), 1,
      sym__relational_expression,
    STATE(354), 1,
      sym__wrapped_relational_expression,
    STATE(355), 1,
      sym__shift_expression,
    STATE(356), 1,
      sym__wrapped_shift_expression,
    STATE(357), 1,
      sym__additive_expression,
    STATE(358), 1,
      sym__wrapped_additive_expression,
    STATE(359), 1,
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
    STATE(331), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8862] = 37,
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
    STATE(70), 1,
      sym__block_comment,
    STATE(158), 1,
      sym__wrapped_logical_and_expression,
    STATE(159), 1,
      sym__bitwise_or_expression,
    STATE(175), 1,
      sym__logical_or_expression,
    STATE(176), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(178), 1,
      sym__bitwise_xor_expression,
    STATE(179), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(180), 1,
      sym__bitwise_and_expression,
    STATE(181), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(182), 1,
      sym__logical_and_expression,
    STATE(183), 1,
      sym__equality_expression,
    STATE(184), 1,
      sym__wrapped_equality_expression,
    STATE(185), 1,
      sym__relational_expression,
    STATE(186), 1,
      sym__wrapped_relational_expression,
    STATE(187), 1,
      sym__shift_expression,
    STATE(188), 1,
      sym__wrapped_shift_expression,
    STATE(189), 1,
      sym__additive_expression,
    STATE(190), 1,
      sym__wrapped_additive_expression,
    STATE(191), 1,
      sym__multiplicative_expression,
    STATE(192), 1,
      sym__wrapped_multiplicative_expression,
    STATE(193), 1,
      sym__simple_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(362), 1,
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
    STATE(196), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8987] = 37,
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
    STATE(71), 1,
      sym__block_comment,
    STATE(159), 1,
      sym__bitwise_or_expression,
    STATE(163), 1,
      sym__wrapped_logical_and_expression,
    STATE(176), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(178), 1,
      sym__bitwise_xor_expression,
    STATE(179), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(180), 1,
      sym__bitwise_and_expression,
    STATE(181), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(182), 1,
      sym__logical_and_expression,
    STATE(183), 1,
      sym__equality_expression,
    STATE(184), 1,
      sym__wrapped_equality_expression,
    STATE(185), 1,
      sym__relational_expression,
    STATE(186), 1,
      sym__wrapped_relational_expression,
    STATE(187), 1,
      sym__shift_expression,
    STATE(188), 1,
      sym__wrapped_shift_expression,
    STATE(189), 1,
      sym__additive_expression,
    STATE(190), 1,
      sym__wrapped_additive_expression,
    STATE(191), 1,
      sym__multiplicative_expression,
    STATE(192), 1,
      sym__wrapped_multiplicative_expression,
    STATE(193), 1,
      sym__simple_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
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
    STATE(196), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9112] = 37,
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
    STATE(72), 1,
      sym__block_comment,
    STATE(159), 1,
      sym__bitwise_or_expression,
    STATE(164), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(178), 1,
      sym__bitwise_xor_expression,
    STATE(179), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(180), 1,
      sym__bitwise_and_expression,
    STATE(181), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(183), 1,
      sym__equality_expression,
    STATE(184), 1,
      sym__wrapped_equality_expression,
    STATE(185), 1,
      sym__relational_expression,
    STATE(186), 1,
      sym__wrapped_relational_expression,
    STATE(187), 1,
      sym__shift_expression,
    STATE(188), 1,
      sym__wrapped_shift_expression,
    STATE(189), 1,
      sym__additive_expression,
    STATE(190), 1,
      sym__wrapped_additive_expression,
    STATE(191), 1,
      sym__multiplicative_expression,
    STATE(192), 1,
      sym__wrapped_multiplicative_expression,
    STATE(193), 1,
      sym__simple_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
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
    STATE(196), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9237] = 37,
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
    STATE(73), 1,
      sym__block_comment,
    STATE(165), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(178), 1,
      sym__bitwise_xor_expression,
    STATE(180), 1,
      sym__bitwise_and_expression,
    STATE(181), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(183), 1,
      sym__equality_expression,
    STATE(184), 1,
      sym__wrapped_equality_expression,
    STATE(185), 1,
      sym__relational_expression,
    STATE(186), 1,
      sym__wrapped_relational_expression,
    STATE(187), 1,
      sym__shift_expression,
    STATE(188), 1,
      sym__wrapped_shift_expression,
    STATE(189), 1,
      sym__additive_expression,
    STATE(190), 1,
      sym__wrapped_additive_expression,
    STATE(191), 1,
      sym__multiplicative_expression,
    STATE(192), 1,
      sym__wrapped_multiplicative_expression,
    STATE(193), 1,
      sym__simple_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
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
    STATE(196), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9362] = 37,
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
    STATE(74), 1,
      sym__block_comment,
    STATE(166), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(180), 1,
      sym__bitwise_and_expression,
    STATE(183), 1,
      sym__equality_expression,
    STATE(184), 1,
      sym__wrapped_equality_expression,
    STATE(185), 1,
      sym__relational_expression,
    STATE(186), 1,
      sym__wrapped_relational_expression,
    STATE(187), 1,
      sym__shift_expression,
    STATE(188), 1,
      sym__wrapped_shift_expression,
    STATE(189), 1,
      sym__additive_expression,
    STATE(190), 1,
      sym__wrapped_additive_expression,
    STATE(191), 1,
      sym__multiplicative_expression,
    STATE(192), 1,
      sym__wrapped_multiplicative_expression,
    STATE(193), 1,
      sym__simple_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
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
    STATE(196), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9487] = 37,
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
    STATE(75), 1,
      sym__block_comment,
    STATE(167), 1,
      sym__wrapped_equality_expression,
    STATE(183), 1,
      sym__equality_expression,
    STATE(185), 1,
      sym__relational_expression,
    STATE(186), 1,
      sym__wrapped_relational_expression,
    STATE(187), 1,
      sym__shift_expression,
    STATE(188), 1,
      sym__wrapped_shift_expression,
    STATE(189), 1,
      sym__additive_expression,
    STATE(190), 1,
      sym__wrapped_additive_expression,
    STATE(191), 1,
      sym__multiplicative_expression,
    STATE(192), 1,
      sym__wrapped_multiplicative_expression,
    STATE(193), 1,
      sym__simple_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(349), 1,
      sym__bitwise_and_expression,
    STATE(350), 1,
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
    STATE(196), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9612] = 37,
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
    STATE(76), 1,
      sym__block_comment,
    STATE(168), 1,
      sym__wrapped_relational_expression,
    STATE(185), 1,
      sym__relational_expression,
    STATE(187), 1,
      sym__shift_expression,
    STATE(188), 1,
      sym__wrapped_shift_expression,
    STATE(189), 1,
      sym__additive_expression,
    STATE(190), 1,
      sym__wrapped_additive_expression,
    STATE(191), 1,
      sym__multiplicative_expression,
    STATE(192), 1,
      sym__wrapped_multiplicative_expression,
    STATE(193), 1,
      sym__simple_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(349), 1,
      sym__bitwise_and_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(351), 1,
      sym__equality_expression,
    STATE(352), 1,
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
    STATE(196), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9737] = 37,
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
    STATE(77), 1,
      sym__block_comment,
    STATE(169), 1,
      sym__wrapped_shift_expression,
    STATE(187), 1,
      sym__shift_expression,
    STATE(189), 1,
      sym__additive_expression,
    STATE(190), 1,
      sym__wrapped_additive_expression,
    STATE(191), 1,
      sym__multiplicative_expression,
    STATE(192), 1,
      sym__wrapped_multiplicative_expression,
    STATE(193), 1,
      sym__simple_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(349), 1,
      sym__bitwise_and_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(351), 1,
      sym__equality_expression,
    STATE(352), 1,
      sym__wrapped_equality_expression,
    STATE(353), 1,
      sym__relational_expression,
    STATE(354), 1,
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
    STATE(196), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9862] = 37,
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
    STATE(78), 1,
      sym__block_comment,
    STATE(170), 1,
      sym__wrapped_additive_expression,
    STATE(189), 1,
      sym__additive_expression,
    STATE(191), 1,
      sym__multiplicative_expression,
    STATE(192), 1,
      sym__wrapped_multiplicative_expression,
    STATE(193), 1,
      sym__simple_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(349), 1,
      sym__bitwise_and_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(351), 1,
      sym__equality_expression,
    STATE(352), 1,
      sym__wrapped_equality_expression,
    STATE(353), 1,
      sym__relational_expression,
    STATE(354), 1,
      sym__wrapped_relational_expression,
    STATE(355), 1,
      sym__shift_expression,
    STATE(356), 1,
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
    STATE(196), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9987] = 37,
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
    STATE(171), 1,
      sym__wrapped_multiplicative_expression,
    STATE(191), 1,
      sym__multiplicative_expression,
    STATE(193), 1,
      sym__simple_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(349), 1,
      sym__bitwise_and_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(351), 1,
      sym__equality_expression,
    STATE(352), 1,
      sym__wrapped_equality_expression,
    STATE(353), 1,
      sym__relational_expression,
    STATE(354), 1,
      sym__wrapped_relational_expression,
    STATE(355), 1,
      sym__shift_expression,
    STATE(356), 1,
      sym__wrapped_shift_expression,
    STATE(357), 1,
      sym__additive_expression,
    STATE(358), 1,
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
    STATE(196), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10112] = 37,
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
    STATE(172), 1,
      sym__simple_expression,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(349), 1,
      sym__bitwise_and_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(351), 1,
      sym__equality_expression,
    STATE(352), 1,
      sym__wrapped_equality_expression,
    STATE(353), 1,
      sym__relational_expression,
    STATE(354), 1,
      sym__wrapped_relational_expression,
    STATE(355), 1,
      sym__shift_expression,
    STATE(356), 1,
      sym__wrapped_shift_expression,
    STATE(357), 1,
      sym__additive_expression,
    STATE(358), 1,
      sym__wrapped_additive_expression,
    STATE(359), 1,
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
    STATE(196), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10237] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_unary_minus_operator,
    ACTIONS(145), 1,
      sym_relocation_type,
    ACTIONS(151), 1,
      aux_sym_decimal_token1,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(81), 1,
      sym__block_comment,
    STATE(256), 1,
      sym__bitwise_xor_expression,
    STATE(257), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(258), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(259), 1,
      sym__bitwise_and_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(261), 1,
      sym__equality_expression,
    STATE(262), 1,
      sym__wrapped_equality_expression,
    STATE(263), 1,
      sym__relational_expression,
    STATE(264), 1,
      sym__wrapped_relational_expression,
    STATE(265), 1,
      sym__shift_expression,
    STATE(266), 1,
      sym__wrapped_shift_expression,
    STATE(267), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__wrapped_additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(270), 1,
      sym__wrapped_multiplicative_expression,
    STATE(271), 1,
      sym__simple_expression,
    STATE(272), 1,
      sym__wrapped_assignment_expression,
    STATE(277), 1,
      sym__assignment_expression,
    STATE(278), 1,
      sym__logical_or_expression,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(295), 1,
      sym__logical_and_expression,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_or_expression,
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
    STATE(297), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10362] = 37,
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
    STATE(82), 1,
      sym__block_comment,
    STATE(202), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(208), 1,
      sym__logical_or_expression,
    STATE(210), 1,
      sym__logical_and_expression,
    STATE(211), 1,
      sym__wrapped_logical_and_expression,
    STATE(212), 1,
      sym__bitwise_or_expression,
    STATE(213), 1,
      sym__bitwise_xor_expression,
    STATE(214), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(215), 1,
      sym__bitwise_and_expression,
    STATE(216), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(217), 1,
      sym__equality_expression,
    STATE(218), 1,
      sym__wrapped_equality_expression,
    STATE(219), 1,
      sym__relational_expression,
    STATE(220), 1,
      sym__wrapped_relational_expression,
    STATE(221), 1,
      sym__shift_expression,
    STATE(222), 1,
      sym__wrapped_shift_expression,
    STATE(223), 1,
      sym__additive_expression,
    STATE(224), 1,
      sym__wrapped_additive_expression,
    STATE(226), 1,
      sym__wrapped_multiplicative_expression,
    STATE(227), 1,
      sym__simple_expression,
    STATE(245), 1,
      sym__wrapped_logical_or_expression,
    STATE(248), 1,
      sym__multiplicative_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(494), 1,
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
    STATE(203), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10487] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      sym_unary_minus_operator,
    ACTIONS(145), 1,
      sym_relocation_type,
    ACTIONS(151), 1,
      aux_sym_decimal_token1,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(159), 1,
      aux_sym_symbol_token1,
    STATE(83), 1,
      sym__block_comment,
    STATE(256), 1,
      sym__bitwise_xor_expression,
    STATE(257), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(258), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(259), 1,
      sym__bitwise_and_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(261), 1,
      sym__equality_expression,
    STATE(262), 1,
      sym__wrapped_equality_expression,
    STATE(263), 1,
      sym__relational_expression,
    STATE(264), 1,
      sym__wrapped_relational_expression,
    STATE(265), 1,
      sym__shift_expression,
    STATE(266), 1,
      sym__wrapped_shift_expression,
    STATE(267), 1,
      sym__additive_expression,
    STATE(268), 1,
      sym__wrapped_additive_expression,
    STATE(269), 1,
      sym__multiplicative_expression,
    STATE(270), 1,
      sym__wrapped_multiplicative_expression,
    STATE(271), 1,
      sym__simple_expression,
    STATE(278), 1,
      sym__logical_or_expression,
    STATE(282), 1,
      sym__bitwise_or_expression,
    STATE(295), 1,
      sym__logical_and_expression,
    STATE(298), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__wrapped_logical_and_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(495), 1,
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
    STATE(297), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10612] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(115), 1,
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
      aux_sym_local_label_reference_token1,
    ACTIONS(133), 1,
      aux_sym_symbol_token1,
    STATE(84), 1,
      sym__block_comment,
    STATE(111), 1,
      sym__shift_expression,
    STATE(113), 1,
      sym__logical_and_expression,
    STATE(114), 1,
      sym__wrapped_logical_and_expression,
    STATE(115), 1,
      sym__bitwise_or_expression,
    STATE(116), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(117), 1,
      sym__bitwise_xor_expression,
    STATE(118), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(119), 1,
      sym__bitwise_and_expression,
    STATE(120), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(121), 1,
      sym__equality_expression,
    STATE(122), 1,
      sym__wrapped_equality_expression,
    STATE(123), 1,
      sym__relational_expression,
    STATE(124), 1,
      sym__wrapped_relational_expression,
    STATE(126), 1,
      sym__wrapped_shift_expression,
    STATE(128), 1,
      sym__wrapped_additive_expression,
    STATE(129), 1,
      sym__multiplicative_expression,
    STATE(130), 1,
      sym__wrapped_multiplicative_expression,
    STATE(131), 1,
      sym__simple_expression,
    STATE(132), 1,
      sym__wrapped_logical_or_expression,
    STATE(143), 1,
      sym__logical_or_expression,
    STATE(155), 1,
      sym__additive_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(496), 1,
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
    STATE(142), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10737] = 37,
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
    STATE(85), 1,
      sym__block_comment,
    STATE(316), 1,
      sym__simple_expression,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(349), 1,
      sym__bitwise_and_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(351), 1,
      sym__equality_expression,
    STATE(352), 1,
      sym__wrapped_equality_expression,
    STATE(353), 1,
      sym__relational_expression,
    STATE(354), 1,
      sym__wrapped_relational_expression,
    STATE(355), 1,
      sym__shift_expression,
    STATE(356), 1,
      sym__wrapped_shift_expression,
    STATE(357), 1,
      sym__additive_expression,
    STATE(358), 1,
      sym__wrapped_additive_expression,
    STATE(359), 1,
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
    STATE(331), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10862] = 37,
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
    STATE(158), 1,
      sym__wrapped_logical_and_expression,
    STATE(159), 1,
      sym__bitwise_or_expression,
    STATE(175), 1,
      sym__logical_or_expression,
    STATE(176), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(178), 1,
      sym__bitwise_xor_expression,
    STATE(179), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(180), 1,
      sym__bitwise_and_expression,
    STATE(181), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(182), 1,
      sym__logical_and_expression,
    STATE(183), 1,
      sym__equality_expression,
    STATE(184), 1,
      sym__wrapped_equality_expression,
    STATE(185), 1,
      sym__relational_expression,
    STATE(186), 1,
      sym__wrapped_relational_expression,
    STATE(187), 1,
      sym__shift_expression,
    STATE(188), 1,
      sym__wrapped_shift_expression,
    STATE(189), 1,
      sym__additive_expression,
    STATE(190), 1,
      sym__wrapped_additive_expression,
    STATE(191), 1,
      sym__multiplicative_expression,
    STATE(192), 1,
      sym__wrapped_multiplicative_expression,
    STATE(193), 1,
      sym__simple_expression,
    STATE(201), 1,
      sym__wrapped_logical_or_expression,
    STATE(335), 1,
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
    STATE(196), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10987] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(115), 1,
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
      aux_sym_local_label_reference_token1,
    ACTIONS(133), 1,
      aux_sym_symbol_token1,
    STATE(87), 1,
      sym__block_comment,
    STATE(111), 1,
      sym__shift_expression,
    STATE(112), 1,
      sym__wrapped_logical_or_expression,
    STATE(113), 1,
      sym__logical_and_expression,
    STATE(114), 1,
      sym__wrapped_logical_and_expression,
    STATE(115), 1,
      sym__bitwise_or_expression,
    STATE(116), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(117), 1,
      sym__bitwise_xor_expression,
    STATE(118), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(119), 1,
      sym__bitwise_and_expression,
    STATE(120), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(121), 1,
      sym__equality_expression,
    STATE(122), 1,
      sym__wrapped_equality_expression,
    STATE(123), 1,
      sym__relational_expression,
    STATE(124), 1,
      sym__wrapped_relational_expression,
    STATE(126), 1,
      sym__wrapped_shift_expression,
    STATE(128), 1,
      sym__wrapped_additive_expression,
    STATE(129), 1,
      sym__multiplicative_expression,
    STATE(130), 1,
      sym__wrapped_multiplicative_expression,
    STATE(131), 1,
      sym__simple_expression,
    STATE(133), 1,
      sym__wrapped_assignment_expression,
    STATE(141), 1,
      sym__assignment_expression,
    STATE(143), 1,
      sym__logical_or_expression,
    STATE(155), 1,
      sym__additive_expression,
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
    STATE(142), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11112] = 37,
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
    STATE(88), 1,
      sym__block_comment,
    STATE(316), 1,
      sym__simple_expression,
    STATE(317), 1,
      sym__wrapped_assignment_expression,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(349), 1,
      sym__bitwise_and_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(351), 1,
      sym__equality_expression,
    STATE(352), 1,
      sym__wrapped_equality_expression,
    STATE(353), 1,
      sym__relational_expression,
    STATE(354), 1,
      sym__wrapped_relational_expression,
    STATE(355), 1,
      sym__shift_expression,
    STATE(356), 1,
      sym__wrapped_shift_expression,
    STATE(357), 1,
      sym__additive_expression,
    STATE(358), 1,
      sym__wrapped_additive_expression,
    STATE(359), 1,
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
    STATE(331), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11237] = 37,
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
    STATE(89), 1,
      sym__block_comment,
    STATE(316), 1,
      sym__simple_expression,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(349), 1,
      sym__bitwise_and_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(351), 1,
      sym__equality_expression,
    STATE(352), 1,
      sym__wrapped_equality_expression,
    STATE(353), 1,
      sym__relational_expression,
    STATE(354), 1,
      sym__wrapped_relational_expression,
    STATE(355), 1,
      sym__shift_expression,
    STATE(356), 1,
      sym__wrapped_shift_expression,
    STATE(357), 1,
      sym__additive_expression,
    STATE(358), 1,
      sym__wrapped_additive_expression,
    STATE(359), 1,
      sym__multiplicative_expression,
    STATE(461), 1,
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
    STATE(331), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11362] = 37,
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
    STATE(90), 1,
      sym__block_comment,
    STATE(202), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(208), 1,
      sym__logical_or_expression,
    STATE(210), 1,
      sym__logical_and_expression,
    STATE(211), 1,
      sym__wrapped_logical_and_expression,
    STATE(212), 1,
      sym__bitwise_or_expression,
    STATE(213), 1,
      sym__bitwise_xor_expression,
    STATE(214), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(215), 1,
      sym__bitwise_and_expression,
    STATE(216), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(217), 1,
      sym__equality_expression,
    STATE(218), 1,
      sym__wrapped_equality_expression,
    STATE(219), 1,
      sym__relational_expression,
    STATE(220), 1,
      sym__wrapped_relational_expression,
    STATE(221), 1,
      sym__shift_expression,
    STATE(222), 1,
      sym__wrapped_shift_expression,
    STATE(223), 1,
      sym__additive_expression,
    STATE(224), 1,
      sym__wrapped_additive_expression,
    STATE(226), 1,
      sym__wrapped_multiplicative_expression,
    STATE(227), 1,
      sym__simple_expression,
    STATE(248), 1,
      sym__multiplicative_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(372), 1,
      sym__wrapped_logical_or_expression,
    STATE(494), 1,
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
    STATE(203), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11487] = 37,
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
    STATE(91), 1,
      sym__block_comment,
    STATE(316), 1,
      sym__simple_expression,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(349), 1,
      sym__bitwise_and_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(351), 1,
      sym__equality_expression,
    STATE(352), 1,
      sym__wrapped_equality_expression,
    STATE(353), 1,
      sym__relational_expression,
    STATE(354), 1,
      sym__wrapped_relational_expression,
    STATE(355), 1,
      sym__shift_expression,
    STATE(356), 1,
      sym__wrapped_shift_expression,
    STATE(357), 1,
      sym__additive_expression,
    STATE(358), 1,
      sym__wrapped_additive_expression,
    STATE(359), 1,
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
    STATE(331), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11612] = 37,
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
    STATE(92), 1,
      sym__block_comment,
    STATE(202), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(210), 1,
      sym__logical_and_expression,
    STATE(212), 1,
      sym__bitwise_or_expression,
    STATE(213), 1,
      sym__bitwise_xor_expression,
    STATE(214), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(215), 1,
      sym__bitwise_and_expression,
    STATE(216), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(217), 1,
      sym__equality_expression,
    STATE(218), 1,
      sym__wrapped_equality_expression,
    STATE(219), 1,
      sym__relational_expression,
    STATE(220), 1,
      sym__wrapped_relational_expression,
    STATE(221), 1,
      sym__shift_expression,
    STATE(222), 1,
      sym__wrapped_shift_expression,
    STATE(223), 1,
      sym__additive_expression,
    STATE(224), 1,
      sym__wrapped_additive_expression,
    STATE(226), 1,
      sym__wrapped_multiplicative_expression,
    STATE(227), 1,
      sym__simple_expression,
    STATE(234), 1,
      sym__wrapped_logical_and_expression,
    STATE(248), 1,
      sym__multiplicative_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(494), 1,
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
    STATE(203), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11737] = 37,
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
    STATE(93), 1,
      sym__block_comment,
    STATE(212), 1,
      sym__bitwise_or_expression,
    STATE(213), 1,
      sym__bitwise_xor_expression,
    STATE(214), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(215), 1,
      sym__bitwise_and_expression,
    STATE(216), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(217), 1,
      sym__equality_expression,
    STATE(218), 1,
      sym__wrapped_equality_expression,
    STATE(219), 1,
      sym__relational_expression,
    STATE(220), 1,
      sym__wrapped_relational_expression,
    STATE(221), 1,
      sym__shift_expression,
    STATE(222), 1,
      sym__wrapped_shift_expression,
    STATE(223), 1,
      sym__additive_expression,
    STATE(224), 1,
      sym__wrapped_additive_expression,
    STATE(226), 1,
      sym__wrapped_multiplicative_expression,
    STATE(227), 1,
      sym__simple_expression,
    STATE(235), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(248), 1,
      sym__multiplicative_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(494), 1,
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
    STATE(203), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11862] = 37,
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
    STATE(94), 1,
      sym__block_comment,
    STATE(316), 1,
      sym__simple_expression,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(349), 1,
      sym__bitwise_and_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(351), 1,
      sym__equality_expression,
    STATE(352), 1,
      sym__wrapped_equality_expression,
    STATE(353), 1,
      sym__relational_expression,
    STATE(354), 1,
      sym__wrapped_relational_expression,
    STATE(355), 1,
      sym__shift_expression,
    STATE(356), 1,
      sym__wrapped_shift_expression,
    STATE(357), 1,
      sym__additive_expression,
    STATE(358), 1,
      sym__wrapped_additive_expression,
    STATE(359), 1,
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
    STATE(331), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11987] = 37,
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
    STATE(95), 1,
      sym__block_comment,
    STATE(213), 1,
      sym__bitwise_xor_expression,
    STATE(215), 1,
      sym__bitwise_and_expression,
    STATE(216), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(217), 1,
      sym__equality_expression,
    STATE(218), 1,
      sym__wrapped_equality_expression,
    STATE(219), 1,
      sym__relational_expression,
    STATE(220), 1,
      sym__wrapped_relational_expression,
    STATE(221), 1,
      sym__shift_expression,
    STATE(222), 1,
      sym__wrapped_shift_expression,
    STATE(223), 1,
      sym__additive_expression,
    STATE(224), 1,
      sym__wrapped_additive_expression,
    STATE(226), 1,
      sym__wrapped_multiplicative_expression,
    STATE(227), 1,
      sym__simple_expression,
    STATE(236), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(248), 1,
      sym__multiplicative_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(494), 1,
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
    STATE(203), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12112] = 37,
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
    STATE(96), 1,
      sym__block_comment,
    STATE(215), 1,
      sym__bitwise_and_expression,
    STATE(217), 1,
      sym__equality_expression,
    STATE(218), 1,
      sym__wrapped_equality_expression,
    STATE(219), 1,
      sym__relational_expression,
    STATE(220), 1,
      sym__wrapped_relational_expression,
    STATE(221), 1,
      sym__shift_expression,
    STATE(222), 1,
      sym__wrapped_shift_expression,
    STATE(223), 1,
      sym__additive_expression,
    STATE(224), 1,
      sym__wrapped_additive_expression,
    STATE(226), 1,
      sym__wrapped_multiplicative_expression,
    STATE(227), 1,
      sym__simple_expression,
    STATE(237), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(248), 1,
      sym__multiplicative_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(494), 1,
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
    STATE(203), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12237] = 37,
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
    STATE(97), 1,
      sym__block_comment,
    STATE(316), 1,
      sym__simple_expression,
    STATE(333), 1,
      sym__wrapped_multiplicative_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(349), 1,
      sym__bitwise_and_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(351), 1,
      sym__equality_expression,
    STATE(352), 1,
      sym__wrapped_equality_expression,
    STATE(353), 1,
      sym__relational_expression,
    STATE(354), 1,
      sym__wrapped_relational_expression,
    STATE(355), 1,
      sym__shift_expression,
    STATE(356), 1,
      sym__wrapped_shift_expression,
    STATE(357), 1,
      sym__additive_expression,
    STATE(358), 1,
      sym__wrapped_additive_expression,
    STATE(359), 1,
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
    STATE(331), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12362] = 37,
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
    STATE(98), 1,
      sym__block_comment,
    STATE(217), 1,
      sym__equality_expression,
    STATE(219), 1,
      sym__relational_expression,
    STATE(220), 1,
      sym__wrapped_relational_expression,
    STATE(221), 1,
      sym__shift_expression,
    STATE(222), 1,
      sym__wrapped_shift_expression,
    STATE(223), 1,
      sym__additive_expression,
    STATE(224), 1,
      sym__wrapped_additive_expression,
    STATE(226), 1,
      sym__wrapped_multiplicative_expression,
    STATE(227), 1,
      sym__simple_expression,
    STATE(238), 1,
      sym__wrapped_equality_expression,
    STATE(248), 1,
      sym__multiplicative_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(349), 1,
      sym__bitwise_and_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(494), 1,
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
    STATE(203), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12487] = 37,
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
    STATE(99), 1,
      sym__block_comment,
    STATE(219), 1,
      sym__relational_expression,
    STATE(221), 1,
      sym__shift_expression,
    STATE(222), 1,
      sym__wrapped_shift_expression,
    STATE(223), 1,
      sym__additive_expression,
    STATE(224), 1,
      sym__wrapped_additive_expression,
    STATE(226), 1,
      sym__wrapped_multiplicative_expression,
    STATE(227), 1,
      sym__simple_expression,
    STATE(239), 1,
      sym__wrapped_relational_expression,
    STATE(248), 1,
      sym__multiplicative_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(349), 1,
      sym__bitwise_and_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(351), 1,
      sym__equality_expression,
    STATE(352), 1,
      sym__wrapped_equality_expression,
    STATE(494), 1,
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
    STATE(203), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12612] = 37,
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
    STATE(100), 1,
      sym__block_comment,
    STATE(221), 1,
      sym__shift_expression,
    STATE(223), 1,
      sym__additive_expression,
    STATE(224), 1,
      sym__wrapped_additive_expression,
    STATE(226), 1,
      sym__wrapped_multiplicative_expression,
    STATE(227), 1,
      sym__simple_expression,
    STATE(240), 1,
      sym__wrapped_shift_expression,
    STATE(248), 1,
      sym__multiplicative_expression,
    STATE(335), 1,
      sym__assignment_expression,
    STATE(336), 1,
      sym__logical_or_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__logical_and_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(343), 1,
      sym__bitwise_or_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(347), 1,
      sym__bitwise_xor_expression,
    STATE(348), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(349), 1,
      sym__bitwise_and_expression,
    STATE(350), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(351), 1,
      sym__equality_expression,
    STATE(352), 1,
      sym__wrapped_equality_expression,
    STATE(353), 1,
      sym__relational_expression,
    STATE(354), 1,
      sym__wrapped_relational_expression,
    STATE(494), 1,
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
    STATE(203), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12737] = 37,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(115), 1,
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
      aux_sym_local_label_reference_token1,
    ACTIONS(133), 1,
      aux_sym_symbol_token1,
    STATE(101), 1,
      sym__block_comment,
    STATE(111), 1,
      sym__shift_expression,
    STATE(112), 1,
      sym__wrapped_logical_or_expression,
    STATE(113), 1,
      sym__logical_and_expression,
    STATE(114), 1,
      sym__wrapped_logical_and_expression,
    STATE(115), 1,
      sym__bitwise_or_expression,
    STATE(116), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(117), 1,
      sym__bitwise_xor_expression,
    STATE(118), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(119), 1,
      sym__bitwise_and_expression,
    STATE(120), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(121), 1,
      sym__equality_expression,
    STATE(122), 1,
      sym__wrapped_equality_expression,
    STATE(123), 1,
      sym__relational_expression,
    STATE(124), 1,
      sym__wrapped_relational_expression,
    STATE(126), 1,
      sym__wrapped_shift_expression,
    STATE(128), 1,
      sym__wrapped_additive_expression,
    STATE(129), 1,
      sym__multiplicative_expression,
    STATE(130), 1,
      sym__wrapped_multiplicative_expression,
    STATE(131), 1,
      sym__simple_expression,
    STATE(141), 1,
      sym__assignment_expression,
    STATE(143), 1,
      sym__logical_or_expression,
    STATE(155), 1,
      sym__additive_expression,
    STATE(360), 1,
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
    STATE(142), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12862] = 6,
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
  [12922] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      sym__block_comment,
    STATE(515), 1,
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
  [12982] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    STATE(104), 1,
      sym__block_comment,
    STATE(503), 1,
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
  [13042] = 5,
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
  [13099] = 5,
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
  [13156] = 5,
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
  [13213] = 5,
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
  [13270] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    STATE(109), 1,
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
  [13327] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(110), 1,
      sym__block_comment,
    ACTIONS(239), 11,
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
    ACTIONS(237), 13,
      sym__line_separator,
      sym__inline_end_comment,
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
  [13365] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(111), 1,
      sym__block_comment,
    ACTIONS(241), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(243), 17,
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
  [13402] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(249), 1,
      sym_logical_or_operator,
    STATE(112), 1,
      sym__block_comment,
    ACTIONS(245), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(247), 16,
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
  [13441] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(113), 1,
      sym__block_comment,
    ACTIONS(251), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(253), 17,
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
  [13478] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(259), 1,
      sym_logical_and_operator,
    STATE(114), 1,
      sym__block_comment,
    ACTIONS(255), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(257), 16,
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
  [13517] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(115), 1,
      sym__block_comment,
    ACTIONS(261), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [13554] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(269), 1,
      sym_bitwise_or_operator,
    STATE(116), 1,
      sym__block_comment,
    ACTIONS(265), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(267), 16,
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
  [13593] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(117), 1,
      sym__block_comment,
    ACTIONS(271), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [13630] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(279), 1,
      sym_bitwise_xor_operator,
    STATE(118), 1,
      sym__block_comment,
    ACTIONS(275), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [13669] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(119), 1,
      sym__block_comment,
    ACTIONS(281), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [13706] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(289), 1,
      sym_bitwise_and_operator,
    STATE(120), 1,
      sym__block_comment,
    ACTIONS(285), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [13745] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(121), 1,
      sym__block_comment,
    ACTIONS(291), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [13782] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(299), 1,
      sym_equality_operator,
    STATE(122), 1,
      sym__block_comment,
    ACTIONS(295), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [13821] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(123), 1,
      sym__block_comment,
    ACTIONS(301), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(303), 17,
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
  [13858] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(309), 1,
      sym_relational_operator,
    STATE(124), 1,
      sym__block_comment,
    ACTIONS(305), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(307), 16,
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
  [13897] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(309), 1,
      sym_relational_operator,
    STATE(125), 1,
      sym__block_comment,
    ACTIONS(311), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [13936] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(319), 1,
      sym_shift_operator,
    STATE(126), 1,
      sym__block_comment,
    ACTIONS(315), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(317), 16,
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
  [13975] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(319), 1,
      sym_shift_operator,
    STATE(127), 1,
      sym__block_comment,
    ACTIONS(321), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
      sym_equality_operator,
      sym_relational_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [14014] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(329), 1,
      sym_additive_operator,
    STATE(128), 1,
      sym__block_comment,
    ACTIONS(325), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(327), 16,
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
  [14053] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(129), 1,
      sym__block_comment,
    ACTIONS(331), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(333), 17,
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
  [14090] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(339), 1,
      sym_multiplicative_operator,
    STATE(130), 1,
      sym__block_comment,
    ACTIONS(335), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(337), 16,
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
  [14129] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(131), 1,
      sym__block_comment,
    ACTIONS(341), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(343), 17,
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
  [14166] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(132), 1,
      sym__block_comment,
    ACTIONS(345), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(347), 17,
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
  [14203] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(355), 1,
      sym_assignment_operator,
    STATE(133), 1,
      sym__block_comment,
    ACTIONS(349), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(351), 15,
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
  [14244] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(339), 1,
      sym_multiplicative_operator,
    STATE(134), 1,
      sym__block_comment,
    ACTIONS(357), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(359), 16,
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
  [14283] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(135), 1,
      sym__block_comment,
    ACTIONS(361), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(363), 17,
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
  [14320] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(136), 1,
      sym__block_comment,
    ACTIONS(365), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(367), 17,
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
  [14357] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(137), 1,
      sym__block_comment,
    ACTIONS(369), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [14394] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(138), 1,
      sym__block_comment,
    ACTIONS(373), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(375), 17,
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
  [14431] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(139), 1,
      sym__block_comment,
    ACTIONS(377), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(379), 17,
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
  [14468] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(329), 1,
      sym_additive_operator,
    STATE(140), 1,
      sym__block_comment,
    ACTIONS(381), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(383), 16,
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
  [14507] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(141), 1,
      sym__block_comment,
    ACTIONS(385), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [14544] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(142), 1,
      sym__block_comment,
    ACTIONS(389), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [14581] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(143), 1,
      sym__block_comment,
    ACTIONS(393), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [14618] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(144), 1,
      sym__block_comment,
    ACTIONS(397), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [14655] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(145), 1,
      sym__block_comment,
    ACTIONS(401), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [14692] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(146), 1,
      sym__block_comment,
    ACTIONS(405), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [14729] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(147), 1,
      sym__block_comment,
    ACTIONS(409), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [14766] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(148), 1,
      sym__block_comment,
    ACTIONS(413), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [14803] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(149), 1,
      sym__block_comment,
    ACTIONS(417), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [14840] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(259), 1,
      sym_logical_and_operator,
    STATE(150), 1,
      sym__block_comment,
    ACTIONS(421), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [14879] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(269), 1,
      sym_bitwise_or_operator,
    STATE(151), 1,
      sym__block_comment,
    ACTIONS(425), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [14918] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(279), 1,
      sym_bitwise_xor_operator,
    STATE(152), 1,
      sym__block_comment,
    ACTIONS(429), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [14957] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(289), 1,
      sym_bitwise_and_operator,
    STATE(153), 1,
      sym__block_comment,
    ACTIONS(433), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [14996] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(299), 1,
      sym_equality_operator,
    STATE(154), 1,
      sym__block_comment,
    ACTIONS(437), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [15035] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(155), 1,
      sym__block_comment,
    ACTIONS(441), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [15072] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(156), 1,
      sym__block_comment,
    ACTIONS(239), 10,
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
    ACTIONS(237), 12,
      sym__line_separator,
      sym__inline_end_comment,
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
  [15108] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(157), 1,
      sym__block_comment,
    ACTIONS(375), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(373), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [15143] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(445), 1,
      sym_logical_and_operator,
    STATE(158), 1,
      sym__block_comment,
    ACTIONS(257), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(255), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [15180] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(159), 1,
      sym__block_comment,
    ACTIONS(263), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(261), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [15215] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(160), 1,
      sym__block_comment,
    ACTIONS(411), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(409), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [15250] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(161), 1,
      sym__block_comment,
    ACTIONS(415), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(413), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [15285] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(162), 1,
      sym__block_comment,
    ACTIONS(419), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(417), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [15320] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(445), 1,
      sym_logical_and_operator,
    STATE(163), 1,
      sym__block_comment,
    ACTIONS(423), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(421), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [15357] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(447), 1,
      sym_bitwise_or_operator,
    STATE(164), 1,
      sym__block_comment,
    ACTIONS(427), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(425), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [15394] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(449), 1,
      sym_bitwise_xor_operator,
    STATE(165), 1,
      sym__block_comment,
    ACTIONS(431), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(429), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [15431] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(451), 1,
      sym_bitwise_and_operator,
    STATE(166), 1,
      sym__block_comment,
    ACTIONS(435), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(433), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [15468] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(453), 1,
      sym_equality_operator,
    STATE(167), 1,
      sym__block_comment,
    ACTIONS(439), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(437), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [15505] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(455), 1,
      sym_relational_operator,
    STATE(168), 1,
      sym__block_comment,
    ACTIONS(313), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(311), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [15542] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(457), 1,
      sym_shift_operator,
    STATE(169), 1,
      sym__block_comment,
    ACTIONS(323), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(321), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [15579] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(459), 1,
      sym_additive_operator,
    STATE(170), 1,
      sym__block_comment,
    ACTIONS(383), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(381), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [15616] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(461), 1,
      sym_multiplicative_operator,
    STATE(171), 1,
      sym__block_comment,
    ACTIONS(359), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(357), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [15653] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(172), 1,
      sym__block_comment,
    ACTIONS(363), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(361), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [15688] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(173), 1,
      sym__block_comment,
    ACTIONS(367), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(365), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [15723] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(174), 1,
      sym__block_comment,
    ACTIONS(371), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(369), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [15758] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(175), 1,
      sym__block_comment,
    ACTIONS(395), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(393), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [15793] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(447), 1,
      sym_bitwise_or_operator,
    STATE(176), 1,
      sym__block_comment,
    ACTIONS(267), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(265), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [15830] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(463), 1,
      sym_logical_or_operator,
    STATE(177), 1,
      sym__block_comment,
    ACTIONS(247), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(245), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [15867] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(178), 1,
      sym__block_comment,
    ACTIONS(273), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(271), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [15902] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(449), 1,
      sym_bitwise_xor_operator,
    STATE(179), 1,
      sym__block_comment,
    ACTIONS(277), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(275), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [15939] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(180), 1,
      sym__block_comment,
    ACTIONS(283), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(281), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [15974] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(451), 1,
      sym_bitwise_and_operator,
    STATE(181), 1,
      sym__block_comment,
    ACTIONS(287), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(285), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [16011] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(182), 1,
      sym__block_comment,
    ACTIONS(253), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(251), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [16046] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(183), 1,
      sym__block_comment,
    ACTIONS(293), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(291), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [16081] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(453), 1,
      sym_equality_operator,
    STATE(184), 1,
      sym__block_comment,
    ACTIONS(297), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(295), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [16118] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(185), 1,
      sym__block_comment,
    ACTIONS(303), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(301), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [16153] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(455), 1,
      sym_relational_operator,
    STATE(186), 1,
      sym__block_comment,
    ACTIONS(307), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(305), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [16190] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(187), 1,
      sym__block_comment,
    ACTIONS(243), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(241), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [16225] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(457), 1,
      sym_shift_operator,
    STATE(188), 1,
      sym__block_comment,
    ACTIONS(317), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(315), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [16262] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(189), 1,
      sym__block_comment,
    ACTIONS(443), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(441), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [16297] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(459), 1,
      sym_additive_operator,
    STATE(190), 1,
      sym__block_comment,
    ACTIONS(327), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(325), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [16334] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(191), 1,
      sym__block_comment,
    ACTIONS(333), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(331), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [16369] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(461), 1,
      sym_multiplicative_operator,
    STATE(192), 1,
      sym__block_comment,
    ACTIONS(337), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(335), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [16406] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(193), 1,
      sym__block_comment,
    ACTIONS(343), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(341), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [16441] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(465), 1,
      anon_sym_LPAREN,
    ACTIONS(467), 1,
      sym_assignment_operator,
    STATE(194), 1,
      sym__block_comment,
    ACTIONS(351), 4,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(349), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [16480] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(195), 1,
      sym__block_comment,
    ACTIONS(379), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(377), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [16515] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(196), 1,
      sym__block_comment,
    ACTIONS(391), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(389), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [16550] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(197), 1,
      sym__block_comment,
    ACTIONS(399), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(397), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [16585] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(198), 1,
      sym__block_comment,
    ACTIONS(403), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(401), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [16620] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(199), 1,
      sym__block_comment,
    ACTIONS(407), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(405), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [16655] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(200), 1,
      sym__block_comment,
    ACTIONS(387), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(385), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [16690] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(201), 1,
      sym__block_comment,
    ACTIONS(347), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(345), 16,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
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
  [16725] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(469), 1,
      sym_bitwise_or_operator,
    STATE(202), 1,
      sym__block_comment,
    ACTIONS(267), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(265), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
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
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(203), 1,
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
      sym__inline_end_comment,
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
    STATE(204), 1,
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
      sym__inline_end_comment,
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
  [16826] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
      sym__inline_end_comment,
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
  [16859] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(206), 1,
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
      sym__inline_end_comment,
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
  [16892] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(207), 1,
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
      sym__inline_end_comment,
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
  [16925] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(208), 1,
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
      sym__inline_end_comment,
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
  [16958] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(471), 1,
      sym_logical_or_operator,
    STATE(209), 1,
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
      sym__inline_end_comment,
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
  [16993] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(210), 1,
      sym__block_comment,
    ACTIONS(253), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(251), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
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
  [17026] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(473), 1,
      sym_logical_and_operator,
    STATE(211), 1,
      sym__block_comment,
    ACTIONS(257), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(255), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
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
  [17061] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(212), 1,
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
      sym__inline_end_comment,
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
  [17094] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(213), 1,
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
      sym__inline_end_comment,
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
    ACTIONS(475), 1,
      sym_bitwise_xor_operator,
    STATE(214), 1,
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
      sym__inline_end_comment,
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
  [17162] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(215), 1,
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
      sym__inline_end_comment,
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
  [17195] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(477), 1,
      sym_bitwise_and_operator,
    STATE(216), 1,
      sym__block_comment,
    ACTIONS(287), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(285), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
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
  [17230] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(217), 1,
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
      sym__inline_end_comment,
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
  [17263] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(479), 1,
      sym_equality_operator,
    STATE(218), 1,
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
      sym__inline_end_comment,
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
  [17298] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(219), 1,
      sym__block_comment,
    ACTIONS(303), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(301), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
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
  [17331] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(481), 1,
      sym_relational_operator,
    STATE(220), 1,
      sym__block_comment,
    ACTIONS(307), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(305), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
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
  [17366] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(221), 1,
      sym__block_comment,
    ACTIONS(243), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(241), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
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
  [17399] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(483), 1,
      sym_shift_operator,
    STATE(222), 1,
      sym__block_comment,
    ACTIONS(317), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(315), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
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
  [17434] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(223), 1,
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
      sym__inline_end_comment,
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
  [17467] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(485), 1,
      sym_additive_operator,
    STATE(224), 1,
      sym__block_comment,
    ACTIONS(327), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(325), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
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
  [17502] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(225), 1,
      sym__block_comment,
    ACTIONS(375), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(373), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
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
  [17535] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(487), 1,
      sym_multiplicative_operator,
    STATE(226), 1,
      sym__block_comment,
    ACTIONS(337), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(335), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
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
  [17570] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(227), 1,
      sym__block_comment,
    ACTIONS(343), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(341), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
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
  [17603] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      sym_assignment_operator,
    STATE(228), 1,
      sym__block_comment,
    ACTIONS(351), 4,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(349), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
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
  [17640] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(229), 1,
      sym__block_comment,
    ACTIONS(493), 8,
      anon_sym_LPAREN,
      aux_sym_option_flag_token1,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
      sym_binary,
      sym_hexadecimal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(495), 11,
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
  [17673] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(230), 1,
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
      sym__inline_end_comment,
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
  [17706] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(231), 1,
      sym__block_comment,
    ACTIONS(379), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(497), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(377), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17741] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(232), 1,
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
      sym__inline_end_comment,
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
  [17774] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(233), 1,
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
      sym__inline_end_comment,
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
  [17807] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(473), 1,
      sym_logical_and_operator,
    STATE(234), 1,
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
      sym__inline_end_comment,
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
  [17842] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(469), 1,
      sym_bitwise_or_operator,
    STATE(235), 1,
      sym__block_comment,
    ACTIONS(427), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(425), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
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
  [17877] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(475), 1,
      sym_bitwise_xor_operator,
    STATE(236), 1,
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
      sym__inline_end_comment,
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
  [17912] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(477), 1,
      sym_bitwise_and_operator,
    STATE(237), 1,
      sym__block_comment,
    ACTIONS(435), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(433), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
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
    ACTIONS(479), 1,
      sym_equality_operator,
    STATE(238), 1,
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
      sym__inline_end_comment,
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
  [17982] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(481), 1,
      sym_relational_operator,
    STATE(239), 1,
      sym__block_comment,
    ACTIONS(313), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(311), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
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
  [18017] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(483), 1,
      sym_shift_operator,
    STATE(240), 1,
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
      sym__inline_end_comment,
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
  [18052] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(485), 1,
      sym_additive_operator,
    STATE(241), 1,
      sym__block_comment,
    ACTIONS(383), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(381), 13,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
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
  [18087] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(487), 1,
      sym_multiplicative_operator,
    STATE(242), 1,
      sym__block_comment,
    ACTIONS(359), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(357), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
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
  [18122] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(243), 1,
      sym__block_comment,
    ACTIONS(363), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(361), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
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
  [18155] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(244), 1,
      sym__block_comment,
    ACTIONS(379), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(377), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
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
  [18188] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(245), 1,
      sym__block_comment,
    ACTIONS(347), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(345), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
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
  [18221] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(246), 1,
      sym__block_comment,
    ACTIONS(367), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(365), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
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
  [18254] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(247), 1,
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
      sym__inline_end_comment,
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
  [18287] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(248), 1,
      sym__block_comment,
    ACTIONS(333), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(331), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
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
  [18320] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(249), 1,
      sym__block_comment,
    ACTIONS(369), 4,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(371), 14,
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
  [18352] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(250), 1,
      sym__block_comment,
    ACTIONS(373), 4,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(375), 14,
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
  [18384] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(251), 1,
      sym__block_comment,
    ACTIONS(501), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(499), 4,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(391), 12,
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
  [18418] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(252), 1,
      sym__block_comment,
    ACTIONS(377), 4,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(379), 14,
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
  [18450] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(253), 1,
      sym__block_comment,
    ACTIONS(409), 4,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(411), 14,
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
  [18482] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(254), 1,
      sym__block_comment,
    ACTIONS(237), 7,
      anon_sym_LPAREN,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
      sym_binary,
      sym_hexadecimal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(239), 10,
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
  [18513] = 14,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(507), 1,
      anon_sym_COMMA,
    ACTIONS(511), 1,
      sym_assignment_operator,
    ACTIONS(513), 1,
      sym__operand_separator,
    STATE(255), 1,
      sym__block_comment,
    STATE(313), 1,
      aux_sym_numeric_operands_repeat1,
    STATE(388), 1,
      aux_sym_numeric_operands_repeat3,
    STATE(390), 1,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(505), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(509), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(515), 2,
      sym__data_separator,
      sym__inline_separator_comment,
    ACTIONS(503), 3,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
  [18561] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(256), 1,
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
  [18590] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(517), 1,
      sym_bitwise_or_operator,
    STATE(257), 1,
      sym__block_comment,
    ACTIONS(267), 4,
      sym_assignment_operator,
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
  [18621] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(519), 1,
      sym_bitwise_xor_operator,
    STATE(258), 1,
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
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18652] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(259), 1,
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
  [18681] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(521), 1,
      sym_bitwise_and_operator,
    STATE(260), 1,
      sym__block_comment,
    ACTIONS(287), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [18712] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(261), 1,
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
  [18741] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(523), 1,
      sym_equality_operator,
    STATE(262), 1,
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
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18772] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(263), 1,
      sym__block_comment,
    ACTIONS(303), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(301), 10,
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
  [18801] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(525), 1,
      sym_relational_operator,
    STATE(264), 1,
      sym__block_comment,
    ACTIONS(307), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(305), 10,
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
  [18832] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(265), 1,
      sym__block_comment,
    ACTIONS(243), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(241), 10,
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
  [18861] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(527), 1,
      sym_shift_operator,
    STATE(266), 1,
      sym__block_comment,
    ACTIONS(317), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(315), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [18892] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(267), 1,
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
  [18921] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(529), 1,
      sym_additive_operator,
    STATE(268), 1,
      sym__block_comment,
    ACTIONS(327), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(325), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [18952] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(269), 1,
      sym__block_comment,
    ACTIONS(333), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [18981] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(531), 1,
      sym_multiplicative_operator,
    STATE(270), 1,
      sym__block_comment,
    ACTIONS(337), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(335), 10,
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
  [19012] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(271), 1,
      sym__block_comment,
    ACTIONS(343), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(341), 10,
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
  [19041] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(533), 1,
      anon_sym_LPAREN,
    ACTIONS(535), 1,
      sym_assignment_operator,
    STATE(272), 1,
      sym__block_comment,
    ACTIONS(351), 4,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(349), 9,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19074] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(273), 1,
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
  [19103] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(537), 1,
      anon_sym_RPAREN,
    STATE(274), 1,
      sym__block_comment,
    ACTIONS(391), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(389), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19134] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(275), 1,
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
  [19163] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(276), 1,
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
  [19192] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(277), 1,
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
  [19221] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(278), 1,
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
  [19250] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(279), 1,
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
  [19279] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(280), 1,
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
  [19308] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(281), 1,
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
  [19337] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(282), 1,
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
  [19366] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(539), 1,
      anon_sym_RPAREN,
    STATE(283), 1,
      sym__block_comment,
    ACTIONS(391), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(389), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19397] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(541), 1,
      sym_logical_and_operator,
    STATE(284), 1,
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
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19428] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(517), 1,
      sym_bitwise_or_operator,
    STATE(285), 1,
      sym__block_comment,
    ACTIONS(427), 4,
      sym_assignment_operator,
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
  [19459] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(519), 1,
      sym_bitwise_xor_operator,
    STATE(286), 1,
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
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19490] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(521), 1,
      sym_bitwise_and_operator,
    STATE(287), 1,
      sym__block_comment,
    ACTIONS(435), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [19521] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(523), 1,
      sym_equality_operator,
    STATE(288), 1,
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
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19552] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(525), 1,
      sym_relational_operator,
    STATE(289), 1,
      sym__block_comment,
    ACTIONS(313), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [19583] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(527), 1,
      sym_shift_operator,
    STATE(290), 1,
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
      sym_equality_operator,
      sym_additive_operator,
  [19614] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(529), 1,
      sym_additive_operator,
    STATE(291), 1,
      sym__block_comment,
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
      sym_shift_operator,
  [19645] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(531), 1,
      sym_multiplicative_operator,
    STATE(292), 1,
      sym__block_comment,
    ACTIONS(359), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
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
  [19676] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(293), 1,
      sym__block_comment,
    ACTIONS(363), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(361), 10,
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
  [19705] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(294), 1,
      sym__block_comment,
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
  [19734] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(295), 1,
      sym__block_comment,
    ACTIONS(253), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(251), 10,
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
  [19763] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(296), 1,
      sym__block_comment,
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
  [19792] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
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
  [19821] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(298), 1,
      sym__block_comment,
    ACTIONS(347), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(345), 10,
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
  [19850] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(543), 1,
      anon_sym_RPAREN,
    STATE(299), 1,
      sym__block_comment,
    ACTIONS(391), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(389), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19881] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(545), 1,
      anon_sym_RPAREN,
    STATE(300), 1,
      sym__block_comment,
    ACTIONS(391), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(389), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19912] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(547), 1,
      anon_sym_RPAREN,
    STATE(301), 1,
      sym__block_comment,
    ACTIONS(391), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(389), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19943] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
    STATE(302), 1,
      sym__block_comment,
    ACTIONS(391), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(389), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19974] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(551), 1,
      anon_sym_RPAREN,
    STATE(303), 1,
      sym__block_comment,
    ACTIONS(391), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(389), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20005] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    STATE(304), 1,
      sym__block_comment,
    ACTIONS(391), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(389), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20036] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
    STATE(305), 1,
      sym__block_comment,
    ACTIONS(391), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(389), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20067] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
    STATE(306), 1,
      sym__block_comment,
    ACTIONS(391), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(389), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20098] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
    STATE(307), 1,
      sym__block_comment,
    ACTIONS(391), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(389), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20129] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
    STATE(308), 1,
      sym__block_comment,
    ACTIONS(391), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(389), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20160] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(309), 1,
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
  [20189] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(310), 1,
      sym__block_comment,
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
  [20218] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(541), 1,
      sym_logical_and_operator,
    STATE(311), 1,
      sym__block_comment,
    ACTIONS(257), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(255), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20249] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(563), 1,
      sym_logical_or_operator,
    STATE(312), 1,
      sym__block_comment,
    ACTIONS(247), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(245), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20280] = 12,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(507), 1,
      anon_sym_COMMA,
    ACTIONS(513), 1,
      sym__operand_separator,
    STATE(313), 1,
      sym__block_comment,
    STATE(364), 1,
      aux_sym_numeric_operands_repeat1,
    STATE(387), 1,
      aux_sym_numeric_operands_repeat2,
    STATE(389), 1,
      aux_sym_numeric_operands_repeat3,
    ACTIONS(509), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(515), 2,
      sym__data_separator,
      sym__inline_separator_comment,
    ACTIONS(567), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(565), 3,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
  [20322] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(249), 1,
      sym_logical_or_operator,
    STATE(314), 1,
      sym__block_comment,
    ACTIONS(345), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(347), 7,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
      sym_assignment_operator,
  [20352] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(315), 1,
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
  [20379] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(316), 1,
      sym__block_comment,
    ACTIONS(343), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(341), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20406] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    ACTIONS(571), 1,
      sym_assignment_operator,
    STATE(317), 1,
      sym__block_comment,
    ACTIONS(351), 4,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(349), 7,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20437] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(318), 1,
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
  [20464] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(319), 1,
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
  [20491] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(573), 1,
      sym_logical_and_operator,
    STATE(320), 1,
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
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20520] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(575), 1,
      sym_bitwise_or_operator,
    STATE(321), 1,
      sym__block_comment,
    ACTIONS(427), 4,
      sym_assignment_operator,
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
  [20549] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(577), 1,
      sym_bitwise_xor_operator,
    STATE(322), 1,
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
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20578] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(579), 1,
      sym_bitwise_and_operator,
    STATE(323), 1,
      sym__block_comment,
    ACTIONS(435), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [20607] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(581), 1,
      sym_equality_operator,
    STATE(324), 1,
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
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20636] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(583), 1,
      sym_relational_operator,
    STATE(325), 1,
      sym__block_comment,
    ACTIONS(313), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [20665] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(585), 1,
      sym_shift_operator,
    STATE(326), 1,
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
      sym_equality_operator,
      sym_additive_operator,
  [20694] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(587), 1,
      sym_additive_operator,
    STATE(327), 1,
      sym__block_comment,
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
      sym_shift_operator,
  [20723] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(589), 1,
      sym_multiplicative_operator,
    STATE(328), 1,
      sym__block_comment,
    ACTIONS(359), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(357), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20752] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(329), 1,
      sym__block_comment,
    ACTIONS(363), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(361), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20779] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(330), 1,
      sym__block_comment,
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
  [20806] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(331), 1,
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
  [20833] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(332), 1,
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
  [20860] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(589), 1,
      sym_multiplicative_operator,
    STATE(333), 1,
      sym__block_comment,
    ACTIONS(337), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(335), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20889] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(334), 1,
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
  [20916] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(335), 1,
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
  [20943] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(336), 1,
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
  [20970] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(591), 1,
      sym_logical_or_operator,
    STATE(337), 1,
      sym__block_comment,
    ACTIONS(247), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(245), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [20999] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      sym_assignment_operator,
    STATE(338), 1,
      sym__block_comment,
    ACTIONS(595), 5,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(593), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
  [21030] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(339), 1,
      sym__block_comment,
    ACTIONS(253), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(251), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21057] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(340), 1,
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
  [21084] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(573), 1,
      sym_logical_and_operator,
    STATE(341), 1,
      sym__block_comment,
    ACTIONS(257), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(255), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21113] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(342), 1,
      sym__block_comment,
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
  [21140] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(343), 1,
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
  [21167] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(344), 1,
      sym__block_comment,
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
  [21194] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(575), 1,
      sym_bitwise_or_operator,
    STATE(345), 1,
      sym__block_comment,
    ACTIONS(267), 4,
      sym_assignment_operator,
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
  [21223] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(346), 1,
      sym__block_comment,
    ACTIONS(347), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(345), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21250] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(347), 1,
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
  [21277] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(577), 1,
      sym_bitwise_xor_operator,
    STATE(348), 1,
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
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21306] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(349), 1,
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
  [21333] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(579), 1,
      sym_bitwise_and_operator,
    STATE(350), 1,
      sym__block_comment,
    ACTIONS(287), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [21362] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(351), 1,
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
  [21389] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(581), 1,
      sym_equality_operator,
    STATE(352), 1,
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
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21418] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(353), 1,
      sym__block_comment,
    ACTIONS(303), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(301), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21445] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(583), 1,
      sym_relational_operator,
    STATE(354), 1,
      sym__block_comment,
    ACTIONS(307), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(305), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21474] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(355), 1,
      sym__block_comment,
    ACTIONS(243), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(241), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [21501] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(585), 1,
      sym_shift_operator,
    STATE(356), 1,
      sym__block_comment,
    ACTIONS(317), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(315), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [21530] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(357), 1,
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
  [21557] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(587), 1,
      sym_additive_operator,
    STATE(358), 1,
      sym__block_comment,
    ACTIONS(327), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(325), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [21586] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(359), 1,
      sym__block_comment,
    ACTIONS(333), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [21613] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      sym_assignment_operator,
    STATE(360), 1,
      sym__block_comment,
    ACTIONS(599), 5,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(597), 6,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
  [21644] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(361), 1,
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
  [21671] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(463), 1,
      sym_logical_or_operator,
    STATE(362), 1,
      sym__block_comment,
    ACTIONS(345), 11,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_assignment_operator,
  [21697] = 12,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(605), 1,
      aux_sym__whitespace_token1,
    ACTIONS(608), 1,
      aux_sym__immediate_block_comment_token1,
    ACTIONS(610), 1,
      anon_sym_COMMA,
    ACTIONS(612), 1,
      anon_sym_DQUOTE,
    STATE(363), 1,
      sym__block_comment,
    STATE(365), 1,
      aux_sym_string_operands_repeat1,
    STATE(375), 1,
      sym_string,
    STATE(478), 1,
      sym__immediate_block_comment,
    ACTIONS(603), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(601), 3,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
  [21737] = 8,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(614), 1,
      anon_sym_COMMA,
    ACTIONS(595), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(617), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(364), 2,
      sym__block_comment,
      aux_sym_numeric_operands_repeat1,
    ACTIONS(593), 3,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(620), 3,
      sym__operand_separator,
      sym__data_separator,
      sym__inline_separator_comment,
  [21769] = 11,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(627), 1,
      aux_sym__whitespace_token1,
    ACTIONS(630), 1,
      aux_sym__immediate_block_comment_token1,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    ACTIONS(636), 1,
      anon_sym_DQUOTE,
    STATE(375), 1,
      sym_string,
    STATE(478), 1,
      sym__immediate_block_comment,
    ACTIONS(625), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    STATE(365), 2,
      sym__block_comment,
      aux_sym_string_operands_repeat1,
    ACTIONS(623), 3,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
  [21807] = 12,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(608), 1,
      aux_sym__immediate_block_comment_token1,
    ACTIONS(610), 1,
      anon_sym_COMMA,
    ACTIONS(612), 1,
      anon_sym_DQUOTE,
    ACTIONS(639), 1,
      aux_sym__whitespace_token1,
    STATE(363), 1,
      aux_sym_string_operands_repeat1,
    STATE(366), 1,
      sym__block_comment,
    STATE(375), 1,
      sym_string,
    STATE(478), 1,
      sym__immediate_block_comment,
    ACTIONS(501), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(499), 3,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
  [21847] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(9), 1,
      sym__control_operand_separator,
    STATE(367), 1,
      sym__block_comment,
    STATE(370), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(644), 4,
      sym__operand_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      aux_sym__control_operand_separator_token1,
    ACTIONS(642), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [21876] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(465), 1,
      anon_sym_LPAREN,
    ACTIONS(648), 1,
      sym_assignment_operator,
    STATE(368), 1,
      sym__block_comment,
    ACTIONS(646), 9,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      aux_sym__control_operand_separator_token1,
  [21903] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(9), 1,
      sym__control_operand_separator,
    STATE(369), 2,
      sym__block_comment,
      aux_sym_control_operands_repeat1,
    ACTIONS(652), 4,
      sym__operand_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      aux_sym__control_operand_separator_token1,
    ACTIONS(650), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [21930] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(9), 1,
      sym__control_operand_separator,
    STATE(369), 1,
      aux_sym_control_operands_repeat1,
    STATE(370), 1,
      sym__block_comment,
    ACTIONS(644), 4,
      sym__operand_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      aux_sym__control_operand_separator_token1,
    ACTIONS(655), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [21959] = 10,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(661), 1,
      aux_sym__whitespace_token1,
    ACTIONS(663), 1,
      aux_sym__immediate_block_comment_token1,
    ACTIONS(665), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym__immediate_block_comment,
    STATE(371), 1,
      sym__block_comment,
    STATE(425), 1,
      sym__call_expression,
    ACTIONS(659), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(657), 3,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
  [21993] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(471), 1,
      sym_logical_or_operator,
    STATE(372), 1,
      sym__block_comment,
    ACTIONS(345), 9,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
  [22017] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(669), 1,
      sym_assignment_operator,
    STATE(373), 1,
      sym__block_comment,
    ACTIONS(667), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [22042] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(374), 1,
      sym__block_comment,
    ACTIONS(650), 9,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      aux_sym__control_operand_separator_token1,
  [22063] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(375), 1,
      sym__block_comment,
    ACTIONS(673), 4,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(671), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__immediate_block_comment_token1,
  [22086] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(376), 1,
      sym__block_comment,
    ACTIONS(675), 9,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      aux_sym__control_operand_separator_token1,
  [22107] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(377), 1,
      sym__block_comment,
    ACTIONS(646), 9,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      aux_sym__control_operand_separator_token1,
  [22128] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(378), 1,
      sym__block_comment,
    ACTIONS(625), 4,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(623), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__immediate_block_comment_token1,
  [22151] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(379), 1,
      sym__block_comment,
    ACTIONS(677), 9,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      aux_sym__control_operand_separator_token1,
  [22172] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(380), 1,
      sym__block_comment,
    ACTIONS(679), 4,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(677), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__immediate_block_comment_token1,
  [22195] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(381), 1,
      sym__block_comment,
    ACTIONS(683), 4,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
    ACTIONS(681), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__immediate_block_comment_token1,
  [22218] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(382), 1,
      sym__block_comment,
    ACTIONS(685), 9,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      aux_sym__control_operand_separator_token1,
  [22239] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(383), 1,
      sym__block_comment,
    ACTIONS(681), 9,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      aux_sym__control_operand_separator_token1,
  [22260] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(689), 1,
      anon_sym_COMMA,
    ACTIONS(691), 1,
      sym__operand_separator,
    STATE(384), 1,
      sym__block_comment,
    STATE(394), 1,
      aux_sym_operands_repeat1,
    ACTIONS(687), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22286] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    STATE(385), 1,
      sym__block_comment,
    ACTIONS(693), 3,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(695), 4,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_SPACE,
      anon_sym_TAB,
  [22310] = 8,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(703), 1,
      aux_sym__whitespace_token1,
    ACTIONS(705), 1,
      anon_sym_COMMA,
    STATE(386), 1,
      sym__block_comment,
    STATE(391), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(701), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(699), 3,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
  [22338] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(387), 1,
      sym__block_comment,
    STATE(396), 1,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(709), 2,
      sym__data_separator,
      sym__inline_separator_comment,
    ACTIONS(707), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22362] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(388), 1,
      sym__block_comment,
    STATE(398), 1,
      aux_sym_numeric_operands_repeat3,
    ACTIONS(567), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(711), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(565), 3,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
  [22388] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(389), 1,
      sym__block_comment,
    STATE(398), 1,
      aux_sym_numeric_operands_repeat3,
    ACTIONS(711), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(713), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(707), 3,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
  [22414] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(390), 1,
      sym__block_comment,
    STATE(396), 1,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(709), 2,
      sym__data_separator,
      sym__inline_separator_comment,
    ACTIONS(565), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22438] = 8,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(703), 1,
      aux_sym__whitespace_token1,
    ACTIONS(705), 1,
      anon_sym_COMMA,
    STATE(391), 1,
      sym__block_comment,
    STATE(397), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(717), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(715), 3,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
  [22466] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(721), 2,
      sym__operand_separator,
      anon_sym_COMMA,
    STATE(392), 2,
      sym__block_comment,
      aux_sym_operands_repeat1,
    ACTIONS(719), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22488] = 8,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(728), 1,
      aux_sym__whitespace_token1,
    ACTIONS(730), 1,
      aux_sym__immediate_block_comment_token1,
    STATE(2), 1,
      sym__immediate_block_comment,
    STATE(393), 1,
      sym__block_comment,
    ACTIONS(726), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(724), 3,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
  [22516] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(689), 1,
      anon_sym_COMMA,
    ACTIONS(734), 1,
      sym__operand_separator,
    STATE(392), 1,
      aux_sym_operands_repeat1,
    STATE(394), 1,
      sym__block_comment,
    ACTIONS(732), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22542] = 8,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(663), 1,
      aux_sym__immediate_block_comment_token1,
    ACTIONS(740), 1,
      aux_sym__whitespace_token1,
    STATE(10), 1,
      sym__immediate_block_comment,
    STATE(395), 1,
      sym__block_comment,
    ACTIONS(738), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(736), 3,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
  [22570] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(744), 2,
      sym__data_separator,
      sym__inline_separator_comment,
    STATE(396), 2,
      sym__block_comment,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(742), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22592] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(751), 1,
      aux_sym__whitespace_token1,
    ACTIONS(754), 1,
      anon_sym_COMMA,
    ACTIONS(749), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    STATE(397), 2,
      sym__block_comment,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(747), 3,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
  [22618] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(759), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(761), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(398), 2,
      sym__block_comment,
      aux_sym_numeric_operands_repeat3,
    ACTIONS(757), 3,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
  [22642] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(399), 1,
      sym__block_comment,
    ACTIONS(766), 3,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
    ACTIONS(764), 4,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
  [22663] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(400), 1,
      sym__block_comment,
    ACTIONS(749), 3,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
    ACTIONS(747), 4,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
  [22684] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(401), 1,
      sym__block_comment,
    ACTIONS(667), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [22703] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(402), 1,
      sym__block_comment,
    ACTIONS(113), 7,
      sym__line_separator,
      sym__data_separator,
      sym__inline_separator_comment,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22722] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(772), 1,
      aux_sym__whitespace_token1,
    ACTIONS(774), 1,
      anon_sym_LPAREN,
    STATE(403), 1,
      sym__block_comment,
    ACTIONS(770), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(768), 3,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
  [22747] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(404), 1,
      sym__block_comment,
    ACTIONS(677), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [22766] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(405), 1,
      sym__block_comment,
    ACTIONS(776), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [22785] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(406), 1,
      sym__block_comment,
    ACTIONS(780), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(778), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__immediate_block_comment_token1,
  [22806] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(407), 1,
      sym__block_comment,
    ACTIONS(693), 3,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
    ACTIONS(695), 4,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_SPACE,
      anon_sym_TAB,
  [22827] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(408), 1,
      sym__block_comment,
    ACTIONS(681), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [22846] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(409), 1,
      sym__block_comment,
    ACTIONS(784), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(782), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__immediate_block_comment_token1,
  [22867] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(788), 1,
      aux_sym__line_comment_token1,
    STATE(410), 1,
      sym__block_comment,
    STATE(469), 1,
      sym__line_comment,
    ACTIONS(786), 3,
      sym__line_separator,
      sym__inline_end_comment,
      anon_sym_SEMI,
  [22891] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(563), 1,
      sym_logical_or_operator,
    STATE(411), 1,
      sym__block_comment,
    ACTIONS(345), 5,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
  [22911] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(794), 1,
      aux_sym__whitespace_token1,
    STATE(412), 1,
      sym__block_comment,
    ACTIONS(792), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(790), 3,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
  [22933] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(788), 1,
      aux_sym__line_comment_token1,
    ACTIONS(796), 1,
      ts_builtin_sym_end,
    STATE(413), 1,
      sym__block_comment,
    STATE(467), 1,
      sym__line_comment,
    ACTIONS(786), 3,
      sym__line_separator,
      sym__inline_end_comment,
      anon_sym_SEMI,
  [22957] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(533), 1,
      anon_sym_LPAREN,
    ACTIONS(798), 1,
      anon_sym_RPAREN,
    ACTIONS(801), 1,
      sym_assignment_operator,
    STATE(414), 1,
      sym__block_comment,
    ACTIONS(667), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [22980] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(415), 1,
      sym__block_comment,
    ACTIONS(803), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [22997] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(416), 1,
      sym__block_comment,
    ACTIONS(805), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23014] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(417), 1,
      sym__block_comment,
    ACTIONS(805), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23031] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(418), 1,
      sym__block_comment,
    ACTIONS(807), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23048] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(419), 1,
      sym__block_comment,
    ACTIONS(809), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23065] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(420), 1,
      sym__block_comment,
    ACTIONS(805), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23082] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(421), 1,
      sym__block_comment,
    ACTIONS(811), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23099] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(788), 1,
      aux_sym__line_comment_token1,
    STATE(422), 1,
      sym__block_comment,
    STATE(492), 1,
      sym__line_comment,
    ACTIONS(786), 3,
      sym__line_separator,
      sym__inline_end_comment,
      anon_sym_SEMI,
  [23120] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(423), 1,
      sym__block_comment,
    ACTIONS(813), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23137] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(424), 1,
      sym__block_comment,
    ACTIONS(815), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23154] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(425), 1,
      sym__block_comment,
    ACTIONS(817), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23171] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(426), 1,
      sym__block_comment,
    ACTIONS(819), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23188] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(533), 1,
      anon_sym_LPAREN,
    ACTIONS(801), 1,
      sym_assignment_operator,
    ACTIONS(821), 1,
      anon_sym_RPAREN,
    STATE(427), 1,
      sym__block_comment,
    ACTIONS(667), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [23211] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(533), 1,
      anon_sym_LPAREN,
    ACTIONS(801), 1,
      sym_assignment_operator,
    STATE(428), 1,
      sym__block_comment,
    ACTIONS(667), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23232] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(533), 1,
      anon_sym_LPAREN,
    ACTIONS(801), 1,
      sym_assignment_operator,
    ACTIONS(824), 1,
      anon_sym_RPAREN,
    STATE(429), 1,
      sym__block_comment,
    ACTIONS(667), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [23255] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(430), 1,
      sym__block_comment,
    ACTIONS(827), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23272] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(431), 1,
      sym__block_comment,
    ACTIONS(829), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23289] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(533), 1,
      anon_sym_LPAREN,
    ACTIONS(801), 1,
      sym_assignment_operator,
    ACTIONS(831), 1,
      anon_sym_RPAREN,
    STATE(432), 1,
      sym__block_comment,
    ACTIONS(667), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [23312] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(533), 1,
      anon_sym_LPAREN,
    ACTIONS(801), 1,
      sym_assignment_operator,
    ACTIONS(834), 1,
      anon_sym_RPAREN,
    STATE(433), 1,
      sym__block_comment,
    ACTIONS(667), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [23335] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(434), 1,
      sym__block_comment,
    ACTIONS(837), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23352] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(435), 1,
      sym__block_comment,
    ACTIONS(839), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23369] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(436), 1,
      sym__block_comment,
    ACTIONS(841), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23386] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(437), 1,
      sym__block_comment,
    ACTIONS(497), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23403] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(438), 1,
      sym__block_comment,
    ACTIONS(843), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23420] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(439), 1,
      sym__block_comment,
    ACTIONS(845), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23437] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(440), 1,
      sym__block_comment,
    ACTIONS(847), 5,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [23454] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(717), 1,
      anon_sym_RPAREN,
    ACTIONS(849), 1,
      aux_sym__whitespace_token1,
    ACTIONS(852), 1,
      anon_sym_COMMA,
    STATE(441), 1,
      sym__block_comment,
    STATE(450), 1,
      aux_sym_macro_parameters_repeat1,
  [23476] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(591), 1,
      sym_logical_or_operator,
    STATE(442), 1,
      sym__block_comment,
    ACTIONS(345), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_assignment_operator,
  [23494] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(854), 1,
      anon_sym_DQUOTE,
    STATE(443), 1,
      sym__block_comment,
    STATE(453), 1,
      aux_sym_string_repeat1,
    ACTIONS(856), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23514] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(858), 1,
      anon_sym_DQUOTE,
    STATE(444), 1,
      sym__block_comment,
    STATE(453), 1,
      aux_sym_string_repeat1,
    ACTIONS(856), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23534] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(860), 1,
      anon_sym_DQUOTE,
    STATE(445), 1,
      sym__block_comment,
    STATE(447), 1,
      aux_sym_string_repeat1,
    ACTIONS(856), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23554] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(687), 1,
      anon_sym_RPAREN,
    ACTIONS(862), 1,
      anon_sym_COMMA,
    ACTIONS(864), 1,
      sym__operand_separator,
    STATE(446), 1,
      sym__block_comment,
    STATE(451), 1,
      aux_sym_operands_repeat1,
  [23576] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(866), 1,
      anon_sym_DQUOTE,
    STATE(447), 1,
      sym__block_comment,
    STATE(453), 1,
      aux_sym_string_repeat1,
    ACTIONS(856), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23596] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(719), 1,
      anon_sym_RPAREN,
    ACTIONS(868), 2,
      sym__operand_separator,
      anon_sym_COMMA,
    STATE(448), 2,
      sym__block_comment,
      aux_sym_operands_repeat1,
  [23614] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(871), 1,
      anon_sym_DQUOTE,
    STATE(449), 1,
      sym__block_comment,
    STATE(452), 1,
      aux_sym_string_repeat1,
    ACTIONS(856), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23634] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(749), 1,
      anon_sym_RPAREN,
    ACTIONS(873), 1,
      aux_sym__whitespace_token1,
    ACTIONS(876), 1,
      anon_sym_COMMA,
    STATE(450), 2,
      sym__block_comment,
      aux_sym_macro_parameters_repeat1,
  [23654] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(732), 1,
      anon_sym_RPAREN,
    ACTIONS(862), 1,
      anon_sym_COMMA,
    ACTIONS(879), 1,
      sym__operand_separator,
    STATE(448), 1,
      aux_sym_operands_repeat1,
    STATE(451), 1,
      sym__block_comment,
  [23676] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(881), 1,
      anon_sym_DQUOTE,
    STATE(452), 1,
      sym__block_comment,
    STATE(453), 1,
      aux_sym_string_repeat1,
    ACTIONS(856), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23696] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(883), 1,
      anon_sym_DQUOTE,
    ACTIONS(885), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
    STATE(453), 2,
      sym__block_comment,
      aux_sym_string_repeat1,
  [23714] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(888), 1,
      aux_sym__whitespace_token1,
    ACTIONS(890), 1,
      anon_sym_RPAREN,
    ACTIONS(892), 1,
      sym_macro_parameter,
    STATE(454), 1,
      sym__block_comment,
    STATE(493), 1,
      sym_macro_parameters,
  [23736] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(701), 1,
      anon_sym_RPAREN,
    ACTIONS(852), 1,
      anon_sym_COMMA,
    ACTIONS(894), 1,
      aux_sym__whitespace_token1,
    STATE(441), 1,
      aux_sym_macro_parameters_repeat1,
    STATE(455), 1,
      sym__block_comment,
  [23758] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(892), 1,
      sym_macro_parameter,
    ACTIONS(897), 1,
      aux_sym__whitespace_token1,
    ACTIONS(899), 1,
      anon_sym_RPAREN,
    STATE(456), 1,
      sym__block_comment,
    STATE(488), 1,
      sym_macro_parameters,
  [23780] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(901), 1,
      anon_sym_DQUOTE,
    STATE(444), 1,
      aux_sym_string_repeat1,
    STATE(457), 1,
      sym__block_comment,
    ACTIONS(856), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23800] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(903), 1,
      anon_sym_DQUOTE,
    STATE(443), 1,
      aux_sym_string_repeat1,
    STATE(458), 1,
      sym__block_comment,
    ACTIONS(856), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23820] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(459), 1,
      sym__block_comment,
    ACTIONS(905), 3,
      sym__line_separator,
      sym__inline_end_comment,
      ts_builtin_sym_end,
  [23835] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(460), 1,
      sym__block_comment,
    ACTIONS(667), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23850] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    ACTIONS(907), 1,
      anon_sym_RPAREN,
    ACTIONS(909), 1,
      sym_assignment_operator,
    STATE(461), 1,
      sym__block_comment,
  [23869] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(911), 1,
      anon_sym_LPAREN,
    ACTIONS(913), 1,
      sym_macro_parameter,
    STATE(423), 1,
      sym_macro_parameters,
    STATE(462), 1,
      sym__block_comment,
  [23888] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(463), 1,
      sym__block_comment,
    ACTIONS(915), 3,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      sym__escape_sequence,
  [23903] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(764), 1,
      aux_sym__whitespace_token1,
    STATE(464), 1,
      sym__block_comment,
    ACTIONS(766), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23920] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    ACTIONS(909), 1,
      sym_assignment_operator,
    ACTIONS(917), 1,
      anon_sym_RPAREN,
    STATE(465), 1,
      sym__block_comment,
  [23939] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(608), 1,
      aux_sym__immediate_block_comment_token1,
    ACTIONS(919), 1,
      aux_sym__whitespace_token1,
    STATE(466), 1,
      sym__block_comment,
    STATE(506), 1,
      sym__immediate_block_comment,
  [23958] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(921), 1,
      ts_builtin_sym_end,
    STATE(467), 1,
      sym__block_comment,
    ACTIONS(923), 2,
      sym__line_separator,
      sym__inline_end_comment,
  [23975] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    ACTIONS(909), 1,
      sym_assignment_operator,
    ACTIONS(925), 1,
      anon_sym_RPAREN,
    STATE(468), 1,
      sym__block_comment,
  [23994] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(796), 1,
      ts_builtin_sym_end,
    STATE(469), 1,
      sym__block_comment,
    ACTIONS(923), 2,
      sym__line_separator,
      sym__inline_end_comment,
  [24011] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(470), 1,
      sym__block_comment,
    ACTIONS(681), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [24026] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(747), 1,
      aux_sym__whitespace_token1,
    STATE(471), 1,
      sym__block_comment,
    ACTIONS(749), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [24043] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    ACTIONS(909), 1,
      sym_assignment_operator,
    ACTIONS(927), 1,
      anon_sym_RPAREN,
    STATE(472), 1,
      sym__block_comment,
  [24062] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(473), 1,
      sym__block_comment,
    ACTIONS(677), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [24077] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(474), 1,
      sym__block_comment,
    ACTIONS(776), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [24092] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    ACTIONS(909), 1,
      sym_assignment_operator,
    ACTIONS(929), 1,
      anon_sym_RPAREN,
    STATE(475), 1,
      sym__block_comment,
  [24111] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(931), 1,
      aux_sym__whitespace_token1,
    ACTIONS(933), 1,
      aux_sym__immediate_block_comment_token1,
    STATE(27), 1,
      sym__immediate_block_comment,
    STATE(476), 1,
      sym__block_comment,
  [24130] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(477), 1,
      sym__block_comment,
    ACTIONS(935), 2,
      aux_sym__whitespace_token1,
      aux_sym__immediate_block_comment_token1,
  [24144] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
    STATE(378), 1,
      sym_string,
    STATE(478), 1,
      sym__block_comment,
  [24160] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(937), 1,
      anon_sym_COMMA,
    ACTIONS(939), 1,
      sym_macro_parameter,
    STATE(479), 1,
      sym__block_comment,
  [24176] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(909), 1,
      sym_assignment_operator,
    ACTIONS(941), 1,
      anon_sym_LPAREN,
    STATE(480), 1,
      sym__block_comment,
  [24192] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(481), 1,
      sym__block_comment,
    ACTIONS(237), 2,
      anon_sym_DQUOTE,
      sym_macro_name,
  [24206] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(482), 1,
      sym__block_comment,
    ACTIONS(943), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [24220] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(483), 1,
      sym__block_comment,
    ACTIONS(945), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [24234] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(484), 1,
      sym__block_comment,
    ACTIONS(905), 2,
      ts_builtin_sym_end,
      aux_sym__statement_token1,
  [24248] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(786), 1,
      aux_sym__statement_token1,
    STATE(485), 1,
      sym__block_comment,
  [24264] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(786), 1,
      aux_sym__statement_token1,
    ACTIONS(796), 1,
      ts_builtin_sym_end,
    STATE(486), 1,
      sym__block_comment,
  [24280] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(487), 1,
      sym__block_comment,
    ACTIONS(947), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [24294] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(949), 1,
      aux_sym__whitespace_token1,
    ACTIONS(951), 1,
      anon_sym_RPAREN,
    STATE(488), 1,
      sym__block_comment,
  [24310] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(489), 1,
      sym__block_comment,
    ACTIONS(953), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [24324] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(955), 1,
      anon_sym_COMMA,
    ACTIONS(957), 1,
      sym_macro_parameter,
    STATE(490), 1,
      sym__block_comment,
  [24340] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(491), 1,
      sym__block_comment,
    ACTIONS(959), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [24354] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    STATE(492), 1,
      sym__block_comment,
    ACTIONS(923), 2,
      sym__line_separator,
      sym__inline_end_comment,
  [24368] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(961), 1,
      aux_sym__whitespace_token1,
    ACTIONS(963), 1,
      anon_sym_RPAREN,
    STATE(493), 1,
      sym__block_comment,
  [24384] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    ACTIONS(909), 1,
      sym_assignment_operator,
    STATE(494), 1,
      sym__block_comment,
  [24400] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(533), 1,
      anon_sym_LPAREN,
    ACTIONS(909), 1,
      sym_assignment_operator,
    STATE(495), 1,
      sym__block_comment,
  [24416] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(909), 1,
      sym_assignment_operator,
    ACTIONS(965), 1,
      anon_sym_LPAREN,
    STATE(496), 1,
      sym__block_comment,
  [24432] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    ACTIONS(909), 1,
      sym_assignment_operator,
    STATE(497), 1,
      sym__block_comment,
  [24448] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(465), 1,
      anon_sym_LPAREN,
    ACTIONS(909), 1,
      sym_assignment_operator,
    STATE(498), 1,
      sym__block_comment,
  [24464] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(967), 1,
      anon_sym_RPAREN,
    STATE(499), 1,
      sym__block_comment,
  [24477] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(969), 1,
      anon_sym_SQUOTE,
    STATE(500), 1,
      sym__block_comment,
  [24490] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(971), 1,
      anon_sym_SQUOTE,
    STATE(501), 1,
      sym__block_comment,
  [24503] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(973), 1,
      anon_sym_RPAREN,
    STATE(502), 1,
      sym__block_comment,
  [24516] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(921), 1,
      ts_builtin_sym_end,
    STATE(503), 1,
      sym__block_comment,
  [24529] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(975), 1,
      ts_builtin_sym_end,
    STATE(504), 1,
      sym__block_comment,
  [24542] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(977), 1,
      anon_sym_RPAREN,
    STATE(505), 1,
      sym__block_comment,
  [24555] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(979), 1,
      sym_macro_name,
    STATE(506), 1,
      sym__block_comment,
  [24568] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(981), 1,
      anon_sym_RPAREN,
    STATE(507), 1,
      sym__block_comment,
  [24581] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(983), 1,
      anon_sym_SQUOTE,
    STATE(508), 1,
      sym__block_comment,
  [24594] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(985), 1,
      anon_sym_RPAREN,
    STATE(509), 1,
      sym__block_comment,
  [24607] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(939), 1,
      sym_macro_parameter,
    STATE(510), 1,
      sym__block_comment,
  [24620] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(987), 1,
      anon_sym_RPAREN,
    STATE(511), 1,
      sym__block_comment,
  [24633] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(989), 1,
      sym_macro_parameter,
    STATE(512), 1,
      sym__block_comment,
  [24646] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(991), 1,
      anon_sym_RPAREN,
    STATE(513), 1,
      sym__block_comment,
  [24659] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(993), 1,
      anon_sym_RPAREN,
    STATE(514), 1,
      sym__block_comment,
  [24672] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(796), 1,
      ts_builtin_sym_end,
    STATE(515), 1,
      sym__block_comment,
  [24685] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(995), 1,
      anon_sym_RPAREN,
    STATE(516), 1,
      sym__block_comment,
  [24698] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(997), 1,
      anon_sym_COMMA,
    STATE(517), 1,
      sym__block_comment,
  [24711] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(999), 1,
      anon_sym_LPAREN,
    STATE(518), 1,
      sym__block_comment,
  [24724] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1001), 1,
      anon_sym_SQUOTE,
    STATE(519), 1,
      sym__block_comment,
  [24737] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1003), 1,
      anon_sym_RPAREN,
    STATE(520), 1,
      sym__block_comment,
  [24750] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1005), 1,
      anon_sym_RPAREN,
    STATE(521), 1,
      sym__block_comment,
  [24763] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1007), 1,
      anon_sym_RPAREN,
    STATE(522), 1,
      sym__block_comment,
  [24776] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1009), 1,
      sym_macro_parameter,
    STATE(523), 1,
      sym__block_comment,
  [24789] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1011), 1,
      anon_sym_RPAREN,
    STATE(524), 1,
      sym__block_comment,
  [24802] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1013), 1,
      anon_sym_RPAREN,
    STATE(525), 1,
      sym__block_comment,
  [24815] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1015), 1,
      anon_sym_SQUOTE,
    STATE(526), 1,
      sym__block_comment,
  [24828] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1017), 1,
      anon_sym_LPAREN,
    STATE(527), 1,
      sym__block_comment,
  [24841] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1019), 1,
      anon_sym_RPAREN,
    STATE(528), 1,
      sym__block_comment,
  [24854] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1021), 1,
      anon_sym_LPAREN,
    STATE(529), 1,
      sym__block_comment,
  [24867] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(786), 1,
      aux_sym__statement_token1,
    STATE(530), 1,
      sym__block_comment,
  [24880] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1023), 1,
      anon_sym_LPAREN,
    STATE(531), 1,
      sym__block_comment,
  [24893] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(957), 1,
      sym_macro_parameter,
    STATE(532), 1,
      sym__block_comment,
  [24906] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1025), 1,
      anon_sym_LPAREN,
    STATE(533), 1,
      sym__block_comment,
  [24919] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1027), 1,
      anon_sym_RPAREN,
    STATE(534), 1,
      sym__block_comment,
  [24932] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1029), 1,
      anon_sym_RPAREN,
    STATE(535), 1,
      sym__block_comment,
  [24945] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(27), 1,
      aux_sym__block_comment_token1,
    ACTIONS(1031), 1,
      anon_sym_RPAREN,
    STATE(536), 1,
      sym__block_comment,
  [24958] = 1,
    ACTIONS(1033), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 152,
  [SMALL_STATE(4)] = 299,
  [SMALL_STATE(5)] = 405,
  [SMALL_STATE(6)] = 513,
  [SMALL_STATE(7)] = 654,
  [SMALL_STATE(8)] = 795,
  [SMALL_STATE(9)] = 929,
  [SMALL_STATE(10)] = 1071,
  [SMALL_STATE(11)] = 1206,
  [SMALL_STATE(12)] = 1346,
  [SMALL_STATE(13)] = 1490,
  [SMALL_STATE(14)] = 1631,
  [SMALL_STATE(15)] = 1772,
  [SMALL_STATE(16)] = 1913,
  [SMALL_STATE(17)] = 2054,
  [SMALL_STATE(18)] = 2191,
  [SMALL_STATE(19)] = 2328,
  [SMALL_STATE(20)] = 2469,
  [SMALL_STATE(21)] = 2610,
  [SMALL_STATE(22)] = 2751,
  [SMALL_STATE(23)] = 2892,
  [SMALL_STATE(24)] = 3033,
  [SMALL_STATE(25)] = 3174,
  [SMALL_STATE(26)] = 3315,
  [SMALL_STATE(27)] = 3456,
  [SMALL_STATE(28)] = 3594,
  [SMALL_STATE(29)] = 3728,
  [SMALL_STATE(30)] = 3862,
  [SMALL_STATE(31)] = 3987,
  [SMALL_STATE(32)] = 4112,
  [SMALL_STATE(33)] = 4237,
  [SMALL_STATE(34)] = 4362,
  [SMALL_STATE(35)] = 4487,
  [SMALL_STATE(36)] = 4612,
  [SMALL_STATE(37)] = 4737,
  [SMALL_STATE(38)] = 4862,
  [SMALL_STATE(39)] = 4987,
  [SMALL_STATE(40)] = 5112,
  [SMALL_STATE(41)] = 5237,
  [SMALL_STATE(42)] = 5362,
  [SMALL_STATE(43)] = 5487,
  [SMALL_STATE(44)] = 5612,
  [SMALL_STATE(45)] = 5737,
  [SMALL_STATE(46)] = 5862,
  [SMALL_STATE(47)] = 5987,
  [SMALL_STATE(48)] = 6112,
  [SMALL_STATE(49)] = 6237,
  [SMALL_STATE(50)] = 6362,
  [SMALL_STATE(51)] = 6487,
  [SMALL_STATE(52)] = 6612,
  [SMALL_STATE(53)] = 6737,
  [SMALL_STATE(54)] = 6862,
  [SMALL_STATE(55)] = 6987,
  [SMALL_STATE(56)] = 7112,
  [SMALL_STATE(57)] = 7237,
  [SMALL_STATE(58)] = 7362,
  [SMALL_STATE(59)] = 7487,
  [SMALL_STATE(60)] = 7612,
  [SMALL_STATE(61)] = 7737,
  [SMALL_STATE(62)] = 7862,
  [SMALL_STATE(63)] = 7987,
  [SMALL_STATE(64)] = 8112,
  [SMALL_STATE(65)] = 8237,
  [SMALL_STATE(66)] = 8362,
  [SMALL_STATE(67)] = 8487,
  [SMALL_STATE(68)] = 8612,
  [SMALL_STATE(69)] = 8737,
  [SMALL_STATE(70)] = 8862,
  [SMALL_STATE(71)] = 8987,
  [SMALL_STATE(72)] = 9112,
  [SMALL_STATE(73)] = 9237,
  [SMALL_STATE(74)] = 9362,
  [SMALL_STATE(75)] = 9487,
  [SMALL_STATE(76)] = 9612,
  [SMALL_STATE(77)] = 9737,
  [SMALL_STATE(78)] = 9862,
  [SMALL_STATE(79)] = 9987,
  [SMALL_STATE(80)] = 10112,
  [SMALL_STATE(81)] = 10237,
  [SMALL_STATE(82)] = 10362,
  [SMALL_STATE(83)] = 10487,
  [SMALL_STATE(84)] = 10612,
  [SMALL_STATE(85)] = 10737,
  [SMALL_STATE(86)] = 10862,
  [SMALL_STATE(87)] = 10987,
  [SMALL_STATE(88)] = 11112,
  [SMALL_STATE(89)] = 11237,
  [SMALL_STATE(90)] = 11362,
  [SMALL_STATE(91)] = 11487,
  [SMALL_STATE(92)] = 11612,
  [SMALL_STATE(93)] = 11737,
  [SMALL_STATE(94)] = 11862,
  [SMALL_STATE(95)] = 11987,
  [SMALL_STATE(96)] = 12112,
  [SMALL_STATE(97)] = 12237,
  [SMALL_STATE(98)] = 12362,
  [SMALL_STATE(99)] = 12487,
  [SMALL_STATE(100)] = 12612,
  [SMALL_STATE(101)] = 12737,
  [SMALL_STATE(102)] = 12862,
  [SMALL_STATE(103)] = 12922,
  [SMALL_STATE(104)] = 12982,
  [SMALL_STATE(105)] = 13042,
  [SMALL_STATE(106)] = 13099,
  [SMALL_STATE(107)] = 13156,
  [SMALL_STATE(108)] = 13213,
  [SMALL_STATE(109)] = 13270,
  [SMALL_STATE(110)] = 13327,
  [SMALL_STATE(111)] = 13365,
  [SMALL_STATE(112)] = 13402,
  [SMALL_STATE(113)] = 13441,
  [SMALL_STATE(114)] = 13478,
  [SMALL_STATE(115)] = 13517,
  [SMALL_STATE(116)] = 13554,
  [SMALL_STATE(117)] = 13593,
  [SMALL_STATE(118)] = 13630,
  [SMALL_STATE(119)] = 13669,
  [SMALL_STATE(120)] = 13706,
  [SMALL_STATE(121)] = 13745,
  [SMALL_STATE(122)] = 13782,
  [SMALL_STATE(123)] = 13821,
  [SMALL_STATE(124)] = 13858,
  [SMALL_STATE(125)] = 13897,
  [SMALL_STATE(126)] = 13936,
  [SMALL_STATE(127)] = 13975,
  [SMALL_STATE(128)] = 14014,
  [SMALL_STATE(129)] = 14053,
  [SMALL_STATE(130)] = 14090,
  [SMALL_STATE(131)] = 14129,
  [SMALL_STATE(132)] = 14166,
  [SMALL_STATE(133)] = 14203,
  [SMALL_STATE(134)] = 14244,
  [SMALL_STATE(135)] = 14283,
  [SMALL_STATE(136)] = 14320,
  [SMALL_STATE(137)] = 14357,
  [SMALL_STATE(138)] = 14394,
  [SMALL_STATE(139)] = 14431,
  [SMALL_STATE(140)] = 14468,
  [SMALL_STATE(141)] = 14507,
  [SMALL_STATE(142)] = 14544,
  [SMALL_STATE(143)] = 14581,
  [SMALL_STATE(144)] = 14618,
  [SMALL_STATE(145)] = 14655,
  [SMALL_STATE(146)] = 14692,
  [SMALL_STATE(147)] = 14729,
  [SMALL_STATE(148)] = 14766,
  [SMALL_STATE(149)] = 14803,
  [SMALL_STATE(150)] = 14840,
  [SMALL_STATE(151)] = 14879,
  [SMALL_STATE(152)] = 14918,
  [SMALL_STATE(153)] = 14957,
  [SMALL_STATE(154)] = 14996,
  [SMALL_STATE(155)] = 15035,
  [SMALL_STATE(156)] = 15072,
  [SMALL_STATE(157)] = 15108,
  [SMALL_STATE(158)] = 15143,
  [SMALL_STATE(159)] = 15180,
  [SMALL_STATE(160)] = 15215,
  [SMALL_STATE(161)] = 15250,
  [SMALL_STATE(162)] = 15285,
  [SMALL_STATE(163)] = 15320,
  [SMALL_STATE(164)] = 15357,
  [SMALL_STATE(165)] = 15394,
  [SMALL_STATE(166)] = 15431,
  [SMALL_STATE(167)] = 15468,
  [SMALL_STATE(168)] = 15505,
  [SMALL_STATE(169)] = 15542,
  [SMALL_STATE(170)] = 15579,
  [SMALL_STATE(171)] = 15616,
  [SMALL_STATE(172)] = 15653,
  [SMALL_STATE(173)] = 15688,
  [SMALL_STATE(174)] = 15723,
  [SMALL_STATE(175)] = 15758,
  [SMALL_STATE(176)] = 15793,
  [SMALL_STATE(177)] = 15830,
  [SMALL_STATE(178)] = 15867,
  [SMALL_STATE(179)] = 15902,
  [SMALL_STATE(180)] = 15939,
  [SMALL_STATE(181)] = 15974,
  [SMALL_STATE(182)] = 16011,
  [SMALL_STATE(183)] = 16046,
  [SMALL_STATE(184)] = 16081,
  [SMALL_STATE(185)] = 16118,
  [SMALL_STATE(186)] = 16153,
  [SMALL_STATE(187)] = 16190,
  [SMALL_STATE(188)] = 16225,
  [SMALL_STATE(189)] = 16262,
  [SMALL_STATE(190)] = 16297,
  [SMALL_STATE(191)] = 16334,
  [SMALL_STATE(192)] = 16369,
  [SMALL_STATE(193)] = 16406,
  [SMALL_STATE(194)] = 16441,
  [SMALL_STATE(195)] = 16480,
  [SMALL_STATE(196)] = 16515,
  [SMALL_STATE(197)] = 16550,
  [SMALL_STATE(198)] = 16585,
  [SMALL_STATE(199)] = 16620,
  [SMALL_STATE(200)] = 16655,
  [SMALL_STATE(201)] = 16690,
  [SMALL_STATE(202)] = 16725,
  [SMALL_STATE(203)] = 16760,
  [SMALL_STATE(204)] = 16793,
  [SMALL_STATE(205)] = 16826,
  [SMALL_STATE(206)] = 16859,
  [SMALL_STATE(207)] = 16892,
  [SMALL_STATE(208)] = 16925,
  [SMALL_STATE(209)] = 16958,
  [SMALL_STATE(210)] = 16993,
  [SMALL_STATE(211)] = 17026,
  [SMALL_STATE(212)] = 17061,
  [SMALL_STATE(213)] = 17094,
  [SMALL_STATE(214)] = 17127,
  [SMALL_STATE(215)] = 17162,
  [SMALL_STATE(216)] = 17195,
  [SMALL_STATE(217)] = 17230,
  [SMALL_STATE(218)] = 17263,
  [SMALL_STATE(219)] = 17298,
  [SMALL_STATE(220)] = 17331,
  [SMALL_STATE(221)] = 17366,
  [SMALL_STATE(222)] = 17399,
  [SMALL_STATE(223)] = 17434,
  [SMALL_STATE(224)] = 17467,
  [SMALL_STATE(225)] = 17502,
  [SMALL_STATE(226)] = 17535,
  [SMALL_STATE(227)] = 17570,
  [SMALL_STATE(228)] = 17603,
  [SMALL_STATE(229)] = 17640,
  [SMALL_STATE(230)] = 17673,
  [SMALL_STATE(231)] = 17706,
  [SMALL_STATE(232)] = 17741,
  [SMALL_STATE(233)] = 17774,
  [SMALL_STATE(234)] = 17807,
  [SMALL_STATE(235)] = 17842,
  [SMALL_STATE(236)] = 17877,
  [SMALL_STATE(237)] = 17912,
  [SMALL_STATE(238)] = 17947,
  [SMALL_STATE(239)] = 17982,
  [SMALL_STATE(240)] = 18017,
  [SMALL_STATE(241)] = 18052,
  [SMALL_STATE(242)] = 18087,
  [SMALL_STATE(243)] = 18122,
  [SMALL_STATE(244)] = 18155,
  [SMALL_STATE(245)] = 18188,
  [SMALL_STATE(246)] = 18221,
  [SMALL_STATE(247)] = 18254,
  [SMALL_STATE(248)] = 18287,
  [SMALL_STATE(249)] = 18320,
  [SMALL_STATE(250)] = 18352,
  [SMALL_STATE(251)] = 18384,
  [SMALL_STATE(252)] = 18418,
  [SMALL_STATE(253)] = 18450,
  [SMALL_STATE(254)] = 18482,
  [SMALL_STATE(255)] = 18513,
  [SMALL_STATE(256)] = 18561,
  [SMALL_STATE(257)] = 18590,
  [SMALL_STATE(258)] = 18621,
  [SMALL_STATE(259)] = 18652,
  [SMALL_STATE(260)] = 18681,
  [SMALL_STATE(261)] = 18712,
  [SMALL_STATE(262)] = 18741,
  [SMALL_STATE(263)] = 18772,
  [SMALL_STATE(264)] = 18801,
  [SMALL_STATE(265)] = 18832,
  [SMALL_STATE(266)] = 18861,
  [SMALL_STATE(267)] = 18892,
  [SMALL_STATE(268)] = 18921,
  [SMALL_STATE(269)] = 18952,
  [SMALL_STATE(270)] = 18981,
  [SMALL_STATE(271)] = 19012,
  [SMALL_STATE(272)] = 19041,
  [SMALL_STATE(273)] = 19074,
  [SMALL_STATE(274)] = 19103,
  [SMALL_STATE(275)] = 19134,
  [SMALL_STATE(276)] = 19163,
  [SMALL_STATE(277)] = 19192,
  [SMALL_STATE(278)] = 19221,
  [SMALL_STATE(279)] = 19250,
  [SMALL_STATE(280)] = 19279,
  [SMALL_STATE(281)] = 19308,
  [SMALL_STATE(282)] = 19337,
  [SMALL_STATE(283)] = 19366,
  [SMALL_STATE(284)] = 19397,
  [SMALL_STATE(285)] = 19428,
  [SMALL_STATE(286)] = 19459,
  [SMALL_STATE(287)] = 19490,
  [SMALL_STATE(288)] = 19521,
  [SMALL_STATE(289)] = 19552,
  [SMALL_STATE(290)] = 19583,
  [SMALL_STATE(291)] = 19614,
  [SMALL_STATE(292)] = 19645,
  [SMALL_STATE(293)] = 19676,
  [SMALL_STATE(294)] = 19705,
  [SMALL_STATE(295)] = 19734,
  [SMALL_STATE(296)] = 19763,
  [SMALL_STATE(297)] = 19792,
  [SMALL_STATE(298)] = 19821,
  [SMALL_STATE(299)] = 19850,
  [SMALL_STATE(300)] = 19881,
  [SMALL_STATE(301)] = 19912,
  [SMALL_STATE(302)] = 19943,
  [SMALL_STATE(303)] = 19974,
  [SMALL_STATE(304)] = 20005,
  [SMALL_STATE(305)] = 20036,
  [SMALL_STATE(306)] = 20067,
  [SMALL_STATE(307)] = 20098,
  [SMALL_STATE(308)] = 20129,
  [SMALL_STATE(309)] = 20160,
  [SMALL_STATE(310)] = 20189,
  [SMALL_STATE(311)] = 20218,
  [SMALL_STATE(312)] = 20249,
  [SMALL_STATE(313)] = 20280,
  [SMALL_STATE(314)] = 20322,
  [SMALL_STATE(315)] = 20352,
  [SMALL_STATE(316)] = 20379,
  [SMALL_STATE(317)] = 20406,
  [SMALL_STATE(318)] = 20437,
  [SMALL_STATE(319)] = 20464,
  [SMALL_STATE(320)] = 20491,
  [SMALL_STATE(321)] = 20520,
  [SMALL_STATE(322)] = 20549,
  [SMALL_STATE(323)] = 20578,
  [SMALL_STATE(324)] = 20607,
  [SMALL_STATE(325)] = 20636,
  [SMALL_STATE(326)] = 20665,
  [SMALL_STATE(327)] = 20694,
  [SMALL_STATE(328)] = 20723,
  [SMALL_STATE(329)] = 20752,
  [SMALL_STATE(330)] = 20779,
  [SMALL_STATE(331)] = 20806,
  [SMALL_STATE(332)] = 20833,
  [SMALL_STATE(333)] = 20860,
  [SMALL_STATE(334)] = 20889,
  [SMALL_STATE(335)] = 20916,
  [SMALL_STATE(336)] = 20943,
  [SMALL_STATE(337)] = 20970,
  [SMALL_STATE(338)] = 20999,
  [SMALL_STATE(339)] = 21030,
  [SMALL_STATE(340)] = 21057,
  [SMALL_STATE(341)] = 21084,
  [SMALL_STATE(342)] = 21113,
  [SMALL_STATE(343)] = 21140,
  [SMALL_STATE(344)] = 21167,
  [SMALL_STATE(345)] = 21194,
  [SMALL_STATE(346)] = 21223,
  [SMALL_STATE(347)] = 21250,
  [SMALL_STATE(348)] = 21277,
  [SMALL_STATE(349)] = 21306,
  [SMALL_STATE(350)] = 21333,
  [SMALL_STATE(351)] = 21362,
  [SMALL_STATE(352)] = 21389,
  [SMALL_STATE(353)] = 21418,
  [SMALL_STATE(354)] = 21445,
  [SMALL_STATE(355)] = 21474,
  [SMALL_STATE(356)] = 21501,
  [SMALL_STATE(357)] = 21530,
  [SMALL_STATE(358)] = 21557,
  [SMALL_STATE(359)] = 21586,
  [SMALL_STATE(360)] = 21613,
  [SMALL_STATE(361)] = 21644,
  [SMALL_STATE(362)] = 21671,
  [SMALL_STATE(363)] = 21697,
  [SMALL_STATE(364)] = 21737,
  [SMALL_STATE(365)] = 21769,
  [SMALL_STATE(366)] = 21807,
  [SMALL_STATE(367)] = 21847,
  [SMALL_STATE(368)] = 21876,
  [SMALL_STATE(369)] = 21903,
  [SMALL_STATE(370)] = 21930,
  [SMALL_STATE(371)] = 21959,
  [SMALL_STATE(372)] = 21993,
  [SMALL_STATE(373)] = 22017,
  [SMALL_STATE(374)] = 22042,
  [SMALL_STATE(375)] = 22063,
  [SMALL_STATE(376)] = 22086,
  [SMALL_STATE(377)] = 22107,
  [SMALL_STATE(378)] = 22128,
  [SMALL_STATE(379)] = 22151,
  [SMALL_STATE(380)] = 22172,
  [SMALL_STATE(381)] = 22195,
  [SMALL_STATE(382)] = 22218,
  [SMALL_STATE(383)] = 22239,
  [SMALL_STATE(384)] = 22260,
  [SMALL_STATE(385)] = 22286,
  [SMALL_STATE(386)] = 22310,
  [SMALL_STATE(387)] = 22338,
  [SMALL_STATE(388)] = 22362,
  [SMALL_STATE(389)] = 22388,
  [SMALL_STATE(390)] = 22414,
  [SMALL_STATE(391)] = 22438,
  [SMALL_STATE(392)] = 22466,
  [SMALL_STATE(393)] = 22488,
  [SMALL_STATE(394)] = 22516,
  [SMALL_STATE(395)] = 22542,
  [SMALL_STATE(396)] = 22570,
  [SMALL_STATE(397)] = 22592,
  [SMALL_STATE(398)] = 22618,
  [SMALL_STATE(399)] = 22642,
  [SMALL_STATE(400)] = 22663,
  [SMALL_STATE(401)] = 22684,
  [SMALL_STATE(402)] = 22703,
  [SMALL_STATE(403)] = 22722,
  [SMALL_STATE(404)] = 22747,
  [SMALL_STATE(405)] = 22766,
  [SMALL_STATE(406)] = 22785,
  [SMALL_STATE(407)] = 22806,
  [SMALL_STATE(408)] = 22827,
  [SMALL_STATE(409)] = 22846,
  [SMALL_STATE(410)] = 22867,
  [SMALL_STATE(411)] = 22891,
  [SMALL_STATE(412)] = 22911,
  [SMALL_STATE(413)] = 22933,
  [SMALL_STATE(414)] = 22957,
  [SMALL_STATE(415)] = 22980,
  [SMALL_STATE(416)] = 22997,
  [SMALL_STATE(417)] = 23014,
  [SMALL_STATE(418)] = 23031,
  [SMALL_STATE(419)] = 23048,
  [SMALL_STATE(420)] = 23065,
  [SMALL_STATE(421)] = 23082,
  [SMALL_STATE(422)] = 23099,
  [SMALL_STATE(423)] = 23120,
  [SMALL_STATE(424)] = 23137,
  [SMALL_STATE(425)] = 23154,
  [SMALL_STATE(426)] = 23171,
  [SMALL_STATE(427)] = 23188,
  [SMALL_STATE(428)] = 23211,
  [SMALL_STATE(429)] = 23232,
  [SMALL_STATE(430)] = 23255,
  [SMALL_STATE(431)] = 23272,
  [SMALL_STATE(432)] = 23289,
  [SMALL_STATE(433)] = 23312,
  [SMALL_STATE(434)] = 23335,
  [SMALL_STATE(435)] = 23352,
  [SMALL_STATE(436)] = 23369,
  [SMALL_STATE(437)] = 23386,
  [SMALL_STATE(438)] = 23403,
  [SMALL_STATE(439)] = 23420,
  [SMALL_STATE(440)] = 23437,
  [SMALL_STATE(441)] = 23454,
  [SMALL_STATE(442)] = 23476,
  [SMALL_STATE(443)] = 23494,
  [SMALL_STATE(444)] = 23514,
  [SMALL_STATE(445)] = 23534,
  [SMALL_STATE(446)] = 23554,
  [SMALL_STATE(447)] = 23576,
  [SMALL_STATE(448)] = 23596,
  [SMALL_STATE(449)] = 23614,
  [SMALL_STATE(450)] = 23634,
  [SMALL_STATE(451)] = 23654,
  [SMALL_STATE(452)] = 23676,
  [SMALL_STATE(453)] = 23696,
  [SMALL_STATE(454)] = 23714,
  [SMALL_STATE(455)] = 23736,
  [SMALL_STATE(456)] = 23758,
  [SMALL_STATE(457)] = 23780,
  [SMALL_STATE(458)] = 23800,
  [SMALL_STATE(459)] = 23820,
  [SMALL_STATE(460)] = 23835,
  [SMALL_STATE(461)] = 23850,
  [SMALL_STATE(462)] = 23869,
  [SMALL_STATE(463)] = 23888,
  [SMALL_STATE(464)] = 23903,
  [SMALL_STATE(465)] = 23920,
  [SMALL_STATE(466)] = 23939,
  [SMALL_STATE(467)] = 23958,
  [SMALL_STATE(468)] = 23975,
  [SMALL_STATE(469)] = 23994,
  [SMALL_STATE(470)] = 24011,
  [SMALL_STATE(471)] = 24026,
  [SMALL_STATE(472)] = 24043,
  [SMALL_STATE(473)] = 24062,
  [SMALL_STATE(474)] = 24077,
  [SMALL_STATE(475)] = 24092,
  [SMALL_STATE(476)] = 24111,
  [SMALL_STATE(477)] = 24130,
  [SMALL_STATE(478)] = 24144,
  [SMALL_STATE(479)] = 24160,
  [SMALL_STATE(480)] = 24176,
  [SMALL_STATE(481)] = 24192,
  [SMALL_STATE(482)] = 24206,
  [SMALL_STATE(483)] = 24220,
  [SMALL_STATE(484)] = 24234,
  [SMALL_STATE(485)] = 24248,
  [SMALL_STATE(486)] = 24264,
  [SMALL_STATE(487)] = 24280,
  [SMALL_STATE(488)] = 24294,
  [SMALL_STATE(489)] = 24310,
  [SMALL_STATE(490)] = 24324,
  [SMALL_STATE(491)] = 24340,
  [SMALL_STATE(492)] = 24354,
  [SMALL_STATE(493)] = 24368,
  [SMALL_STATE(494)] = 24384,
  [SMALL_STATE(495)] = 24400,
  [SMALL_STATE(496)] = 24416,
  [SMALL_STATE(497)] = 24432,
  [SMALL_STATE(498)] = 24448,
  [SMALL_STATE(499)] = 24464,
  [SMALL_STATE(500)] = 24477,
  [SMALL_STATE(501)] = 24490,
  [SMALL_STATE(502)] = 24503,
  [SMALL_STATE(503)] = 24516,
  [SMALL_STATE(504)] = 24529,
  [SMALL_STATE(505)] = 24542,
  [SMALL_STATE(506)] = 24555,
  [SMALL_STATE(507)] = 24568,
  [SMALL_STATE(508)] = 24581,
  [SMALL_STATE(509)] = 24594,
  [SMALL_STATE(510)] = 24607,
  [SMALL_STATE(511)] = 24620,
  [SMALL_STATE(512)] = 24633,
  [SMALL_STATE(513)] = 24646,
  [SMALL_STATE(514)] = 24659,
  [SMALL_STATE(515)] = 24672,
  [SMALL_STATE(516)] = 24685,
  [SMALL_STATE(517)] = 24698,
  [SMALL_STATE(518)] = 24711,
  [SMALL_STATE(519)] = 24724,
  [SMALL_STATE(520)] = 24737,
  [SMALL_STATE(521)] = 24750,
  [SMALL_STATE(522)] = 24763,
  [SMALL_STATE(523)] = 24776,
  [SMALL_STATE(524)] = 24789,
  [SMALL_STATE(525)] = 24802,
  [SMALL_STATE(526)] = 24815,
  [SMALL_STATE(527)] = 24828,
  [SMALL_STATE(528)] = 24841,
  [SMALL_STATE(529)] = 24854,
  [SMALL_STATE(530)] = 24867,
  [SMALL_STATE(531)] = 24880,
  [SMALL_STATE(532)] = 24893,
  [SMALL_STATE(533)] = 24906,
  [SMALL_STATE(534)] = 24919,
  [SMALL_STATE(535)] = 24932,
  [SMALL_STATE(536)] = 24945,
  [SMALL_STATE(537)] = 24958,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(537),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 2, 0, 4),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(484),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(466),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(409),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(477),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(406),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(371),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2, 0, 8),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 3, 0, 13),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat2, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_directive, 2, 0, 4),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 1, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label, 1, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 2, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label, 2, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__immediate_block_comment, 1, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__immediate_block_comment, 1, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 10),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 10),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 10),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 10),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 10),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 10),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 10),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 10),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 10),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 10),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 10),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 10),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 10),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 10),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__equality_expression, 3, 0, 20),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__equality_expression, 3, 0, 20),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relational_expression, 3, 0, 20),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__relational_expression, 3, 0, 20),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_multiplicative_expression, 1, 0, 10),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_multiplicative_expression, 1, 0, 10),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_multiplicative_expression, 1, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_multiplicative_expression, 1, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assignment_expression, 3, 0, 20),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__assignment_expression, 3, 0, 20),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 12),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, 0, 12),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__additive_expression, 3, 0, 20),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__additive_expression, 3, 0, 20),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiplicative_expression, 3, 0, 20),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiplicative_expression, 3, 0, 20),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relocation_expression, 4, 0, 21),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relocation_expression, 4, 0, 21),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 4, 0, 22),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 4, 0, 22),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 4, 0, 23),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 4, 0, 23),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 14),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 3, 0, 14),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shift_expression, 3, 0, 20),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shift_expression, 3, 0, 20),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 10),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 10),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_expression, 1, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_expression, 1, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 10),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 10),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal, 1, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_label_reference, 1, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_label_reference, 1, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 16),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 3, 0, 16),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 17),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 17),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logical_or_expression, 3, 0, 20),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__logical_or_expression, 3, 0, 20),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logical_and_expression, 3, 0, 20),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__logical_and_expression, 3, 0, 20),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitwise_or_expression, 3, 0, 20),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitwise_or_expression, 3, 0, 20),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitwise_xor_expression, 3, 0, 20),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitwise_xor_expression, 3, 0, 20),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitwise_and_expression, 3, 0, 20),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitwise_and_expression, 3, 0, 20),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 10),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 10),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_operand_separator, 1, 0, 0),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_operand_separator, 1, 0, 0),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 3, 0, 14),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_operands, 1, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_operands, 1, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_operands, 1, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_operands, 1, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_operands, 2, 0, 0),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_operands, 2, 0, 0),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 3, 0, 0),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 3, 0, 0),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_operands, 2, 0, 0),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_operands, 2, 0, 0),
  [605] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_string_operands, 2, 0, 0), SHIFT(478),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [614] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [617] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(517),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_operands_repeat1, 2, 0, 0),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_operands_repeat1, 2, 0, 0),
  [627] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(478),
  [630] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(481),
  [633] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(478),
  [636] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(458),
  [639] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_string_operands, 1, 0, 0), SHIFT(478),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_operands, 1, 0, 0),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_operand, 1, 0, 0),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0),
  [652] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(229),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_operands, 2, 0, 0),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 1),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 1),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_operands_repeat1, 1, 0, 0),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_operands_repeat1, 1, 0, 0),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_flag, 1, 0, 0),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_type, 1, 0, 0),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 1, 0, 8),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat3, 1, 0, 0),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat3, 1, 0, 0),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_parameters, 1, 0, 0),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_parameters, 1, 0, 0),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_operands, 3, 0, 0),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_operands, 3, 0, 0),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_parameters, 2, 0, 0),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_parameters, 2, 0, 0),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 19),
  [721] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 19), SHIFT_REPEAT(28),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 1, 0, 4),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_directive, 1, 0, 4),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2, 0, 13),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_directive, 1, 0, 4),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__numeric_directive, 1, 0, 4),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat2, 2, 0, 0),
  [744] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat2, 2, 0, 0), SHIFT_REPEAT(402),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0),
  [751] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(490),
  [754] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(532),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat3, 2, 0, 0),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat3, 2, 0, 0),
  [761] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat3, 2, 0, 0), SHIFT_REPEAT(407),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 3, 0, 0),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 3, 0, 0),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 3, 0, 6),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 3, 0, 6),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 18),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_mnemonic, 1, 0, 0),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_mnemonic, 1, 0, 0),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_mnemonic, 1, 0, 0),
  [784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_mnemonic, 1, 0, 0),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_directive, 3, 0, 11),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_directive, 3, 0, 11),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [798] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(161),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 2),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 3),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 3, 0, 11),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 7),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 9),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 5, 0, 15),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 5, 0, 6),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 5),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_directive, 3, 0, 11),
  [821] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(232),
  [824] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(280),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 2, 0, 0),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 6),
  [831] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(148),
  [834] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(318),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_directive, 4, 0, 11),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 8, 0, 24),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 15),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 6),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 24),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 15),
  [849] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_macro_parameters, 2, 0, 0), SHIFT(479),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [868] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 19), SHIFT_REPEAT(29),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [873] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(479),
  [876] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(510),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [883] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [885] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(463),
  [888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(524),
  [890] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [892] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [894] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_macro_parameters, 1, 0, 0), SHIFT(479),
  [897] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_comment, 1, 0, 0),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [915] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1, 0, 0),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 0),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_mnemonic, 1, 0, 0),
  [937] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [959] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [963] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [975] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_comment, 1, 0, 0),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__operand_separator = 0,
  ts_external_token__operator_space = 1,
  ts_external_token__line_separator = 2,
  ts_external_token__data_separator = 3,
  ts_external_token__inline_separator_comment = 4,
  ts_external_token__inline_end_comment = 5,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__operand_separator] = sym__operand_separator,
  [ts_external_token__operator_space] = sym__operator_space,
  [ts_external_token__line_separator] = sym__line_separator,
  [ts_external_token__data_separator] = sym__data_separator,
  [ts_external_token__inline_separator_comment] = sym__inline_separator_comment,
  [ts_external_token__inline_end_comment] = sym__inline_end_comment,
};

static const bool ts_external_scanner_states[7][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__operand_separator] = true,
    [ts_external_token__operator_space] = true,
    [ts_external_token__line_separator] = true,
    [ts_external_token__data_separator] = true,
    [ts_external_token__inline_separator_comment] = true,
    [ts_external_token__inline_end_comment] = true,
  },
  [2] = {
    [ts_external_token__operator_space] = true,
  },
  [3] = {
    [ts_external_token__operator_space] = true,
    [ts_external_token__line_separator] = true,
    [ts_external_token__inline_end_comment] = true,
  },
  [4] = {
    [ts_external_token__operator_space] = true,
    [ts_external_token__line_separator] = true,
    [ts_external_token__data_separator] = true,
    [ts_external_token__inline_separator_comment] = true,
    [ts_external_token__inline_end_comment] = true,
  },
  [5] = {
    [ts_external_token__operand_separator] = true,
    [ts_external_token__operator_space] = true,
    [ts_external_token__line_separator] = true,
    [ts_external_token__inline_end_comment] = true,
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
