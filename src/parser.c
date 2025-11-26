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
#define STATE_COUNT 511
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 153
#define ALIAS_COUNT 0
#define TOKEN_COUNT 90
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 27

enum ts_symbol_identifiers {
  anon_sym_SEMI = 1,
  anon_sym_CR = 2,
  anon_sym_LF = 3,
  aux_sym__statement_token1 = 4,
  aux_sym__whitespace_token1 = 5,
  sym_line_comment = 6,
  sym_block_comment = 7,
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
  sym_directive = 92,
  sym__macro_directive = 93,
  sym_macro_parameters = 94,
  sym__numeric_directive = 95,
  sym_numeric_mnemonic = 96,
  sym_numeric_operands = 97,
  sym__string_directive = 98,
  sym_string_mnemonic = 99,
  sym__string_operand = 100,
  sym__control_directive = 101,
  sym_control_mnemonic = 102,
  sym_control_operands = 103,
  sym__control_operand = 104,
  sym__control_operand_separator = 105,
  sym_section_type = 106,
  sym_option_flag = 107,
  sym_instruction = 108,
  sym_operands = 109,
  sym__operand = 110,
  sym__call_expression = 111,
  sym__assignment_expression = 112,
  sym__wrapped_assignment_expression = 113,
  sym__logical_or_expression = 114,
  sym__wrapped_logical_or_expression = 115,
  sym__logical_and_expression = 116,
  sym__wrapped_logical_and_expression = 117,
  sym__bitwise_or_expression = 118,
  sym__wrapped_bitwise_or_expression = 119,
  sym__bitwise_xor_expression = 120,
  sym__wrapped_bitwise_xor_expression = 121,
  sym__bitwise_and_expression = 122,
  sym__wrapped_bitwise_and_expression = 123,
  sym__equality_expression = 124,
  sym__wrapped_equality_expression = 125,
  sym__relational_expression = 126,
  sym__wrapped_relational_expression = 127,
  sym__shift_expression = 128,
  sym__wrapped_shift_expression = 129,
  sym__additive_expression = 130,
  sym__wrapped_additive_expression = 131,
  sym__multiplicative_expression = 132,
  sym__wrapped_multiplicative_expression = 133,
  sym__simple_expression = 134,
  sym_parenthesized_expression = 135,
  sym_unary_expression = 136,
  sym_relocation_expression = 137,
  sym_decimal = 138,
  sym_char = 139,
  sym_string = 140,
  sym__label = 141,
  sym_local_label_reference = 142,
  sym_symbol = 143,
  sym_address = 144,
  aux_sym_program_repeat1 = 145,
  aux_sym_macro_parameters_repeat1 = 146,
  aux_sym_numeric_operands_repeat1 = 147,
  aux_sym_numeric_operands_repeat2 = 148,
  aux_sym_numeric_operands_repeat3 = 149,
  aux_sym_control_operands_repeat1 = 150,
  aux_sym_operands_repeat1 = 151,
  aux_sym_string_repeat1 = 152,
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
  [sym_program] = "program",
  [sym__statement] = "_statement",
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
  [aux_sym_numeric_operands_repeat1] = "numeric_operands_repeat1",
  [aux_sym_numeric_operands_repeat2] = "numeric_operands_repeat2",
  [aux_sym_numeric_operands_repeat3] = "numeric_operands_repeat3",
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
  [sym_program] = sym_program,
  [sym__statement] = sym__statement,
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
  [aux_sym_numeric_operands_repeat1] = aux_sym_numeric_operands_repeat1,
  [aux_sym_numeric_operands_repeat2] = aux_sym_numeric_operands_repeat2,
  [aux_sym_numeric_operands_repeat3] = aux_sym_numeric_operands_repeat3,
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
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
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
  [4] = {.index = 6, .length = 1},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 2},
  [7] = {.index = 11, .length = 2},
  [8] = {.index = 13, .length = 2},
  [9] = {.index = 15, .length = 1},
  [10] = {.index = 16, .length = 2},
  [11] = {.index = 18, .length = 3},
  [12] = {.index = 21, .length = 2},
  [13] = {.index = 23, .length = 2},
  [14] = {.index = 25, .length = 2},
  [15] = {.index = 27, .length = 2},
  [16] = {.index = 29, .length = 1},
  [17] = {.index = 30, .length = 3},
  [18] = {.index = 33, .length = 1},
  [19] = {.index = 34, .length = 1},
  [20] = {.index = 35, .length = 1},
  [21] = {.index = 36, .length = 2},
  [22] = {.index = 38, .length = 3},
  [23] = {.index = 41, .length = 2},
  [24] = {.index = 43, .length = 2},
  [25] = {.index = 45, .length = 2},
  [26] = {.index = 47, .length = 3},
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
    {field_mnemonic, 0, .inherited = true},
    {field_string, 0, .inherited = true},
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
    {field_mnemonic, 0},
    {field_string, 2},
  [25] =
    {field_argument, 1},
    {field_operator, 0},
  [27] =
    {field_operand, 0},
    {field_operand, 1, .inherited = true},
  [29] =
    {field_operands, 1},
  [30] =
    {field_mnemonic, 0},
    {field_name, 2},
    {field_parameters, 4},
  [33] =
    {field_base, 1},
  [34] =
    {field_argument, 1},
  [35] =
    {field_operand, 1},
  [36] =
    {field_operand, 0, .inherited = true},
    {field_operand, 1, .inherited = true},
  [38] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [41] =
    {field_argument, 2},
    {field_type, 0},
  [43] =
    {field_base, 2},
    {field_offset, 0},
  [45] =
    {field_offset, 0},
    {field_operands, 2},
  [47] =
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
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 17,
  [20] = 18,
  [21] = 10,
  [22] = 18,
  [23] = 9,
  [24] = 17,
  [25] = 18,
  [26] = 17,
  [27] = 17,
  [28] = 18,
  [29] = 17,
  [30] = 18,
  [31] = 31,
  [32] = 32,
  [33] = 32,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 36,
  [43] = 37,
  [44] = 39,
  [45] = 40,
  [46] = 41,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 47,
  [54] = 48,
  [55] = 36,
  [56] = 37,
  [57] = 39,
  [58] = 40,
  [59] = 41,
  [60] = 47,
  [61] = 48,
  [62] = 49,
  [63] = 50,
  [64] = 51,
  [65] = 52,
  [66] = 36,
  [67] = 37,
  [68] = 39,
  [69] = 40,
  [70] = 41,
  [71] = 47,
  [72] = 48,
  [73] = 49,
  [74] = 50,
  [75] = 52,
  [76] = 36,
  [77] = 37,
  [78] = 39,
  [79] = 40,
  [80] = 41,
  [81] = 47,
  [82] = 48,
  [83] = 49,
  [84] = 50,
  [85] = 51,
  [86] = 52,
  [87] = 87,
  [88] = 36,
  [89] = 36,
  [90] = 36,
  [91] = 36,
  [92] = 36,
  [93] = 87,
  [94] = 87,
  [95] = 87,
  [96] = 49,
  [97] = 35,
  [98] = 50,
  [99] = 51,
  [100] = 35,
  [101] = 52,
  [102] = 102,
  [103] = 35,
  [104] = 35,
  [105] = 87,
  [106] = 106,
  [107] = 51,
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
  [155] = 145,
  [156] = 153,
  [157] = 113,
  [158] = 132,
  [159] = 115,
  [160] = 116,
  [161] = 117,
  [162] = 118,
  [163] = 119,
  [164] = 120,
  [165] = 121,
  [166] = 122,
  [167] = 123,
  [168] = 124,
  [169] = 125,
  [170] = 126,
  [171] = 127,
  [172] = 128,
  [173] = 129,
  [174] = 130,
  [175] = 131,
  [176] = 154,
  [177] = 133,
  [178] = 134,
  [179] = 112,
  [180] = 135,
  [181] = 136,
  [182] = 137,
  [183] = 138,
  [184] = 139,
  [185] = 140,
  [186] = 141,
  [187] = 142,
  [188] = 143,
  [189] = 144,
  [190] = 146,
  [191] = 147,
  [192] = 148,
  [193] = 149,
  [194] = 150,
  [195] = 151,
  [196] = 152,
  [197] = 114,
  [198] = 145,
  [199] = 132,
  [200] = 118,
  [201] = 119,
  [202] = 120,
  [203] = 121,
  [204] = 122,
  [205] = 123,
  [206] = 124,
  [207] = 125,
  [208] = 126,
  [209] = 127,
  [210] = 138,
  [211] = 211,
  [212] = 139,
  [213] = 140,
  [214] = 114,
  [215] = 141,
  [216] = 142,
  [217] = 143,
  [218] = 144,
  [219] = 117,
  [220] = 147,
  [221] = 128,
  [222] = 148,
  [223] = 149,
  [224] = 150,
  [225] = 137,
  [226] = 129,
  [227] = 130,
  [228] = 131,
  [229] = 154,
  [230] = 133,
  [231] = 134,
  [232] = 112,
  [233] = 135,
  [234] = 136,
  [235] = 115,
  [236] = 151,
  [237] = 152,
  [238] = 113,
  [239] = 153,
  [240] = 116,
  [241] = 146,
  [242] = 138,
  [243] = 113,
  [244] = 152,
  [245] = 245,
  [246] = 153,
  [247] = 121,
  [248] = 116,
  [249] = 117,
  [250] = 113,
  [251] = 118,
  [252] = 119,
  [253] = 120,
  [254] = 138,
  [255] = 139,
  [256] = 140,
  [257] = 141,
  [258] = 142,
  [259] = 143,
  [260] = 144,
  [261] = 115,
  [262] = 146,
  [263] = 147,
  [264] = 148,
  [265] = 149,
  [266] = 150,
  [267] = 151,
  [268] = 152,
  [269] = 153,
  [270] = 122,
  [271] = 123,
  [272] = 124,
  [273] = 125,
  [274] = 126,
  [275] = 275,
  [276] = 276,
  [277] = 127,
  [278] = 128,
  [279] = 129,
  [280] = 130,
  [281] = 131,
  [282] = 154,
  [283] = 133,
  [284] = 134,
  [285] = 112,
  [286] = 135,
  [287] = 136,
  [288] = 137,
  [289] = 132,
  [290] = 114,
  [291] = 276,
  [292] = 275,
  [293] = 276,
  [294] = 275,
  [295] = 276,
  [296] = 275,
  [297] = 276,
  [298] = 275,
  [299] = 276,
  [300] = 275,
  [301] = 145,
  [302] = 302,
  [303] = 150,
  [304] = 149,
  [305] = 114,
  [306] = 115,
  [307] = 116,
  [308] = 117,
  [309] = 118,
  [310] = 119,
  [311] = 120,
  [312] = 121,
  [313] = 122,
  [314] = 123,
  [315] = 124,
  [316] = 125,
  [317] = 126,
  [318] = 127,
  [319] = 128,
  [320] = 129,
  [321] = 130,
  [322] = 131,
  [323] = 154,
  [324] = 133,
  [325] = 151,
  [326] = 112,
  [327] = 135,
  [328] = 136,
  [329] = 137,
  [330] = 138,
  [331] = 113,
  [332] = 152,
  [333] = 153,
  [334] = 132,
  [335] = 139,
  [336] = 140,
  [337] = 141,
  [338] = 142,
  [339] = 143,
  [340] = 144,
  [341] = 145,
  [342] = 146,
  [343] = 147,
  [344] = 148,
  [345] = 134,
  [346] = 132,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 132,
  [353] = 353,
  [354] = 354,
  [355] = 132,
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
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 373,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 132,
  [383] = 363,
  [384] = 384,
  [385] = 385,
  [386] = 373,
  [387] = 387,
  [388] = 387,
  [389] = 359,
  [390] = 390,
  [391] = 387,
  [392] = 363,
  [393] = 393,
  [394] = 387,
  [395] = 395,
  [396] = 387,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 367,
  [405] = 405,
  [406] = 406,
  [407] = 132,
  [408] = 408,
  [409] = 361,
  [410] = 410,
  [411] = 411,
  [412] = 371,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 416,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 419,
  [422] = 422,
  [423] = 416,
  [424] = 362,
  [425] = 425,
  [426] = 419,
  [427] = 427,
  [428] = 416,
  [429] = 429,
  [430] = 419,
  [431] = 431,
  [432] = 360,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 364,
  [438] = 438,
  [439] = 439,
  [440] = 439,
  [441] = 373,
  [442] = 376,
  [443] = 439,
  [444] = 439,
  [445] = 377,
  [446] = 439,
  [447] = 363,
  [448] = 448,
  [449] = 380,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 452,
  [455] = 451,
  [456] = 456,
  [457] = 457,
  [458] = 452,
  [459] = 459,
  [460] = 460,
  [461] = 452,
  [462] = 462,
  [463] = 463,
  [464] = 462,
  [465] = 452,
  [466] = 466,
  [467] = 467,
  [468] = 451,
  [469] = 451,
  [470] = 451,
  [471] = 451,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 472,
  [479] = 475,
  [480] = 475,
  [481] = 474,
  [482] = 472,
  [483] = 483,
  [484] = 474,
  [485] = 485,
  [486] = 475,
  [487] = 487,
  [488] = 487,
  [489] = 472,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 476,
  [495] = 474,
  [496] = 475,
  [497] = 474,
  [498] = 472,
  [499] = 499,
  [500] = 475,
  [501] = 493,
  [502] = 502,
  [503] = 493,
  [504] = 504,
  [505] = 493,
  [506] = 472,
  [507] = 493,
  [508] = 508,
  [509] = 509,
  [510] = 510,
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
      if (eof) ADVANCE(100);
      ADVANCE_MAP(
        '!', 434,
        '"', 458,
        '#', 110,
        '$', 37,
        '&', 420,
        '\'', 454,
        '(', 114,
        ')', 115,
        '+', 426,
        ',', 118,
        '-', 430,
        '.', 561,
        '/', 429,
        '0', 469,
        '3', 470,
        ';', 101,
        '<', 423,
        '=', 415,
        '>', 424,
        '@', 74,
        'A', 549,
        'S', 538,
        'T', 551,
        '\\', 2,
        '^', 419,
        'a', 550,
        'f', 540,
        'g', 545,
        'r', 542,
        's', 539,
        't', 552,
        'z', 543,
        '|', 418,
        '~', 432,
        '%', 427,
        '*', 427,
        'C', 548,
        'c', 548,
        'K', 547,
        'k', 547,
        'V', 547,
        'v', 547,
        '1', 471,
        '2', 471,
        'F', 541,
        'R', 541,
        'X', 541,
        'x', 541,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(472);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(553);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(19);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(19);
      if (lookahead == '\r') SKIP(1);
      if (lookahead == 'U') ADVANCE(73);
      if (lookahead == 'u') ADVANCE(69);
      if (lookahead == 'x') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(464);
      if (set_contains(sym__escape_sequence_character_set_1, 12, lookahead)) ADVANCE(462);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(21);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(21);
      if (lookahead == '\r') SKIP(3);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(20);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(20);
      if (lookahead == '\r') SKIP(5);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(22);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(22);
      if (lookahead == '\r') SKIP(7);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(23);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(23);
      if (lookahead == '\r') SKIP(9);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(24);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(24);
      if (lookahead == '\r') SKIP(11);
      if (lookahead == 'U') ADVANCE(73);
      if (lookahead == 'u') ADVANCE(69);
      if (lookahead == 'x') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(464);
      if (set_contains(sym__escape_sequence_character_set_1, 12, lookahead)) ADVANCE(462);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(33);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(33);
      if (lookahead == '\r') SKIP(13);
      if (lookahead == 'U') ADVANCE(73);
      if (lookahead == 'u') ADVANCE(69);
      if (lookahead == 'x') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(464);
      if (set_contains(sym__escape_sequence_character_set_1, 12, lookahead)) ADVANCE(462);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\\') SKIP(17);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(15);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(15);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(15);
      if (lookahead == '\r') SKIP(16);
      END_STATE();
    case 18:
      if (lookahead == '\r') ADVANCE(111);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        '!', 434,
        '"', 458,
        '#', 110,
        '$', 37,
        '&', 420,
        '\'', 454,
        '(', 114,
        ')', 115,
        '+', 426,
        ',', 118,
        '-', 430,
        '.', 561,
        '/', 429,
        '0', 469,
        '3', 470,
        ';', 101,
        '<', 423,
        '=', 415,
        '>', 424,
        '@', 74,
        'A', 549,
        'S', 538,
        'T', 551,
        '\\', 2,
        '^', 419,
        'a', 550,
        'f', 540,
        'g', 545,
        'r', 542,
        's', 539,
        't', 552,
        'z', 543,
        '|', 418,
        '~', 432,
        '%', 427,
        '*', 427,
        'C', 548,
        'c', 548,
        'K', 547,
        'k', 547,
        'V', 547,
        'v', 547,
        '1', 471,
        '2', 471,
        'F', 541,
        'R', 541,
        'X', 541,
        'x', 541,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(472);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(553);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        '!', 433,
        '"', 458,
        '#', 110,
        '$', 41,
        '%', 47,
        '\'', 454,
        '(', 114,
        ')', 115,
        ',', 118,
        '-', 431,
        '.', 567,
        '/', 28,
        '0', 438,
        '3', 443,
        ';', 101,
        'A', 575,
        'S', 559,
        'T', 577,
        '\\', 6,
        'a', 576,
        'f', 562,
        'g', 570,
        'r', 564,
        's', 560,
        't', 578,
        'z', 568,
        '~', 432,
        'C', 574,
        'c', 574,
        'K', 573,
        'k', 573,
        'V', 573,
        'v', 573,
        '1', 444,
        '2', 444,
        'F', 563,
        'R', 563,
        'X', 563,
        'x', 563,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(579);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        '!', 433,
        '"', 458,
        '#', 110,
        '$', 41,
        '%', 47,
        '\'', 454,
        '(', 114,
        '+', 75,
        ',', 408,
        '-', 431,
        '.', 566,
        '/', 28,
        '0', 438,
        '3', 443,
        ';', 101,
        '=', 414,
        '@', 74,
        'A', 575,
        'S', 559,
        'T', 577,
        '\\', 4,
        'a', 576,
        'f', 562,
        'g', 570,
        'r', 564,
        's', 560,
        't', 578,
        'z', 568,
        '|', 52,
        '~', 432,
        '\t', 21,
        ' ', 21,
        'C', 574,
        'c', 574,
        'K', 573,
        'k', 573,
        'V', 573,
        'v', 573,
        '1', 444,
        '2', 444,
        'F', 563,
        'R', 563,
        'X', 563,
        'x', 563,
      );
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(21);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(579);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '!', 46,
        '#', 110,
        '&', 420,
        '(', 114,
        ',', 408,
        '/', 429,
        ';', 101,
        '<', 423,
        '=', 415,
        '>', 424,
      );
      if (lookahead == '\\') SKIP(8);
      if (lookahead == '^') ADVANCE(419);
      if (lookahead == '|') ADVANCE(418);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(427);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(426);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(554);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '!', 46,
        '&', 420,
        '(', 114,
        ')', 115,
        ',', 118,
        '/', 428,
        '<', 423,
        '=', 415,
        '>', 424,
      );
      if (lookahead == '\\') SKIP(10);
      if (lookahead == '^') ADVANCE(419);
      if (lookahead == '|') ADVANCE(418);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(427);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(426);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(458);
      if (lookahead == '/') ADVANCE(460);
      if (lookahead == '\\') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(461);
      if (lookahead != 0) ADVANCE(459);
      END_STATE();
    case 25:
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ',') ADVANCE(118);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(537);
      if (lookahead == '$' ||
          lookahead == '%') ADVANCE(537);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 26:
      if (lookahead == ')') ADVANCE(115);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(537);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead == '$' ||
          lookahead == '%') ADVANCE(537);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(26);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 27:
      if (lookahead == '*') ADVANCE(30);
      END_STATE();
    case 28:
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(110);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(31);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == ':') ADVANCE(555);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '/') ADVANCE(456);
      if (lookahead == '\\') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(455);
      END_STATE();
    case 34:
      if (lookahead == '1') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      END_STATE();
    case 35:
      if (lookahead == '1') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(465);
      END_STATE();
    case 36:
      ADVANCE_MAP(
        '2', 214,
        '4', 220,
        '8', 222,
        ':', 558,
        'L', 32,
        'a', 301,
        'b', 208,
        'c', 337,
        'd', 341,
        'f', 303,
        'h', 209,
        'i', 329,
        'l', 230,
        'm', 201,
        'p', 190,
        'q', 396,
        's', 280,
        'u', 310,
        'w', 342,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      END_STATE();
    case 37:
      ADVANCE_MAP(
        '3', 474,
        'A', 58,
        'S', 34,
        'T', 60,
        'a', 59,
        'f', 38,
        'g', 50,
        'r', 40,
        's', 35,
        't', 64,
        'z', 48,
        'C', 57,
        'c', 57,
        'K', 55,
        'k', 55,
        'V', 55,
        'v', 55,
        '1', 477,
        '2', 477,
        'F', 39,
        'R', 39,
        'X', 39,
        'x', 39,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      END_STATE();
    case 38:
      if (lookahead == '3') ADVANCE(474);
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(477);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(465);
      END_STATE();
    case 39:
      if (lookahead == '3') ADVANCE(474);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      END_STATE();
    case 40:
      if (lookahead == '3') ADVANCE(474);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(465);
      END_STATE();
    case 41:
      ADVANCE_MAP(
        '3', 475,
        'A', 531,
        'S', 482,
        'T', 533,
        'a', 532,
        'f', 487,
        'g', 519,
        'r', 489,
        's', 483,
        't', 534,
        'z', 502,
        'C', 530,
        'c', 530,
        'K', 529,
        'k', 529,
        'V', 529,
        'v', 529,
        '1', 478,
        '2', 478,
        'F', 488,
        'R', 488,
        'X', 488,
        'x', 488,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(536);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(581);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(421);
      END_STATE();
    case 47:
      ADVANCE_MAP(
        'a', 497,
        'c', 495,
        'd', 526,
        'g', 517,
        'h', 508,
        'l', 516,
        'p', 498,
        't', 512,
      );
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(465);
      END_STATE();
    case 50:
      if (lookahead == 'p') ADVANCE(465);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 52:
      if (lookahead == '|') ADVANCE(416);
      END_STATE();
    case 53:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      END_STATE();
    case 54:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      END_STATE();
    case 55:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(465);
      END_STATE();
    case 56:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(442);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(465);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(465);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(465);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(465);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(462);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(446);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
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
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 75:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(411);
      END_STATE();
    case 76:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 77:
      if (eof) ADVANCE(100);
      ADVANCE_MAP(
        '\t', 172,
        ' ', 171,
        '!', 46,
        '#', 110,
        '&', 420,
        '(', 114,
        ',', 118,
        '/', 429,
        ';', 101,
        '<', 423,
        '=', 415,
        '>', 424,
      );
      if (lookahead == '\\') SKIP(85);
      if (lookahead == '^') ADVANCE(419);
      if (lookahead == '|') ADVANCE(418);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(427);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(426);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(77);
      END_STATE();
    case 78:
      if (eof) ADVANCE(100);
      if (lookahead == '\n') SKIP(80);
      END_STATE();
    case 79:
      if (eof) ADVANCE(100);
      if (lookahead == '\n') SKIP(80);
      if (lookahead == '\r') SKIP(78);
      END_STATE();
    case 80:
      if (eof) ADVANCE(100);
      ADVANCE_MAP(
        '\n', 104,
        '\r', 102,
        '#', 110,
        '%', 76,
        '.', 36,
        '/', 28,
        '0', 43,
        ';', 101,
      );
      if (lookahead == '\\') SKIP(79);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(80);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 81:
      if (eof) ADVANCE(100);
      if (lookahead == '\n') SKIP(83);
      END_STATE();
    case 82:
      if (eof) ADVANCE(100);
      if (lookahead == '\n') SKIP(83);
      if (lookahead == '\r') SKIP(81);
      END_STATE();
    case 83:
      if (eof) ADVANCE(100);
      ADVANCE_MAP(
        '\n', 105,
        '\r', 103,
        '#', 110,
        '%', 76,
        '.', 36,
        '/', 28,
        '0', 43,
        ';', 101,
      );
      if (lookahead == '\\') SKIP(82);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(107);
      if (lookahead == 0x0b ||
          lookahead == '\f') SKIP(83);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 84:
      if (eof) ADVANCE(100);
      if (lookahead == '\n') SKIP(77);
      END_STATE();
    case 85:
      if (eof) ADVANCE(100);
      if (lookahead == '\n') SKIP(77);
      if (lookahead == '\r') SKIP(84);
      END_STATE();
    case 86:
      if (eof) ADVANCE(100);
      if (lookahead == '\n') SKIP(99);
      END_STATE();
    case 87:
      if (eof) ADVANCE(100);
      if (lookahead == '\n') SKIP(99);
      if (lookahead == '\r') SKIP(86);
      END_STATE();
    case 88:
      if (eof) ADVANCE(100);
      if (lookahead == '\n') SKIP(98);
      END_STATE();
    case 89:
      if (eof) ADVANCE(100);
      if (lookahead == '\n') SKIP(98);
      if (lookahead == '\r') SKIP(88);
      END_STATE();
    case 90:
      if (eof) ADVANCE(100);
      if (lookahead == '\n') SKIP(97);
      END_STATE();
    case 91:
      if (eof) ADVANCE(100);
      if (lookahead == '\n') SKIP(97);
      if (lookahead == '\r') SKIP(90);
      END_STATE();
    case 92:
      if (eof) ADVANCE(100);
      if (lookahead == '\n') SKIP(94);
      END_STATE();
    case 93:
      if (eof) ADVANCE(100);
      if (lookahead == '\n') SKIP(94);
      if (lookahead == '\r') SKIP(92);
      END_STATE();
    case 94:
      if (eof) ADVANCE(100);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\\') SKIP(93);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(94);
      END_STATE();
    case 95:
      if (eof) ADVANCE(100);
      ADVANCE_MAP(
        '!', 433,
        '"', 458,
        '#', 110,
        '$', 41,
        '%', 47,
        '\'', 454,
        '(', 114,
        ')', 115,
        ',', 118,
        '-', 431,
        '.', 567,
        '/', 28,
        '0', 438,
        '3', 443,
        ';', 101,
        'A', 575,
        'S', 559,
        'T', 577,
        '\\', 6,
        'a', 576,
        'f', 562,
        'g', 570,
        'r', 564,
        's', 560,
        't', 578,
        'z', 568,
        '~', 432,
        'C', 574,
        'c', 574,
        'K', 573,
        'k', 573,
        'V', 573,
        'v', 573,
        '1', 444,
        '2', 444,
        'F', 563,
        'R', 563,
        'X', 563,
        'x', 563,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(95);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(579);
      END_STATE();
    case 96:
      if (eof) ADVANCE(100);
      ADVANCE_MAP(
        '!', 433,
        '"', 458,
        '#', 110,
        '$', 41,
        '%', 47,
        '\'', 454,
        '(', 114,
        '+', 75,
        ',', 408,
        '-', 431,
        '.', 566,
        '/', 28,
        '0', 438,
        '3', 443,
        ';', 101,
        '=', 414,
        '@', 74,
        'A', 575,
        'S', 559,
        'T', 577,
        '\\', 4,
        'a', 576,
        'f', 562,
        'g', 570,
        'r', 564,
        's', 560,
        't', 578,
        'z', 568,
        '|', 52,
        '~', 432,
        '\t', 21,
        ' ', 21,
        'C', 574,
        'c', 574,
        'K', 573,
        'k', 573,
        'V', 573,
        'v', 573,
        '1', 444,
        '2', 444,
        'F', 563,
        'R', 563,
        'X', 563,
        'x', 563,
      );
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(96);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(579);
      END_STATE();
    case 97:
      if (eof) ADVANCE(100);
      ADVANCE_MAP(
        '!', 46,
        '#', 110,
        '&', 420,
        '(', 114,
        ')', 115,
        ',', 118,
        '/', 429,
        ';', 101,
        '<', 423,
        '=', 415,
        '>', 424,
      );
      if (lookahead == '\\') SKIP(91);
      if (lookahead == '^') ADVANCE(419);
      if (lookahead == '|') ADVANCE(418);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(109);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(427);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(426);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(97);
      END_STATE();
    case 98:
      if (eof) ADVANCE(100);
      ADVANCE_MAP(
        '!', 46,
        '#', 110,
        '&', 420,
        '(', 114,
        ',', 118,
        '/', 429,
        ';', 101,
        '<', 423,
        '=', 415,
        '>', 424,
      );
      if (lookahead == '\\') SKIP(89);
      if (lookahead == '^') ADVANCE(419);
      if (lookahead == '|') ADVANCE(418);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(427);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(426);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(98);
      END_STATE();
    case 99:
      if (eof) ADVANCE(100);
      ADVANCE_MAP(
        '!', 46,
        '#', 110,
        '&', 420,
        '(', 114,
        ',', 408,
        '/', 429,
        ';', 101,
        '<', 423,
        '=', 415,
        '>', 424,
      );
      if (lookahead == '\\') SKIP(87);
      if (lookahead == '^') ADVANCE(419);
      if (lookahead == '|') ADVANCE(418);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(427);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(426);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(554);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead == '\r') ADVANCE(102);
      if (lookahead == '%') ADVANCE(76);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '0') ADVANCE(43);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '\r') ADVANCE(103);
      if (lookahead == '%') ADVANCE(76);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(107);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead == '\r') ADVANCE(102);
      if (lookahead == '%') ADVANCE(76);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '0') ADVANCE(43);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '\r') ADVANCE(103);
      if (lookahead == '%') ADVANCE(76);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(107);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '\r') ADVANCE(15);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '\r') ADVANCE(103);
      if (lookahead == '%') ADVANCE(76);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(107);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\\') ADVANCE(537);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_block_comment);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_macro_mnemonic);
      if (lookahead == ':') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_macro_mnemonic);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_DOTbyte);
      if (lookahead == ':') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_DOTbyte);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_DOT2byte);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DOT2byte);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_DOTshort);
      if (lookahead == ':') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_DOTshort);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_DOThalf);
      if (lookahead == ':') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_DOThalf);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_DOThword);
      if (lookahead == ':') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_DOThword);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_DOT4byte);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_DOT4byte);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_DOTword);
      if (lookahead == ':') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_DOTword);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_DOTint);
      if (lookahead == ':') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_DOTint);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_DOT8byte);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_DOT8byte);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_DOTdword);
      if (lookahead == ':') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_DOTdword);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_DOTlong);
      if (lookahead == ':') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_DOTlong);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_DOTquad);
      if (lookahead == ':') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_DOTquad);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_DOTcomm);
      if (lookahead == ':') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_DOTcomm);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_DOTlcomm);
      if (lookahead == ':') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_DOTlcomm);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_DOTalign);
      if (lookahead == ':') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_DOTalign);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_DOTbalign);
      if (lookahead == ':') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_DOTbalign);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DOTp2align);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_DOTp2align);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_DOTsleb128);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_DOTsleb128);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_DOTuleb128);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_DOTuleb128);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_DOTdtprelword);
      if (lookahead == ':') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_DOTdtprelword);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_DOTdtpreldword);
      if (lookahead == ':') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_DOTdtpreldword);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_DOTskip);
      if (lookahead == ':') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_DOTskip);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_DOTspace);
      if (lookahead == ':') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_DOTspace);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_DOTfloat);
      if (lookahead == ':') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_DOTfloat);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_DOTdouble);
      if (lookahead == ':') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_DOTdouble);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_DOTsingle);
      if (lookahead == ':') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_DOTsingle);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(172);
      if (lookahead == ' ') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(172);
      if (lookahead == ' ') ADVANCE(171);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_DOTasciz);
      if (lookahead == ':') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_DOTasciz);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_DOTascii);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'z') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'y')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_DOTascii);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'z') ADVANCE(178);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(407);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_DOTasciiz);
      if (lookahead == ':') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_DOTasciiz);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_DOTstring);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'z') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'y')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_DOTstring);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'z') ADVANCE(182);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(407);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_DOTstringz);
      if (lookahead == ':') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_DOTstringz);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(188);
      if (lookahead == ':') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(191);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(189);
      if (lookahead == ':') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(192);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(197);
      if (lookahead == ':') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(193);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(194);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(210);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(195);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(196);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(153);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(155);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(154);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(156);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'a') ADVANCE(297);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'a') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'a') ADVANCE(238);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'a') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'a') ADVANCE(308);
      if (lookahead == 'y') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'a') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'a') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'a') ADVANCE(228);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'a') ADVANCE(296);
      if (lookahead == 'w') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'a') ADVANCE(384);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'a') ADVANCE(309);
      if (lookahead == 'y') ADVANCE(389);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'a') ADVANCE(299);
      if (lookahead == 'w') ADVANCE(352);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'a') ADVANCE(311);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'b') ADVANCE(399);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'b') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'b') ADVANCE(184);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'b') ADVANCE(401);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'b') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'b') ADVANCE(306);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'b') ADVANCE(400);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'b') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'b') ADVANCE(186);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'b') ADVANCE(403);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'b') ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'b') ADVANCE(404);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'c') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'c') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'c') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'c') ADVANCE(285);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'c') ADVANCE(370);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'c') ADVANCE(253);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'c') ADVANCE(347);
      if (lookahead == 'o') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'c') ADVANCE(348);
      if (lookahead == 'o') ADVANCE(331);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'd') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'd') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'd') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'd') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'd') ADVANCE(397);
      if (lookahead == 'w') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'd') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'd') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'd') ADVANCE(142);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'd') ADVANCE(132);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'd') ADVANCE(138);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'd') ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'd') ADVANCE(398);
      if (lookahead == 'w') ADVANCE(354);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'd') ADVANCE(158);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'd') ADVANCE(160);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'e') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'e') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'e') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'e') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'e') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'e') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'e') ADVANCE(300);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'e') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'e') ADVANCE(219);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'f') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'f') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'g') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'g') ADVANCE(323);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'g') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'g') ADVANCE(140);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'g') ADVANCE(180);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'g') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'g') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'g') ADVANCE(324);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'g') ADVANCE(325);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'g') ADVANCE(328);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'g') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'g') ADVANCE(307);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'h') ADVANCE(345);
      if (lookahead == 'i') ADVANCE(330);
      if (lookahead == 'k') ADVANCE(287);
      if (lookahead == 'l') ADVANCE(256);
      if (lookahead == 'p') ADVANCE(203);
      if (lookahead == 't') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'h') ADVANCE(346);
      if (lookahead == 'i') ADVANCE(333);
      if (lookahead == 'k') ADVANCE(289);
      if (lookahead == 'l') ADVANCE(260);
      if (lookahead == 'p') ADVANCE(205);
      if (lookahead == 't') ADVANCE(374);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'i') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'i') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == 'z') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'y')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'i') ADVANCE(268);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'i') ADVANCE(286);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'i') ADVANCE(176);
      if (lookahead == 'z') ADVANCE(174);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(407);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'i') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'i') ADVANCE(274);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'i') ADVANCE(358);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'i') ADVANCE(334);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'i') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'i') ADVANCE(275);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'i') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'i') ADVANCE(276);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'l') ADVANCE(281);
      if (lookahead == 's') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'l') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'l') ADVANCE(284);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'l') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'l') ADVANCE(266);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'l') ADVANCE(242);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'l') ADVANCE(288);
      if (lookahead == 's') ADVANCE(226);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'l') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'l') ADVANCE(344);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'l') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'l') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'l') ADVANCE(254);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'l') ADVANCE(255);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'l') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'l') ADVANCE(292);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'l') ADVANCE(264);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'l') ADVANCE(294);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'l') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'm') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'm') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'm') ADVANCE(144);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'm') ADVANCE(146);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'm') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'm') ADVANCE(315);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'm') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'm') ADVANCE(316);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'n') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'n') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'n') ADVANCE(151);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'n') ADVANCE(148);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'n') ADVANCE(150);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'n') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'n') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'n') ADVANCE(152);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'n') ADVANCE(383);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'n') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'n') ADVANCE(270);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'n') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'n') ADVANCE(278);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'n') ADVANCE(271);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'o') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'o') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'o') ADVANCE(318);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'o') ADVANCE(117);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'o') ADVANCE(393);
      if (lookahead == 't') ADVANCE(359);
      if (lookahead == 'w') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'o') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'o') ADVANCE(395);
      if (lookahead == 't') ADVANCE(360);
      if (lookahead == 'w') ADVANCE(350);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'o') ADVANCE(362);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'o') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'o') ADVANCE(207);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'o') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'o') ADVANCE(372);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'o') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'o') ADVANCE(320);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'o') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'o') ADVANCE(365);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'o') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'o') ADVANCE(371);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'o') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'o') ADVANCE(375);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'o') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'o') ADVANCE(377);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'p') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'p') ADVANCE(162);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'p') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'p') ADVANCE(378);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'r') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'r') ADVANCE(239);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'r') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'r') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'r') ADVANCE(240);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'r') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'r') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'r') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'r') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'r') ADVANCE(338);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'r') ADVANCE(241);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'r') ADVANCE(385);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'r') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'r') ADVANCE(290);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'r') ADVANCE(243);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'r') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'r') ADVANCE(244);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'r') ADVANCE(262);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 't') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 't') ADVANCE(246);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 't') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 't') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 't') ADVANCE(134);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 't') ADVANCE(166);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 't') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 't') ADVANCE(247);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 't') ADVANCE(248);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 't') ADVANCE(252);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 't') ADVANCE(257);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 't') ADVANCE(258);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 't') ADVANCE(259);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'u') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'u') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'u') ADVANCE(216);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'u') ADVANCE(199);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'w') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'w') ADVANCE(356);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'y') ADVANCE(380);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'y') ADVANCE(387);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'y') ADVANCE(390);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'y') ADVANCE(388);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'y') ADVANCE(391);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'y') ADVANCE(392);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(406);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__control_operand_separator_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(408);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(579);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_option_flag_token1);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '$') ADVANCE(42);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(412);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_assignment_operator);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_assignment_operator);
      if (lookahead == '=') ADVANCE(421);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_logical_or_operator);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_logical_and_operator);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_bitwise_or_operator);
      if (lookahead == '|') ADVANCE(416);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_bitwise_xor_operator);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_bitwise_and_operator);
      if (lookahead == '&') ADVANCE(417);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_equality_operator);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_relational_operator);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_relational_operator);
      if (lookahead == '<') ADVANCE(425);
      if (lookahead == '=') ADVANCE(422);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_relational_operator);
      if (lookahead == '=') ADVANCE(422);
      if (lookahead == '>') ADVANCE(425);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_shift_operator);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_additive_operator);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_multiplicative_operator);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_multiplicative_operator);
      if (lookahead == '*') ADVANCE(30);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_multiplicative_operator);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(110);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_unary_minus_operator);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_unary_minus_operator);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '0') ADVANCE(439);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(445);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_bitwise_not_operator);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_logical_not_operator);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_logical_not_operator);
      if (lookahead == '=') ADVANCE(421);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_relocation_type);
      if (lookahead == '_') ADVANCE(507);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_relocation_type);
      if (lookahead == '_') ADVANCE(496);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_relocation_type);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_octal);
      ADVANCE_MAP(
        '.', 450,
        'B', 56,
        'b', 583,
        'f', 582,
        'o', 441,
        'E', 53,
        'e', 53,
        'X', 66,
        'x', 66,
        '8', 445,
        '9', 445,
      );
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(440);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_octal);
      ADVANCE_MAP(
        '.', 450,
        'o', 441,
        'B', 56,
        'b', 56,
        'E', 53,
        'e', 53,
        'X', 66,
        'x', 66,
        '8', 445,
        '9', 445,
      );
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(440);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_octal);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(440);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_octal);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(441);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_binary);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(442);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(582);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(445);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(445);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(445);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(450);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(445);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(446);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'f') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(572);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(451);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '*') ADVANCE(30);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '/') ADVANCE(456);
      if (lookahead == '\\') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(455);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(30);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(460);
      if (lookahead == '\\') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(459);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(462);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(463);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(468);
      if (lookahead == '$' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == ':') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(468);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(581);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(582);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(581);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(582);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(473);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(581);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(473);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(581);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(465);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(481);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('2' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(480);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(481);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(491);
      if (lookahead == '3') ADVANCE(486);
      if (lookahead == 'r') ADVANCE(504);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(491);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '2') ADVANCE(437);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '3') ADVANCE(475);
      if (lookahead == 'a') ADVANCE(531);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(478);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(481);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '3') ADVANCE(475);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '3') ADVANCE(475);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(481);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '4') ADVANCE(437);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '6') ADVANCE(437);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '6') ADVANCE(490);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '_') ADVANCE(507);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '_') ADVANCE(506);
      if (lookahead == 'g') ADVANCE(500);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'a') ADVANCE(513);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'a') ADVANCE(501);
      if (lookahead == 'h') ADVANCE(508);
      if (lookahead == 'l') ADVANCE(516);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'b') ADVANCE(524);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'c') ADVANCE(484);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'd') ADVANCE(437);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'd') ADVANCE(493);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'd') ADVANCE(499);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(521);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(509);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(511);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(514);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'g') ADVANCE(518);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'h') ADVANCE(508);
      if (lookahead == 'l') ADVANCE(516);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'i') ADVANCE(437);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(437);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(485);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(493);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(525);
      if (lookahead == 'p') ADVANCE(523);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(510);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(436);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(481);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(437);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(527);
      if (lookahead == 'p') ADVANCE(522);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(528);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'p') ADVANCE(481);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'p') ADVANCE(522);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'r') ADVANCE(515);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'r') ADVANCE(503);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'r') ADVANCE(505);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 's') ADVANCE(492);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 's') ADVANCE(494);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 't') ADVANCE(520);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 't') ADVANCE(435);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 't') ADVANCE(493);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(481);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('2' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(481);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('4' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(481);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('8' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(481);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('8' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(481);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(535);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(536);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_macro_parameter);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(537);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == '1') ADVANCE(466);
      if (lookahead == ':') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(468);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == '1') ADVANCE(466);
      if (lookahead == ':') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(468);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == '3') ADVANCE(466);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'a') ADVANCE(549);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(467);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(468);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == '3') ADVANCE(466);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(468);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == '3') ADVANCE(466);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(468);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'e') ADVANCE(546);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'o') ADVANCE(468);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'p') ADVANCE(468);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == 'r') ADVANCE(544);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(468);
      if (lookahead == '$' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == ':') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(468);
      if (lookahead == '$' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == ':') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(468);
      if (lookahead == '$' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == ':') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(468);
      if (lookahead == '$' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == ':') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(468);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == ':') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(468);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(554);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_local_label);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_local_label_reference_token1);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == ':') ADVANCE(555);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(556);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_local_label_reference_token1);
      if (lookahead == '.') ADVANCE(579);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_global_label);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '1') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '1') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(480);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      ADVANCE_MAP(
        '2', 211,
        '4', 217,
        '8', 221,
        ':', 558,
        'L', 556,
        'a', 295,
        'b', 202,
        'c', 335,
        'd', 339,
        'f', 302,
        'h', 206,
        'i', 326,
        'l', 229,
        'm', 200,
        'p', 187,
        'q', 394,
        's', 279,
        'u', 312,
        'w', 340,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(406);
      if (('e' <= lookahead && lookahead <= 'z')) ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(565);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '3') ADVANCE(476);
      if (lookahead == 'a') ADVANCE(575);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(479);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(480);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '3') ADVANCE(476);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '3') ADVANCE(476);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(480);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(565);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'L') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(410);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(579);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'L') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(449);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'e') ADVANCE(571);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'o') ADVANCE(480);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'p') ADVANCE(480);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'r') ADVANCE(569);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(451);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(480);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(480);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(480);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(480);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(480);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_global_numeric_label);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_local_numeric_label);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_local_numeric_label_reference);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_local_numeric_label_reference);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(442);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 80, .external_lex_state = 2},
  [2] = {.lex_state = 96, .external_lex_state = 3},
  [3] = {.lex_state = 96, .external_lex_state = 3},
  [4] = {.lex_state = 96, .external_lex_state = 3},
  [5] = {.lex_state = 95, .external_lex_state = 3},
  [6] = {.lex_state = 80, .external_lex_state = 2},
  [7] = {.lex_state = 80, .external_lex_state = 2},
  [8] = {.lex_state = 96, .external_lex_state = 2},
  [9] = {.lex_state = 95, .external_lex_state = 3},
  [10] = {.lex_state = 95, .external_lex_state = 3},
  [11] = {.lex_state = 95, .external_lex_state = 4},
  [12] = {.lex_state = 95, .external_lex_state = 4},
  [13] = {.lex_state = 95, .external_lex_state = 2},
  [14] = {.lex_state = 95, .external_lex_state = 2},
  [15] = {.lex_state = 95, .external_lex_state = 3},
  [16] = {.lex_state = 95, .external_lex_state = 4},
  [17] = {.lex_state = 95, .external_lex_state = 2},
  [18] = {.lex_state = 95, .external_lex_state = 2},
  [19] = {.lex_state = 95, .external_lex_state = 2},
  [20] = {.lex_state = 95, .external_lex_state = 2},
  [21] = {.lex_state = 95, .external_lex_state = 2},
  [22] = {.lex_state = 95, .external_lex_state = 2},
  [23] = {.lex_state = 95, .external_lex_state = 2},
  [24] = {.lex_state = 95, .external_lex_state = 2},
  [25] = {.lex_state = 95, .external_lex_state = 2},
  [26] = {.lex_state = 95, .external_lex_state = 2},
  [27] = {.lex_state = 95, .external_lex_state = 2},
  [28] = {.lex_state = 95, .external_lex_state = 2},
  [29] = {.lex_state = 95, .external_lex_state = 2},
  [30] = {.lex_state = 95, .external_lex_state = 2},
  [31] = {.lex_state = 95, .external_lex_state = 5},
  [32] = {.lex_state = 95, .external_lex_state = 2},
  [33] = {.lex_state = 95, .external_lex_state = 2},
  [34] = {.lex_state = 95, .external_lex_state = 2},
  [35] = {.lex_state = 95, .external_lex_state = 2},
  [36] = {.lex_state = 95, .external_lex_state = 2},
  [37] = {.lex_state = 95, .external_lex_state = 2},
  [38] = {.lex_state = 95, .external_lex_state = 2},
  [39] = {.lex_state = 95, .external_lex_state = 2},
  [40] = {.lex_state = 95, .external_lex_state = 2},
  [41] = {.lex_state = 95, .external_lex_state = 2},
  [42] = {.lex_state = 95, .external_lex_state = 2},
  [43] = {.lex_state = 95, .external_lex_state = 2},
  [44] = {.lex_state = 95, .external_lex_state = 2},
  [45] = {.lex_state = 95, .external_lex_state = 2},
  [46] = {.lex_state = 95, .external_lex_state = 2},
  [47] = {.lex_state = 95, .external_lex_state = 2},
  [48] = {.lex_state = 95, .external_lex_state = 2},
  [49] = {.lex_state = 95, .external_lex_state = 2},
  [50] = {.lex_state = 95, .external_lex_state = 2},
  [51] = {.lex_state = 95, .external_lex_state = 2},
  [52] = {.lex_state = 95, .external_lex_state = 2},
  [53] = {.lex_state = 95, .external_lex_state = 2},
  [54] = {.lex_state = 95, .external_lex_state = 2},
  [55] = {.lex_state = 95, .external_lex_state = 2},
  [56] = {.lex_state = 95, .external_lex_state = 2},
  [57] = {.lex_state = 95, .external_lex_state = 2},
  [58] = {.lex_state = 95, .external_lex_state = 2},
  [59] = {.lex_state = 95, .external_lex_state = 2},
  [60] = {.lex_state = 95, .external_lex_state = 2},
  [61] = {.lex_state = 95, .external_lex_state = 2},
  [62] = {.lex_state = 95, .external_lex_state = 2},
  [63] = {.lex_state = 95, .external_lex_state = 2},
  [64] = {.lex_state = 95, .external_lex_state = 2},
  [65] = {.lex_state = 95, .external_lex_state = 2},
  [66] = {.lex_state = 95, .external_lex_state = 2},
  [67] = {.lex_state = 95, .external_lex_state = 2},
  [68] = {.lex_state = 95, .external_lex_state = 2},
  [69] = {.lex_state = 95, .external_lex_state = 2},
  [70] = {.lex_state = 95, .external_lex_state = 2},
  [71] = {.lex_state = 95, .external_lex_state = 2},
  [72] = {.lex_state = 95, .external_lex_state = 2},
  [73] = {.lex_state = 95, .external_lex_state = 2},
  [74] = {.lex_state = 95, .external_lex_state = 2},
  [75] = {.lex_state = 95, .external_lex_state = 2},
  [76] = {.lex_state = 95, .external_lex_state = 2},
  [77] = {.lex_state = 95, .external_lex_state = 2},
  [78] = {.lex_state = 95, .external_lex_state = 2},
  [79] = {.lex_state = 95, .external_lex_state = 2},
  [80] = {.lex_state = 95, .external_lex_state = 2},
  [81] = {.lex_state = 95, .external_lex_state = 2},
  [82] = {.lex_state = 95, .external_lex_state = 2},
  [83] = {.lex_state = 95, .external_lex_state = 2},
  [84] = {.lex_state = 95, .external_lex_state = 2},
  [85] = {.lex_state = 95, .external_lex_state = 2},
  [86] = {.lex_state = 95, .external_lex_state = 2},
  [87] = {.lex_state = 95, .external_lex_state = 2},
  [88] = {.lex_state = 95, .external_lex_state = 2},
  [89] = {.lex_state = 95, .external_lex_state = 2},
  [90] = {.lex_state = 95, .external_lex_state = 2},
  [91] = {.lex_state = 95, .external_lex_state = 2},
  [92] = {.lex_state = 95, .external_lex_state = 2},
  [93] = {.lex_state = 95, .external_lex_state = 2},
  [94] = {.lex_state = 95, .external_lex_state = 2},
  [95] = {.lex_state = 95, .external_lex_state = 2},
  [96] = {.lex_state = 95, .external_lex_state = 2},
  [97] = {.lex_state = 95, .external_lex_state = 2},
  [98] = {.lex_state = 95, .external_lex_state = 2},
  [99] = {.lex_state = 95, .external_lex_state = 2},
  [100] = {.lex_state = 95, .external_lex_state = 2},
  [101] = {.lex_state = 95, .external_lex_state = 2},
  [102] = {.lex_state = 95, .external_lex_state = 2},
  [103] = {.lex_state = 95, .external_lex_state = 2},
  [104] = {.lex_state = 95, .external_lex_state = 2},
  [105] = {.lex_state = 95, .external_lex_state = 2},
  [106] = {.lex_state = 95, .external_lex_state = 2},
  [107] = {.lex_state = 95, .external_lex_state = 2},
  [108] = {.lex_state = 83, .external_lex_state = 2},
  [109] = {.lex_state = 80, .external_lex_state = 2},
  [110] = {.lex_state = 80, .external_lex_state = 2},
  [111] = {.lex_state = 80, .external_lex_state = 2},
  [112] = {.lex_state = 77, .external_lex_state = 1},
  [113] = {.lex_state = 77, .external_lex_state = 1},
  [114] = {.lex_state = 77, .external_lex_state = 1},
  [115] = {.lex_state = 77, .external_lex_state = 1},
  [116] = {.lex_state = 77, .external_lex_state = 1},
  [117] = {.lex_state = 77, .external_lex_state = 1},
  [118] = {.lex_state = 77, .external_lex_state = 1},
  [119] = {.lex_state = 77, .external_lex_state = 1},
  [120] = {.lex_state = 77, .external_lex_state = 1},
  [121] = {.lex_state = 77, .external_lex_state = 1},
  [122] = {.lex_state = 77, .external_lex_state = 1},
  [123] = {.lex_state = 77, .external_lex_state = 1},
  [124] = {.lex_state = 77, .external_lex_state = 1},
  [125] = {.lex_state = 77, .external_lex_state = 1},
  [126] = {.lex_state = 77, .external_lex_state = 1},
  [127] = {.lex_state = 77, .external_lex_state = 1},
  [128] = {.lex_state = 77, .external_lex_state = 1},
  [129] = {.lex_state = 77, .external_lex_state = 1},
  [130] = {.lex_state = 77, .external_lex_state = 1},
  [131] = {.lex_state = 77, .external_lex_state = 1},
  [132] = {.lex_state = 77, .external_lex_state = 1},
  [133] = {.lex_state = 77, .external_lex_state = 1},
  [134] = {.lex_state = 77, .external_lex_state = 1},
  [135] = {.lex_state = 77, .external_lex_state = 1},
  [136] = {.lex_state = 77, .external_lex_state = 1},
  [137] = {.lex_state = 77, .external_lex_state = 1},
  [138] = {.lex_state = 77, .external_lex_state = 1},
  [139] = {.lex_state = 77, .external_lex_state = 1},
  [140] = {.lex_state = 77, .external_lex_state = 1},
  [141] = {.lex_state = 77, .external_lex_state = 1},
  [142] = {.lex_state = 77, .external_lex_state = 1},
  [143] = {.lex_state = 77, .external_lex_state = 1},
  [144] = {.lex_state = 77, .external_lex_state = 1},
  [145] = {.lex_state = 77, .external_lex_state = 1},
  [146] = {.lex_state = 77, .external_lex_state = 1},
  [147] = {.lex_state = 77, .external_lex_state = 1},
  [148] = {.lex_state = 77, .external_lex_state = 1},
  [149] = {.lex_state = 77, .external_lex_state = 1},
  [150] = {.lex_state = 77, .external_lex_state = 1},
  [151] = {.lex_state = 77, .external_lex_state = 1},
  [152] = {.lex_state = 77, .external_lex_state = 1},
  [153] = {.lex_state = 77, .external_lex_state = 1},
  [154] = {.lex_state = 77, .external_lex_state = 1},
  [155] = {.lex_state = 99, .external_lex_state = 1},
  [156] = {.lex_state = 99, .external_lex_state = 1},
  [157] = {.lex_state = 99, .external_lex_state = 1},
  [158] = {.lex_state = 99, .external_lex_state = 1},
  [159] = {.lex_state = 99, .external_lex_state = 1},
  [160] = {.lex_state = 99, .external_lex_state = 1},
  [161] = {.lex_state = 99, .external_lex_state = 1},
  [162] = {.lex_state = 99, .external_lex_state = 1},
  [163] = {.lex_state = 99, .external_lex_state = 1},
  [164] = {.lex_state = 99, .external_lex_state = 1},
  [165] = {.lex_state = 99, .external_lex_state = 1},
  [166] = {.lex_state = 99, .external_lex_state = 1},
  [167] = {.lex_state = 99, .external_lex_state = 1},
  [168] = {.lex_state = 99, .external_lex_state = 1},
  [169] = {.lex_state = 99, .external_lex_state = 1},
  [170] = {.lex_state = 99, .external_lex_state = 1},
  [171] = {.lex_state = 99, .external_lex_state = 1},
  [172] = {.lex_state = 99, .external_lex_state = 1},
  [173] = {.lex_state = 99, .external_lex_state = 1},
  [174] = {.lex_state = 99, .external_lex_state = 1},
  [175] = {.lex_state = 99, .external_lex_state = 1},
  [176] = {.lex_state = 99, .external_lex_state = 1},
  [177] = {.lex_state = 99, .external_lex_state = 1},
  [178] = {.lex_state = 99, .external_lex_state = 1},
  [179] = {.lex_state = 99, .external_lex_state = 1},
  [180] = {.lex_state = 99, .external_lex_state = 1},
  [181] = {.lex_state = 99, .external_lex_state = 1},
  [182] = {.lex_state = 99, .external_lex_state = 1},
  [183] = {.lex_state = 99, .external_lex_state = 1},
  [184] = {.lex_state = 99, .external_lex_state = 1},
  [185] = {.lex_state = 99, .external_lex_state = 1},
  [186] = {.lex_state = 99, .external_lex_state = 1},
  [187] = {.lex_state = 99, .external_lex_state = 1},
  [188] = {.lex_state = 99, .external_lex_state = 1},
  [189] = {.lex_state = 99, .external_lex_state = 1},
  [190] = {.lex_state = 99, .external_lex_state = 1},
  [191] = {.lex_state = 99, .external_lex_state = 1},
  [192] = {.lex_state = 99, .external_lex_state = 1},
  [193] = {.lex_state = 99, .external_lex_state = 1},
  [194] = {.lex_state = 99, .external_lex_state = 1},
  [195] = {.lex_state = 99, .external_lex_state = 1},
  [196] = {.lex_state = 99, .external_lex_state = 1},
  [197] = {.lex_state = 99, .external_lex_state = 1},
  [198] = {.lex_state = 98, .external_lex_state = 6},
  [199] = {.lex_state = 98, .external_lex_state = 6},
  [200] = {.lex_state = 98, .external_lex_state = 6},
  [201] = {.lex_state = 98, .external_lex_state = 6},
  [202] = {.lex_state = 98, .external_lex_state = 6},
  [203] = {.lex_state = 98, .external_lex_state = 6},
  [204] = {.lex_state = 98, .external_lex_state = 6},
  [205] = {.lex_state = 98, .external_lex_state = 6},
  [206] = {.lex_state = 98, .external_lex_state = 6},
  [207] = {.lex_state = 98, .external_lex_state = 6},
  [208] = {.lex_state = 98, .external_lex_state = 6},
  [209] = {.lex_state = 98, .external_lex_state = 6},
  [210] = {.lex_state = 98, .external_lex_state = 6},
  [211] = {.lex_state = 98, .external_lex_state = 6},
  [212] = {.lex_state = 98, .external_lex_state = 6},
  [213] = {.lex_state = 98, .external_lex_state = 6},
  [214] = {.lex_state = 98, .external_lex_state = 6},
  [215] = {.lex_state = 98, .external_lex_state = 6},
  [216] = {.lex_state = 98, .external_lex_state = 6},
  [217] = {.lex_state = 98, .external_lex_state = 6},
  [218] = {.lex_state = 98, .external_lex_state = 6},
  [219] = {.lex_state = 98, .external_lex_state = 6},
  [220] = {.lex_state = 98, .external_lex_state = 6},
  [221] = {.lex_state = 98, .external_lex_state = 6},
  [222] = {.lex_state = 98, .external_lex_state = 6},
  [223] = {.lex_state = 98, .external_lex_state = 6},
  [224] = {.lex_state = 98, .external_lex_state = 6},
  [225] = {.lex_state = 98, .external_lex_state = 6},
  [226] = {.lex_state = 98, .external_lex_state = 6},
  [227] = {.lex_state = 98, .external_lex_state = 6},
  [228] = {.lex_state = 98, .external_lex_state = 6},
  [229] = {.lex_state = 98, .external_lex_state = 6},
  [230] = {.lex_state = 98, .external_lex_state = 6},
  [231] = {.lex_state = 98, .external_lex_state = 6},
  [232] = {.lex_state = 98, .external_lex_state = 6},
  [233] = {.lex_state = 98, .external_lex_state = 6},
  [234] = {.lex_state = 98, .external_lex_state = 6},
  [235] = {.lex_state = 98, .external_lex_state = 6},
  [236] = {.lex_state = 98, .external_lex_state = 6},
  [237] = {.lex_state = 98, .external_lex_state = 6},
  [238] = {.lex_state = 98, .external_lex_state = 6},
  [239] = {.lex_state = 98, .external_lex_state = 6},
  [240] = {.lex_state = 98, .external_lex_state = 6},
  [241] = {.lex_state = 98, .external_lex_state = 6},
  [242] = {.lex_state = 97, .external_lex_state = 3},
  [243] = {.lex_state = 97, .external_lex_state = 3},
  [244] = {.lex_state = 97, .external_lex_state = 3},
  [245] = {.lex_state = 97, .external_lex_state = 3},
  [246] = {.lex_state = 97, .external_lex_state = 3},
  [247] = {.lex_state = 23, .external_lex_state = 7},
  [248] = {.lex_state = 23, .external_lex_state = 7},
  [249] = {.lex_state = 23, .external_lex_state = 7},
  [250] = {.lex_state = 23, .external_lex_state = 7},
  [251] = {.lex_state = 23, .external_lex_state = 7},
  [252] = {.lex_state = 23, .external_lex_state = 7},
  [253] = {.lex_state = 23, .external_lex_state = 7},
  [254] = {.lex_state = 23, .external_lex_state = 7},
  [255] = {.lex_state = 23, .external_lex_state = 7},
  [256] = {.lex_state = 23, .external_lex_state = 7},
  [257] = {.lex_state = 23, .external_lex_state = 7},
  [258] = {.lex_state = 23, .external_lex_state = 7},
  [259] = {.lex_state = 23, .external_lex_state = 7},
  [260] = {.lex_state = 23, .external_lex_state = 7},
  [261] = {.lex_state = 23, .external_lex_state = 7},
  [262] = {.lex_state = 23, .external_lex_state = 7},
  [263] = {.lex_state = 23, .external_lex_state = 7},
  [264] = {.lex_state = 23, .external_lex_state = 7},
  [265] = {.lex_state = 23, .external_lex_state = 7},
  [266] = {.lex_state = 23, .external_lex_state = 7},
  [267] = {.lex_state = 23, .external_lex_state = 7},
  [268] = {.lex_state = 23, .external_lex_state = 7},
  [269] = {.lex_state = 23, .external_lex_state = 7},
  [270] = {.lex_state = 23, .external_lex_state = 7},
  [271] = {.lex_state = 23, .external_lex_state = 7},
  [272] = {.lex_state = 23, .external_lex_state = 7},
  [273] = {.lex_state = 23, .external_lex_state = 7},
  [274] = {.lex_state = 23, .external_lex_state = 7},
  [275] = {.lex_state = 23, .external_lex_state = 7},
  [276] = {.lex_state = 23, .external_lex_state = 7},
  [277] = {.lex_state = 23, .external_lex_state = 7},
  [278] = {.lex_state = 23, .external_lex_state = 7},
  [279] = {.lex_state = 23, .external_lex_state = 7},
  [280] = {.lex_state = 23, .external_lex_state = 7},
  [281] = {.lex_state = 23, .external_lex_state = 7},
  [282] = {.lex_state = 23, .external_lex_state = 7},
  [283] = {.lex_state = 23, .external_lex_state = 7},
  [284] = {.lex_state = 23, .external_lex_state = 7},
  [285] = {.lex_state = 23, .external_lex_state = 7},
  [286] = {.lex_state = 23, .external_lex_state = 7},
  [287] = {.lex_state = 23, .external_lex_state = 7},
  [288] = {.lex_state = 23, .external_lex_state = 7},
  [289] = {.lex_state = 23, .external_lex_state = 7},
  [290] = {.lex_state = 23, .external_lex_state = 7},
  [291] = {.lex_state = 23, .external_lex_state = 7},
  [292] = {.lex_state = 23, .external_lex_state = 7},
  [293] = {.lex_state = 23, .external_lex_state = 7},
  [294] = {.lex_state = 23, .external_lex_state = 7},
  [295] = {.lex_state = 23, .external_lex_state = 7},
  [296] = {.lex_state = 23, .external_lex_state = 7},
  [297] = {.lex_state = 23, .external_lex_state = 7},
  [298] = {.lex_state = 23, .external_lex_state = 7},
  [299] = {.lex_state = 23, .external_lex_state = 7},
  [300] = {.lex_state = 23, .external_lex_state = 7},
  [301] = {.lex_state = 23, .external_lex_state = 7},
  [302] = {.lex_state = 77, .external_lex_state = 1},
  [303] = {.lex_state = 23, .external_lex_state = 2},
  [304] = {.lex_state = 23, .external_lex_state = 2},
  [305] = {.lex_state = 23, .external_lex_state = 2},
  [306] = {.lex_state = 23, .external_lex_state = 2},
  [307] = {.lex_state = 23, .external_lex_state = 2},
  [308] = {.lex_state = 23, .external_lex_state = 2},
  [309] = {.lex_state = 23, .external_lex_state = 2},
  [310] = {.lex_state = 23, .external_lex_state = 2},
  [311] = {.lex_state = 23, .external_lex_state = 2},
  [312] = {.lex_state = 23, .external_lex_state = 2},
  [313] = {.lex_state = 23, .external_lex_state = 2},
  [314] = {.lex_state = 23, .external_lex_state = 2},
  [315] = {.lex_state = 23, .external_lex_state = 2},
  [316] = {.lex_state = 23, .external_lex_state = 2},
  [317] = {.lex_state = 23, .external_lex_state = 2},
  [318] = {.lex_state = 23, .external_lex_state = 2},
  [319] = {.lex_state = 23, .external_lex_state = 2},
  [320] = {.lex_state = 23, .external_lex_state = 2},
  [321] = {.lex_state = 23, .external_lex_state = 2},
  [322] = {.lex_state = 23, .external_lex_state = 2},
  [323] = {.lex_state = 23, .external_lex_state = 2},
  [324] = {.lex_state = 23, .external_lex_state = 2},
  [325] = {.lex_state = 23, .external_lex_state = 2},
  [326] = {.lex_state = 23, .external_lex_state = 2},
  [327] = {.lex_state = 23, .external_lex_state = 2},
  [328] = {.lex_state = 23, .external_lex_state = 2},
  [329] = {.lex_state = 23, .external_lex_state = 2},
  [330] = {.lex_state = 23, .external_lex_state = 2},
  [331] = {.lex_state = 23, .external_lex_state = 2},
  [332] = {.lex_state = 23, .external_lex_state = 2},
  [333] = {.lex_state = 23, .external_lex_state = 2},
  [334] = {.lex_state = 23, .external_lex_state = 2},
  [335] = {.lex_state = 23, .external_lex_state = 2},
  [336] = {.lex_state = 23, .external_lex_state = 2},
  [337] = {.lex_state = 23, .external_lex_state = 2},
  [338] = {.lex_state = 23, .external_lex_state = 2},
  [339] = {.lex_state = 23, .external_lex_state = 2},
  [340] = {.lex_state = 23, .external_lex_state = 2},
  [341] = {.lex_state = 23, .external_lex_state = 2},
  [342] = {.lex_state = 23, .external_lex_state = 2},
  [343] = {.lex_state = 23, .external_lex_state = 2},
  [344] = {.lex_state = 23, .external_lex_state = 2},
  [345] = {.lex_state = 23, .external_lex_state = 2},
  [346] = {.lex_state = 77, .external_lex_state = 1},
  [347] = {.lex_state = 77, .external_lex_state = 1},
  [348] = {.lex_state = 77, .external_lex_state = 1},
  [349] = {.lex_state = 77, .external_lex_state = 1},
  [350] = {.lex_state = 77, .external_lex_state = 1},
  [351] = {.lex_state = 77, .external_lex_state = 1},
  [352] = {.lex_state = 96, .external_lex_state = 1},
  [353] = {.lex_state = 96, .external_lex_state = 1},
  [354] = {.lex_state = 96, .external_lex_state = 1},
  [355] = {.lex_state = 0, .external_lex_state = 6},
  [356] = {.lex_state = 96, .external_lex_state = 1},
  [357] = {.lex_state = 96, .external_lex_state = 1},
  [358] = {.lex_state = 77, .external_lex_state = 4},
  [359] = {.lex_state = 0, .external_lex_state = 6},
  [360] = {.lex_state = 97, .external_lex_state = 3},
  [361] = {.lex_state = 0, .external_lex_state = 6},
  [362] = {.lex_state = 97, .external_lex_state = 3},
  [363] = {.lex_state = 96, .external_lex_state = 1},
  [364] = {.lex_state = 0, .external_lex_state = 6},
  [365] = {.lex_state = 96, .external_lex_state = 1},
  [366] = {.lex_state = 96, .external_lex_state = 1},
  [367] = {.lex_state = 0, .external_lex_state = 6},
  [368] = {.lex_state = 77, .external_lex_state = 3},
  [369] = {.lex_state = 77, .external_lex_state = 3},
  [370] = {.lex_state = 77, .external_lex_state = 3},
  [371] = {.lex_state = 97, .external_lex_state = 3},
  [372] = {.lex_state = 96, .external_lex_state = 1},
  [373] = {.lex_state = 96, .external_lex_state = 1},
  [374] = {.lex_state = 97, .external_lex_state = 3},
  [375] = {.lex_state = 97, .external_lex_state = 3},
  [376] = {.lex_state = 0, .external_lex_state = 6},
  [377] = {.lex_state = 97, .external_lex_state = 3},
  [378] = {.lex_state = 0, .external_lex_state = 6},
  [379] = {.lex_state = 0, .external_lex_state = 4},
  [380] = {.lex_state = 97, .external_lex_state = 3},
  [381] = {.lex_state = 0, .external_lex_state = 4},
  [382] = {.lex_state = 0, .external_lex_state = 7},
  [383] = {.lex_state = 0, .external_lex_state = 6},
  [384] = {.lex_state = 0, .external_lex_state = 4},
  [385] = {.lex_state = 97, .external_lex_state = 3},
  [386] = {.lex_state = 97, .external_lex_state = 3},
  [387] = {.lex_state = 0, .external_lex_state = 7},
  [388] = {.lex_state = 0, .external_lex_state = 7},
  [389] = {.lex_state = 0, .external_lex_state = 7},
  [390] = {.lex_state = 97, .external_lex_state = 3},
  [391] = {.lex_state = 0, .external_lex_state = 7},
  [392] = {.lex_state = 97, .external_lex_state = 3},
  [393] = {.lex_state = 97, .external_lex_state = 3},
  [394] = {.lex_state = 0, .external_lex_state = 7},
  [395] = {.lex_state = 97, .external_lex_state = 3},
  [396] = {.lex_state = 0, .external_lex_state = 7},
  [397] = {.lex_state = 97, .external_lex_state = 3},
  [398] = {.lex_state = 0, .external_lex_state = 3},
  [399] = {.lex_state = 26, .external_lex_state = 2},
  [400] = {.lex_state = 0, .external_lex_state = 3},
  [401] = {.lex_state = 0, .external_lex_state = 3},
  [402] = {.lex_state = 0, .external_lex_state = 3},
  [403] = {.lex_state = 0, .external_lex_state = 3},
  [404] = {.lex_state = 0, .external_lex_state = 7},
  [405] = {.lex_state = 0, .external_lex_state = 3},
  [406] = {.lex_state = 24, .external_lex_state = 2},
  [407] = {.lex_state = 0, .external_lex_state = 2},
  [408] = {.lex_state = 0, .external_lex_state = 3},
  [409] = {.lex_state = 0, .external_lex_state = 7},
  [410] = {.lex_state = 0, .external_lex_state = 3},
  [411] = {.lex_state = 0, .external_lex_state = 3},
  [412] = {.lex_state = 97, .external_lex_state = 2},
  [413] = {.lex_state = 0, .external_lex_state = 3},
  [414] = {.lex_state = 0, .external_lex_state = 3},
  [415] = {.lex_state = 26, .external_lex_state = 2},
  [416] = {.lex_state = 24, .external_lex_state = 2},
  [417] = {.lex_state = 24, .external_lex_state = 2},
  [418] = {.lex_state = 0, .external_lex_state = 3},
  [419] = {.lex_state = 24, .external_lex_state = 2},
  [420] = {.lex_state = 0, .external_lex_state = 3},
  [421] = {.lex_state = 24, .external_lex_state = 2},
  [422] = {.lex_state = 0, .external_lex_state = 3},
  [423] = {.lex_state = 24, .external_lex_state = 2},
  [424] = {.lex_state = 97, .external_lex_state = 2},
  [425] = {.lex_state = 0, .external_lex_state = 3},
  [426] = {.lex_state = 24, .external_lex_state = 2},
  [427] = {.lex_state = 0, .external_lex_state = 3},
  [428] = {.lex_state = 24, .external_lex_state = 2},
  [429] = {.lex_state = 0, .external_lex_state = 3},
  [430] = {.lex_state = 24, .external_lex_state = 2},
  [431] = {.lex_state = 0, .external_lex_state = 3},
  [432] = {.lex_state = 97, .external_lex_state = 2},
  [433] = {.lex_state = 0, .external_lex_state = 3},
  [434] = {.lex_state = 0, .external_lex_state = 3},
  [435] = {.lex_state = 0, .external_lex_state = 3},
  [436] = {.lex_state = 0, .external_lex_state = 3},
  [437] = {.lex_state = 0, .external_lex_state = 7},
  [438] = {.lex_state = 0, .external_lex_state = 3},
  [439] = {.lex_state = 0, .external_lex_state = 2},
  [440] = {.lex_state = 0, .external_lex_state = 2},
  [441] = {.lex_state = 0, .external_lex_state = 7},
  [442] = {.lex_state = 0, .external_lex_state = 7},
  [443] = {.lex_state = 0, .external_lex_state = 2},
  [444] = {.lex_state = 0, .external_lex_state = 2},
  [445] = {.lex_state = 97, .external_lex_state = 2},
  [446] = {.lex_state = 0, .external_lex_state = 2},
  [447] = {.lex_state = 0, .external_lex_state = 7},
  [448] = {.lex_state = 25, .external_lex_state = 2},
  [449] = {.lex_state = 97, .external_lex_state = 2},
  [450] = {.lex_state = 0, .external_lex_state = 5},
  [451] = {.lex_state = 0, .external_lex_state = 2},
  [452] = {.lex_state = 33, .external_lex_state = 2},
  [453] = {.lex_state = 0, .external_lex_state = 5},
  [454] = {.lex_state = 33, .external_lex_state = 2},
  [455] = {.lex_state = 0, .external_lex_state = 2},
  [456] = {.lex_state = 97, .external_lex_state = 2},
  [457] = {.lex_state = 0, .external_lex_state = 3},
  [458] = {.lex_state = 33, .external_lex_state = 2},
  [459] = {.lex_state = 0, .external_lex_state = 3},
  [460] = {.lex_state = 94, .external_lex_state = 2},
  [461] = {.lex_state = 33, .external_lex_state = 2},
  [462] = {.lex_state = 25, .external_lex_state = 2},
  [463] = {.lex_state = 94, .external_lex_state = 2},
  [464] = {.lex_state = 25, .external_lex_state = 2},
  [465] = {.lex_state = 33, .external_lex_state = 2},
  [466] = {.lex_state = 97, .external_lex_state = 2},
  [467] = {.lex_state = 0, .external_lex_state = 5},
  [468] = {.lex_state = 0, .external_lex_state = 2},
  [469] = {.lex_state = 0, .external_lex_state = 2},
  [470] = {.lex_state = 0, .external_lex_state = 2},
  [471] = {.lex_state = 0, .external_lex_state = 2},
  [472] = {.lex_state = 0, .external_lex_state = 2},
  [473] = {.lex_state = 97, .external_lex_state = 2},
  [474] = {.lex_state = 0, .external_lex_state = 2},
  [475] = {.lex_state = 0, .external_lex_state = 2},
  [476] = {.lex_state = 25, .external_lex_state = 2},
  [477] = {.lex_state = 0, .external_lex_state = 2},
  [478] = {.lex_state = 0, .external_lex_state = 2},
  [479] = {.lex_state = 0, .external_lex_state = 2},
  [480] = {.lex_state = 0, .external_lex_state = 2},
  [481] = {.lex_state = 0, .external_lex_state = 2},
  [482] = {.lex_state = 0, .external_lex_state = 2},
  [483] = {.lex_state = 0, .external_lex_state = 2},
  [484] = {.lex_state = 0, .external_lex_state = 2},
  [485] = {.lex_state = 0, .external_lex_state = 2},
  [486] = {.lex_state = 0, .external_lex_state = 2},
  [487] = {.lex_state = 25, .external_lex_state = 2},
  [488] = {.lex_state = 25, .external_lex_state = 2},
  [489] = {.lex_state = 0, .external_lex_state = 2},
  [490] = {.lex_state = 0, .external_lex_state = 2},
  [491] = {.lex_state = 99, .external_lex_state = 2},
  [492] = {.lex_state = 0, .external_lex_state = 2},
  [493] = {.lex_state = 0, .external_lex_state = 2},
  [494] = {.lex_state = 25, .external_lex_state = 2},
  [495] = {.lex_state = 0, .external_lex_state = 2},
  [496] = {.lex_state = 0, .external_lex_state = 2},
  [497] = {.lex_state = 0, .external_lex_state = 2},
  [498] = {.lex_state = 0, .external_lex_state = 2},
  [499] = {.lex_state = 94, .external_lex_state = 2},
  [500] = {.lex_state = 0, .external_lex_state = 2},
  [501] = {.lex_state = 0, .external_lex_state = 2},
  [502] = {.lex_state = 0, .external_lex_state = 2},
  [503] = {.lex_state = 0, .external_lex_state = 2},
  [504] = {.lex_state = 0, .external_lex_state = 2},
  [505] = {.lex_state = 0, .external_lex_state = 2},
  [506] = {.lex_state = 0, .external_lex_state = 2},
  [507] = {.lex_state = 0, .external_lex_state = 2},
  [508] = {.lex_state = 97, .external_lex_state = 2},
  [509] = {.lex_state = 97, .external_lex_state = 2},
  [510] = {.lex_state = 0, .external_lex_state = 3},
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
    [sym_program] = STATE(490),
    [sym__statement] = STATE(7),
    [sym_directive] = STATE(434),
    [sym__macro_directive] = STATE(414),
    [sym__numeric_directive] = STATE(436),
    [sym_numeric_mnemonic] = STATE(385),
    [sym__string_directive] = STATE(425),
    [sym_string_mnemonic] = STATE(509),
    [sym__control_directive] = STATE(402),
    [sym_control_mnemonic] = STATE(390),
    [sym_instruction] = STATE(434),
    [sym__label] = STATE(7),
    [aux_sym_program_repeat1] = STATE(7),
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
    STATE(161), 1,
      sym__assignment_expression,
    STATE(162), 1,
      sym__logical_or_expression,
    STATE(163), 1,
      sym__wrapped_logical_or_expression,
    STATE(164), 1,
      sym__logical_and_expression,
    STATE(165), 1,
      sym__wrapped_logical_and_expression,
    STATE(166), 1,
      sym__bitwise_or_expression,
    STATE(167), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(168), 1,
      sym__bitwise_xor_expression,
    STATE(169), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(170), 1,
      sym__bitwise_and_expression,
    STATE(171), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(172), 1,
      sym__equality_expression,
    STATE(173), 1,
      sym__wrapped_equality_expression,
    STATE(174), 1,
      sym__relational_expression,
    STATE(175), 1,
      sym__wrapped_relational_expression,
    STATE(176), 1,
      sym__shift_expression,
    STATE(177), 1,
      sym__wrapped_shift_expression,
    STATE(178), 1,
      sym__additive_expression,
    STATE(179), 1,
      sym__wrapped_additive_expression,
    STATE(180), 1,
      sym__multiplicative_expression,
    STATE(353), 1,
      sym__wrapped_assignment_expression,
    STATE(401), 1,
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
    STATE(354), 4,
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
    STATE(181), 10,
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
    STATE(161), 1,
      sym__assignment_expression,
    STATE(162), 1,
      sym__logical_or_expression,
    STATE(163), 1,
      sym__wrapped_logical_or_expression,
    STATE(164), 1,
      sym__logical_and_expression,
    STATE(165), 1,
      sym__wrapped_logical_and_expression,
    STATE(166), 1,
      sym__bitwise_or_expression,
    STATE(167), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(168), 1,
      sym__bitwise_xor_expression,
    STATE(169), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(170), 1,
      sym__bitwise_and_expression,
    STATE(171), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(172), 1,
      sym__equality_expression,
    STATE(173), 1,
      sym__wrapped_equality_expression,
    STATE(174), 1,
      sym__relational_expression,
    STATE(175), 1,
      sym__wrapped_relational_expression,
    STATE(176), 1,
      sym__shift_expression,
    STATE(177), 1,
      sym__wrapped_shift_expression,
    STATE(178), 1,
      sym__additive_expression,
    STATE(179), 1,
      sym__wrapped_additive_expression,
    STATE(180), 1,
      sym__multiplicative_expression,
    STATE(353), 1,
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
    ACTIONS(53), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
    STATE(372), 4,
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
    STATE(181), 10,
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
  [277] = 38,
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
    STATE(161), 1,
      sym__assignment_expression,
    STATE(162), 1,
      sym__logical_or_expression,
    STATE(163), 1,
      sym__wrapped_logical_or_expression,
    STATE(164), 1,
      sym__logical_and_expression,
    STATE(165), 1,
      sym__wrapped_logical_and_expression,
    STATE(166), 1,
      sym__bitwise_or_expression,
    STATE(167), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(168), 1,
      sym__bitwise_xor_expression,
    STATE(169), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(170), 1,
      sym__bitwise_and_expression,
    STATE(171), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(172), 1,
      sym__equality_expression,
    STATE(173), 1,
      sym__wrapped_equality_expression,
    STATE(174), 1,
      sym__relational_expression,
    STATE(175), 1,
      sym__wrapped_relational_expression,
    STATE(176), 1,
      sym__shift_expression,
    STATE(177), 1,
      sym__wrapped_shift_expression,
    STATE(178), 1,
      sym__additive_expression,
    STATE(179), 1,
      sym__wrapped_additive_expression,
    STATE(180), 1,
      sym__multiplicative_expression,
    STATE(353), 1,
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
    ACTIONS(55), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
    STATE(372), 4,
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
    STATE(181), 10,
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
  [414] = 38,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      sym_unary_minus_operator,
    ACTIONS(65), 1,
      sym_relocation_type,
    ACTIONS(71), 1,
      aux_sym_decimal_token1,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(79), 1,
      aux_sym_symbol_token1,
    STATE(200), 1,
      sym__logical_or_expression,
    STATE(201), 1,
      sym__wrapped_logical_or_expression,
    STATE(202), 1,
      sym__logical_and_expression,
    STATE(203), 1,
      sym__wrapped_logical_and_expression,
    STATE(204), 1,
      sym__bitwise_or_expression,
    STATE(205), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(206), 1,
      sym__bitwise_xor_expression,
    STATE(207), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(208), 1,
      sym__bitwise_and_expression,
    STATE(209), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(219), 1,
      sym__assignment_expression,
    STATE(221), 1,
      sym__equality_expression,
    STATE(226), 1,
      sym__wrapped_equality_expression,
    STATE(227), 1,
      sym__relational_expression,
    STATE(228), 1,
      sym__wrapped_relational_expression,
    STATE(229), 1,
      sym__shift_expression,
    STATE(230), 1,
      sym__wrapped_shift_expression,
    STATE(231), 1,
      sym__additive_expression,
    STATE(232), 1,
      sym__wrapped_additive_expression,
    STATE(233), 1,
      sym__multiplicative_expression,
    STATE(359), 1,
      sym__wrapped_assignment_expression,
    STATE(403), 1,
      sym__call_expression,
    STATE(418), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(63), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(69), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(361), 2,
      sym__operand,
      sym_string,
    ACTIONS(57), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(67), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(234), 10,
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
  [549] = 20,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(86), 1,
      sym_line_comment,
    ACTIONS(89), 1,
      sym_macro_mnemonic,
    ACTIONS(98), 1,
      aux_sym_control_mnemonic_token1,
    ACTIONS(101), 1,
      sym_opcode,
    STATE(385), 1,
      sym_numeric_mnemonic,
    STATE(390), 1,
      sym_control_mnemonic,
    STATE(402), 1,
      sym__control_directive,
    STATE(414), 1,
      sym__macro_directive,
    STATE(425), 1,
      sym__string_directive,
    STATE(436), 1,
      sym__numeric_directive,
    STATE(509), 1,
      sym_string_mnemonic,
    STATE(438), 2,
      sym_directive,
      sym_instruction,
    ACTIONS(83), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
    STATE(6), 3,
      sym__statement,
      sym__label,
      aux_sym_program_repeat1,
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
  [647] = 20,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(13), 1,
      sym_macro_mnemonic,
    ACTIONS(19), 1,
      aux_sym_control_mnemonic_token1,
    ACTIONS(21), 1,
      sym_opcode,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 1,
      sym_line_comment,
    STATE(385), 1,
      sym_numeric_mnemonic,
    STATE(390), 1,
      sym_control_mnemonic,
    STATE(402), 1,
      sym__control_directive,
    STATE(414), 1,
      sym__macro_directive,
    STATE(425), 1,
      sym__string_directive,
    STATE(436), 1,
      sym__numeric_directive,
    STATE(509), 1,
      sym_string_mnemonic,
    STATE(435), 2,
      sym_directive,
      sym_instruction,
    ACTIONS(109), 3,
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
  [745] = 37,
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
    STATE(161), 1,
      sym__assignment_expression,
    STATE(162), 1,
      sym__logical_or_expression,
    STATE(163), 1,
      sym__wrapped_logical_or_expression,
    STATE(164), 1,
      sym__logical_and_expression,
    STATE(165), 1,
      sym__wrapped_logical_and_expression,
    STATE(166), 1,
      sym__bitwise_or_expression,
    STATE(167), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(168), 1,
      sym__bitwise_xor_expression,
    STATE(169), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(170), 1,
      sym__bitwise_and_expression,
    STATE(171), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(172), 1,
      sym__equality_expression,
    STATE(173), 1,
      sym__wrapped_equality_expression,
    STATE(174), 1,
      sym__relational_expression,
    STATE(175), 1,
      sym__wrapped_relational_expression,
    STATE(176), 1,
      sym__shift_expression,
    STATE(177), 1,
      sym__wrapped_shift_expression,
    STATE(178), 1,
      sym__additive_expression,
    STATE(179), 1,
      sym__wrapped_additive_expression,
    STATE(180), 1,
      sym__multiplicative_expression,
    STATE(353), 1,
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
    STATE(372), 4,
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
    STATE(181), 10,
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
  [876] = 36,
    ACTIONS(61), 1,
      sym_unary_minus_operator,
    ACTIONS(65), 1,
      sym_relocation_type,
    ACTIONS(71), 1,
      aux_sym_decimal_token1,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(79), 1,
      aux_sym_symbol_token1,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    STATE(200), 1,
      sym__logical_or_expression,
    STATE(201), 1,
      sym__wrapped_logical_or_expression,
    STATE(202), 1,
      sym__logical_and_expression,
    STATE(203), 1,
      sym__wrapped_logical_and_expression,
    STATE(204), 1,
      sym__bitwise_or_expression,
    STATE(205), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(206), 1,
      sym__bitwise_xor_expression,
    STATE(207), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(208), 1,
      sym__bitwise_and_expression,
    STATE(209), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(219), 1,
      sym__assignment_expression,
    STATE(221), 1,
      sym__equality_expression,
    STATE(226), 1,
      sym__wrapped_equality_expression,
    STATE(227), 1,
      sym__relational_expression,
    STATE(228), 1,
      sym__wrapped_relational_expression,
    STATE(229), 1,
      sym__shift_expression,
    STATE(230), 1,
      sym__wrapped_shift_expression,
    STATE(231), 1,
      sym__additive_expression,
    STATE(232), 1,
      sym__wrapped_additive_expression,
    STATE(233), 1,
      sym__multiplicative_expression,
    STATE(359), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(63), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(69), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(376), 2,
      sym__operand,
      sym_string,
    ACTIONS(113), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(67), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(234), 10,
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
  [1005] = 36,
    ACTIONS(61), 1,
      sym_unary_minus_operator,
    ACTIONS(65), 1,
      sym_relocation_type,
    ACTIONS(71), 1,
      aux_sym_decimal_token1,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(79), 1,
      aux_sym_symbol_token1,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    STATE(200), 1,
      sym__logical_or_expression,
    STATE(201), 1,
      sym__wrapped_logical_or_expression,
    STATE(202), 1,
      sym__logical_and_expression,
    STATE(203), 1,
      sym__wrapped_logical_and_expression,
    STATE(204), 1,
      sym__bitwise_or_expression,
    STATE(205), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(206), 1,
      sym__bitwise_xor_expression,
    STATE(207), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(208), 1,
      sym__bitwise_and_expression,
    STATE(209), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(219), 1,
      sym__assignment_expression,
    STATE(221), 1,
      sym__equality_expression,
    STATE(226), 1,
      sym__wrapped_equality_expression,
    STATE(227), 1,
      sym__relational_expression,
    STATE(228), 1,
      sym__wrapped_relational_expression,
    STATE(229), 1,
      sym__shift_expression,
    STATE(230), 1,
      sym__wrapped_shift_expression,
    STATE(231), 1,
      sym__additive_expression,
    STATE(232), 1,
      sym__wrapped_additive_expression,
    STATE(233), 1,
      sym__multiplicative_expression,
    STATE(359), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(63), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(69), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(376), 2,
      sym__operand,
      sym_string,
    ACTIONS(117), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(67), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(234), 10,
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
  [1134] = 35,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      sym_unary_minus_operator,
    ACTIONS(129), 1,
      sym_relocation_type,
    ACTIONS(135), 1,
      aux_sym_decimal_token1,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(141), 1,
      aux_sym_symbol_token1,
    STATE(112), 1,
      sym__wrapped_additive_expression,
    STATE(117), 1,
      sym__assignment_expression,
    STATE(118), 1,
      sym__logical_or_expression,
    STATE(119), 1,
      sym__wrapped_logical_or_expression,
    STATE(120), 1,
      sym__logical_and_expression,
    STATE(121), 1,
      sym__wrapped_logical_and_expression,
    STATE(122), 1,
      sym__bitwise_or_expression,
    STATE(123), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(124), 1,
      sym__bitwise_xor_expression,
    STATE(125), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(126), 1,
      sym__bitwise_and_expression,
    STATE(127), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(128), 1,
      sym__equality_expression,
    STATE(129), 1,
      sym__wrapped_equality_expression,
    STATE(130), 1,
      sym__relational_expression,
    STATE(131), 1,
      sym__wrapped_relational_expression,
    STATE(133), 1,
      sym__wrapped_shift_expression,
    STATE(134), 1,
      sym__additive_expression,
    STATE(135), 1,
      sym__multiplicative_expression,
    STATE(154), 1,
      sym__shift_expression,
    STATE(350), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(123), 2,
      sym__data_separator,
      anon_sym_COMMA,
    ACTIONS(127), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(133), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(119), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(131), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(136), 10,
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
  [1260] = 35,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      sym_unary_minus_operator,
    ACTIONS(129), 1,
      sym_relocation_type,
    ACTIONS(135), 1,
      aux_sym_decimal_token1,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(141), 1,
      aux_sym_symbol_token1,
    STATE(112), 1,
      sym__wrapped_additive_expression,
    STATE(117), 1,
      sym__assignment_expression,
    STATE(118), 1,
      sym__logical_or_expression,
    STATE(119), 1,
      sym__wrapped_logical_or_expression,
    STATE(120), 1,
      sym__logical_and_expression,
    STATE(121), 1,
      sym__wrapped_logical_and_expression,
    STATE(122), 1,
      sym__bitwise_or_expression,
    STATE(123), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(124), 1,
      sym__bitwise_xor_expression,
    STATE(125), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(126), 1,
      sym__bitwise_and_expression,
    STATE(127), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(128), 1,
      sym__equality_expression,
    STATE(129), 1,
      sym__wrapped_equality_expression,
    STATE(130), 1,
      sym__relational_expression,
    STATE(131), 1,
      sym__wrapped_relational_expression,
    STATE(133), 1,
      sym__wrapped_shift_expression,
    STATE(134), 1,
      sym__additive_expression,
    STATE(135), 1,
      sym__multiplicative_expression,
    STATE(154), 1,
      sym__shift_expression,
    STATE(350), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(123), 2,
      sym__data_separator,
      anon_sym_COMMA,
    ACTIONS(127), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(133), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(143), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(131), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(136), 10,
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
  [1386] = 39,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    ACTIONS(149), 1,
      sym_unary_minus_operator,
    ACTIONS(153), 1,
      sym_relocation_type,
    ACTIONS(159), 1,
      aux_sym_decimal_token1,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(169), 1,
      aux_sym_symbol_token1,
    STATE(247), 1,
      sym__wrapped_logical_and_expression,
    STATE(249), 1,
      sym__assignment_expression,
    STATE(251), 1,
      sym__logical_or_expression,
    STATE(252), 1,
      sym__wrapped_logical_or_expression,
    STATE(253), 1,
      sym__logical_and_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(271), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__bitwise_and_expression,
    STATE(276), 1,
      sym_symbol,
    STATE(277), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(278), 1,
      sym__equality_expression,
    STATE(279), 1,
      sym__wrapped_equality_expression,
    STATE(280), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(284), 1,
      sym__additive_expression,
    STATE(285), 1,
      sym__wrapped_additive_expression,
    STATE(286), 1,
      sym__multiplicative_expression,
    STATE(387), 1,
      sym__wrapped_assignment_expression,
    STATE(485), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(151), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(157), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(165), 2,
      sym_register,
      sym_macro_variable,
    STATE(409), 2,
      sym__operand,
      sym_string,
    ACTIONS(155), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(287), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1519] = 37,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    ACTIONS(149), 1,
      sym_unary_minus_operator,
    ACTIONS(153), 1,
      sym_relocation_type,
    ACTIONS(159), 1,
      aux_sym_decimal_token1,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(169), 1,
      aux_sym_symbol_token1,
    STATE(247), 1,
      sym__wrapped_logical_and_expression,
    STATE(249), 1,
      sym__assignment_expression,
    STATE(251), 1,
      sym__logical_or_expression,
    STATE(252), 1,
      sym__wrapped_logical_or_expression,
    STATE(253), 1,
      sym__logical_and_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(271), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__bitwise_and_expression,
    STATE(277), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(278), 1,
      sym__equality_expression,
    STATE(279), 1,
      sym__wrapped_equality_expression,
    STATE(280), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(284), 1,
      sym__additive_expression,
    STATE(285), 1,
      sym__wrapped_additive_expression,
    STATE(286), 1,
      sym__multiplicative_expression,
    STATE(389), 1,
      sym__wrapped_assignment_expression,
    STATE(504), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(151), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(157), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(409), 2,
      sym__operand,
      sym_string,
    ACTIONS(155), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(287), 10,
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
  [1648] = 35,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      sym_unary_minus_operator,
    ACTIONS(129), 1,
      sym_relocation_type,
    ACTIONS(135), 1,
      aux_sym_decimal_token1,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(141), 1,
      aux_sym_symbol_token1,
    STATE(112), 1,
      sym__wrapped_additive_expression,
    STATE(117), 1,
      sym__assignment_expression,
    STATE(118), 1,
      sym__logical_or_expression,
    STATE(119), 1,
      sym__wrapped_logical_or_expression,
    STATE(120), 1,
      sym__logical_and_expression,
    STATE(121), 1,
      sym__wrapped_logical_and_expression,
    STATE(122), 1,
      sym__bitwise_or_expression,
    STATE(123), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(124), 1,
      sym__bitwise_xor_expression,
    STATE(125), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(126), 1,
      sym__bitwise_and_expression,
    STATE(127), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(128), 1,
      sym__equality_expression,
    STATE(129), 1,
      sym__wrapped_equality_expression,
    STATE(130), 1,
      sym__relational_expression,
    STATE(131), 1,
      sym__wrapped_relational_expression,
    STATE(133), 1,
      sym__wrapped_shift_expression,
    STATE(134), 1,
      sym__additive_expression,
    STATE(135), 1,
      sym__multiplicative_expression,
    STATE(154), 1,
      sym__shift_expression,
    STATE(302), 1,
      sym__wrapped_assignment_expression,
    STATE(431), 1,
      sym_numeric_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(127), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(133), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(171), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(131), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(136), 10,
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
  [1773] = 34,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      sym_unary_minus_operator,
    ACTIONS(129), 1,
      sym_relocation_type,
    ACTIONS(135), 1,
      aux_sym_decimal_token1,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(141), 1,
      aux_sym_symbol_token1,
    STATE(112), 1,
      sym__wrapped_additive_expression,
    STATE(117), 1,
      sym__assignment_expression,
    STATE(118), 1,
      sym__logical_or_expression,
    STATE(119), 1,
      sym__wrapped_logical_or_expression,
    STATE(120), 1,
      sym__logical_and_expression,
    STATE(121), 1,
      sym__wrapped_logical_and_expression,
    STATE(122), 1,
      sym__bitwise_or_expression,
    STATE(123), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(124), 1,
      sym__bitwise_xor_expression,
    STATE(125), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(126), 1,
      sym__bitwise_and_expression,
    STATE(127), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(128), 1,
      sym__equality_expression,
    STATE(129), 1,
      sym__wrapped_equality_expression,
    STATE(130), 1,
      sym__relational_expression,
    STATE(131), 1,
      sym__wrapped_relational_expression,
    STATE(133), 1,
      sym__wrapped_shift_expression,
    STATE(134), 1,
      sym__additive_expression,
    STATE(135), 1,
      sym__multiplicative_expression,
    STATE(154), 1,
      sym__shift_expression,
    STATE(350), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(127), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(133), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(131), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    ACTIONS(173), 5,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
    STATE(136), 10,
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
  [1896] = 38,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      sym_unary_minus_operator,
    ACTIONS(153), 1,
      sym_relocation_type,
    ACTIONS(159), 1,
      aux_sym_decimal_token1,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(169), 1,
      aux_sym_symbol_token1,
    STATE(247), 1,
      sym__wrapped_logical_and_expression,
    STATE(249), 1,
      sym__assignment_expression,
    STATE(251), 1,
      sym__logical_or_expression,
    STATE(252), 1,
      sym__wrapped_logical_or_expression,
    STATE(253), 1,
      sym__logical_and_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(271), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__bitwise_and_expression,
    STATE(277), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(278), 1,
      sym__equality_expression,
    STATE(279), 1,
      sym__wrapped_equality_expression,
    STATE(280), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(284), 1,
      sym__additive_expression,
    STATE(285), 1,
      sym__wrapped_additive_expression,
    STATE(286), 1,
      sym__multiplicative_expression,
    STATE(294), 1,
      sym_symbol,
    STATE(389), 1,
      sym__wrapped_assignment_expression,
    STATE(489), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(151), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(157), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(175), 2,
      sym_register,
      sym_macro_variable,
    STATE(409), 2,
      sym__operand,
      sym_string,
    ACTIONS(155), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(287), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2026] = 38,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      sym_unary_minus_operator,
    ACTIONS(153), 1,
      sym_relocation_type,
    ACTIONS(159), 1,
      aux_sym_decimal_token1,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(169), 1,
      aux_sym_symbol_token1,
    STATE(247), 1,
      sym__wrapped_logical_and_expression,
    STATE(249), 1,
      sym__assignment_expression,
    STATE(251), 1,
      sym__logical_or_expression,
    STATE(252), 1,
      sym__wrapped_logical_or_expression,
    STATE(253), 1,
      sym__logical_and_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(271), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__bitwise_and_expression,
    STATE(277), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(278), 1,
      sym__equality_expression,
    STATE(279), 1,
      sym__wrapped_equality_expression,
    STATE(280), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(284), 1,
      sym__additive_expression,
    STATE(285), 1,
      sym__wrapped_additive_expression,
    STATE(286), 1,
      sym__multiplicative_expression,
    STATE(291), 1,
      sym_symbol,
    STATE(394), 1,
      sym__wrapped_assignment_expression,
    STATE(496), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(151), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(157), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(177), 2,
      sym_register,
      sym_macro_variable,
    STATE(409), 2,
      sym__operand,
      sym_string,
    ACTIONS(155), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(287), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2156] = 38,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      sym_unary_minus_operator,
    ACTIONS(153), 1,
      sym_relocation_type,
    ACTIONS(159), 1,
      aux_sym_decimal_token1,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(169), 1,
      aux_sym_symbol_token1,
    STATE(247), 1,
      sym__wrapped_logical_and_expression,
    STATE(249), 1,
      sym__assignment_expression,
    STATE(251), 1,
      sym__logical_or_expression,
    STATE(252), 1,
      sym__wrapped_logical_or_expression,
    STATE(253), 1,
      sym__logical_and_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(271), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__bitwise_and_expression,
    STATE(277), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(278), 1,
      sym__equality_expression,
    STATE(279), 1,
      sym__wrapped_equality_expression,
    STATE(280), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(284), 1,
      sym__additive_expression,
    STATE(285), 1,
      sym__wrapped_additive_expression,
    STATE(286), 1,
      sym__multiplicative_expression,
    STATE(300), 1,
      sym_symbol,
    STATE(389), 1,
      sym__wrapped_assignment_expression,
    STATE(482), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(151), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(157), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(179), 2,
      sym_register,
      sym_macro_variable,
    STATE(409), 2,
      sym__operand,
      sym_string,
    ACTIONS(155), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(287), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2286] = 38,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      sym_unary_minus_operator,
    ACTIONS(153), 1,
      sym_relocation_type,
    ACTIONS(159), 1,
      aux_sym_decimal_token1,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(169), 1,
      aux_sym_symbol_token1,
    STATE(247), 1,
      sym__wrapped_logical_and_expression,
    STATE(249), 1,
      sym__assignment_expression,
    STATE(251), 1,
      sym__logical_or_expression,
    STATE(252), 1,
      sym__wrapped_logical_or_expression,
    STATE(253), 1,
      sym__logical_and_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(271), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__bitwise_and_expression,
    STATE(277), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(278), 1,
      sym__equality_expression,
    STATE(279), 1,
      sym__wrapped_equality_expression,
    STATE(280), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(284), 1,
      sym__additive_expression,
    STATE(285), 1,
      sym__wrapped_additive_expression,
    STATE(286), 1,
      sym__multiplicative_expression,
    STATE(295), 1,
      sym_symbol,
    STATE(388), 1,
      sym__wrapped_assignment_expression,
    STATE(486), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(151), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(157), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(181), 2,
      sym_register,
      sym_macro_variable,
    STATE(409), 2,
      sym__operand,
      sym_string,
    ACTIONS(155), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(287), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2416] = 36,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      sym_unary_minus_operator,
    ACTIONS(153), 1,
      sym_relocation_type,
    ACTIONS(159), 1,
      aux_sym_decimal_token1,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(169), 1,
      aux_sym_symbol_token1,
    STATE(247), 1,
      sym__wrapped_logical_and_expression,
    STATE(249), 1,
      sym__assignment_expression,
    STATE(251), 1,
      sym__logical_or_expression,
    STATE(252), 1,
      sym__wrapped_logical_or_expression,
    STATE(253), 1,
      sym__logical_and_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(271), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__bitwise_and_expression,
    STATE(277), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(278), 1,
      sym__equality_expression,
    STATE(279), 1,
      sym__wrapped_equality_expression,
    STATE(280), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(284), 1,
      sym__additive_expression,
    STATE(285), 1,
      sym__wrapped_additive_expression,
    STATE(286), 1,
      sym__multiplicative_expression,
    STATE(389), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(151), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(157), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(442), 2,
      sym__operand,
      sym_string,
    ACTIONS(155), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(287), 10,
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
  [2542] = 38,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      sym_unary_minus_operator,
    ACTIONS(153), 1,
      sym_relocation_type,
    ACTIONS(159), 1,
      aux_sym_decimal_token1,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(169), 1,
      aux_sym_symbol_token1,
    STATE(247), 1,
      sym__wrapped_logical_and_expression,
    STATE(249), 1,
      sym__assignment_expression,
    STATE(251), 1,
      sym__logical_or_expression,
    STATE(252), 1,
      sym__wrapped_logical_or_expression,
    STATE(253), 1,
      sym__logical_and_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(271), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__bitwise_and_expression,
    STATE(277), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(278), 1,
      sym__equality_expression,
    STATE(279), 1,
      sym__wrapped_equality_expression,
    STATE(280), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(284), 1,
      sym__additive_expression,
    STATE(285), 1,
      sym__wrapped_additive_expression,
    STATE(286), 1,
      sym__multiplicative_expression,
    STATE(297), 1,
      sym_symbol,
    STATE(391), 1,
      sym__wrapped_assignment_expression,
    STATE(500), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(151), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(157), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(183), 2,
      sym_register,
      sym_macro_variable,
    STATE(409), 2,
      sym__operand,
      sym_string,
    ACTIONS(155), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(287), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2672] = 36,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      sym_unary_minus_operator,
    ACTIONS(153), 1,
      sym_relocation_type,
    ACTIONS(159), 1,
      aux_sym_decimal_token1,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(169), 1,
      aux_sym_symbol_token1,
    STATE(247), 1,
      sym__wrapped_logical_and_expression,
    STATE(249), 1,
      sym__assignment_expression,
    STATE(251), 1,
      sym__logical_or_expression,
    STATE(252), 1,
      sym__wrapped_logical_or_expression,
    STATE(253), 1,
      sym__logical_and_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(271), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__bitwise_and_expression,
    STATE(277), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(278), 1,
      sym__equality_expression,
    STATE(279), 1,
      sym__wrapped_equality_expression,
    STATE(280), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(284), 1,
      sym__additive_expression,
    STATE(285), 1,
      sym__wrapped_additive_expression,
    STATE(286), 1,
      sym__multiplicative_expression,
    STATE(389), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(151), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(157), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(442), 2,
      sym__operand,
      sym_string,
    ACTIONS(155), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(287), 10,
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
  [2798] = 38,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      sym_unary_minus_operator,
    ACTIONS(153), 1,
      sym_relocation_type,
    ACTIONS(159), 1,
      aux_sym_decimal_token1,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(169), 1,
      aux_sym_symbol_token1,
    STATE(247), 1,
      sym__wrapped_logical_and_expression,
    STATE(249), 1,
      sym__assignment_expression,
    STATE(251), 1,
      sym__logical_or_expression,
    STATE(252), 1,
      sym__wrapped_logical_or_expression,
    STATE(253), 1,
      sym__logical_and_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(271), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__bitwise_and_expression,
    STATE(275), 1,
      sym_symbol,
    STATE(277), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(278), 1,
      sym__equality_expression,
    STATE(279), 1,
      sym__wrapped_equality_expression,
    STATE(280), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(284), 1,
      sym__additive_expression,
    STATE(285), 1,
      sym__wrapped_additive_expression,
    STATE(286), 1,
      sym__multiplicative_expression,
    STATE(389), 1,
      sym__wrapped_assignment_expression,
    STATE(498), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(151), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(157), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(185), 2,
      sym_register,
      sym_macro_variable,
    STATE(409), 2,
      sym__operand,
      sym_string,
    ACTIONS(155), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(287), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2928] = 38,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      sym_unary_minus_operator,
    ACTIONS(153), 1,
      sym_relocation_type,
    ACTIONS(159), 1,
      aux_sym_decimal_token1,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(169), 1,
      aux_sym_symbol_token1,
    STATE(247), 1,
      sym__wrapped_logical_and_expression,
    STATE(249), 1,
      sym__assignment_expression,
    STATE(251), 1,
      sym__logical_or_expression,
    STATE(252), 1,
      sym__wrapped_logical_or_expression,
    STATE(253), 1,
      sym__logical_and_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(271), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__bitwise_and_expression,
    STATE(277), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(278), 1,
      sym__equality_expression,
    STATE(279), 1,
      sym__wrapped_equality_expression,
    STATE(280), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(284), 1,
      sym__additive_expression,
    STATE(285), 1,
      sym__wrapped_additive_expression,
    STATE(286), 1,
      sym__multiplicative_expression,
    STATE(293), 1,
      sym_symbol,
    STATE(396), 1,
      sym__wrapped_assignment_expression,
    STATE(479), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(151), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(157), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(187), 2,
      sym_register,
      sym_macro_variable,
    STATE(409), 2,
      sym__operand,
      sym_string,
    ACTIONS(155), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(287), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3058] = 38,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      sym_unary_minus_operator,
    ACTIONS(153), 1,
      sym_relocation_type,
    ACTIONS(159), 1,
      aux_sym_decimal_token1,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(169), 1,
      aux_sym_symbol_token1,
    STATE(247), 1,
      sym__wrapped_logical_and_expression,
    STATE(249), 1,
      sym__assignment_expression,
    STATE(251), 1,
      sym__logical_or_expression,
    STATE(252), 1,
      sym__wrapped_logical_or_expression,
    STATE(253), 1,
      sym__logical_and_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(271), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__bitwise_and_expression,
    STATE(277), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(278), 1,
      sym__equality_expression,
    STATE(279), 1,
      sym__wrapped_equality_expression,
    STATE(280), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(284), 1,
      sym__additive_expression,
    STATE(285), 1,
      sym__wrapped_additive_expression,
    STATE(286), 1,
      sym__multiplicative_expression,
    STATE(292), 1,
      sym_symbol,
    STATE(389), 1,
      sym__wrapped_assignment_expression,
    STATE(478), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(151), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(157), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(189), 2,
      sym_register,
      sym_macro_variable,
    STATE(409), 2,
      sym__operand,
      sym_string,
    ACTIONS(155), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(287), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3188] = 38,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      sym_unary_minus_operator,
    ACTIONS(153), 1,
      sym_relocation_type,
    ACTIONS(159), 1,
      aux_sym_decimal_token1,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(169), 1,
      aux_sym_symbol_token1,
    STATE(247), 1,
      sym__wrapped_logical_and_expression,
    STATE(249), 1,
      sym__assignment_expression,
    STATE(251), 1,
      sym__logical_or_expression,
    STATE(252), 1,
      sym__wrapped_logical_or_expression,
    STATE(253), 1,
      sym__logical_and_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(271), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__bitwise_and_expression,
    STATE(277), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(278), 1,
      sym__equality_expression,
    STATE(279), 1,
      sym__wrapped_equality_expression,
    STATE(280), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(284), 1,
      sym__additive_expression,
    STATE(285), 1,
      sym__wrapped_additive_expression,
    STATE(286), 1,
      sym__multiplicative_expression,
    STATE(296), 1,
      sym_symbol,
    STATE(389), 1,
      sym__wrapped_assignment_expression,
    STATE(506), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(151), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(157), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(191), 2,
      sym_register,
      sym_macro_variable,
    STATE(409), 2,
      sym__operand,
      sym_string,
    ACTIONS(155), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(287), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3318] = 38,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      sym_unary_minus_operator,
    ACTIONS(153), 1,
      sym_relocation_type,
    ACTIONS(159), 1,
      aux_sym_decimal_token1,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(169), 1,
      aux_sym_symbol_token1,
    STATE(247), 1,
      sym__wrapped_logical_and_expression,
    STATE(249), 1,
      sym__assignment_expression,
    STATE(251), 1,
      sym__logical_or_expression,
    STATE(252), 1,
      sym__wrapped_logical_or_expression,
    STATE(253), 1,
      sym__logical_and_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(271), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__bitwise_and_expression,
    STATE(276), 1,
      sym_symbol,
    STATE(277), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(278), 1,
      sym__equality_expression,
    STATE(279), 1,
      sym__wrapped_equality_expression,
    STATE(280), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(284), 1,
      sym__additive_expression,
    STATE(285), 1,
      sym__wrapped_additive_expression,
    STATE(286), 1,
      sym__multiplicative_expression,
    STATE(387), 1,
      sym__wrapped_assignment_expression,
    STATE(475), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(151), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(157), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(165), 2,
      sym_register,
      sym_macro_variable,
    STATE(409), 2,
      sym__operand,
      sym_string,
    ACTIONS(155), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(287), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3448] = 38,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      sym_unary_minus_operator,
    ACTIONS(153), 1,
      sym_relocation_type,
    ACTIONS(159), 1,
      aux_sym_decimal_token1,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(169), 1,
      aux_sym_symbol_token1,
    STATE(247), 1,
      sym__wrapped_logical_and_expression,
    STATE(249), 1,
      sym__assignment_expression,
    STATE(251), 1,
      sym__logical_or_expression,
    STATE(252), 1,
      sym__wrapped_logical_or_expression,
    STATE(253), 1,
      sym__logical_and_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(271), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__bitwise_and_expression,
    STATE(277), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(278), 1,
      sym__equality_expression,
    STATE(279), 1,
      sym__wrapped_equality_expression,
    STATE(280), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(284), 1,
      sym__additive_expression,
    STATE(285), 1,
      sym__wrapped_additive_expression,
    STATE(286), 1,
      sym__multiplicative_expression,
    STATE(298), 1,
      sym_symbol,
    STATE(389), 1,
      sym__wrapped_assignment_expression,
    STATE(472), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(151), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(157), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(193), 2,
      sym_register,
      sym_macro_variable,
    STATE(409), 2,
      sym__operand,
      sym_string,
    ACTIONS(155), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(287), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3578] = 38,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      sym_unary_minus_operator,
    ACTIONS(153), 1,
      sym_relocation_type,
    ACTIONS(159), 1,
      aux_sym_decimal_token1,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(169), 1,
      aux_sym_symbol_token1,
    STATE(247), 1,
      sym__wrapped_logical_and_expression,
    STATE(249), 1,
      sym__assignment_expression,
    STATE(251), 1,
      sym__logical_or_expression,
    STATE(252), 1,
      sym__wrapped_logical_or_expression,
    STATE(253), 1,
      sym__logical_and_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(271), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__bitwise_and_expression,
    STATE(277), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(278), 1,
      sym__equality_expression,
    STATE(279), 1,
      sym__wrapped_equality_expression,
    STATE(280), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(284), 1,
      sym__additive_expression,
    STATE(285), 1,
      sym__wrapped_additive_expression,
    STATE(286), 1,
      sym__multiplicative_expression,
    STATE(299), 1,
      sym_symbol,
    STATE(388), 1,
      sym__wrapped_assignment_expression,
    STATE(480), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(151), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(157), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(195), 2,
      sym_register,
      sym_macro_variable,
    STATE(409), 2,
      sym__operand,
      sym_string,
    ACTIONS(155), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(287), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3708] = 35,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      sym_unary_minus_operator,
    ACTIONS(129), 1,
      sym_relocation_type,
    ACTIONS(135), 1,
      aux_sym_decimal_token1,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(141), 1,
      aux_sym_symbol_token1,
    ACTIONS(197), 1,
      sym_line_comment,
    STATE(112), 1,
      sym__wrapped_additive_expression,
    STATE(117), 1,
      sym__assignment_expression,
    STATE(118), 1,
      sym__logical_or_expression,
    STATE(119), 1,
      sym__wrapped_logical_or_expression,
    STATE(120), 1,
      sym__logical_and_expression,
    STATE(121), 1,
      sym__wrapped_logical_and_expression,
    STATE(122), 1,
      sym__bitwise_or_expression,
    STATE(123), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(124), 1,
      sym__bitwise_xor_expression,
    STATE(125), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(126), 1,
      sym__bitwise_and_expression,
    STATE(127), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(128), 1,
      sym__equality_expression,
    STATE(129), 1,
      sym__wrapped_equality_expression,
    STATE(130), 1,
      sym__relational_expression,
    STATE(131), 1,
      sym__wrapped_relational_expression,
    STATE(133), 1,
      sym__wrapped_shift_expression,
    STATE(134), 1,
      sym__additive_expression,
    STATE(135), 1,
      sym__multiplicative_expression,
    STATE(154), 1,
      sym__shift_expression,
    STATE(350), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(123), 2,
      sym__data_separator,
      anon_sym_COMMA,
    ACTIONS(127), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(133), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(131), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(136), 10,
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
  [3831] = 35,
    ACTIONS(61), 1,
      sym_unary_minus_operator,
    ACTIONS(65), 1,
      sym_relocation_type,
    ACTIONS(71), 1,
      aux_sym_decimal_token1,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(79), 1,
      aux_sym_symbol_token1,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    STATE(200), 1,
      sym__logical_or_expression,
    STATE(201), 1,
      sym__wrapped_logical_or_expression,
    STATE(202), 1,
      sym__logical_and_expression,
    STATE(203), 1,
      sym__wrapped_logical_and_expression,
    STATE(204), 1,
      sym__bitwise_or_expression,
    STATE(205), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(206), 1,
      sym__bitwise_xor_expression,
    STATE(207), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(208), 1,
      sym__bitwise_and_expression,
    STATE(209), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(219), 1,
      sym__assignment_expression,
    STATE(221), 1,
      sym__equality_expression,
    STATE(226), 1,
      sym__wrapped_equality_expression,
    STATE(227), 1,
      sym__relational_expression,
    STATE(228), 1,
      sym__wrapped_relational_expression,
    STATE(229), 1,
      sym__shift_expression,
    STATE(230), 1,
      sym__wrapped_shift_expression,
    STATE(231), 1,
      sym__additive_expression,
    STATE(232), 1,
      sym__wrapped_additive_expression,
    STATE(233), 1,
      sym__multiplicative_expression,
    STATE(359), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(63), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(69), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(376), 2,
      sym__operand,
      sym_string,
    ACTIONS(67), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(234), 10,
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
  [3954] = 35,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      sym_unary_minus_operator,
    ACTIONS(153), 1,
      sym_relocation_type,
    ACTIONS(159), 1,
      aux_sym_decimal_token1,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(169), 1,
      aux_sym_symbol_token1,
    STATE(247), 1,
      sym__wrapped_logical_and_expression,
    STATE(249), 1,
      sym__assignment_expression,
    STATE(251), 1,
      sym__logical_or_expression,
    STATE(252), 1,
      sym__wrapped_logical_or_expression,
    STATE(253), 1,
      sym__logical_and_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(271), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__bitwise_and_expression,
    STATE(277), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(278), 1,
      sym__equality_expression,
    STATE(279), 1,
      sym__wrapped_equality_expression,
    STATE(280), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(284), 1,
      sym__additive_expression,
    STATE(285), 1,
      sym__wrapped_additive_expression,
    STATE(286), 1,
      sym__multiplicative_expression,
    STATE(389), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(151), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(157), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(442), 2,
      sym__operand,
      sym_string,
    ACTIONS(155), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(287), 10,
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
  [4077] = 37,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      sym_unary_minus_operator,
    ACTIONS(205), 1,
      sym_relocation_type,
    ACTIONS(211), 1,
      aux_sym_decimal_token1,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    ACTIONS(217), 1,
      sym_macro_variable,
    ACTIONS(219), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(221), 1,
      aux_sym_symbol_token1,
    STATE(245), 1,
      sym_address,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(317), 1,
      sym__bitwise_and_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(319), 1,
      sym__equality_expression,
    STATE(320), 1,
      sym__wrapped_equality_expression,
    STATE(321), 1,
      sym__relational_expression,
    STATE(322), 1,
      sym__wrapped_relational_expression,
    STATE(323), 1,
      sym__shift_expression,
    STATE(324), 1,
      sym__wrapped_shift_expression,
    STATE(326), 1,
      sym__wrapped_additive_expression,
    STATE(327), 1,
      sym__multiplicative_expression,
    STATE(345), 1,
      sym__additive_expression,
    STATE(451), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(203), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(209), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(397), 2,
      sym__string_operand,
      sym_string,
    ACTIONS(207), 4,
      sym_octal,
      sym_float,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(328), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
  [4204] = 33,
    ACTIONS(201), 1,
      sym_unary_minus_operator,
    ACTIONS(205), 1,
      sym_relocation_type,
    ACTIONS(211), 1,
      aux_sym_decimal_token1,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    ACTIONS(219), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(221), 1,
      aux_sym_symbol_token1,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(317), 1,
      sym__bitwise_and_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(319), 1,
      sym__equality_expression,
    STATE(320), 1,
      sym__wrapped_equality_expression,
    STATE(321), 1,
      sym__relational_expression,
    STATE(322), 1,
      sym__wrapped_relational_expression,
    STATE(323), 1,
      sym__shift_expression,
    STATE(324), 1,
      sym__wrapped_shift_expression,
    STATE(326), 1,
      sym__wrapped_additive_expression,
    STATE(327), 1,
      sym__multiplicative_expression,
    STATE(345), 1,
      sym__additive_expression,
    STATE(444), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(203), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(209), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(207), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 10,
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
  [4320] = 33,
    ACTIONS(61), 1,
      sym_unary_minus_operator,
    ACTIONS(65), 1,
      sym_relocation_type,
    ACTIONS(71), 1,
      aux_sym_decimal_token1,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(79), 1,
      aux_sym_symbol_token1,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    STATE(200), 1,
      sym__logical_or_expression,
    STATE(202), 1,
      sym__logical_and_expression,
    STATE(203), 1,
      sym__wrapped_logical_and_expression,
    STATE(204), 1,
      sym__bitwise_or_expression,
    STATE(205), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(206), 1,
      sym__bitwise_xor_expression,
    STATE(207), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(208), 1,
      sym__bitwise_and_expression,
    STATE(209), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(221), 1,
      sym__equality_expression,
    STATE(226), 1,
      sym__wrapped_equality_expression,
    STATE(227), 1,
      sym__relational_expression,
    STATE(228), 1,
      sym__wrapped_relational_expression,
    STATE(229), 1,
      sym__shift_expression,
    STATE(230), 1,
      sym__wrapped_shift_expression,
    STATE(231), 1,
      sym__additive_expression,
    STATE(232), 1,
      sym__wrapped_additive_expression,
    STATE(233), 1,
      sym__multiplicative_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(355), 1,
      sym__wrapped_logical_or_expression,
    STATE(468), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(63), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(69), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(67), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(234), 10,
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
  [4436] = 33,
    ACTIONS(61), 1,
      sym_unary_minus_operator,
    ACTIONS(65), 1,
      sym_relocation_type,
    ACTIONS(71), 1,
      aux_sym_decimal_token1,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(79), 1,
      aux_sym_symbol_token1,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    STATE(202), 1,
      sym__logical_and_expression,
    STATE(204), 1,
      sym__bitwise_or_expression,
    STATE(205), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(206), 1,
      sym__bitwise_xor_expression,
    STATE(207), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(208), 1,
      sym__bitwise_and_expression,
    STATE(209), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(215), 1,
      sym__wrapped_logical_and_expression,
    STATE(221), 1,
      sym__equality_expression,
    STATE(226), 1,
      sym__wrapped_equality_expression,
    STATE(227), 1,
      sym__relational_expression,
    STATE(228), 1,
      sym__wrapped_relational_expression,
    STATE(229), 1,
      sym__shift_expression,
    STATE(230), 1,
      sym__wrapped_shift_expression,
    STATE(231), 1,
      sym__additive_expression,
    STATE(232), 1,
      sym__wrapped_additive_expression,
    STATE(233), 1,
      sym__multiplicative_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(468), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(63), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(69), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(67), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(234), 10,
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
  [4552] = 33,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      sym_unary_minus_operator,
    ACTIONS(129), 1,
      sym_relocation_type,
    ACTIONS(135), 1,
      aux_sym_decimal_token1,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(141), 1,
      aux_sym_symbol_token1,
    STATE(112), 1,
      sym__wrapped_additive_expression,
    STATE(117), 1,
      sym__assignment_expression,
    STATE(118), 1,
      sym__logical_or_expression,
    STATE(119), 1,
      sym__wrapped_logical_or_expression,
    STATE(120), 1,
      sym__logical_and_expression,
    STATE(121), 1,
      sym__wrapped_logical_and_expression,
    STATE(122), 1,
      sym__bitwise_or_expression,
    STATE(123), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(124), 1,
      sym__bitwise_xor_expression,
    STATE(125), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(126), 1,
      sym__bitwise_and_expression,
    STATE(127), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(128), 1,
      sym__equality_expression,
    STATE(129), 1,
      sym__wrapped_equality_expression,
    STATE(130), 1,
      sym__relational_expression,
    STATE(131), 1,
      sym__wrapped_relational_expression,
    STATE(133), 1,
      sym__wrapped_shift_expression,
    STATE(134), 1,
      sym__additive_expression,
    STATE(135), 1,
      sym__multiplicative_expression,
    STATE(154), 1,
      sym__shift_expression,
    STATE(349), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(127), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(133), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(131), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(136), 10,
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
  [4668] = 33,
    ACTIONS(61), 1,
      sym_unary_minus_operator,
    ACTIONS(65), 1,
      sym_relocation_type,
    ACTIONS(71), 1,
      aux_sym_decimal_token1,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(79), 1,
      aux_sym_symbol_token1,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    STATE(204), 1,
      sym__bitwise_or_expression,
    STATE(206), 1,
      sym__bitwise_xor_expression,
    STATE(207), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(208), 1,
      sym__bitwise_and_expression,
    STATE(209), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(216), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(221), 1,
      sym__equality_expression,
    STATE(226), 1,
      sym__wrapped_equality_expression,
    STATE(227), 1,
      sym__relational_expression,
    STATE(228), 1,
      sym__wrapped_relational_expression,
    STATE(229), 1,
      sym__shift_expression,
    STATE(230), 1,
      sym__wrapped_shift_expression,
    STATE(231), 1,
      sym__additive_expression,
    STATE(232), 1,
      sym__wrapped_additive_expression,
    STATE(233), 1,
      sym__multiplicative_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(468), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(63), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(69), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(67), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(234), 10,
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
  [4784] = 33,
    ACTIONS(61), 1,
      sym_unary_minus_operator,
    ACTIONS(65), 1,
      sym_relocation_type,
    ACTIONS(71), 1,
      aux_sym_decimal_token1,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(79), 1,
      aux_sym_symbol_token1,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    STATE(206), 1,
      sym__bitwise_xor_expression,
    STATE(208), 1,
      sym__bitwise_and_expression,
    STATE(209), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(217), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(221), 1,
      sym__equality_expression,
    STATE(226), 1,
      sym__wrapped_equality_expression,
    STATE(227), 1,
      sym__relational_expression,
    STATE(228), 1,
      sym__wrapped_relational_expression,
    STATE(229), 1,
      sym__shift_expression,
    STATE(230), 1,
      sym__wrapped_shift_expression,
    STATE(231), 1,
      sym__additive_expression,
    STATE(232), 1,
      sym__wrapped_additive_expression,
    STATE(233), 1,
      sym__multiplicative_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(468), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(63), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(69), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(67), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(234), 10,
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
  [4900] = 33,
    ACTIONS(61), 1,
      sym_unary_minus_operator,
    ACTIONS(65), 1,
      sym_relocation_type,
    ACTIONS(71), 1,
      aux_sym_decimal_token1,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(79), 1,
      aux_sym_symbol_token1,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    STATE(208), 1,
      sym__bitwise_and_expression,
    STATE(218), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(221), 1,
      sym__equality_expression,
    STATE(226), 1,
      sym__wrapped_equality_expression,
    STATE(227), 1,
      sym__relational_expression,
    STATE(228), 1,
      sym__wrapped_relational_expression,
    STATE(229), 1,
      sym__shift_expression,
    STATE(230), 1,
      sym__wrapped_shift_expression,
    STATE(231), 1,
      sym__additive_expression,
    STATE(232), 1,
      sym__wrapped_additive_expression,
    STATE(233), 1,
      sym__multiplicative_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(468), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(63), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(69), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(67), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(234), 10,
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
  [5016] = 33,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      sym_unary_minus_operator,
    ACTIONS(153), 1,
      sym_relocation_type,
    ACTIONS(159), 1,
      aux_sym_decimal_token1,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    ACTIONS(167), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(169), 1,
      aux_sym_symbol_token1,
    STATE(247), 1,
      sym__wrapped_logical_and_expression,
    STATE(251), 1,
      sym__logical_or_expression,
    STATE(253), 1,
      sym__logical_and_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(271), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__bitwise_and_expression,
    STATE(277), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(278), 1,
      sym__equality_expression,
    STATE(279), 1,
      sym__wrapped_equality_expression,
    STATE(280), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(284), 1,
      sym__additive_expression,
    STATE(285), 1,
      sym__wrapped_additive_expression,
    STATE(286), 1,
      sym__multiplicative_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(382), 1,
      sym__wrapped_logical_or_expression,
    STATE(469), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(151), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(157), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(155), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(287), 10,
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
  [5132] = 33,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      sym_unary_minus_operator,
    ACTIONS(153), 1,
      sym_relocation_type,
    ACTIONS(159), 1,
      aux_sym_decimal_token1,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    ACTIONS(167), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(169), 1,
      aux_sym_symbol_token1,
    STATE(253), 1,
      sym__logical_and_expression,
    STATE(257), 1,
      sym__wrapped_logical_and_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(271), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__bitwise_and_expression,
    STATE(277), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(278), 1,
      sym__equality_expression,
    STATE(279), 1,
      sym__wrapped_equality_expression,
    STATE(280), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(284), 1,
      sym__additive_expression,
    STATE(285), 1,
      sym__wrapped_additive_expression,
    STATE(286), 1,
      sym__multiplicative_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(469), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(151), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(157), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(155), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(287), 10,
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
  [5248] = 33,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      sym_unary_minus_operator,
    ACTIONS(153), 1,
      sym_relocation_type,
    ACTIONS(159), 1,
      aux_sym_decimal_token1,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    ACTIONS(167), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(169), 1,
      aux_sym_symbol_token1,
    STATE(258), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__bitwise_and_expression,
    STATE(277), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(278), 1,
      sym__equality_expression,
    STATE(279), 1,
      sym__wrapped_equality_expression,
    STATE(280), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(284), 1,
      sym__additive_expression,
    STATE(285), 1,
      sym__wrapped_additive_expression,
    STATE(286), 1,
      sym__multiplicative_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(469), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(151), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(157), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(155), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(287), 10,
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
  [5364] = 33,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      sym_unary_minus_operator,
    ACTIONS(153), 1,
      sym_relocation_type,
    ACTIONS(159), 1,
      aux_sym_decimal_token1,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    ACTIONS(167), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(169), 1,
      aux_sym_symbol_token1,
    STATE(259), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(274), 1,
      sym__bitwise_and_expression,
    STATE(277), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(278), 1,
      sym__equality_expression,
    STATE(279), 1,
      sym__wrapped_equality_expression,
    STATE(280), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(284), 1,
      sym__additive_expression,
    STATE(285), 1,
      sym__wrapped_additive_expression,
    STATE(286), 1,
      sym__multiplicative_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(469), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(151), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(157), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(155), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(287), 10,
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
  [5480] = 33,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      sym_unary_minus_operator,
    ACTIONS(153), 1,
      sym_relocation_type,
    ACTIONS(159), 1,
      aux_sym_decimal_token1,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    ACTIONS(167), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(169), 1,
      aux_sym_symbol_token1,
    STATE(260), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(274), 1,
      sym__bitwise_and_expression,
    STATE(278), 1,
      sym__equality_expression,
    STATE(279), 1,
      sym__wrapped_equality_expression,
    STATE(280), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(284), 1,
      sym__additive_expression,
    STATE(285), 1,
      sym__wrapped_additive_expression,
    STATE(286), 1,
      sym__multiplicative_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(469), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(151), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(157), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(155), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(287), 10,
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
  [5596] = 33,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      sym_unary_minus_operator,
    ACTIONS(153), 1,
      sym_relocation_type,
    ACTIONS(159), 1,
      aux_sym_decimal_token1,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    ACTIONS(167), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(169), 1,
      aux_sym_symbol_token1,
    STATE(278), 1,
      sym__equality_expression,
    STATE(280), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(284), 1,
      sym__additive_expression,
    STATE(285), 1,
      sym__wrapped_additive_expression,
    STATE(286), 1,
      sym__multiplicative_expression,
    STATE(301), 1,
      sym__wrapped_equality_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(317), 1,
      sym__bitwise_and_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(469), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(151), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(157), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(155), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(287), 10,
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
  [5712] = 33,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      sym_unary_minus_operator,
    ACTIONS(153), 1,
      sym_relocation_type,
    ACTIONS(159), 1,
      aux_sym_decimal_token1,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    ACTIONS(167), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(169), 1,
      aux_sym_symbol_token1,
    STATE(262), 1,
      sym__wrapped_relational_expression,
    STATE(280), 1,
      sym__relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(284), 1,
      sym__additive_expression,
    STATE(285), 1,
      sym__wrapped_additive_expression,
    STATE(286), 1,
      sym__multiplicative_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(317), 1,
      sym__bitwise_and_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(319), 1,
      sym__equality_expression,
    STATE(320), 1,
      sym__wrapped_equality_expression,
    STATE(469), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(151), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(157), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(155), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(287), 10,
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
  [5828] = 33,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      sym_unary_minus_operator,
    ACTIONS(153), 1,
      sym_relocation_type,
    ACTIONS(159), 1,
      aux_sym_decimal_token1,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    ACTIONS(167), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(169), 1,
      aux_sym_symbol_token1,
    STATE(263), 1,
      sym__wrapped_shift_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__additive_expression,
    STATE(285), 1,
      sym__wrapped_additive_expression,
    STATE(286), 1,
      sym__multiplicative_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(317), 1,
      sym__bitwise_and_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(319), 1,
      sym__equality_expression,
    STATE(320), 1,
      sym__wrapped_equality_expression,
    STATE(321), 1,
      sym__relational_expression,
    STATE(322), 1,
      sym__wrapped_relational_expression,
    STATE(469), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(151), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(157), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(155), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(287), 10,
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
  [5944] = 33,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      sym_unary_minus_operator,
    ACTIONS(153), 1,
      sym_relocation_type,
    ACTIONS(159), 1,
      aux_sym_decimal_token1,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    ACTIONS(167), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(169), 1,
      aux_sym_symbol_token1,
    STATE(264), 1,
      sym__wrapped_additive_expression,
    STATE(284), 1,
      sym__additive_expression,
    STATE(286), 1,
      sym__multiplicative_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(317), 1,
      sym__bitwise_and_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(319), 1,
      sym__equality_expression,
    STATE(320), 1,
      sym__wrapped_equality_expression,
    STATE(321), 1,
      sym__relational_expression,
    STATE(322), 1,
      sym__wrapped_relational_expression,
    STATE(323), 1,
      sym__shift_expression,
    STATE(324), 1,
      sym__wrapped_shift_expression,
    STATE(469), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(151), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(157), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(155), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(287), 10,
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
  [6060] = 33,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      sym_unary_minus_operator,
    ACTIONS(153), 1,
      sym_relocation_type,
    ACTIONS(159), 1,
      aux_sym_decimal_token1,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    ACTIONS(167), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(169), 1,
      aux_sym_symbol_token1,
    STATE(286), 1,
      sym__multiplicative_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(317), 1,
      sym__bitwise_and_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(319), 1,
      sym__equality_expression,
    STATE(320), 1,
      sym__wrapped_equality_expression,
    STATE(321), 1,
      sym__relational_expression,
    STATE(322), 1,
      sym__wrapped_relational_expression,
    STATE(323), 1,
      sym__shift_expression,
    STATE(324), 1,
      sym__wrapped_shift_expression,
    STATE(326), 1,
      sym__wrapped_additive_expression,
    STATE(345), 1,
      sym__additive_expression,
    STATE(469), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(151), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(227), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(225), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(265), 10,
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
  [6176] = 34,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      sym_unary_minus_operator,
    ACTIONS(153), 1,
      sym_relocation_type,
    ACTIONS(159), 1,
      aux_sym_decimal_token1,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    ACTIONS(167), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(169), 1,
      aux_sym_symbol_token1,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(317), 1,
      sym__bitwise_and_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(319), 1,
      sym__equality_expression,
    STATE(320), 1,
      sym__wrapped_equality_expression,
    STATE(321), 1,
      sym__relational_expression,
    STATE(322), 1,
      sym__wrapped_relational_expression,
    STATE(323), 1,
      sym__shift_expression,
    STATE(324), 1,
      sym__wrapped_shift_expression,
    STATE(326), 1,
      sym__wrapped_additive_expression,
    STATE(327), 1,
      sym__multiplicative_expression,
    STATE(328), 1,
      sym__wrapped_multiplicative_expression,
    STATE(345), 1,
      sym__additive_expression,
    STATE(469), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(151), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(231), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(229), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(266), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6294] = 33,
    ACTIONS(61), 1,
      sym_unary_minus_operator,
    ACTIONS(65), 1,
      sym_relocation_type,
    ACTIONS(71), 1,
      aux_sym_decimal_token1,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(79), 1,
      aux_sym_symbol_token1,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    STATE(198), 1,
      sym__wrapped_equality_expression,
    STATE(221), 1,
      sym__equality_expression,
    STATE(227), 1,
      sym__relational_expression,
    STATE(228), 1,
      sym__wrapped_relational_expression,
    STATE(229), 1,
      sym__shift_expression,
    STATE(230), 1,
      sym__wrapped_shift_expression,
    STATE(231), 1,
      sym__additive_expression,
    STATE(232), 1,
      sym__wrapped_additive_expression,
    STATE(233), 1,
      sym__multiplicative_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(317), 1,
      sym__bitwise_and_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(468), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(63), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(69), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(67), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(234), 10,
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
  [6410] = 33,
    ACTIONS(61), 1,
      sym_unary_minus_operator,
    ACTIONS(65), 1,
      sym_relocation_type,
    ACTIONS(71), 1,
      aux_sym_decimal_token1,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(79), 1,
      aux_sym_symbol_token1,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    STATE(227), 1,
      sym__relational_expression,
    STATE(229), 1,
      sym__shift_expression,
    STATE(230), 1,
      sym__wrapped_shift_expression,
    STATE(231), 1,
      sym__additive_expression,
    STATE(232), 1,
      sym__wrapped_additive_expression,
    STATE(233), 1,
      sym__multiplicative_expression,
    STATE(241), 1,
      sym__wrapped_relational_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(317), 1,
      sym__bitwise_and_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(319), 1,
      sym__equality_expression,
    STATE(320), 1,
      sym__wrapped_equality_expression,
    STATE(468), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(63), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(69), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(67), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(234), 10,
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
  [6526] = 33,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      sym_unary_minus_operator,
    ACTIONS(129), 1,
      sym_relocation_type,
    ACTIONS(135), 1,
      aux_sym_decimal_token1,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(141), 1,
      aux_sym_symbol_token1,
    STATE(112), 1,
      sym__wrapped_additive_expression,
    STATE(118), 1,
      sym__logical_or_expression,
    STATE(120), 1,
      sym__logical_and_expression,
    STATE(121), 1,
      sym__wrapped_logical_and_expression,
    STATE(122), 1,
      sym__bitwise_or_expression,
    STATE(123), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(124), 1,
      sym__bitwise_xor_expression,
    STATE(125), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(126), 1,
      sym__bitwise_and_expression,
    STATE(127), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(128), 1,
      sym__equality_expression,
    STATE(129), 1,
      sym__wrapped_equality_expression,
    STATE(130), 1,
      sym__relational_expression,
    STATE(131), 1,
      sym__wrapped_relational_expression,
    STATE(133), 1,
      sym__wrapped_shift_expression,
    STATE(134), 1,
      sym__additive_expression,
    STATE(135), 1,
      sym__multiplicative_expression,
    STATE(154), 1,
      sym__shift_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(346), 1,
      sym__wrapped_logical_or_expression,
    STATE(470), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(127), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(133), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(131), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(136), 10,
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
  [6642] = 33,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      sym_unary_minus_operator,
    ACTIONS(129), 1,
      sym_relocation_type,
    ACTIONS(135), 1,
      aux_sym_decimal_token1,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(141), 1,
      aux_sym_symbol_token1,
    STATE(112), 1,
      sym__wrapped_additive_expression,
    STATE(120), 1,
      sym__logical_and_expression,
    STATE(122), 1,
      sym__bitwise_or_expression,
    STATE(123), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(124), 1,
      sym__bitwise_xor_expression,
    STATE(125), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(126), 1,
      sym__bitwise_and_expression,
    STATE(127), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(128), 1,
      sym__equality_expression,
    STATE(129), 1,
      sym__wrapped_equality_expression,
    STATE(130), 1,
      sym__relational_expression,
    STATE(131), 1,
      sym__wrapped_relational_expression,
    STATE(133), 1,
      sym__wrapped_shift_expression,
    STATE(134), 1,
      sym__additive_expression,
    STATE(135), 1,
      sym__multiplicative_expression,
    STATE(141), 1,
      sym__wrapped_logical_and_expression,
    STATE(154), 1,
      sym__shift_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(470), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(127), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(133), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(131), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(136), 10,
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
  [6758] = 33,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      sym_unary_minus_operator,
    ACTIONS(129), 1,
      sym_relocation_type,
    ACTIONS(135), 1,
      aux_sym_decimal_token1,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(141), 1,
      aux_sym_symbol_token1,
    STATE(112), 1,
      sym__wrapped_additive_expression,
    STATE(122), 1,
      sym__bitwise_or_expression,
    STATE(124), 1,
      sym__bitwise_xor_expression,
    STATE(125), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(126), 1,
      sym__bitwise_and_expression,
    STATE(127), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(128), 1,
      sym__equality_expression,
    STATE(129), 1,
      sym__wrapped_equality_expression,
    STATE(130), 1,
      sym__relational_expression,
    STATE(131), 1,
      sym__wrapped_relational_expression,
    STATE(133), 1,
      sym__wrapped_shift_expression,
    STATE(134), 1,
      sym__additive_expression,
    STATE(135), 1,
      sym__multiplicative_expression,
    STATE(142), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(154), 1,
      sym__shift_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(470), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(127), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(133), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(131), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(136), 10,
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
  [6874] = 33,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      sym_unary_minus_operator,
    ACTIONS(129), 1,
      sym_relocation_type,
    ACTIONS(135), 1,
      aux_sym_decimal_token1,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(141), 1,
      aux_sym_symbol_token1,
    STATE(112), 1,
      sym__wrapped_additive_expression,
    STATE(124), 1,
      sym__bitwise_xor_expression,
    STATE(126), 1,
      sym__bitwise_and_expression,
    STATE(127), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(128), 1,
      sym__equality_expression,
    STATE(129), 1,
      sym__wrapped_equality_expression,
    STATE(130), 1,
      sym__relational_expression,
    STATE(131), 1,
      sym__wrapped_relational_expression,
    STATE(133), 1,
      sym__wrapped_shift_expression,
    STATE(134), 1,
      sym__additive_expression,
    STATE(135), 1,
      sym__multiplicative_expression,
    STATE(143), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(154), 1,
      sym__shift_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(470), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(127), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(133), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(131), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(136), 10,
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
  [6990] = 33,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      sym_unary_minus_operator,
    ACTIONS(129), 1,
      sym_relocation_type,
    ACTIONS(135), 1,
      aux_sym_decimal_token1,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(141), 1,
      aux_sym_symbol_token1,
    STATE(112), 1,
      sym__wrapped_additive_expression,
    STATE(126), 1,
      sym__bitwise_and_expression,
    STATE(128), 1,
      sym__equality_expression,
    STATE(129), 1,
      sym__wrapped_equality_expression,
    STATE(130), 1,
      sym__relational_expression,
    STATE(131), 1,
      sym__wrapped_relational_expression,
    STATE(133), 1,
      sym__wrapped_shift_expression,
    STATE(134), 1,
      sym__additive_expression,
    STATE(135), 1,
      sym__multiplicative_expression,
    STATE(144), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(154), 1,
      sym__shift_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(470), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(127), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(133), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(131), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(136), 10,
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
  [7106] = 33,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      sym_unary_minus_operator,
    ACTIONS(129), 1,
      sym_relocation_type,
    ACTIONS(135), 1,
      aux_sym_decimal_token1,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(141), 1,
      aux_sym_symbol_token1,
    STATE(112), 1,
      sym__wrapped_additive_expression,
    STATE(128), 1,
      sym__equality_expression,
    STATE(130), 1,
      sym__relational_expression,
    STATE(131), 1,
      sym__wrapped_relational_expression,
    STATE(133), 1,
      sym__wrapped_shift_expression,
    STATE(134), 1,
      sym__additive_expression,
    STATE(135), 1,
      sym__multiplicative_expression,
    STATE(145), 1,
      sym__wrapped_equality_expression,
    STATE(154), 1,
      sym__shift_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(317), 1,
      sym__bitwise_and_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(470), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(127), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(133), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(131), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(136), 10,
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
  [7222] = 33,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      sym_unary_minus_operator,
    ACTIONS(129), 1,
      sym_relocation_type,
    ACTIONS(135), 1,
      aux_sym_decimal_token1,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(141), 1,
      aux_sym_symbol_token1,
    STATE(112), 1,
      sym__wrapped_additive_expression,
    STATE(130), 1,
      sym__relational_expression,
    STATE(133), 1,
      sym__wrapped_shift_expression,
    STATE(134), 1,
      sym__additive_expression,
    STATE(135), 1,
      sym__multiplicative_expression,
    STATE(146), 1,
      sym__wrapped_relational_expression,
    STATE(154), 1,
      sym__shift_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(317), 1,
      sym__bitwise_and_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(319), 1,
      sym__equality_expression,
    STATE(320), 1,
      sym__wrapped_equality_expression,
    STATE(470), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(127), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(133), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(131), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(136), 10,
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
  [7338] = 33,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      sym_unary_minus_operator,
    ACTIONS(129), 1,
      sym_relocation_type,
    ACTIONS(135), 1,
      aux_sym_decimal_token1,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(141), 1,
      aux_sym_symbol_token1,
    STATE(112), 1,
      sym__wrapped_additive_expression,
    STATE(134), 1,
      sym__additive_expression,
    STATE(135), 1,
      sym__multiplicative_expression,
    STATE(147), 1,
      sym__wrapped_shift_expression,
    STATE(154), 1,
      sym__shift_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(317), 1,
      sym__bitwise_and_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(319), 1,
      sym__equality_expression,
    STATE(320), 1,
      sym__wrapped_equality_expression,
    STATE(321), 1,
      sym__relational_expression,
    STATE(322), 1,
      sym__wrapped_relational_expression,
    STATE(470), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(127), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(133), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(131), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(136), 10,
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
  [7454] = 33,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      sym_unary_minus_operator,
    ACTIONS(129), 1,
      sym_relocation_type,
    ACTIONS(135), 1,
      aux_sym_decimal_token1,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(141), 1,
      aux_sym_symbol_token1,
    STATE(134), 1,
      sym__additive_expression,
    STATE(135), 1,
      sym__multiplicative_expression,
    STATE(148), 1,
      sym__wrapped_additive_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(317), 1,
      sym__bitwise_and_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(319), 1,
      sym__equality_expression,
    STATE(320), 1,
      sym__wrapped_equality_expression,
    STATE(321), 1,
      sym__relational_expression,
    STATE(322), 1,
      sym__wrapped_relational_expression,
    STATE(323), 1,
      sym__shift_expression,
    STATE(324), 1,
      sym__wrapped_shift_expression,
    STATE(470), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(127), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(133), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(131), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(136), 10,
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
  [7570] = 33,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      sym_unary_minus_operator,
    ACTIONS(129), 1,
      sym_relocation_type,
    ACTIONS(135), 1,
      aux_sym_decimal_token1,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(141), 1,
      aux_sym_symbol_token1,
    STATE(135), 1,
      sym__multiplicative_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(317), 1,
      sym__bitwise_and_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(319), 1,
      sym__equality_expression,
    STATE(320), 1,
      sym__wrapped_equality_expression,
    STATE(321), 1,
      sym__relational_expression,
    STATE(322), 1,
      sym__wrapped_relational_expression,
    STATE(323), 1,
      sym__shift_expression,
    STATE(324), 1,
      sym__wrapped_shift_expression,
    STATE(326), 1,
      sym__wrapped_additive_expression,
    STATE(345), 1,
      sym__additive_expression,
    STATE(470), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(127), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(235), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(233), 5,
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
  [7686] = 34,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      sym_unary_minus_operator,
    ACTIONS(129), 1,
      sym_relocation_type,
    ACTIONS(135), 1,
      aux_sym_decimal_token1,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(141), 1,
      aux_sym_symbol_token1,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(317), 1,
      sym__bitwise_and_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(319), 1,
      sym__equality_expression,
    STATE(320), 1,
      sym__wrapped_equality_expression,
    STATE(321), 1,
      sym__relational_expression,
    STATE(322), 1,
      sym__wrapped_relational_expression,
    STATE(323), 1,
      sym__shift_expression,
    STATE(324), 1,
      sym__wrapped_shift_expression,
    STATE(326), 1,
      sym__wrapped_additive_expression,
    STATE(327), 1,
      sym__multiplicative_expression,
    STATE(328), 1,
      sym__wrapped_multiplicative_expression,
    STATE(345), 1,
      sym__additive_expression,
    STATE(470), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(127), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(239), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(237), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(150), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7804] = 33,
    ACTIONS(201), 1,
      sym_unary_minus_operator,
    ACTIONS(205), 1,
      sym_relocation_type,
    ACTIONS(211), 1,
      aux_sym_decimal_token1,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    ACTIONS(219), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(221), 1,
      aux_sym_symbol_token1,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(317), 1,
      sym__bitwise_and_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(319), 1,
      sym__equality_expression,
    STATE(320), 1,
      sym__wrapped_equality_expression,
    STATE(321), 1,
      sym__relational_expression,
    STATE(322), 1,
      sym__wrapped_relational_expression,
    STATE(323), 1,
      sym__shift_expression,
    STATE(324), 1,
      sym__wrapped_shift_expression,
    STATE(326), 1,
      sym__wrapped_additive_expression,
    STATE(327), 1,
      sym__multiplicative_expression,
    STATE(345), 1,
      sym__additive_expression,
    STATE(407), 1,
      sym__wrapped_logical_or_expression,
    STATE(471), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(203), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(209), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(207), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 10,
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
  [7920] = 33,
    ACTIONS(201), 1,
      sym_unary_minus_operator,
    ACTIONS(205), 1,
      sym_relocation_type,
    ACTIONS(211), 1,
      aux_sym_decimal_token1,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    ACTIONS(219), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(221), 1,
      aux_sym_symbol_token1,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(317), 1,
      sym__bitwise_and_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(319), 1,
      sym__equality_expression,
    STATE(320), 1,
      sym__wrapped_equality_expression,
    STATE(321), 1,
      sym__relational_expression,
    STATE(322), 1,
      sym__wrapped_relational_expression,
    STATE(323), 1,
      sym__shift_expression,
    STATE(324), 1,
      sym__wrapped_shift_expression,
    STATE(326), 1,
      sym__wrapped_additive_expression,
    STATE(327), 1,
      sym__multiplicative_expression,
    STATE(337), 1,
      sym__wrapped_logical_and_expression,
    STATE(345), 1,
      sym__additive_expression,
    STATE(471), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(203), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(209), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(207), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 10,
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
  [8036] = 33,
    ACTIONS(201), 1,
      sym_unary_minus_operator,
    ACTIONS(205), 1,
      sym_relocation_type,
    ACTIONS(211), 1,
      aux_sym_decimal_token1,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    ACTIONS(219), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(221), 1,
      aux_sym_symbol_token1,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(317), 1,
      sym__bitwise_and_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(319), 1,
      sym__equality_expression,
    STATE(320), 1,
      sym__wrapped_equality_expression,
    STATE(321), 1,
      sym__relational_expression,
    STATE(322), 1,
      sym__wrapped_relational_expression,
    STATE(323), 1,
      sym__shift_expression,
    STATE(324), 1,
      sym__wrapped_shift_expression,
    STATE(326), 1,
      sym__wrapped_additive_expression,
    STATE(327), 1,
      sym__multiplicative_expression,
    STATE(338), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(345), 1,
      sym__additive_expression,
    STATE(471), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(203), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(209), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(207), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 10,
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
  [8152] = 33,
    ACTIONS(201), 1,
      sym_unary_minus_operator,
    ACTIONS(205), 1,
      sym_relocation_type,
    ACTIONS(211), 1,
      aux_sym_decimal_token1,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    ACTIONS(219), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(221), 1,
      aux_sym_symbol_token1,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(317), 1,
      sym__bitwise_and_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(319), 1,
      sym__equality_expression,
    STATE(320), 1,
      sym__wrapped_equality_expression,
    STATE(321), 1,
      sym__relational_expression,
    STATE(322), 1,
      sym__wrapped_relational_expression,
    STATE(323), 1,
      sym__shift_expression,
    STATE(324), 1,
      sym__wrapped_shift_expression,
    STATE(326), 1,
      sym__wrapped_additive_expression,
    STATE(327), 1,
      sym__multiplicative_expression,
    STATE(339), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(345), 1,
      sym__additive_expression,
    STATE(471), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(203), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(209), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(207), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 10,
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
  [8268] = 33,
    ACTIONS(201), 1,
      sym_unary_minus_operator,
    ACTIONS(205), 1,
      sym_relocation_type,
    ACTIONS(211), 1,
      aux_sym_decimal_token1,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    ACTIONS(219), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(221), 1,
      aux_sym_symbol_token1,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(317), 1,
      sym__bitwise_and_expression,
    STATE(319), 1,
      sym__equality_expression,
    STATE(320), 1,
      sym__wrapped_equality_expression,
    STATE(321), 1,
      sym__relational_expression,
    STATE(322), 1,
      sym__wrapped_relational_expression,
    STATE(323), 1,
      sym__shift_expression,
    STATE(324), 1,
      sym__wrapped_shift_expression,
    STATE(326), 1,
      sym__wrapped_additive_expression,
    STATE(327), 1,
      sym__multiplicative_expression,
    STATE(340), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(345), 1,
      sym__additive_expression,
    STATE(471), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(203), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(209), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(207), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 10,
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
  [8384] = 33,
    ACTIONS(201), 1,
      sym_unary_minus_operator,
    ACTIONS(205), 1,
      sym_relocation_type,
    ACTIONS(211), 1,
      aux_sym_decimal_token1,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    ACTIONS(219), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(221), 1,
      aux_sym_symbol_token1,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(317), 1,
      sym__bitwise_and_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(319), 1,
      sym__equality_expression,
    STATE(321), 1,
      sym__relational_expression,
    STATE(322), 1,
      sym__wrapped_relational_expression,
    STATE(323), 1,
      sym__shift_expression,
    STATE(324), 1,
      sym__wrapped_shift_expression,
    STATE(326), 1,
      sym__wrapped_additive_expression,
    STATE(327), 1,
      sym__multiplicative_expression,
    STATE(341), 1,
      sym__wrapped_equality_expression,
    STATE(345), 1,
      sym__additive_expression,
    STATE(471), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(203), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(209), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(207), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 10,
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
  [8500] = 33,
    ACTIONS(201), 1,
      sym_unary_minus_operator,
    ACTIONS(205), 1,
      sym_relocation_type,
    ACTIONS(211), 1,
      aux_sym_decimal_token1,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    ACTIONS(219), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(221), 1,
      aux_sym_symbol_token1,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(317), 1,
      sym__bitwise_and_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(319), 1,
      sym__equality_expression,
    STATE(320), 1,
      sym__wrapped_equality_expression,
    STATE(321), 1,
      sym__relational_expression,
    STATE(323), 1,
      sym__shift_expression,
    STATE(324), 1,
      sym__wrapped_shift_expression,
    STATE(326), 1,
      sym__wrapped_additive_expression,
    STATE(327), 1,
      sym__multiplicative_expression,
    STATE(342), 1,
      sym__wrapped_relational_expression,
    STATE(345), 1,
      sym__additive_expression,
    STATE(471), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(203), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(209), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(207), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 10,
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
  [8616] = 33,
    ACTIONS(201), 1,
      sym_unary_minus_operator,
    ACTIONS(205), 1,
      sym_relocation_type,
    ACTIONS(211), 1,
      aux_sym_decimal_token1,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    ACTIONS(219), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(221), 1,
      aux_sym_symbol_token1,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(317), 1,
      sym__bitwise_and_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(319), 1,
      sym__equality_expression,
    STATE(320), 1,
      sym__wrapped_equality_expression,
    STATE(321), 1,
      sym__relational_expression,
    STATE(322), 1,
      sym__wrapped_relational_expression,
    STATE(323), 1,
      sym__shift_expression,
    STATE(326), 1,
      sym__wrapped_additive_expression,
    STATE(327), 1,
      sym__multiplicative_expression,
    STATE(343), 1,
      sym__wrapped_shift_expression,
    STATE(345), 1,
      sym__additive_expression,
    STATE(471), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(203), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(209), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(207), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 10,
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
  [8732] = 33,
    ACTIONS(201), 1,
      sym_unary_minus_operator,
    ACTIONS(205), 1,
      sym_relocation_type,
    ACTIONS(211), 1,
      aux_sym_decimal_token1,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    ACTIONS(219), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(221), 1,
      aux_sym_symbol_token1,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(317), 1,
      sym__bitwise_and_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(319), 1,
      sym__equality_expression,
    STATE(320), 1,
      sym__wrapped_equality_expression,
    STATE(321), 1,
      sym__relational_expression,
    STATE(322), 1,
      sym__wrapped_relational_expression,
    STATE(323), 1,
      sym__shift_expression,
    STATE(324), 1,
      sym__wrapped_shift_expression,
    STATE(327), 1,
      sym__multiplicative_expression,
    STATE(344), 1,
      sym__wrapped_additive_expression,
    STATE(345), 1,
      sym__additive_expression,
    STATE(471), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(203), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(209), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(207), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 10,
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
  [8848] = 34,
    ACTIONS(201), 1,
      sym_unary_minus_operator,
    ACTIONS(205), 1,
      sym_relocation_type,
    ACTIONS(211), 1,
      aux_sym_decimal_token1,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    ACTIONS(219), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(221), 1,
      aux_sym_symbol_token1,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(317), 1,
      sym__bitwise_and_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(319), 1,
      sym__equality_expression,
    STATE(320), 1,
      sym__wrapped_equality_expression,
    STATE(321), 1,
      sym__relational_expression,
    STATE(322), 1,
      sym__wrapped_relational_expression,
    STATE(323), 1,
      sym__shift_expression,
    STATE(324), 1,
      sym__wrapped_shift_expression,
    STATE(326), 1,
      sym__wrapped_additive_expression,
    STATE(327), 1,
      sym__multiplicative_expression,
    STATE(328), 1,
      sym__wrapped_multiplicative_expression,
    STATE(345), 1,
      sym__additive_expression,
    STATE(471), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(203), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(243), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(241), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(303), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8966] = 33,
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
    STATE(162), 1,
      sym__logical_or_expression,
    STATE(164), 1,
      sym__logical_and_expression,
    STATE(165), 1,
      sym__wrapped_logical_and_expression,
    STATE(166), 1,
      sym__bitwise_or_expression,
    STATE(167), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(168), 1,
      sym__bitwise_xor_expression,
    STATE(169), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(170), 1,
      sym__bitwise_and_expression,
    STATE(171), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(172), 1,
      sym__equality_expression,
    STATE(173), 1,
      sym__wrapped_equality_expression,
    STATE(174), 1,
      sym__relational_expression,
    STATE(175), 1,
      sym__wrapped_relational_expression,
    STATE(176), 1,
      sym__shift_expression,
    STATE(177), 1,
      sym__wrapped_shift_expression,
    STATE(178), 1,
      sym__additive_expression,
    STATE(179), 1,
      sym__wrapped_additive_expression,
    STATE(180), 1,
      sym__multiplicative_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(352), 1,
      sym__wrapped_logical_or_expression,
    STATE(455), 1,
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
    STATE(181), 10,
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
  [9082] = 33,
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
    STATE(164), 1,
      sym__logical_and_expression,
    STATE(166), 1,
      sym__bitwise_or_expression,
    STATE(167), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(168), 1,
      sym__bitwise_xor_expression,
    STATE(169), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(170), 1,
      sym__bitwise_and_expression,
    STATE(171), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(172), 1,
      sym__equality_expression,
    STATE(173), 1,
      sym__wrapped_equality_expression,
    STATE(174), 1,
      sym__relational_expression,
    STATE(175), 1,
      sym__wrapped_relational_expression,
    STATE(176), 1,
      sym__shift_expression,
    STATE(177), 1,
      sym__wrapped_shift_expression,
    STATE(178), 1,
      sym__additive_expression,
    STATE(179), 1,
      sym__wrapped_additive_expression,
    STATE(180), 1,
      sym__multiplicative_expression,
    STATE(186), 1,
      sym__wrapped_logical_and_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(455), 1,
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
    STATE(181), 10,
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
  [9198] = 33,
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
      sym__bitwise_or_expression,
    STATE(168), 1,
      sym__bitwise_xor_expression,
    STATE(169), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(170), 1,
      sym__bitwise_and_expression,
    STATE(171), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(172), 1,
      sym__equality_expression,
    STATE(173), 1,
      sym__wrapped_equality_expression,
    STATE(174), 1,
      sym__relational_expression,
    STATE(175), 1,
      sym__wrapped_relational_expression,
    STATE(176), 1,
      sym__shift_expression,
    STATE(177), 1,
      sym__wrapped_shift_expression,
    STATE(178), 1,
      sym__additive_expression,
    STATE(179), 1,
      sym__wrapped_additive_expression,
    STATE(180), 1,
      sym__multiplicative_expression,
    STATE(187), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(455), 1,
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
    STATE(181), 10,
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
  [9314] = 33,
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
      sym__bitwise_xor_expression,
    STATE(170), 1,
      sym__bitwise_and_expression,
    STATE(171), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(172), 1,
      sym__equality_expression,
    STATE(173), 1,
      sym__wrapped_equality_expression,
    STATE(174), 1,
      sym__relational_expression,
    STATE(175), 1,
      sym__wrapped_relational_expression,
    STATE(176), 1,
      sym__shift_expression,
    STATE(177), 1,
      sym__wrapped_shift_expression,
    STATE(178), 1,
      sym__additive_expression,
    STATE(179), 1,
      sym__wrapped_additive_expression,
    STATE(180), 1,
      sym__multiplicative_expression,
    STATE(188), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(455), 1,
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
    STATE(181), 10,
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
  [9430] = 33,
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
    STATE(170), 1,
      sym__bitwise_and_expression,
    STATE(172), 1,
      sym__equality_expression,
    STATE(173), 1,
      sym__wrapped_equality_expression,
    STATE(174), 1,
      sym__relational_expression,
    STATE(175), 1,
      sym__wrapped_relational_expression,
    STATE(176), 1,
      sym__shift_expression,
    STATE(177), 1,
      sym__wrapped_shift_expression,
    STATE(178), 1,
      sym__additive_expression,
    STATE(179), 1,
      sym__wrapped_additive_expression,
    STATE(180), 1,
      sym__multiplicative_expression,
    STATE(189), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(455), 1,
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
    STATE(181), 10,
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
  [9546] = 33,
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
      sym__wrapped_equality_expression,
    STATE(172), 1,
      sym__equality_expression,
    STATE(174), 1,
      sym__relational_expression,
    STATE(175), 1,
      sym__wrapped_relational_expression,
    STATE(176), 1,
      sym__shift_expression,
    STATE(177), 1,
      sym__wrapped_shift_expression,
    STATE(178), 1,
      sym__additive_expression,
    STATE(179), 1,
      sym__wrapped_additive_expression,
    STATE(180), 1,
      sym__multiplicative_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(317), 1,
      sym__bitwise_and_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(455), 1,
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
    STATE(181), 10,
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
  [9662] = 33,
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
    STATE(174), 1,
      sym__relational_expression,
    STATE(176), 1,
      sym__shift_expression,
    STATE(177), 1,
      sym__wrapped_shift_expression,
    STATE(178), 1,
      sym__additive_expression,
    STATE(179), 1,
      sym__wrapped_additive_expression,
    STATE(180), 1,
      sym__multiplicative_expression,
    STATE(190), 1,
      sym__wrapped_relational_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(317), 1,
      sym__bitwise_and_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(319), 1,
      sym__equality_expression,
    STATE(320), 1,
      sym__wrapped_equality_expression,
    STATE(455), 1,
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
    STATE(181), 10,
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
  [9778] = 33,
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
    STATE(176), 1,
      sym__shift_expression,
    STATE(178), 1,
      sym__additive_expression,
    STATE(179), 1,
      sym__wrapped_additive_expression,
    STATE(180), 1,
      sym__multiplicative_expression,
    STATE(191), 1,
      sym__wrapped_shift_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(317), 1,
      sym__bitwise_and_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(319), 1,
      sym__equality_expression,
    STATE(320), 1,
      sym__wrapped_equality_expression,
    STATE(321), 1,
      sym__relational_expression,
    STATE(322), 1,
      sym__wrapped_relational_expression,
    STATE(455), 1,
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
    STATE(181), 10,
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
  [9894] = 33,
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
    STATE(178), 1,
      sym__additive_expression,
    STATE(180), 1,
      sym__multiplicative_expression,
    STATE(192), 1,
      sym__wrapped_additive_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(317), 1,
      sym__bitwise_and_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(319), 1,
      sym__equality_expression,
    STATE(320), 1,
      sym__wrapped_equality_expression,
    STATE(321), 1,
      sym__relational_expression,
    STATE(322), 1,
      sym__wrapped_relational_expression,
    STATE(323), 1,
      sym__shift_expression,
    STATE(324), 1,
      sym__wrapped_shift_expression,
    STATE(455), 1,
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
    STATE(181), 10,
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
  [10010] = 33,
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
      sym__multiplicative_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(317), 1,
      sym__bitwise_and_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(319), 1,
      sym__equality_expression,
    STATE(320), 1,
      sym__wrapped_equality_expression,
    STATE(321), 1,
      sym__relational_expression,
    STATE(322), 1,
      sym__wrapped_relational_expression,
    STATE(323), 1,
      sym__shift_expression,
    STATE(324), 1,
      sym__wrapped_shift_expression,
    STATE(326), 1,
      sym__wrapped_additive_expression,
    STATE(345), 1,
      sym__additive_expression,
    STATE(455), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(35), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(247), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(245), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(193), 10,
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
  [10126] = 34,
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
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(317), 1,
      sym__bitwise_and_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(319), 1,
      sym__equality_expression,
    STATE(320), 1,
      sym__wrapped_equality_expression,
    STATE(321), 1,
      sym__relational_expression,
    STATE(322), 1,
      sym__wrapped_relational_expression,
    STATE(323), 1,
      sym__shift_expression,
    STATE(324), 1,
      sym__wrapped_shift_expression,
    STATE(326), 1,
      sym__wrapped_additive_expression,
    STATE(327), 1,
      sym__multiplicative_expression,
    STATE(328), 1,
      sym__wrapped_multiplicative_expression,
    STATE(345), 1,
      sym__additive_expression,
    STATE(455), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(35), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(251), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(249), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(194), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10244] = 33,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      sym_unary_minus_operator,
    ACTIONS(153), 1,
      sym_relocation_type,
    ACTIONS(159), 1,
      aux_sym_decimal_token1,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    ACTIONS(167), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(169), 1,
      aux_sym_symbol_token1,
    STATE(247), 1,
      sym__wrapped_logical_and_expression,
    STATE(249), 1,
      sym__assignment_expression,
    STATE(251), 1,
      sym__logical_or_expression,
    STATE(252), 1,
      sym__wrapped_logical_or_expression,
    STATE(253), 1,
      sym__logical_and_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(271), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__bitwise_and_expression,
    STATE(277), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(278), 1,
      sym__equality_expression,
    STATE(279), 1,
      sym__wrapped_equality_expression,
    STATE(280), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(284), 1,
      sym__additive_expression,
    STATE(285), 1,
      sym__wrapped_additive_expression,
    STATE(286), 1,
      sym__multiplicative_expression,
    STATE(288), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(151), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(157), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(155), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(287), 10,
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
  [10360] = 33,
    ACTIONS(61), 1,
      sym_unary_minus_operator,
    ACTIONS(65), 1,
      sym_relocation_type,
    ACTIONS(71), 1,
      aux_sym_decimal_token1,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(79), 1,
      aux_sym_symbol_token1,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    STATE(199), 1,
      sym__wrapped_logical_or_expression,
    STATE(200), 1,
      sym__logical_or_expression,
    STATE(202), 1,
      sym__logical_and_expression,
    STATE(203), 1,
      sym__wrapped_logical_and_expression,
    STATE(204), 1,
      sym__bitwise_or_expression,
    STATE(205), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(206), 1,
      sym__bitwise_xor_expression,
    STATE(207), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(208), 1,
      sym__bitwise_and_expression,
    STATE(209), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(221), 1,
      sym__equality_expression,
    STATE(226), 1,
      sym__wrapped_equality_expression,
    STATE(227), 1,
      sym__relational_expression,
    STATE(228), 1,
      sym__wrapped_relational_expression,
    STATE(229), 1,
      sym__shift_expression,
    STATE(230), 1,
      sym__wrapped_shift_expression,
    STATE(231), 1,
      sym__additive_expression,
    STATE(232), 1,
      sym__wrapped_additive_expression,
    STATE(233), 1,
      sym__multiplicative_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(468), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(63), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(69), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(67), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(234), 10,
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
  [10476] = 33,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      sym_unary_minus_operator,
    ACTIONS(153), 1,
      sym_relocation_type,
    ACTIONS(159), 1,
      aux_sym_decimal_token1,
    ACTIONS(161), 1,
      anon_sym_SQUOTE,
    ACTIONS(167), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(169), 1,
      aux_sym_symbol_token1,
    STATE(247), 1,
      sym__wrapped_logical_and_expression,
    STATE(251), 1,
      sym__logical_or_expression,
    STATE(253), 1,
      sym__logical_and_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(271), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__bitwise_and_expression,
    STATE(277), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(278), 1,
      sym__equality_expression,
    STATE(279), 1,
      sym__wrapped_equality_expression,
    STATE(280), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(284), 1,
      sym__additive_expression,
    STATE(285), 1,
      sym__wrapped_additive_expression,
    STATE(286), 1,
      sym__multiplicative_expression,
    STATE(289), 1,
      sym__wrapped_logical_or_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(469), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(151), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(157), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(155), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(287), 10,
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
  [10592] = 33,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      sym_unary_minus_operator,
    ACTIONS(129), 1,
      sym_relocation_type,
    ACTIONS(135), 1,
      aux_sym_decimal_token1,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(141), 1,
      aux_sym_symbol_token1,
    STATE(112), 1,
      sym__wrapped_additive_expression,
    STATE(118), 1,
      sym__logical_or_expression,
    STATE(120), 1,
      sym__logical_and_expression,
    STATE(121), 1,
      sym__wrapped_logical_and_expression,
    STATE(122), 1,
      sym__bitwise_or_expression,
    STATE(123), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(124), 1,
      sym__bitwise_xor_expression,
    STATE(125), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(126), 1,
      sym__bitwise_and_expression,
    STATE(127), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(128), 1,
      sym__equality_expression,
    STATE(129), 1,
      sym__wrapped_equality_expression,
    STATE(130), 1,
      sym__relational_expression,
    STATE(131), 1,
      sym__wrapped_relational_expression,
    STATE(132), 1,
      sym__wrapped_logical_or_expression,
    STATE(133), 1,
      sym__wrapped_shift_expression,
    STATE(134), 1,
      sym__additive_expression,
    STATE(135), 1,
      sym__multiplicative_expression,
    STATE(154), 1,
      sym__shift_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(470), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(127), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(133), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(131), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(136), 10,
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
  [10708] = 33,
    ACTIONS(201), 1,
      sym_unary_minus_operator,
    ACTIONS(205), 1,
      sym_relocation_type,
    ACTIONS(211), 1,
      aux_sym_decimal_token1,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    ACTIONS(219), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(221), 1,
      aux_sym_symbol_token1,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(317), 1,
      sym__bitwise_and_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(319), 1,
      sym__equality_expression,
    STATE(320), 1,
      sym__wrapped_equality_expression,
    STATE(321), 1,
      sym__relational_expression,
    STATE(322), 1,
      sym__wrapped_relational_expression,
    STATE(323), 1,
      sym__shift_expression,
    STATE(324), 1,
      sym__wrapped_shift_expression,
    STATE(326), 1,
      sym__wrapped_additive_expression,
    STATE(327), 1,
      sym__multiplicative_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(345), 1,
      sym__additive_expression,
    STATE(471), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(203), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(209), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(207), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 10,
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
  [10824] = 33,
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
    STATE(158), 1,
      sym__wrapped_logical_or_expression,
    STATE(162), 1,
      sym__logical_or_expression,
    STATE(164), 1,
      sym__logical_and_expression,
    STATE(165), 1,
      sym__wrapped_logical_and_expression,
    STATE(166), 1,
      sym__bitwise_or_expression,
    STATE(167), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(168), 1,
      sym__bitwise_xor_expression,
    STATE(169), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(170), 1,
      sym__bitwise_and_expression,
    STATE(171), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(172), 1,
      sym__equality_expression,
    STATE(173), 1,
      sym__wrapped_equality_expression,
    STATE(174), 1,
      sym__relational_expression,
    STATE(175), 1,
      sym__wrapped_relational_expression,
    STATE(176), 1,
      sym__shift_expression,
    STATE(177), 1,
      sym__wrapped_shift_expression,
    STATE(178), 1,
      sym__additive_expression,
    STATE(179), 1,
      sym__wrapped_additive_expression,
    STATE(180), 1,
      sym__multiplicative_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(455), 1,
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
    STATE(181), 10,
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
  [10940] = 33,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      sym_unary_minus_operator,
    ACTIONS(129), 1,
      sym_relocation_type,
    ACTIONS(135), 1,
      aux_sym_decimal_token1,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(141), 1,
      aux_sym_symbol_token1,
    STATE(112), 1,
      sym__wrapped_additive_expression,
    STATE(117), 1,
      sym__assignment_expression,
    STATE(118), 1,
      sym__logical_or_expression,
    STATE(119), 1,
      sym__wrapped_logical_or_expression,
    STATE(120), 1,
      sym__logical_and_expression,
    STATE(121), 1,
      sym__wrapped_logical_and_expression,
    STATE(122), 1,
      sym__bitwise_or_expression,
    STATE(123), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(124), 1,
      sym__bitwise_xor_expression,
    STATE(125), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(126), 1,
      sym__bitwise_and_expression,
    STATE(127), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(128), 1,
      sym__equality_expression,
    STATE(129), 1,
      sym__wrapped_equality_expression,
    STATE(130), 1,
      sym__relational_expression,
    STATE(131), 1,
      sym__wrapped_relational_expression,
    STATE(133), 1,
      sym__wrapped_shift_expression,
    STATE(134), 1,
      sym__additive_expression,
    STATE(135), 1,
      sym__multiplicative_expression,
    STATE(137), 1,
      sym__wrapped_assignment_expression,
    STATE(154), 1,
      sym__shift_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(127), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(133), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(131), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(136), 10,
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
  [11056] = 33,
    ACTIONS(201), 1,
      sym_unary_minus_operator,
    ACTIONS(205), 1,
      sym_relocation_type,
    ACTIONS(211), 1,
      aux_sym_decimal_token1,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    ACTIONS(219), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(221), 1,
      aux_sym_symbol_token1,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(317), 1,
      sym__bitwise_and_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(319), 1,
      sym__equality_expression,
    STATE(320), 1,
      sym__wrapped_equality_expression,
    STATE(321), 1,
      sym__relational_expression,
    STATE(322), 1,
      sym__wrapped_relational_expression,
    STATE(323), 1,
      sym__shift_expression,
    STATE(324), 1,
      sym__wrapped_shift_expression,
    STATE(326), 1,
      sym__wrapped_additive_expression,
    STATE(327), 1,
      sym__multiplicative_expression,
    STATE(329), 1,
      sym__wrapped_assignment_expression,
    STATE(345), 1,
      sym__additive_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(203), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(209), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(207), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 10,
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
  [11172] = 33,
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
    STATE(161), 1,
      sym__assignment_expression,
    STATE(162), 1,
      sym__logical_or_expression,
    STATE(163), 1,
      sym__wrapped_logical_or_expression,
    STATE(164), 1,
      sym__logical_and_expression,
    STATE(165), 1,
      sym__wrapped_logical_and_expression,
    STATE(166), 1,
      sym__bitwise_or_expression,
    STATE(167), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(168), 1,
      sym__bitwise_xor_expression,
    STATE(169), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(170), 1,
      sym__bitwise_and_expression,
    STATE(171), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(172), 1,
      sym__equality_expression,
    STATE(173), 1,
      sym__wrapped_equality_expression,
    STATE(174), 1,
      sym__relational_expression,
    STATE(175), 1,
      sym__wrapped_relational_expression,
    STATE(176), 1,
      sym__shift_expression,
    STATE(177), 1,
      sym__wrapped_shift_expression,
    STATE(178), 1,
      sym__additive_expression,
    STATE(179), 1,
      sym__wrapped_additive_expression,
    STATE(180), 1,
      sym__multiplicative_expression,
    STATE(182), 1,
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
    STATE(181), 10,
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
  [11288] = 33,
    ACTIONS(61), 1,
      sym_unary_minus_operator,
    ACTIONS(65), 1,
      sym_relocation_type,
    ACTIONS(71), 1,
      aux_sym_decimal_token1,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(79), 1,
      aux_sym_symbol_token1,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    STATE(220), 1,
      sym__wrapped_shift_expression,
    STATE(229), 1,
      sym__shift_expression,
    STATE(231), 1,
      sym__additive_expression,
    STATE(232), 1,
      sym__wrapped_additive_expression,
    STATE(233), 1,
      sym__multiplicative_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(317), 1,
      sym__bitwise_and_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(319), 1,
      sym__equality_expression,
    STATE(320), 1,
      sym__wrapped_equality_expression,
    STATE(321), 1,
      sym__relational_expression,
    STATE(322), 1,
      sym__wrapped_relational_expression,
    STATE(468), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(63), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(69), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(67), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(234), 10,
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
  [11404] = 33,
    ACTIONS(201), 1,
      sym_unary_minus_operator,
    ACTIONS(205), 1,
      sym_relocation_type,
    ACTIONS(211), 1,
      aux_sym_decimal_token1,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    ACTIONS(219), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(221), 1,
      aux_sym_symbol_token1,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(317), 1,
      sym__bitwise_and_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(319), 1,
      sym__equality_expression,
    STATE(320), 1,
      sym__wrapped_equality_expression,
    STATE(321), 1,
      sym__relational_expression,
    STATE(322), 1,
      sym__wrapped_relational_expression,
    STATE(323), 1,
      sym__shift_expression,
    STATE(324), 1,
      sym__wrapped_shift_expression,
    STATE(326), 1,
      sym__wrapped_additive_expression,
    STATE(327), 1,
      sym__multiplicative_expression,
    STATE(345), 1,
      sym__additive_expression,
    STATE(439), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(203), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(209), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(207), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 10,
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
  [11520] = 33,
    ACTIONS(61), 1,
      sym_unary_minus_operator,
    ACTIONS(65), 1,
      sym_relocation_type,
    ACTIONS(71), 1,
      aux_sym_decimal_token1,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(79), 1,
      aux_sym_symbol_token1,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    STATE(222), 1,
      sym__wrapped_additive_expression,
    STATE(231), 1,
      sym__additive_expression,
    STATE(233), 1,
      sym__multiplicative_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(317), 1,
      sym__bitwise_and_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(319), 1,
      sym__equality_expression,
    STATE(320), 1,
      sym__wrapped_equality_expression,
    STATE(321), 1,
      sym__relational_expression,
    STATE(322), 1,
      sym__wrapped_relational_expression,
    STATE(323), 1,
      sym__shift_expression,
    STATE(324), 1,
      sym__wrapped_shift_expression,
    STATE(468), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(63), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(69), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(67), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(234), 10,
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
  [11636] = 33,
    ACTIONS(61), 1,
      sym_unary_minus_operator,
    ACTIONS(65), 1,
      sym_relocation_type,
    ACTIONS(71), 1,
      aux_sym_decimal_token1,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(79), 1,
      aux_sym_symbol_token1,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    STATE(233), 1,
      sym__multiplicative_expression,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(317), 1,
      sym__bitwise_and_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(319), 1,
      sym__equality_expression,
    STATE(320), 1,
      sym__wrapped_equality_expression,
    STATE(321), 1,
      sym__relational_expression,
    STATE(322), 1,
      sym__wrapped_relational_expression,
    STATE(323), 1,
      sym__shift_expression,
    STATE(324), 1,
      sym__wrapped_shift_expression,
    STATE(326), 1,
      sym__wrapped_additive_expression,
    STATE(345), 1,
      sym__additive_expression,
    STATE(468), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(63), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(255), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(253), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(223), 10,
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
  [11752] = 33,
    ACTIONS(201), 1,
      sym_unary_minus_operator,
    ACTIONS(205), 1,
      sym_relocation_type,
    ACTIONS(211), 1,
      aux_sym_decimal_token1,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    ACTIONS(219), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(221), 1,
      aux_sym_symbol_token1,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(317), 1,
      sym__bitwise_and_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(319), 1,
      sym__equality_expression,
    STATE(320), 1,
      sym__wrapped_equality_expression,
    STATE(321), 1,
      sym__relational_expression,
    STATE(322), 1,
      sym__wrapped_relational_expression,
    STATE(323), 1,
      sym__shift_expression,
    STATE(324), 1,
      sym__wrapped_shift_expression,
    STATE(326), 1,
      sym__wrapped_additive_expression,
    STATE(327), 1,
      sym__multiplicative_expression,
    STATE(345), 1,
      sym__additive_expression,
    STATE(443), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(203), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(209), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(207), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 10,
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
  [11868] = 34,
    ACTIONS(61), 1,
      sym_unary_minus_operator,
    ACTIONS(65), 1,
      sym_relocation_type,
    ACTIONS(71), 1,
      aux_sym_decimal_token1,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(79), 1,
      aux_sym_symbol_token1,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(317), 1,
      sym__bitwise_and_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(319), 1,
      sym__equality_expression,
    STATE(320), 1,
      sym__wrapped_equality_expression,
    STATE(321), 1,
      sym__relational_expression,
    STATE(322), 1,
      sym__wrapped_relational_expression,
    STATE(323), 1,
      sym__shift_expression,
    STATE(324), 1,
      sym__wrapped_shift_expression,
    STATE(326), 1,
      sym__wrapped_additive_expression,
    STATE(327), 1,
      sym__multiplicative_expression,
    STATE(328), 1,
      sym__wrapped_multiplicative_expression,
    STATE(345), 1,
      sym__additive_expression,
    STATE(468), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(63), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(259), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(257), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(224), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11986] = 33,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      sym_unary_minus_operator,
    ACTIONS(129), 1,
      sym_relocation_type,
    ACTIONS(135), 1,
      aux_sym_decimal_token1,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(141), 1,
      aux_sym_symbol_token1,
    STATE(112), 1,
      sym__wrapped_additive_expression,
    STATE(117), 1,
      sym__assignment_expression,
    STATE(118), 1,
      sym__logical_or_expression,
    STATE(119), 1,
      sym__wrapped_logical_or_expression,
    STATE(120), 1,
      sym__logical_and_expression,
    STATE(121), 1,
      sym__wrapped_logical_and_expression,
    STATE(122), 1,
      sym__bitwise_or_expression,
    STATE(123), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(124), 1,
      sym__bitwise_xor_expression,
    STATE(125), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(126), 1,
      sym__bitwise_and_expression,
    STATE(127), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(128), 1,
      sym__equality_expression,
    STATE(129), 1,
      sym__wrapped_equality_expression,
    STATE(130), 1,
      sym__relational_expression,
    STATE(131), 1,
      sym__wrapped_relational_expression,
    STATE(133), 1,
      sym__wrapped_shift_expression,
    STATE(134), 1,
      sym__additive_expression,
    STATE(135), 1,
      sym__multiplicative_expression,
    STATE(154), 1,
      sym__shift_expression,
    STATE(350), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(127), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(133), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(131), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(136), 10,
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
  [12102] = 33,
    ACTIONS(201), 1,
      sym_unary_minus_operator,
    ACTIONS(205), 1,
      sym_relocation_type,
    ACTIONS(211), 1,
      aux_sym_decimal_token1,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    ACTIONS(219), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(221), 1,
      aux_sym_symbol_token1,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(317), 1,
      sym__bitwise_and_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(319), 1,
      sym__equality_expression,
    STATE(320), 1,
      sym__wrapped_equality_expression,
    STATE(321), 1,
      sym__relational_expression,
    STATE(322), 1,
      sym__wrapped_relational_expression,
    STATE(323), 1,
      sym__shift_expression,
    STATE(324), 1,
      sym__wrapped_shift_expression,
    STATE(326), 1,
      sym__wrapped_additive_expression,
    STATE(327), 1,
      sym__multiplicative_expression,
    STATE(345), 1,
      sym__additive_expression,
    STATE(440), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(203), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(209), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(207), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 10,
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
  [12218] = 33,
    ACTIONS(201), 1,
      sym_unary_minus_operator,
    ACTIONS(205), 1,
      sym_relocation_type,
    ACTIONS(211), 1,
      aux_sym_decimal_token1,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    ACTIONS(219), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(221), 1,
      aux_sym_symbol_token1,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(317), 1,
      sym__bitwise_and_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(319), 1,
      sym__equality_expression,
    STATE(320), 1,
      sym__wrapped_equality_expression,
    STATE(321), 1,
      sym__relational_expression,
    STATE(322), 1,
      sym__wrapped_relational_expression,
    STATE(323), 1,
      sym__shift_expression,
    STATE(324), 1,
      sym__wrapped_shift_expression,
    STATE(326), 1,
      sym__wrapped_additive_expression,
    STATE(327), 1,
      sym__multiplicative_expression,
    STATE(345), 1,
      sym__additive_expression,
    STATE(446), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(203), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(209), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(207), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(328), 10,
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
  [12334] = 33,
    ACTIONS(61), 1,
      sym_unary_minus_operator,
    ACTIONS(65), 1,
      sym_relocation_type,
    ACTIONS(71), 1,
      aux_sym_decimal_token1,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(79), 1,
      aux_sym_symbol_token1,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    STATE(200), 1,
      sym__logical_or_expression,
    STATE(201), 1,
      sym__wrapped_logical_or_expression,
    STATE(202), 1,
      sym__logical_and_expression,
    STATE(203), 1,
      sym__wrapped_logical_and_expression,
    STATE(204), 1,
      sym__bitwise_or_expression,
    STATE(205), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(206), 1,
      sym__bitwise_xor_expression,
    STATE(207), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(208), 1,
      sym__bitwise_and_expression,
    STATE(209), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(219), 1,
      sym__assignment_expression,
    STATE(221), 1,
      sym__equality_expression,
    STATE(225), 1,
      sym__wrapped_assignment_expression,
    STATE(226), 1,
      sym__wrapped_equality_expression,
    STATE(227), 1,
      sym__relational_expression,
    STATE(228), 1,
      sym__wrapped_relational_expression,
    STATE(229), 1,
      sym__shift_expression,
    STATE(230), 1,
      sym__wrapped_shift_expression,
    STATE(231), 1,
      sym__additive_expression,
    STATE(232), 1,
      sym__wrapped_additive_expression,
    STATE(233), 1,
      sym__multiplicative_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(63), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(69), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(67), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(234), 10,
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
  [12450] = 33,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      sym_unary_minus_operator,
    ACTIONS(129), 1,
      sym_relocation_type,
    ACTIONS(135), 1,
      aux_sym_decimal_token1,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(141), 1,
      aux_sym_symbol_token1,
    STATE(112), 1,
      sym__wrapped_additive_expression,
    STATE(117), 1,
      sym__assignment_expression,
    STATE(118), 1,
      sym__logical_or_expression,
    STATE(119), 1,
      sym__wrapped_logical_or_expression,
    STATE(120), 1,
      sym__logical_and_expression,
    STATE(121), 1,
      sym__wrapped_logical_and_expression,
    STATE(122), 1,
      sym__bitwise_or_expression,
    STATE(123), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(124), 1,
      sym__bitwise_xor_expression,
    STATE(125), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(126), 1,
      sym__bitwise_and_expression,
    STATE(127), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(128), 1,
      sym__equality_expression,
    STATE(129), 1,
      sym__wrapped_equality_expression,
    STATE(130), 1,
      sym__relational_expression,
    STATE(131), 1,
      sym__wrapped_relational_expression,
    STATE(133), 1,
      sym__wrapped_shift_expression,
    STATE(134), 1,
      sym__additive_expression,
    STATE(135), 1,
      sym__multiplicative_expression,
    STATE(154), 1,
      sym__shift_expression,
    STATE(348), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(127), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(133), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(131), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(136), 10,
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
  [12566] = 33,
    ACTIONS(201), 1,
      sym_unary_minus_operator,
    ACTIONS(205), 1,
      sym_relocation_type,
    ACTIONS(211), 1,
      aux_sym_decimal_token1,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    ACTIONS(219), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(221), 1,
      aux_sym_symbol_token1,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(308), 1,
      sym__assignment_expression,
    STATE(309), 1,
      sym__logical_or_expression,
    STATE(310), 1,
      sym__wrapped_logical_or_expression,
    STATE(311), 1,
      sym__logical_and_expression,
    STATE(312), 1,
      sym__wrapped_logical_and_expression,
    STATE(313), 1,
      sym__bitwise_or_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(315), 1,
      sym__bitwise_xor_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(317), 1,
      sym__bitwise_and_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(319), 1,
      sym__equality_expression,
    STATE(320), 1,
      sym__wrapped_equality_expression,
    STATE(321), 1,
      sym__relational_expression,
    STATE(322), 1,
      sym__wrapped_relational_expression,
    STATE(323), 1,
      sym__shift_expression,
    STATE(324), 1,
      sym__wrapped_shift_expression,
    STATE(326), 1,
      sym__wrapped_additive_expression,
    STATE(327), 1,
      sym__multiplicative_expression,
    STATE(345), 1,
      sym__additive_expression,
    STATE(471), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(203), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(263), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(261), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(304), 10,
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
  [12682] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    ACTIONS(269), 1,
      aux_sym__whitespace_token1,
    ACTIONS(267), 42,
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
  [12739] = 4,
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
  [12793] = 4,
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
  [12847] = 4,
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
  [12901] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(287), 1,
      sym_additive_operator,
    ACTIONS(283), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(285), 17,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [12933] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(289), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(291), 18,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [12963] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(293), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(295), 18,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [12993] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(297), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(299), 18,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [13023] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(301), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(303), 18,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [13053] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(305), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(307), 18,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [13083] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(309), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(311), 18,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [13113] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(317), 1,
      sym_logical_or_operator,
    ACTIONS(313), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(315), 17,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [13145] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(319), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(321), 18,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [13175] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(327), 1,
      sym_logical_and_operator,
    ACTIONS(323), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(325), 17,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [13207] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(329), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(331), 18,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [13237] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(337), 1,
      sym_bitwise_or_operator,
    ACTIONS(333), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(335), 17,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [13269] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(339), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(341), 18,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [13299] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(347), 1,
      sym_bitwise_xor_operator,
    ACTIONS(343), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(345), 17,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [13331] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(349), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(351), 18,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [13361] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(357), 1,
      sym_bitwise_and_operator,
    ACTIONS(353), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(355), 17,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [13393] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(359), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(361), 18,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [13423] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(367), 1,
      sym_equality_operator,
    ACTIONS(363), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(365), 17,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [13455] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(369), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(371), 18,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [13485] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(377), 1,
      sym_relational_operator,
    ACTIONS(373), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(375), 17,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [13517] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(379), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(381), 18,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [13547] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(387), 1,
      sym_shift_operator,
    ACTIONS(383), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(385), 17,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [13579] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(389), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(391), 18,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [13609] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(393), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(395), 18,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [13639] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(401), 1,
      sym_multiplicative_operator,
    ACTIONS(397), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(399), 17,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [13671] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(409), 1,
      sym_assignment_operator,
    ACTIONS(403), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(405), 16,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [13705] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(411), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(413), 18,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [13735] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(415), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(417), 18,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [13765] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(419), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(421), 18,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [13795] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(327), 1,
      sym_logical_and_operator,
    ACTIONS(423), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(425), 17,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [13827] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(337), 1,
      sym_bitwise_or_operator,
    ACTIONS(427), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(429), 17,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [13859] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(347), 1,
      sym_bitwise_xor_operator,
    ACTIONS(431), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(433), 17,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [13891] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(357), 1,
      sym_bitwise_and_operator,
    ACTIONS(435), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(437), 17,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [13923] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(367), 1,
      sym_equality_operator,
    ACTIONS(439), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(441), 17,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [13955] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(377), 1,
      sym_relational_operator,
    ACTIONS(443), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(445), 17,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [13987] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(387), 1,
      sym_shift_operator,
    ACTIONS(447), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(449), 17,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [14019] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(287), 1,
      sym_additive_operator,
    ACTIONS(451), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(453), 17,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [14051] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(401), 1,
      sym_multiplicative_operator,
    ACTIONS(455), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(457), 17,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [14083] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(459), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(461), 18,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [14113] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(463), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(465), 18,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [14143] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(467), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(469), 18,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [14173] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(471), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(473), 18,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [14203] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(475), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(477), 18,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
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
  [14233] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(479), 1,
      sym_equality_operator,
    ACTIONS(441), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(439), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14263] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(473), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(471), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14291] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(291), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(289), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14319] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(381), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(379), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14347] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(299), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(297), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14375] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(303), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(301), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14403] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(307), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(305), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14431] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(311), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(309), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14459] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(481), 1,
      sym_logical_or_operator,
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
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14489] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(321), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(319), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14517] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(483), 1,
      sym_logical_and_operator,
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
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14547] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(331), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(329), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14575] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(485), 1,
      sym_bitwise_or_operator,
    ACTIONS(335), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(333), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14605] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(341), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(339), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14633] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(487), 1,
      sym_bitwise_xor_operator,
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
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14663] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(351), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(349), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14691] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(489), 1,
      sym_bitwise_and_operator,
    ACTIONS(355), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(353), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14721] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(361), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(359), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14749] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(479), 1,
      sym_equality_operator,
    ACTIONS(365), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(363), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14779] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(371), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(369), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14807] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(491), 1,
      sym_relational_operator,
    ACTIONS(375), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(373), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14837] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(477), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(475), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14865] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(493), 1,
      sym_shift_operator,
    ACTIONS(385), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(383), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [14895] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(391), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(389), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14923] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(495), 1,
      sym_additive_operator,
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
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [14953] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(395), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(393), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14981] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(497), 1,
      sym_multiplicative_operator,
    ACTIONS(399), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(397), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15011] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(501), 1,
      sym_assignment_operator,
    ACTIONS(405), 4,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(403), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15043] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(413), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(411), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15071] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(417), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(415), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15099] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(421), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(419), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15127] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(483), 1,
      sym_logical_and_operator,
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
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15157] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(485), 1,
      sym_bitwise_or_operator,
    ACTIONS(429), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(427), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15187] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(487), 1,
      sym_bitwise_xor_operator,
    ACTIONS(433), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(431), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15217] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(489), 1,
      sym_bitwise_and_operator,
    ACTIONS(437), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(435), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15247] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(491), 1,
      sym_relational_operator,
    ACTIONS(445), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(443), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15277] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(493), 1,
      sym_shift_operator,
    ACTIONS(449), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(447), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [15307] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(495), 1,
      sym_additive_operator,
    ACTIONS(453), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(451), 14,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [15337] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(497), 1,
      sym_multiplicative_operator,
    ACTIONS(457), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(455), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15367] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(461), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(459), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15395] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(465), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(463), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15423] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(469), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(467), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15451] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(295), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(293), 15,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15479] = 4,
    ACTIONS(503), 1,
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
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15508] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(381), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(379), 13,
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
  [15535] = 3,
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
  [15562] = 4,
    ACTIONS(505), 1,
      sym_logical_or_operator,
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
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15591] = 3,
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
  [15618] = 4,
    ACTIONS(507), 1,
      sym_logical_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(325), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(323), 12,
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
  [15647] = 3,
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
  [15674] = 4,
    ACTIONS(509), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(335), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(333), 13,
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
  [15703] = 3,
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
  [15730] = 4,
    ACTIONS(511), 1,
      sym_bitwise_xor_operator,
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
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15759] = 3,
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
  [15786] = 4,
    ACTIONS(513), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(355), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(353), 13,
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
  [15815] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(413), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(411), 13,
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
  [15842] = 4,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(515), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(291), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(289), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15871] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(417), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(415), 13,
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
  [15898] = 3,
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
  [15925] = 3,
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
  [15952] = 4,
    ACTIONS(507), 1,
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
    ACTIONS(423), 12,
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
  [15981] = 4,
    ACTIONS(509), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(429), 4,
      sym_assignment_operator,
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
  [16010] = 4,
    ACTIONS(511), 1,
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
    ACTIONS(431), 12,
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
  [16039] = 4,
    ACTIONS(513), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(437), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [16068] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(307), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(305), 13,
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
  [16095] = 4,
    ACTIONS(517), 1,
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
      sym_equality_operator,
      sym_additive_operator,
  [16124] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16151] = 4,
    ACTIONS(519), 1,
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
    ACTIONS(451), 12,
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
  [16180] = 4,
    ACTIONS(521), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(457), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(455), 13,
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
  [16209] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(461), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
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
  [16236] = 5,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(525), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(405), 4,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(403), 12,
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
  [16267] = 4,
    ACTIONS(503), 1,
      sym_equality_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(365), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(363), 12,
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
  [16296] = 3,
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
  [16323] = 4,
    ACTIONS(527), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(375), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [16352] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(477), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(475), 13,
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
  [16379] = 4,
    ACTIONS(517), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(385), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(383), 12,
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
  [16408] = 3,
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
  [16435] = 4,
    ACTIONS(519), 1,
      sym_additive_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(285), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(283), 12,
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
  [16464] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16491] = 4,
    ACTIONS(521), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(399), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(397), 13,
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
  [16520] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(299), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(297), 13,
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
  [16547] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(465), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(463), 13,
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
  [16574] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(469), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(467), 13,
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
  [16601] = 3,
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
  [16628] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(473), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(471), 13,
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
  [16655] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(303), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(301), 13,
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
  [16682] = 4,
    ACTIONS(527), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(445), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [16711] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(411), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(413), 14,
      anon_sym_SEMI,
      sym_line_comment,
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
  [16739] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(289), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(291), 14,
      anon_sym_SEMI,
      sym_line_comment,
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
  [16767] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(467), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(469), 14,
      anon_sym_SEMI,
      sym_line_comment,
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
  [16795] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(531), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(529), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(533), 12,
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
  [16825] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(471), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(473), 14,
      anon_sym_SEMI,
      sym_line_comment,
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
  [16853] = 4,
    ACTIONS(535), 1,
      sym_logical_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(325), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(323), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16879] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [16903] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(307), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
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
  [16927] = 3,
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
  [16951] = 3,
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
  [16975] = 4,
    ACTIONS(537), 1,
      sym_logical_or_operator,
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
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17001] = 3,
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
  [17025] = 3,
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
  [17049] = 3,
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
  [17073] = 3,
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
  [17097] = 4,
    ACTIONS(535), 1,
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
  [17123] = 4,
    ACTIONS(539), 1,
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
  [17149] = 4,
    ACTIONS(541), 1,
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
  [17175] = 4,
    ACTIONS(543), 1,
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
  [17201] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(299), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [17225] = 4,
    ACTIONS(545), 1,
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
  [17251] = 4,
    ACTIONS(547), 1,
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
  [17277] = 4,
    ACTIONS(549), 1,
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
  [17303] = 4,
    ACTIONS(551), 1,
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
  [17329] = 3,
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
  [17353] = 3,
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
  [17377] = 3,
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
  [17401] = 3,
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
  [17425] = 3,
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
  [17449] = 4,
    ACTIONS(539), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(335), 4,
      sym_assignment_operator,
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
  [17475] = 3,
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
  [17499] = 4,
    ACTIONS(541), 1,
      sym_bitwise_xor_operator,
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
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17525] = 3,
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
  [17549] = 4,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(533), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(553), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17575] = 4,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(533), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(553), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17601] = 4,
    ACTIONS(543), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(355), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(353), 10,
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
  [17627] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [17651] = 4,
    ACTIONS(559), 1,
      sym_equality_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(365), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(363), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17677] = 3,
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
  [17701] = 4,
    ACTIONS(545), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(375), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [17727] = 3,
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
  [17751] = 4,
    ACTIONS(547), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(385), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(383), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [17777] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [17801] = 4,
    ACTIONS(549), 1,
      sym_additive_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(285), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(283), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [17827] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [17851] = 4,
    ACTIONS(551), 1,
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
  [17877] = 5,
    ACTIONS(561), 1,
      anon_sym_LPAREN,
    ACTIONS(563), 1,
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
  [17905] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(381), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(379), 10,
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
  [17929] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [17953] = 4,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(533), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(553), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17979] = 4,
    ACTIONS(567), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(533), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(553), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18005] = 4,
    ACTIONS(569), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(533), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(553), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18031] = 4,
    ACTIONS(571), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(533), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(553), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18057] = 4,
    ACTIONS(573), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(533), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(553), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18083] = 4,
    ACTIONS(575), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(533), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(553), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18109] = 4,
    ACTIONS(577), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(533), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(553), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18135] = 4,
    ACTIONS(579), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(533), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(553), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18161] = 4,
    ACTIONS(581), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(533), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(553), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18187] = 4,
    ACTIONS(583), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(533), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(553), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18213] = 4,
    ACTIONS(559), 1,
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
  [18239] = 14,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(587), 1,
      anon_sym_SEMI,
    ACTIONS(589), 1,
      sym_line_comment,
    ACTIONS(592), 1,
      sym_block_comment,
    ACTIONS(594), 1,
      anon_sym_COMMA,
    ACTIONS(598), 1,
      sym_assignment_operator,
    ACTIONS(600), 1,
      sym__operand_separator,
    ACTIONS(602), 1,
      sym__data_separator,
    STATE(347), 1,
      aux_sym_numeric_operands_repeat1,
    STATE(370), 1,
      aux_sym_numeric_operands_repeat3,
    STATE(381), 1,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(585), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(596), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [18284] = 3,
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
  [18306] = 4,
    ACTIONS(604), 1,
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
  [18330] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [18352] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(299), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [18374] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [18396] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(307), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
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
  [18418] = 3,
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
  [18440] = 4,
    ACTIONS(606), 1,
      sym_logical_or_operator,
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
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18464] = 3,
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
  [18486] = 4,
    ACTIONS(608), 1,
      sym_logical_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(325), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(323), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18510] = 3,
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
  [18532] = 4,
    ACTIONS(610), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(335), 4,
      sym_assignment_operator,
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
  [18556] = 3,
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
  [18578] = 4,
    ACTIONS(612), 1,
      sym_bitwise_xor_operator,
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
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18602] = 3,
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
  [18624] = 4,
    ACTIONS(614), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(355), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(353), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18648] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [18670] = 4,
    ACTIONS(616), 1,
      sym_equality_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(365), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(363), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18694] = 3,
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
  [18716] = 4,
    ACTIONS(618), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(375), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [18740] = 3,
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
  [18762] = 4,
    ACTIONS(620), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(385), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(383), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [18786] = 3,
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
  [18808] = 4,
    ACTIONS(622), 1,
      sym_additive_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(285), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(283), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [18832] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [18854] = 4,
    ACTIONS(604), 1,
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
  [18878] = 5,
    ACTIONS(624), 1,
      anon_sym_LPAREN,
    ACTIONS(626), 1,
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
  [18904] = 3,
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
  [18926] = 3,
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
  [18948] = 3,
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
  [18970] = 3,
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
  [18992] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(381), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(379), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19014] = 3,
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
  [19036] = 3,
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
  [19058] = 4,
    ACTIONS(608), 1,
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
  [19082] = 4,
    ACTIONS(610), 1,
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
  [19106] = 4,
    ACTIONS(612), 1,
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
  [19130] = 4,
    ACTIONS(614), 1,
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
  [19154] = 4,
    ACTIONS(616), 1,
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
  [19178] = 4,
    ACTIONS(618), 1,
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
  [19202] = 4,
    ACTIONS(620), 1,
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
  [19226] = 4,
    ACTIONS(622), 1,
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
  [19250] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [19272] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(317), 1,
      sym_logical_or_operator,
    ACTIONS(379), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(381), 8,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
      sym_assignment_operator,
  [19295] = 11,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(594), 1,
      anon_sym_COMMA,
    ACTIONS(600), 1,
      sym__operand_separator,
    ACTIONS(602), 1,
      sym__data_separator,
    ACTIONS(630), 1,
      sym_block_comment,
    STATE(351), 1,
      aux_sym_numeric_operands_repeat1,
    STATE(369), 1,
      aux_sym_numeric_operands_repeat3,
    STATE(379), 1,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(119), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(596), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(628), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [19332] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(598), 1,
      sym_assignment_operator,
    ACTIONS(632), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(634), 6,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19356] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(598), 1,
      sym_assignment_operator,
    ACTIONS(636), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(638), 6,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19380] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(598), 1,
      sym_assignment_operator,
    ACTIONS(640), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(642), 6,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19404] = 9,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(642), 1,
      anon_sym_SEMI,
    ACTIONS(644), 1,
      sym_line_comment,
    ACTIONS(647), 1,
      sym_block_comment,
    ACTIONS(650), 1,
      anon_sym_COMMA,
    STATE(351), 1,
      aux_sym_numeric_operands_repeat1,
    ACTIONS(640), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(653), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(656), 2,
      sym__operand_separator,
      sym__data_separator,
  [19435] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(481), 1,
      sym_logical_or_operator,
    ACTIONS(379), 10,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_assignment_operator,
  [19454] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(661), 1,
      sym_assignment_operator,
    ACTIONS(659), 8,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      aux_sym__control_operand_separator_token1,
  [19474] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(665), 1,
      sym_block_comment,
    STATE(8), 1,
      sym__control_operand_separator,
    STATE(357), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(667), 3,
      sym__operand_separator,
      sym__data_separator,
      aux_sym__control_operand_separator_token1,
    ACTIONS(663), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19498] = 3,
    ACTIONS(505), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(379), 8,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
  [19516] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    STATE(8), 1,
      sym__control_operand_separator,
    STATE(356), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(669), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(671), 4,
      sym__operand_separator,
      sym__data_separator,
      sym_block_comment,
      aux_sym__control_operand_separator_token1,
  [19538] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(674), 1,
      sym_block_comment,
    STATE(8), 1,
      sym__control_operand_separator,
    STATE(356), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(667), 3,
      sym__operand_separator,
      sym__data_separator,
      aux_sym__control_operand_separator_token1,
    ACTIONS(53), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19562] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(123), 1,
      sym__data_separator,
    ACTIONS(680), 1,
      sym_line_comment,
    ACTIONS(683), 1,
      anon_sym_COMMA,
    ACTIONS(676), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(678), 3,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19587] = 4,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(687), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(685), 6,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_COMMA,
  [19606] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(693), 1,
      aux_sym__whitespace_token1,
    ACTIONS(696), 1,
      anon_sym_COMMA,
    STATE(360), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(689), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(691), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [19630] = 5,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    ACTIONS(703), 1,
      sym__operand_separator,
    STATE(367), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(699), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19650] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(709), 1,
      aux_sym__whitespace_token1,
    ACTIONS(711), 1,
      anon_sym_COMMA,
    STATE(360), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(705), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(707), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [19674] = 2,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(713), 8,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      aux_sym__control_operand_separator_token1,
  [19688] = 4,
    STATE(364), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(717), 2,
      sym__operand_separator,
      anon_sym_COMMA,
    ACTIONS(715), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19706] = 2,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(720), 8,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      aux_sym__control_operand_separator_token1,
  [19720] = 2,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(722), 8,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      aux_sym__control_operand_separator_token1,
  [19734] = 5,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    ACTIONS(726), 1,
      sym__operand_separator,
    STATE(364), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(724), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19754] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    STATE(368), 1,
      aux_sym_numeric_operands_repeat3,
    ACTIONS(728), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(730), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(732), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19776] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    STATE(368), 1,
      aux_sym_numeric_operands_repeat3,
    ACTIONS(143), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(735), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(737), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19798] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    STATE(368), 1,
      aux_sym_numeric_operands_repeat3,
    ACTIONS(119), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(628), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(737), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19820] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(709), 1,
      aux_sym__whitespace_token1,
    ACTIONS(711), 1,
      anon_sym_COMMA,
    STATE(362), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(739), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(741), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [19844] = 2,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(669), 8,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      aux_sym__control_operand_separator_token1,
  [19858] = 2,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(743), 8,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      aux_sym__control_operand_separator_token1,
  [19872] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(749), 1,
      aux_sym__whitespace_token1,
    ACTIONS(751), 1,
      sym_block_comment,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
    STATE(433), 1,
      sym__call_expression,
    ACTIONS(745), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(747), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [19896] = 6,
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
  [19917] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(763), 6,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_COMMA,
  [19930] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(765), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(767), 3,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_COMMA,
  [19947] = 2,
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
  [19960] = 4,
    ACTIONS(769), 1,
      sym__data_separator,
    STATE(384), 1,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(143), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19977] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(689), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(691), 3,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_COMMA,
  [19994] = 4,
    ACTIONS(769), 1,
      sym__data_separator,
    STATE(384), 1,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(119), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20011] = 3,
    ACTIONS(537), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(379), 5,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
  [20026] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(713), 6,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_COMMA,
  [20039] = 4,
    ACTIONS(773), 1,
      sym__data_separator,
    STATE(384), 1,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(771), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20056] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(780), 1,
      aux_sym__whitespace_token1,
    ACTIONS(782), 1,
      sym_block_comment,
    ACTIONS(776), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(778), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [20074] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(784), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(743), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
  [20090] = 5,
    ACTIONS(561), 1,
      anon_sym_LPAREN,
    ACTIONS(786), 1,
      anon_sym_RPAREN,
    ACTIONS(789), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(685), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [20108] = 5,
    ACTIONS(561), 1,
      anon_sym_LPAREN,
    ACTIONS(789), 1,
      sym_assignment_operator,
    ACTIONS(791), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(685), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [20126] = 4,
    ACTIONS(561), 1,
      anon_sym_LPAREN,
    ACTIONS(789), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(685), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20142] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(798), 1,
      aux_sym__whitespace_token1,
    ACTIONS(800), 1,
      sym_block_comment,
    ACTIONS(794), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(796), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [20160] = 5,
    ACTIONS(561), 1,
      anon_sym_LPAREN,
    ACTIONS(789), 1,
      sym_assignment_operator,
    ACTIONS(802), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(685), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [20178] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(805), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(713), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
  [20194] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(807), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(809), 3,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
  [20208] = 5,
    ACTIONS(561), 1,
      anon_sym_LPAREN,
    ACTIONS(789), 1,
      sym_assignment_operator,
    ACTIONS(811), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(685), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [20226] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(814), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(816), 3,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
  [20240] = 5,
    ACTIONS(561), 1,
      anon_sym_LPAREN,
    ACTIONS(789), 1,
      sym_assignment_operator,
    ACTIONS(818), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(685), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [20258] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(825), 1,
      aux_sym__whitespace_token1,
    ACTIONS(821), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(823), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [20276] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(515), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20287] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(827), 1,
      aux_sym__whitespace_token1,
    ACTIONS(829), 1,
      anon_sym_RPAREN,
    ACTIONS(831), 1,
      sym_macro_parameter,
    STATE(466), 1,
      sym_macro_parameters,
  [20306] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(833), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20317] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(835), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20328] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(837), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20339] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(839), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20350] = 5,
    ACTIONS(724), 1,
      anon_sym_RPAREN,
    ACTIONS(841), 1,
      anon_sym_COMMA,
    ACTIONS(843), 1,
      sym__operand_separator,
    STATE(437), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20367] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(845), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20378] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(847), 1,
      anon_sym_DQUOTE,
    STATE(406), 1,
      aux_sym_string_repeat1,
    ACTIONS(849), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20395] = 3,
    ACTIONS(606), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(379), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_assignment_operator,
  [20408] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(852), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20419] = 5,
    ACTIONS(699), 1,
      anon_sym_RPAREN,
    ACTIONS(841), 1,
      anon_sym_COMMA,
    ACTIONS(854), 1,
      sym__operand_separator,
    STATE(404), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20436] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(856), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20447] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(858), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20458] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(741), 1,
      anon_sym_RPAREN,
    ACTIONS(860), 1,
      aux_sym__whitespace_token1,
    ACTIONS(863), 1,
      anon_sym_COMMA,
    STATE(424), 1,
      aux_sym_macro_parameters_repeat1,
  [20477] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(865), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20488] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(867), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20499] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(831), 1,
      sym_macro_parameter,
    ACTIONS(869), 1,
      aux_sym__whitespace_token1,
    ACTIONS(871), 1,
      anon_sym_RPAREN,
    STATE(456), 1,
      sym_macro_parameters,
  [20518] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(873), 1,
      anon_sym_DQUOTE,
    STATE(421), 1,
      aux_sym_string_repeat1,
    ACTIONS(875), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20535] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(877), 1,
      anon_sym_DQUOTE,
    STATE(419), 1,
      aux_sym_string_repeat1,
    ACTIONS(879), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20552] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(881), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20563] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(883), 1,
      anon_sym_DQUOTE,
    STATE(406), 1,
      aux_sym_string_repeat1,
    ACTIONS(885), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20580] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(887), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20591] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(889), 1,
      anon_sym_DQUOTE,
    STATE(406), 1,
      aux_sym_string_repeat1,
    ACTIONS(885), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20608] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(891), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20619] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(893), 1,
      anon_sym_DQUOTE,
    STATE(426), 1,
      aux_sym_string_repeat1,
    ACTIONS(895), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20636] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(707), 1,
      anon_sym_RPAREN,
    ACTIONS(863), 1,
      anon_sym_COMMA,
    ACTIONS(897), 1,
      aux_sym__whitespace_token1,
    STATE(432), 1,
      aux_sym_macro_parameters_repeat1,
  [20655] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(900), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20666] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(902), 1,
      anon_sym_DQUOTE,
    STATE(406), 1,
      aux_sym_string_repeat1,
    ACTIONS(885), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20683] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(904), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20694] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(906), 1,
      anon_sym_DQUOTE,
    STATE(430), 1,
      aux_sym_string_repeat1,
    ACTIONS(908), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20711] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(910), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20722] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(912), 1,
      anon_sym_DQUOTE,
    STATE(406), 1,
      aux_sym_string_repeat1,
    ACTIONS(885), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20739] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(914), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20750] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(691), 1,
      anon_sym_RPAREN,
    ACTIONS(916), 1,
      aux_sym__whitespace_token1,
    ACTIONS(919), 1,
      anon_sym_COMMA,
    STATE(432), 1,
      aux_sym_macro_parameters_repeat1,
  [20769] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(922), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20780] = 4,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(926), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(924), 2,
      sym__line_separator,
      anon_sym_SEMI,
  [20795] = 4,
    ACTIONS(928), 1,
      ts_builtin_sym_end,
    ACTIONS(930), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(924), 2,
      sym__line_separator,
      anon_sym_SEMI,
  [20810] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(837), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20821] = 4,
    ACTIONS(715), 1,
      anon_sym_RPAREN,
    STATE(437), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(932), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [20836] = 3,
    ACTIONS(935), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(924), 2,
      sym__line_separator,
      anon_sym_SEMI,
  [20848] = 4,
    ACTIONS(624), 1,
      anon_sym_LPAREN,
    ACTIONS(937), 1,
      anon_sym_RPAREN,
    ACTIONS(939), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20862] = 4,
    ACTIONS(624), 1,
      anon_sym_LPAREN,
    ACTIONS(939), 1,
      sym_assignment_operator,
    ACTIONS(941), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20876] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(743), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20886] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(763), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20896] = 4,
    ACTIONS(624), 1,
      anon_sym_LPAREN,
    ACTIONS(939), 1,
      sym_assignment_operator,
    ACTIONS(943), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20910] = 4,
    ACTIONS(624), 1,
      anon_sym_LPAREN,
    ACTIONS(939), 1,
      sym_assignment_operator,
    ACTIONS(945), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20924] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(765), 1,
      aux_sym__whitespace_token1,
    ACTIONS(767), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20938] = 4,
    ACTIONS(624), 1,
      anon_sym_LPAREN,
    ACTIONS(939), 1,
      sym_assignment_operator,
    ACTIONS(947), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20952] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(713), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20962] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(949), 1,
      anon_sym_LPAREN,
    ACTIONS(951), 1,
      sym_macro_parameter,
    STATE(400), 1,
      sym_macro_parameters,
  [20978] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(689), 1,
      aux_sym__whitespace_token1,
    ACTIONS(691), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20992] = 3,
    ACTIONS(197), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(123), 2,
      sym__data_separator,
      anon_sym_COMMA,
  [21004] = 3,
    ACTIONS(939), 1,
      sym_assignment_operator,
    ACTIONS(953), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21015] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(955), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [21026] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(957), 2,
      sym__data_separator,
      anon_sym_COMMA,
  [21035] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(959), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [21046] = 3,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(939), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21057] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(961), 1,
      aux_sym__whitespace_token1,
    ACTIONS(963), 1,
      anon_sym_RPAREN,
  [21070] = 3,
    ACTIONS(965), 1,
      ts_builtin_sym_end,
    ACTIONS(967), 1,
      sym__line_separator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21081] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(969), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [21092] = 3,
    ACTIONS(928), 1,
      ts_builtin_sym_end,
    ACTIONS(967), 1,
      sym__line_separator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21103] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(924), 1,
      aux_sym__statement_token1,
  [21116] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(971), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [21127] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(973), 1,
      anon_sym_COMMA,
    ACTIONS(975), 1,
      sym_macro_parameter,
  [21140] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(924), 1,
      aux_sym__statement_token1,
    ACTIONS(928), 1,
      ts_builtin_sym_end,
  [21153] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(977), 1,
      anon_sym_COMMA,
    ACTIONS(979), 1,
      sym_macro_parameter,
  [21166] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(981), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [21177] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(983), 1,
      aux_sym__whitespace_token1,
    ACTIONS(985), 1,
      anon_sym_RPAREN,
  [21190] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(123), 2,
      sym__data_separator,
      anon_sym_COMMA,
  [21199] = 3,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(939), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21210] = 3,
    ACTIONS(561), 1,
      anon_sym_LPAREN,
    ACTIONS(939), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21221] = 3,
    ACTIONS(939), 1,
      sym_assignment_operator,
    ACTIONS(987), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21232] = 3,
    ACTIONS(624), 1,
      anon_sym_LPAREN,
    ACTIONS(939), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21243] = 2,
    ACTIONS(989), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21251] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(991), 1,
      aux_sym__whitespace_token1,
    ACTIONS(993), 1,
      sym_block_comment,
  [21261] = 2,
    ACTIONS(995), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21269] = 2,
    ACTIONS(997), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21277] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(999), 1,
      sym_macro_parameter,
  [21287] = 2,
    ACTIONS(1001), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21295] = 2,
    ACTIONS(1003), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21303] = 2,
    ACTIONS(1005), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21311] = 2,
    ACTIONS(1007), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21319] = 2,
    ACTIONS(1009), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21327] = 2,
    ACTIONS(1011), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21335] = 2,
    ACTIONS(1013), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21343] = 2,
    ACTIONS(1015), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21351] = 2,
    ACTIONS(1017), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21359] = 2,
    ACTIONS(1019), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21367] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(979), 1,
      sym_macro_parameter,
  [21377] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(975), 1,
      sym_macro_parameter,
  [21387] = 2,
    ACTIONS(1021), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21395] = 2,
    ACTIONS(1023), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21403] = 2,
    ACTIONS(1025), 1,
      sym_macro_name,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21411] = 2,
    ACTIONS(1027), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21419] = 2,
    ACTIONS(1029), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21427] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1031), 1,
      sym_macro_parameter,
  [21437] = 2,
    ACTIONS(1033), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21445] = 2,
    ACTIONS(1035), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21453] = 2,
    ACTIONS(1037), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21461] = 2,
    ACTIONS(1039), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21469] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(924), 1,
      aux_sym__statement_token1,
  [21479] = 2,
    ACTIONS(1041), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21487] = 2,
    ACTIONS(1043), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21495] = 2,
    ACTIONS(1045), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21503] = 2,
    ACTIONS(1047), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21511] = 2,
    ACTIONS(1049), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21519] = 2,
    ACTIONS(1051), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21527] = 2,
    ACTIONS(1053), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21535] = 2,
    ACTIONS(1055), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21543] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(1057), 1,
      aux_sym__whitespace_token1,
    ACTIONS(1059), 1,
      sym_block_comment,
  [21553] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(1061), 1,
      aux_sym__whitespace_token1,
    ACTIONS(1063), 1,
      sym_block_comment,
  [21563] = 2,
    ACTIONS(967), 1,
      sym__line_separator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 140,
  [SMALL_STATE(4)] = 277,
  [SMALL_STATE(5)] = 414,
  [SMALL_STATE(6)] = 549,
  [SMALL_STATE(7)] = 647,
  [SMALL_STATE(8)] = 745,
  [SMALL_STATE(9)] = 876,
  [SMALL_STATE(10)] = 1005,
  [SMALL_STATE(11)] = 1134,
  [SMALL_STATE(12)] = 1260,
  [SMALL_STATE(13)] = 1386,
  [SMALL_STATE(14)] = 1519,
  [SMALL_STATE(15)] = 1648,
  [SMALL_STATE(16)] = 1773,
  [SMALL_STATE(17)] = 1896,
  [SMALL_STATE(18)] = 2026,
  [SMALL_STATE(19)] = 2156,
  [SMALL_STATE(20)] = 2286,
  [SMALL_STATE(21)] = 2416,
  [SMALL_STATE(22)] = 2542,
  [SMALL_STATE(23)] = 2672,
  [SMALL_STATE(24)] = 2798,
  [SMALL_STATE(25)] = 2928,
  [SMALL_STATE(26)] = 3058,
  [SMALL_STATE(27)] = 3188,
  [SMALL_STATE(28)] = 3318,
  [SMALL_STATE(29)] = 3448,
  [SMALL_STATE(30)] = 3578,
  [SMALL_STATE(31)] = 3708,
  [SMALL_STATE(32)] = 3831,
  [SMALL_STATE(33)] = 3954,
  [SMALL_STATE(34)] = 4077,
  [SMALL_STATE(35)] = 4204,
  [SMALL_STATE(36)] = 4320,
  [SMALL_STATE(37)] = 4436,
  [SMALL_STATE(38)] = 4552,
  [SMALL_STATE(39)] = 4668,
  [SMALL_STATE(40)] = 4784,
  [SMALL_STATE(41)] = 4900,
  [SMALL_STATE(42)] = 5016,
  [SMALL_STATE(43)] = 5132,
  [SMALL_STATE(44)] = 5248,
  [SMALL_STATE(45)] = 5364,
  [SMALL_STATE(46)] = 5480,
  [SMALL_STATE(47)] = 5596,
  [SMALL_STATE(48)] = 5712,
  [SMALL_STATE(49)] = 5828,
  [SMALL_STATE(50)] = 5944,
  [SMALL_STATE(51)] = 6060,
  [SMALL_STATE(52)] = 6176,
  [SMALL_STATE(53)] = 6294,
  [SMALL_STATE(54)] = 6410,
  [SMALL_STATE(55)] = 6526,
  [SMALL_STATE(56)] = 6642,
  [SMALL_STATE(57)] = 6758,
  [SMALL_STATE(58)] = 6874,
  [SMALL_STATE(59)] = 6990,
  [SMALL_STATE(60)] = 7106,
  [SMALL_STATE(61)] = 7222,
  [SMALL_STATE(62)] = 7338,
  [SMALL_STATE(63)] = 7454,
  [SMALL_STATE(64)] = 7570,
  [SMALL_STATE(65)] = 7686,
  [SMALL_STATE(66)] = 7804,
  [SMALL_STATE(67)] = 7920,
  [SMALL_STATE(68)] = 8036,
  [SMALL_STATE(69)] = 8152,
  [SMALL_STATE(70)] = 8268,
  [SMALL_STATE(71)] = 8384,
  [SMALL_STATE(72)] = 8500,
  [SMALL_STATE(73)] = 8616,
  [SMALL_STATE(74)] = 8732,
  [SMALL_STATE(75)] = 8848,
  [SMALL_STATE(76)] = 8966,
  [SMALL_STATE(77)] = 9082,
  [SMALL_STATE(78)] = 9198,
  [SMALL_STATE(79)] = 9314,
  [SMALL_STATE(80)] = 9430,
  [SMALL_STATE(81)] = 9546,
  [SMALL_STATE(82)] = 9662,
  [SMALL_STATE(83)] = 9778,
  [SMALL_STATE(84)] = 9894,
  [SMALL_STATE(85)] = 10010,
  [SMALL_STATE(86)] = 10126,
  [SMALL_STATE(87)] = 10244,
  [SMALL_STATE(88)] = 10360,
  [SMALL_STATE(89)] = 10476,
  [SMALL_STATE(90)] = 10592,
  [SMALL_STATE(91)] = 10708,
  [SMALL_STATE(92)] = 10824,
  [SMALL_STATE(93)] = 10940,
  [SMALL_STATE(94)] = 11056,
  [SMALL_STATE(95)] = 11172,
  [SMALL_STATE(96)] = 11288,
  [SMALL_STATE(97)] = 11404,
  [SMALL_STATE(98)] = 11520,
  [SMALL_STATE(99)] = 11636,
  [SMALL_STATE(100)] = 11752,
  [SMALL_STATE(101)] = 11868,
  [SMALL_STATE(102)] = 11986,
  [SMALL_STATE(103)] = 12102,
  [SMALL_STATE(104)] = 12218,
  [SMALL_STATE(105)] = 12334,
  [SMALL_STATE(106)] = 12450,
  [SMALL_STATE(107)] = 12566,
  [SMALL_STATE(108)] = 12682,
  [SMALL_STATE(109)] = 12739,
  [SMALL_STATE(110)] = 12793,
  [SMALL_STATE(111)] = 12847,
  [SMALL_STATE(112)] = 12901,
  [SMALL_STATE(113)] = 12933,
  [SMALL_STATE(114)] = 12963,
  [SMALL_STATE(115)] = 12993,
  [SMALL_STATE(116)] = 13023,
  [SMALL_STATE(117)] = 13053,
  [SMALL_STATE(118)] = 13083,
  [SMALL_STATE(119)] = 13113,
  [SMALL_STATE(120)] = 13145,
  [SMALL_STATE(121)] = 13175,
  [SMALL_STATE(122)] = 13207,
  [SMALL_STATE(123)] = 13237,
  [SMALL_STATE(124)] = 13269,
  [SMALL_STATE(125)] = 13299,
  [SMALL_STATE(126)] = 13331,
  [SMALL_STATE(127)] = 13361,
  [SMALL_STATE(128)] = 13393,
  [SMALL_STATE(129)] = 13423,
  [SMALL_STATE(130)] = 13455,
  [SMALL_STATE(131)] = 13485,
  [SMALL_STATE(132)] = 13517,
  [SMALL_STATE(133)] = 13547,
  [SMALL_STATE(134)] = 13579,
  [SMALL_STATE(135)] = 13609,
  [SMALL_STATE(136)] = 13639,
  [SMALL_STATE(137)] = 13671,
  [SMALL_STATE(138)] = 13705,
  [SMALL_STATE(139)] = 13735,
  [SMALL_STATE(140)] = 13765,
  [SMALL_STATE(141)] = 13795,
  [SMALL_STATE(142)] = 13827,
  [SMALL_STATE(143)] = 13859,
  [SMALL_STATE(144)] = 13891,
  [SMALL_STATE(145)] = 13923,
  [SMALL_STATE(146)] = 13955,
  [SMALL_STATE(147)] = 13987,
  [SMALL_STATE(148)] = 14019,
  [SMALL_STATE(149)] = 14051,
  [SMALL_STATE(150)] = 14083,
  [SMALL_STATE(151)] = 14113,
  [SMALL_STATE(152)] = 14143,
  [SMALL_STATE(153)] = 14173,
  [SMALL_STATE(154)] = 14203,
  [SMALL_STATE(155)] = 14233,
  [SMALL_STATE(156)] = 14263,
  [SMALL_STATE(157)] = 14291,
  [SMALL_STATE(158)] = 14319,
  [SMALL_STATE(159)] = 14347,
  [SMALL_STATE(160)] = 14375,
  [SMALL_STATE(161)] = 14403,
  [SMALL_STATE(162)] = 14431,
  [SMALL_STATE(163)] = 14459,
  [SMALL_STATE(164)] = 14489,
  [SMALL_STATE(165)] = 14517,
  [SMALL_STATE(166)] = 14547,
  [SMALL_STATE(167)] = 14575,
  [SMALL_STATE(168)] = 14605,
  [SMALL_STATE(169)] = 14633,
  [SMALL_STATE(170)] = 14663,
  [SMALL_STATE(171)] = 14691,
  [SMALL_STATE(172)] = 14721,
  [SMALL_STATE(173)] = 14749,
  [SMALL_STATE(174)] = 14779,
  [SMALL_STATE(175)] = 14807,
  [SMALL_STATE(176)] = 14837,
  [SMALL_STATE(177)] = 14865,
  [SMALL_STATE(178)] = 14895,
  [SMALL_STATE(179)] = 14923,
  [SMALL_STATE(180)] = 14953,
  [SMALL_STATE(181)] = 14981,
  [SMALL_STATE(182)] = 15011,
  [SMALL_STATE(183)] = 15043,
  [SMALL_STATE(184)] = 15071,
  [SMALL_STATE(185)] = 15099,
  [SMALL_STATE(186)] = 15127,
  [SMALL_STATE(187)] = 15157,
  [SMALL_STATE(188)] = 15187,
  [SMALL_STATE(189)] = 15217,
  [SMALL_STATE(190)] = 15247,
  [SMALL_STATE(191)] = 15277,
  [SMALL_STATE(192)] = 15307,
  [SMALL_STATE(193)] = 15337,
  [SMALL_STATE(194)] = 15367,
  [SMALL_STATE(195)] = 15395,
  [SMALL_STATE(196)] = 15423,
  [SMALL_STATE(197)] = 15451,
  [SMALL_STATE(198)] = 15479,
  [SMALL_STATE(199)] = 15508,
  [SMALL_STATE(200)] = 15535,
  [SMALL_STATE(201)] = 15562,
  [SMALL_STATE(202)] = 15591,
  [SMALL_STATE(203)] = 15618,
  [SMALL_STATE(204)] = 15647,
  [SMALL_STATE(205)] = 15674,
  [SMALL_STATE(206)] = 15703,
  [SMALL_STATE(207)] = 15730,
  [SMALL_STATE(208)] = 15759,
  [SMALL_STATE(209)] = 15786,
  [SMALL_STATE(210)] = 15815,
  [SMALL_STATE(211)] = 15842,
  [SMALL_STATE(212)] = 15871,
  [SMALL_STATE(213)] = 15898,
  [SMALL_STATE(214)] = 15925,
  [SMALL_STATE(215)] = 15952,
  [SMALL_STATE(216)] = 15981,
  [SMALL_STATE(217)] = 16010,
  [SMALL_STATE(218)] = 16039,
  [SMALL_STATE(219)] = 16068,
  [SMALL_STATE(220)] = 16095,
  [SMALL_STATE(221)] = 16124,
  [SMALL_STATE(222)] = 16151,
  [SMALL_STATE(223)] = 16180,
  [SMALL_STATE(224)] = 16209,
  [SMALL_STATE(225)] = 16236,
  [SMALL_STATE(226)] = 16267,
  [SMALL_STATE(227)] = 16296,
  [SMALL_STATE(228)] = 16323,
  [SMALL_STATE(229)] = 16352,
  [SMALL_STATE(230)] = 16379,
  [SMALL_STATE(231)] = 16408,
  [SMALL_STATE(232)] = 16435,
  [SMALL_STATE(233)] = 16464,
  [SMALL_STATE(234)] = 16491,
  [SMALL_STATE(235)] = 16520,
  [SMALL_STATE(236)] = 16547,
  [SMALL_STATE(237)] = 16574,
  [SMALL_STATE(238)] = 16601,
  [SMALL_STATE(239)] = 16628,
  [SMALL_STATE(240)] = 16655,
  [SMALL_STATE(241)] = 16682,
  [SMALL_STATE(242)] = 16711,
  [SMALL_STATE(243)] = 16739,
  [SMALL_STATE(244)] = 16767,
  [SMALL_STATE(245)] = 16795,
  [SMALL_STATE(246)] = 16825,
  [SMALL_STATE(247)] = 16853,
  [SMALL_STATE(248)] = 16879,
  [SMALL_STATE(249)] = 16903,
  [SMALL_STATE(250)] = 16927,
  [SMALL_STATE(251)] = 16951,
  [SMALL_STATE(252)] = 16975,
  [SMALL_STATE(253)] = 17001,
  [SMALL_STATE(254)] = 17025,
  [SMALL_STATE(255)] = 17049,
  [SMALL_STATE(256)] = 17073,
  [SMALL_STATE(257)] = 17097,
  [SMALL_STATE(258)] = 17123,
  [SMALL_STATE(259)] = 17149,
  [SMALL_STATE(260)] = 17175,
  [SMALL_STATE(261)] = 17201,
  [SMALL_STATE(262)] = 17225,
  [SMALL_STATE(263)] = 17251,
  [SMALL_STATE(264)] = 17277,
  [SMALL_STATE(265)] = 17303,
  [SMALL_STATE(266)] = 17329,
  [SMALL_STATE(267)] = 17353,
  [SMALL_STATE(268)] = 17377,
  [SMALL_STATE(269)] = 17401,
  [SMALL_STATE(270)] = 17425,
  [SMALL_STATE(271)] = 17449,
  [SMALL_STATE(272)] = 17475,
  [SMALL_STATE(273)] = 17499,
  [SMALL_STATE(274)] = 17525,
  [SMALL_STATE(275)] = 17549,
  [SMALL_STATE(276)] = 17575,
  [SMALL_STATE(277)] = 17601,
  [SMALL_STATE(278)] = 17627,
  [SMALL_STATE(279)] = 17651,
  [SMALL_STATE(280)] = 17677,
  [SMALL_STATE(281)] = 17701,
  [SMALL_STATE(282)] = 17727,
  [SMALL_STATE(283)] = 17751,
  [SMALL_STATE(284)] = 17777,
  [SMALL_STATE(285)] = 17801,
  [SMALL_STATE(286)] = 17827,
  [SMALL_STATE(287)] = 17851,
  [SMALL_STATE(288)] = 17877,
  [SMALL_STATE(289)] = 17905,
  [SMALL_STATE(290)] = 17929,
  [SMALL_STATE(291)] = 17953,
  [SMALL_STATE(292)] = 17979,
  [SMALL_STATE(293)] = 18005,
  [SMALL_STATE(294)] = 18031,
  [SMALL_STATE(295)] = 18057,
  [SMALL_STATE(296)] = 18083,
  [SMALL_STATE(297)] = 18109,
  [SMALL_STATE(298)] = 18135,
  [SMALL_STATE(299)] = 18161,
  [SMALL_STATE(300)] = 18187,
  [SMALL_STATE(301)] = 18213,
  [SMALL_STATE(302)] = 18239,
  [SMALL_STATE(303)] = 18284,
  [SMALL_STATE(304)] = 18306,
  [SMALL_STATE(305)] = 18330,
  [SMALL_STATE(306)] = 18352,
  [SMALL_STATE(307)] = 18374,
  [SMALL_STATE(308)] = 18396,
  [SMALL_STATE(309)] = 18418,
  [SMALL_STATE(310)] = 18440,
  [SMALL_STATE(311)] = 18464,
  [SMALL_STATE(312)] = 18486,
  [SMALL_STATE(313)] = 18510,
  [SMALL_STATE(314)] = 18532,
  [SMALL_STATE(315)] = 18556,
  [SMALL_STATE(316)] = 18578,
  [SMALL_STATE(317)] = 18602,
  [SMALL_STATE(318)] = 18624,
  [SMALL_STATE(319)] = 18648,
  [SMALL_STATE(320)] = 18670,
  [SMALL_STATE(321)] = 18694,
  [SMALL_STATE(322)] = 18716,
  [SMALL_STATE(323)] = 18740,
  [SMALL_STATE(324)] = 18762,
  [SMALL_STATE(325)] = 18786,
  [SMALL_STATE(326)] = 18808,
  [SMALL_STATE(327)] = 18832,
  [SMALL_STATE(328)] = 18854,
  [SMALL_STATE(329)] = 18878,
  [SMALL_STATE(330)] = 18904,
  [SMALL_STATE(331)] = 18926,
  [SMALL_STATE(332)] = 18948,
  [SMALL_STATE(333)] = 18970,
  [SMALL_STATE(334)] = 18992,
  [SMALL_STATE(335)] = 19014,
  [SMALL_STATE(336)] = 19036,
  [SMALL_STATE(337)] = 19058,
  [SMALL_STATE(338)] = 19082,
  [SMALL_STATE(339)] = 19106,
  [SMALL_STATE(340)] = 19130,
  [SMALL_STATE(341)] = 19154,
  [SMALL_STATE(342)] = 19178,
  [SMALL_STATE(343)] = 19202,
  [SMALL_STATE(344)] = 19226,
  [SMALL_STATE(345)] = 19250,
  [SMALL_STATE(346)] = 19272,
  [SMALL_STATE(347)] = 19295,
  [SMALL_STATE(348)] = 19332,
  [SMALL_STATE(349)] = 19356,
  [SMALL_STATE(350)] = 19380,
  [SMALL_STATE(351)] = 19404,
  [SMALL_STATE(352)] = 19435,
  [SMALL_STATE(353)] = 19454,
  [SMALL_STATE(354)] = 19474,
  [SMALL_STATE(355)] = 19498,
  [SMALL_STATE(356)] = 19516,
  [SMALL_STATE(357)] = 19538,
  [SMALL_STATE(358)] = 19562,
  [SMALL_STATE(359)] = 19587,
  [SMALL_STATE(360)] = 19606,
  [SMALL_STATE(361)] = 19630,
  [SMALL_STATE(362)] = 19650,
  [SMALL_STATE(363)] = 19674,
  [SMALL_STATE(364)] = 19688,
  [SMALL_STATE(365)] = 19706,
  [SMALL_STATE(366)] = 19720,
  [SMALL_STATE(367)] = 19734,
  [SMALL_STATE(368)] = 19754,
  [SMALL_STATE(369)] = 19776,
  [SMALL_STATE(370)] = 19798,
  [SMALL_STATE(371)] = 19820,
  [SMALL_STATE(372)] = 19844,
  [SMALL_STATE(373)] = 19858,
  [SMALL_STATE(374)] = 19872,
  [SMALL_STATE(375)] = 19896,
  [SMALL_STATE(376)] = 19917,
  [SMALL_STATE(377)] = 19930,
  [SMALL_STATE(378)] = 19947,
  [SMALL_STATE(379)] = 19960,
  [SMALL_STATE(380)] = 19977,
  [SMALL_STATE(381)] = 19994,
  [SMALL_STATE(382)] = 20011,
  [SMALL_STATE(383)] = 20026,
  [SMALL_STATE(384)] = 20039,
  [SMALL_STATE(385)] = 20056,
  [SMALL_STATE(386)] = 20074,
  [SMALL_STATE(387)] = 20090,
  [SMALL_STATE(388)] = 20108,
  [SMALL_STATE(389)] = 20126,
  [SMALL_STATE(390)] = 20142,
  [SMALL_STATE(391)] = 20160,
  [SMALL_STATE(392)] = 20178,
  [SMALL_STATE(393)] = 20194,
  [SMALL_STATE(394)] = 20208,
  [SMALL_STATE(395)] = 20226,
  [SMALL_STATE(396)] = 20240,
  [SMALL_STATE(397)] = 20258,
  [SMALL_STATE(398)] = 20276,
  [SMALL_STATE(399)] = 20287,
  [SMALL_STATE(400)] = 20306,
  [SMALL_STATE(401)] = 20317,
  [SMALL_STATE(402)] = 20328,
  [SMALL_STATE(403)] = 20339,
  [SMALL_STATE(404)] = 20350,
  [SMALL_STATE(405)] = 20367,
  [SMALL_STATE(406)] = 20378,
  [SMALL_STATE(407)] = 20395,
  [SMALL_STATE(408)] = 20408,
  [SMALL_STATE(409)] = 20419,
  [SMALL_STATE(410)] = 20436,
  [SMALL_STATE(411)] = 20447,
  [SMALL_STATE(412)] = 20458,
  [SMALL_STATE(413)] = 20477,
  [SMALL_STATE(414)] = 20488,
  [SMALL_STATE(415)] = 20499,
  [SMALL_STATE(416)] = 20518,
  [SMALL_STATE(417)] = 20535,
  [SMALL_STATE(418)] = 20552,
  [SMALL_STATE(419)] = 20563,
  [SMALL_STATE(420)] = 20580,
  [SMALL_STATE(421)] = 20591,
  [SMALL_STATE(422)] = 20608,
  [SMALL_STATE(423)] = 20619,
  [SMALL_STATE(424)] = 20636,
  [SMALL_STATE(425)] = 20655,
  [SMALL_STATE(426)] = 20666,
  [SMALL_STATE(427)] = 20683,
  [SMALL_STATE(428)] = 20694,
  [SMALL_STATE(429)] = 20711,
  [SMALL_STATE(430)] = 20722,
  [SMALL_STATE(431)] = 20739,
  [SMALL_STATE(432)] = 20750,
  [SMALL_STATE(433)] = 20769,
  [SMALL_STATE(434)] = 20780,
  [SMALL_STATE(435)] = 20795,
  [SMALL_STATE(436)] = 20810,
  [SMALL_STATE(437)] = 20821,
  [SMALL_STATE(438)] = 20836,
  [SMALL_STATE(439)] = 20848,
  [SMALL_STATE(440)] = 20862,
  [SMALL_STATE(441)] = 20876,
  [SMALL_STATE(442)] = 20886,
  [SMALL_STATE(443)] = 20896,
  [SMALL_STATE(444)] = 20910,
  [SMALL_STATE(445)] = 20924,
  [SMALL_STATE(446)] = 20938,
  [SMALL_STATE(447)] = 20952,
  [SMALL_STATE(448)] = 20962,
  [SMALL_STATE(449)] = 20978,
  [SMALL_STATE(450)] = 20992,
  [SMALL_STATE(451)] = 21004,
  [SMALL_STATE(452)] = 21015,
  [SMALL_STATE(453)] = 21026,
  [SMALL_STATE(454)] = 21035,
  [SMALL_STATE(455)] = 21046,
  [SMALL_STATE(456)] = 21057,
  [SMALL_STATE(457)] = 21070,
  [SMALL_STATE(458)] = 21081,
  [SMALL_STATE(459)] = 21092,
  [SMALL_STATE(460)] = 21103,
  [SMALL_STATE(461)] = 21116,
  [SMALL_STATE(462)] = 21127,
  [SMALL_STATE(463)] = 21140,
  [SMALL_STATE(464)] = 21153,
  [SMALL_STATE(465)] = 21166,
  [SMALL_STATE(466)] = 21177,
  [SMALL_STATE(467)] = 21190,
  [SMALL_STATE(468)] = 21199,
  [SMALL_STATE(469)] = 21210,
  [SMALL_STATE(470)] = 21221,
  [SMALL_STATE(471)] = 21232,
  [SMALL_STATE(472)] = 21243,
  [SMALL_STATE(473)] = 21251,
  [SMALL_STATE(474)] = 21261,
  [SMALL_STATE(475)] = 21269,
  [SMALL_STATE(476)] = 21277,
  [SMALL_STATE(477)] = 21287,
  [SMALL_STATE(478)] = 21295,
  [SMALL_STATE(479)] = 21303,
  [SMALL_STATE(480)] = 21311,
  [SMALL_STATE(481)] = 21319,
  [SMALL_STATE(482)] = 21327,
  [SMALL_STATE(483)] = 21335,
  [SMALL_STATE(484)] = 21343,
  [SMALL_STATE(485)] = 21351,
  [SMALL_STATE(486)] = 21359,
  [SMALL_STATE(487)] = 21367,
  [SMALL_STATE(488)] = 21377,
  [SMALL_STATE(489)] = 21387,
  [SMALL_STATE(490)] = 21395,
  [SMALL_STATE(491)] = 21403,
  [SMALL_STATE(492)] = 21411,
  [SMALL_STATE(493)] = 21419,
  [SMALL_STATE(494)] = 21427,
  [SMALL_STATE(495)] = 21437,
  [SMALL_STATE(496)] = 21445,
  [SMALL_STATE(497)] = 21453,
  [SMALL_STATE(498)] = 21461,
  [SMALL_STATE(499)] = 21469,
  [SMALL_STATE(500)] = 21479,
  [SMALL_STATE(501)] = 21487,
  [SMALL_STATE(502)] = 21495,
  [SMALL_STATE(503)] = 21503,
  [SMALL_STATE(504)] = 21511,
  [SMALL_STATE(505)] = 21519,
  [SMALL_STATE(506)] = 21527,
  [SMALL_STATE(507)] = 21535,
  [SMALL_STATE(508)] = 21543,
  [SMALL_STATE(509)] = 21553,
  [SMALL_STATE(510)] = 21563,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 2, 0, 4),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_operands, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_operands, 3, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(499),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(473),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(393),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(508),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(395),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(374),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 3, 0, 15),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2, 0, 9),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_operands, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_operands, 3, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_directive, 2, 0, 4),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat2, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 1, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label, 1, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 2, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label, 2, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 16),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 3, 0, 16),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal, 1, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_label_reference, 1, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_label_reference, 1, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 11),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 11),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 11),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 11),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 11),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 11),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 11),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 11),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 11),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 11),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 11),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 11),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 11),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 11),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 11),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 11),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assignment_expression, 3, 0, 22),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__assignment_expression, 3, 0, 22),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 11),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 11),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_multiplicative_expression, 1, 0, 11),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_multiplicative_expression, 1, 0, 11),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 14),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, 0, 14),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 18),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 3, 0, 18),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 19),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 19),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logical_or_expression, 3, 0, 22),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__logical_or_expression, 3, 0, 22),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logical_and_expression, 3, 0, 22),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__logical_and_expression, 3, 0, 22),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitwise_or_expression, 3, 0, 22),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitwise_or_expression, 3, 0, 22),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitwise_xor_expression, 3, 0, 22),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitwise_xor_expression, 3, 0, 22),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitwise_and_expression, 3, 0, 22),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitwise_and_expression, 3, 0, 22),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__equality_expression, 3, 0, 22),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__equality_expression, 3, 0, 22),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relational_expression, 3, 0, 22),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__relational_expression, 3, 0, 22),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shift_expression, 3, 0, 22),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shift_expression, 3, 0, 22),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__additive_expression, 3, 0, 22),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__additive_expression, 3, 0, 22),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiplicative_expression, 3, 0, 22),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiplicative_expression, 3, 0, 22),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relocation_expression, 4, 0, 23),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relocation_expression, 4, 0, 23),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 4, 0, 24),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 4, 0, 24),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 4, 0, 25),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 4, 0, 25),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 11),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 11),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 3, 0, 16),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_operand, 1, 0, 0),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_operand, 1, 0, 0),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_expression, 1, 0, 0),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_expression, 1, 0, 0),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_operands, 1, 0, 0),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_operands, 1, 0, 0),
  [589] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_numeric_operands, 1, 0, 0), SHIFT(467),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_operands, 2, 0, 0),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 3, 0, 0),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 3, 0, 0),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 4, 0, 0),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 4, 0, 0),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0),
  [644] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(467),
  [647] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [650] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [653] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(450),
  [656] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_operand, 1, 0, 0),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_operands, 1, 0, 0),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0),
  [671] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat3, 1, 0, 0),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat3, 1, 0, 0),
  [680] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat3, 1, 0, 0), SHIFT(453),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0),
  [693] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(462),
  [696] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(488),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 1, 0, 9),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_parameters, 2, 0, 0),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_parameters, 2, 0, 0),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 21),
  [717] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 21), SHIFT_REPEAT(32),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_type, 1, 0, 0),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_flag, 1, 0, 0),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2, 0, 15),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat3, 2, 0, 0),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat3, 2, 0, 0),
  [732] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat3, 2, 0, 0), SHIFT_REPEAT(368),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_operands, 3, 0, 0),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_parameters, 1, 0, 0),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_parameters, 1, 0, 0),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 1),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 1),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 3, 0, 7),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 3, 0, 7),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 20),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 3, 0, 0),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 3, 0, 0),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat2, 2, 0, 0),
  [773] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat2, 2, 0, 0), SHIFT_REPEAT(384),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_directive, 1, 0, 4),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__numeric_directive, 1, 0, 4),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [786] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(212),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [791] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(335),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 1, 0, 4),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_directive, 1, 0, 4),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [802] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(184),
  [805] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_mnemonic, 1, 0, 0),
  [809] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_mnemonic, 1, 0, 0),
  [811] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(255),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_mnemonic, 1, 0, 0),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_mnemonic, 1, 0, 0),
  [818] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(139),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_directive, 3, 0, 13),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_directive, 3, 0, 13),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 5, 0, 17),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 3, 0, 12),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 3),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 10),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 8, 0, 26),
  [847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [849] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(406),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 5, 0, 7),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_directive, 4, 0, 13),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 7),
  [860] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_macro_parameters, 1, 0, 0), SHIFT(464),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 17),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 2),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 8),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 7),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 26),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [897] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_macro_parameters, 2, 0, 0), SHIFT(464),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 5),
  [902] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 2, 0, 0),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 17),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_directive, 3, 0, 12),
  [916] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(464),
  [919] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(487),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 6),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [932] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 21), SHIFT_REPEAT(33),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [959] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [963] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 0),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [969] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [971] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [973] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [977] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1023] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_mnemonic, 1, 0, 0),
  [1059] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_mnemonic, 1, 0, 0),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1063] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
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
    [ts_external_token__operator_space] = true,
    [ts_external_token__data_separator] = true,
  },
  [6] = {
    [ts_external_token__operand_separator] = true,
    [ts_external_token__operator_space] = true,
    [ts_external_token__line_separator] = true,
  },
  [7] = {
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
