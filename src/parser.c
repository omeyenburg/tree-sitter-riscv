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
#define STATE_COUNT 502
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
  [15] = 14,
  [16] = 14,
  [17] = 13,
  [18] = 8,
  [19] = 13,
  [20] = 6,
  [21] = 14,
  [22] = 13,
  [23] = 14,
  [24] = 13,
  [25] = 14,
  [26] = 13,
  [27] = 27,
  [28] = 28,
  [29] = 28,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 30,
  [36] = 34,
  [37] = 30,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 38,
  [48] = 34,
  [49] = 30,
  [50] = 38,
  [51] = 39,
  [52] = 40,
  [53] = 41,
  [54] = 42,
  [55] = 43,
  [56] = 44,
  [57] = 45,
  [58] = 46,
  [59] = 39,
  [60] = 34,
  [61] = 38,
  [62] = 39,
  [63] = 40,
  [64] = 41,
  [65] = 42,
  [66] = 43,
  [67] = 44,
  [68] = 45,
  [69] = 69,
  [70] = 34,
  [71] = 30,
  [72] = 38,
  [73] = 39,
  [74] = 40,
  [75] = 41,
  [76] = 42,
  [77] = 43,
  [78] = 44,
  [79] = 45,
  [80] = 46,
  [81] = 32,
  [82] = 34,
  [83] = 34,
  [84] = 34,
  [85] = 34,
  [86] = 34,
  [87] = 32,
  [88] = 32,
  [89] = 32,
  [90] = 40,
  [91] = 69,
  [92] = 41,
  [93] = 69,
  [94] = 42,
  [95] = 43,
  [96] = 69,
  [97] = 44,
  [98] = 45,
  [99] = 69,
  [100] = 46,
  [101] = 46,
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
  [149] = 136,
  [150] = 126,
  [151] = 107,
  [152] = 108,
  [153] = 110,
  [154] = 111,
  [155] = 112,
  [156] = 113,
  [157] = 114,
  [158] = 115,
  [159] = 116,
  [160] = 117,
  [161] = 118,
  [162] = 119,
  [163] = 120,
  [164] = 121,
  [165] = 122,
  [166] = 123,
  [167] = 124,
  [168] = 125,
  [169] = 148,
  [170] = 127,
  [171] = 128,
  [172] = 129,
  [173] = 130,
  [174] = 131,
  [175] = 132,
  [176] = 133,
  [177] = 134,
  [178] = 135,
  [179] = 137,
  [180] = 138,
  [181] = 139,
  [182] = 140,
  [183] = 106,
  [184] = 141,
  [185] = 142,
  [186] = 143,
  [187] = 144,
  [188] = 145,
  [189] = 146,
  [190] = 147,
  [191] = 109,
  [192] = 144,
  [193] = 132,
  [194] = 111,
  [195] = 112,
  [196] = 113,
  [197] = 114,
  [198] = 115,
  [199] = 199,
  [200] = 134,
  [201] = 135,
  [202] = 136,
  [203] = 137,
  [204] = 138,
  [205] = 139,
  [206] = 140,
  [207] = 106,
  [208] = 141,
  [209] = 142,
  [210] = 143,
  [211] = 108,
  [212] = 110,
  [213] = 146,
  [214] = 147,
  [215] = 116,
  [216] = 117,
  [217] = 118,
  [218] = 119,
  [219] = 120,
  [220] = 121,
  [221] = 122,
  [222] = 123,
  [223] = 124,
  [224] = 125,
  [225] = 148,
  [226] = 127,
  [227] = 128,
  [228] = 129,
  [229] = 107,
  [230] = 130,
  [231] = 131,
  [232] = 133,
  [233] = 126,
  [234] = 109,
  [235] = 145,
  [236] = 133,
  [237] = 146,
  [238] = 147,
  [239] = 107,
  [240] = 240,
  [241] = 122,
  [242] = 111,
  [243] = 112,
  [244] = 113,
  [245] = 114,
  [246] = 115,
  [247] = 147,
  [248] = 135,
  [249] = 133,
  [250] = 250,
  [251] = 136,
  [252] = 137,
  [253] = 138,
  [254] = 139,
  [255] = 140,
  [256] = 106,
  [257] = 141,
  [258] = 116,
  [259] = 117,
  [260] = 118,
  [261] = 119,
  [262] = 120,
  [263] = 121,
  [264] = 132,
  [265] = 110,
  [266] = 142,
  [267] = 250,
  [268] = 124,
  [269] = 125,
  [270] = 148,
  [271] = 127,
  [272] = 108,
  [273] = 128,
  [274] = 129,
  [275] = 130,
  [276] = 143,
  [277] = 144,
  [278] = 107,
  [279] = 134,
  [280] = 109,
  [281] = 126,
  [282] = 131,
  [283] = 145,
  [284] = 284,
  [285] = 284,
  [286] = 250,
  [287] = 146,
  [288] = 284,
  [289] = 250,
  [290] = 284,
  [291] = 250,
  [292] = 284,
  [293] = 250,
  [294] = 284,
  [295] = 123,
  [296] = 296,
  [297] = 122,
  [298] = 145,
  [299] = 108,
  [300] = 109,
  [301] = 110,
  [302] = 111,
  [303] = 112,
  [304] = 113,
  [305] = 114,
  [306] = 115,
  [307] = 116,
  [308] = 117,
  [309] = 118,
  [310] = 119,
  [311] = 120,
  [312] = 121,
  [313] = 123,
  [314] = 124,
  [315] = 125,
  [316] = 148,
  [317] = 128,
  [318] = 129,
  [319] = 130,
  [320] = 131,
  [321] = 132,
  [322] = 134,
  [323] = 133,
  [324] = 135,
  [325] = 107,
  [326] = 146,
  [327] = 147,
  [328] = 136,
  [329] = 126,
  [330] = 137,
  [331] = 138,
  [332] = 139,
  [333] = 140,
  [334] = 106,
  [335] = 141,
  [336] = 142,
  [337] = 143,
  [338] = 144,
  [339] = 127,
  [340] = 126,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 126,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 126,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
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
  [368] = 357,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 126,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 360,
  [378] = 378,
  [379] = 360,
  [380] = 380,
  [381] = 357,
  [382] = 351,
  [383] = 383,
  [384] = 383,
  [385] = 385,
  [386] = 383,
  [387] = 383,
  [388] = 383,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 367,
  [393] = 358,
  [394] = 126,
  [395] = 391,
  [396] = 396,
  [397] = 397,
  [398] = 366,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 391,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 391,
  [412] = 412,
  [413] = 413,
  [414] = 406,
  [415] = 352,
  [416] = 416,
  [417] = 417,
  [418] = 356,
  [419] = 419,
  [420] = 406,
  [421] = 421,
  [422] = 406,
  [423] = 423,
  [424] = 424,
  [425] = 353,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 373,
  [433] = 357,
  [434] = 375,
  [435] = 435,
  [436] = 431,
  [437] = 437,
  [438] = 431,
  [439] = 431,
  [440] = 360,
  [441] = 431,
  [442] = 369,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 445,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 449,
  [451] = 449,
  [452] = 449,
  [453] = 449,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 443,
  [458] = 443,
  [459] = 443,
  [460] = 443,
  [461] = 443,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 462,
  [467] = 467,
  [468] = 465,
  [469] = 469,
  [470] = 470,
  [471] = 462,
  [472] = 469,
  [473] = 469,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 462,
  [479] = 465,
  [480] = 480,
  [481] = 481,
  [482] = 469,
  [483] = 483,
  [484] = 465,
  [485] = 469,
  [486] = 486,
  [487] = 474,
  [488] = 488,
  [489] = 489,
  [490] = 462,
  [491] = 465,
  [492] = 467,
  [493] = 493,
  [494] = 467,
  [495] = 462,
  [496] = 467,
  [497] = 497,
  [498] = 467,
  [499] = 499,
  [500] = 469,
  [501] = 486,
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
  [3] = {.lex_state = 95, .external_lex_state = 3},
  [4] = {.lex_state = 80, .external_lex_state = 2},
  [5] = {.lex_state = 80, .external_lex_state = 2},
  [6] = {.lex_state = 95, .external_lex_state = 3},
  [7] = {.lex_state = 96, .external_lex_state = 2},
  [8] = {.lex_state = 95, .external_lex_state = 3},
  [9] = {.lex_state = 95, .external_lex_state = 2},
  [10] = {.lex_state = 95, .external_lex_state = 4},
  [11] = {.lex_state = 95, .external_lex_state = 2},
  [12] = {.lex_state = 95, .external_lex_state = 3},
  [13] = {.lex_state = 95, .external_lex_state = 2},
  [14] = {.lex_state = 95, .external_lex_state = 2},
  [15] = {.lex_state = 95, .external_lex_state = 2},
  [16] = {.lex_state = 95, .external_lex_state = 2},
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
  [31] = {.lex_state = 95, .external_lex_state = 2},
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
  [102] = {.lex_state = 83, .external_lex_state = 2},
  [103] = {.lex_state = 80, .external_lex_state = 2},
  [104] = {.lex_state = 80, .external_lex_state = 2},
  [105] = {.lex_state = 80, .external_lex_state = 2},
  [106] = {.lex_state = 77, .external_lex_state = 1},
  [107] = {.lex_state = 77, .external_lex_state = 1},
  [108] = {.lex_state = 77, .external_lex_state = 1},
  [109] = {.lex_state = 77, .external_lex_state = 1},
  [110] = {.lex_state = 77, .external_lex_state = 1},
  [111] = {.lex_state = 77, .external_lex_state = 1},
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
  [149] = {.lex_state = 99, .external_lex_state = 1},
  [150] = {.lex_state = 99, .external_lex_state = 1},
  [151] = {.lex_state = 99, .external_lex_state = 1},
  [152] = {.lex_state = 99, .external_lex_state = 1},
  [153] = {.lex_state = 99, .external_lex_state = 1},
  [154] = {.lex_state = 99, .external_lex_state = 1},
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
  [192] = {.lex_state = 98, .external_lex_state = 5},
  [193] = {.lex_state = 98, .external_lex_state = 5},
  [194] = {.lex_state = 98, .external_lex_state = 5},
  [195] = {.lex_state = 98, .external_lex_state = 5},
  [196] = {.lex_state = 98, .external_lex_state = 5},
  [197] = {.lex_state = 98, .external_lex_state = 5},
  [198] = {.lex_state = 98, .external_lex_state = 5},
  [199] = {.lex_state = 98, .external_lex_state = 5},
  [200] = {.lex_state = 98, .external_lex_state = 5},
  [201] = {.lex_state = 98, .external_lex_state = 5},
  [202] = {.lex_state = 98, .external_lex_state = 5},
  [203] = {.lex_state = 98, .external_lex_state = 5},
  [204] = {.lex_state = 98, .external_lex_state = 5},
  [205] = {.lex_state = 98, .external_lex_state = 5},
  [206] = {.lex_state = 98, .external_lex_state = 5},
  [207] = {.lex_state = 98, .external_lex_state = 5},
  [208] = {.lex_state = 98, .external_lex_state = 5},
  [209] = {.lex_state = 98, .external_lex_state = 5},
  [210] = {.lex_state = 98, .external_lex_state = 5},
  [211] = {.lex_state = 98, .external_lex_state = 5},
  [212] = {.lex_state = 98, .external_lex_state = 5},
  [213] = {.lex_state = 98, .external_lex_state = 5},
  [214] = {.lex_state = 98, .external_lex_state = 5},
  [215] = {.lex_state = 98, .external_lex_state = 5},
  [216] = {.lex_state = 98, .external_lex_state = 5},
  [217] = {.lex_state = 98, .external_lex_state = 5},
  [218] = {.lex_state = 98, .external_lex_state = 5},
  [219] = {.lex_state = 98, .external_lex_state = 5},
  [220] = {.lex_state = 98, .external_lex_state = 5},
  [221] = {.lex_state = 98, .external_lex_state = 5},
  [222] = {.lex_state = 98, .external_lex_state = 5},
  [223] = {.lex_state = 98, .external_lex_state = 5},
  [224] = {.lex_state = 98, .external_lex_state = 5},
  [225] = {.lex_state = 98, .external_lex_state = 5},
  [226] = {.lex_state = 98, .external_lex_state = 5},
  [227] = {.lex_state = 98, .external_lex_state = 5},
  [228] = {.lex_state = 98, .external_lex_state = 5},
  [229] = {.lex_state = 98, .external_lex_state = 5},
  [230] = {.lex_state = 98, .external_lex_state = 5},
  [231] = {.lex_state = 98, .external_lex_state = 5},
  [232] = {.lex_state = 98, .external_lex_state = 5},
  [233] = {.lex_state = 98, .external_lex_state = 5},
  [234] = {.lex_state = 98, .external_lex_state = 5},
  [235] = {.lex_state = 98, .external_lex_state = 5},
  [236] = {.lex_state = 97, .external_lex_state = 3},
  [237] = {.lex_state = 97, .external_lex_state = 3},
  [238] = {.lex_state = 97, .external_lex_state = 3},
  [239] = {.lex_state = 97, .external_lex_state = 3},
  [240] = {.lex_state = 97, .external_lex_state = 3},
  [241] = {.lex_state = 23, .external_lex_state = 6},
  [242] = {.lex_state = 23, .external_lex_state = 6},
  [243] = {.lex_state = 23, .external_lex_state = 6},
  [244] = {.lex_state = 23, .external_lex_state = 6},
  [245] = {.lex_state = 23, .external_lex_state = 6},
  [246] = {.lex_state = 23, .external_lex_state = 6},
  [247] = {.lex_state = 23, .external_lex_state = 6},
  [248] = {.lex_state = 23, .external_lex_state = 6},
  [249] = {.lex_state = 23, .external_lex_state = 6},
  [250] = {.lex_state = 23, .external_lex_state = 6},
  [251] = {.lex_state = 23, .external_lex_state = 6},
  [252] = {.lex_state = 23, .external_lex_state = 6},
  [253] = {.lex_state = 23, .external_lex_state = 6},
  [254] = {.lex_state = 23, .external_lex_state = 6},
  [255] = {.lex_state = 23, .external_lex_state = 6},
  [256] = {.lex_state = 23, .external_lex_state = 6},
  [257] = {.lex_state = 23, .external_lex_state = 6},
  [258] = {.lex_state = 23, .external_lex_state = 6},
  [259] = {.lex_state = 23, .external_lex_state = 6},
  [260] = {.lex_state = 23, .external_lex_state = 6},
  [261] = {.lex_state = 23, .external_lex_state = 6},
  [262] = {.lex_state = 23, .external_lex_state = 6},
  [263] = {.lex_state = 23, .external_lex_state = 6},
  [264] = {.lex_state = 23, .external_lex_state = 6},
  [265] = {.lex_state = 23, .external_lex_state = 6},
  [266] = {.lex_state = 23, .external_lex_state = 6},
  [267] = {.lex_state = 23, .external_lex_state = 6},
  [268] = {.lex_state = 23, .external_lex_state = 6},
  [269] = {.lex_state = 23, .external_lex_state = 6},
  [270] = {.lex_state = 23, .external_lex_state = 6},
  [271] = {.lex_state = 23, .external_lex_state = 6},
  [272] = {.lex_state = 23, .external_lex_state = 6},
  [273] = {.lex_state = 23, .external_lex_state = 6},
  [274] = {.lex_state = 23, .external_lex_state = 6},
  [275] = {.lex_state = 23, .external_lex_state = 6},
  [276] = {.lex_state = 23, .external_lex_state = 6},
  [277] = {.lex_state = 23, .external_lex_state = 6},
  [278] = {.lex_state = 23, .external_lex_state = 6},
  [279] = {.lex_state = 23, .external_lex_state = 6},
  [280] = {.lex_state = 23, .external_lex_state = 6},
  [281] = {.lex_state = 23, .external_lex_state = 6},
  [282] = {.lex_state = 23, .external_lex_state = 6},
  [283] = {.lex_state = 23, .external_lex_state = 6},
  [284] = {.lex_state = 23, .external_lex_state = 6},
  [285] = {.lex_state = 23, .external_lex_state = 6},
  [286] = {.lex_state = 23, .external_lex_state = 6},
  [287] = {.lex_state = 23, .external_lex_state = 6},
  [288] = {.lex_state = 23, .external_lex_state = 6},
  [289] = {.lex_state = 23, .external_lex_state = 6},
  [290] = {.lex_state = 23, .external_lex_state = 6},
  [291] = {.lex_state = 23, .external_lex_state = 6},
  [292] = {.lex_state = 23, .external_lex_state = 6},
  [293] = {.lex_state = 23, .external_lex_state = 6},
  [294] = {.lex_state = 23, .external_lex_state = 6},
  [295] = {.lex_state = 23, .external_lex_state = 6},
  [296] = {.lex_state = 77, .external_lex_state = 1},
  [297] = {.lex_state = 23, .external_lex_state = 2},
  [298] = {.lex_state = 23, .external_lex_state = 2},
  [299] = {.lex_state = 23, .external_lex_state = 2},
  [300] = {.lex_state = 23, .external_lex_state = 2},
  [301] = {.lex_state = 23, .external_lex_state = 2},
  [302] = {.lex_state = 23, .external_lex_state = 2},
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
  [340] = {.lex_state = 77, .external_lex_state = 1},
  [341] = {.lex_state = 77, .external_lex_state = 1},
  [342] = {.lex_state = 77, .external_lex_state = 1},
  [343] = {.lex_state = 77, .external_lex_state = 1},
  [344] = {.lex_state = 96, .external_lex_state = 1},
  [345] = {.lex_state = 77, .external_lex_state = 1},
  [346] = {.lex_state = 96, .external_lex_state = 1},
  [347] = {.lex_state = 96, .external_lex_state = 1},
  [348] = {.lex_state = 0, .external_lex_state = 5},
  [349] = {.lex_state = 96, .external_lex_state = 1},
  [350] = {.lex_state = 96, .external_lex_state = 1},
  [351] = {.lex_state = 0, .external_lex_state = 5},
  [352] = {.lex_state = 97, .external_lex_state = 3},
  [353] = {.lex_state = 97, .external_lex_state = 3},
  [354] = {.lex_state = 96, .external_lex_state = 1},
  [355] = {.lex_state = 96, .external_lex_state = 1},
  [356] = {.lex_state = 97, .external_lex_state = 3},
  [357] = {.lex_state = 96, .external_lex_state = 1},
  [358] = {.lex_state = 0, .external_lex_state = 5},
  [359] = {.lex_state = 77, .external_lex_state = 3},
  [360] = {.lex_state = 96, .external_lex_state = 1},
  [361] = {.lex_state = 77, .external_lex_state = 3},
  [362] = {.lex_state = 77, .external_lex_state = 3},
  [363] = {.lex_state = 77, .external_lex_state = 3},
  [364] = {.lex_state = 96, .external_lex_state = 1},
  [365] = {.lex_state = 97, .external_lex_state = 3},
  [366] = {.lex_state = 0, .external_lex_state = 5},
  [367] = {.lex_state = 0, .external_lex_state = 5},
  [368] = {.lex_state = 0, .external_lex_state = 5},
  [369] = {.lex_state = 97, .external_lex_state = 3},
  [370] = {.lex_state = 97, .external_lex_state = 3},
  [371] = {.lex_state = 0, .external_lex_state = 4},
  [372] = {.lex_state = 0, .external_lex_state = 6},
  [373] = {.lex_state = 97, .external_lex_state = 3},
  [374] = {.lex_state = 0, .external_lex_state = 4},
  [375] = {.lex_state = 0, .external_lex_state = 5},
  [376] = {.lex_state = 0, .external_lex_state = 4},
  [377] = {.lex_state = 0, .external_lex_state = 5},
  [378] = {.lex_state = 97, .external_lex_state = 3},
  [379] = {.lex_state = 97, .external_lex_state = 3},
  [380] = {.lex_state = 97, .external_lex_state = 3},
  [381] = {.lex_state = 97, .external_lex_state = 3},
  [382] = {.lex_state = 0, .external_lex_state = 6},
  [383] = {.lex_state = 0, .external_lex_state = 6},
  [384] = {.lex_state = 0, .external_lex_state = 6},
  [385] = {.lex_state = 97, .external_lex_state = 3},
  [386] = {.lex_state = 0, .external_lex_state = 6},
  [387] = {.lex_state = 0, .external_lex_state = 6},
  [388] = {.lex_state = 0, .external_lex_state = 6},
  [389] = {.lex_state = 97, .external_lex_state = 3},
  [390] = {.lex_state = 97, .external_lex_state = 3},
  [391] = {.lex_state = 24, .external_lex_state = 2},
  [392] = {.lex_state = 0, .external_lex_state = 6},
  [393] = {.lex_state = 0, .external_lex_state = 6},
  [394] = {.lex_state = 0, .external_lex_state = 2},
  [395] = {.lex_state = 24, .external_lex_state = 2},
  [396] = {.lex_state = 0, .external_lex_state = 3},
  [397] = {.lex_state = 0, .external_lex_state = 3},
  [398] = {.lex_state = 0, .external_lex_state = 6},
  [399] = {.lex_state = 26, .external_lex_state = 2},
  [400] = {.lex_state = 0, .external_lex_state = 3},
  [401] = {.lex_state = 0, .external_lex_state = 3},
  [402] = {.lex_state = 26, .external_lex_state = 2},
  [403] = {.lex_state = 24, .external_lex_state = 2},
  [404] = {.lex_state = 0, .external_lex_state = 3},
  [405] = {.lex_state = 0, .external_lex_state = 3},
  [406] = {.lex_state = 24, .external_lex_state = 2},
  [407] = {.lex_state = 0, .external_lex_state = 3},
  [408] = {.lex_state = 0, .external_lex_state = 3},
  [409] = {.lex_state = 0, .external_lex_state = 3},
  [410] = {.lex_state = 0, .external_lex_state = 3},
  [411] = {.lex_state = 24, .external_lex_state = 2},
  [412] = {.lex_state = 0, .external_lex_state = 3},
  [413] = {.lex_state = 0, .external_lex_state = 3},
  [414] = {.lex_state = 24, .external_lex_state = 2},
  [415] = {.lex_state = 97, .external_lex_state = 2},
  [416] = {.lex_state = 0, .external_lex_state = 3},
  [417] = {.lex_state = 0, .external_lex_state = 3},
  [418] = {.lex_state = 97, .external_lex_state = 2},
  [419] = {.lex_state = 0, .external_lex_state = 3},
  [420] = {.lex_state = 24, .external_lex_state = 2},
  [421] = {.lex_state = 0, .external_lex_state = 3},
  [422] = {.lex_state = 24, .external_lex_state = 2},
  [423] = {.lex_state = 0, .external_lex_state = 3},
  [424] = {.lex_state = 0, .external_lex_state = 3},
  [425] = {.lex_state = 97, .external_lex_state = 2},
  [426] = {.lex_state = 0, .external_lex_state = 3},
  [427] = {.lex_state = 0, .external_lex_state = 3},
  [428] = {.lex_state = 0, .external_lex_state = 3},
  [429] = {.lex_state = 0, .external_lex_state = 3},
  [430] = {.lex_state = 24, .external_lex_state = 2},
  [431] = {.lex_state = 0, .external_lex_state = 2},
  [432] = {.lex_state = 97, .external_lex_state = 2},
  [433] = {.lex_state = 0, .external_lex_state = 6},
  [434] = {.lex_state = 0, .external_lex_state = 6},
  [435] = {.lex_state = 0, .external_lex_state = 3},
  [436] = {.lex_state = 0, .external_lex_state = 2},
  [437] = {.lex_state = 25, .external_lex_state = 2},
  [438] = {.lex_state = 0, .external_lex_state = 2},
  [439] = {.lex_state = 0, .external_lex_state = 2},
  [440] = {.lex_state = 0, .external_lex_state = 6},
  [441] = {.lex_state = 0, .external_lex_state = 2},
  [442] = {.lex_state = 97, .external_lex_state = 2},
  [443] = {.lex_state = 0, .external_lex_state = 2},
  [444] = {.lex_state = 0, .external_lex_state = 3},
  [445] = {.lex_state = 25, .external_lex_state = 2},
  [446] = {.lex_state = 25, .external_lex_state = 2},
  [447] = {.lex_state = 97, .external_lex_state = 2},
  [448] = {.lex_state = 97, .external_lex_state = 2},
  [449] = {.lex_state = 33, .external_lex_state = 2},
  [450] = {.lex_state = 33, .external_lex_state = 2},
  [451] = {.lex_state = 33, .external_lex_state = 2},
  [452] = {.lex_state = 33, .external_lex_state = 2},
  [453] = {.lex_state = 33, .external_lex_state = 2},
  [454] = {.lex_state = 0, .external_lex_state = 3},
  [455] = {.lex_state = 94, .external_lex_state = 2},
  [456] = {.lex_state = 94, .external_lex_state = 2},
  [457] = {.lex_state = 0, .external_lex_state = 2},
  [458] = {.lex_state = 0, .external_lex_state = 2},
  [459] = {.lex_state = 0, .external_lex_state = 2},
  [460] = {.lex_state = 0, .external_lex_state = 2},
  [461] = {.lex_state = 0, .external_lex_state = 2},
  [462] = {.lex_state = 0, .external_lex_state = 2},
  [463] = {.lex_state = 0, .external_lex_state = 2},
  [464] = {.lex_state = 0, .external_lex_state = 2},
  [465] = {.lex_state = 0, .external_lex_state = 2},
  [466] = {.lex_state = 0, .external_lex_state = 2},
  [467] = {.lex_state = 0, .external_lex_state = 2},
  [468] = {.lex_state = 0, .external_lex_state = 2},
  [469] = {.lex_state = 0, .external_lex_state = 2},
  [470] = {.lex_state = 0, .external_lex_state = 2},
  [471] = {.lex_state = 0, .external_lex_state = 2},
  [472] = {.lex_state = 0, .external_lex_state = 2},
  [473] = {.lex_state = 0, .external_lex_state = 2},
  [474] = {.lex_state = 25, .external_lex_state = 2},
  [475] = {.lex_state = 0, .external_lex_state = 2},
  [476] = {.lex_state = 97, .external_lex_state = 2},
  [477] = {.lex_state = 0, .external_lex_state = 3},
  [478] = {.lex_state = 0, .external_lex_state = 2},
  [479] = {.lex_state = 0, .external_lex_state = 2},
  [480] = {.lex_state = 99, .external_lex_state = 2},
  [481] = {.lex_state = 97, .external_lex_state = 2},
  [482] = {.lex_state = 0, .external_lex_state = 2},
  [483] = {.lex_state = 97, .external_lex_state = 2},
  [484] = {.lex_state = 0, .external_lex_state = 2},
  [485] = {.lex_state = 0, .external_lex_state = 2},
  [486] = {.lex_state = 25, .external_lex_state = 2},
  [487] = {.lex_state = 25, .external_lex_state = 2},
  [488] = {.lex_state = 0, .external_lex_state = 2},
  [489] = {.lex_state = 0, .external_lex_state = 2},
  [490] = {.lex_state = 0, .external_lex_state = 2},
  [491] = {.lex_state = 0, .external_lex_state = 2},
  [492] = {.lex_state = 0, .external_lex_state = 2},
  [493] = {.lex_state = 0, .external_lex_state = 2},
  [494] = {.lex_state = 0, .external_lex_state = 2},
  [495] = {.lex_state = 0, .external_lex_state = 2},
  [496] = {.lex_state = 0, .external_lex_state = 2},
  [497] = {.lex_state = 0, .external_lex_state = 2},
  [498] = {.lex_state = 0, .external_lex_state = 2},
  [499] = {.lex_state = 94, .external_lex_state = 2},
  [500] = {.lex_state = 0, .external_lex_state = 2},
  [501] = {.lex_state = 25, .external_lex_state = 2},
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
    [sym_program] = STATE(489),
    [sym__statement] = STATE(4),
    [sym_directive] = STATE(417),
    [sym__macro_directive] = STATE(416),
    [sym__numeric_directive] = STATE(401),
    [sym_numeric_mnemonic] = STATE(385),
    [sym__string_directive] = STATE(421),
    [sym_string_mnemonic] = STATE(483),
    [sym__control_directive] = STATE(410),
    [sym_control_mnemonic] = STATE(389),
    [sym_instruction] = STATE(417),
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
    STATE(161), 1,
      sym__bitwise_xor_expression,
    STATE(162), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(163), 1,
      sym__bitwise_and_expression,
    STATE(164), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(165), 1,
      sym__equality_expression,
    STATE(166), 1,
      sym__wrapped_equality_expression,
    STATE(167), 1,
      sym__relational_expression,
    STATE(168), 1,
      sym__wrapped_relational_expression,
    STATE(169), 1,
      sym__shift_expression,
    STATE(170), 1,
      sym__wrapped_shift_expression,
    STATE(171), 1,
      sym__additive_expression,
    STATE(172), 1,
      sym__wrapped_additive_expression,
    STATE(173), 1,
      sym__multiplicative_expression,
    STATE(349), 1,
      sym__wrapped_assignment_expression,
    STATE(408), 1,
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
    STATE(347), 4,
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
    STATE(174), 10,
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
    STATE(194), 1,
      sym__assignment_expression,
    STATE(195), 1,
      sym__logical_or_expression,
    STATE(196), 1,
      sym__wrapped_logical_or_expression,
    STATE(197), 1,
      sym__logical_and_expression,
    STATE(198), 1,
      sym__wrapped_logical_and_expression,
    STATE(215), 1,
      sym__bitwise_or_expression,
    STATE(216), 1,
      sym__wrapped_bitwise_or_expression,
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
    STATE(230), 1,
      sym__multiplicative_expression,
    STATE(351), 1,
      sym__wrapped_assignment_expression,
    STATE(400), 1,
      sym_operands,
    STATE(409), 1,
      sym__call_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(59), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(65), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(366), 2,
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
  [275] = 20,
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
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 1,
      sym_line_comment,
    STATE(385), 1,
      sym_numeric_mnemonic,
    STATE(389), 1,
      sym_control_mnemonic,
    STATE(401), 1,
      sym__numeric_directive,
    STATE(410), 1,
      sym__control_directive,
    STATE(416), 1,
      sym__macro_directive,
    STATE(421), 1,
      sym__string_directive,
    STATE(483), 1,
      sym_string_mnemonic,
    STATE(404), 2,
      sym_directive,
      sym_instruction,
    ACTIONS(79), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
    STATE(5), 3,
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
  [373] = 20,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 1,
      sym_line_comment,
    ACTIONS(91), 1,
      sym_macro_mnemonic,
    ACTIONS(100), 1,
      aux_sym_control_mnemonic_token1,
    ACTIONS(103), 1,
      sym_opcode,
    STATE(385), 1,
      sym_numeric_mnemonic,
    STATE(389), 1,
      sym_control_mnemonic,
    STATE(401), 1,
      sym__numeric_directive,
    STATE(410), 1,
      sym__control_directive,
    STATE(416), 1,
      sym__macro_directive,
    STATE(421), 1,
      sym__string_directive,
    STATE(483), 1,
      sym_string_mnemonic,
    STATE(435), 2,
      sym_directive,
      sym_instruction,
    ACTIONS(85), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
    STATE(5), 3,
      sym__statement,
      sym__label,
      aux_sym_program_repeat1,
    ACTIONS(106), 4,
      sym_local_label,
      sym_global_label,
      sym_global_numeric_label,
      sym_local_numeric_label,
    ACTIONS(97), 5,
      anon_sym_DOTasciz,
      anon_sym_DOTascii,
      anon_sym_DOTasciiz,
      anon_sym_DOTstring,
      anon_sym_DOTstringz,
    ACTIONS(94), 26,
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
  [471] = 36,
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
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    STATE(194), 1,
      sym__assignment_expression,
    STATE(195), 1,
      sym__logical_or_expression,
    STATE(196), 1,
      sym__wrapped_logical_or_expression,
    STATE(197), 1,
      sym__logical_and_expression,
    STATE(198), 1,
      sym__wrapped_logical_and_expression,
    STATE(215), 1,
      sym__bitwise_or_expression,
    STATE(216), 1,
      sym__wrapped_bitwise_or_expression,
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
    STATE(230), 1,
      sym__multiplicative_expression,
    STATE(351), 1,
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
    ACTIONS(109), 4,
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
  [600] = 37,
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
    STATE(161), 1,
      sym__bitwise_xor_expression,
    STATE(162), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(163), 1,
      sym__bitwise_and_expression,
    STATE(164), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(165), 1,
      sym__equality_expression,
    STATE(166), 1,
      sym__wrapped_equality_expression,
    STATE(167), 1,
      sym__relational_expression,
    STATE(168), 1,
      sym__wrapped_relational_expression,
    STATE(169), 1,
      sym__shift_expression,
    STATE(170), 1,
      sym__wrapped_shift_expression,
    STATE(171), 1,
      sym__additive_expression,
    STATE(172), 1,
      sym__wrapped_additive_expression,
    STATE(173), 1,
      sym__multiplicative_expression,
    STATE(349), 1,
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
    STATE(174), 10,
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
  [731] = 36,
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
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    STATE(194), 1,
      sym__assignment_expression,
    STATE(195), 1,
      sym__logical_or_expression,
    STATE(196), 1,
      sym__wrapped_logical_or_expression,
    STATE(197), 1,
      sym__logical_and_expression,
    STATE(198), 1,
      sym__wrapped_logical_and_expression,
    STATE(215), 1,
      sym__bitwise_or_expression,
    STATE(216), 1,
      sym__wrapped_bitwise_or_expression,
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
    STATE(230), 1,
      sym__multiplicative_expression,
    STATE(351), 1,
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
    ACTIONS(113), 4,
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
  [860] = 37,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
    ACTIONS(119), 1,
      sym_unary_minus_operator,
    ACTIONS(123), 1,
      sym_relocation_type,
    ACTIONS(129), 1,
      aux_sym_decimal_token1,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(241), 1,
      sym__equality_expression,
    STATE(242), 1,
      sym__assignment_expression,
    STATE(243), 1,
      sym__logical_or_expression,
    STATE(244), 1,
      sym__wrapped_logical_or_expression,
    STATE(245), 1,
      sym__logical_and_expression,
    STATE(246), 1,
      sym__wrapped_logical_and_expression,
    STATE(258), 1,
      sym__bitwise_or_expression,
    STATE(259), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(260), 1,
      sym__bitwise_xor_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(262), 1,
      sym__bitwise_and_expression,
    STATE(263), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(268), 1,
      sym__relational_expression,
    STATE(269), 1,
      sym__wrapped_relational_expression,
    STATE(270), 1,
      sym__shift_expression,
    STATE(271), 1,
      sym__wrapped_shift_expression,
    STATE(273), 1,
      sym__additive_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__multiplicative_expression,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(382), 1,
      sym__wrapped_assignment_expression,
    STATE(475), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(121), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(127), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(398), 2,
      sym__operand,
      sym_string,
    ACTIONS(125), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(282), 10,
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
  [989] = 34,
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
    STATE(111), 1,
      sym__assignment_expression,
    STATE(112), 1,
      sym__logical_or_expression,
    STATE(113), 1,
      sym__wrapped_logical_or_expression,
    STATE(114), 1,
      sym__logical_and_expression,
    STATE(115), 1,
      sym__wrapped_logical_and_expression,
    STATE(116), 1,
      sym__bitwise_or_expression,
    STATE(117), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(118), 1,
      sym__bitwise_xor_expression,
    STATE(119), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(120), 1,
      sym__bitwise_and_expression,
    STATE(121), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(122), 1,
      sym__equality_expression,
    STATE(123), 1,
      sym__wrapped_equality_expression,
    STATE(124), 1,
      sym__relational_expression,
    STATE(125), 1,
      sym__wrapped_relational_expression,
    STATE(127), 1,
      sym__wrapped_shift_expression,
    STATE(128), 1,
      sym__additive_expression,
    STATE(129), 1,
      sym__wrapped_additive_expression,
    STATE(130), 1,
      sym__multiplicative_expression,
    STATE(148), 1,
      sym__shift_expression,
    STATE(343), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(145), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(151), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(139), 5,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(149), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(131), 10,
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
  [1112] = 39,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
    ACTIONS(119), 1,
      sym_unary_minus_operator,
    ACTIONS(123), 1,
      sym_relocation_type,
    ACTIONS(129), 1,
      aux_sym_decimal_token1,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(241), 1,
      sym__equality_expression,
    STATE(242), 1,
      sym__assignment_expression,
    STATE(243), 1,
      sym__logical_or_expression,
    STATE(244), 1,
      sym__wrapped_logical_or_expression,
    STATE(245), 1,
      sym__logical_and_expression,
    STATE(246), 1,
      sym__wrapped_logical_and_expression,
    STATE(258), 1,
      sym__bitwise_or_expression,
    STATE(259), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(260), 1,
      sym__bitwise_xor_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(262), 1,
      sym__bitwise_and_expression,
    STATE(263), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(268), 1,
      sym__relational_expression,
    STATE(269), 1,
      sym__wrapped_relational_expression,
    STATE(270), 1,
      sym__shift_expression,
    STATE(271), 1,
      sym__wrapped_shift_expression,
    STATE(273), 1,
      sym__additive_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__multiplicative_expression,
    STATE(285), 1,
      sym_symbol,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(387), 1,
      sym__wrapped_assignment_expression,
    STATE(493), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(121), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(127), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(161), 2,
      sym_register,
      sym_macro_variable,
    STATE(398), 2,
      sym__operand,
      sym_string,
    ACTIONS(125), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(282), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1245] = 35,
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
    STATE(111), 1,
      sym__assignment_expression,
    STATE(112), 1,
      sym__logical_or_expression,
    STATE(113), 1,
      sym__wrapped_logical_or_expression,
    STATE(114), 1,
      sym__logical_and_expression,
    STATE(115), 1,
      sym__wrapped_logical_and_expression,
    STATE(116), 1,
      sym__bitwise_or_expression,
    STATE(117), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(118), 1,
      sym__bitwise_xor_expression,
    STATE(119), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(120), 1,
      sym__bitwise_and_expression,
    STATE(121), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(122), 1,
      sym__equality_expression,
    STATE(123), 1,
      sym__wrapped_equality_expression,
    STATE(124), 1,
      sym__relational_expression,
    STATE(125), 1,
      sym__wrapped_relational_expression,
    STATE(127), 1,
      sym__wrapped_shift_expression,
    STATE(128), 1,
      sym__additive_expression,
    STATE(129), 1,
      sym__wrapped_additive_expression,
    STATE(130), 1,
      sym__multiplicative_expression,
    STATE(148), 1,
      sym__shift_expression,
    STATE(296), 1,
      sym__wrapped_assignment_expression,
    STATE(426), 1,
      sym_numeric_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(145), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(151), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(163), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(149), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(131), 10,
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
  [1370] = 38,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym_unary_minus_operator,
    ACTIONS(123), 1,
      sym_relocation_type,
    ACTIONS(129), 1,
      aux_sym_decimal_token1,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(241), 1,
      sym__equality_expression,
    STATE(242), 1,
      sym__assignment_expression,
    STATE(243), 1,
      sym__logical_or_expression,
    STATE(244), 1,
      sym__wrapped_logical_or_expression,
    STATE(245), 1,
      sym__logical_and_expression,
    STATE(246), 1,
      sym__wrapped_logical_and_expression,
    STATE(258), 1,
      sym__bitwise_or_expression,
    STATE(259), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(260), 1,
      sym__bitwise_xor_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(262), 1,
      sym__bitwise_and_expression,
    STATE(263), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(268), 1,
      sym__relational_expression,
    STATE(269), 1,
      sym__wrapped_relational_expression,
    STATE(270), 1,
      sym__shift_expression,
    STATE(271), 1,
      sym__wrapped_shift_expression,
    STATE(273), 1,
      sym__additive_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__multiplicative_expression,
    STATE(290), 1,
      sym_symbol,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(386), 1,
      sym__wrapped_assignment_expression,
    STATE(478), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(121), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(127), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(165), 2,
      sym_register,
      sym_macro_variable,
    STATE(398), 2,
      sym__operand,
      sym_string,
    ACTIONS(125), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(282), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1500] = 38,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym_unary_minus_operator,
    ACTIONS(123), 1,
      sym_relocation_type,
    ACTIONS(129), 1,
      aux_sym_decimal_token1,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(241), 1,
      sym__equality_expression,
    STATE(242), 1,
      sym__assignment_expression,
    STATE(243), 1,
      sym__logical_or_expression,
    STATE(244), 1,
      sym__wrapped_logical_or_expression,
    STATE(245), 1,
      sym__logical_and_expression,
    STATE(246), 1,
      sym__wrapped_logical_and_expression,
    STATE(258), 1,
      sym__bitwise_or_expression,
    STATE(259), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(260), 1,
      sym__bitwise_xor_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(262), 1,
      sym__bitwise_and_expression,
    STATE(263), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(267), 1,
      sym_symbol,
    STATE(268), 1,
      sym__relational_expression,
    STATE(269), 1,
      sym__wrapped_relational_expression,
    STATE(270), 1,
      sym__shift_expression,
    STATE(271), 1,
      sym__wrapped_shift_expression,
    STATE(273), 1,
      sym__additive_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__multiplicative_expression,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(382), 1,
      sym__wrapped_assignment_expression,
    STATE(473), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(121), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(127), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(167), 2,
      sym_register,
      sym_macro_variable,
    STATE(398), 2,
      sym__operand,
      sym_string,
    ACTIONS(125), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(282), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1630] = 38,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym_unary_minus_operator,
    ACTIONS(123), 1,
      sym_relocation_type,
    ACTIONS(129), 1,
      aux_sym_decimal_token1,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(241), 1,
      sym__equality_expression,
    STATE(242), 1,
      sym__assignment_expression,
    STATE(243), 1,
      sym__logical_or_expression,
    STATE(244), 1,
      sym__wrapped_logical_or_expression,
    STATE(245), 1,
      sym__logical_and_expression,
    STATE(246), 1,
      sym__wrapped_logical_and_expression,
    STATE(258), 1,
      sym__bitwise_or_expression,
    STATE(259), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(260), 1,
      sym__bitwise_xor_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(262), 1,
      sym__bitwise_and_expression,
    STATE(263), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(268), 1,
      sym__relational_expression,
    STATE(269), 1,
      sym__wrapped_relational_expression,
    STATE(270), 1,
      sym__shift_expression,
    STATE(271), 1,
      sym__wrapped_shift_expression,
    STATE(273), 1,
      sym__additive_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__multiplicative_expression,
    STATE(289), 1,
      sym_symbol,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(382), 1,
      sym__wrapped_assignment_expression,
    STATE(482), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(121), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(127), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(169), 2,
      sym_register,
      sym_macro_variable,
    STATE(398), 2,
      sym__operand,
      sym_string,
    ACTIONS(125), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(282), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1760] = 38,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym_unary_minus_operator,
    ACTIONS(123), 1,
      sym_relocation_type,
    ACTIONS(129), 1,
      aux_sym_decimal_token1,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(241), 1,
      sym__equality_expression,
    STATE(242), 1,
      sym__assignment_expression,
    STATE(243), 1,
      sym__logical_or_expression,
    STATE(244), 1,
      sym__wrapped_logical_or_expression,
    STATE(245), 1,
      sym__logical_and_expression,
    STATE(246), 1,
      sym__wrapped_logical_and_expression,
    STATE(250), 1,
      sym_symbol,
    STATE(258), 1,
      sym__bitwise_or_expression,
    STATE(259), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(260), 1,
      sym__bitwise_xor_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(262), 1,
      sym__bitwise_and_expression,
    STATE(263), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(268), 1,
      sym__relational_expression,
    STATE(269), 1,
      sym__wrapped_relational_expression,
    STATE(270), 1,
      sym__shift_expression,
    STATE(271), 1,
      sym__wrapped_shift_expression,
    STATE(273), 1,
      sym__additive_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__multiplicative_expression,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(382), 1,
      sym__wrapped_assignment_expression,
    STATE(485), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(121), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(127), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(171), 2,
      sym_register,
      sym_macro_variable,
    STATE(398), 2,
      sym__operand,
      sym_string,
    ACTIONS(125), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(282), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1890] = 38,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym_unary_minus_operator,
    ACTIONS(123), 1,
      sym_relocation_type,
    ACTIONS(129), 1,
      aux_sym_decimal_token1,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(241), 1,
      sym__equality_expression,
    STATE(242), 1,
      sym__assignment_expression,
    STATE(243), 1,
      sym__logical_or_expression,
    STATE(244), 1,
      sym__wrapped_logical_or_expression,
    STATE(245), 1,
      sym__logical_and_expression,
    STATE(246), 1,
      sym__wrapped_logical_and_expression,
    STATE(258), 1,
      sym__bitwise_or_expression,
    STATE(259), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(260), 1,
      sym__bitwise_xor_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(262), 1,
      sym__bitwise_and_expression,
    STATE(263), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(268), 1,
      sym__relational_expression,
    STATE(269), 1,
      sym__wrapped_relational_expression,
    STATE(270), 1,
      sym__shift_expression,
    STATE(271), 1,
      sym__wrapped_shift_expression,
    STATE(273), 1,
      sym__additive_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__multiplicative_expression,
    STATE(284), 1,
      sym_symbol,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(383), 1,
      sym__wrapped_assignment_expression,
    STATE(471), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(121), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(127), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(173), 2,
      sym_register,
      sym_macro_variable,
    STATE(398), 2,
      sym__operand,
      sym_string,
    ACTIONS(125), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(282), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2020] = 36,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym_unary_minus_operator,
    ACTIONS(123), 1,
      sym_relocation_type,
    ACTIONS(129), 1,
      aux_sym_decimal_token1,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(241), 1,
      sym__equality_expression,
    STATE(242), 1,
      sym__assignment_expression,
    STATE(243), 1,
      sym__logical_or_expression,
    STATE(244), 1,
      sym__wrapped_logical_or_expression,
    STATE(245), 1,
      sym__logical_and_expression,
    STATE(246), 1,
      sym__wrapped_logical_and_expression,
    STATE(258), 1,
      sym__bitwise_or_expression,
    STATE(259), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(260), 1,
      sym__bitwise_xor_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(262), 1,
      sym__bitwise_and_expression,
    STATE(263), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(268), 1,
      sym__relational_expression,
    STATE(269), 1,
      sym__wrapped_relational_expression,
    STATE(270), 1,
      sym__shift_expression,
    STATE(271), 1,
      sym__wrapped_shift_expression,
    STATE(273), 1,
      sym__additive_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__multiplicative_expression,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(382), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(121), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(127), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(434), 2,
      sym__operand,
      sym_string,
    ACTIONS(125), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(282), 10,
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
  [2146] = 38,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym_unary_minus_operator,
    ACTIONS(123), 1,
      sym_relocation_type,
    ACTIONS(129), 1,
      aux_sym_decimal_token1,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(241), 1,
      sym__equality_expression,
    STATE(242), 1,
      sym__assignment_expression,
    STATE(243), 1,
      sym__logical_or_expression,
    STATE(244), 1,
      sym__wrapped_logical_or_expression,
    STATE(245), 1,
      sym__logical_and_expression,
    STATE(246), 1,
      sym__wrapped_logical_and_expression,
    STATE(258), 1,
      sym__bitwise_or_expression,
    STATE(259), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(260), 1,
      sym__bitwise_xor_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(262), 1,
      sym__bitwise_and_expression,
    STATE(263), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(268), 1,
      sym__relational_expression,
    STATE(269), 1,
      sym__wrapped_relational_expression,
    STATE(270), 1,
      sym__shift_expression,
    STATE(271), 1,
      sym__wrapped_shift_expression,
    STATE(273), 1,
      sym__additive_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__multiplicative_expression,
    STATE(292), 1,
      sym_symbol,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(388), 1,
      sym__wrapped_assignment_expression,
    STATE(495), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(121), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(127), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(175), 2,
      sym_register,
      sym_macro_variable,
    STATE(398), 2,
      sym__operand,
      sym_string,
    ACTIONS(125), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(282), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2276] = 36,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym_unary_minus_operator,
    ACTIONS(123), 1,
      sym_relocation_type,
    ACTIONS(129), 1,
      aux_sym_decimal_token1,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(241), 1,
      sym__equality_expression,
    STATE(242), 1,
      sym__assignment_expression,
    STATE(243), 1,
      sym__logical_or_expression,
    STATE(244), 1,
      sym__wrapped_logical_or_expression,
    STATE(245), 1,
      sym__logical_and_expression,
    STATE(246), 1,
      sym__wrapped_logical_and_expression,
    STATE(258), 1,
      sym__bitwise_or_expression,
    STATE(259), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(260), 1,
      sym__bitwise_xor_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(262), 1,
      sym__bitwise_and_expression,
    STATE(263), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(268), 1,
      sym__relational_expression,
    STATE(269), 1,
      sym__wrapped_relational_expression,
    STATE(270), 1,
      sym__shift_expression,
    STATE(271), 1,
      sym__wrapped_shift_expression,
    STATE(273), 1,
      sym__additive_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__multiplicative_expression,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(382), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(121), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(127), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(434), 2,
      sym__operand,
      sym_string,
    ACTIONS(125), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(282), 10,
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
  [2402] = 38,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym_unary_minus_operator,
    ACTIONS(123), 1,
      sym_relocation_type,
    ACTIONS(129), 1,
      aux_sym_decimal_token1,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(241), 1,
      sym__equality_expression,
    STATE(242), 1,
      sym__assignment_expression,
    STATE(243), 1,
      sym__logical_or_expression,
    STATE(244), 1,
      sym__wrapped_logical_or_expression,
    STATE(245), 1,
      sym__logical_and_expression,
    STATE(246), 1,
      sym__wrapped_logical_and_expression,
    STATE(258), 1,
      sym__bitwise_or_expression,
    STATE(259), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(260), 1,
      sym__bitwise_xor_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(262), 1,
      sym__bitwise_and_expression,
    STATE(263), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(268), 1,
      sym__relational_expression,
    STATE(269), 1,
      sym__wrapped_relational_expression,
    STATE(270), 1,
      sym__shift_expression,
    STATE(271), 1,
      sym__wrapped_shift_expression,
    STATE(273), 1,
      sym__additive_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__multiplicative_expression,
    STATE(286), 1,
      sym_symbol,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(382), 1,
      sym__wrapped_assignment_expression,
    STATE(472), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(121), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(127), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(177), 2,
      sym_register,
      sym_macro_variable,
    STATE(398), 2,
      sym__operand,
      sym_string,
    ACTIONS(125), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(282), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2532] = 38,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym_unary_minus_operator,
    ACTIONS(123), 1,
      sym_relocation_type,
    ACTIONS(129), 1,
      aux_sym_decimal_token1,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(241), 1,
      sym__equality_expression,
    STATE(242), 1,
      sym__assignment_expression,
    STATE(243), 1,
      sym__logical_or_expression,
    STATE(244), 1,
      sym__wrapped_logical_or_expression,
    STATE(245), 1,
      sym__logical_and_expression,
    STATE(246), 1,
      sym__wrapped_logical_and_expression,
    STATE(258), 1,
      sym__bitwise_or_expression,
    STATE(259), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(260), 1,
      sym__bitwise_xor_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(262), 1,
      sym__bitwise_and_expression,
    STATE(263), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(268), 1,
      sym__relational_expression,
    STATE(269), 1,
      sym__wrapped_relational_expression,
    STATE(270), 1,
      sym__shift_expression,
    STATE(271), 1,
      sym__wrapped_shift_expression,
    STATE(273), 1,
      sym__additive_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__multiplicative_expression,
    STATE(288), 1,
      sym_symbol,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(384), 1,
      sym__wrapped_assignment_expression,
    STATE(490), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(121), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(127), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(179), 2,
      sym_register,
      sym_macro_variable,
    STATE(398), 2,
      sym__operand,
      sym_string,
    ACTIONS(125), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(282), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2662] = 38,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym_unary_minus_operator,
    ACTIONS(123), 1,
      sym_relocation_type,
    ACTIONS(129), 1,
      aux_sym_decimal_token1,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(241), 1,
      sym__equality_expression,
    STATE(242), 1,
      sym__assignment_expression,
    STATE(243), 1,
      sym__logical_or_expression,
    STATE(244), 1,
      sym__wrapped_logical_or_expression,
    STATE(245), 1,
      sym__logical_and_expression,
    STATE(246), 1,
      sym__wrapped_logical_and_expression,
    STATE(258), 1,
      sym__bitwise_or_expression,
    STATE(259), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(260), 1,
      sym__bitwise_xor_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(262), 1,
      sym__bitwise_and_expression,
    STATE(263), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(268), 1,
      sym__relational_expression,
    STATE(269), 1,
      sym__wrapped_relational_expression,
    STATE(270), 1,
      sym__shift_expression,
    STATE(271), 1,
      sym__wrapped_shift_expression,
    STATE(273), 1,
      sym__additive_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__multiplicative_expression,
    STATE(291), 1,
      sym_symbol,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(382), 1,
      sym__wrapped_assignment_expression,
    STATE(500), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(121), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(127), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(181), 2,
      sym_register,
      sym_macro_variable,
    STATE(398), 2,
      sym__operand,
      sym_string,
    ACTIONS(125), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(282), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2792] = 38,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym_unary_minus_operator,
    ACTIONS(123), 1,
      sym_relocation_type,
    ACTIONS(129), 1,
      aux_sym_decimal_token1,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(241), 1,
      sym__equality_expression,
    STATE(242), 1,
      sym__assignment_expression,
    STATE(243), 1,
      sym__logical_or_expression,
    STATE(244), 1,
      sym__wrapped_logical_or_expression,
    STATE(245), 1,
      sym__logical_and_expression,
    STATE(246), 1,
      sym__wrapped_logical_and_expression,
    STATE(258), 1,
      sym__bitwise_or_expression,
    STATE(259), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(260), 1,
      sym__bitwise_xor_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(262), 1,
      sym__bitwise_and_expression,
    STATE(263), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(268), 1,
      sym__relational_expression,
    STATE(269), 1,
      sym__wrapped_relational_expression,
    STATE(270), 1,
      sym__shift_expression,
    STATE(271), 1,
      sym__wrapped_shift_expression,
    STATE(273), 1,
      sym__additive_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__multiplicative_expression,
    STATE(285), 1,
      sym_symbol,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(387), 1,
      sym__wrapped_assignment_expression,
    STATE(466), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(121), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(127), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(161), 2,
      sym_register,
      sym_macro_variable,
    STATE(398), 2,
      sym__operand,
      sym_string,
    ACTIONS(125), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(282), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2922] = 38,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym_unary_minus_operator,
    ACTIONS(123), 1,
      sym_relocation_type,
    ACTIONS(129), 1,
      aux_sym_decimal_token1,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(241), 1,
      sym__equality_expression,
    STATE(242), 1,
      sym__assignment_expression,
    STATE(243), 1,
      sym__logical_or_expression,
    STATE(244), 1,
      sym__wrapped_logical_or_expression,
    STATE(245), 1,
      sym__logical_and_expression,
    STATE(246), 1,
      sym__wrapped_logical_and_expression,
    STATE(258), 1,
      sym__bitwise_or_expression,
    STATE(259), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(260), 1,
      sym__bitwise_xor_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(262), 1,
      sym__bitwise_and_expression,
    STATE(263), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(268), 1,
      sym__relational_expression,
    STATE(269), 1,
      sym__wrapped_relational_expression,
    STATE(270), 1,
      sym__shift_expression,
    STATE(271), 1,
      sym__wrapped_shift_expression,
    STATE(273), 1,
      sym__additive_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__multiplicative_expression,
    STATE(293), 1,
      sym_symbol,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(382), 1,
      sym__wrapped_assignment_expression,
    STATE(469), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(121), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(127), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(183), 2,
      sym_register,
      sym_macro_variable,
    STATE(398), 2,
      sym__operand,
      sym_string,
    ACTIONS(125), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(282), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3052] = 38,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym_unary_minus_operator,
    ACTIONS(123), 1,
      sym_relocation_type,
    ACTIONS(129), 1,
      aux_sym_decimal_token1,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(241), 1,
      sym__equality_expression,
    STATE(242), 1,
      sym__assignment_expression,
    STATE(243), 1,
      sym__logical_or_expression,
    STATE(244), 1,
      sym__wrapped_logical_or_expression,
    STATE(245), 1,
      sym__logical_and_expression,
    STATE(246), 1,
      sym__wrapped_logical_and_expression,
    STATE(258), 1,
      sym__bitwise_or_expression,
    STATE(259), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(260), 1,
      sym__bitwise_xor_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(262), 1,
      sym__bitwise_and_expression,
    STATE(263), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(268), 1,
      sym__relational_expression,
    STATE(269), 1,
      sym__wrapped_relational_expression,
    STATE(270), 1,
      sym__shift_expression,
    STATE(271), 1,
      sym__wrapped_shift_expression,
    STATE(273), 1,
      sym__additive_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__multiplicative_expression,
    STATE(294), 1,
      sym_symbol,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(386), 1,
      sym__wrapped_assignment_expression,
    STATE(462), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(121), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(127), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(185), 2,
      sym_register,
      sym_macro_variable,
    STATE(398), 2,
      sym__operand,
      sym_string,
    ACTIONS(125), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(282), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3182] = 37,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      sym_unary_minus_operator,
    ACTIONS(193), 1,
      sym_relocation_type,
    ACTIONS(199), 1,
      aux_sym_decimal_token1,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    ACTIONS(205), 1,
      sym_macro_variable,
    ACTIONS(207), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(209), 1,
      aux_sym_symbol_token1,
    STATE(240), 1,
      sym_address,
    STATE(297), 1,
      sym__equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__wrapped_equality_expression,
    STATE(314), 1,
      sym__relational_expression,
    STATE(315), 1,
      sym__wrapped_relational_expression,
    STATE(316), 1,
      sym__shift_expression,
    STATE(317), 1,
      sym__additive_expression,
    STATE(318), 1,
      sym__wrapped_additive_expression,
    STATE(319), 1,
      sym__multiplicative_expression,
    STATE(339), 1,
      sym__wrapped_shift_expression,
    STATE(443), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(191), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(197), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(380), 2,
      sym__string_operand,
      sym_string,
    ACTIONS(195), 4,
      sym_octal,
      sym_float,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(320), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
  [3309] = 35,
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
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    STATE(194), 1,
      sym__assignment_expression,
    STATE(195), 1,
      sym__logical_or_expression,
    STATE(196), 1,
      sym__wrapped_logical_or_expression,
    STATE(197), 1,
      sym__logical_and_expression,
    STATE(198), 1,
      sym__wrapped_logical_and_expression,
    STATE(215), 1,
      sym__bitwise_or_expression,
    STATE(216), 1,
      sym__wrapped_bitwise_or_expression,
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
    STATE(230), 1,
      sym__multiplicative_expression,
    STATE(351), 1,
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
  [3432] = 35,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym_unary_minus_operator,
    ACTIONS(123), 1,
      sym_relocation_type,
    ACTIONS(129), 1,
      aux_sym_decimal_token1,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(241), 1,
      sym__equality_expression,
    STATE(242), 1,
      sym__assignment_expression,
    STATE(243), 1,
      sym__logical_or_expression,
    STATE(244), 1,
      sym__wrapped_logical_or_expression,
    STATE(245), 1,
      sym__logical_and_expression,
    STATE(246), 1,
      sym__wrapped_logical_and_expression,
    STATE(258), 1,
      sym__bitwise_or_expression,
    STATE(259), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(260), 1,
      sym__bitwise_xor_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(262), 1,
      sym__bitwise_and_expression,
    STATE(263), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(268), 1,
      sym__relational_expression,
    STATE(269), 1,
      sym__wrapped_relational_expression,
    STATE(270), 1,
      sym__shift_expression,
    STATE(271), 1,
      sym__wrapped_shift_expression,
    STATE(273), 1,
      sym__additive_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__multiplicative_expression,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(382), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(121), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(127), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(434), 2,
      sym__operand,
      sym_string,
    ACTIONS(125), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(282), 10,
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
  [3555] = 33,
    ACTIONS(189), 1,
      sym_unary_minus_operator,
    ACTIONS(193), 1,
      sym_relocation_type,
    ACTIONS(199), 1,
      aux_sym_decimal_token1,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(209), 1,
      aux_sym_symbol_token1,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(297), 1,
      sym__equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__wrapped_equality_expression,
    STATE(314), 1,
      sym__relational_expression,
    STATE(315), 1,
      sym__wrapped_relational_expression,
    STATE(316), 1,
      sym__shift_expression,
    STATE(317), 1,
      sym__additive_expression,
    STATE(318), 1,
      sym__wrapped_additive_expression,
    STATE(319), 1,
      sym__multiplicative_expression,
    STATE(328), 1,
      sym__wrapped_logical_and_expression,
    STATE(339), 1,
      sym__wrapped_shift_expression,
    STATE(460), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(191), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(197), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(195), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(320), 10,
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
  [3671] = 33,
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
    STATE(111), 1,
      sym__assignment_expression,
    STATE(112), 1,
      sym__logical_or_expression,
    STATE(113), 1,
      sym__wrapped_logical_or_expression,
    STATE(114), 1,
      sym__logical_and_expression,
    STATE(115), 1,
      sym__wrapped_logical_and_expression,
    STATE(116), 1,
      sym__bitwise_or_expression,
    STATE(117), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(118), 1,
      sym__bitwise_xor_expression,
    STATE(119), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(120), 1,
      sym__bitwise_and_expression,
    STATE(121), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(122), 1,
      sym__equality_expression,
    STATE(123), 1,
      sym__wrapped_equality_expression,
    STATE(124), 1,
      sym__relational_expression,
    STATE(125), 1,
      sym__wrapped_relational_expression,
    STATE(127), 1,
      sym__wrapped_shift_expression,
    STATE(128), 1,
      sym__additive_expression,
    STATE(129), 1,
      sym__wrapped_additive_expression,
    STATE(130), 1,
      sym__multiplicative_expression,
    STATE(148), 1,
      sym__shift_expression,
    STATE(343), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
    STATE(131), 10,
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
  [3787] = 33,
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
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    STATE(193), 1,
      sym__wrapped_assignment_expression,
    STATE(194), 1,
      sym__assignment_expression,
    STATE(195), 1,
      sym__logical_or_expression,
    STATE(196), 1,
      sym__wrapped_logical_or_expression,
    STATE(197), 1,
      sym__logical_and_expression,
    STATE(198), 1,
      sym__wrapped_logical_and_expression,
    STATE(215), 1,
      sym__bitwise_or_expression,
    STATE(216), 1,
      sym__wrapped_bitwise_or_expression,
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
    STATE(230), 1,
      sym__multiplicative_expression,
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
  [3903] = 33,
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
    STATE(111), 1,
      sym__assignment_expression,
    STATE(112), 1,
      sym__logical_or_expression,
    STATE(113), 1,
      sym__wrapped_logical_or_expression,
    STATE(114), 1,
      sym__logical_and_expression,
    STATE(115), 1,
      sym__wrapped_logical_and_expression,
    STATE(116), 1,
      sym__bitwise_or_expression,
    STATE(117), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(118), 1,
      sym__bitwise_xor_expression,
    STATE(119), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(120), 1,
      sym__bitwise_and_expression,
    STATE(121), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(122), 1,
      sym__equality_expression,
    STATE(123), 1,
      sym__wrapped_equality_expression,
    STATE(124), 1,
      sym__relational_expression,
    STATE(125), 1,
      sym__wrapped_relational_expression,
    STATE(127), 1,
      sym__wrapped_shift_expression,
    STATE(128), 1,
      sym__additive_expression,
    STATE(129), 1,
      sym__wrapped_additive_expression,
    STATE(130), 1,
      sym__multiplicative_expression,
    STATE(148), 1,
      sym__shift_expression,
    STATE(342), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
    STATE(131), 10,
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
  [4019] = 33,
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
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    STATE(195), 1,
      sym__logical_or_expression,
    STATE(197), 1,
      sym__logical_and_expression,
    STATE(198), 1,
      sym__wrapped_logical_and_expression,
    STATE(215), 1,
      sym__bitwise_or_expression,
    STATE(216), 1,
      sym__wrapped_bitwise_or_expression,
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
    STATE(230), 1,
      sym__multiplicative_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(348), 1,
      sym__wrapped_logical_or_expression,
    STATE(457), 1,
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
  [4135] = 33,
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
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    STATE(197), 1,
      sym__logical_and_expression,
    STATE(202), 1,
      sym__wrapped_logical_and_expression,
    STATE(215), 1,
      sym__bitwise_or_expression,
    STATE(216), 1,
      sym__wrapped_bitwise_or_expression,
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
    STATE(230), 1,
      sym__multiplicative_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(457), 1,
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
  [4251] = 33,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym_unary_minus_operator,
    ACTIONS(123), 1,
      sym_relocation_type,
    ACTIONS(129), 1,
      aux_sym_decimal_token1,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(241), 1,
      sym__equality_expression,
    STATE(243), 1,
      sym__logical_or_expression,
    STATE(245), 1,
      sym__logical_and_expression,
    STATE(246), 1,
      sym__wrapped_logical_and_expression,
    STATE(258), 1,
      sym__bitwise_or_expression,
    STATE(259), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(260), 1,
      sym__bitwise_xor_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(262), 1,
      sym__bitwise_and_expression,
    STATE(263), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(268), 1,
      sym__relational_expression,
    STATE(269), 1,
      sym__wrapped_relational_expression,
    STATE(270), 1,
      sym__shift_expression,
    STATE(271), 1,
      sym__wrapped_shift_expression,
    STATE(273), 1,
      sym__additive_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__multiplicative_expression,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(372), 1,
      sym__wrapped_logical_or_expression,
    STATE(458), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(121), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(127), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(125), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(282), 10,
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
  [4367] = 33,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym_unary_minus_operator,
    ACTIONS(123), 1,
      sym_relocation_type,
    ACTIONS(129), 1,
      aux_sym_decimal_token1,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(241), 1,
      sym__equality_expression,
    STATE(245), 1,
      sym__logical_and_expression,
    STATE(251), 1,
      sym__wrapped_logical_and_expression,
    STATE(258), 1,
      sym__bitwise_or_expression,
    STATE(259), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(260), 1,
      sym__bitwise_xor_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(262), 1,
      sym__bitwise_and_expression,
    STATE(263), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(268), 1,
      sym__relational_expression,
    STATE(269), 1,
      sym__wrapped_relational_expression,
    STATE(270), 1,
      sym__shift_expression,
    STATE(271), 1,
      sym__wrapped_shift_expression,
    STATE(273), 1,
      sym__additive_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__multiplicative_expression,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(458), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(121), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(127), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(125), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(282), 10,
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
  [4483] = 33,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym_unary_minus_operator,
    ACTIONS(123), 1,
      sym_relocation_type,
    ACTIONS(129), 1,
      aux_sym_decimal_token1,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(241), 1,
      sym__equality_expression,
    STATE(252), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(258), 1,
      sym__bitwise_or_expression,
    STATE(260), 1,
      sym__bitwise_xor_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(262), 1,
      sym__bitwise_and_expression,
    STATE(263), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(268), 1,
      sym__relational_expression,
    STATE(269), 1,
      sym__wrapped_relational_expression,
    STATE(270), 1,
      sym__shift_expression,
    STATE(271), 1,
      sym__wrapped_shift_expression,
    STATE(273), 1,
      sym__additive_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__multiplicative_expression,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(458), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(121), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(127), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(125), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(282), 10,
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
  [4599] = 33,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym_unary_minus_operator,
    ACTIONS(123), 1,
      sym_relocation_type,
    ACTIONS(129), 1,
      aux_sym_decimal_token1,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(241), 1,
      sym__equality_expression,
    STATE(253), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(260), 1,
      sym__bitwise_xor_expression,
    STATE(262), 1,
      sym__bitwise_and_expression,
    STATE(263), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(268), 1,
      sym__relational_expression,
    STATE(269), 1,
      sym__wrapped_relational_expression,
    STATE(270), 1,
      sym__shift_expression,
    STATE(271), 1,
      sym__wrapped_shift_expression,
    STATE(273), 1,
      sym__additive_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__multiplicative_expression,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(458), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(121), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(127), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(125), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(282), 10,
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
  [4715] = 33,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym_unary_minus_operator,
    ACTIONS(123), 1,
      sym_relocation_type,
    ACTIONS(129), 1,
      aux_sym_decimal_token1,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(241), 1,
      sym__equality_expression,
    STATE(254), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(262), 1,
      sym__bitwise_and_expression,
    STATE(268), 1,
      sym__relational_expression,
    STATE(269), 1,
      sym__wrapped_relational_expression,
    STATE(270), 1,
      sym__shift_expression,
    STATE(271), 1,
      sym__wrapped_shift_expression,
    STATE(273), 1,
      sym__additive_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__multiplicative_expression,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(458), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(121), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(127), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(125), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(282), 10,
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
  [4831] = 33,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym_unary_minus_operator,
    ACTIONS(123), 1,
      sym_relocation_type,
    ACTIONS(129), 1,
      aux_sym_decimal_token1,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(241), 1,
      sym__equality_expression,
    STATE(255), 1,
      sym__wrapped_equality_expression,
    STATE(268), 1,
      sym__relational_expression,
    STATE(269), 1,
      sym__wrapped_relational_expression,
    STATE(270), 1,
      sym__shift_expression,
    STATE(271), 1,
      sym__wrapped_shift_expression,
    STATE(273), 1,
      sym__additive_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__multiplicative_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(458), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(121), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(127), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(125), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(282), 10,
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
  [4947] = 33,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym_unary_minus_operator,
    ACTIONS(123), 1,
      sym_relocation_type,
    ACTIONS(129), 1,
      aux_sym_decimal_token1,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(256), 1,
      sym__wrapped_relational_expression,
    STATE(268), 1,
      sym__relational_expression,
    STATE(270), 1,
      sym__shift_expression,
    STATE(271), 1,
      sym__wrapped_shift_expression,
    STATE(273), 1,
      sym__additive_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__multiplicative_expression,
    STATE(297), 1,
      sym__equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__wrapped_equality_expression,
    STATE(458), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(121), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(127), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(125), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(282), 10,
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
  [5063] = 33,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym_unary_minus_operator,
    ACTIONS(123), 1,
      sym_relocation_type,
    ACTIONS(129), 1,
      aux_sym_decimal_token1,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(257), 1,
      sym__wrapped_shift_expression,
    STATE(270), 1,
      sym__shift_expression,
    STATE(273), 1,
      sym__additive_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__multiplicative_expression,
    STATE(297), 1,
      sym__equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__wrapped_equality_expression,
    STATE(314), 1,
      sym__relational_expression,
    STATE(315), 1,
      sym__wrapped_relational_expression,
    STATE(458), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(121), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(127), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(125), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(282), 10,
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
  [5179] = 33,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym_unary_minus_operator,
    ACTIONS(123), 1,
      sym_relocation_type,
    ACTIONS(129), 1,
      aux_sym_decimal_token1,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(266), 1,
      sym__wrapped_additive_expression,
    STATE(273), 1,
      sym__additive_expression,
    STATE(275), 1,
      sym__multiplicative_expression,
    STATE(297), 1,
      sym__equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__wrapped_equality_expression,
    STATE(314), 1,
      sym__relational_expression,
    STATE(315), 1,
      sym__wrapped_relational_expression,
    STATE(316), 1,
      sym__shift_expression,
    STATE(339), 1,
      sym__wrapped_shift_expression,
    STATE(458), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(121), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(127), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(125), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(282), 10,
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
  [5295] = 33,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym_unary_minus_operator,
    ACTIONS(123), 1,
      sym_relocation_type,
    ACTIONS(129), 1,
      aux_sym_decimal_token1,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(275), 1,
      sym__multiplicative_expression,
    STATE(297), 1,
      sym__equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__wrapped_equality_expression,
    STATE(314), 1,
      sym__relational_expression,
    STATE(315), 1,
      sym__wrapped_relational_expression,
    STATE(316), 1,
      sym__shift_expression,
    STATE(317), 1,
      sym__additive_expression,
    STATE(318), 1,
      sym__wrapped_additive_expression,
    STATE(339), 1,
      sym__wrapped_shift_expression,
    STATE(458), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(121), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(215), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(213), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(276), 10,
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
  [5411] = 34,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym_unary_minus_operator,
    ACTIONS(123), 1,
      sym_relocation_type,
    ACTIONS(129), 1,
      aux_sym_decimal_token1,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(297), 1,
      sym__equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__wrapped_equality_expression,
    STATE(314), 1,
      sym__relational_expression,
    STATE(315), 1,
      sym__wrapped_relational_expression,
    STATE(316), 1,
      sym__shift_expression,
    STATE(317), 1,
      sym__additive_expression,
    STATE(318), 1,
      sym__wrapped_additive_expression,
    STATE(319), 1,
      sym__multiplicative_expression,
    STATE(320), 1,
      sym__wrapped_multiplicative_expression,
    STATE(339), 1,
      sym__wrapped_shift_expression,
    STATE(458), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(121), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(219), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(217), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(277), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5529] = 33,
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
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    STATE(203), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(215), 1,
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
    STATE(230), 1,
      sym__multiplicative_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(457), 1,
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
  [5645] = 33,
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
    STATE(112), 1,
      sym__logical_or_expression,
    STATE(114), 1,
      sym__logical_and_expression,
    STATE(115), 1,
      sym__wrapped_logical_and_expression,
    STATE(116), 1,
      sym__bitwise_or_expression,
    STATE(117), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(118), 1,
      sym__bitwise_xor_expression,
    STATE(119), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(120), 1,
      sym__bitwise_and_expression,
    STATE(121), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(122), 1,
      sym__equality_expression,
    STATE(123), 1,
      sym__wrapped_equality_expression,
    STATE(124), 1,
      sym__relational_expression,
    STATE(125), 1,
      sym__wrapped_relational_expression,
    STATE(127), 1,
      sym__wrapped_shift_expression,
    STATE(128), 1,
      sym__additive_expression,
    STATE(129), 1,
      sym__wrapped_additive_expression,
    STATE(130), 1,
      sym__multiplicative_expression,
    STATE(148), 1,
      sym__shift_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(340), 1,
      sym__wrapped_logical_or_expression,
    STATE(459), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
    STATE(131), 10,
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
  [5761] = 33,
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
    STATE(114), 1,
      sym__logical_and_expression,
    STATE(116), 1,
      sym__bitwise_or_expression,
    STATE(117), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(118), 1,
      sym__bitwise_xor_expression,
    STATE(119), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(120), 1,
      sym__bitwise_and_expression,
    STATE(121), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(122), 1,
      sym__equality_expression,
    STATE(123), 1,
      sym__wrapped_equality_expression,
    STATE(124), 1,
      sym__relational_expression,
    STATE(125), 1,
      sym__wrapped_relational_expression,
    STATE(127), 1,
      sym__wrapped_shift_expression,
    STATE(128), 1,
      sym__additive_expression,
    STATE(129), 1,
      sym__wrapped_additive_expression,
    STATE(130), 1,
      sym__multiplicative_expression,
    STATE(136), 1,
      sym__wrapped_logical_and_expression,
    STATE(148), 1,
      sym__shift_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(459), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
    STATE(131), 10,
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
  [5877] = 33,
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
    STATE(116), 1,
      sym__bitwise_or_expression,
    STATE(118), 1,
      sym__bitwise_xor_expression,
    STATE(119), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(120), 1,
      sym__bitwise_and_expression,
    STATE(121), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(122), 1,
      sym__equality_expression,
    STATE(123), 1,
      sym__wrapped_equality_expression,
    STATE(124), 1,
      sym__relational_expression,
    STATE(125), 1,
      sym__wrapped_relational_expression,
    STATE(127), 1,
      sym__wrapped_shift_expression,
    STATE(128), 1,
      sym__additive_expression,
    STATE(129), 1,
      sym__wrapped_additive_expression,
    STATE(130), 1,
      sym__multiplicative_expression,
    STATE(137), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(148), 1,
      sym__shift_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(459), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
    STATE(131), 10,
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
  [5993] = 33,
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
    STATE(118), 1,
      sym__bitwise_xor_expression,
    STATE(120), 1,
      sym__bitwise_and_expression,
    STATE(121), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(122), 1,
      sym__equality_expression,
    STATE(123), 1,
      sym__wrapped_equality_expression,
    STATE(124), 1,
      sym__relational_expression,
    STATE(125), 1,
      sym__wrapped_relational_expression,
    STATE(127), 1,
      sym__wrapped_shift_expression,
    STATE(128), 1,
      sym__additive_expression,
    STATE(129), 1,
      sym__wrapped_additive_expression,
    STATE(130), 1,
      sym__multiplicative_expression,
    STATE(138), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(148), 1,
      sym__shift_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(459), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
    STATE(131), 10,
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
  [6109] = 33,
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
    STATE(120), 1,
      sym__bitwise_and_expression,
    STATE(122), 1,
      sym__equality_expression,
    STATE(123), 1,
      sym__wrapped_equality_expression,
    STATE(124), 1,
      sym__relational_expression,
    STATE(125), 1,
      sym__wrapped_relational_expression,
    STATE(127), 1,
      sym__wrapped_shift_expression,
    STATE(128), 1,
      sym__additive_expression,
    STATE(129), 1,
      sym__wrapped_additive_expression,
    STATE(130), 1,
      sym__multiplicative_expression,
    STATE(139), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(148), 1,
      sym__shift_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(459), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
    STATE(131), 10,
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
  [6225] = 33,
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
    STATE(122), 1,
      sym__equality_expression,
    STATE(124), 1,
      sym__relational_expression,
    STATE(125), 1,
      sym__wrapped_relational_expression,
    STATE(127), 1,
      sym__wrapped_shift_expression,
    STATE(128), 1,
      sym__additive_expression,
    STATE(129), 1,
      sym__wrapped_additive_expression,
    STATE(130), 1,
      sym__multiplicative_expression,
    STATE(140), 1,
      sym__wrapped_equality_expression,
    STATE(148), 1,
      sym__shift_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(459), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
    STATE(131), 10,
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
  [6341] = 33,
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
    STATE(106), 1,
      sym__wrapped_relational_expression,
    STATE(124), 1,
      sym__relational_expression,
    STATE(127), 1,
      sym__wrapped_shift_expression,
    STATE(128), 1,
      sym__additive_expression,
    STATE(129), 1,
      sym__wrapped_additive_expression,
    STATE(130), 1,
      sym__multiplicative_expression,
    STATE(148), 1,
      sym__shift_expression,
    STATE(297), 1,
      sym__equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__wrapped_equality_expression,
    STATE(459), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
    STATE(131), 10,
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
  [6457] = 33,
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
    STATE(128), 1,
      sym__additive_expression,
    STATE(129), 1,
      sym__wrapped_additive_expression,
    STATE(130), 1,
      sym__multiplicative_expression,
    STATE(141), 1,
      sym__wrapped_shift_expression,
    STATE(148), 1,
      sym__shift_expression,
    STATE(297), 1,
      sym__equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__wrapped_equality_expression,
    STATE(314), 1,
      sym__relational_expression,
    STATE(315), 1,
      sym__wrapped_relational_expression,
    STATE(459), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
    STATE(131), 10,
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
  [6573] = 33,
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
    STATE(128), 1,
      sym__additive_expression,
    STATE(130), 1,
      sym__multiplicative_expression,
    STATE(142), 1,
      sym__wrapped_additive_expression,
    STATE(297), 1,
      sym__equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__wrapped_equality_expression,
    STATE(314), 1,
      sym__relational_expression,
    STATE(315), 1,
      sym__wrapped_relational_expression,
    STATE(316), 1,
      sym__shift_expression,
    STATE(339), 1,
      sym__wrapped_shift_expression,
    STATE(459), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
    STATE(131), 10,
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
  [6689] = 33,
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
    STATE(130), 1,
      sym__multiplicative_expression,
    STATE(297), 1,
      sym__equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__wrapped_equality_expression,
    STATE(314), 1,
      sym__relational_expression,
    STATE(315), 1,
      sym__wrapped_relational_expression,
    STATE(316), 1,
      sym__shift_expression,
    STATE(317), 1,
      sym__additive_expression,
    STATE(318), 1,
      sym__wrapped_additive_expression,
    STATE(339), 1,
      sym__wrapped_shift_expression,
    STATE(459), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(145), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(223), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(221), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(143), 10,
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
  [6805] = 34,
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
    STATE(297), 1,
      sym__equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__wrapped_equality_expression,
    STATE(314), 1,
      sym__relational_expression,
    STATE(315), 1,
      sym__wrapped_relational_expression,
    STATE(316), 1,
      sym__shift_expression,
    STATE(317), 1,
      sym__additive_expression,
    STATE(318), 1,
      sym__wrapped_additive_expression,
    STATE(319), 1,
      sym__multiplicative_expression,
    STATE(320), 1,
      sym__wrapped_multiplicative_expression,
    STATE(339), 1,
      sym__wrapped_shift_expression,
    STATE(459), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(145), 2,
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
    STATE(144), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6923] = 33,
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
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    STATE(204), 1,
      sym__wrapped_bitwise_xor_expression,
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
    STATE(230), 1,
      sym__multiplicative_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(457), 1,
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
  [7039] = 33,
    ACTIONS(189), 1,
      sym_unary_minus_operator,
    ACTIONS(193), 1,
      sym_relocation_type,
    ACTIONS(199), 1,
      aux_sym_decimal_token1,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(209), 1,
      aux_sym_symbol_token1,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(297), 1,
      sym__equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__wrapped_equality_expression,
    STATE(314), 1,
      sym__relational_expression,
    STATE(315), 1,
      sym__wrapped_relational_expression,
    STATE(316), 1,
      sym__shift_expression,
    STATE(317), 1,
      sym__additive_expression,
    STATE(318), 1,
      sym__wrapped_additive_expression,
    STATE(319), 1,
      sym__multiplicative_expression,
    STATE(339), 1,
      sym__wrapped_shift_expression,
    STATE(394), 1,
      sym__wrapped_logical_or_expression,
    STATE(460), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(191), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(197), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(195), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(320), 10,
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
  [7155] = 33,
    ACTIONS(189), 1,
      sym_unary_minus_operator,
    ACTIONS(193), 1,
      sym_relocation_type,
    ACTIONS(199), 1,
      aux_sym_decimal_token1,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(209), 1,
      aux_sym_symbol_token1,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(297), 1,
      sym__equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__wrapped_equality_expression,
    STATE(314), 1,
      sym__relational_expression,
    STATE(315), 1,
      sym__wrapped_relational_expression,
    STATE(316), 1,
      sym__shift_expression,
    STATE(317), 1,
      sym__additive_expression,
    STATE(318), 1,
      sym__wrapped_additive_expression,
    STATE(319), 1,
      sym__multiplicative_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(339), 1,
      sym__wrapped_shift_expression,
    STATE(460), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(191), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(197), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(195), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(320), 10,
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
  [7271] = 33,
    ACTIONS(189), 1,
      sym_unary_minus_operator,
    ACTIONS(193), 1,
      sym_relocation_type,
    ACTIONS(199), 1,
      aux_sym_decimal_token1,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(209), 1,
      aux_sym_symbol_token1,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(297), 1,
      sym__equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__wrapped_equality_expression,
    STATE(314), 1,
      sym__relational_expression,
    STATE(315), 1,
      sym__wrapped_relational_expression,
    STATE(316), 1,
      sym__shift_expression,
    STATE(317), 1,
      sym__additive_expression,
    STATE(318), 1,
      sym__wrapped_additive_expression,
    STATE(319), 1,
      sym__multiplicative_expression,
    STATE(331), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(339), 1,
      sym__wrapped_shift_expression,
    STATE(460), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(191), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(197), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(195), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(320), 10,
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
  [7387] = 33,
    ACTIONS(189), 1,
      sym_unary_minus_operator,
    ACTIONS(193), 1,
      sym_relocation_type,
    ACTIONS(199), 1,
      aux_sym_decimal_token1,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(209), 1,
      aux_sym_symbol_token1,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(297), 1,
      sym__equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(313), 1,
      sym__wrapped_equality_expression,
    STATE(314), 1,
      sym__relational_expression,
    STATE(315), 1,
      sym__wrapped_relational_expression,
    STATE(316), 1,
      sym__shift_expression,
    STATE(317), 1,
      sym__additive_expression,
    STATE(318), 1,
      sym__wrapped_additive_expression,
    STATE(319), 1,
      sym__multiplicative_expression,
    STATE(332), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(339), 1,
      sym__wrapped_shift_expression,
    STATE(460), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(191), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(197), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(195), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(320), 10,
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
  [7503] = 33,
    ACTIONS(189), 1,
      sym_unary_minus_operator,
    ACTIONS(193), 1,
      sym_relocation_type,
    ACTIONS(199), 1,
      aux_sym_decimal_token1,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(209), 1,
      aux_sym_symbol_token1,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(297), 1,
      sym__equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(314), 1,
      sym__relational_expression,
    STATE(315), 1,
      sym__wrapped_relational_expression,
    STATE(316), 1,
      sym__shift_expression,
    STATE(317), 1,
      sym__additive_expression,
    STATE(318), 1,
      sym__wrapped_additive_expression,
    STATE(319), 1,
      sym__multiplicative_expression,
    STATE(333), 1,
      sym__wrapped_equality_expression,
    STATE(339), 1,
      sym__wrapped_shift_expression,
    STATE(460), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(191), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(197), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(195), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(320), 10,
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
  [7619] = 33,
    ACTIONS(189), 1,
      sym_unary_minus_operator,
    ACTIONS(193), 1,
      sym_relocation_type,
    ACTIONS(199), 1,
      aux_sym_decimal_token1,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(209), 1,
      aux_sym_symbol_token1,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(297), 1,
      sym__equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__wrapped_equality_expression,
    STATE(314), 1,
      sym__relational_expression,
    STATE(316), 1,
      sym__shift_expression,
    STATE(317), 1,
      sym__additive_expression,
    STATE(318), 1,
      sym__wrapped_additive_expression,
    STATE(319), 1,
      sym__multiplicative_expression,
    STATE(334), 1,
      sym__wrapped_relational_expression,
    STATE(339), 1,
      sym__wrapped_shift_expression,
    STATE(460), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(191), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(197), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(195), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(320), 10,
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
  [7735] = 33,
    ACTIONS(189), 1,
      sym_unary_minus_operator,
    ACTIONS(193), 1,
      sym_relocation_type,
    ACTIONS(199), 1,
      aux_sym_decimal_token1,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(209), 1,
      aux_sym_symbol_token1,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(297), 1,
      sym__equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__wrapped_equality_expression,
    STATE(314), 1,
      sym__relational_expression,
    STATE(315), 1,
      sym__wrapped_relational_expression,
    STATE(316), 1,
      sym__shift_expression,
    STATE(317), 1,
      sym__additive_expression,
    STATE(318), 1,
      sym__wrapped_additive_expression,
    STATE(319), 1,
      sym__multiplicative_expression,
    STATE(335), 1,
      sym__wrapped_shift_expression,
    STATE(460), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(191), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(197), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(195), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(320), 10,
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
  [7851] = 33,
    ACTIONS(189), 1,
      sym_unary_minus_operator,
    ACTIONS(193), 1,
      sym_relocation_type,
    ACTIONS(199), 1,
      aux_sym_decimal_token1,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(209), 1,
      aux_sym_symbol_token1,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(297), 1,
      sym__equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__wrapped_equality_expression,
    STATE(314), 1,
      sym__relational_expression,
    STATE(315), 1,
      sym__wrapped_relational_expression,
    STATE(316), 1,
      sym__shift_expression,
    STATE(317), 1,
      sym__additive_expression,
    STATE(319), 1,
      sym__multiplicative_expression,
    STATE(336), 1,
      sym__wrapped_additive_expression,
    STATE(339), 1,
      sym__wrapped_shift_expression,
    STATE(460), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(191), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(197), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(195), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(320), 10,
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
  [7967] = 33,
    ACTIONS(189), 1,
      sym_unary_minus_operator,
    ACTIONS(193), 1,
      sym_relocation_type,
    ACTIONS(199), 1,
      aux_sym_decimal_token1,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(209), 1,
      aux_sym_symbol_token1,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(297), 1,
      sym__equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__wrapped_equality_expression,
    STATE(314), 1,
      sym__relational_expression,
    STATE(315), 1,
      sym__wrapped_relational_expression,
    STATE(316), 1,
      sym__shift_expression,
    STATE(317), 1,
      sym__additive_expression,
    STATE(318), 1,
      sym__wrapped_additive_expression,
    STATE(319), 1,
      sym__multiplicative_expression,
    STATE(339), 1,
      sym__wrapped_shift_expression,
    STATE(460), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(191), 2,
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
    STATE(337), 10,
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
  [8083] = 33,
    ACTIONS(189), 1,
      sym_unary_minus_operator,
    ACTIONS(193), 1,
      sym_relocation_type,
    ACTIONS(199), 1,
      aux_sym_decimal_token1,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(209), 1,
      aux_sym_symbol_token1,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(297), 1,
      sym__equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__wrapped_equality_expression,
    STATE(314), 1,
      sym__relational_expression,
    STATE(315), 1,
      sym__wrapped_relational_expression,
    STATE(316), 1,
      sym__shift_expression,
    STATE(317), 1,
      sym__additive_expression,
    STATE(318), 1,
      sym__wrapped_additive_expression,
    STATE(319), 1,
      sym__multiplicative_expression,
    STATE(339), 1,
      sym__wrapped_shift_expression,
    STATE(438), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(191), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(197), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(195), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(320), 10,
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
  [8199] = 33,
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
    STATE(161), 1,
      sym__bitwise_xor_expression,
    STATE(162), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(163), 1,
      sym__bitwise_and_expression,
    STATE(164), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(165), 1,
      sym__equality_expression,
    STATE(166), 1,
      sym__wrapped_equality_expression,
    STATE(167), 1,
      sym__relational_expression,
    STATE(168), 1,
      sym__wrapped_relational_expression,
    STATE(169), 1,
      sym__shift_expression,
    STATE(170), 1,
      sym__wrapped_shift_expression,
    STATE(171), 1,
      sym__additive_expression,
    STATE(172), 1,
      sym__wrapped_additive_expression,
    STATE(173), 1,
      sym__multiplicative_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(344), 1,
      sym__wrapped_logical_or_expression,
    STATE(461), 1,
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
    STATE(174), 10,
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
  [8315] = 33,
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
    STATE(149), 1,
      sym__wrapped_logical_and_expression,
    STATE(157), 1,
      sym__logical_and_expression,
    STATE(159), 1,
      sym__bitwise_or_expression,
    STATE(160), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(161), 1,
      sym__bitwise_xor_expression,
    STATE(162), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(163), 1,
      sym__bitwise_and_expression,
    STATE(164), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(165), 1,
      sym__equality_expression,
    STATE(166), 1,
      sym__wrapped_equality_expression,
    STATE(167), 1,
      sym__relational_expression,
    STATE(168), 1,
      sym__wrapped_relational_expression,
    STATE(169), 1,
      sym__shift_expression,
    STATE(170), 1,
      sym__wrapped_shift_expression,
    STATE(171), 1,
      sym__additive_expression,
    STATE(172), 1,
      sym__wrapped_additive_expression,
    STATE(173), 1,
      sym__multiplicative_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(461), 1,
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
    STATE(174), 10,
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
  [8431] = 33,
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
    STATE(161), 1,
      sym__bitwise_xor_expression,
    STATE(162), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(163), 1,
      sym__bitwise_and_expression,
    STATE(164), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(165), 1,
      sym__equality_expression,
    STATE(166), 1,
      sym__wrapped_equality_expression,
    STATE(167), 1,
      sym__relational_expression,
    STATE(168), 1,
      sym__wrapped_relational_expression,
    STATE(169), 1,
      sym__shift_expression,
    STATE(170), 1,
      sym__wrapped_shift_expression,
    STATE(171), 1,
      sym__additive_expression,
    STATE(172), 1,
      sym__wrapped_additive_expression,
    STATE(173), 1,
      sym__multiplicative_expression,
    STATE(179), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(461), 1,
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
    STATE(174), 10,
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
  [8547] = 33,
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
      sym__bitwise_xor_expression,
    STATE(163), 1,
      sym__bitwise_and_expression,
    STATE(164), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(165), 1,
      sym__equality_expression,
    STATE(166), 1,
      sym__wrapped_equality_expression,
    STATE(167), 1,
      sym__relational_expression,
    STATE(168), 1,
      sym__wrapped_relational_expression,
    STATE(169), 1,
      sym__shift_expression,
    STATE(170), 1,
      sym__wrapped_shift_expression,
    STATE(171), 1,
      sym__additive_expression,
    STATE(172), 1,
      sym__wrapped_additive_expression,
    STATE(173), 1,
      sym__multiplicative_expression,
    STATE(180), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(461), 1,
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
    STATE(174), 10,
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
  [8663] = 33,
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
    STATE(163), 1,
      sym__bitwise_and_expression,
    STATE(165), 1,
      sym__equality_expression,
    STATE(166), 1,
      sym__wrapped_equality_expression,
    STATE(167), 1,
      sym__relational_expression,
    STATE(168), 1,
      sym__wrapped_relational_expression,
    STATE(169), 1,
      sym__shift_expression,
    STATE(170), 1,
      sym__wrapped_shift_expression,
    STATE(171), 1,
      sym__additive_expression,
    STATE(172), 1,
      sym__wrapped_additive_expression,
    STATE(173), 1,
      sym__multiplicative_expression,
    STATE(181), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(461), 1,
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
    STATE(174), 10,
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
  [8779] = 33,
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
    STATE(165), 1,
      sym__equality_expression,
    STATE(167), 1,
      sym__relational_expression,
    STATE(168), 1,
      sym__wrapped_relational_expression,
    STATE(169), 1,
      sym__shift_expression,
    STATE(170), 1,
      sym__wrapped_shift_expression,
    STATE(171), 1,
      sym__additive_expression,
    STATE(172), 1,
      sym__wrapped_additive_expression,
    STATE(173), 1,
      sym__multiplicative_expression,
    STATE(182), 1,
      sym__wrapped_equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(461), 1,
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
    STATE(174), 10,
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
  [8895] = 33,
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
      sym__relational_expression,
    STATE(169), 1,
      sym__shift_expression,
    STATE(170), 1,
      sym__wrapped_shift_expression,
    STATE(171), 1,
      sym__additive_expression,
    STATE(172), 1,
      sym__wrapped_additive_expression,
    STATE(173), 1,
      sym__multiplicative_expression,
    STATE(183), 1,
      sym__wrapped_relational_expression,
    STATE(297), 1,
      sym__equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__wrapped_equality_expression,
    STATE(461), 1,
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
    STATE(174), 10,
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
  [9011] = 33,
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
    STATE(169), 1,
      sym__shift_expression,
    STATE(171), 1,
      sym__additive_expression,
    STATE(172), 1,
      sym__wrapped_additive_expression,
    STATE(173), 1,
      sym__multiplicative_expression,
    STATE(184), 1,
      sym__wrapped_shift_expression,
    STATE(297), 1,
      sym__equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__wrapped_equality_expression,
    STATE(314), 1,
      sym__relational_expression,
    STATE(315), 1,
      sym__wrapped_relational_expression,
    STATE(461), 1,
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
    STATE(174), 10,
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
  [9127] = 33,
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
      sym__additive_expression,
    STATE(173), 1,
      sym__multiplicative_expression,
    STATE(185), 1,
      sym__wrapped_additive_expression,
    STATE(297), 1,
      sym__equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__wrapped_equality_expression,
    STATE(314), 1,
      sym__relational_expression,
    STATE(315), 1,
      sym__wrapped_relational_expression,
    STATE(316), 1,
      sym__shift_expression,
    STATE(339), 1,
      sym__wrapped_shift_expression,
    STATE(461), 1,
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
    STATE(174), 10,
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
  [9243] = 33,
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
    STATE(173), 1,
      sym__multiplicative_expression,
    STATE(297), 1,
      sym__equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__wrapped_equality_expression,
    STATE(314), 1,
      sym__relational_expression,
    STATE(315), 1,
      sym__wrapped_relational_expression,
    STATE(316), 1,
      sym__shift_expression,
    STATE(317), 1,
      sym__additive_expression,
    STATE(318), 1,
      sym__wrapped_additive_expression,
    STATE(339), 1,
      sym__wrapped_shift_expression,
    STATE(461), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(35), 2,
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
    STATE(186), 10,
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
  [9359] = 34,
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
    STATE(297), 1,
      sym__equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__wrapped_equality_expression,
    STATE(314), 1,
      sym__relational_expression,
    STATE(315), 1,
      sym__wrapped_relational_expression,
    STATE(316), 1,
      sym__shift_expression,
    STATE(317), 1,
      sym__additive_expression,
    STATE(318), 1,
      sym__wrapped_additive_expression,
    STATE(319), 1,
      sym__multiplicative_expression,
    STATE(320), 1,
      sym__wrapped_multiplicative_expression,
    STATE(339), 1,
      sym__wrapped_shift_expression,
    STATE(461), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(35), 2,
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
    STATE(187), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9477] = 33,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym_unary_minus_operator,
    ACTIONS(123), 1,
      sym_relocation_type,
    ACTIONS(129), 1,
      aux_sym_decimal_token1,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(241), 1,
      sym__equality_expression,
    STATE(242), 1,
      sym__assignment_expression,
    STATE(243), 1,
      sym__logical_or_expression,
    STATE(244), 1,
      sym__wrapped_logical_or_expression,
    STATE(245), 1,
      sym__logical_and_expression,
    STATE(246), 1,
      sym__wrapped_logical_and_expression,
    STATE(258), 1,
      sym__bitwise_or_expression,
    STATE(259), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(260), 1,
      sym__bitwise_xor_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(262), 1,
      sym__bitwise_and_expression,
    STATE(263), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(264), 1,
      sym__wrapped_assignment_expression,
    STATE(268), 1,
      sym__relational_expression,
    STATE(269), 1,
      sym__wrapped_relational_expression,
    STATE(270), 1,
      sym__shift_expression,
    STATE(271), 1,
      sym__wrapped_shift_expression,
    STATE(273), 1,
      sym__additive_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__multiplicative_expression,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(121), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(127), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(125), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(282), 10,
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
  [9593] = 33,
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
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    STATE(195), 1,
      sym__logical_or_expression,
    STATE(197), 1,
      sym__logical_and_expression,
    STATE(198), 1,
      sym__wrapped_logical_and_expression,
    STATE(215), 1,
      sym__bitwise_or_expression,
    STATE(216), 1,
      sym__wrapped_bitwise_or_expression,
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
    STATE(230), 1,
      sym__multiplicative_expression,
    STATE(233), 1,
      sym__wrapped_logical_or_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(457), 1,
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
  [9709] = 33,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym_unary_minus_operator,
    ACTIONS(123), 1,
      sym_relocation_type,
    ACTIONS(129), 1,
      aux_sym_decimal_token1,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(137), 1,
      aux_sym_symbol_token1,
    STATE(241), 1,
      sym__equality_expression,
    STATE(243), 1,
      sym__logical_or_expression,
    STATE(245), 1,
      sym__logical_and_expression,
    STATE(246), 1,
      sym__wrapped_logical_and_expression,
    STATE(258), 1,
      sym__bitwise_or_expression,
    STATE(259), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(260), 1,
      sym__bitwise_xor_expression,
    STATE(261), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(262), 1,
      sym__bitwise_and_expression,
    STATE(263), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(268), 1,
      sym__relational_expression,
    STATE(269), 1,
      sym__wrapped_relational_expression,
    STATE(270), 1,
      sym__shift_expression,
    STATE(271), 1,
      sym__wrapped_shift_expression,
    STATE(273), 1,
      sym__additive_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__multiplicative_expression,
    STATE(281), 1,
      sym__wrapped_logical_or_expression,
    STATE(295), 1,
      sym__wrapped_equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(458), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(121), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(127), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(125), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(282), 10,
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
  [9825] = 33,
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
    STATE(112), 1,
      sym__logical_or_expression,
    STATE(114), 1,
      sym__logical_and_expression,
    STATE(115), 1,
      sym__wrapped_logical_and_expression,
    STATE(116), 1,
      sym__bitwise_or_expression,
    STATE(117), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(118), 1,
      sym__bitwise_xor_expression,
    STATE(119), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(120), 1,
      sym__bitwise_and_expression,
    STATE(121), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(122), 1,
      sym__equality_expression,
    STATE(123), 1,
      sym__wrapped_equality_expression,
    STATE(124), 1,
      sym__relational_expression,
    STATE(125), 1,
      sym__wrapped_relational_expression,
    STATE(126), 1,
      sym__wrapped_logical_or_expression,
    STATE(127), 1,
      sym__wrapped_shift_expression,
    STATE(128), 1,
      sym__additive_expression,
    STATE(129), 1,
      sym__wrapped_additive_expression,
    STATE(130), 1,
      sym__multiplicative_expression,
    STATE(148), 1,
      sym__shift_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(459), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
    STATE(131), 10,
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
  [9941] = 33,
    ACTIONS(189), 1,
      sym_unary_minus_operator,
    ACTIONS(193), 1,
      sym_relocation_type,
    ACTIONS(199), 1,
      aux_sym_decimal_token1,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(209), 1,
      aux_sym_symbol_token1,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(297), 1,
      sym__equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__wrapped_equality_expression,
    STATE(314), 1,
      sym__relational_expression,
    STATE(315), 1,
      sym__wrapped_relational_expression,
    STATE(316), 1,
      sym__shift_expression,
    STATE(317), 1,
      sym__additive_expression,
    STATE(318), 1,
      sym__wrapped_additive_expression,
    STATE(319), 1,
      sym__multiplicative_expression,
    STATE(329), 1,
      sym__wrapped_logical_or_expression,
    STATE(339), 1,
      sym__wrapped_shift_expression,
    STATE(460), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(191), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(197), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(195), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(320), 10,
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
  [10057] = 33,
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
      sym__wrapped_logical_or_expression,
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
    STATE(161), 1,
      sym__bitwise_xor_expression,
    STATE(162), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(163), 1,
      sym__bitwise_and_expression,
    STATE(164), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(165), 1,
      sym__equality_expression,
    STATE(166), 1,
      sym__wrapped_equality_expression,
    STATE(167), 1,
      sym__relational_expression,
    STATE(168), 1,
      sym__wrapped_relational_expression,
    STATE(169), 1,
      sym__shift_expression,
    STATE(170), 1,
      sym__wrapped_shift_expression,
    STATE(171), 1,
      sym__additive_expression,
    STATE(172), 1,
      sym__wrapped_additive_expression,
    STATE(173), 1,
      sym__multiplicative_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(461), 1,
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
    STATE(174), 10,
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
  [10173] = 33,
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
    STATE(111), 1,
      sym__assignment_expression,
    STATE(112), 1,
      sym__logical_or_expression,
    STATE(113), 1,
      sym__wrapped_logical_or_expression,
    STATE(114), 1,
      sym__logical_and_expression,
    STATE(115), 1,
      sym__wrapped_logical_and_expression,
    STATE(116), 1,
      sym__bitwise_or_expression,
    STATE(117), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(118), 1,
      sym__bitwise_xor_expression,
    STATE(119), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(120), 1,
      sym__bitwise_and_expression,
    STATE(121), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(122), 1,
      sym__equality_expression,
    STATE(123), 1,
      sym__wrapped_equality_expression,
    STATE(124), 1,
      sym__relational_expression,
    STATE(125), 1,
      sym__wrapped_relational_expression,
    STATE(127), 1,
      sym__wrapped_shift_expression,
    STATE(128), 1,
      sym__additive_expression,
    STATE(129), 1,
      sym__wrapped_additive_expression,
    STATE(130), 1,
      sym__multiplicative_expression,
    STATE(132), 1,
      sym__wrapped_assignment_expression,
    STATE(148), 1,
      sym__shift_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
    STATE(131), 10,
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
  [10289] = 33,
    ACTIONS(189), 1,
      sym_unary_minus_operator,
    ACTIONS(193), 1,
      sym_relocation_type,
    ACTIONS(199), 1,
      aux_sym_decimal_token1,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(209), 1,
      aux_sym_symbol_token1,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(297), 1,
      sym__equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__wrapped_equality_expression,
    STATE(314), 1,
      sym__relational_expression,
    STATE(315), 1,
      sym__wrapped_relational_expression,
    STATE(316), 1,
      sym__shift_expression,
    STATE(317), 1,
      sym__additive_expression,
    STATE(318), 1,
      sym__wrapped_additive_expression,
    STATE(319), 1,
      sym__multiplicative_expression,
    STATE(321), 1,
      sym__wrapped_assignment_expression,
    STATE(339), 1,
      sym__wrapped_shift_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(191), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(197), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(195), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(320), 10,
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
  [10405] = 33,
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
    STATE(161), 1,
      sym__bitwise_xor_expression,
    STATE(162), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(163), 1,
      sym__bitwise_and_expression,
    STATE(164), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(165), 1,
      sym__equality_expression,
    STATE(166), 1,
      sym__wrapped_equality_expression,
    STATE(167), 1,
      sym__relational_expression,
    STATE(168), 1,
      sym__wrapped_relational_expression,
    STATE(169), 1,
      sym__shift_expression,
    STATE(170), 1,
      sym__wrapped_shift_expression,
    STATE(171), 1,
      sym__additive_expression,
    STATE(172), 1,
      sym__wrapped_additive_expression,
    STATE(173), 1,
      sym__multiplicative_expression,
    STATE(175), 1,
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
    STATE(174), 10,
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
  [10521] = 33,
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
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    STATE(205), 1,
      sym__wrapped_bitwise_and_expression,
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
    STATE(230), 1,
      sym__multiplicative_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(457), 1,
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
  [10637] = 33,
    ACTIONS(189), 1,
      sym_unary_minus_operator,
    ACTIONS(193), 1,
      sym_relocation_type,
    ACTIONS(199), 1,
      aux_sym_decimal_token1,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(209), 1,
      aux_sym_symbol_token1,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(297), 1,
      sym__equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__wrapped_equality_expression,
    STATE(314), 1,
      sym__relational_expression,
    STATE(315), 1,
      sym__wrapped_relational_expression,
    STATE(316), 1,
      sym__shift_expression,
    STATE(317), 1,
      sym__additive_expression,
    STATE(318), 1,
      sym__wrapped_additive_expression,
    STATE(319), 1,
      sym__multiplicative_expression,
    STATE(339), 1,
      sym__wrapped_shift_expression,
    STATE(431), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(191), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(197), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(195), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(320), 10,
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
  [10753] = 33,
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
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    STATE(206), 1,
      sym__wrapped_equality_expression,
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
    STATE(230), 1,
      sym__multiplicative_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(457), 1,
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
  [10869] = 33,
    ACTIONS(189), 1,
      sym_unary_minus_operator,
    ACTIONS(193), 1,
      sym_relocation_type,
    ACTIONS(199), 1,
      aux_sym_decimal_token1,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(209), 1,
      aux_sym_symbol_token1,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(297), 1,
      sym__equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__wrapped_equality_expression,
    STATE(314), 1,
      sym__relational_expression,
    STATE(315), 1,
      sym__wrapped_relational_expression,
    STATE(316), 1,
      sym__shift_expression,
    STATE(317), 1,
      sym__additive_expression,
    STATE(318), 1,
      sym__wrapped_additive_expression,
    STATE(319), 1,
      sym__multiplicative_expression,
    STATE(339), 1,
      sym__wrapped_shift_expression,
    STATE(436), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(191), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(197), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(195), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(320), 10,
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
  [10985] = 33,
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
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    STATE(207), 1,
      sym__wrapped_relational_expression,
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
    STATE(230), 1,
      sym__multiplicative_expression,
    STATE(297), 1,
      sym__equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__wrapped_equality_expression,
    STATE(457), 1,
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
  [11101] = 33,
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
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    STATE(208), 1,
      sym__wrapped_shift_expression,
    STATE(225), 1,
      sym__shift_expression,
    STATE(227), 1,
      sym__additive_expression,
    STATE(228), 1,
      sym__wrapped_additive_expression,
    STATE(230), 1,
      sym__multiplicative_expression,
    STATE(297), 1,
      sym__equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__wrapped_equality_expression,
    STATE(314), 1,
      sym__relational_expression,
    STATE(315), 1,
      sym__wrapped_relational_expression,
    STATE(457), 1,
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
  [11217] = 33,
    ACTIONS(189), 1,
      sym_unary_minus_operator,
    ACTIONS(193), 1,
      sym_relocation_type,
    ACTIONS(199), 1,
      aux_sym_decimal_token1,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(209), 1,
      aux_sym_symbol_token1,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(297), 1,
      sym__equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__wrapped_equality_expression,
    STATE(314), 1,
      sym__relational_expression,
    STATE(315), 1,
      sym__wrapped_relational_expression,
    STATE(316), 1,
      sym__shift_expression,
    STATE(317), 1,
      sym__additive_expression,
    STATE(318), 1,
      sym__wrapped_additive_expression,
    STATE(319), 1,
      sym__multiplicative_expression,
    STATE(339), 1,
      sym__wrapped_shift_expression,
    STATE(439), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(191), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(197), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(195), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(320), 10,
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
  [11333] = 33,
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
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    STATE(209), 1,
      sym__wrapped_additive_expression,
    STATE(227), 1,
      sym__additive_expression,
    STATE(230), 1,
      sym__multiplicative_expression,
    STATE(297), 1,
      sym__equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__wrapped_equality_expression,
    STATE(314), 1,
      sym__relational_expression,
    STATE(315), 1,
      sym__wrapped_relational_expression,
    STATE(316), 1,
      sym__shift_expression,
    STATE(339), 1,
      sym__wrapped_shift_expression,
    STATE(457), 1,
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
  [11449] = 33,
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
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    STATE(230), 1,
      sym__multiplicative_expression,
    STATE(297), 1,
      sym__equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__wrapped_equality_expression,
    STATE(314), 1,
      sym__relational_expression,
    STATE(315), 1,
      sym__wrapped_relational_expression,
    STATE(316), 1,
      sym__shift_expression,
    STATE(317), 1,
      sym__additive_expression,
    STATE(318), 1,
      sym__wrapped_additive_expression,
    STATE(339), 1,
      sym__wrapped_shift_expression,
    STATE(457), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(59), 2,
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
    STATE(210), 10,
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
  [11565] = 33,
    ACTIONS(189), 1,
      sym_unary_minus_operator,
    ACTIONS(193), 1,
      sym_relocation_type,
    ACTIONS(199), 1,
      aux_sym_decimal_token1,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(209), 1,
      aux_sym_symbol_token1,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(297), 1,
      sym__equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__wrapped_equality_expression,
    STATE(314), 1,
      sym__relational_expression,
    STATE(315), 1,
      sym__wrapped_relational_expression,
    STATE(316), 1,
      sym__shift_expression,
    STATE(317), 1,
      sym__additive_expression,
    STATE(318), 1,
      sym__wrapped_additive_expression,
    STATE(319), 1,
      sym__multiplicative_expression,
    STATE(339), 1,
      sym__wrapped_shift_expression,
    STATE(441), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(191), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(197), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(195), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(320), 10,
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
  [11681] = 34,
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
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    STATE(297), 1,
      sym__equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__wrapped_equality_expression,
    STATE(314), 1,
      sym__relational_expression,
    STATE(315), 1,
      sym__wrapped_relational_expression,
    STATE(316), 1,
      sym__shift_expression,
    STATE(317), 1,
      sym__additive_expression,
    STATE(318), 1,
      sym__wrapped_additive_expression,
    STATE(319), 1,
      sym__multiplicative_expression,
    STATE(320), 1,
      sym__wrapped_multiplicative_expression,
    STATE(339), 1,
      sym__wrapped_shift_expression,
    STATE(457), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(59), 2,
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
    STATE(192), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11799] = 34,
    ACTIONS(189), 1,
      sym_unary_minus_operator,
    ACTIONS(193), 1,
      sym_relocation_type,
    ACTIONS(199), 1,
      aux_sym_decimal_token1,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(207), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(209), 1,
      aux_sym_symbol_token1,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(297), 1,
      sym__equality_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(305), 1,
      sym__logical_and_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(307), 1,
      sym__bitwise_or_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(309), 1,
      sym__bitwise_xor_expression,
    STATE(310), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(311), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__wrapped_equality_expression,
    STATE(314), 1,
      sym__relational_expression,
    STATE(315), 1,
      sym__wrapped_relational_expression,
    STATE(316), 1,
      sym__shift_expression,
    STATE(317), 1,
      sym__additive_expression,
    STATE(318), 1,
      sym__wrapped_additive_expression,
    STATE(319), 1,
      sym__multiplicative_expression,
    STATE(320), 1,
      sym__wrapped_multiplicative_expression,
    STATE(339), 1,
      sym__wrapped_shift_expression,
    STATE(460), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(191), 2,
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
    STATE(338), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11917] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(253), 1,
      ts_builtin_sym_end,
    ACTIONS(257), 1,
      aux_sym__whitespace_token1,
    ACTIONS(255), 42,
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
  [11974] = 4,
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
  [12028] = 4,
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
  [12082] = 4,
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
  [12136] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(275), 1,
      sym_relational_operator,
    ACTIONS(271), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(273), 16,
      anon_sym_SEMI,
      sym_line_comment,
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
  [12170] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(277), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(279), 17,
      anon_sym_SEMI,
      sym_line_comment,
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
  [12202] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(281), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(283), 17,
      anon_sym_SEMI,
      sym_line_comment,
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
  [12234] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(285), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(287), 17,
      anon_sym_SEMI,
      sym_line_comment,
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
  [12266] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(289), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(291), 17,
      anon_sym_SEMI,
      sym_line_comment,
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
  [12298] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(293), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(295), 17,
      anon_sym_SEMI,
      sym_line_comment,
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
  [12330] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(297), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(299), 17,
      anon_sym_SEMI,
      sym_line_comment,
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
  [12362] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(305), 1,
      sym_logical_or_operator,
    ACTIONS(301), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(303), 16,
      anon_sym_SEMI,
      sym_line_comment,
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
  [12396] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(307), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(309), 17,
      anon_sym_SEMI,
      sym_line_comment,
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
  [12428] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(315), 1,
      sym_logical_and_operator,
    ACTIONS(311), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(313), 16,
      anon_sym_SEMI,
      sym_line_comment,
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
  [12462] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(317), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(319), 17,
      anon_sym_SEMI,
      sym_line_comment,
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
  [12494] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(325), 1,
      sym_bitwise_or_operator,
    ACTIONS(321), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(323), 16,
      anon_sym_SEMI,
      sym_line_comment,
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
  [12528] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(327), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(329), 17,
      anon_sym_SEMI,
      sym_line_comment,
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
  [12560] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(335), 1,
      sym_bitwise_xor_operator,
    ACTIONS(331), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(333), 16,
      anon_sym_SEMI,
      sym_line_comment,
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
  [12594] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(337), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(339), 17,
      anon_sym_SEMI,
      sym_line_comment,
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
  [12626] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(345), 1,
      sym_bitwise_and_operator,
    ACTIONS(341), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(343), 16,
      anon_sym_SEMI,
      sym_line_comment,
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
  [12660] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(347), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(349), 17,
      anon_sym_SEMI,
      sym_line_comment,
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
  [12692] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(355), 1,
      sym_equality_operator,
    ACTIONS(351), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(353), 16,
      anon_sym_SEMI,
      sym_line_comment,
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
  [12726] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(357), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(359), 17,
      anon_sym_SEMI,
      sym_line_comment,
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
  [12758] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(275), 1,
      sym_relational_operator,
    ACTIONS(361), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(363), 16,
      anon_sym_SEMI,
      sym_line_comment,
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
  [12792] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(365), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(367), 17,
      anon_sym_SEMI,
      sym_line_comment,
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
  [12824] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(373), 1,
      sym_shift_operator,
    ACTIONS(369), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(371), 16,
      anon_sym_SEMI,
      sym_line_comment,
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
  [12858] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(375), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(377), 17,
      anon_sym_SEMI,
      sym_line_comment,
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
  [12890] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(383), 1,
      sym_additive_operator,
    ACTIONS(379), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(381), 16,
      anon_sym_SEMI,
      sym_line_comment,
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
  [12924] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(385), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(387), 17,
      anon_sym_SEMI,
      sym_line_comment,
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
  [12956] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(393), 1,
      sym_multiplicative_operator,
    ACTIONS(389), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(391), 16,
      anon_sym_SEMI,
      sym_line_comment,
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
  [12990] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(399), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      sym_assignment_operator,
    ACTIONS(395), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(397), 15,
      anon_sym_SEMI,
      sym_line_comment,
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
  [13026] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(403), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(405), 17,
      anon_sym_SEMI,
      sym_line_comment,
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
  [13058] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(407), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(409), 17,
      anon_sym_SEMI,
      sym_line_comment,
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
  [13090] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(411), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(413), 17,
      anon_sym_SEMI,
      sym_line_comment,
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
  [13122] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(315), 1,
      sym_logical_and_operator,
    ACTIONS(415), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(417), 16,
      anon_sym_SEMI,
      sym_line_comment,
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
  [13156] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(325), 1,
      sym_bitwise_or_operator,
    ACTIONS(419), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(421), 16,
      anon_sym_SEMI,
      sym_line_comment,
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
  [13190] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(335), 1,
      sym_bitwise_xor_operator,
    ACTIONS(423), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(425), 16,
      anon_sym_SEMI,
      sym_line_comment,
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
  [13224] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(345), 1,
      sym_bitwise_and_operator,
    ACTIONS(427), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(429), 16,
      anon_sym_SEMI,
      sym_line_comment,
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
  [13258] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(355), 1,
      sym_equality_operator,
    ACTIONS(431), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(433), 16,
      anon_sym_SEMI,
      sym_line_comment,
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
  [13292] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(373), 1,
      sym_shift_operator,
    ACTIONS(435), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(437), 16,
      anon_sym_SEMI,
      sym_line_comment,
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
  [13326] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(383), 1,
      sym_additive_operator,
    ACTIONS(439), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(441), 16,
      anon_sym_SEMI,
      sym_line_comment,
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
  [13360] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(393), 1,
      sym_multiplicative_operator,
    ACTIONS(443), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(445), 16,
      anon_sym_SEMI,
      sym_line_comment,
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
  [13394] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(447), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(449), 17,
      anon_sym_SEMI,
      sym_line_comment,
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
  [13426] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(451), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(453), 17,
      anon_sym_SEMI,
      sym_line_comment,
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
  [13458] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(455), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(457), 17,
      anon_sym_SEMI,
      sym_line_comment,
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
  [13490] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(459), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(461), 17,
      anon_sym_SEMI,
      sym_line_comment,
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
  [13522] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(463), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(465), 17,
      anon_sym_SEMI,
      sym_line_comment,
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
  [13554] = 4,
    ACTIONS(467), 1,
      sym_logical_and_operator,
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
  [13584] = 3,
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
  [13612] = 3,
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
  [13640] = 3,
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
  [13668] = 3,
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
  [13696] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [13724] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(299), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(297), 14,
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
  [13752] = 4,
    ACTIONS(469), 1,
      sym_logical_or_operator,
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
  [13782] = 3,
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
  [13810] = 4,
    ACTIONS(467), 1,
      sym_logical_and_operator,
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
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [13840] = 3,
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
  [13868] = 4,
    ACTIONS(471), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(323), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(321), 14,
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
  [13898] = 3,
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
  [13926] = 4,
    ACTIONS(473), 1,
      sym_bitwise_xor_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(333), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(331), 13,
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
  [13956] = 3,
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
  [13984] = 4,
    ACTIONS(475), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(343), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(341), 14,
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
  [14014] = 3,
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
  [14042] = 4,
    ACTIONS(477), 1,
      sym_equality_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14072] = 3,
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
  [14100] = 4,
    ACTIONS(479), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(363), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(361), 14,
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
  [14130] = 3,
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
  [14158] = 4,
    ACTIONS(481), 1,
      sym_shift_operator,
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
  [14188] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(377), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(375), 14,
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
  [14216] = 4,
    ACTIONS(483), 1,
      sym_additive_operator,
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
  [14246] = 3,
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
  [14274] = 4,
    ACTIONS(485), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(391), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(389), 14,
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
  [14304] = 5,
    ACTIONS(487), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(397), 4,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(395), 13,
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
  [14336] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(405), 5,
      sym_assignment_operator,
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
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14364] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(409), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(407), 14,
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
  [14392] = 3,
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
  [14420] = 4,
    ACTIONS(471), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(421), 4,
      sym_assignment_operator,
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
  [14450] = 4,
    ACTIONS(473), 1,
      sym_bitwise_xor_operator,
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
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14480] = 4,
    ACTIONS(475), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(429), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [14510] = 4,
    ACTIONS(477), 1,
      sym_equality_operator,
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
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14540] = 4,
    ACTIONS(479), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(273), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
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
  [14570] = 4,
    ACTIONS(481), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(437), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(435), 13,
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
  [14600] = 4,
    ACTIONS(483), 1,
      sym_additive_operator,
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
      sym_equality_operator,
      sym_shift_operator,
  [14630] = 4,
    ACTIONS(485), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(445), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
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
  [14660] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14688] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14716] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(457), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
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
  [14744] = 3,
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
  [14772] = 3,
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
  [14800] = 3,
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
  [14827] = 5,
    ACTIONS(491), 1,
      anon_sym_LPAREN,
    ACTIONS(493), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(397), 4,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(395), 12,
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
  [14858] = 3,
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
  [14885] = 3,
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
  [14912] = 4,
    ACTIONS(495), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14941] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14968] = 4,
    ACTIONS(497), 1,
      sym_logical_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(313), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(311), 12,
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
  [14997] = 4,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(499), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(279), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(277), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15026] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(409), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(407), 13,
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
  [15053] = 3,
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
  [15080] = 4,
    ACTIONS(497), 1,
      sym_logical_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(417), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(415), 12,
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
  [15109] = 4,
    ACTIONS(501), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(421), 4,
      sym_assignment_operator,
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
  [15138] = 4,
    ACTIONS(503), 1,
      sym_bitwise_xor_operator,
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
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15167] = 4,
    ACTIONS(505), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(429), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [15196] = 4,
    ACTIONS(507), 1,
      sym_equality_operator,
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
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15225] = 4,
    ACTIONS(509), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(273), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
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
  [15254] = 4,
    ACTIONS(511), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(437), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(435), 12,
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
  [15283] = 4,
    ACTIONS(513), 1,
      sym_additive_operator,
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
      sym_equality_operator,
      sym_shift_operator,
  [15312] = 4,
    ACTIONS(515), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(445), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
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
  [15341] = 3,
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
  [15368] = 3,
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
  [15395] = 3,
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
  [15422] = 3,
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
  [15449] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15476] = 4,
    ACTIONS(501), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(323), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(321), 13,
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
  [15505] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(329), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(327), 13,
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
  [15532] = 4,
    ACTIONS(503), 1,
      sym_bitwise_xor_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(333), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(331), 12,
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
  [15561] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15588] = 4,
    ACTIONS(505), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(343), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(341), 13,
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
  [15617] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15644] = 4,
    ACTIONS(507), 1,
      sym_equality_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15673] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(359), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(357), 13,
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
  [15700] = 4,
    ACTIONS(509), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(363), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(361), 13,
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
  [15729] = 3,
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
  [15756] = 4,
    ACTIONS(511), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(371), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(369), 12,
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
  [15785] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(377), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(375), 13,
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
  [15812] = 4,
    ACTIONS(513), 1,
      sym_additive_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(381), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(379), 12,
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
  [15841] = 3,
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
  [15868] = 3,
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
  [15895] = 4,
    ACTIONS(515), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(391), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
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
  [15924] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(405), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(403), 13,
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
  [15951] = 3,
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
  [15978] = 3,
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
  [16005] = 3,
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
  [16032] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(403), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(405), 14,
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
  [16060] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(455), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(457), 14,
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
  [16088] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(459), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(461), 14,
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
  [16116] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(277), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(279), 14,
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
  [16144] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(519), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(517), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(521), 12,
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
  [16174] = 3,
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
  [16198] = 3,
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
  [16222] = 3,
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
  [16246] = 4,
    ACTIONS(523), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16272] = 3,
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
  [16296] = 4,
    ACTIONS(525), 1,
      sym_logical_and_operator,
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
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16322] = 3,
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
  [16346] = 3,
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
  [16370] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(405), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(403), 10,
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
  [16394] = 4,
    ACTIONS(529), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(521), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(527), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16420] = 4,
    ACTIONS(525), 1,
      sym_logical_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(417), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(415), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16446] = 4,
    ACTIONS(531), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(421), 4,
      sym_assignment_operator,
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
  [16472] = 4,
    ACTIONS(533), 1,
      sym_bitwise_xor_operator,
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
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16498] = 4,
    ACTIONS(535), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(429), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [16524] = 4,
    ACTIONS(537), 1,
      sym_equality_operator,
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
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16550] = 4,
    ACTIONS(539), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(273), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [16576] = 4,
    ACTIONS(541), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(437), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(435), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [16602] = 3,
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
  [16626] = 4,
    ACTIONS(531), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(323), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(321), 10,
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
  [16652] = 3,
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
  [16676] = 4,
    ACTIONS(533), 1,
      sym_bitwise_xor_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(333), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(331), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16702] = 3,
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
  [16726] = 4,
    ACTIONS(535), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(343), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [16752] = 5,
    ACTIONS(543), 1,
      anon_sym_LPAREN,
    ACTIONS(545), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(397), 4,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(395), 9,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16780] = 3,
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
  [16804] = 4,
    ACTIONS(547), 1,
      sym_additive_operator,
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
      sym_equality_operator,
      sym_shift_operator,
  [16830] = 4,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(521), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(527), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
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
  [16880] = 4,
    ACTIONS(539), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(363), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [16906] = 3,
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
  [16930] = 4,
    ACTIONS(541), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(371), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(369), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [16956] = 3,
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
  [16980] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(377), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(375), 10,
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
  [17004] = 4,
    ACTIONS(547), 1,
      sym_additive_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(381), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(379), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [17030] = 3,
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
  [17054] = 4,
    ACTIONS(551), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(445), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
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
  [17080] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(449), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(447), 10,
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
  [17104] = 3,
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
  [17128] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(409), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(407), 10,
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
  [17152] = 3,
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
  [17176] = 3,
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
  [17200] = 4,
    ACTIONS(551), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(391), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
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
  [17226] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(453), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
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
  [17250] = 4,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(521), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(527), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17276] = 4,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(521), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(527), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17302] = 4,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(521), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(527), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17328] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(457), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
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
  [17352] = 4,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(521), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(527), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17378] = 4,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(521), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(527), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17404] = 4,
    ACTIONS(563), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(521), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(527), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17430] = 4,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(521), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(527), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17456] = 4,
    ACTIONS(567), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(521), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(527), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17482] = 4,
    ACTIONS(569), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(521), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(527), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17508] = 4,
    ACTIONS(571), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(521), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(527), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17534] = 4,
    ACTIONS(537), 1,
      sym_equality_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
      sym_shift_operator,
      sym_additive_operator,
  [17560] = 13,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(399), 1,
      anon_sym_LPAREN,
    ACTIONS(577), 1,
      anon_sym_COMMA,
    ACTIONS(581), 1,
      sym_assignment_operator,
    ACTIONS(583), 1,
      sym__operand_separator,
    ACTIONS(585), 1,
      sym__data_separator,
    STATE(341), 1,
      aux_sym_numeric_operands_repeat1,
    STATE(363), 1,
      aux_sym_numeric_operands_repeat3,
    STATE(371), 1,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(573), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(575), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(579), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [17603] = 3,
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
  [17625] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(453), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
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
  [17647] = 3,
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
  [17669] = 3,
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
  [17691] = 3,
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
  [17713] = 3,
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
  [17735] = 3,
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
  [17757] = 4,
    ACTIONS(587), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(303), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(301), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17781] = 3,
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
  [17803] = 4,
    ACTIONS(589), 1,
      sym_logical_and_operator,
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
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17827] = 3,
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
  [17849] = 4,
    ACTIONS(591), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(323), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(321), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17873] = 3,
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
  [17895] = 4,
    ACTIONS(593), 1,
      sym_bitwise_xor_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(333), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(331), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17919] = 3,
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
  [17941] = 4,
    ACTIONS(595), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(343), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [17965] = 4,
    ACTIONS(597), 1,
      sym_equality_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
      sym_shift_operator,
      sym_additive_operator,
  [17989] = 3,
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
  [18011] = 4,
    ACTIONS(599), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(363), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [18035] = 3,
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
  [18057] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(377), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(375), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18079] = 4,
    ACTIONS(601), 1,
      sym_additive_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(381), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(379), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [18103] = 3,
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
  [18125] = 4,
    ACTIONS(603), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(391), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(389), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18149] = 5,
    ACTIONS(605), 1,
      anon_sym_LPAREN,
    ACTIONS(607), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(397), 4,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(395), 7,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18175] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(409), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(407), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18197] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(405), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(403), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18219] = 3,
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
  [18241] = 3,
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
  [18263] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(457), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(455), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18285] = 3,
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
  [18307] = 4,
    ACTIONS(589), 1,
      sym_logical_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(417), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(415), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18331] = 3,
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
  [18353] = 4,
    ACTIONS(591), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(421), 4,
      sym_assignment_operator,
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
  [18377] = 4,
    ACTIONS(593), 1,
      sym_bitwise_xor_operator,
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
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18401] = 4,
    ACTIONS(595), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(429), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [18425] = 4,
    ACTIONS(597), 1,
      sym_equality_operator,
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
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18449] = 4,
    ACTIONS(599), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(273), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [18473] = 4,
    ACTIONS(609), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(437), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(435), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [18497] = 4,
    ACTIONS(601), 1,
      sym_additive_operator,
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
      sym_equality_operator,
      sym_shift_operator,
  [18521] = 4,
    ACTIONS(603), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(445), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(443), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18545] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(449), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(447), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18567] = 4,
    ACTIONS(609), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(371), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(369), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [18591] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(305), 1,
      sym_logical_or_operator,
    ACTIONS(365), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(367), 7,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
      sym_assignment_operator,
  [18616] = 11,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(577), 1,
      anon_sym_COMMA,
    ACTIONS(583), 1,
      sym__operand_separator,
    ACTIONS(585), 1,
      sym__data_separator,
    STATE(345), 1,
      aux_sym_numeric_operands_repeat1,
    STATE(361), 1,
      aux_sym_numeric_operands_repeat3,
    STATE(376), 1,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(579), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(611), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(613), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [18653] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(399), 1,
      anon_sym_LPAREN,
    ACTIONS(581), 1,
      sym_assignment_operator,
    ACTIONS(615), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(617), 5,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
  [18679] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(399), 1,
      anon_sym_LPAREN,
    ACTIONS(581), 1,
      sym_assignment_operator,
    ACTIONS(619), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(621), 5,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
  [18705] = 3,
    ACTIONS(469), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(365), 9,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_assignment_operator,
  [18724] = 8,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(623), 1,
      anon_sym_COMMA,
    STATE(345), 1,
      aux_sym_numeric_operands_repeat1,
    ACTIONS(619), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(621), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(626), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(629), 2,
      sym__operand_separator,
      sym__data_separator,
  [18753] = 5,
    STATE(7), 1,
      sym__control_operand_separator,
    STATE(346), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(634), 3,
      sym__operand_separator,
      sym__data_separator,
      aux_sym__control_operand_separator_token1,
    ACTIONS(632), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [18775] = 5,
    STATE(7), 1,
      sym__control_operand_separator,
    STATE(350), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(639), 3,
      sym__operand_separator,
      sym__data_separator,
      aux_sym__control_operand_separator_token1,
    ACTIONS(637), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [18797] = 3,
    ACTIONS(495), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(365), 8,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
  [18815] = 4,
    ACTIONS(487), 1,
      anon_sym_LPAREN,
    ACTIONS(643), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(641), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      aux_sym__control_operand_separator_token1,
  [18835] = 5,
    STATE(7), 1,
      sym__control_operand_separator,
    STATE(346), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(639), 3,
      sym__operand_separator,
      sym__data_separator,
      aux_sym__control_operand_separator_token1,
    ACTIONS(645), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [18857] = 4,
    ACTIONS(491), 1,
      anon_sym_LPAREN,
    ACTIONS(649), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(647), 6,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_COMMA,
  [18876] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(655), 1,
      aux_sym__whitespace_token1,
    ACTIONS(657), 1,
      anon_sym_COMMA,
    STATE(353), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(651), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(653), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [18900] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(663), 1,
      aux_sym__whitespace_token1,
    ACTIONS(666), 1,
      anon_sym_COMMA,
    STATE(353), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(659), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(661), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [18924] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(669), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      aux_sym__control_operand_separator_token1,
  [18938] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(671), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      aux_sym__control_operand_separator_token1,
  [18952] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(655), 1,
      aux_sym__whitespace_token1,
    ACTIONS(657), 1,
      anon_sym_COMMA,
    STATE(352), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(673), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(675), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [18976] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(677), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      aux_sym__control_operand_separator_token1,
  [18990] = 4,
    STATE(358), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(681), 2,
      sym__operand_separator,
      anon_sym_COMMA,
    ACTIONS(679), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19008] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(688), 1,
      anon_sym_COMMA,
    ACTIONS(684), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(686), 4,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19028] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(690), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      aux_sym__control_operand_separator_token1,
  [19042] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    STATE(362), 1,
      aux_sym_numeric_operands_repeat3,
    ACTIONS(692), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(694), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(696), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19064] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    STATE(362), 1,
      aux_sym_numeric_operands_repeat3,
    ACTIONS(698), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(700), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(702), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19086] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    STATE(362), 1,
      aux_sym_numeric_operands_repeat3,
    ACTIONS(611), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(613), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(696), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19108] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(632), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      aux_sym__control_operand_separator_token1,
  [19122] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(709), 1,
      aux_sym__whitespace_token1,
    ACTIONS(711), 1,
      sym_block_comment,
    ACTIONS(713), 1,
      anon_sym_LPAREN,
    STATE(429), 1,
      sym__call_expression,
    ACTIONS(705), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(707), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [19146] = 5,
    ACTIONS(717), 1,
      anon_sym_COMMA,
    ACTIONS(719), 1,
      sym__operand_separator,
    STATE(367), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(715), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19166] = 5,
    ACTIONS(717), 1,
      anon_sym_COMMA,
    ACTIONS(723), 1,
      sym__operand_separator,
    STATE(358), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(721), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19186] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(677), 6,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_COMMA,
  [19199] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(659), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(661), 3,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_COMMA,
  [19216] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(729), 1,
      aux_sym__whitespace_token1,
    ACTIONS(731), 1,
      anon_sym_LPAREN,
    ACTIONS(725), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(727), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [19237] = 4,
    ACTIONS(733), 1,
      sym__data_separator,
    STATE(374), 1,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(611), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19254] = 3,
    ACTIONS(523), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(365), 5,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
  [19269] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(735), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(737), 3,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_COMMA,
  [19286] = 4,
    ACTIONS(741), 1,
      sym__data_separator,
    STATE(374), 1,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(739), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19303] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(744), 6,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_COMMA,
  [19316] = 4,
    ACTIONS(733), 1,
      sym__data_separator,
    STATE(374), 1,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(692), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19333] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(690), 6,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_COMMA,
  [19346] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(746), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(748), 3,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
  [19360] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(750), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(690), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
  [19376] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(756), 1,
      aux_sym__whitespace_token1,
    ACTIONS(752), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(754), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [19394] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(758), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(677), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
  [19410] = 4,
    ACTIONS(543), 1,
      anon_sym_LPAREN,
    ACTIONS(760), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(647), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [19426] = 5,
    ACTIONS(543), 1,
      anon_sym_LPAREN,
    ACTIONS(760), 1,
      sym_assignment_operator,
    ACTIONS(762), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(647), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [19444] = 5,
    ACTIONS(543), 1,
      anon_sym_LPAREN,
    ACTIONS(760), 1,
      sym_assignment_operator,
    ACTIONS(765), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(647), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [19462] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(772), 1,
      aux_sym__whitespace_token1,
    ACTIONS(774), 1,
      sym_block_comment,
    ACTIONS(768), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(770), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [19480] = 5,
    ACTIONS(543), 1,
      anon_sym_LPAREN,
    ACTIONS(760), 1,
      sym_assignment_operator,
    ACTIONS(776), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(647), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [19498] = 5,
    ACTIONS(543), 1,
      anon_sym_LPAREN,
    ACTIONS(760), 1,
      sym_assignment_operator,
    ACTIONS(779), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(647), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [19516] = 5,
    ACTIONS(543), 1,
      anon_sym_LPAREN,
    ACTIONS(760), 1,
      sym_assignment_operator,
    ACTIONS(782), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(647), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [19534] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(789), 1,
      aux_sym__whitespace_token1,
    ACTIONS(791), 1,
      sym_block_comment,
    ACTIONS(785), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(787), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [19552] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(793), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(795), 3,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
  [19566] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(797), 1,
      anon_sym_DQUOTE,
    STATE(420), 1,
      aux_sym_string_repeat1,
    ACTIONS(799), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [19583] = 5,
    ACTIONS(721), 1,
      anon_sym_RPAREN,
    ACTIONS(801), 1,
      anon_sym_COMMA,
    ACTIONS(803), 1,
      sym__operand_separator,
    STATE(393), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [19600] = 4,
    ACTIONS(679), 1,
      anon_sym_RPAREN,
    STATE(393), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(805), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [19615] = 3,
    ACTIONS(587), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(365), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_assignment_operator,
  [19628] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(808), 1,
      anon_sym_DQUOTE,
    STATE(422), 1,
      aux_sym_string_repeat1,
    ACTIONS(810), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [19645] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(812), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19656] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(814), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19667] = 5,
    ACTIONS(715), 1,
      anon_sym_RPAREN,
    ACTIONS(801), 1,
      anon_sym_COMMA,
    ACTIONS(816), 1,
      sym__operand_separator,
    STATE(392), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [19684] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(818), 1,
      aux_sym__whitespace_token1,
    ACTIONS(820), 1,
      anon_sym_RPAREN,
    ACTIONS(822), 1,
      sym_macro_parameter,
    STATE(448), 1,
      sym_macro_parameters,
  [19703] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(824), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19714] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(826), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19725] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(822), 1,
      sym_macro_parameter,
    ACTIONS(828), 1,
      aux_sym__whitespace_token1,
    ACTIONS(830), 1,
      anon_sym_RPAREN,
    STATE(447), 1,
      sym_macro_parameters,
  [19744] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(832), 1,
      anon_sym_DQUOTE,
    STATE(406), 1,
      aux_sym_string_repeat1,
    ACTIONS(834), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [19761] = 4,
    ACTIONS(836), 1,
      ts_builtin_sym_end,
    ACTIONS(840), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(838), 2,
      sym__line_separator,
      anon_sym_SEMI,
  [19776] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(842), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19787] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(844), 1,
      anon_sym_DQUOTE,
    STATE(430), 1,
      aux_sym_string_repeat1,
    ACTIONS(846), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [19804] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(848), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19815] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(850), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19826] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(852), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19837] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(826), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19848] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(854), 1,
      anon_sym_DQUOTE,
    STATE(414), 1,
      aux_sym_string_repeat1,
    ACTIONS(856), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [19865] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(858), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19876] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(860), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19887] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(862), 1,
      anon_sym_DQUOTE,
    STATE(430), 1,
      aux_sym_string_repeat1,
    ACTIONS(846), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [19904] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(653), 1,
      anon_sym_RPAREN,
    ACTIONS(864), 1,
      aux_sym__whitespace_token1,
    ACTIONS(867), 1,
      anon_sym_COMMA,
    STATE(425), 1,
      aux_sym_macro_parameters_repeat1,
  [19923] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(869), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19934] = 4,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(871), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(838), 2,
      sym__line_separator,
      anon_sym_SEMI,
  [19949] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(675), 1,
      anon_sym_RPAREN,
    ACTIONS(867), 1,
      anon_sym_COMMA,
    ACTIONS(873), 1,
      aux_sym__whitespace_token1,
    STATE(415), 1,
      aux_sym_macro_parameters_repeat1,
  [19968] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(876), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19979] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(878), 1,
      anon_sym_DQUOTE,
    STATE(430), 1,
      aux_sym_string_repeat1,
    ACTIONS(846), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [19996] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(880), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20007] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(882), 1,
      anon_sym_DQUOTE,
    STATE(430), 1,
      aux_sym_string_repeat1,
    ACTIONS(846), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20024] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(499), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20035] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(884), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20046] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(661), 1,
      anon_sym_RPAREN,
    ACTIONS(886), 1,
      aux_sym__whitespace_token1,
    ACTIONS(889), 1,
      anon_sym_COMMA,
    STATE(425), 1,
      aux_sym_macro_parameters_repeat1,
  [20065] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(892), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20076] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(894), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20087] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(896), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20098] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(898), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20109] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(900), 1,
      anon_sym_DQUOTE,
    STATE(430), 1,
      aux_sym_string_repeat1,
    ACTIONS(902), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20126] = 4,
    ACTIONS(605), 1,
      anon_sym_LPAREN,
    ACTIONS(905), 1,
      anon_sym_RPAREN,
    ACTIONS(907), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20140] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(735), 1,
      aux_sym__whitespace_token1,
    ACTIONS(737), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20154] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(677), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20164] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(744), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20174] = 3,
    ACTIONS(909), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(838), 2,
      sym__line_separator,
      anon_sym_SEMI,
  [20186] = 4,
    ACTIONS(605), 1,
      anon_sym_LPAREN,
    ACTIONS(907), 1,
      sym_assignment_operator,
    ACTIONS(911), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20200] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(913), 1,
      anon_sym_LPAREN,
    ACTIONS(915), 1,
      sym_macro_parameter,
    STATE(428), 1,
      sym_macro_parameters,
  [20216] = 4,
    ACTIONS(605), 1,
      anon_sym_LPAREN,
    ACTIONS(907), 1,
      sym_assignment_operator,
    ACTIONS(917), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20230] = 4,
    ACTIONS(605), 1,
      anon_sym_LPAREN,
    ACTIONS(907), 1,
      sym_assignment_operator,
    ACTIONS(919), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20244] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(690), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20254] = 4,
    ACTIONS(605), 1,
      anon_sym_LPAREN,
    ACTIONS(907), 1,
      sym_assignment_operator,
    ACTIONS(921), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20268] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(659), 1,
      aux_sym__whitespace_token1,
    ACTIONS(661), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20282] = 3,
    ACTIONS(907), 1,
      sym_assignment_operator,
    ACTIONS(923), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20293] = 3,
    ACTIONS(925), 1,
      ts_builtin_sym_end,
    ACTIONS(927), 1,
      sym__line_separator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20304] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(929), 1,
      anon_sym_COMMA,
    ACTIONS(931), 1,
      sym_macro_parameter,
  [20317] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(933), 1,
      anon_sym_COMMA,
    ACTIONS(935), 1,
      sym_macro_parameter,
  [20330] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(937), 1,
      aux_sym__whitespace_token1,
    ACTIONS(939), 1,
      anon_sym_RPAREN,
  [20343] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(941), 1,
      aux_sym__whitespace_token1,
    ACTIONS(943), 1,
      anon_sym_RPAREN,
  [20356] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(945), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [20367] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(947), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [20378] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(949), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [20389] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(951), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [20400] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(953), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [20411] = 3,
    ACTIONS(836), 1,
      ts_builtin_sym_end,
    ACTIONS(927), 1,
      sym__line_separator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20422] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(838), 1,
      aux_sym__statement_token1,
  [20435] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(836), 1,
      ts_builtin_sym_end,
    ACTIONS(838), 1,
      aux_sym__statement_token1,
  [20448] = 3,
    ACTIONS(491), 1,
      anon_sym_LPAREN,
    ACTIONS(907), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20459] = 3,
    ACTIONS(543), 1,
      anon_sym_LPAREN,
    ACTIONS(907), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20470] = 3,
    ACTIONS(907), 1,
      sym_assignment_operator,
    ACTIONS(955), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20481] = 3,
    ACTIONS(605), 1,
      anon_sym_LPAREN,
    ACTIONS(907), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20492] = 3,
    ACTIONS(487), 1,
      anon_sym_LPAREN,
    ACTIONS(907), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20503] = 2,
    ACTIONS(957), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20511] = 2,
    ACTIONS(959), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20519] = 2,
    ACTIONS(961), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20527] = 2,
    ACTIONS(963), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20535] = 2,
    ACTIONS(965), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20543] = 2,
    ACTIONS(967), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20551] = 2,
    ACTIONS(969), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20559] = 2,
    ACTIONS(971), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20567] = 2,
    ACTIONS(973), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20575] = 2,
    ACTIONS(975), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20583] = 2,
    ACTIONS(977), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20591] = 2,
    ACTIONS(979), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20599] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(931), 1,
      sym_macro_parameter,
  [20609] = 2,
    ACTIONS(981), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20617] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(983), 1,
      aux_sym__whitespace_token1,
    ACTIONS(985), 1,
      sym_block_comment,
  [20627] = 2,
    ACTIONS(927), 1,
      sym__line_separator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20635] = 2,
    ACTIONS(987), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20643] = 2,
    ACTIONS(989), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20651] = 2,
    ACTIONS(991), 1,
      sym_macro_name,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20659] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(993), 1,
      aux_sym__whitespace_token1,
    ACTIONS(995), 1,
      sym_block_comment,
  [20669] = 2,
    ACTIONS(997), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20677] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(999), 1,
      aux_sym__whitespace_token1,
    ACTIONS(1001), 1,
      sym_block_comment,
  [20687] = 2,
    ACTIONS(1003), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20695] = 2,
    ACTIONS(1005), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20703] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1007), 1,
      sym_macro_parameter,
  [20713] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(935), 1,
      sym_macro_parameter,
  [20723] = 2,
    ACTIONS(1009), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20731] = 2,
    ACTIONS(1011), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20739] = 2,
    ACTIONS(1013), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20747] = 2,
    ACTIONS(1015), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20755] = 2,
    ACTIONS(1017), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20763] = 2,
    ACTIONS(1019), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20771] = 2,
    ACTIONS(1021), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20779] = 2,
    ACTIONS(1023), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20787] = 2,
    ACTIONS(1025), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20795] = 2,
    ACTIONS(1027), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20803] = 2,
    ACTIONS(1029), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20811] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(838), 1,
      aux_sym__statement_token1,
  [20821] = 2,
    ACTIONS(1031), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20829] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1033), 1,
      sym_macro_parameter,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 140,
  [SMALL_STATE(4)] = 275,
  [SMALL_STATE(5)] = 373,
  [SMALL_STATE(6)] = 471,
  [SMALL_STATE(7)] = 600,
  [SMALL_STATE(8)] = 731,
  [SMALL_STATE(9)] = 860,
  [SMALL_STATE(10)] = 989,
  [SMALL_STATE(11)] = 1112,
  [SMALL_STATE(12)] = 1245,
  [SMALL_STATE(13)] = 1370,
  [SMALL_STATE(14)] = 1500,
  [SMALL_STATE(15)] = 1630,
  [SMALL_STATE(16)] = 1760,
  [SMALL_STATE(17)] = 1890,
  [SMALL_STATE(18)] = 2020,
  [SMALL_STATE(19)] = 2146,
  [SMALL_STATE(20)] = 2276,
  [SMALL_STATE(21)] = 2402,
  [SMALL_STATE(22)] = 2532,
  [SMALL_STATE(23)] = 2662,
  [SMALL_STATE(24)] = 2792,
  [SMALL_STATE(25)] = 2922,
  [SMALL_STATE(26)] = 3052,
  [SMALL_STATE(27)] = 3182,
  [SMALL_STATE(28)] = 3309,
  [SMALL_STATE(29)] = 3432,
  [SMALL_STATE(30)] = 3555,
  [SMALL_STATE(31)] = 3671,
  [SMALL_STATE(32)] = 3787,
  [SMALL_STATE(33)] = 3903,
  [SMALL_STATE(34)] = 4019,
  [SMALL_STATE(35)] = 4135,
  [SMALL_STATE(36)] = 4251,
  [SMALL_STATE(37)] = 4367,
  [SMALL_STATE(38)] = 4483,
  [SMALL_STATE(39)] = 4599,
  [SMALL_STATE(40)] = 4715,
  [SMALL_STATE(41)] = 4831,
  [SMALL_STATE(42)] = 4947,
  [SMALL_STATE(43)] = 5063,
  [SMALL_STATE(44)] = 5179,
  [SMALL_STATE(45)] = 5295,
  [SMALL_STATE(46)] = 5411,
  [SMALL_STATE(47)] = 5529,
  [SMALL_STATE(48)] = 5645,
  [SMALL_STATE(49)] = 5761,
  [SMALL_STATE(50)] = 5877,
  [SMALL_STATE(51)] = 5993,
  [SMALL_STATE(52)] = 6109,
  [SMALL_STATE(53)] = 6225,
  [SMALL_STATE(54)] = 6341,
  [SMALL_STATE(55)] = 6457,
  [SMALL_STATE(56)] = 6573,
  [SMALL_STATE(57)] = 6689,
  [SMALL_STATE(58)] = 6805,
  [SMALL_STATE(59)] = 6923,
  [SMALL_STATE(60)] = 7039,
  [SMALL_STATE(61)] = 7155,
  [SMALL_STATE(62)] = 7271,
  [SMALL_STATE(63)] = 7387,
  [SMALL_STATE(64)] = 7503,
  [SMALL_STATE(65)] = 7619,
  [SMALL_STATE(66)] = 7735,
  [SMALL_STATE(67)] = 7851,
  [SMALL_STATE(68)] = 7967,
  [SMALL_STATE(69)] = 8083,
  [SMALL_STATE(70)] = 8199,
  [SMALL_STATE(71)] = 8315,
  [SMALL_STATE(72)] = 8431,
  [SMALL_STATE(73)] = 8547,
  [SMALL_STATE(74)] = 8663,
  [SMALL_STATE(75)] = 8779,
  [SMALL_STATE(76)] = 8895,
  [SMALL_STATE(77)] = 9011,
  [SMALL_STATE(78)] = 9127,
  [SMALL_STATE(79)] = 9243,
  [SMALL_STATE(80)] = 9359,
  [SMALL_STATE(81)] = 9477,
  [SMALL_STATE(82)] = 9593,
  [SMALL_STATE(83)] = 9709,
  [SMALL_STATE(84)] = 9825,
  [SMALL_STATE(85)] = 9941,
  [SMALL_STATE(86)] = 10057,
  [SMALL_STATE(87)] = 10173,
  [SMALL_STATE(88)] = 10289,
  [SMALL_STATE(89)] = 10405,
  [SMALL_STATE(90)] = 10521,
  [SMALL_STATE(91)] = 10637,
  [SMALL_STATE(92)] = 10753,
  [SMALL_STATE(93)] = 10869,
  [SMALL_STATE(94)] = 10985,
  [SMALL_STATE(95)] = 11101,
  [SMALL_STATE(96)] = 11217,
  [SMALL_STATE(97)] = 11333,
  [SMALL_STATE(98)] = 11449,
  [SMALL_STATE(99)] = 11565,
  [SMALL_STATE(100)] = 11681,
  [SMALL_STATE(101)] = 11799,
  [SMALL_STATE(102)] = 11917,
  [SMALL_STATE(103)] = 11974,
  [SMALL_STATE(104)] = 12028,
  [SMALL_STATE(105)] = 12082,
  [SMALL_STATE(106)] = 12136,
  [SMALL_STATE(107)] = 12170,
  [SMALL_STATE(108)] = 12202,
  [SMALL_STATE(109)] = 12234,
  [SMALL_STATE(110)] = 12266,
  [SMALL_STATE(111)] = 12298,
  [SMALL_STATE(112)] = 12330,
  [SMALL_STATE(113)] = 12362,
  [SMALL_STATE(114)] = 12396,
  [SMALL_STATE(115)] = 12428,
  [SMALL_STATE(116)] = 12462,
  [SMALL_STATE(117)] = 12494,
  [SMALL_STATE(118)] = 12528,
  [SMALL_STATE(119)] = 12560,
  [SMALL_STATE(120)] = 12594,
  [SMALL_STATE(121)] = 12626,
  [SMALL_STATE(122)] = 12660,
  [SMALL_STATE(123)] = 12692,
  [SMALL_STATE(124)] = 12726,
  [SMALL_STATE(125)] = 12758,
  [SMALL_STATE(126)] = 12792,
  [SMALL_STATE(127)] = 12824,
  [SMALL_STATE(128)] = 12858,
  [SMALL_STATE(129)] = 12890,
  [SMALL_STATE(130)] = 12924,
  [SMALL_STATE(131)] = 12956,
  [SMALL_STATE(132)] = 12990,
  [SMALL_STATE(133)] = 13026,
  [SMALL_STATE(134)] = 13058,
  [SMALL_STATE(135)] = 13090,
  [SMALL_STATE(136)] = 13122,
  [SMALL_STATE(137)] = 13156,
  [SMALL_STATE(138)] = 13190,
  [SMALL_STATE(139)] = 13224,
  [SMALL_STATE(140)] = 13258,
  [SMALL_STATE(141)] = 13292,
  [SMALL_STATE(142)] = 13326,
  [SMALL_STATE(143)] = 13360,
  [SMALL_STATE(144)] = 13394,
  [SMALL_STATE(145)] = 13426,
  [SMALL_STATE(146)] = 13458,
  [SMALL_STATE(147)] = 13490,
  [SMALL_STATE(148)] = 13522,
  [SMALL_STATE(149)] = 13554,
  [SMALL_STATE(150)] = 13584,
  [SMALL_STATE(151)] = 13612,
  [SMALL_STATE(152)] = 13640,
  [SMALL_STATE(153)] = 13668,
  [SMALL_STATE(154)] = 13696,
  [SMALL_STATE(155)] = 13724,
  [SMALL_STATE(156)] = 13752,
  [SMALL_STATE(157)] = 13782,
  [SMALL_STATE(158)] = 13810,
  [SMALL_STATE(159)] = 13840,
  [SMALL_STATE(160)] = 13868,
  [SMALL_STATE(161)] = 13898,
  [SMALL_STATE(162)] = 13926,
  [SMALL_STATE(163)] = 13956,
  [SMALL_STATE(164)] = 13984,
  [SMALL_STATE(165)] = 14014,
  [SMALL_STATE(166)] = 14042,
  [SMALL_STATE(167)] = 14072,
  [SMALL_STATE(168)] = 14100,
  [SMALL_STATE(169)] = 14130,
  [SMALL_STATE(170)] = 14158,
  [SMALL_STATE(171)] = 14188,
  [SMALL_STATE(172)] = 14216,
  [SMALL_STATE(173)] = 14246,
  [SMALL_STATE(174)] = 14274,
  [SMALL_STATE(175)] = 14304,
  [SMALL_STATE(176)] = 14336,
  [SMALL_STATE(177)] = 14364,
  [SMALL_STATE(178)] = 14392,
  [SMALL_STATE(179)] = 14420,
  [SMALL_STATE(180)] = 14450,
  [SMALL_STATE(181)] = 14480,
  [SMALL_STATE(182)] = 14510,
  [SMALL_STATE(183)] = 14540,
  [SMALL_STATE(184)] = 14570,
  [SMALL_STATE(185)] = 14600,
  [SMALL_STATE(186)] = 14630,
  [SMALL_STATE(187)] = 14660,
  [SMALL_STATE(188)] = 14688,
  [SMALL_STATE(189)] = 14716,
  [SMALL_STATE(190)] = 14744,
  [SMALL_STATE(191)] = 14772,
  [SMALL_STATE(192)] = 14800,
  [SMALL_STATE(193)] = 14827,
  [SMALL_STATE(194)] = 14858,
  [SMALL_STATE(195)] = 14885,
  [SMALL_STATE(196)] = 14912,
  [SMALL_STATE(197)] = 14941,
  [SMALL_STATE(198)] = 14968,
  [SMALL_STATE(199)] = 14997,
  [SMALL_STATE(200)] = 15026,
  [SMALL_STATE(201)] = 15053,
  [SMALL_STATE(202)] = 15080,
  [SMALL_STATE(203)] = 15109,
  [SMALL_STATE(204)] = 15138,
  [SMALL_STATE(205)] = 15167,
  [SMALL_STATE(206)] = 15196,
  [SMALL_STATE(207)] = 15225,
  [SMALL_STATE(208)] = 15254,
  [SMALL_STATE(209)] = 15283,
  [SMALL_STATE(210)] = 15312,
  [SMALL_STATE(211)] = 15341,
  [SMALL_STATE(212)] = 15368,
  [SMALL_STATE(213)] = 15395,
  [SMALL_STATE(214)] = 15422,
  [SMALL_STATE(215)] = 15449,
  [SMALL_STATE(216)] = 15476,
  [SMALL_STATE(217)] = 15505,
  [SMALL_STATE(218)] = 15532,
  [SMALL_STATE(219)] = 15561,
  [SMALL_STATE(220)] = 15588,
  [SMALL_STATE(221)] = 15617,
  [SMALL_STATE(222)] = 15644,
  [SMALL_STATE(223)] = 15673,
  [SMALL_STATE(224)] = 15700,
  [SMALL_STATE(225)] = 15729,
  [SMALL_STATE(226)] = 15756,
  [SMALL_STATE(227)] = 15785,
  [SMALL_STATE(228)] = 15812,
  [SMALL_STATE(229)] = 15841,
  [SMALL_STATE(230)] = 15868,
  [SMALL_STATE(231)] = 15895,
  [SMALL_STATE(232)] = 15924,
  [SMALL_STATE(233)] = 15951,
  [SMALL_STATE(234)] = 15978,
  [SMALL_STATE(235)] = 16005,
  [SMALL_STATE(236)] = 16032,
  [SMALL_STATE(237)] = 16060,
  [SMALL_STATE(238)] = 16088,
  [SMALL_STATE(239)] = 16116,
  [SMALL_STATE(240)] = 16144,
  [SMALL_STATE(241)] = 16174,
  [SMALL_STATE(242)] = 16198,
  [SMALL_STATE(243)] = 16222,
  [SMALL_STATE(244)] = 16246,
  [SMALL_STATE(245)] = 16272,
  [SMALL_STATE(246)] = 16296,
  [SMALL_STATE(247)] = 16322,
  [SMALL_STATE(248)] = 16346,
  [SMALL_STATE(249)] = 16370,
  [SMALL_STATE(250)] = 16394,
  [SMALL_STATE(251)] = 16420,
  [SMALL_STATE(252)] = 16446,
  [SMALL_STATE(253)] = 16472,
  [SMALL_STATE(254)] = 16498,
  [SMALL_STATE(255)] = 16524,
  [SMALL_STATE(256)] = 16550,
  [SMALL_STATE(257)] = 16576,
  [SMALL_STATE(258)] = 16602,
  [SMALL_STATE(259)] = 16626,
  [SMALL_STATE(260)] = 16652,
  [SMALL_STATE(261)] = 16676,
  [SMALL_STATE(262)] = 16702,
  [SMALL_STATE(263)] = 16726,
  [SMALL_STATE(264)] = 16752,
  [SMALL_STATE(265)] = 16780,
  [SMALL_STATE(266)] = 16804,
  [SMALL_STATE(267)] = 16830,
  [SMALL_STATE(268)] = 16856,
  [SMALL_STATE(269)] = 16880,
  [SMALL_STATE(270)] = 16906,
  [SMALL_STATE(271)] = 16930,
  [SMALL_STATE(272)] = 16956,
  [SMALL_STATE(273)] = 16980,
  [SMALL_STATE(274)] = 17004,
  [SMALL_STATE(275)] = 17030,
  [SMALL_STATE(276)] = 17054,
  [SMALL_STATE(277)] = 17080,
  [SMALL_STATE(278)] = 17104,
  [SMALL_STATE(279)] = 17128,
  [SMALL_STATE(280)] = 17152,
  [SMALL_STATE(281)] = 17176,
  [SMALL_STATE(282)] = 17200,
  [SMALL_STATE(283)] = 17226,
  [SMALL_STATE(284)] = 17250,
  [SMALL_STATE(285)] = 17276,
  [SMALL_STATE(286)] = 17302,
  [SMALL_STATE(287)] = 17328,
  [SMALL_STATE(288)] = 17352,
  [SMALL_STATE(289)] = 17378,
  [SMALL_STATE(290)] = 17404,
  [SMALL_STATE(291)] = 17430,
  [SMALL_STATE(292)] = 17456,
  [SMALL_STATE(293)] = 17482,
  [SMALL_STATE(294)] = 17508,
  [SMALL_STATE(295)] = 17534,
  [SMALL_STATE(296)] = 17560,
  [SMALL_STATE(297)] = 17603,
  [SMALL_STATE(298)] = 17625,
  [SMALL_STATE(299)] = 17647,
  [SMALL_STATE(300)] = 17669,
  [SMALL_STATE(301)] = 17691,
  [SMALL_STATE(302)] = 17713,
  [SMALL_STATE(303)] = 17735,
  [SMALL_STATE(304)] = 17757,
  [SMALL_STATE(305)] = 17781,
  [SMALL_STATE(306)] = 17803,
  [SMALL_STATE(307)] = 17827,
  [SMALL_STATE(308)] = 17849,
  [SMALL_STATE(309)] = 17873,
  [SMALL_STATE(310)] = 17895,
  [SMALL_STATE(311)] = 17919,
  [SMALL_STATE(312)] = 17941,
  [SMALL_STATE(313)] = 17965,
  [SMALL_STATE(314)] = 17989,
  [SMALL_STATE(315)] = 18011,
  [SMALL_STATE(316)] = 18035,
  [SMALL_STATE(317)] = 18057,
  [SMALL_STATE(318)] = 18079,
  [SMALL_STATE(319)] = 18103,
  [SMALL_STATE(320)] = 18125,
  [SMALL_STATE(321)] = 18149,
  [SMALL_STATE(322)] = 18175,
  [SMALL_STATE(323)] = 18197,
  [SMALL_STATE(324)] = 18219,
  [SMALL_STATE(325)] = 18241,
  [SMALL_STATE(326)] = 18263,
  [SMALL_STATE(327)] = 18285,
  [SMALL_STATE(328)] = 18307,
  [SMALL_STATE(329)] = 18331,
  [SMALL_STATE(330)] = 18353,
  [SMALL_STATE(331)] = 18377,
  [SMALL_STATE(332)] = 18401,
  [SMALL_STATE(333)] = 18425,
  [SMALL_STATE(334)] = 18449,
  [SMALL_STATE(335)] = 18473,
  [SMALL_STATE(336)] = 18497,
  [SMALL_STATE(337)] = 18521,
  [SMALL_STATE(338)] = 18545,
  [SMALL_STATE(339)] = 18567,
  [SMALL_STATE(340)] = 18591,
  [SMALL_STATE(341)] = 18616,
  [SMALL_STATE(342)] = 18653,
  [SMALL_STATE(343)] = 18679,
  [SMALL_STATE(344)] = 18705,
  [SMALL_STATE(345)] = 18724,
  [SMALL_STATE(346)] = 18753,
  [SMALL_STATE(347)] = 18775,
  [SMALL_STATE(348)] = 18797,
  [SMALL_STATE(349)] = 18815,
  [SMALL_STATE(350)] = 18835,
  [SMALL_STATE(351)] = 18857,
  [SMALL_STATE(352)] = 18876,
  [SMALL_STATE(353)] = 18900,
  [SMALL_STATE(354)] = 18924,
  [SMALL_STATE(355)] = 18938,
  [SMALL_STATE(356)] = 18952,
  [SMALL_STATE(357)] = 18976,
  [SMALL_STATE(358)] = 18990,
  [SMALL_STATE(359)] = 19008,
  [SMALL_STATE(360)] = 19028,
  [SMALL_STATE(361)] = 19042,
  [SMALL_STATE(362)] = 19064,
  [SMALL_STATE(363)] = 19086,
  [SMALL_STATE(364)] = 19108,
  [SMALL_STATE(365)] = 19122,
  [SMALL_STATE(366)] = 19146,
  [SMALL_STATE(367)] = 19166,
  [SMALL_STATE(368)] = 19186,
  [SMALL_STATE(369)] = 19199,
  [SMALL_STATE(370)] = 19216,
  [SMALL_STATE(371)] = 19237,
  [SMALL_STATE(372)] = 19254,
  [SMALL_STATE(373)] = 19269,
  [SMALL_STATE(374)] = 19286,
  [SMALL_STATE(375)] = 19303,
  [SMALL_STATE(376)] = 19316,
  [SMALL_STATE(377)] = 19333,
  [SMALL_STATE(378)] = 19346,
  [SMALL_STATE(379)] = 19360,
  [SMALL_STATE(380)] = 19376,
  [SMALL_STATE(381)] = 19394,
  [SMALL_STATE(382)] = 19410,
  [SMALL_STATE(383)] = 19426,
  [SMALL_STATE(384)] = 19444,
  [SMALL_STATE(385)] = 19462,
  [SMALL_STATE(386)] = 19480,
  [SMALL_STATE(387)] = 19498,
  [SMALL_STATE(388)] = 19516,
  [SMALL_STATE(389)] = 19534,
  [SMALL_STATE(390)] = 19552,
  [SMALL_STATE(391)] = 19566,
  [SMALL_STATE(392)] = 19583,
  [SMALL_STATE(393)] = 19600,
  [SMALL_STATE(394)] = 19615,
  [SMALL_STATE(395)] = 19628,
  [SMALL_STATE(396)] = 19645,
  [SMALL_STATE(397)] = 19656,
  [SMALL_STATE(398)] = 19667,
  [SMALL_STATE(399)] = 19684,
  [SMALL_STATE(400)] = 19703,
  [SMALL_STATE(401)] = 19714,
  [SMALL_STATE(402)] = 19725,
  [SMALL_STATE(403)] = 19744,
  [SMALL_STATE(404)] = 19761,
  [SMALL_STATE(405)] = 19776,
  [SMALL_STATE(406)] = 19787,
  [SMALL_STATE(407)] = 19804,
  [SMALL_STATE(408)] = 19815,
  [SMALL_STATE(409)] = 19826,
  [SMALL_STATE(410)] = 19837,
  [SMALL_STATE(411)] = 19848,
  [SMALL_STATE(412)] = 19865,
  [SMALL_STATE(413)] = 19876,
  [SMALL_STATE(414)] = 19887,
  [SMALL_STATE(415)] = 19904,
  [SMALL_STATE(416)] = 19923,
  [SMALL_STATE(417)] = 19934,
  [SMALL_STATE(418)] = 19949,
  [SMALL_STATE(419)] = 19968,
  [SMALL_STATE(420)] = 19979,
  [SMALL_STATE(421)] = 19996,
  [SMALL_STATE(422)] = 20007,
  [SMALL_STATE(423)] = 20024,
  [SMALL_STATE(424)] = 20035,
  [SMALL_STATE(425)] = 20046,
  [SMALL_STATE(426)] = 20065,
  [SMALL_STATE(427)] = 20076,
  [SMALL_STATE(428)] = 20087,
  [SMALL_STATE(429)] = 20098,
  [SMALL_STATE(430)] = 20109,
  [SMALL_STATE(431)] = 20126,
  [SMALL_STATE(432)] = 20140,
  [SMALL_STATE(433)] = 20154,
  [SMALL_STATE(434)] = 20164,
  [SMALL_STATE(435)] = 20174,
  [SMALL_STATE(436)] = 20186,
  [SMALL_STATE(437)] = 20200,
  [SMALL_STATE(438)] = 20216,
  [SMALL_STATE(439)] = 20230,
  [SMALL_STATE(440)] = 20244,
  [SMALL_STATE(441)] = 20254,
  [SMALL_STATE(442)] = 20268,
  [SMALL_STATE(443)] = 20282,
  [SMALL_STATE(444)] = 20293,
  [SMALL_STATE(445)] = 20304,
  [SMALL_STATE(446)] = 20317,
  [SMALL_STATE(447)] = 20330,
  [SMALL_STATE(448)] = 20343,
  [SMALL_STATE(449)] = 20356,
  [SMALL_STATE(450)] = 20367,
  [SMALL_STATE(451)] = 20378,
  [SMALL_STATE(452)] = 20389,
  [SMALL_STATE(453)] = 20400,
  [SMALL_STATE(454)] = 20411,
  [SMALL_STATE(455)] = 20422,
  [SMALL_STATE(456)] = 20435,
  [SMALL_STATE(457)] = 20448,
  [SMALL_STATE(458)] = 20459,
  [SMALL_STATE(459)] = 20470,
  [SMALL_STATE(460)] = 20481,
  [SMALL_STATE(461)] = 20492,
  [SMALL_STATE(462)] = 20503,
  [SMALL_STATE(463)] = 20511,
  [SMALL_STATE(464)] = 20519,
  [SMALL_STATE(465)] = 20527,
  [SMALL_STATE(466)] = 20535,
  [SMALL_STATE(467)] = 20543,
  [SMALL_STATE(468)] = 20551,
  [SMALL_STATE(469)] = 20559,
  [SMALL_STATE(470)] = 20567,
  [SMALL_STATE(471)] = 20575,
  [SMALL_STATE(472)] = 20583,
  [SMALL_STATE(473)] = 20591,
  [SMALL_STATE(474)] = 20599,
  [SMALL_STATE(475)] = 20609,
  [SMALL_STATE(476)] = 20617,
  [SMALL_STATE(477)] = 20627,
  [SMALL_STATE(478)] = 20635,
  [SMALL_STATE(479)] = 20643,
  [SMALL_STATE(480)] = 20651,
  [SMALL_STATE(481)] = 20659,
  [SMALL_STATE(482)] = 20669,
  [SMALL_STATE(483)] = 20677,
  [SMALL_STATE(484)] = 20687,
  [SMALL_STATE(485)] = 20695,
  [SMALL_STATE(486)] = 20703,
  [SMALL_STATE(487)] = 20713,
  [SMALL_STATE(488)] = 20723,
  [SMALL_STATE(489)] = 20731,
  [SMALL_STATE(490)] = 20739,
  [SMALL_STATE(491)] = 20747,
  [SMALL_STATE(492)] = 20755,
  [SMALL_STATE(493)] = 20763,
  [SMALL_STATE(494)] = 20771,
  [SMALL_STATE(495)] = 20779,
  [SMALL_STATE(496)] = 20787,
  [SMALL_STATE(497)] = 20795,
  [SMALL_STATE(498)] = 20803,
  [SMALL_STATE(499)] = 20811,
  [SMALL_STATE(500)] = 20821,
  [SMALL_STATE(501)] = 20829,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 2, 0, 4),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(499),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(476),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(390),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(481),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(378),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(365),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 3, 0, 15),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2, 0, 9),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat2, 1, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_directive, 2, 0, 4),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 1, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label, 1, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 2, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label, 2, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__equality_expression, 3, 0, 22),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__equality_expression, 3, 0, 22),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 16),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 3, 0, 16),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal, 1, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_label_reference, 1, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_label_reference, 1, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 11),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 11),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 11),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 11),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 11),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 11),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 11),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 11),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 11),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 11),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 11),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 11),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 11),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 11),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 11),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 11),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assignment_expression, 3, 0, 22),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__assignment_expression, 3, 0, 22),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 11),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 11),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_multiplicative_expression, 1, 0, 11),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_multiplicative_expression, 1, 0, 11),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 14),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, 0, 14),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 18),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 3, 0, 18),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 19),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 19),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logical_or_expression, 3, 0, 22),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__logical_or_expression, 3, 0, 22),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logical_and_expression, 3, 0, 22),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__logical_and_expression, 3, 0, 22),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitwise_or_expression, 3, 0, 22),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitwise_or_expression, 3, 0, 22),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitwise_xor_expression, 3, 0, 22),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitwise_xor_expression, 3, 0, 22),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitwise_and_expression, 3, 0, 22),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitwise_and_expression, 3, 0, 22),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relational_expression, 3, 0, 22),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__relational_expression, 3, 0, 22),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shift_expression, 3, 0, 22),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shift_expression, 3, 0, 22),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__additive_expression, 3, 0, 22),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__additive_expression, 3, 0, 22),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiplicative_expression, 3, 0, 22),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiplicative_expression, 3, 0, 22),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relocation_expression, 4, 0, 23),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relocation_expression, 4, 0, 23),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 4, 0, 24),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 4, 0, 24),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 4, 0, 25),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 4, 0, 25),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 11),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 11),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 3, 0, 16),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_operand, 1, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_operand, 1, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_expression, 1, 0, 0),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_expression, 1, 0, 0),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_operands, 1, 0, 0),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_operands, 1, 0, 0),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_operands, 2, 0, 0),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_operands, 2, 0, 0),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 3, 0, 0),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 3, 0, 0),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0),
  [623] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [626] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(488),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_operands, 1, 0, 0),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_operand, 1, 0, 0),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_operands, 2, 0, 0),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_parameters, 2, 0, 0),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_parameters, 2, 0, 0),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(446),
  [666] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(487),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_type, 1, 0, 0),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_flag, 1, 0, 0),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_parameters, 1, 0, 0),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_parameters, 1, 0, 0),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 21),
  [681] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 21), SHIFT_REPEAT(28),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat3, 1, 0, 0),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat3, 1, 0, 0),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_operands, 3, 0, 0),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_operands, 3, 0, 0),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat3, 2, 0, 0),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat3, 2, 0, 0),
  [702] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat3, 2, 0, 0), SHIFT_REPEAT(362),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 1),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 1),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 1, 0, 9),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2, 0, 15),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 3, 0, 7),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 3, 0, 7),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 3, 0, 0),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 3, 0, 0),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat2, 2, 0, 0),
  [741] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat2, 2, 0, 0), SHIFT_REPEAT(374),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 20),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_mnemonic, 1, 0, 0),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_mnemonic, 1, 0, 0),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_directive, 3, 0, 13),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_directive, 3, 0, 13),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [762] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(279),
  [765] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(134),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_directive, 1, 0, 4),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__numeric_directive, 1, 0, 4),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [774] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [776] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(322),
  [779] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(200),
  [782] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(177),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 1, 0, 4),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_directive, 1, 0, 4),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_mnemonic, 1, 0, 0),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_mnemonic, 1, 0, 0),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [805] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 21), SHIFT_REPEAT(29),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 5, 0, 7),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_directive, 4, 0, 13),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 8),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 3),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 7),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 7),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 3, 0, 12),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 10),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 26),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 17),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [864] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_macro_parameters, 2, 0, 0), SHIFT(445),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 2),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [873] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_macro_parameters, 1, 0, 0), SHIFT(445),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 17),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 5),
  [882] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 2, 0, 0),
  [886] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(445),
  [889] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(474),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_directive, 3, 0, 12),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 8, 0, 26),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 5, 0, 17),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 6),
  [900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [902] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(430),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 0),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [943] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_mnemonic, 1, 0, 0),
  [995] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_mnemonic, 1, 0, 0),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1011] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
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
