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
#define STATE_COUNT 505
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
  anon_sym_SPACE = 12,
  anon_sym_TAB = 13,
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
  aux_sym__numeric_directive_repeat1 = 147,
  aux_sym_numeric_operands_repeat1 = 148,
  aux_sym_numeric_operands_repeat2 = 149,
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
  [anon_sym_SPACE] = " ",
  [anon_sym_TAB] = "\t",
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
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_macro_mnemonic] = sym_macro_mnemonic,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_TAB] = anon_sym_TAB,
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
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAB] = {
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
  [15] = 13,
  [16] = 8,
  [17] = 9,
  [18] = 14,
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
  [32] = 31,
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
  [48] = 36,
  [49] = 37,
  [50] = 38,
  [51] = 39,
  [52] = 40,
  [53] = 41,
  [54] = 42,
  [55] = 43,
  [56] = 44,
  [57] = 45,
  [58] = 46,
  [59] = 37,
  [60] = 36,
  [61] = 37,
  [62] = 38,
  [63] = 39,
  [64] = 40,
  [65] = 41,
  [66] = 42,
  [67] = 43,
  [68] = 44,
  [69] = 46,
  [70] = 36,
  [71] = 37,
  [72] = 38,
  [73] = 39,
  [74] = 40,
  [75] = 41,
  [76] = 42,
  [77] = 43,
  [78] = 44,
  [79] = 45,
  [80] = 46,
  [81] = 35,
  [82] = 36,
  [83] = 36,
  [84] = 36,
  [85] = 36,
  [86] = 36,
  [87] = 35,
  [88] = 35,
  [89] = 35,
  [90] = 38,
  [91] = 39,
  [92] = 40,
  [93] = 41,
  [94] = 31,
  [95] = 42,
  [96] = 43,
  [97] = 31,
  [98] = 44,
  [99] = 45,
  [100] = 31,
  [101] = 46,
  [102] = 102,
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
  [151] = 140,
  [152] = 110,
  [153] = 111,
  [154] = 112,
  [155] = 113,
  [156] = 114,
  [157] = 115,
  [158] = 116,
  [159] = 117,
  [160] = 118,
  [161] = 119,
  [162] = 120,
  [163] = 121,
  [164] = 122,
  [165] = 123,
  [166] = 124,
  [167] = 125,
  [168] = 126,
  [169] = 127,
  [170] = 150,
  [171] = 109,
  [172] = 130,
  [173] = 131,
  [174] = 132,
  [175] = 133,
  [176] = 134,
  [177] = 135,
  [178] = 136,
  [179] = 137,
  [180] = 138,
  [181] = 139,
  [182] = 149,
  [183] = 141,
  [184] = 142,
  [185] = 108,
  [186] = 143,
  [187] = 144,
  [188] = 145,
  [189] = 146,
  [190] = 147,
  [191] = 148,
  [192] = 128,
  [193] = 129,
  [194] = 150,
  [195] = 109,
  [196] = 118,
  [197] = 119,
  [198] = 120,
  [199] = 121,
  [200] = 122,
  [201] = 123,
  [202] = 124,
  [203] = 125,
  [204] = 126,
  [205] = 127,
  [206] = 129,
  [207] = 130,
  [208] = 131,
  [209] = 132,
  [210] = 110,
  [211] = 111,
  [212] = 112,
  [213] = 148,
  [214] = 114,
  [215] = 115,
  [216] = 116,
  [217] = 117,
  [218] = 218,
  [219] = 135,
  [220] = 136,
  [221] = 137,
  [222] = 138,
  [223] = 139,
  [224] = 140,
  [225] = 141,
  [226] = 142,
  [227] = 108,
  [228] = 143,
  [229] = 128,
  [230] = 144,
  [231] = 145,
  [232] = 149,
  [233] = 146,
  [234] = 147,
  [235] = 134,
  [236] = 133,
  [237] = 113,
  [238] = 134,
  [239] = 147,
  [240] = 148,
  [241] = 128,
  [242] = 242,
  [243] = 243,
  [244] = 117,
  [245] = 118,
  [246] = 119,
  [247] = 120,
  [248] = 121,
  [249] = 122,
  [250] = 134,
  [251] = 135,
  [252] = 136,
  [253] = 123,
  [254] = 137,
  [255] = 138,
  [256] = 139,
  [257] = 140,
  [258] = 141,
  [259] = 142,
  [260] = 108,
  [261] = 143,
  [262] = 144,
  [263] = 145,
  [264] = 124,
  [265] = 146,
  [266] = 147,
  [267] = 148,
  [268] = 112,
  [269] = 125,
  [270] = 133,
  [271] = 126,
  [272] = 127,
  [273] = 113,
  [274] = 150,
  [275] = 129,
  [276] = 130,
  [277] = 114,
  [278] = 115,
  [279] = 109,
  [280] = 280,
  [281] = 110,
  [282] = 128,
  [283] = 111,
  [284] = 149,
  [285] = 131,
  [286] = 286,
  [287] = 243,
  [288] = 116,
  [289] = 286,
  [290] = 132,
  [291] = 243,
  [292] = 286,
  [293] = 243,
  [294] = 286,
  [295] = 243,
  [296] = 286,
  [297] = 243,
  [298] = 286,
  [299] = 149,
  [300] = 124,
  [301] = 301,
  [302] = 302,
  [303] = 109,
  [304] = 110,
  [305] = 111,
  [306] = 112,
  [307] = 113,
  [308] = 114,
  [309] = 115,
  [310] = 116,
  [311] = 117,
  [312] = 118,
  [313] = 119,
  [314] = 120,
  [315] = 121,
  [316] = 122,
  [317] = 123,
  [318] = 125,
  [319] = 126,
  [320] = 150,
  [321] = 129,
  [322] = 130,
  [323] = 131,
  [324] = 132,
  [325] = 133,
  [326] = 326,
  [327] = 134,
  [328] = 328,
  [329] = 128,
  [330] = 147,
  [331] = 148,
  [332] = 135,
  [333] = 136,
  [334] = 149,
  [335] = 137,
  [336] = 138,
  [337] = 139,
  [338] = 140,
  [339] = 141,
  [340] = 142,
  [341] = 108,
  [342] = 143,
  [343] = 144,
  [344] = 145,
  [345] = 146,
  [346] = 127,
  [347] = 347,
  [348] = 348,
  [349] = 149,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 149,
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
  [373] = 368,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 149,
  [378] = 378,
  [379] = 371,
  [380] = 380,
  [381] = 371,
  [382] = 382,
  [383] = 360,
  [384] = 368,
  [385] = 385,
  [386] = 385,
  [387] = 387,
  [388] = 385,
  [389] = 385,
  [390] = 385,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 370,
  [396] = 396,
  [397] = 397,
  [398] = 369,
  [399] = 399,
  [400] = 400,
  [401] = 149,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 367,
  [406] = 402,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 402,
  [414] = 364,
  [415] = 372,
  [416] = 409,
  [417] = 409,
  [418] = 402,
  [419] = 362,
  [420] = 409,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 430,
  [432] = 432,
  [433] = 433,
  [434] = 368,
  [435] = 375,
  [436] = 430,
  [437] = 437,
  [438] = 374,
  [439] = 378,
  [440] = 430,
  [441] = 371,
  [442] = 430,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 443,
  [450] = 450,
  [451] = 443,
  [452] = 443,
  [453] = 448,
  [454] = 454,
  [455] = 455,
  [456] = 443,
  [457] = 457,
  [458] = 458,
  [459] = 444,
  [460] = 444,
  [461] = 444,
  [462] = 444,
  [463] = 444,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 466,
  [469] = 469,
  [470] = 469,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 469,
  [475] = 472,
  [476] = 472,
  [477] = 469,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 472,
  [484] = 466,
  [485] = 485,
  [486] = 486,
  [487] = 472,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 486,
  [492] = 492,
  [493] = 493,
  [494] = 466,
  [495] = 464,
  [496] = 496,
  [497] = 464,
  [498] = 469,
  [499] = 464,
  [500] = 466,
  [501] = 464,
  [502] = 485,
  [503] = 472,
  [504] = 469,
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
      if (eof) ADVANCE(104);
      ADVANCE_MAP(
        '!', 444,
        '"', 468,
        '#', 118,
        '$', 40,
        '&', 430,
        '\'', 464,
        '(', 122,
        ')', 123,
        '+', 436,
        ',', 126,
        '-', 440,
        '.', 571,
        '/', 439,
        '0', 479,
        '3', 480,
        ';', 105,
        '<', 433,
        '=', 425,
        '>', 434,
        '@', 77,
        'A', 559,
        'S', 548,
        'T', 561,
        '\\', 3,
        '^', 429,
        'a', 560,
        'f', 550,
        'g', 555,
        'r', 552,
        's', 549,
        't', 562,
        'z', 553,
        '|', 428,
        '~', 442,
        '%', 437,
        '*', 437,
        'C', 558,
        'c', 558,
        'K', 557,
        'k', 557,
        'V', 557,
        'v', 557,
        '1', 481,
        '2', 481,
        'F', 551,
        'R', 551,
        'X', 551,
        'x', 551,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(563);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\t', 129,
        '\n', 110,
        '\r', 106,
        ' ', 127,
        '!', 443,
        '#', 118,
        '$', 44,
        '%', 50,
        '\'', 464,
        '(', 122,
        ',', 126,
        '-', 441,
        '.', 577,
        '/', 31,
        '0', 448,
        '3', 453,
        ';', 105,
        '=', 424,
        'A', 585,
        'S', 569,
        'T', 587,
        '\\', 9,
        'a', 586,
        'f', 572,
        'g', 580,
        'r', 574,
        's', 570,
        't', 588,
        'z', 578,
        '|', 55,
        '~', 442,
        'C', 584,
        'c', 584,
        'K', 583,
        'k', 583,
        'V', 583,
        'v', 583,
      );
      if (lookahead == 0x0b ||
          lookahead == '\f') SKIP(1);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(454);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(573);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(454);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(589);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(22);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(22);
      if (lookahead == '\r') SKIP(2);
      if (lookahead == 'U') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(72);
      if (lookahead == 'x') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(474);
      if (set_contains(sym__escape_sequence_character_set_1, 12, lookahead)) ADVANCE(472);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(24);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(24);
      if (lookahead == '\r') SKIP(4);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(23);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(23);
      if (lookahead == '\r') SKIP(6);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(1);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '\r') SKIP(8);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(25);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(25);
      if (lookahead == '\r') SKIP(10);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(26);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(26);
      if (lookahead == '\r') SKIP(12);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(27);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(27);
      if (lookahead == '\r') SKIP(14);
      if (lookahead == 'U') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(72);
      if (lookahead == 'x') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(474);
      if (set_contains(sym__escape_sequence_character_set_1, 12, lookahead)) ADVANCE(472);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(36);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(36);
      if (lookahead == '\r') SKIP(16);
      if (lookahead == 'U') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(72);
      if (lookahead == 'x') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(474);
      if (set_contains(sym__escape_sequence_character_set_1, 12, lookahead)) ADVANCE(472);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\\') SKIP(20);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(18);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(18);
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(18);
      if (lookahead == '\r') SKIP(19);
      END_STATE();
    case 21:
      if (lookahead == '\r') ADVANCE(119);
      if (lookahead != 0) ADVANCE(118);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        '!', 444,
        '"', 468,
        '#', 118,
        '$', 40,
        '&', 430,
        '\'', 464,
        '(', 122,
        ')', 123,
        '+', 436,
        ',', 126,
        '-', 440,
        '.', 571,
        '/', 439,
        '0', 479,
        '3', 480,
        ';', 105,
        '<', 433,
        '=', 425,
        '>', 434,
        '@', 77,
        'A', 559,
        'S', 548,
        'T', 561,
        '\\', 3,
        '^', 429,
        'a', 560,
        'f', 550,
        'g', 555,
        'r', 552,
        's', 549,
        't', 562,
        'z', 553,
        '|', 428,
        '~', 442,
        '%', 437,
        '*', 437,
        'C', 558,
        'c', 558,
        'K', 557,
        'k', 557,
        'V', 557,
        'v', 557,
        '1', 481,
        '2', 481,
        'F', 551,
        'R', 551,
        'X', 551,
        'x', 551,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(563);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        '!', 443,
        '"', 468,
        '#', 118,
        '$', 44,
        '%', 50,
        '\'', 464,
        '(', 122,
        ')', 123,
        '-', 441,
        '.', 577,
        '/', 31,
        '0', 448,
        '3', 453,
        ';', 105,
        'A', 585,
        'S', 569,
        'T', 587,
        '\\', 7,
        'a', 586,
        'f', 572,
        'g', 580,
        'r', 574,
        's', 570,
        't', 588,
        'z', 578,
        '~', 442,
        'C', 584,
        'c', 584,
        'K', 583,
        'k', 583,
        'V', 583,
        'v', 583,
        '1', 454,
        '2', 454,
        'F', 573,
        'R', 573,
        'X', 573,
        'x', 573,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(454);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(589);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        '!', 443,
        '"', 468,
        '#', 118,
        '$', 44,
        '%', 50,
        '\'', 464,
        '(', 122,
        '+', 78,
        ',', 418,
        '-', 441,
        '.', 576,
        '/', 31,
        '0', 448,
        '3', 453,
        ';', 105,
        '=', 424,
        '@', 77,
        'A', 585,
        'S', 569,
        'T', 587,
        '\\', 5,
        'a', 586,
        'f', 572,
        'g', 580,
        'r', 574,
        's', 570,
        't', 588,
        'z', 578,
        '|', 55,
        '~', 442,
        '\t', 24,
        ' ', 24,
        'C', 584,
        'c', 584,
        'K', 583,
        'k', 583,
        'V', 583,
        'v', 583,
        '1', 454,
        '2', 454,
        'F', 573,
        'R', 573,
        'X', 573,
        'x', 573,
      );
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(24);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(454);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(589);
      END_STATE();
    case 25:
      ADVANCE_MAP(
        '!', 49,
        '#', 118,
        '&', 430,
        '(', 122,
        ',', 418,
        '/', 439,
        ';', 105,
        '<', 433,
        '=', 425,
        '>', 434,
      );
      if (lookahead == '\\') SKIP(11);
      if (lookahead == '^') ADVANCE(429);
      if (lookahead == '|') ADVANCE(428);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(437);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(436);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 26:
      ADVANCE_MAP(
        '!', 49,
        '&', 430,
        '(', 122,
        ')', 123,
        ',', 126,
        '/', 438,
        '<', 433,
        '=', 425,
        '>', 434,
      );
      if (lookahead == '\\') SKIP(13);
      if (lookahead == '^') ADVANCE(429);
      if (lookahead == '|') ADVANCE(428);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(437);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(436);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(468);
      if (lookahead == '/') ADVANCE(470);
      if (lookahead == '\\') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(471);
      if (lookahead != 0) ADVANCE(469);
      END_STATE();
    case 28:
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == ',') ADVANCE(126);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(547);
      if (lookahead == '$' ||
          lookahead == '%') ADVANCE(547);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 29:
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(547);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '%') ADVANCE(547);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(29);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '/') ADVANCE(118);
      END_STATE();
    case 32:
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(121);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == '*') ADVANCE(34);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == ':') ADVANCE(565);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == '/') ADVANCE(466);
      if (lookahead == '\\') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(465);
      END_STATE();
    case 37:
      if (lookahead == '1') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(475);
      END_STATE();
    case 38:
      if (lookahead == '1') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(475);
      END_STATE();
    case 39:
      ADVANCE_MAP(
        '2', 224,
        '4', 230,
        '8', 232,
        ':', 568,
        'L', 35,
        'a', 311,
        'b', 218,
        'c', 347,
        'd', 351,
        'f', 313,
        'h', 219,
        'i', 339,
        'l', 240,
        'm', 211,
        'p', 200,
        'q', 406,
        's', 290,
        'u', 320,
        'w', 352,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      END_STATE();
    case 40:
      ADVANCE_MAP(
        '3', 484,
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
        '1', 487,
        '2', 487,
        'F', 42,
        'R', 42,
        'X', 42,
        'x', 42,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(475);
      END_STATE();
    case 41:
      if (lookahead == '3') ADVANCE(484);
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(487);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(475);
      END_STATE();
    case 42:
      if (lookahead == '3') ADVANCE(484);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(475);
      END_STATE();
    case 43:
      if (lookahead == '3') ADVANCE(484);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(475);
      END_STATE();
    case 44:
      ADVANCE_MAP(
        '3', 485,
        'A', 541,
        'S', 492,
        'T', 543,
        'a', 542,
        'f', 497,
        'g', 529,
        'r', 499,
        's', 493,
        't', 544,
        'z', 512,
        'C', 540,
        'c', 540,
        'K', 539,
        'k', 539,
        'V', 539,
        'v', 539,
        '1', 488,
        '2', 488,
        'F', 498,
        'R', 498,
        'X', 498,
        'x', 498,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(546);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(591);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 49:
      if (lookahead == '=') ADVANCE(431);
      END_STATE();
    case 50:
      ADVANCE_MAP(
        'a', 507,
        'c', 505,
        'd', 536,
        'g', 527,
        'h', 518,
        'l', 526,
        'p', 508,
        't', 522,
      );
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(475);
      END_STATE();
    case 53:
      if (lookahead == 'p') ADVANCE(475);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 55:
      if (lookahead == '|') ADVANCE(426);
      END_STATE();
    case 56:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(458);
      END_STATE();
    case 57:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(462);
      END_STATE();
    case 58:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(475);
      END_STATE();
    case 59:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(452);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(475);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(475);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(475);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(475);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(460);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(458);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(462);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(475);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(472);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(456);
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
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 78:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(421);
      END_STATE();
    case 79:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 80:
      if (eof) ADVANCE(104);
      ADVANCE_MAP(
        '\t', 129,
        '\n', 110,
        '\r', 106,
        ' ', 127,
        '!', 443,
        '#', 118,
        '$', 44,
        '%', 50,
        '\'', 464,
        '(', 122,
        ',', 126,
        '-', 441,
        '.', 577,
        '/', 31,
        '0', 448,
        '3', 453,
        ';', 105,
        '=', 424,
        'A', 585,
        'S', 569,
        'T', 587,
        '\\', 9,
        'a', 586,
        'f', 572,
        'g', 580,
        'r', 574,
        's', 570,
        't', 588,
        'z', 578,
        '|', 55,
        '~', 442,
        'C', 584,
        'c', 584,
        'K', 583,
        'k', 583,
        'V', 583,
        'v', 583,
      );
      if (lookahead == 0x0b ||
          lookahead == '\f') SKIP(80);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(454);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(573);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(454);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(589);
      END_STATE();
    case 81:
      if (eof) ADVANCE(104);
      ADVANCE_MAP(
        '\t', 130,
        '\n', 111,
        '\r', 107,
        ' ', 128,
        '!', 49,
        '#', 118,
        '&', 430,
        '(', 122,
        ',', 126,
        '/', 439,
        ';', 105,
        '<', 433,
        '=', 425,
        '>', 434,
      );
      if (lookahead == '\\') SKIP(89);
      if (lookahead == '^') ADVANCE(429);
      if (lookahead == '|') ADVANCE(428);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(437);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(436);
      if (lookahead == 0x0b ||
          lookahead == '\f') SKIP(81);
      END_STATE();
    case 82:
      if (eof) ADVANCE(104);
      if (lookahead == '\n') SKIP(84);
      END_STATE();
    case 83:
      if (eof) ADVANCE(104);
      if (lookahead == '\n') SKIP(84);
      if (lookahead == '\r') SKIP(82);
      END_STATE();
    case 84:
      if (eof) ADVANCE(104);
      ADVANCE_MAP(
        '\n', 112,
        '\r', 108,
        '#', 118,
        '%', 79,
        '.', 39,
        '/', 31,
        '0', 46,
        ';', 105,
      );
      if (lookahead == '\\') SKIP(83);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(84);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 85:
      if (eof) ADVANCE(104);
      if (lookahead == '\n') SKIP(87);
      END_STATE();
    case 86:
      if (eof) ADVANCE(104);
      if (lookahead == '\n') SKIP(87);
      if (lookahead == '\r') SKIP(85);
      END_STATE();
    case 87:
      if (eof) ADVANCE(104);
      ADVANCE_MAP(
        '\n', 113,
        '\r', 109,
        '#', 118,
        '%', 79,
        '.', 39,
        '/', 31,
        '0', 46,
        ';', 105,
      );
      if (lookahead == '\\') SKIP(86);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead == 0x0b ||
          lookahead == '\f') SKIP(87);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 88:
      if (eof) ADVANCE(104);
      if (lookahead == '\n') SKIP(81);
      END_STATE();
    case 89:
      if (eof) ADVANCE(104);
      if (lookahead == '\n') SKIP(81);
      if (lookahead == '\r') SKIP(88);
      END_STATE();
    case 90:
      if (eof) ADVANCE(104);
      if (lookahead == '\n') SKIP(103);
      END_STATE();
    case 91:
      if (eof) ADVANCE(104);
      if (lookahead == '\n') SKIP(103);
      if (lookahead == '\r') SKIP(90);
      END_STATE();
    case 92:
      if (eof) ADVANCE(104);
      if (lookahead == '\n') SKIP(102);
      END_STATE();
    case 93:
      if (eof) ADVANCE(104);
      if (lookahead == '\n') SKIP(102);
      if (lookahead == '\r') SKIP(92);
      END_STATE();
    case 94:
      if (eof) ADVANCE(104);
      if (lookahead == '\n') SKIP(101);
      END_STATE();
    case 95:
      if (eof) ADVANCE(104);
      if (lookahead == '\n') SKIP(101);
      if (lookahead == '\r') SKIP(94);
      END_STATE();
    case 96:
      if (eof) ADVANCE(104);
      if (lookahead == '\n') SKIP(98);
      END_STATE();
    case 97:
      if (eof) ADVANCE(104);
      if (lookahead == '\n') SKIP(98);
      if (lookahead == '\r') SKIP(96);
      END_STATE();
    case 98:
      if (eof) ADVANCE(104);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead == '\\') SKIP(97);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(98);
      END_STATE();
    case 99:
      if (eof) ADVANCE(104);
      ADVANCE_MAP(
        '!', 443,
        '"', 468,
        '#', 118,
        '$', 44,
        '%', 50,
        '\'', 464,
        '(', 122,
        ')', 123,
        '-', 441,
        '.', 577,
        '/', 31,
        '0', 448,
        '3', 453,
        ';', 105,
        'A', 585,
        'S', 569,
        'T', 587,
        '\\', 7,
        'a', 586,
        'f', 572,
        'g', 580,
        'r', 574,
        's', 570,
        't', 588,
        'z', 578,
        '~', 442,
        'C', 584,
        'c', 584,
        'K', 583,
        'k', 583,
        'V', 583,
        'v', 583,
        '1', 454,
        '2', 454,
        'F', 573,
        'R', 573,
        'X', 573,
        'x', 573,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(99);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(454);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(589);
      END_STATE();
    case 100:
      if (eof) ADVANCE(104);
      ADVANCE_MAP(
        '!', 443,
        '"', 468,
        '#', 118,
        '$', 44,
        '%', 50,
        '\'', 464,
        '(', 122,
        '+', 78,
        ',', 418,
        '-', 441,
        '.', 576,
        '/', 31,
        '0', 448,
        '3', 453,
        ';', 105,
        '=', 424,
        '@', 77,
        'A', 585,
        'S', 569,
        'T', 587,
        '\\', 5,
        'a', 586,
        'f', 572,
        'g', 580,
        'r', 574,
        's', 570,
        't', 588,
        'z', 578,
        '|', 55,
        '~', 442,
        '\t', 24,
        ' ', 24,
        'C', 584,
        'c', 584,
        'K', 583,
        'k', 583,
        'V', 583,
        'v', 583,
        '1', 454,
        '2', 454,
        'F', 573,
        'R', 573,
        'X', 573,
        'x', 573,
      );
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(100);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(454);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(589);
      END_STATE();
    case 101:
      if (eof) ADVANCE(104);
      ADVANCE_MAP(
        '!', 49,
        '#', 118,
        '&', 430,
        '(', 122,
        ')', 123,
        ',', 126,
        '/', 439,
        ';', 105,
        '<', 433,
        '=', 425,
        '>', 434,
      );
      if (lookahead == '\\') SKIP(95);
      if (lookahead == '^') ADVANCE(429);
      if (lookahead == '|') ADVANCE(428);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(437);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(436);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(101);
      END_STATE();
    case 102:
      if (eof) ADVANCE(104);
      ADVANCE_MAP(
        '!', 49,
        '#', 118,
        '&', 430,
        '(', 122,
        ',', 126,
        '/', 439,
        ';', 105,
        '<', 433,
        '=', 425,
        '>', 434,
      );
      if (lookahead == '\\') SKIP(93);
      if (lookahead == '^') ADVANCE(429);
      if (lookahead == '|') ADVANCE(428);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(437);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(436);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(102);
      END_STATE();
    case 103:
      if (eof) ADVANCE(104);
      ADVANCE_MAP(
        '!', 49,
        '#', 118,
        '&', 430,
        '(', 122,
        ',', 418,
        '/', 439,
        ';', 105,
        '<', 433,
        '=', 425,
        '>', 434,
      );
      if (lookahead == '\\') SKIP(91);
      if (lookahead == '^') ADVANCE(429);
      if (lookahead == '|') ADVANCE(428);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(437);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(436);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t') ADVANCE(129);
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead == '\r') ADVANCE(106);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(9);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t') ADVANCE(130);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '\r') ADVANCE(107);
      if (lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '\r') ADVANCE(108);
      if (lookahead == '%') ADVANCE(79);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '0') ADVANCE(46);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == '\r') ADVANCE(109);
      if (lookahead == '%') ADVANCE(79);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '0') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(115);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(129);
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead == '\r') ADVANCE(106);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(9);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(130);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '\r') ADVANCE(107);
      if (lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '\r') ADVANCE(108);
      if (lookahead == '%') ADVANCE(79);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '0') ADVANCE(46);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == '\r') ADVANCE(109);
      if (lookahead == '%') ADVANCE(79);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '0') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(115);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\n') ADVANCE(114);
      if (lookahead == '\r') ADVANCE(18);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == '\r') ADVANCE(109);
      if (lookahead == '%') ADVANCE(79);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '0') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(115);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\\') ADVANCE(547);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead != 0) ADVANCE(118);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_block_comment);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_macro_mnemonic);
      if (lookahead == ':') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_macro_mnemonic);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(129);
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead == '\r') ADVANCE(106);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(9);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(130);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '\r') ADVANCE(107);
      if (lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(129);
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead == '\r') ADVANCE(106);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(9);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(130);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '\r') ADVANCE(107);
      if (lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_DOTbyte);
      if (lookahead == ':') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_DOTbyte);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_DOT2byte);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_DOT2byte);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_DOTshort);
      if (lookahead == ':') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_DOTshort);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_DOThalf);
      if (lookahead == ':') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_DOThalf);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_DOThword);
      if (lookahead == ':') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_DOThword);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_DOT4byte);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_DOT4byte);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_DOTword);
      if (lookahead == ':') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_DOTword);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_DOTint);
      if (lookahead == ':') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_DOTint);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_DOT8byte);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_DOT8byte);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_DOTdword);
      if (lookahead == ':') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_DOTdword);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DOTlong);
      if (lookahead == ':') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_DOTlong);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_DOTquad);
      if (lookahead == ':') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_DOTquad);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_DOTcomm);
      if (lookahead == ':') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_DOTcomm);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_DOTlcomm);
      if (lookahead == ':') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_DOTlcomm);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_DOTalign);
      if (lookahead == ':') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_DOTalign);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_DOTbalign);
      if (lookahead == ':') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_DOTbalign);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_DOTp2align);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_DOTp2align);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_DOTsleb128);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_DOTsleb128);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_DOTuleb128);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_DOTuleb128);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_DOTdtprelword);
      if (lookahead == ':') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_DOTdtprelword);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_DOTdtpreldword);
      if (lookahead == ':') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_DOTdtpreldword);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_DOTskip);
      if (lookahead == ':') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_DOTskip);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_DOTspace);
      if (lookahead == ':') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_DOTspace);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_DOTfloat);
      if (lookahead == ':') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_DOTfloat);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_DOTdouble);
      if (lookahead == ':') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_DOTdouble);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_DOTsingle);
      if (lookahead == ':') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_DOTsingle);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_DOTasciz);
      if (lookahead == ':') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_DOTasciz);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_DOTascii);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'z') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'y')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_DOTascii);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'z') ADVANCE(188);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(417);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DOTasciiz);
      if (lookahead == ':') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DOTasciiz);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_DOTstring);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'z') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'y')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_DOTstring);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'z') ADVANCE(192);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(417);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_DOTstringz);
      if (lookahead == ':') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_DOTstringz);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(198);
      if (lookahead == ':') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(201);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(199);
      if (lookahead == ':') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(202);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(207);
      if (lookahead == ':') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(203);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(204);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(220);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(205);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(206);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(165);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(167);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(166);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(168);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(307);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(248);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(237);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(318);
      if (lookahead == 'y') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(238);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(306);
      if (lookahead == 'w') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(394);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(319);
      if (lookahead == 'y') ADVANCE(399);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(309);
      if (lookahead == 'w') ADVANCE(362);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(321);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(409);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(194);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(411);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(316);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(410);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(196);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(412);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'b') ADVANCE(414);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'c') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'c') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'c') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'c') ADVANCE(295);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'c') ADVANCE(380);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'c') ADVANCE(263);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'c') ADVANCE(357);
      if (lookahead == 'o') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'c') ADVANCE(358);
      if (lookahead == 'o') ADVANCE(341);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'd') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'd') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'd') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'd') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'd') ADVANCE(407);
      if (lookahead == 'w') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'd') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'd') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'd') ADVANCE(154);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'd') ADVANCE(144);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'd') ADVANCE(150);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'd') ADVANCE(140);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'd') ADVANCE(408);
      if (lookahead == 'w') ADVANCE(364);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'd') ADVANCE(170);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'e') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'e') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'e') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'e') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'e') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'e') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'e') ADVANCE(310);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'e') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'e') ADVANCE(229);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'f') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'g') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'g') ADVANCE(333);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'g') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'g') ADVANCE(152);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'g') ADVANCE(190);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'g') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'g') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'g') ADVANCE(334);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'g') ADVANCE(335);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'g') ADVANCE(338);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'g') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'g') ADVANCE(317);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'h') ADVANCE(355);
      if (lookahead == 'i') ADVANCE(340);
      if (lookahead == 'k') ADVANCE(297);
      if (lookahead == 'l') ADVANCE(266);
      if (lookahead == 'p') ADVANCE(213);
      if (lookahead == 't') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'h') ADVANCE(356);
      if (lookahead == 'i') ADVANCE(343);
      if (lookahead == 'k') ADVANCE(299);
      if (lookahead == 'l') ADVANCE(270);
      if (lookahead == 'p') ADVANCE(215);
      if (lookahead == 't') ADVANCE(384);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'i') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'i') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'i') ADVANCE(185);
      if (lookahead == 'z') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'y')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'i') ADVANCE(278);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'i') ADVANCE(296);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 'z') ADVANCE(184);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(417);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'i') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'i') ADVANCE(284);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'i') ADVANCE(368);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'i') ADVANCE(344);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'i') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'i') ADVANCE(285);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'i') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'i') ADVANCE(286);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'l') ADVANCE(291);
      if (lookahead == 's') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'l') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'l') ADVANCE(294);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'l') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'l') ADVANCE(276);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'l') ADVANCE(252);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'l') ADVANCE(298);
      if (lookahead == 's') ADVANCE(236);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'l') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'l') ADVANCE(354);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'l') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'l') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'l') ADVANCE(264);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'l') ADVANCE(265);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'l') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'l') ADVANCE(302);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'l') ADVANCE(274);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'l') ADVANCE(304);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'l') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'm') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'm') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'm') ADVANCE(156);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'm') ADVANCE(158);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'm') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'm') ADVANCE(325);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'm') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'm') ADVANCE(326);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'n') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'n') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'n') ADVANCE(163);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'n') ADVANCE(160);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'n') ADVANCE(162);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'n') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'n') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'n') ADVANCE(164);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'n') ADVANCE(393);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'n') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'n') ADVANCE(280);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'n') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'n') ADVANCE(288);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'n') ADVANCE(281);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'o') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'o') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'o') ADVANCE(328);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'o') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'o') ADVANCE(403);
      if (lookahead == 't') ADVANCE(369);
      if (lookahead == 'w') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'o') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'o') ADVANCE(405);
      if (lookahead == 't') ADVANCE(370);
      if (lookahead == 'w') ADVANCE(360);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'o') ADVANCE(372);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'o') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'o') ADVANCE(217);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'o') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'o') ADVANCE(382);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'o') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'o') ADVANCE(330);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'o') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'o') ADVANCE(375);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'o') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'o') ADVANCE(381);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'o') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'o') ADVANCE(385);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'o') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'o') ADVANCE(387);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'p') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'p') ADVANCE(174);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'p') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'p') ADVANCE(388);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'r') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'r') ADVANCE(249);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'r') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'r') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'r') ADVANCE(250);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'r') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'r') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'r') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'r') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'r') ADVANCE(348);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'r') ADVANCE(251);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'r') ADVANCE(395);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'r') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'r') ADVANCE(300);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'r') ADVANCE(253);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'r') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'r') ADVANCE(254);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'r') ADVANCE(272);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 't') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 't') ADVANCE(256);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 't') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 't') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 't') ADVANCE(146);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 't') ADVANCE(178);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 't') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 't') ADVANCE(257);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 't') ADVANCE(258);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 't') ADVANCE(262);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 't') ADVANCE(267);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 't') ADVANCE(268);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 't') ADVANCE(269);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'u') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'u') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'u') ADVANCE(226);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'u') ADVANCE(209);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'w') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'w') ADVANCE(366);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'y') ADVANCE(390);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'y') ADVANCE(397);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'y') ADVANCE(400);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'y') ADVANCE(398);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'y') ADVANCE(401);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'y') ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym__control_operand_separator_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(418);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(419);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(589);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_option_flag_token1);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '$') ADVANCE(45);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(422);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_assignment_operator);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_assignment_operator);
      if (lookahead == '=') ADVANCE(431);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_logical_or_operator);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_logical_and_operator);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_bitwise_or_operator);
      if (lookahead == '|') ADVANCE(426);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_bitwise_xor_operator);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_bitwise_and_operator);
      if (lookahead == '&') ADVANCE(427);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_equality_operator);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_relational_operator);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_relational_operator);
      if (lookahead == '<') ADVANCE(435);
      if (lookahead == '=') ADVANCE(432);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_relational_operator);
      if (lookahead == '=') ADVANCE(432);
      if (lookahead == '>') ADVANCE(435);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_shift_operator);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_additive_operator);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_multiplicative_operator);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_multiplicative_operator);
      if (lookahead == '*') ADVANCE(33);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_multiplicative_operator);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead == '/') ADVANCE(118);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_unary_minus_operator);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_unary_minus_operator);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '0') ADVANCE(449);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(455);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_bitwise_not_operator);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_logical_not_operator);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_logical_not_operator);
      if (lookahead == '=') ADVANCE(431);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_relocation_type);
      if (lookahead == '_') ADVANCE(517);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_relocation_type);
      if (lookahead == '_') ADVANCE(506);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_relocation_type);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_octal);
      ADVANCE_MAP(
        '.', 460,
        'B', 59,
        'b', 593,
        'f', 592,
        'o', 451,
        'E', 56,
        'e', 56,
        'X', 69,
        'x', 69,
        '8', 455,
        '9', 455,
      );
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(450);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_octal);
      ADVANCE_MAP(
        '.', 460,
        'o', 451,
        'B', 59,
        'b', 59,
        'E', 56,
        'e', 56,
        'X', 69,
        'x', 69,
        '8', 455,
        '9', 455,
      );
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(450);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_octal);
      if (lookahead == '.') ADVANCE(460);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(56);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(450);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_octal);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(451);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_binary);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(452);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(460);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(56);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(592);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(455);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(455);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(460);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(56);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(460);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(456);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'f') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(458);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(582);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(460);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(462);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '*') ADVANCE(33);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '/') ADVANCE(466);
      if (lookahead == '\\') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(465);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(33);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(470);
      if (lookahead == '\\') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(469);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(472);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(473);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.') ADVANCE(575);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(478);
      if (lookahead == '$' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.') ADVANCE(575);
      if (lookahead == ':') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.') ADVANCE(575);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(591);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(592);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(591);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(592);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(483);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(591);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(483);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(591);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(475);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(491);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('2' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(490);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(475);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(490);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(491);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(501);
      if (lookahead == '3') ADVANCE(496);
      if (lookahead == 'r') ADVANCE(514);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(501);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '2') ADVANCE(447);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '3') ADVANCE(485);
      if (lookahead == 'a') ADVANCE(541);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(488);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(491);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '3') ADVANCE(485);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '3') ADVANCE(485);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(491);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '4') ADVANCE(447);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '6') ADVANCE(447);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '6') ADVANCE(500);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '_') ADVANCE(517);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '_') ADVANCE(516);
      if (lookahead == 'g') ADVANCE(510);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'a') ADVANCE(523);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'a') ADVANCE(511);
      if (lookahead == 'h') ADVANCE(518);
      if (lookahead == 'l') ADVANCE(526);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'b') ADVANCE(534);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'c') ADVANCE(494);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'd') ADVANCE(447);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'd') ADVANCE(503);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'd') ADVANCE(509);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(531);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(519);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(521);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(524);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'g') ADVANCE(528);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'h') ADVANCE(518);
      if (lookahead == 'l') ADVANCE(526);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'i') ADVANCE(447);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(447);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(495);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(503);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(535);
      if (lookahead == 'p') ADVANCE(533);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(520);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(446);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(491);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(447);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(537);
      if (lookahead == 'p') ADVANCE(532);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(538);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'p') ADVANCE(491);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'p') ADVANCE(532);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'r') ADVANCE(525);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'r') ADVANCE(513);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'r') ADVANCE(515);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 's') ADVANCE(502);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 's') ADVANCE(504);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 't') ADVANCE(530);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 't') ADVANCE(445);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 't') ADVANCE(503);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(491);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('2' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(491);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('4' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(491);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('8' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(491);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('8' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(491);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(545);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(546);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_macro_parameter);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(547);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(575);
      if (lookahead == '1') ADVANCE(476);
      if (lookahead == ':') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(575);
      if (lookahead == '1') ADVANCE(476);
      if (lookahead == ':') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(478);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(575);
      if (lookahead == '3') ADVANCE(476);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(559);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(477);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(478);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(575);
      if (lookahead == '3') ADVANCE(476);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(575);
      if (lookahead == '3') ADVANCE(476);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(478);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(575);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'e') ADVANCE(556);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(575);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'o') ADVANCE(478);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(575);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'p') ADVANCE(478);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(575);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == 'r') ADVANCE(554);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(575);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(478);
      if (lookahead == '$' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(575);
      if (lookahead == ':') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(478);
      if (lookahead == '$' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(575);
      if (lookahead == ':') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(478);
      if (lookahead == '$' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(575);
      if (lookahead == ':') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(478);
      if (lookahead == '$' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(575);
      if (lookahead == ':') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(575);
      if (lookahead == ':') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(478);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(575);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(563);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_local_label);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_local_label_reference_token1);
      if (lookahead == '.') ADVANCE(575);
      if (lookahead == ':') ADVANCE(565);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_local_label_reference_token1);
      if (lookahead == '.') ADVANCE(589);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(567);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_global_label);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '1') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(490);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '1') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(490);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      ADVANCE_MAP(
        '2', 221,
        '4', 227,
        '8', 231,
        ':', 568,
        'L', 566,
        'a', 305,
        'b', 212,
        'c', 345,
        'd', 349,
        'f', 312,
        'h', 216,
        'i', 336,
        'l', 239,
        'm', 210,
        'p', 197,
        'q', 404,
        's', 289,
        'u', 322,
        'w', 350,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(416);
      if (('e' <= lookahead && lookahead <= 'z')) ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(575);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '3') ADVANCE(486);
      if (lookahead == 'a') ADVANCE(585);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(489);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(490);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '3') ADVANCE(486);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(490);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '3') ADVANCE(486);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(490);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == ':') ADVANCE(568);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'L') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(459);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(420);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(589);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'L') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(459);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'e') ADVANCE(581);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'o') ADVANCE(490);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'p') ADVANCE(490);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'r') ADVANCE(579);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(461);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(490);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(490);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(490);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(490);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(490);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(490);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_global_numeric_label);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_local_numeric_label);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_local_numeric_label_reference);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_local_numeric_label_reference);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(452);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 84, .external_lex_state = 2},
  [2] = {.lex_state = 100, .external_lex_state = 3},
  [3] = {.lex_state = 99, .external_lex_state = 3},
  [4] = {.lex_state = 80, .external_lex_state = 4},
  [5] = {.lex_state = 100, .external_lex_state = 2},
  [6] = {.lex_state = 84, .external_lex_state = 2},
  [7] = {.lex_state = 84, .external_lex_state = 2},
  [8] = {.lex_state = 99, .external_lex_state = 3},
  [9] = {.lex_state = 99, .external_lex_state = 3},
  [10] = {.lex_state = 100, .external_lex_state = 2},
  [11] = {.lex_state = 99, .external_lex_state = 2},
  [12] = {.lex_state = 99, .external_lex_state = 2},
  [13] = {.lex_state = 99, .external_lex_state = 2},
  [14] = {.lex_state = 99, .external_lex_state = 2},
  [15] = {.lex_state = 99, .external_lex_state = 2},
  [16] = {.lex_state = 99, .external_lex_state = 2},
  [17] = {.lex_state = 99, .external_lex_state = 2},
  [18] = {.lex_state = 99, .external_lex_state = 2},
  [19] = {.lex_state = 99, .external_lex_state = 2},
  [20] = {.lex_state = 99, .external_lex_state = 2},
  [21] = {.lex_state = 99, .external_lex_state = 2},
  [22] = {.lex_state = 99, .external_lex_state = 2},
  [23] = {.lex_state = 99, .external_lex_state = 2},
  [24] = {.lex_state = 99, .external_lex_state = 2},
  [25] = {.lex_state = 99, .external_lex_state = 2},
  [26] = {.lex_state = 99, .external_lex_state = 2},
  [27] = {.lex_state = 99, .external_lex_state = 2},
  [28] = {.lex_state = 99, .external_lex_state = 2},
  [29] = {.lex_state = 99, .external_lex_state = 2},
  [30] = {.lex_state = 99, .external_lex_state = 2},
  [31] = {.lex_state = 99, .external_lex_state = 2},
  [32] = {.lex_state = 99, .external_lex_state = 2},
  [33] = {.lex_state = 99, .external_lex_state = 2},
  [34] = {.lex_state = 99, .external_lex_state = 2},
  [35] = {.lex_state = 99, .external_lex_state = 2},
  [36] = {.lex_state = 99, .external_lex_state = 2},
  [37] = {.lex_state = 99, .external_lex_state = 2},
  [38] = {.lex_state = 99, .external_lex_state = 2},
  [39] = {.lex_state = 99, .external_lex_state = 2},
  [40] = {.lex_state = 99, .external_lex_state = 2},
  [41] = {.lex_state = 99, .external_lex_state = 2},
  [42] = {.lex_state = 99, .external_lex_state = 2},
  [43] = {.lex_state = 99, .external_lex_state = 2},
  [44] = {.lex_state = 99, .external_lex_state = 2},
  [45] = {.lex_state = 99, .external_lex_state = 2},
  [46] = {.lex_state = 99, .external_lex_state = 2},
  [47] = {.lex_state = 99, .external_lex_state = 2},
  [48] = {.lex_state = 99, .external_lex_state = 2},
  [49] = {.lex_state = 99, .external_lex_state = 2},
  [50] = {.lex_state = 99, .external_lex_state = 2},
  [51] = {.lex_state = 99, .external_lex_state = 2},
  [52] = {.lex_state = 99, .external_lex_state = 2},
  [53] = {.lex_state = 99, .external_lex_state = 2},
  [54] = {.lex_state = 99, .external_lex_state = 2},
  [55] = {.lex_state = 99, .external_lex_state = 2},
  [56] = {.lex_state = 99, .external_lex_state = 2},
  [57] = {.lex_state = 99, .external_lex_state = 2},
  [58] = {.lex_state = 99, .external_lex_state = 2},
  [59] = {.lex_state = 99, .external_lex_state = 2},
  [60] = {.lex_state = 99, .external_lex_state = 2},
  [61] = {.lex_state = 99, .external_lex_state = 2},
  [62] = {.lex_state = 99, .external_lex_state = 2},
  [63] = {.lex_state = 99, .external_lex_state = 2},
  [64] = {.lex_state = 99, .external_lex_state = 2},
  [65] = {.lex_state = 99, .external_lex_state = 2},
  [66] = {.lex_state = 99, .external_lex_state = 2},
  [67] = {.lex_state = 99, .external_lex_state = 2},
  [68] = {.lex_state = 99, .external_lex_state = 2},
  [69] = {.lex_state = 99, .external_lex_state = 2},
  [70] = {.lex_state = 99, .external_lex_state = 2},
  [71] = {.lex_state = 99, .external_lex_state = 2},
  [72] = {.lex_state = 99, .external_lex_state = 2},
  [73] = {.lex_state = 99, .external_lex_state = 2},
  [74] = {.lex_state = 99, .external_lex_state = 2},
  [75] = {.lex_state = 99, .external_lex_state = 2},
  [76] = {.lex_state = 99, .external_lex_state = 2},
  [77] = {.lex_state = 99, .external_lex_state = 2},
  [78] = {.lex_state = 99, .external_lex_state = 2},
  [79] = {.lex_state = 99, .external_lex_state = 2},
  [80] = {.lex_state = 99, .external_lex_state = 2},
  [81] = {.lex_state = 99, .external_lex_state = 2},
  [82] = {.lex_state = 99, .external_lex_state = 2},
  [83] = {.lex_state = 99, .external_lex_state = 2},
  [84] = {.lex_state = 99, .external_lex_state = 2},
  [85] = {.lex_state = 99, .external_lex_state = 2},
  [86] = {.lex_state = 99, .external_lex_state = 2},
  [87] = {.lex_state = 99, .external_lex_state = 2},
  [88] = {.lex_state = 99, .external_lex_state = 2},
  [89] = {.lex_state = 99, .external_lex_state = 2},
  [90] = {.lex_state = 99, .external_lex_state = 2},
  [91] = {.lex_state = 99, .external_lex_state = 2},
  [92] = {.lex_state = 99, .external_lex_state = 2},
  [93] = {.lex_state = 99, .external_lex_state = 2},
  [94] = {.lex_state = 99, .external_lex_state = 2},
  [95] = {.lex_state = 99, .external_lex_state = 2},
  [96] = {.lex_state = 99, .external_lex_state = 2},
  [97] = {.lex_state = 99, .external_lex_state = 2},
  [98] = {.lex_state = 99, .external_lex_state = 2},
  [99] = {.lex_state = 99, .external_lex_state = 2},
  [100] = {.lex_state = 99, .external_lex_state = 2},
  [101] = {.lex_state = 99, .external_lex_state = 2},
  [102] = {.lex_state = 99, .external_lex_state = 2},
  [103] = {.lex_state = 99, .external_lex_state = 2},
  [104] = {.lex_state = 87, .external_lex_state = 2},
  [105] = {.lex_state = 84, .external_lex_state = 2},
  [106] = {.lex_state = 84, .external_lex_state = 2},
  [107] = {.lex_state = 84, .external_lex_state = 2},
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
  [150] = {.lex_state = 81, .external_lex_state = 1},
  [151] = {.lex_state = 103, .external_lex_state = 1},
  [152] = {.lex_state = 103, .external_lex_state = 1},
  [153] = {.lex_state = 103, .external_lex_state = 1},
  [154] = {.lex_state = 103, .external_lex_state = 1},
  [155] = {.lex_state = 103, .external_lex_state = 1},
  [156] = {.lex_state = 103, .external_lex_state = 1},
  [157] = {.lex_state = 103, .external_lex_state = 1},
  [158] = {.lex_state = 103, .external_lex_state = 1},
  [159] = {.lex_state = 103, .external_lex_state = 1},
  [160] = {.lex_state = 103, .external_lex_state = 1},
  [161] = {.lex_state = 103, .external_lex_state = 1},
  [162] = {.lex_state = 103, .external_lex_state = 1},
  [163] = {.lex_state = 103, .external_lex_state = 1},
  [164] = {.lex_state = 103, .external_lex_state = 1},
  [165] = {.lex_state = 103, .external_lex_state = 1},
  [166] = {.lex_state = 103, .external_lex_state = 1},
  [167] = {.lex_state = 103, .external_lex_state = 1},
  [168] = {.lex_state = 103, .external_lex_state = 1},
  [169] = {.lex_state = 103, .external_lex_state = 1},
  [170] = {.lex_state = 103, .external_lex_state = 1},
  [171] = {.lex_state = 103, .external_lex_state = 1},
  [172] = {.lex_state = 103, .external_lex_state = 1},
  [173] = {.lex_state = 103, .external_lex_state = 1},
  [174] = {.lex_state = 103, .external_lex_state = 1},
  [175] = {.lex_state = 103, .external_lex_state = 1},
  [176] = {.lex_state = 103, .external_lex_state = 1},
  [177] = {.lex_state = 103, .external_lex_state = 1},
  [178] = {.lex_state = 103, .external_lex_state = 1},
  [179] = {.lex_state = 103, .external_lex_state = 1},
  [180] = {.lex_state = 103, .external_lex_state = 1},
  [181] = {.lex_state = 103, .external_lex_state = 1},
  [182] = {.lex_state = 103, .external_lex_state = 1},
  [183] = {.lex_state = 103, .external_lex_state = 1},
  [184] = {.lex_state = 103, .external_lex_state = 1},
  [185] = {.lex_state = 103, .external_lex_state = 1},
  [186] = {.lex_state = 103, .external_lex_state = 1},
  [187] = {.lex_state = 103, .external_lex_state = 1},
  [188] = {.lex_state = 103, .external_lex_state = 1},
  [189] = {.lex_state = 103, .external_lex_state = 1},
  [190] = {.lex_state = 103, .external_lex_state = 1},
  [191] = {.lex_state = 103, .external_lex_state = 1},
  [192] = {.lex_state = 103, .external_lex_state = 1},
  [193] = {.lex_state = 103, .external_lex_state = 1},
  [194] = {.lex_state = 102, .external_lex_state = 5},
  [195] = {.lex_state = 102, .external_lex_state = 5},
  [196] = {.lex_state = 102, .external_lex_state = 5},
  [197] = {.lex_state = 102, .external_lex_state = 5},
  [198] = {.lex_state = 102, .external_lex_state = 5},
  [199] = {.lex_state = 102, .external_lex_state = 5},
  [200] = {.lex_state = 102, .external_lex_state = 5},
  [201] = {.lex_state = 102, .external_lex_state = 5},
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
  [229] = {.lex_state = 102, .external_lex_state = 5},
  [230] = {.lex_state = 102, .external_lex_state = 5},
  [231] = {.lex_state = 102, .external_lex_state = 5},
  [232] = {.lex_state = 102, .external_lex_state = 5},
  [233] = {.lex_state = 102, .external_lex_state = 5},
  [234] = {.lex_state = 102, .external_lex_state = 5},
  [235] = {.lex_state = 102, .external_lex_state = 5},
  [236] = {.lex_state = 102, .external_lex_state = 5},
  [237] = {.lex_state = 102, .external_lex_state = 5},
  [238] = {.lex_state = 101, .external_lex_state = 3},
  [239] = {.lex_state = 101, .external_lex_state = 3},
  [240] = {.lex_state = 101, .external_lex_state = 3},
  [241] = {.lex_state = 101, .external_lex_state = 3},
  [242] = {.lex_state = 101, .external_lex_state = 3},
  [243] = {.lex_state = 26, .external_lex_state = 6},
  [244] = {.lex_state = 26, .external_lex_state = 6},
  [245] = {.lex_state = 26, .external_lex_state = 6},
  [246] = {.lex_state = 26, .external_lex_state = 6},
  [247] = {.lex_state = 26, .external_lex_state = 6},
  [248] = {.lex_state = 26, .external_lex_state = 6},
  [249] = {.lex_state = 26, .external_lex_state = 6},
  [250] = {.lex_state = 26, .external_lex_state = 6},
  [251] = {.lex_state = 26, .external_lex_state = 6},
  [252] = {.lex_state = 26, .external_lex_state = 6},
  [253] = {.lex_state = 26, .external_lex_state = 6},
  [254] = {.lex_state = 26, .external_lex_state = 6},
  [255] = {.lex_state = 26, .external_lex_state = 6},
  [256] = {.lex_state = 26, .external_lex_state = 6},
  [257] = {.lex_state = 26, .external_lex_state = 6},
  [258] = {.lex_state = 26, .external_lex_state = 6},
  [259] = {.lex_state = 26, .external_lex_state = 6},
  [260] = {.lex_state = 26, .external_lex_state = 6},
  [261] = {.lex_state = 26, .external_lex_state = 6},
  [262] = {.lex_state = 26, .external_lex_state = 6},
  [263] = {.lex_state = 26, .external_lex_state = 6},
  [264] = {.lex_state = 26, .external_lex_state = 6},
  [265] = {.lex_state = 26, .external_lex_state = 6},
  [266] = {.lex_state = 26, .external_lex_state = 6},
  [267] = {.lex_state = 26, .external_lex_state = 6},
  [268] = {.lex_state = 26, .external_lex_state = 6},
  [269] = {.lex_state = 26, .external_lex_state = 6},
  [270] = {.lex_state = 26, .external_lex_state = 6},
  [271] = {.lex_state = 26, .external_lex_state = 6},
  [272] = {.lex_state = 26, .external_lex_state = 6},
  [273] = {.lex_state = 26, .external_lex_state = 6},
  [274] = {.lex_state = 26, .external_lex_state = 6},
  [275] = {.lex_state = 26, .external_lex_state = 6},
  [276] = {.lex_state = 26, .external_lex_state = 6},
  [277] = {.lex_state = 26, .external_lex_state = 6},
  [278] = {.lex_state = 26, .external_lex_state = 6},
  [279] = {.lex_state = 26, .external_lex_state = 6},
  [280] = {.lex_state = 80, .external_lex_state = 1},
  [281] = {.lex_state = 26, .external_lex_state = 6},
  [282] = {.lex_state = 26, .external_lex_state = 6},
  [283] = {.lex_state = 26, .external_lex_state = 6},
  [284] = {.lex_state = 26, .external_lex_state = 6},
  [285] = {.lex_state = 26, .external_lex_state = 6},
  [286] = {.lex_state = 26, .external_lex_state = 6},
  [287] = {.lex_state = 26, .external_lex_state = 6},
  [288] = {.lex_state = 26, .external_lex_state = 6},
  [289] = {.lex_state = 26, .external_lex_state = 6},
  [290] = {.lex_state = 26, .external_lex_state = 6},
  [291] = {.lex_state = 26, .external_lex_state = 6},
  [292] = {.lex_state = 26, .external_lex_state = 6},
  [293] = {.lex_state = 26, .external_lex_state = 6},
  [294] = {.lex_state = 26, .external_lex_state = 6},
  [295] = {.lex_state = 26, .external_lex_state = 6},
  [296] = {.lex_state = 26, .external_lex_state = 6},
  [297] = {.lex_state = 26, .external_lex_state = 6},
  [298] = {.lex_state = 26, .external_lex_state = 6},
  [299] = {.lex_state = 80, .external_lex_state = 1},
  [300] = {.lex_state = 26, .external_lex_state = 2},
  [301] = {.lex_state = 80, .external_lex_state = 1},
  [302] = {.lex_state = 80, .external_lex_state = 1},
  [303] = {.lex_state = 26, .external_lex_state = 2},
  [304] = {.lex_state = 26, .external_lex_state = 2},
  [305] = {.lex_state = 26, .external_lex_state = 2},
  [306] = {.lex_state = 26, .external_lex_state = 2},
  [307] = {.lex_state = 26, .external_lex_state = 2},
  [308] = {.lex_state = 26, .external_lex_state = 2},
  [309] = {.lex_state = 26, .external_lex_state = 2},
  [310] = {.lex_state = 26, .external_lex_state = 2},
  [311] = {.lex_state = 26, .external_lex_state = 2},
  [312] = {.lex_state = 26, .external_lex_state = 2},
  [313] = {.lex_state = 26, .external_lex_state = 2},
  [314] = {.lex_state = 26, .external_lex_state = 2},
  [315] = {.lex_state = 26, .external_lex_state = 2},
  [316] = {.lex_state = 26, .external_lex_state = 2},
  [317] = {.lex_state = 26, .external_lex_state = 2},
  [318] = {.lex_state = 26, .external_lex_state = 2},
  [319] = {.lex_state = 26, .external_lex_state = 2},
  [320] = {.lex_state = 26, .external_lex_state = 2},
  [321] = {.lex_state = 26, .external_lex_state = 2},
  [322] = {.lex_state = 26, .external_lex_state = 2},
  [323] = {.lex_state = 26, .external_lex_state = 2},
  [324] = {.lex_state = 26, .external_lex_state = 2},
  [325] = {.lex_state = 26, .external_lex_state = 2},
  [326] = {.lex_state = 80, .external_lex_state = 1},
  [327] = {.lex_state = 26, .external_lex_state = 2},
  [328] = {.lex_state = 80, .external_lex_state = 1},
  [329] = {.lex_state = 26, .external_lex_state = 2},
  [330] = {.lex_state = 26, .external_lex_state = 2},
  [331] = {.lex_state = 26, .external_lex_state = 2},
  [332] = {.lex_state = 26, .external_lex_state = 2},
  [333] = {.lex_state = 26, .external_lex_state = 2},
  [334] = {.lex_state = 26, .external_lex_state = 2},
  [335] = {.lex_state = 26, .external_lex_state = 2},
  [336] = {.lex_state = 26, .external_lex_state = 2},
  [337] = {.lex_state = 26, .external_lex_state = 2},
  [338] = {.lex_state = 26, .external_lex_state = 2},
  [339] = {.lex_state = 26, .external_lex_state = 2},
  [340] = {.lex_state = 26, .external_lex_state = 2},
  [341] = {.lex_state = 26, .external_lex_state = 2},
  [342] = {.lex_state = 26, .external_lex_state = 2},
  [343] = {.lex_state = 26, .external_lex_state = 2},
  [344] = {.lex_state = 26, .external_lex_state = 2},
  [345] = {.lex_state = 26, .external_lex_state = 2},
  [346] = {.lex_state = 26, .external_lex_state = 2},
  [347] = {.lex_state = 80, .external_lex_state = 1},
  [348] = {.lex_state = 80, .external_lex_state = 4},
  [349] = {.lex_state = 100, .external_lex_state = 1},
  [350] = {.lex_state = 80, .external_lex_state = 4},
  [351] = {.lex_state = 80, .external_lex_state = 4},
  [352] = {.lex_state = 80, .external_lex_state = 3},
  [353] = {.lex_state = 100, .external_lex_state = 1},
  [354] = {.lex_state = 100, .external_lex_state = 1},
  [355] = {.lex_state = 100, .external_lex_state = 1},
  [356] = {.lex_state = 100, .external_lex_state = 1},
  [357] = {.lex_state = 80, .external_lex_state = 3},
  [358] = {.lex_state = 80, .external_lex_state = 3},
  [359] = {.lex_state = 0, .external_lex_state = 5},
  [360] = {.lex_state = 0, .external_lex_state = 5},
  [361] = {.lex_state = 100, .external_lex_state = 1},
  [362] = {.lex_state = 101, .external_lex_state = 3},
  [363] = {.lex_state = 100, .external_lex_state = 1},
  [364] = {.lex_state = 101, .external_lex_state = 3},
  [365] = {.lex_state = 101, .external_lex_state = 3},
  [366] = {.lex_state = 100, .external_lex_state = 1},
  [367] = {.lex_state = 101, .external_lex_state = 3},
  [368] = {.lex_state = 100, .external_lex_state = 1},
  [369] = {.lex_state = 0, .external_lex_state = 5},
  [370] = {.lex_state = 0, .external_lex_state = 5},
  [371] = {.lex_state = 100, .external_lex_state = 1},
  [372] = {.lex_state = 0, .external_lex_state = 5},
  [373] = {.lex_state = 0, .external_lex_state = 5},
  [374] = {.lex_state = 101, .external_lex_state = 3},
  [375] = {.lex_state = 101, .external_lex_state = 3},
  [376] = {.lex_state = 101, .external_lex_state = 3},
  [377] = {.lex_state = 0, .external_lex_state = 6},
  [378] = {.lex_state = 0, .external_lex_state = 5},
  [379] = {.lex_state = 0, .external_lex_state = 5},
  [380] = {.lex_state = 101, .external_lex_state = 3},
  [381] = {.lex_state = 101, .external_lex_state = 3},
  [382] = {.lex_state = 101, .external_lex_state = 3},
  [383] = {.lex_state = 0, .external_lex_state = 6},
  [384] = {.lex_state = 101, .external_lex_state = 3},
  [385] = {.lex_state = 0, .external_lex_state = 6},
  [386] = {.lex_state = 0, .external_lex_state = 6},
  [387] = {.lex_state = 101, .external_lex_state = 3},
  [388] = {.lex_state = 0, .external_lex_state = 6},
  [389] = {.lex_state = 0, .external_lex_state = 6},
  [390] = {.lex_state = 0, .external_lex_state = 6},
  [391] = {.lex_state = 29, .external_lex_state = 2},
  [392] = {.lex_state = 0, .external_lex_state = 3},
  [393] = {.lex_state = 0, .external_lex_state = 3},
  [394] = {.lex_state = 0, .external_lex_state = 3},
  [395] = {.lex_state = 0, .external_lex_state = 6},
  [396] = {.lex_state = 0, .external_lex_state = 3},
  [397] = {.lex_state = 0, .external_lex_state = 3},
  [398] = {.lex_state = 0, .external_lex_state = 6},
  [399] = {.lex_state = 27, .external_lex_state = 2},
  [400] = {.lex_state = 0, .external_lex_state = 3},
  [401] = {.lex_state = 0, .external_lex_state = 2},
  [402] = {.lex_state = 27, .external_lex_state = 2},
  [403] = {.lex_state = 0, .external_lex_state = 3},
  [404] = {.lex_state = 0, .external_lex_state = 3},
  [405] = {.lex_state = 101, .external_lex_state = 2},
  [406] = {.lex_state = 27, .external_lex_state = 2},
  [407] = {.lex_state = 29, .external_lex_state = 2},
  [408] = {.lex_state = 0, .external_lex_state = 3},
  [409] = {.lex_state = 27, .external_lex_state = 2},
  [410] = {.lex_state = 0, .external_lex_state = 3},
  [411] = {.lex_state = 0, .external_lex_state = 3},
  [412] = {.lex_state = 0, .external_lex_state = 3},
  [413] = {.lex_state = 27, .external_lex_state = 2},
  [414] = {.lex_state = 101, .external_lex_state = 2},
  [415] = {.lex_state = 0, .external_lex_state = 6},
  [416] = {.lex_state = 27, .external_lex_state = 2},
  [417] = {.lex_state = 27, .external_lex_state = 2},
  [418] = {.lex_state = 27, .external_lex_state = 2},
  [419] = {.lex_state = 101, .external_lex_state = 2},
  [420] = {.lex_state = 27, .external_lex_state = 2},
  [421] = {.lex_state = 0, .external_lex_state = 3},
  [422] = {.lex_state = 0, .external_lex_state = 3},
  [423] = {.lex_state = 0, .external_lex_state = 3},
  [424] = {.lex_state = 0, .external_lex_state = 3},
  [425] = {.lex_state = 0, .external_lex_state = 3},
  [426] = {.lex_state = 0, .external_lex_state = 3},
  [427] = {.lex_state = 0, .external_lex_state = 3},
  [428] = {.lex_state = 0, .external_lex_state = 3},
  [429] = {.lex_state = 0, .external_lex_state = 3},
  [430] = {.lex_state = 0, .external_lex_state = 2},
  [431] = {.lex_state = 0, .external_lex_state = 2},
  [432] = {.lex_state = 0, .external_lex_state = 7},
  [433] = {.lex_state = 0, .external_lex_state = 3},
  [434] = {.lex_state = 0, .external_lex_state = 6},
  [435] = {.lex_state = 101, .external_lex_state = 2},
  [436] = {.lex_state = 0, .external_lex_state = 2},
  [437] = {.lex_state = 28, .external_lex_state = 2},
  [438] = {.lex_state = 101, .external_lex_state = 2},
  [439] = {.lex_state = 0, .external_lex_state = 6},
  [440] = {.lex_state = 0, .external_lex_state = 2},
  [441] = {.lex_state = 0, .external_lex_state = 6},
  [442] = {.lex_state = 0, .external_lex_state = 2},
  [443] = {.lex_state = 36, .external_lex_state = 2},
  [444] = {.lex_state = 0, .external_lex_state = 2},
  [445] = {.lex_state = 0, .external_lex_state = 7},
  [446] = {.lex_state = 0, .external_lex_state = 7},
  [447] = {.lex_state = 0, .external_lex_state = 3},
  [448] = {.lex_state = 28, .external_lex_state = 2},
  [449] = {.lex_state = 36, .external_lex_state = 2},
  [450] = {.lex_state = 101, .external_lex_state = 2},
  [451] = {.lex_state = 36, .external_lex_state = 2},
  [452] = {.lex_state = 36, .external_lex_state = 2},
  [453] = {.lex_state = 28, .external_lex_state = 2},
  [454] = {.lex_state = 0, .external_lex_state = 3},
  [455] = {.lex_state = 98, .external_lex_state = 2},
  [456] = {.lex_state = 36, .external_lex_state = 2},
  [457] = {.lex_state = 101, .external_lex_state = 2},
  [458] = {.lex_state = 98, .external_lex_state = 2},
  [459] = {.lex_state = 0, .external_lex_state = 2},
  [460] = {.lex_state = 0, .external_lex_state = 2},
  [461] = {.lex_state = 0, .external_lex_state = 2},
  [462] = {.lex_state = 0, .external_lex_state = 2},
  [463] = {.lex_state = 0, .external_lex_state = 2},
  [464] = {.lex_state = 0, .external_lex_state = 2},
  [465] = {.lex_state = 101, .external_lex_state = 2},
  [466] = {.lex_state = 0, .external_lex_state = 2},
  [467] = {.lex_state = 0, .external_lex_state = 2},
  [468] = {.lex_state = 0, .external_lex_state = 2},
  [469] = {.lex_state = 0, .external_lex_state = 2},
  [470] = {.lex_state = 0, .external_lex_state = 2},
  [471] = {.lex_state = 0, .external_lex_state = 2},
  [472] = {.lex_state = 0, .external_lex_state = 2},
  [473] = {.lex_state = 0, .external_lex_state = 2},
  [474] = {.lex_state = 0, .external_lex_state = 2},
  [475] = {.lex_state = 0, .external_lex_state = 2},
  [476] = {.lex_state = 0, .external_lex_state = 2},
  [477] = {.lex_state = 0, .external_lex_state = 2},
  [478] = {.lex_state = 101, .external_lex_state = 2},
  [479] = {.lex_state = 0, .external_lex_state = 2},
  [480] = {.lex_state = 103, .external_lex_state = 2},
  [481] = {.lex_state = 0, .external_lex_state = 2},
  [482] = {.lex_state = 101, .external_lex_state = 2},
  [483] = {.lex_state = 0, .external_lex_state = 2},
  [484] = {.lex_state = 0, .external_lex_state = 2},
  [485] = {.lex_state = 28, .external_lex_state = 2},
  [486] = {.lex_state = 28, .external_lex_state = 2},
  [487] = {.lex_state = 0, .external_lex_state = 2},
  [488] = {.lex_state = 0, .external_lex_state = 2},
  [489] = {.lex_state = 101, .external_lex_state = 2},
  [490] = {.lex_state = 0, .external_lex_state = 2},
  [491] = {.lex_state = 28, .external_lex_state = 2},
  [492] = {.lex_state = 0, .external_lex_state = 3},
  [493] = {.lex_state = 98, .external_lex_state = 2},
  [494] = {.lex_state = 0, .external_lex_state = 2},
  [495] = {.lex_state = 0, .external_lex_state = 2},
  [496] = {.lex_state = 101, .external_lex_state = 2},
  [497] = {.lex_state = 0, .external_lex_state = 2},
  [498] = {.lex_state = 0, .external_lex_state = 2},
  [499] = {.lex_state = 0, .external_lex_state = 2},
  [500] = {.lex_state = 0, .external_lex_state = 2},
  [501] = {.lex_state = 0, .external_lex_state = 2},
  [502] = {.lex_state = 28, .external_lex_state = 2},
  [503] = {.lex_state = 0, .external_lex_state = 2},
  [504] = {.lex_state = 0, .external_lex_state = 2},
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
    [sym__statement] = STATE(6),
    [sym_directive] = STATE(427),
    [sym__macro_directive] = STATE(428),
    [sym__numeric_directive] = STATE(421),
    [sym_numeric_mnemonic] = STATE(489),
    [sym__string_directive] = STATE(403),
    [sym_string_mnemonic] = STATE(496),
    [sym__control_directive] = STATE(394),
    [sym_control_mnemonic] = STATE(387),
    [sym_instruction] = STATE(427),
    [sym__label] = STATE(6),
    [aux_sym_program_repeat1] = STATE(6),
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
    STATE(172), 1,
      sym__wrapped_additive_expression,
    STATE(173), 1,
      sym__multiplicative_expression,
    STATE(193), 1,
      sym__additive_expression,
    STATE(354), 1,
      sym__wrapped_assignment_expression,
    STATE(412), 1,
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
    STATE(353), 4,
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
      sym__wrapped_shift_expression,
    STATE(196), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(197), 1,
      sym__bitwise_xor_expression,
    STATE(198), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(199), 1,
      sym__bitwise_and_expression,
    STATE(200), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(201), 1,
      sym__equality_expression,
    STATE(202), 1,
      sym__wrapped_equality_expression,
    STATE(203), 1,
      sym__relational_expression,
    STATE(204), 1,
      sym__wrapped_relational_expression,
    STATE(205), 1,
      sym__shift_expression,
    STATE(206), 1,
      sym__additive_expression,
    STATE(207), 1,
      sym__wrapped_additive_expression,
    STATE(208), 1,
      sym__multiplicative_expression,
    STATE(212), 1,
      sym__assignment_expression,
    STATE(214), 1,
      sym__wrapped_logical_or_expression,
    STATE(215), 1,
      sym__logical_and_expression,
    STATE(216), 1,
      sym__wrapped_logical_and_expression,
    STATE(217), 1,
      sym__bitwise_or_expression,
    STATE(237), 1,
      sym__logical_or_expression,
    STATE(360), 1,
      sym__wrapped_assignment_expression,
    STATE(396), 1,
      sym_operands,
    STATE(400), 1,
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
    STATE(369), 2,
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
    STATE(209), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [275] = 34,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      sym_relocation_type,
    ACTIONS(89), 1,
      aux_sym_decimal_token1,
    ACTIONS(91), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(95), 1,
      aux_sym_symbol_token1,
    STATE(112), 1,
      sym__assignment_expression,
    STATE(113), 1,
      sym__logical_or_expression,
    STATE(114), 1,
      sym__wrapped_logical_or_expression,
    STATE(115), 1,
      sym__logical_and_expression,
    STATE(116), 1,
      sym__wrapped_logical_and_expression,
    STATE(117), 1,
      sym__bitwise_or_expression,
    STATE(118), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(119), 1,
      sym__bitwise_xor_expression,
    STATE(120), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(121), 1,
      sym__bitwise_and_expression,
    STATE(122), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(123), 1,
      sym__equality_expression,
    STATE(124), 1,
      sym__wrapped_equality_expression,
    STATE(125), 1,
      sym__relational_expression,
    STATE(126), 1,
      sym__wrapped_relational_expression,
    STATE(127), 1,
      sym__shift_expression,
    STATE(129), 1,
      sym__additive_expression,
    STATE(130), 1,
      sym__wrapped_additive_expression,
    STATE(131), 1,
      sym__multiplicative_expression,
    STATE(150), 1,
      sym__wrapped_shift_expression,
    STATE(302), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(77), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(83), 3,
      sym_unary_minus_operator,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(79), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(87), 7,
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
  [402] = 38,
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
    STATE(172), 1,
      sym__wrapped_additive_expression,
    STATE(173), 1,
      sym__multiplicative_expression,
    STATE(193), 1,
      sym__additive_expression,
    STATE(354), 1,
      sym__wrapped_assignment_expression,
    STATE(412), 1,
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
    STATE(353), 4,
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
  [536] = 20,
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
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 1,
      sym_line_comment,
    STATE(387), 1,
      sym_control_mnemonic,
    STATE(394), 1,
      sym__control_directive,
    STATE(403), 1,
      sym__string_directive,
    STATE(421), 1,
      sym__numeric_directive,
    STATE(428), 1,
      sym__macro_directive,
    STATE(489), 1,
      sym_numeric_mnemonic,
    STATE(496), 1,
      sym_string_mnemonic,
    STATE(404), 2,
      sym_directive,
      sym_instruction,
    ACTIONS(99), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
    STATE(7), 3,
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
  [634] = 20,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(108), 1,
      sym_line_comment,
    ACTIONS(111), 1,
      sym_macro_mnemonic,
    ACTIONS(120), 1,
      aux_sym_control_mnemonic_token1,
    ACTIONS(123), 1,
      sym_opcode,
    STATE(387), 1,
      sym_control_mnemonic,
    STATE(394), 1,
      sym__control_directive,
    STATE(403), 1,
      sym__string_directive,
    STATE(421), 1,
      sym__numeric_directive,
    STATE(428), 1,
      sym__macro_directive,
    STATE(489), 1,
      sym_numeric_mnemonic,
    STATE(496), 1,
      sym_string_mnemonic,
    STATE(433), 2,
      sym_directive,
      sym_instruction,
    ACTIONS(105), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
    STATE(7), 3,
      sym__statement,
      sym__label,
      aux_sym_program_repeat1,
    ACTIONS(126), 4,
      sym_local_label,
      sym_global_label,
      sym_global_numeric_label,
      sym_local_numeric_label,
    ACTIONS(117), 5,
      anon_sym_DOTasciz,
      anon_sym_DOTascii,
      anon_sym_DOTasciiz,
      anon_sym_DOTstring,
      anon_sym_DOTstringz,
    ACTIONS(114), 26,
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
  [732] = 36,
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
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    STATE(194), 1,
      sym__wrapped_shift_expression,
    STATE(196), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(197), 1,
      sym__bitwise_xor_expression,
    STATE(198), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(199), 1,
      sym__bitwise_and_expression,
    STATE(200), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(201), 1,
      sym__equality_expression,
    STATE(202), 1,
      sym__wrapped_equality_expression,
    STATE(203), 1,
      sym__relational_expression,
    STATE(204), 1,
      sym__wrapped_relational_expression,
    STATE(205), 1,
      sym__shift_expression,
    STATE(206), 1,
      sym__additive_expression,
    STATE(207), 1,
      sym__wrapped_additive_expression,
    STATE(208), 1,
      sym__multiplicative_expression,
    STATE(212), 1,
      sym__assignment_expression,
    STATE(214), 1,
      sym__wrapped_logical_or_expression,
    STATE(215), 1,
      sym__logical_and_expression,
    STATE(216), 1,
      sym__wrapped_logical_and_expression,
    STATE(217), 1,
      sym__bitwise_or_expression,
    STATE(237), 1,
      sym__logical_or_expression,
    STATE(360), 1,
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
    STATE(378), 2,
      sym__operand,
      sym_string,
    ACTIONS(129), 4,
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
    STATE(209), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [861] = 36,
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
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    STATE(194), 1,
      sym__wrapped_shift_expression,
    STATE(196), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(197), 1,
      sym__bitwise_xor_expression,
    STATE(198), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(199), 1,
      sym__bitwise_and_expression,
    STATE(200), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(201), 1,
      sym__equality_expression,
    STATE(202), 1,
      sym__wrapped_equality_expression,
    STATE(203), 1,
      sym__relational_expression,
    STATE(204), 1,
      sym__wrapped_relational_expression,
    STATE(205), 1,
      sym__shift_expression,
    STATE(206), 1,
      sym__additive_expression,
    STATE(207), 1,
      sym__wrapped_additive_expression,
    STATE(208), 1,
      sym__multiplicative_expression,
    STATE(212), 1,
      sym__assignment_expression,
    STATE(214), 1,
      sym__wrapped_logical_or_expression,
    STATE(215), 1,
      sym__logical_and_expression,
    STATE(216), 1,
      sym__wrapped_logical_and_expression,
    STATE(217), 1,
      sym__bitwise_or_expression,
    STATE(237), 1,
      sym__logical_or_expression,
    STATE(360), 1,
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
    STATE(378), 2,
      sym__operand,
      sym_string,
    ACTIONS(133), 4,
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
    STATE(209), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [990] = 37,
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
    STATE(172), 1,
      sym__wrapped_additive_expression,
    STATE(173), 1,
      sym__multiplicative_expression,
    STATE(193), 1,
      sym__additive_expression,
    STATE(354), 1,
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
    STATE(363), 4,
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
  [1121] = 37,
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
    STATE(244), 1,
      sym__bitwise_or_expression,
    STATE(245), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(246), 1,
      sym__bitwise_xor_expression,
    STATE(247), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(248), 1,
      sym__bitwise_and_expression,
    STATE(249), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(253), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(268), 1,
      sym__assignment_expression,
    STATE(269), 1,
      sym__relational_expression,
    STATE(271), 1,
      sym__wrapped_relational_expression,
    STATE(272), 1,
      sym__shift_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(274), 1,
      sym__wrapped_shift_expression,
    STATE(275), 1,
      sym__additive_expression,
    STATE(276), 1,
      sym__wrapped_additive_expression,
    STATE(277), 1,
      sym__wrapped_logical_or_expression,
    STATE(278), 1,
      sym__logical_and_expression,
    STATE(285), 1,
      sym__multiplicative_expression,
    STATE(288), 1,
      sym__wrapped_logical_and_expression,
    STATE(383), 1,
      sym__wrapped_assignment_expression,
    STATE(473), 1,
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
    STATE(398), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(290), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1250] = 39,
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
    STATE(244), 1,
      sym__bitwise_or_expression,
    STATE(245), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(246), 1,
      sym__bitwise_xor_expression,
    STATE(247), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(248), 1,
      sym__bitwise_and_expression,
    STATE(249), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(253), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(268), 1,
      sym__assignment_expression,
    STATE(269), 1,
      sym__relational_expression,
    STATE(271), 1,
      sym__wrapped_relational_expression,
    STATE(272), 1,
      sym__shift_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(274), 1,
      sym__wrapped_shift_expression,
    STATE(275), 1,
      sym__additive_expression,
    STATE(276), 1,
      sym__wrapped_additive_expression,
    STATE(277), 1,
      sym__wrapped_logical_or_expression,
    STATE(278), 1,
      sym__logical_and_expression,
    STATE(285), 1,
      sym__multiplicative_expression,
    STATE(287), 1,
      sym_symbol,
    STATE(288), 1,
      sym__wrapped_logical_and_expression,
    STATE(386), 1,
      sym__wrapped_assignment_expression,
    STATE(467), 1,
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
    STATE(398), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(290), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1383] = 38,
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
    STATE(244), 1,
      sym__bitwise_or_expression,
    STATE(245), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(246), 1,
      sym__bitwise_xor_expression,
    STATE(247), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(248), 1,
      sym__bitwise_and_expression,
    STATE(249), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(253), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(268), 1,
      sym__assignment_expression,
    STATE(269), 1,
      sym__relational_expression,
    STATE(271), 1,
      sym__wrapped_relational_expression,
    STATE(272), 1,
      sym__shift_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(274), 1,
      sym__wrapped_shift_expression,
    STATE(275), 1,
      sym__additive_expression,
    STATE(276), 1,
      sym__wrapped_additive_expression,
    STATE(277), 1,
      sym__wrapped_logical_or_expression,
    STATE(278), 1,
      sym__logical_and_expression,
    STATE(285), 1,
      sym__multiplicative_expression,
    STATE(286), 1,
      sym_symbol,
    STATE(288), 1,
      sym__wrapped_logical_and_expression,
    STATE(383), 1,
      sym__wrapped_assignment_expression,
    STATE(476), 1,
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
    STATE(398), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(290), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1513] = 38,
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
    STATE(243), 1,
      sym_symbol,
    STATE(244), 1,
      sym__bitwise_or_expression,
    STATE(245), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(246), 1,
      sym__bitwise_xor_expression,
    STATE(247), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(248), 1,
      sym__bitwise_and_expression,
    STATE(249), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(253), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(268), 1,
      sym__assignment_expression,
    STATE(269), 1,
      sym__relational_expression,
    STATE(271), 1,
      sym__wrapped_relational_expression,
    STATE(272), 1,
      sym__shift_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(274), 1,
      sym__wrapped_shift_expression,
    STATE(275), 1,
      sym__additive_expression,
    STATE(276), 1,
      sym__wrapped_additive_expression,
    STATE(277), 1,
      sym__wrapped_logical_or_expression,
    STATE(278), 1,
      sym__logical_and_expression,
    STATE(285), 1,
      sym__multiplicative_expression,
    STATE(288), 1,
      sym__wrapped_logical_and_expression,
    STATE(385), 1,
      sym__wrapped_assignment_expression,
    STATE(504), 1,
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
    STATE(398), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(290), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1643] = 38,
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
    STATE(244), 1,
      sym__bitwise_or_expression,
    STATE(245), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(246), 1,
      sym__bitwise_xor_expression,
    STATE(247), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(248), 1,
      sym__bitwise_and_expression,
    STATE(249), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(253), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(268), 1,
      sym__assignment_expression,
    STATE(269), 1,
      sym__relational_expression,
    STATE(271), 1,
      sym__wrapped_relational_expression,
    STATE(272), 1,
      sym__shift_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(274), 1,
      sym__wrapped_shift_expression,
    STATE(275), 1,
      sym__additive_expression,
    STATE(276), 1,
      sym__wrapped_additive_expression,
    STATE(277), 1,
      sym__wrapped_logical_or_expression,
    STATE(278), 1,
      sym__logical_and_expression,
    STATE(285), 1,
      sym__multiplicative_expression,
    STATE(288), 1,
      sym__wrapped_logical_and_expression,
    STATE(298), 1,
      sym_symbol,
    STATE(383), 1,
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
    ACTIONS(165), 2,
      sym_register,
      sym_macro_variable,
    STATE(398), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(290), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1773] = 36,
    ACTIONS(129), 1,
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
    STATE(244), 1,
      sym__bitwise_or_expression,
    STATE(245), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(246), 1,
      sym__bitwise_xor_expression,
    STATE(247), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(248), 1,
      sym__bitwise_and_expression,
    STATE(249), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(253), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(268), 1,
      sym__assignment_expression,
    STATE(269), 1,
      sym__relational_expression,
    STATE(271), 1,
      sym__wrapped_relational_expression,
    STATE(272), 1,
      sym__shift_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(274), 1,
      sym__wrapped_shift_expression,
    STATE(275), 1,
      sym__additive_expression,
    STATE(276), 1,
      sym__wrapped_additive_expression,
    STATE(277), 1,
      sym__wrapped_logical_or_expression,
    STATE(278), 1,
      sym__logical_and_expression,
    STATE(285), 1,
      sym__multiplicative_expression,
    STATE(288), 1,
      sym__wrapped_logical_and_expression,
    STATE(383), 1,
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
    STATE(439), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(290), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1899] = 36,
    ACTIONS(133), 1,
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
    STATE(244), 1,
      sym__bitwise_or_expression,
    STATE(245), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(246), 1,
      sym__bitwise_xor_expression,
    STATE(247), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(248), 1,
      sym__bitwise_and_expression,
    STATE(249), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(253), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(268), 1,
      sym__assignment_expression,
    STATE(269), 1,
      sym__relational_expression,
    STATE(271), 1,
      sym__wrapped_relational_expression,
    STATE(272), 1,
      sym__shift_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(274), 1,
      sym__wrapped_shift_expression,
    STATE(275), 1,
      sym__additive_expression,
    STATE(276), 1,
      sym__wrapped_additive_expression,
    STATE(277), 1,
      sym__wrapped_logical_or_expression,
    STATE(278), 1,
      sym__logical_and_expression,
    STATE(285), 1,
      sym__multiplicative_expression,
    STATE(288), 1,
      sym__wrapped_logical_and_expression,
    STATE(383), 1,
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
    STATE(439), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(290), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [2025] = 38,
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
    STATE(244), 1,
      sym__bitwise_or_expression,
    STATE(245), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(246), 1,
      sym__bitwise_xor_expression,
    STATE(247), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(248), 1,
      sym__bitwise_and_expression,
    STATE(249), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(253), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(268), 1,
      sym__assignment_expression,
    STATE(269), 1,
      sym__relational_expression,
    STATE(271), 1,
      sym__wrapped_relational_expression,
    STATE(272), 1,
      sym__shift_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(274), 1,
      sym__wrapped_shift_expression,
    STATE(275), 1,
      sym__additive_expression,
    STATE(276), 1,
      sym__wrapped_additive_expression,
    STATE(277), 1,
      sym__wrapped_logical_or_expression,
    STATE(278), 1,
      sym__logical_and_expression,
    STATE(285), 1,
      sym__multiplicative_expression,
    STATE(288), 1,
      sym__wrapped_logical_and_expression,
    STATE(291), 1,
      sym_symbol,
    STATE(388), 1,
      sym__wrapped_assignment_expression,
    STATE(470), 1,
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
    STATE(398), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(290), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2155] = 38,
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
    STATE(244), 1,
      sym__bitwise_or_expression,
    STATE(245), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(246), 1,
      sym__bitwise_xor_expression,
    STATE(247), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(248), 1,
      sym__bitwise_and_expression,
    STATE(249), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(253), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(268), 1,
      sym__assignment_expression,
    STATE(269), 1,
      sym__relational_expression,
    STATE(271), 1,
      sym__wrapped_relational_expression,
    STATE(272), 1,
      sym__shift_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(274), 1,
      sym__wrapped_shift_expression,
    STATE(275), 1,
      sym__additive_expression,
    STATE(276), 1,
      sym__wrapped_additive_expression,
    STATE(277), 1,
      sym__wrapped_logical_or_expression,
    STATE(278), 1,
      sym__logical_and_expression,
    STATE(285), 1,
      sym__multiplicative_expression,
    STATE(288), 1,
      sym__wrapped_logical_and_expression,
    STATE(293), 1,
      sym_symbol,
    STATE(389), 1,
      sym__wrapped_assignment_expression,
    STATE(477), 1,
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
    STATE(398), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(290), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2285] = 38,
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
    STATE(244), 1,
      sym__bitwise_or_expression,
    STATE(245), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(246), 1,
      sym__bitwise_xor_expression,
    STATE(247), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(248), 1,
      sym__bitwise_and_expression,
    STATE(249), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(253), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(268), 1,
      sym__assignment_expression,
    STATE(269), 1,
      sym__relational_expression,
    STATE(271), 1,
      sym__wrapped_relational_expression,
    STATE(272), 1,
      sym__shift_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(274), 1,
      sym__wrapped_shift_expression,
    STATE(275), 1,
      sym__additive_expression,
    STATE(276), 1,
      sym__wrapped_additive_expression,
    STATE(277), 1,
      sym__wrapped_logical_or_expression,
    STATE(278), 1,
      sym__logical_and_expression,
    STATE(285), 1,
      sym__multiplicative_expression,
    STATE(288), 1,
      sym__wrapped_logical_and_expression,
    STATE(289), 1,
      sym_symbol,
    STATE(383), 1,
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
    ACTIONS(171), 2,
      sym_register,
      sym_macro_variable,
    STATE(398), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(290), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2415] = 38,
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
    STATE(244), 1,
      sym__bitwise_or_expression,
    STATE(245), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(246), 1,
      sym__bitwise_xor_expression,
    STATE(247), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(248), 1,
      sym__bitwise_and_expression,
    STATE(249), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(253), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(268), 1,
      sym__assignment_expression,
    STATE(269), 1,
      sym__relational_expression,
    STATE(271), 1,
      sym__wrapped_relational_expression,
    STATE(272), 1,
      sym__shift_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(274), 1,
      sym__wrapped_shift_expression,
    STATE(275), 1,
      sym__additive_expression,
    STATE(276), 1,
      sym__wrapped_additive_expression,
    STATE(277), 1,
      sym__wrapped_logical_or_expression,
    STATE(278), 1,
      sym__logical_and_expression,
    STATE(285), 1,
      sym__multiplicative_expression,
    STATE(288), 1,
      sym__wrapped_logical_and_expression,
    STATE(292), 1,
      sym_symbol,
    STATE(383), 1,
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
    ACTIONS(173), 2,
      sym_register,
      sym_macro_variable,
    STATE(398), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(290), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2545] = 38,
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
    STATE(244), 1,
      sym__bitwise_or_expression,
    STATE(245), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(246), 1,
      sym__bitwise_xor_expression,
    STATE(247), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(248), 1,
      sym__bitwise_and_expression,
    STATE(249), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(253), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(268), 1,
      sym__assignment_expression,
    STATE(269), 1,
      sym__relational_expression,
    STATE(271), 1,
      sym__wrapped_relational_expression,
    STATE(272), 1,
      sym__shift_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(274), 1,
      sym__wrapped_shift_expression,
    STATE(275), 1,
      sym__additive_expression,
    STATE(276), 1,
      sym__wrapped_additive_expression,
    STATE(277), 1,
      sym__wrapped_logical_or_expression,
    STATE(278), 1,
      sym__logical_and_expression,
    STATE(285), 1,
      sym__multiplicative_expression,
    STATE(288), 1,
      sym__wrapped_logical_and_expression,
    STATE(294), 1,
      sym_symbol,
    STATE(383), 1,
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
    ACTIONS(175), 2,
      sym_register,
      sym_macro_variable,
    STATE(398), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(290), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2675] = 38,
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
    STATE(244), 1,
      sym__bitwise_or_expression,
    STATE(245), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(246), 1,
      sym__bitwise_xor_expression,
    STATE(247), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(248), 1,
      sym__bitwise_and_expression,
    STATE(249), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(253), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(268), 1,
      sym__assignment_expression,
    STATE(269), 1,
      sym__relational_expression,
    STATE(271), 1,
      sym__wrapped_relational_expression,
    STATE(272), 1,
      sym__shift_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(274), 1,
      sym__wrapped_shift_expression,
    STATE(275), 1,
      sym__additive_expression,
    STATE(276), 1,
      sym__wrapped_additive_expression,
    STATE(277), 1,
      sym__wrapped_logical_or_expression,
    STATE(278), 1,
      sym__logical_and_expression,
    STATE(285), 1,
      sym__multiplicative_expression,
    STATE(288), 1,
      sym__wrapped_logical_and_expression,
    STATE(295), 1,
      sym_symbol,
    STATE(390), 1,
      sym__wrapped_assignment_expression,
    STATE(498), 1,
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
    STATE(398), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(290), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2805] = 38,
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
    STATE(244), 1,
      sym__bitwise_or_expression,
    STATE(245), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(246), 1,
      sym__bitwise_xor_expression,
    STATE(247), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(248), 1,
      sym__bitwise_and_expression,
    STATE(249), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(253), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(268), 1,
      sym__assignment_expression,
    STATE(269), 1,
      sym__relational_expression,
    STATE(271), 1,
      sym__wrapped_relational_expression,
    STATE(272), 1,
      sym__shift_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(274), 1,
      sym__wrapped_shift_expression,
    STATE(275), 1,
      sym__additive_expression,
    STATE(276), 1,
      sym__wrapped_additive_expression,
    STATE(277), 1,
      sym__wrapped_logical_or_expression,
    STATE(278), 1,
      sym__logical_and_expression,
    STATE(285), 1,
      sym__multiplicative_expression,
    STATE(287), 1,
      sym_symbol,
    STATE(288), 1,
      sym__wrapped_logical_and_expression,
    STATE(386), 1,
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
    STATE(398), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(290), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2935] = 38,
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
    STATE(244), 1,
      sym__bitwise_or_expression,
    STATE(245), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(246), 1,
      sym__bitwise_xor_expression,
    STATE(247), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(248), 1,
      sym__bitwise_and_expression,
    STATE(249), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(253), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(268), 1,
      sym__assignment_expression,
    STATE(269), 1,
      sym__relational_expression,
    STATE(271), 1,
      sym__wrapped_relational_expression,
    STATE(272), 1,
      sym__shift_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(274), 1,
      sym__wrapped_shift_expression,
    STATE(275), 1,
      sym__additive_expression,
    STATE(276), 1,
      sym__wrapped_additive_expression,
    STATE(277), 1,
      sym__wrapped_logical_or_expression,
    STATE(278), 1,
      sym__logical_and_expression,
    STATE(285), 1,
      sym__multiplicative_expression,
    STATE(288), 1,
      sym__wrapped_logical_and_expression,
    STATE(296), 1,
      sym_symbol,
    STATE(383), 1,
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
    ACTIONS(179), 2,
      sym_register,
      sym_macro_variable,
    STATE(398), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(290), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3065] = 38,
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
    STATE(244), 1,
      sym__bitwise_or_expression,
    STATE(245), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(246), 1,
      sym__bitwise_xor_expression,
    STATE(247), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(248), 1,
      sym__bitwise_and_expression,
    STATE(249), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(253), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(268), 1,
      sym__assignment_expression,
    STATE(269), 1,
      sym__relational_expression,
    STATE(271), 1,
      sym__wrapped_relational_expression,
    STATE(272), 1,
      sym__shift_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(274), 1,
      sym__wrapped_shift_expression,
    STATE(275), 1,
      sym__additive_expression,
    STATE(276), 1,
      sym__wrapped_additive_expression,
    STATE(277), 1,
      sym__wrapped_logical_or_expression,
    STATE(278), 1,
      sym__logical_and_expression,
    STATE(285), 1,
      sym__multiplicative_expression,
    STATE(288), 1,
      sym__wrapped_logical_and_expression,
    STATE(297), 1,
      sym_symbol,
    STATE(389), 1,
      sym__wrapped_assignment_expression,
    STATE(474), 1,
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
    STATE(398), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(290), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3195] = 37,
    ACTIONS(183), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      sym_unary_minus_operator,
    ACTIONS(189), 1,
      sym_relocation_type,
    ACTIONS(195), 1,
      aux_sym_decimal_token1,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(199), 1,
      anon_sym_DQUOTE,
    ACTIONS(201), 1,
      sym_macro_variable,
    ACTIONS(203), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(205), 1,
      aux_sym_symbol_token1,
    STATE(242), 1,
      sym_address,
    STATE(300), 1,
      sym__wrapped_equality_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(315), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(317), 1,
      sym__equality_expression,
    STATE(318), 1,
      sym__relational_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(322), 1,
      sym__wrapped_additive_expression,
    STATE(323), 1,
      sym__multiplicative_expression,
    STATE(346), 1,
      sym__shift_expression,
    STATE(459), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(187), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(193), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(380), 2,
      sym__string_operand,
      sym_string,
    ACTIONS(191), 4,
      sym_octal,
      sym_float,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(324), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
  [3322] = 35,
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
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    STATE(194), 1,
      sym__wrapped_shift_expression,
    STATE(196), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(197), 1,
      sym__bitwise_xor_expression,
    STATE(198), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(199), 1,
      sym__bitwise_and_expression,
    STATE(200), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(201), 1,
      sym__equality_expression,
    STATE(202), 1,
      sym__wrapped_equality_expression,
    STATE(203), 1,
      sym__relational_expression,
    STATE(204), 1,
      sym__wrapped_relational_expression,
    STATE(205), 1,
      sym__shift_expression,
    STATE(206), 1,
      sym__additive_expression,
    STATE(207), 1,
      sym__wrapped_additive_expression,
    STATE(208), 1,
      sym__multiplicative_expression,
    STATE(212), 1,
      sym__assignment_expression,
    STATE(214), 1,
      sym__wrapped_logical_or_expression,
    STATE(215), 1,
      sym__logical_and_expression,
    STATE(216), 1,
      sym__wrapped_logical_and_expression,
    STATE(217), 1,
      sym__bitwise_or_expression,
    STATE(237), 1,
      sym__logical_or_expression,
    STATE(360), 1,
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
    STATE(378), 2,
      sym__operand,
      sym_string,
    ACTIONS(63), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(209), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3445] = 35,
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
    STATE(244), 1,
      sym__bitwise_or_expression,
    STATE(245), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(246), 1,
      sym__bitwise_xor_expression,
    STATE(247), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(248), 1,
      sym__bitwise_and_expression,
    STATE(249), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(253), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(268), 1,
      sym__assignment_expression,
    STATE(269), 1,
      sym__relational_expression,
    STATE(271), 1,
      sym__wrapped_relational_expression,
    STATE(272), 1,
      sym__shift_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(274), 1,
      sym__wrapped_shift_expression,
    STATE(275), 1,
      sym__additive_expression,
    STATE(276), 1,
      sym__wrapped_additive_expression,
    STATE(277), 1,
      sym__wrapped_logical_or_expression,
    STATE(278), 1,
      sym__logical_and_expression,
    STATE(285), 1,
      sym__multiplicative_expression,
    STATE(288), 1,
      sym__wrapped_logical_and_expression,
    STATE(383), 1,
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
    STATE(439), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(290), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3568] = 34,
    ACTIONS(83), 1,
      sym_unary_minus_operator,
    ACTIONS(85), 1,
      sym_relocation_type,
    ACTIONS(89), 1,
      aux_sym_decimal_token1,
    ACTIONS(93), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(95), 1,
      aux_sym_symbol_token1,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    STATE(112), 1,
      sym__assignment_expression,
    STATE(113), 1,
      sym__logical_or_expression,
    STATE(114), 1,
      sym__wrapped_logical_or_expression,
    STATE(115), 1,
      sym__logical_and_expression,
    STATE(116), 1,
      sym__wrapped_logical_and_expression,
    STATE(117), 1,
      sym__bitwise_or_expression,
    STATE(118), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(119), 1,
      sym__bitwise_xor_expression,
    STATE(120), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(121), 1,
      sym__bitwise_and_expression,
    STATE(122), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(123), 1,
      sym__equality_expression,
    STATE(124), 1,
      sym__wrapped_equality_expression,
    STATE(125), 1,
      sym__relational_expression,
    STATE(126), 1,
      sym__wrapped_relational_expression,
    STATE(127), 1,
      sym__shift_expression,
    STATE(129), 1,
      sym__additive_expression,
    STATE(130), 1,
      sym__wrapped_additive_expression,
    STATE(131), 1,
      sym__multiplicative_expression,
    STATE(150), 1,
      sym__wrapped_shift_expression,
    STATE(280), 1,
      sym__wrapped_assignment_expression,
    STATE(352), 1,
      sym_numeric_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(209), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(211), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(87), 5,
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
  [3687] = 33,
    ACTIONS(185), 1,
      sym_unary_minus_operator,
    ACTIONS(189), 1,
      sym_relocation_type,
    ACTIONS(195), 1,
      aux_sym_decimal_token1,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(203), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(205), 1,
      aux_sym_symbol_token1,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    STATE(300), 1,
      sym__wrapped_equality_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(315), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(317), 1,
      sym__equality_expression,
    STATE(318), 1,
      sym__relational_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(322), 1,
      sym__wrapped_additive_expression,
    STATE(323), 1,
      sym__multiplicative_expression,
    STATE(346), 1,
      sym__shift_expression,
    STATE(442), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(187), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(193), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(191), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(324), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3803] = 33,
    ACTIONS(185), 1,
      sym_unary_minus_operator,
    ACTIONS(189), 1,
      sym_relocation_type,
    ACTIONS(195), 1,
      aux_sym_decimal_token1,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(203), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(205), 1,
      aux_sym_symbol_token1,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    STATE(300), 1,
      sym__wrapped_equality_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(315), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(317), 1,
      sym__equality_expression,
    STATE(318), 1,
      sym__relational_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(322), 1,
      sym__wrapped_additive_expression,
    STATE(323), 1,
      sym__multiplicative_expression,
    STATE(346), 1,
      sym__shift_expression,
    STATE(440), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(187), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(193), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(191), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(324), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3919] = 33,
    ACTIONS(83), 1,
      sym_unary_minus_operator,
    ACTIONS(85), 1,
      sym_relocation_type,
    ACTIONS(89), 1,
      aux_sym_decimal_token1,
    ACTIONS(93), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(95), 1,
      aux_sym_symbol_token1,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    STATE(112), 1,
      sym__assignment_expression,
    STATE(113), 1,
      sym__logical_or_expression,
    STATE(114), 1,
      sym__wrapped_logical_or_expression,
    STATE(115), 1,
      sym__logical_and_expression,
    STATE(116), 1,
      sym__wrapped_logical_and_expression,
    STATE(117), 1,
      sym__bitwise_or_expression,
    STATE(118), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(119), 1,
      sym__bitwise_xor_expression,
    STATE(120), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(121), 1,
      sym__bitwise_and_expression,
    STATE(122), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(123), 1,
      sym__equality_expression,
    STATE(124), 1,
      sym__wrapped_equality_expression,
    STATE(125), 1,
      sym__relational_expression,
    STATE(126), 1,
      sym__wrapped_relational_expression,
    STATE(127), 1,
      sym__shift_expression,
    STATE(129), 1,
      sym__additive_expression,
    STATE(130), 1,
      sym__wrapped_additive_expression,
    STATE(131), 1,
      sym__multiplicative_expression,
    STATE(150), 1,
      sym__wrapped_shift_expression,
    STATE(326), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(209), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(211), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(87), 5,
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
  [4035] = 33,
    ACTIONS(83), 1,
      sym_unary_minus_operator,
    ACTIONS(85), 1,
      sym_relocation_type,
    ACTIONS(89), 1,
      aux_sym_decimal_token1,
    ACTIONS(93), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(95), 1,
      aux_sym_symbol_token1,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    STATE(112), 1,
      sym__assignment_expression,
    STATE(113), 1,
      sym__logical_or_expression,
    STATE(114), 1,
      sym__wrapped_logical_or_expression,
    STATE(115), 1,
      sym__logical_and_expression,
    STATE(116), 1,
      sym__wrapped_logical_and_expression,
    STATE(117), 1,
      sym__bitwise_or_expression,
    STATE(118), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(119), 1,
      sym__bitwise_xor_expression,
    STATE(120), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(121), 1,
      sym__bitwise_and_expression,
    STATE(122), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(123), 1,
      sym__equality_expression,
    STATE(124), 1,
      sym__wrapped_equality_expression,
    STATE(125), 1,
      sym__relational_expression,
    STATE(126), 1,
      sym__wrapped_relational_expression,
    STATE(127), 1,
      sym__shift_expression,
    STATE(129), 1,
      sym__additive_expression,
    STATE(130), 1,
      sym__wrapped_additive_expression,
    STATE(131), 1,
      sym__multiplicative_expression,
    STATE(150), 1,
      sym__wrapped_shift_expression,
    STATE(328), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(209), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(211), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(87), 5,
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
  [4151] = 33,
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
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    STATE(194), 1,
      sym__wrapped_shift_expression,
    STATE(196), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(197), 1,
      sym__bitwise_xor_expression,
    STATE(198), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(199), 1,
      sym__bitwise_and_expression,
    STATE(200), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(201), 1,
      sym__equality_expression,
    STATE(202), 1,
      sym__wrapped_equality_expression,
    STATE(203), 1,
      sym__relational_expression,
    STATE(204), 1,
      sym__wrapped_relational_expression,
    STATE(205), 1,
      sym__shift_expression,
    STATE(206), 1,
      sym__additive_expression,
    STATE(207), 1,
      sym__wrapped_additive_expression,
    STATE(208), 1,
      sym__multiplicative_expression,
    STATE(212), 1,
      sym__assignment_expression,
    STATE(214), 1,
      sym__wrapped_logical_or_expression,
    STATE(215), 1,
      sym__logical_and_expression,
    STATE(216), 1,
      sym__wrapped_logical_and_expression,
    STATE(217), 1,
      sym__bitwise_or_expression,
    STATE(236), 1,
      sym__wrapped_assignment_expression,
    STATE(237), 1,
      sym__logical_or_expression,
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
    STATE(209), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4267] = 33,
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
      sym__bitwise_or_expression,
    STATE(245), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(246), 1,
      sym__bitwise_xor_expression,
    STATE(247), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(248), 1,
      sym__bitwise_and_expression,
    STATE(249), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(253), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(269), 1,
      sym__relational_expression,
    STATE(271), 1,
      sym__wrapped_relational_expression,
    STATE(272), 1,
      sym__shift_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(274), 1,
      sym__wrapped_shift_expression,
    STATE(275), 1,
      sym__additive_expression,
    STATE(276), 1,
      sym__wrapped_additive_expression,
    STATE(278), 1,
      sym__logical_and_expression,
    STATE(285), 1,
      sym__multiplicative_expression,
    STATE(288), 1,
      sym__wrapped_logical_and_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(377), 1,
      sym__wrapped_logical_or_expression,
    STATE(461), 1,
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
    STATE(290), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4383] = 33,
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
      sym__bitwise_or_expression,
    STATE(245), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(246), 1,
      sym__bitwise_xor_expression,
    STATE(247), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(248), 1,
      sym__bitwise_and_expression,
    STATE(249), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(253), 1,
      sym__equality_expression,
    STATE(254), 1,
      sym__wrapped_logical_and_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(269), 1,
      sym__relational_expression,
    STATE(271), 1,
      sym__wrapped_relational_expression,
    STATE(272), 1,
      sym__shift_expression,
    STATE(274), 1,
      sym__wrapped_shift_expression,
    STATE(275), 1,
      sym__additive_expression,
    STATE(276), 1,
      sym__wrapped_additive_expression,
    STATE(278), 1,
      sym__logical_and_expression,
    STATE(285), 1,
      sym__multiplicative_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(461), 1,
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
    STATE(290), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4499] = 33,
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
      sym__bitwise_or_expression,
    STATE(246), 1,
      sym__bitwise_xor_expression,
    STATE(247), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(248), 1,
      sym__bitwise_and_expression,
    STATE(249), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(253), 1,
      sym__equality_expression,
    STATE(255), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(269), 1,
      sym__relational_expression,
    STATE(271), 1,
      sym__wrapped_relational_expression,
    STATE(272), 1,
      sym__shift_expression,
    STATE(274), 1,
      sym__wrapped_shift_expression,
    STATE(275), 1,
      sym__additive_expression,
    STATE(276), 1,
      sym__wrapped_additive_expression,
    STATE(285), 1,
      sym__multiplicative_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(461), 1,
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
    STATE(290), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4615] = 33,
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
    STATE(246), 1,
      sym__bitwise_xor_expression,
    STATE(248), 1,
      sym__bitwise_and_expression,
    STATE(249), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(253), 1,
      sym__equality_expression,
    STATE(256), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(269), 1,
      sym__relational_expression,
    STATE(271), 1,
      sym__wrapped_relational_expression,
    STATE(272), 1,
      sym__shift_expression,
    STATE(274), 1,
      sym__wrapped_shift_expression,
    STATE(275), 1,
      sym__additive_expression,
    STATE(276), 1,
      sym__wrapped_additive_expression,
    STATE(285), 1,
      sym__multiplicative_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(461), 1,
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
    STATE(290), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4731] = 33,
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
      sym__bitwise_and_expression,
    STATE(253), 1,
      sym__equality_expression,
    STATE(257), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(269), 1,
      sym__relational_expression,
    STATE(271), 1,
      sym__wrapped_relational_expression,
    STATE(272), 1,
      sym__shift_expression,
    STATE(274), 1,
      sym__wrapped_shift_expression,
    STATE(275), 1,
      sym__additive_expression,
    STATE(276), 1,
      sym__wrapped_additive_expression,
    STATE(285), 1,
      sym__multiplicative_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(461), 1,
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
    STATE(290), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4847] = 33,
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
    STATE(253), 1,
      sym__equality_expression,
    STATE(258), 1,
      sym__wrapped_equality_expression,
    STATE(269), 1,
      sym__relational_expression,
    STATE(271), 1,
      sym__wrapped_relational_expression,
    STATE(272), 1,
      sym__shift_expression,
    STATE(274), 1,
      sym__wrapped_shift_expression,
    STATE(275), 1,
      sym__additive_expression,
    STATE(276), 1,
      sym__wrapped_additive_expression,
    STATE(285), 1,
      sym__multiplicative_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(315), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(461), 1,
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
    STATE(290), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4963] = 33,
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
    STATE(259), 1,
      sym__wrapped_relational_expression,
    STATE(269), 1,
      sym__relational_expression,
    STATE(272), 1,
      sym__shift_expression,
    STATE(274), 1,
      sym__wrapped_shift_expression,
    STATE(275), 1,
      sym__additive_expression,
    STATE(276), 1,
      sym__wrapped_additive_expression,
    STATE(285), 1,
      sym__multiplicative_expression,
    STATE(300), 1,
      sym__wrapped_equality_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(315), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(317), 1,
      sym__equality_expression,
    STATE(461), 1,
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
    STATE(290), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5079] = 33,
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
    STATE(260), 1,
      sym__wrapped_shift_expression,
    STATE(272), 1,
      sym__shift_expression,
    STATE(275), 1,
      sym__additive_expression,
    STATE(276), 1,
      sym__wrapped_additive_expression,
    STATE(285), 1,
      sym__multiplicative_expression,
    STATE(300), 1,
      sym__wrapped_equality_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(315), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(317), 1,
      sym__equality_expression,
    STATE(318), 1,
      sym__relational_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(461), 1,
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
    STATE(290), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5195] = 33,
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
    STATE(261), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__additive_expression,
    STATE(285), 1,
      sym__multiplicative_expression,
    STATE(300), 1,
      sym__wrapped_equality_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(315), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(317), 1,
      sym__equality_expression,
    STATE(318), 1,
      sym__relational_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(346), 1,
      sym__shift_expression,
    STATE(461), 1,
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
    STATE(290), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5311] = 33,
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
    STATE(285), 1,
      sym__multiplicative_expression,
    STATE(300), 1,
      sym__wrapped_equality_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(315), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(317), 1,
      sym__equality_expression,
    STATE(318), 1,
      sym__relational_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(322), 1,
      sym__wrapped_additive_expression,
    STATE(346), 1,
      sym__shift_expression,
    STATE(461), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(141), 2,
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
    STATE(262), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5427] = 34,
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
    STATE(300), 1,
      sym__wrapped_equality_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(315), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(317), 1,
      sym__equality_expression,
    STATE(318), 1,
      sym__relational_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(322), 1,
      sym__wrapped_additive_expression,
    STATE(323), 1,
      sym__multiplicative_expression,
    STATE(324), 1,
      sym__wrapped_multiplicative_expression,
    STATE(346), 1,
      sym__shift_expression,
    STATE(461), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(141), 2,
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
    STATE(263), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5545] = 33,
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
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    STATE(194), 1,
      sym__wrapped_shift_expression,
    STATE(196), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(197), 1,
      sym__bitwise_xor_expression,
    STATE(198), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(199), 1,
      sym__bitwise_and_expression,
    STATE(200), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(201), 1,
      sym__equality_expression,
    STATE(202), 1,
      sym__wrapped_equality_expression,
    STATE(203), 1,
      sym__relational_expression,
    STATE(204), 1,
      sym__wrapped_relational_expression,
    STATE(205), 1,
      sym__shift_expression,
    STATE(206), 1,
      sym__additive_expression,
    STATE(207), 1,
      sym__wrapped_additive_expression,
    STATE(208), 1,
      sym__multiplicative_expression,
    STATE(215), 1,
      sym__logical_and_expression,
    STATE(216), 1,
      sym__wrapped_logical_and_expression,
    STATE(217), 1,
      sym__bitwise_or_expression,
    STATE(237), 1,
      sym__logical_or_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(359), 1,
      sym__wrapped_logical_or_expression,
    STATE(460), 1,
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
    STATE(209), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5661] = 33,
    ACTIONS(83), 1,
      sym_unary_minus_operator,
    ACTIONS(85), 1,
      sym_relocation_type,
    ACTIONS(89), 1,
      aux_sym_decimal_token1,
    ACTIONS(93), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(95), 1,
      aux_sym_symbol_token1,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    STATE(113), 1,
      sym__logical_or_expression,
    STATE(115), 1,
      sym__logical_and_expression,
    STATE(116), 1,
      sym__wrapped_logical_and_expression,
    STATE(117), 1,
      sym__bitwise_or_expression,
    STATE(118), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(119), 1,
      sym__bitwise_xor_expression,
    STATE(120), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(121), 1,
      sym__bitwise_and_expression,
    STATE(122), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(123), 1,
      sym__equality_expression,
    STATE(124), 1,
      sym__wrapped_equality_expression,
    STATE(125), 1,
      sym__relational_expression,
    STATE(126), 1,
      sym__wrapped_relational_expression,
    STATE(127), 1,
      sym__shift_expression,
    STATE(129), 1,
      sym__additive_expression,
    STATE(130), 1,
      sym__wrapped_additive_expression,
    STATE(131), 1,
      sym__multiplicative_expression,
    STATE(150), 1,
      sym__wrapped_shift_expression,
    STATE(299), 1,
      sym__wrapped_logical_or_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(462), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(209), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(211), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(87), 5,
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
  [5777] = 33,
    ACTIONS(83), 1,
      sym_unary_minus_operator,
    ACTIONS(85), 1,
      sym_relocation_type,
    ACTIONS(89), 1,
      aux_sym_decimal_token1,
    ACTIONS(93), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(95), 1,
      aux_sym_symbol_token1,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    STATE(115), 1,
      sym__logical_and_expression,
    STATE(117), 1,
      sym__bitwise_or_expression,
    STATE(118), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(119), 1,
      sym__bitwise_xor_expression,
    STATE(120), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(121), 1,
      sym__bitwise_and_expression,
    STATE(122), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(123), 1,
      sym__equality_expression,
    STATE(124), 1,
      sym__wrapped_equality_expression,
    STATE(125), 1,
      sym__relational_expression,
    STATE(126), 1,
      sym__wrapped_relational_expression,
    STATE(127), 1,
      sym__shift_expression,
    STATE(129), 1,
      sym__additive_expression,
    STATE(130), 1,
      sym__wrapped_additive_expression,
    STATE(131), 1,
      sym__multiplicative_expression,
    STATE(137), 1,
      sym__wrapped_logical_and_expression,
    STATE(150), 1,
      sym__wrapped_shift_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(462), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(209), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(211), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(87), 5,
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
  [5893] = 33,
    ACTIONS(83), 1,
      sym_unary_minus_operator,
    ACTIONS(85), 1,
      sym_relocation_type,
    ACTIONS(89), 1,
      aux_sym_decimal_token1,
    ACTIONS(93), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(95), 1,
      aux_sym_symbol_token1,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    STATE(117), 1,
      sym__bitwise_or_expression,
    STATE(119), 1,
      sym__bitwise_xor_expression,
    STATE(120), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(121), 1,
      sym__bitwise_and_expression,
    STATE(122), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(123), 1,
      sym__equality_expression,
    STATE(124), 1,
      sym__wrapped_equality_expression,
    STATE(125), 1,
      sym__relational_expression,
    STATE(126), 1,
      sym__wrapped_relational_expression,
    STATE(127), 1,
      sym__shift_expression,
    STATE(129), 1,
      sym__additive_expression,
    STATE(130), 1,
      sym__wrapped_additive_expression,
    STATE(131), 1,
      sym__multiplicative_expression,
    STATE(138), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(150), 1,
      sym__wrapped_shift_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(462), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(209), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(211), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(87), 5,
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
  [6009] = 33,
    ACTIONS(83), 1,
      sym_unary_minus_operator,
    ACTIONS(85), 1,
      sym_relocation_type,
    ACTIONS(89), 1,
      aux_sym_decimal_token1,
    ACTIONS(93), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(95), 1,
      aux_sym_symbol_token1,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    STATE(119), 1,
      sym__bitwise_xor_expression,
    STATE(121), 1,
      sym__bitwise_and_expression,
    STATE(122), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(123), 1,
      sym__equality_expression,
    STATE(124), 1,
      sym__wrapped_equality_expression,
    STATE(125), 1,
      sym__relational_expression,
    STATE(126), 1,
      sym__wrapped_relational_expression,
    STATE(127), 1,
      sym__shift_expression,
    STATE(129), 1,
      sym__additive_expression,
    STATE(130), 1,
      sym__wrapped_additive_expression,
    STATE(131), 1,
      sym__multiplicative_expression,
    STATE(139), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(150), 1,
      sym__wrapped_shift_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(462), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(209), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(211), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(87), 5,
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
  [6125] = 33,
    ACTIONS(83), 1,
      sym_unary_minus_operator,
    ACTIONS(85), 1,
      sym_relocation_type,
    ACTIONS(89), 1,
      aux_sym_decimal_token1,
    ACTIONS(93), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(95), 1,
      aux_sym_symbol_token1,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    STATE(121), 1,
      sym__bitwise_and_expression,
    STATE(123), 1,
      sym__equality_expression,
    STATE(124), 1,
      sym__wrapped_equality_expression,
    STATE(125), 1,
      sym__relational_expression,
    STATE(126), 1,
      sym__wrapped_relational_expression,
    STATE(127), 1,
      sym__shift_expression,
    STATE(129), 1,
      sym__additive_expression,
    STATE(130), 1,
      sym__wrapped_additive_expression,
    STATE(131), 1,
      sym__multiplicative_expression,
    STATE(140), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(150), 1,
      sym__wrapped_shift_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(462), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(209), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(211), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(87), 5,
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
  [6241] = 33,
    ACTIONS(83), 1,
      sym_unary_minus_operator,
    ACTIONS(85), 1,
      sym_relocation_type,
    ACTIONS(89), 1,
      aux_sym_decimal_token1,
    ACTIONS(93), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(95), 1,
      aux_sym_symbol_token1,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    STATE(123), 1,
      sym__equality_expression,
    STATE(125), 1,
      sym__relational_expression,
    STATE(126), 1,
      sym__wrapped_relational_expression,
    STATE(127), 1,
      sym__shift_expression,
    STATE(129), 1,
      sym__additive_expression,
    STATE(130), 1,
      sym__wrapped_additive_expression,
    STATE(131), 1,
      sym__multiplicative_expression,
    STATE(141), 1,
      sym__wrapped_equality_expression,
    STATE(150), 1,
      sym__wrapped_shift_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(315), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(462), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(209), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(211), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(87), 5,
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
  [6357] = 33,
    ACTIONS(83), 1,
      sym_unary_minus_operator,
    ACTIONS(85), 1,
      sym_relocation_type,
    ACTIONS(89), 1,
      aux_sym_decimal_token1,
    ACTIONS(93), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(95), 1,
      aux_sym_symbol_token1,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    STATE(125), 1,
      sym__relational_expression,
    STATE(127), 1,
      sym__shift_expression,
    STATE(129), 1,
      sym__additive_expression,
    STATE(130), 1,
      sym__wrapped_additive_expression,
    STATE(131), 1,
      sym__multiplicative_expression,
    STATE(142), 1,
      sym__wrapped_relational_expression,
    STATE(150), 1,
      sym__wrapped_shift_expression,
    STATE(300), 1,
      sym__wrapped_equality_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(315), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(317), 1,
      sym__equality_expression,
    STATE(462), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(209), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(211), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(87), 5,
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
  [6473] = 33,
    ACTIONS(83), 1,
      sym_unary_minus_operator,
    ACTIONS(85), 1,
      sym_relocation_type,
    ACTIONS(89), 1,
      aux_sym_decimal_token1,
    ACTIONS(93), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(95), 1,
      aux_sym_symbol_token1,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    STATE(108), 1,
      sym__wrapped_shift_expression,
    STATE(127), 1,
      sym__shift_expression,
    STATE(129), 1,
      sym__additive_expression,
    STATE(130), 1,
      sym__wrapped_additive_expression,
    STATE(131), 1,
      sym__multiplicative_expression,
    STATE(300), 1,
      sym__wrapped_equality_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(315), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(317), 1,
      sym__equality_expression,
    STATE(318), 1,
      sym__relational_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(462), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(209), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(211), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(87), 5,
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
  [6589] = 33,
    ACTIONS(83), 1,
      sym_unary_minus_operator,
    ACTIONS(85), 1,
      sym_relocation_type,
    ACTIONS(89), 1,
      aux_sym_decimal_token1,
    ACTIONS(93), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(95), 1,
      aux_sym_symbol_token1,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    STATE(129), 1,
      sym__additive_expression,
    STATE(131), 1,
      sym__multiplicative_expression,
    STATE(143), 1,
      sym__wrapped_additive_expression,
    STATE(300), 1,
      sym__wrapped_equality_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(315), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(317), 1,
      sym__equality_expression,
    STATE(318), 1,
      sym__relational_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(346), 1,
      sym__shift_expression,
    STATE(462), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(209), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(211), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(87), 5,
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
  [6705] = 33,
    ACTIONS(83), 1,
      sym_unary_minus_operator,
    ACTIONS(85), 1,
      sym_relocation_type,
    ACTIONS(89), 1,
      aux_sym_decimal_token1,
    ACTIONS(93), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(95), 1,
      aux_sym_symbol_token1,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    STATE(131), 1,
      sym__multiplicative_expression,
    STATE(300), 1,
      sym__wrapped_equality_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(315), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(317), 1,
      sym__equality_expression,
    STATE(318), 1,
      sym__relational_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(322), 1,
      sym__wrapped_additive_expression,
    STATE(346), 1,
      sym__shift_expression,
    STATE(462), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(209), 2,
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
    STATE(144), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6821] = 34,
    ACTIONS(83), 1,
      sym_unary_minus_operator,
    ACTIONS(85), 1,
      sym_relocation_type,
    ACTIONS(89), 1,
      aux_sym_decimal_token1,
    ACTIONS(93), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(95), 1,
      aux_sym_symbol_token1,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    STATE(300), 1,
      sym__wrapped_equality_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(315), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(317), 1,
      sym__equality_expression,
    STATE(318), 1,
      sym__relational_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(322), 1,
      sym__wrapped_additive_expression,
    STATE(323), 1,
      sym__multiplicative_expression,
    STATE(324), 1,
      sym__wrapped_multiplicative_expression,
    STATE(346), 1,
      sym__shift_expression,
    STATE(462), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(209), 2,
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
    STATE(145), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6939] = 33,
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
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    STATE(194), 1,
      sym__wrapped_shift_expression,
    STATE(196), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(197), 1,
      sym__bitwise_xor_expression,
    STATE(198), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(199), 1,
      sym__bitwise_and_expression,
    STATE(200), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(201), 1,
      sym__equality_expression,
    STATE(202), 1,
      sym__wrapped_equality_expression,
    STATE(203), 1,
      sym__relational_expression,
    STATE(204), 1,
      sym__wrapped_relational_expression,
    STATE(205), 1,
      sym__shift_expression,
    STATE(206), 1,
      sym__additive_expression,
    STATE(207), 1,
      sym__wrapped_additive_expression,
    STATE(208), 1,
      sym__multiplicative_expression,
    STATE(215), 1,
      sym__logical_and_expression,
    STATE(217), 1,
      sym__bitwise_or_expression,
    STATE(221), 1,
      sym__wrapped_logical_and_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(460), 1,
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
    STATE(209), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7055] = 33,
    ACTIONS(185), 1,
      sym_unary_minus_operator,
    ACTIONS(189), 1,
      sym_relocation_type,
    ACTIONS(195), 1,
      aux_sym_decimal_token1,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(203), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(205), 1,
      aux_sym_symbol_token1,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    STATE(300), 1,
      sym__wrapped_equality_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(315), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(317), 1,
      sym__equality_expression,
    STATE(318), 1,
      sym__relational_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(322), 1,
      sym__wrapped_additive_expression,
    STATE(323), 1,
      sym__multiplicative_expression,
    STATE(346), 1,
      sym__shift_expression,
    STATE(401), 1,
      sym__wrapped_logical_or_expression,
    STATE(463), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(187), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(193), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(191), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(324), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7171] = 33,
    ACTIONS(185), 1,
      sym_unary_minus_operator,
    ACTIONS(189), 1,
      sym_relocation_type,
    ACTIONS(195), 1,
      aux_sym_decimal_token1,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(203), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(205), 1,
      aux_sym_symbol_token1,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    STATE(300), 1,
      sym__wrapped_equality_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(315), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(317), 1,
      sym__equality_expression,
    STATE(318), 1,
      sym__relational_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(322), 1,
      sym__wrapped_additive_expression,
    STATE(323), 1,
      sym__multiplicative_expression,
    STATE(335), 1,
      sym__wrapped_logical_and_expression,
    STATE(346), 1,
      sym__shift_expression,
    STATE(463), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(187), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(193), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(191), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(324), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7287] = 33,
    ACTIONS(185), 1,
      sym_unary_minus_operator,
    ACTIONS(189), 1,
      sym_relocation_type,
    ACTIONS(195), 1,
      aux_sym_decimal_token1,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(203), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(205), 1,
      aux_sym_symbol_token1,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    STATE(300), 1,
      sym__wrapped_equality_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(315), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(317), 1,
      sym__equality_expression,
    STATE(318), 1,
      sym__relational_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(322), 1,
      sym__wrapped_additive_expression,
    STATE(323), 1,
      sym__multiplicative_expression,
    STATE(336), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(346), 1,
      sym__shift_expression,
    STATE(463), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(187), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(193), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(191), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(324), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7403] = 33,
    ACTIONS(185), 1,
      sym_unary_minus_operator,
    ACTIONS(189), 1,
      sym_relocation_type,
    ACTIONS(195), 1,
      aux_sym_decimal_token1,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(203), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(205), 1,
      aux_sym_symbol_token1,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    STATE(300), 1,
      sym__wrapped_equality_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(315), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(317), 1,
      sym__equality_expression,
    STATE(318), 1,
      sym__relational_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(322), 1,
      sym__wrapped_additive_expression,
    STATE(323), 1,
      sym__multiplicative_expression,
    STATE(337), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(346), 1,
      sym__shift_expression,
    STATE(463), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(187), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(193), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(191), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(324), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7519] = 33,
    ACTIONS(185), 1,
      sym_unary_minus_operator,
    ACTIONS(189), 1,
      sym_relocation_type,
    ACTIONS(195), 1,
      aux_sym_decimal_token1,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(203), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(205), 1,
      aux_sym_symbol_token1,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    STATE(300), 1,
      sym__wrapped_equality_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(315), 1,
      sym__bitwise_and_expression,
    STATE(317), 1,
      sym__equality_expression,
    STATE(318), 1,
      sym__relational_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(322), 1,
      sym__wrapped_additive_expression,
    STATE(323), 1,
      sym__multiplicative_expression,
    STATE(338), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(346), 1,
      sym__shift_expression,
    STATE(463), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(187), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(193), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(191), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(324), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7635] = 33,
    ACTIONS(185), 1,
      sym_unary_minus_operator,
    ACTIONS(189), 1,
      sym_relocation_type,
    ACTIONS(195), 1,
      aux_sym_decimal_token1,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(203), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(205), 1,
      aux_sym_symbol_token1,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(315), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(317), 1,
      sym__equality_expression,
    STATE(318), 1,
      sym__relational_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(322), 1,
      sym__wrapped_additive_expression,
    STATE(323), 1,
      sym__multiplicative_expression,
    STATE(339), 1,
      sym__wrapped_equality_expression,
    STATE(346), 1,
      sym__shift_expression,
    STATE(463), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(187), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(193), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(191), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(324), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7751] = 33,
    ACTIONS(185), 1,
      sym_unary_minus_operator,
    ACTIONS(189), 1,
      sym_relocation_type,
    ACTIONS(195), 1,
      aux_sym_decimal_token1,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(203), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(205), 1,
      aux_sym_symbol_token1,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    STATE(300), 1,
      sym__wrapped_equality_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(315), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(317), 1,
      sym__equality_expression,
    STATE(318), 1,
      sym__relational_expression,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(322), 1,
      sym__wrapped_additive_expression,
    STATE(323), 1,
      sym__multiplicative_expression,
    STATE(340), 1,
      sym__wrapped_relational_expression,
    STATE(346), 1,
      sym__shift_expression,
    STATE(463), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(187), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(193), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(191), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(324), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7867] = 33,
    ACTIONS(185), 1,
      sym_unary_minus_operator,
    ACTIONS(189), 1,
      sym_relocation_type,
    ACTIONS(195), 1,
      aux_sym_decimal_token1,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(203), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(205), 1,
      aux_sym_symbol_token1,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    STATE(300), 1,
      sym__wrapped_equality_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(315), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(317), 1,
      sym__equality_expression,
    STATE(318), 1,
      sym__relational_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(322), 1,
      sym__wrapped_additive_expression,
    STATE(323), 1,
      sym__multiplicative_expression,
    STATE(341), 1,
      sym__wrapped_shift_expression,
    STATE(346), 1,
      sym__shift_expression,
    STATE(463), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(187), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(193), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(191), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(324), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7983] = 33,
    ACTIONS(185), 1,
      sym_unary_minus_operator,
    ACTIONS(189), 1,
      sym_relocation_type,
    ACTIONS(195), 1,
      aux_sym_decimal_token1,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(203), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(205), 1,
      aux_sym_symbol_token1,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    STATE(300), 1,
      sym__wrapped_equality_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(315), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(317), 1,
      sym__equality_expression,
    STATE(318), 1,
      sym__relational_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(323), 1,
      sym__multiplicative_expression,
    STATE(342), 1,
      sym__wrapped_additive_expression,
    STATE(346), 1,
      sym__shift_expression,
    STATE(463), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(187), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(193), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(191), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(324), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8099] = 34,
    ACTIONS(185), 1,
      sym_unary_minus_operator,
    ACTIONS(189), 1,
      sym_relocation_type,
    ACTIONS(195), 1,
      aux_sym_decimal_token1,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(203), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(205), 1,
      aux_sym_symbol_token1,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    STATE(300), 1,
      sym__wrapped_equality_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(315), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(317), 1,
      sym__equality_expression,
    STATE(318), 1,
      sym__relational_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(322), 1,
      sym__wrapped_additive_expression,
    STATE(323), 1,
      sym__multiplicative_expression,
    STATE(324), 1,
      sym__wrapped_multiplicative_expression,
    STATE(346), 1,
      sym__shift_expression,
    STATE(463), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(187), 2,
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
    STATE(344), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8217] = 33,
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
    STATE(172), 1,
      sym__wrapped_additive_expression,
    STATE(173), 1,
      sym__multiplicative_expression,
    STATE(193), 1,
      sym__additive_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(349), 1,
      sym__wrapped_logical_or_expression,
    STATE(444), 1,
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
  [8333] = 33,
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
    STATE(172), 1,
      sym__wrapped_additive_expression,
    STATE(173), 1,
      sym__multiplicative_expression,
    STATE(179), 1,
      sym__wrapped_logical_and_expression,
    STATE(193), 1,
      sym__additive_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(444), 1,
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
  [8449] = 33,
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
    STATE(172), 1,
      sym__wrapped_additive_expression,
    STATE(173), 1,
      sym__multiplicative_expression,
    STATE(180), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(193), 1,
      sym__additive_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(444), 1,
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
  [8565] = 33,
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
    STATE(172), 1,
      sym__wrapped_additive_expression,
    STATE(173), 1,
      sym__multiplicative_expression,
    STATE(181), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(193), 1,
      sym__additive_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(444), 1,
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
  [8681] = 33,
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
    STATE(151), 1,
      sym__wrapped_bitwise_and_expression,
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
    STATE(172), 1,
      sym__wrapped_additive_expression,
    STATE(173), 1,
      sym__multiplicative_expression,
    STATE(193), 1,
      sym__additive_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(444), 1,
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
  [8797] = 33,
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
    STATE(172), 1,
      sym__wrapped_additive_expression,
    STATE(173), 1,
      sym__multiplicative_expression,
    STATE(183), 1,
      sym__wrapped_equality_expression,
    STATE(193), 1,
      sym__additive_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(315), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(444), 1,
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
  [8913] = 33,
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
    STATE(172), 1,
      sym__wrapped_additive_expression,
    STATE(173), 1,
      sym__multiplicative_expression,
    STATE(184), 1,
      sym__wrapped_relational_expression,
    STATE(193), 1,
      sym__additive_expression,
    STATE(300), 1,
      sym__wrapped_equality_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(315), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(317), 1,
      sym__equality_expression,
    STATE(444), 1,
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
  [9029] = 33,
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
    STATE(172), 1,
      sym__wrapped_additive_expression,
    STATE(173), 1,
      sym__multiplicative_expression,
    STATE(185), 1,
      sym__wrapped_shift_expression,
    STATE(193), 1,
      sym__additive_expression,
    STATE(300), 1,
      sym__wrapped_equality_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(315), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(317), 1,
      sym__equality_expression,
    STATE(318), 1,
      sym__relational_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(444), 1,
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
  [9145] = 33,
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
    STATE(186), 1,
      sym__wrapped_additive_expression,
    STATE(193), 1,
      sym__additive_expression,
    STATE(300), 1,
      sym__wrapped_equality_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(315), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(317), 1,
      sym__equality_expression,
    STATE(318), 1,
      sym__relational_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(346), 1,
      sym__shift_expression,
    STATE(444), 1,
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
  [9261] = 33,
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
    STATE(300), 1,
      sym__wrapped_equality_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(315), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(317), 1,
      sym__equality_expression,
    STATE(318), 1,
      sym__relational_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(322), 1,
      sym__wrapped_additive_expression,
    STATE(346), 1,
      sym__shift_expression,
    STATE(444), 1,
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
    STATE(187), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9377] = 34,
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
    STATE(300), 1,
      sym__wrapped_equality_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(315), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(317), 1,
      sym__equality_expression,
    STATE(318), 1,
      sym__relational_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(322), 1,
      sym__wrapped_additive_expression,
    STATE(323), 1,
      sym__multiplicative_expression,
    STATE(324), 1,
      sym__wrapped_multiplicative_expression,
    STATE(346), 1,
      sym__shift_expression,
    STATE(444), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(35), 2,
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
    STATE(188), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9495] = 33,
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
      sym__bitwise_or_expression,
    STATE(245), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(246), 1,
      sym__bitwise_xor_expression,
    STATE(247), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(248), 1,
      sym__bitwise_and_expression,
    STATE(249), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(253), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(268), 1,
      sym__assignment_expression,
    STATE(269), 1,
      sym__relational_expression,
    STATE(270), 1,
      sym__wrapped_assignment_expression,
    STATE(271), 1,
      sym__wrapped_relational_expression,
    STATE(272), 1,
      sym__shift_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(274), 1,
      sym__wrapped_shift_expression,
    STATE(275), 1,
      sym__additive_expression,
    STATE(276), 1,
      sym__wrapped_additive_expression,
    STATE(277), 1,
      sym__wrapped_logical_or_expression,
    STATE(278), 1,
      sym__logical_and_expression,
    STATE(285), 1,
      sym__multiplicative_expression,
    STATE(288), 1,
      sym__wrapped_logical_and_expression,
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
    STATE(290), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9611] = 33,
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
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    STATE(194), 1,
      sym__wrapped_shift_expression,
    STATE(196), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(197), 1,
      sym__bitwise_xor_expression,
    STATE(198), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(199), 1,
      sym__bitwise_and_expression,
    STATE(200), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(201), 1,
      sym__equality_expression,
    STATE(202), 1,
      sym__wrapped_equality_expression,
    STATE(203), 1,
      sym__relational_expression,
    STATE(204), 1,
      sym__wrapped_relational_expression,
    STATE(205), 1,
      sym__shift_expression,
    STATE(206), 1,
      sym__additive_expression,
    STATE(207), 1,
      sym__wrapped_additive_expression,
    STATE(208), 1,
      sym__multiplicative_expression,
    STATE(215), 1,
      sym__logical_and_expression,
    STATE(216), 1,
      sym__wrapped_logical_and_expression,
    STATE(217), 1,
      sym__bitwise_or_expression,
    STATE(232), 1,
      sym__wrapped_logical_or_expression,
    STATE(237), 1,
      sym__logical_or_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(460), 1,
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
    STATE(209), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9727] = 33,
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
      sym__bitwise_or_expression,
    STATE(245), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(246), 1,
      sym__bitwise_xor_expression,
    STATE(247), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(248), 1,
      sym__bitwise_and_expression,
    STATE(249), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(253), 1,
      sym__equality_expression,
    STATE(264), 1,
      sym__wrapped_equality_expression,
    STATE(269), 1,
      sym__relational_expression,
    STATE(271), 1,
      sym__wrapped_relational_expression,
    STATE(272), 1,
      sym__shift_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(274), 1,
      sym__wrapped_shift_expression,
    STATE(275), 1,
      sym__additive_expression,
    STATE(276), 1,
      sym__wrapped_additive_expression,
    STATE(278), 1,
      sym__logical_and_expression,
    STATE(284), 1,
      sym__wrapped_logical_or_expression,
    STATE(285), 1,
      sym__multiplicative_expression,
    STATE(288), 1,
      sym__wrapped_logical_and_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(461), 1,
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
    STATE(290), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9843] = 33,
    ACTIONS(83), 1,
      sym_unary_minus_operator,
    ACTIONS(85), 1,
      sym_relocation_type,
    ACTIONS(89), 1,
      aux_sym_decimal_token1,
    ACTIONS(93), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(95), 1,
      aux_sym_symbol_token1,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    STATE(113), 1,
      sym__logical_or_expression,
    STATE(115), 1,
      sym__logical_and_expression,
    STATE(116), 1,
      sym__wrapped_logical_and_expression,
    STATE(117), 1,
      sym__bitwise_or_expression,
    STATE(118), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(119), 1,
      sym__bitwise_xor_expression,
    STATE(120), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(121), 1,
      sym__bitwise_and_expression,
    STATE(122), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(123), 1,
      sym__equality_expression,
    STATE(124), 1,
      sym__wrapped_equality_expression,
    STATE(125), 1,
      sym__relational_expression,
    STATE(126), 1,
      sym__wrapped_relational_expression,
    STATE(127), 1,
      sym__shift_expression,
    STATE(129), 1,
      sym__additive_expression,
    STATE(130), 1,
      sym__wrapped_additive_expression,
    STATE(131), 1,
      sym__multiplicative_expression,
    STATE(149), 1,
      sym__wrapped_logical_or_expression,
    STATE(150), 1,
      sym__wrapped_shift_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(462), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(209), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(211), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(87), 5,
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
  [9959] = 33,
    ACTIONS(185), 1,
      sym_unary_minus_operator,
    ACTIONS(189), 1,
      sym_relocation_type,
    ACTIONS(195), 1,
      aux_sym_decimal_token1,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(203), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(205), 1,
      aux_sym_symbol_token1,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    STATE(300), 1,
      sym__wrapped_equality_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(315), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(317), 1,
      sym__equality_expression,
    STATE(318), 1,
      sym__relational_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(322), 1,
      sym__wrapped_additive_expression,
    STATE(323), 1,
      sym__multiplicative_expression,
    STATE(334), 1,
      sym__wrapped_logical_or_expression,
    STATE(346), 1,
      sym__shift_expression,
    STATE(463), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(187), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(193), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(191), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(324), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10075] = 33,
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
    STATE(172), 1,
      sym__wrapped_additive_expression,
    STATE(173), 1,
      sym__multiplicative_expression,
    STATE(182), 1,
      sym__wrapped_logical_or_expression,
    STATE(193), 1,
      sym__additive_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(444), 1,
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
  [10191] = 33,
    ACTIONS(83), 1,
      sym_unary_minus_operator,
    ACTIONS(85), 1,
      sym_relocation_type,
    ACTIONS(89), 1,
      aux_sym_decimal_token1,
    ACTIONS(93), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(95), 1,
      aux_sym_symbol_token1,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    STATE(112), 1,
      sym__assignment_expression,
    STATE(113), 1,
      sym__logical_or_expression,
    STATE(114), 1,
      sym__wrapped_logical_or_expression,
    STATE(115), 1,
      sym__logical_and_expression,
    STATE(116), 1,
      sym__wrapped_logical_and_expression,
    STATE(117), 1,
      sym__bitwise_or_expression,
    STATE(118), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(119), 1,
      sym__bitwise_xor_expression,
    STATE(120), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(121), 1,
      sym__bitwise_and_expression,
    STATE(122), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(123), 1,
      sym__equality_expression,
    STATE(124), 1,
      sym__wrapped_equality_expression,
    STATE(125), 1,
      sym__relational_expression,
    STATE(126), 1,
      sym__wrapped_relational_expression,
    STATE(127), 1,
      sym__shift_expression,
    STATE(129), 1,
      sym__additive_expression,
    STATE(130), 1,
      sym__wrapped_additive_expression,
    STATE(131), 1,
      sym__multiplicative_expression,
    STATE(133), 1,
      sym__wrapped_assignment_expression,
    STATE(150), 1,
      sym__wrapped_shift_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(209), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(211), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(87), 5,
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
  [10307] = 33,
    ACTIONS(185), 1,
      sym_unary_minus_operator,
    ACTIONS(189), 1,
      sym_relocation_type,
    ACTIONS(195), 1,
      aux_sym_decimal_token1,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(203), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(205), 1,
      aux_sym_symbol_token1,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    STATE(300), 1,
      sym__wrapped_equality_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(315), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(317), 1,
      sym__equality_expression,
    STATE(318), 1,
      sym__relational_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(322), 1,
      sym__wrapped_additive_expression,
    STATE(323), 1,
      sym__multiplicative_expression,
    STATE(325), 1,
      sym__wrapped_assignment_expression,
    STATE(346), 1,
      sym__shift_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(187), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(193), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(191), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(324), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10423] = 33,
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
    STATE(172), 1,
      sym__wrapped_additive_expression,
    STATE(173), 1,
      sym__multiplicative_expression,
    STATE(175), 1,
      sym__wrapped_assignment_expression,
    STATE(193), 1,
      sym__additive_expression,
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
  [10539] = 33,
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
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    STATE(194), 1,
      sym__wrapped_shift_expression,
    STATE(197), 1,
      sym__bitwise_xor_expression,
    STATE(198), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(199), 1,
      sym__bitwise_and_expression,
    STATE(200), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(201), 1,
      sym__equality_expression,
    STATE(202), 1,
      sym__wrapped_equality_expression,
    STATE(203), 1,
      sym__relational_expression,
    STATE(204), 1,
      sym__wrapped_relational_expression,
    STATE(205), 1,
      sym__shift_expression,
    STATE(206), 1,
      sym__additive_expression,
    STATE(207), 1,
      sym__wrapped_additive_expression,
    STATE(208), 1,
      sym__multiplicative_expression,
    STATE(217), 1,
      sym__bitwise_or_expression,
    STATE(222), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(460), 1,
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
    STATE(209), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10655] = 33,
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
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    STATE(194), 1,
      sym__wrapped_shift_expression,
    STATE(197), 1,
      sym__bitwise_xor_expression,
    STATE(199), 1,
      sym__bitwise_and_expression,
    STATE(200), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(201), 1,
      sym__equality_expression,
    STATE(202), 1,
      sym__wrapped_equality_expression,
    STATE(203), 1,
      sym__relational_expression,
    STATE(204), 1,
      sym__wrapped_relational_expression,
    STATE(205), 1,
      sym__shift_expression,
    STATE(206), 1,
      sym__additive_expression,
    STATE(207), 1,
      sym__wrapped_additive_expression,
    STATE(208), 1,
      sym__multiplicative_expression,
    STATE(223), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(460), 1,
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
    STATE(209), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10771] = 33,
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
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    STATE(194), 1,
      sym__wrapped_shift_expression,
    STATE(199), 1,
      sym__bitwise_and_expression,
    STATE(201), 1,
      sym__equality_expression,
    STATE(202), 1,
      sym__wrapped_equality_expression,
    STATE(203), 1,
      sym__relational_expression,
    STATE(204), 1,
      sym__wrapped_relational_expression,
    STATE(205), 1,
      sym__shift_expression,
    STATE(206), 1,
      sym__additive_expression,
    STATE(207), 1,
      sym__wrapped_additive_expression,
    STATE(208), 1,
      sym__multiplicative_expression,
    STATE(224), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(460), 1,
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
    STATE(209), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10887] = 33,
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
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    STATE(194), 1,
      sym__wrapped_shift_expression,
    STATE(201), 1,
      sym__equality_expression,
    STATE(203), 1,
      sym__relational_expression,
    STATE(204), 1,
      sym__wrapped_relational_expression,
    STATE(205), 1,
      sym__shift_expression,
    STATE(206), 1,
      sym__additive_expression,
    STATE(207), 1,
      sym__wrapped_additive_expression,
    STATE(208), 1,
      sym__multiplicative_expression,
    STATE(225), 1,
      sym__wrapped_equality_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(315), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(460), 1,
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
    STATE(209), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11003] = 33,
    ACTIONS(185), 1,
      sym_unary_minus_operator,
    ACTIONS(189), 1,
      sym_relocation_type,
    ACTIONS(195), 1,
      aux_sym_decimal_token1,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(203), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(205), 1,
      aux_sym_symbol_token1,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    STATE(300), 1,
      sym__wrapped_equality_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(315), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(317), 1,
      sym__equality_expression,
    STATE(318), 1,
      sym__relational_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(322), 1,
      sym__wrapped_additive_expression,
    STATE(323), 1,
      sym__multiplicative_expression,
    STATE(346), 1,
      sym__shift_expression,
    STATE(436), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(187), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(193), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(191), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(324), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11119] = 33,
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
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    STATE(194), 1,
      sym__wrapped_shift_expression,
    STATE(203), 1,
      sym__relational_expression,
    STATE(205), 1,
      sym__shift_expression,
    STATE(206), 1,
      sym__additive_expression,
    STATE(207), 1,
      sym__wrapped_additive_expression,
    STATE(208), 1,
      sym__multiplicative_expression,
    STATE(226), 1,
      sym__wrapped_relational_expression,
    STATE(300), 1,
      sym__wrapped_equality_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(315), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(317), 1,
      sym__equality_expression,
    STATE(460), 1,
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
    STATE(209), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11235] = 33,
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
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    STATE(205), 1,
      sym__shift_expression,
    STATE(206), 1,
      sym__additive_expression,
    STATE(207), 1,
      sym__wrapped_additive_expression,
    STATE(208), 1,
      sym__multiplicative_expression,
    STATE(227), 1,
      sym__wrapped_shift_expression,
    STATE(300), 1,
      sym__wrapped_equality_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(315), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(317), 1,
      sym__equality_expression,
    STATE(318), 1,
      sym__relational_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(460), 1,
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
    STATE(209), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11351] = 33,
    ACTIONS(185), 1,
      sym_unary_minus_operator,
    ACTIONS(189), 1,
      sym_relocation_type,
    ACTIONS(195), 1,
      aux_sym_decimal_token1,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(203), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(205), 1,
      aux_sym_symbol_token1,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    STATE(300), 1,
      sym__wrapped_equality_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(315), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(317), 1,
      sym__equality_expression,
    STATE(318), 1,
      sym__relational_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(322), 1,
      sym__wrapped_additive_expression,
    STATE(323), 1,
      sym__multiplicative_expression,
    STATE(346), 1,
      sym__shift_expression,
    STATE(431), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(187), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(193), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(191), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(324), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11467] = 33,
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
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    STATE(206), 1,
      sym__additive_expression,
    STATE(208), 1,
      sym__multiplicative_expression,
    STATE(228), 1,
      sym__wrapped_additive_expression,
    STATE(300), 1,
      sym__wrapped_equality_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(315), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(317), 1,
      sym__equality_expression,
    STATE(318), 1,
      sym__relational_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(346), 1,
      sym__shift_expression,
    STATE(460), 1,
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
    STATE(209), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11583] = 33,
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
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    STATE(208), 1,
      sym__multiplicative_expression,
    STATE(300), 1,
      sym__wrapped_equality_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(315), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(317), 1,
      sym__equality_expression,
    STATE(318), 1,
      sym__relational_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(322), 1,
      sym__wrapped_additive_expression,
    STATE(346), 1,
      sym__shift_expression,
    STATE(460), 1,
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
    STATE(230), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11699] = 33,
    ACTIONS(185), 1,
      sym_unary_minus_operator,
    ACTIONS(189), 1,
      sym_relocation_type,
    ACTIONS(195), 1,
      aux_sym_decimal_token1,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(203), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(205), 1,
      aux_sym_symbol_token1,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    STATE(300), 1,
      sym__wrapped_equality_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(315), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(317), 1,
      sym__equality_expression,
    STATE(318), 1,
      sym__relational_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(322), 1,
      sym__wrapped_additive_expression,
    STATE(323), 1,
      sym__multiplicative_expression,
    STATE(346), 1,
      sym__shift_expression,
    STATE(430), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(187), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(193), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(191), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(324), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11815] = 34,
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
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    STATE(300), 1,
      sym__wrapped_equality_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(315), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(317), 1,
      sym__equality_expression,
    STATE(318), 1,
      sym__relational_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(322), 1,
      sym__wrapped_additive_expression,
    STATE(323), 1,
      sym__multiplicative_expression,
    STATE(324), 1,
      sym__wrapped_multiplicative_expression,
    STATE(346), 1,
      sym__shift_expression,
    STATE(460), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(59), 2,
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
    STATE(231), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11933] = 33,
    ACTIONS(83), 1,
      sym_unary_minus_operator,
    ACTIONS(85), 1,
      sym_relocation_type,
    ACTIONS(89), 1,
      aux_sym_decimal_token1,
    ACTIONS(93), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(95), 1,
      aux_sym_symbol_token1,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    STATE(112), 1,
      sym__assignment_expression,
    STATE(113), 1,
      sym__logical_or_expression,
    STATE(114), 1,
      sym__wrapped_logical_or_expression,
    STATE(115), 1,
      sym__logical_and_expression,
    STATE(116), 1,
      sym__wrapped_logical_and_expression,
    STATE(117), 1,
      sym__bitwise_or_expression,
    STATE(118), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(119), 1,
      sym__bitwise_xor_expression,
    STATE(120), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(121), 1,
      sym__bitwise_and_expression,
    STATE(122), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(123), 1,
      sym__equality_expression,
    STATE(124), 1,
      sym__wrapped_equality_expression,
    STATE(125), 1,
      sym__relational_expression,
    STATE(126), 1,
      sym__wrapped_relational_expression,
    STATE(127), 1,
      sym__shift_expression,
    STATE(129), 1,
      sym__additive_expression,
    STATE(130), 1,
      sym__wrapped_additive_expression,
    STATE(131), 1,
      sym__multiplicative_expression,
    STATE(150), 1,
      sym__wrapped_shift_expression,
    STATE(302), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(209), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(211), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(87), 5,
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
  [12049] = 33,
    ACTIONS(185), 1,
      sym_unary_minus_operator,
    ACTIONS(189), 1,
      sym_relocation_type,
    ACTIONS(195), 1,
      aux_sym_decimal_token1,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(203), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(205), 1,
      aux_sym_symbol_token1,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    STATE(300), 1,
      sym__wrapped_equality_expression,
    STATE(306), 1,
      sym__assignment_expression,
    STATE(307), 1,
      sym__logical_or_expression,
    STATE(308), 1,
      sym__wrapped_logical_or_expression,
    STATE(309), 1,
      sym__logical_and_expression,
    STATE(310), 1,
      sym__wrapped_logical_and_expression,
    STATE(311), 1,
      sym__bitwise_or_expression,
    STATE(312), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(313), 1,
      sym__bitwise_xor_expression,
    STATE(314), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(315), 1,
      sym__bitwise_and_expression,
    STATE(316), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(317), 1,
      sym__equality_expression,
    STATE(318), 1,
      sym__relational_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(320), 1,
      sym__wrapped_shift_expression,
    STATE(321), 1,
      sym__additive_expression,
    STATE(322), 1,
      sym__wrapped_additive_expression,
    STATE(323), 1,
      sym__multiplicative_expression,
    STATE(346), 1,
      sym__shift_expression,
    STATE(463), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(187), 2,
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
    STATE(343), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12165] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(257), 1,
      ts_builtin_sym_end,
    ACTIONS(261), 1,
      aux_sym__whitespace_token1,
    ACTIONS(259), 42,
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
  [12276] = 4,
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
  [12330] = 4,
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
  [12384] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(279), 1,
      sym_shift_operator,
    ACTIONS(275), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(277), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [12420] = 4,
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
  [12454] = 4,
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
  [12488] = 4,
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
  [12522] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(293), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(295), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [12556] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(297), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(299), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [12590] = 5,
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
    ACTIONS(303), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [12626] = 4,
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
  [12660] = 5,
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
    ACTIONS(313), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [12696] = 4,
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
  [12730] = 5,
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
    ACTIONS(323), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [12766] = 4,
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
  [12800] = 5,
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
    ACTIONS(333), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [12836] = 4,
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
  [12870] = 5,
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
    ACTIONS(343), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [12906] = 4,
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
  [12940] = 5,
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
    ACTIONS(353), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [12976] = 4,
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
  [13010] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(365), 1,
      sym_relational_operator,
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
  [13046] = 4,
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
  [13080] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(371), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(373), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [13114] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(375), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(377), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [13148] = 5,
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
    ACTIONS(381), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [13184] = 4,
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
  [13218] = 5,
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
    ACTIONS(391), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [13254] = 6,
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
    ACTIONS(397), 17,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [13292] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(403), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(405), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [13326] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(407), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(409), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [13360] = 4,
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
  [13394] = 5,
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
    ACTIONS(417), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [13430] = 5,
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
    ACTIONS(421), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [13466] = 5,
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
    ACTIONS(425), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [13502] = 5,
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
    ACTIONS(429), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [13538] = 5,
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
    ACTIONS(433), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [13574] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(365), 1,
      sym_relational_operator,
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
  [13610] = 5,
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
    ACTIONS(441), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [13646] = 5,
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
    ACTIONS(445), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [13682] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(447), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(449), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [13716] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(451), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(453), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [13750] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(455), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(457), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [13784] = 4,
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
  [13818] = 4,
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
  [13852] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(279), 1,
      sym_shift_operator,
    ACTIONS(467), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(469), 18,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [13888] = 4,
    ACTIONS(471), 1,
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
  [13918] = 3,
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
  [13946] = 3,
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
  [13974] = 3,
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
  [14002] = 3,
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
  [14030] = 4,
    ACTIONS(473), 1,
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
  [14060] = 3,
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
  [14088] = 4,
    ACTIONS(475), 1,
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
  [14118] = 3,
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
  [14146] = 4,
    ACTIONS(477), 1,
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
  [14176] = 3,
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
  [14204] = 4,
    ACTIONS(479), 1,
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
  [14234] = 3,
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
  [14262] = 4,
    ACTIONS(471), 1,
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
  [14292] = 3,
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
  [14320] = 4,
    ACTIONS(481), 1,
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
  [14350] = 3,
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
  [14378] = 4,
    ACTIONS(483), 1,
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
  [14408] = 3,
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
  [14436] = 4,
    ACTIONS(485), 1,
      sym_shift_operator,
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
  [14466] = 3,
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
  [14494] = 4,
    ACTIONS(487), 1,
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
  [14524] = 3,
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
  [14552] = 4,
    ACTIONS(489), 1,
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
  [14582] = 5,
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
  [14614] = 3,
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
  [14642] = 3,
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
  [14670] = 3,
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
  [14698] = 4,
    ACTIONS(475), 1,
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
  [14728] = 4,
    ACTIONS(477), 1,
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
  [14758] = 4,
    ACTIONS(479), 1,
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
  [14788] = 3,
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
  [14816] = 4,
    ACTIONS(481), 1,
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
  [14846] = 4,
    ACTIONS(483), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(437), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [14876] = 4,
    ACTIONS(485), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [14906] = 4,
    ACTIONS(487), 1,
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
  [14936] = 4,
    ACTIONS(489), 1,
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
  [14966] = 3,
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
  [14994] = 3,
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
  [15022] = 3,
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
  [15050] = 3,
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
  [15078] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(373), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
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
  [15106] = 3,
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
  [15134] = 4,
    ACTIONS(495), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(469), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(467), 12,
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
  [15163] = 3,
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
  [15190] = 4,
    ACTIONS(497), 1,
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
  [15219] = 3,
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
  [15246] = 4,
    ACTIONS(499), 1,
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
  [15275] = 3,
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
  [15302] = 4,
    ACTIONS(501), 1,
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
  [15331] = 3,
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
  [15358] = 4,
    ACTIONS(503), 1,
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
  [15387] = 3,
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
  [15414] = 4,
    ACTIONS(505), 1,
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
  [15443] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(369), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(367), 13,
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
  [15470] = 3,
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
  [15497] = 4,
    ACTIONS(507), 1,
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
  [15526] = 3,
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
  [15553] = 4,
    ACTIONS(509), 1,
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
  [15582] = 3,
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
  [15609] = 3,
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
  [15636] = 3,
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
  [15663] = 3,
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
  [15690] = 4,
    ACTIONS(511), 1,
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
  [15719] = 3,
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
  [15746] = 4,
    ACTIONS(513), 1,
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
  [15775] = 3,
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
  [15802] = 4,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(515), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(373), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(371), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15831] = 3,
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
  [15858] = 3,
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
  [15885] = 4,
    ACTIONS(513), 1,
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
  [15914] = 4,
    ACTIONS(497), 1,
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
  [15943] = 4,
    ACTIONS(499), 1,
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
  [15972] = 4,
    ACTIONS(501), 1,
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
  [16001] = 4,
    ACTIONS(503), 1,
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
  [16030] = 4,
    ACTIONS(505), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(437), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [16059] = 4,
    ACTIONS(495), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [16088] = 4,
    ACTIONS(507), 1,
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
  [16117] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(373), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(371), 13,
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
    ACTIONS(509), 1,
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
  [16173] = 3,
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
  [16200] = 3,
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
  [16227] = 3,
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
  [16254] = 3,
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
  [16281] = 3,
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
  [16308] = 5,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(519), 1,
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
  [16339] = 3,
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
  [16366] = 4,
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
  [16394] = 4,
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
  [16422] = 4,
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
  [16450] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(371), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(373), 14,
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
  [16478] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(523), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(521), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(525), 12,
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
  [16508] = 4,
    ACTIONS(529), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(525), 5,
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
  [16534] = 3,
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
  [16558] = 4,
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
  [16584] = 3,
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
  [16608] = 4,
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
  [16634] = 3,
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
  [16658] = 4,
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
  [16684] = 3,
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
  [16708] = 3,
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
  [16732] = 3,
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
  [16756] = 3,
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
  [16780] = 4,
    ACTIONS(537), 1,
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
  [16806] = 4,
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
  [16832] = 4,
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
  [16858] = 4,
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
  [16884] = 4,
    ACTIONS(539), 1,
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
  [16910] = 4,
    ACTIONS(541), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(437), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [16936] = 4,
    ACTIONS(543), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [16962] = 4,
    ACTIONS(545), 1,
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
  [16988] = 4,
    ACTIONS(547), 1,
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
  [17014] = 3,
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
  [17038] = 4,
    ACTIONS(539), 1,
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
  [17064] = 3,
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
  [17088] = 3,
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
  [17112] = 3,
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
  [17136] = 3,
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
  [17184] = 5,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(551), 1,
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
  [17212] = 4,
    ACTIONS(541), 1,
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
  [17238] = 3,
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
  [17262] = 3,
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
  [17286] = 4,
    ACTIONS(543), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(469), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(467), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [17312] = 3,
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
  [17336] = 4,
    ACTIONS(545), 1,
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
  [17362] = 4,
    ACTIONS(553), 1,
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
  [17388] = 3,
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
  [17412] = 3,
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
  [17436] = 13,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(399), 1,
      anon_sym_LPAREN,
    ACTIONS(559), 1,
      sym_line_comment,
    ACTIONS(562), 1,
      anon_sym_COMMA,
    ACTIONS(567), 1,
      sym_assignment_operator,
    ACTIONS(569), 1,
      sym__operand_separator,
    ACTIONS(571), 1,
      sym__data_separator,
    STATE(301), 1,
      aux_sym_numeric_operands_repeat1,
    STATE(350), 1,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(555), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(564), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(557), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
  [17480] = 3,
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
  [17504] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(373), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
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
  [17528] = 3,
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
  [17552] = 3,
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
  [17576] = 3,
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
  [17600] = 4,
    ACTIONS(573), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(525), 5,
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
  [17626] = 4,
    ACTIONS(575), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(525), 5,
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
  [17652] = 4,
    ACTIONS(537), 1,
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
  [17678] = 4,
    ACTIONS(577), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(525), 5,
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
  [17704] = 4,
    ACTIONS(547), 1,
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
  [17730] = 4,
    ACTIONS(579), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(525), 5,
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
  [17756] = 4,
    ACTIONS(581), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(525), 5,
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
  [17782] = 4,
    ACTIONS(583), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(525), 5,
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
  [17808] = 4,
    ACTIONS(585), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(525), 5,
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
  [17834] = 4,
    ACTIONS(587), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(525), 5,
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
  [17860] = 4,
    ACTIONS(589), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(525), 5,
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
  [17886] = 4,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(525), 5,
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
  [17912] = 4,
    ACTIONS(593), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(525), 5,
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
  [17938] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(305), 1,
      sym_logical_or_operator,
    ACTIONS(463), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(465), 9,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
      sym_assignment_operator,
  [17965] = 4,
    ACTIONS(595), 1,
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
  [17989] = 9,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(562), 1,
      anon_sym_COMMA,
    ACTIONS(569), 1,
      sym__operand_separator,
    ACTIONS(571), 1,
      sym__data_separator,
    STATE(347), 1,
      aux_sym_numeric_operands_repeat1,
    STATE(351), 1,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(597), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(599), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [18023] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(399), 1,
      anon_sym_LPAREN,
    ACTIONS(567), 1,
      sym_assignment_operator,
    ACTIONS(601), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(603), 7,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
  [18051] = 3,
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
  [18073] = 3,
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
  [18095] = 3,
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
  [18117] = 3,
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
  [18139] = 3,
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
  [18161] = 4,
    ACTIONS(605), 1,
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
  [18185] = 3,
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
  [18207] = 4,
    ACTIONS(607), 1,
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
  [18231] = 3,
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
  [18253] = 4,
    ACTIONS(609), 1,
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
  [18277] = 3,
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
  [18299] = 4,
    ACTIONS(611), 1,
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
  [18323] = 3,
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
  [18345] = 4,
    ACTIONS(613), 1,
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
  [18369] = 3,
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
  [18391] = 3,
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
  [18413] = 4,
    ACTIONS(615), 1,
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
  [18437] = 4,
    ACTIONS(617), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(469), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(467), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [18461] = 3,
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
  [18483] = 4,
    ACTIONS(619), 1,
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
  [18507] = 3,
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
  [18529] = 4,
    ACTIONS(621), 1,
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
  [18553] = 5,
    ACTIONS(623), 1,
      anon_sym_LPAREN,
    ACTIONS(625), 1,
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
  [18579] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(399), 1,
      anon_sym_LPAREN,
    ACTIONS(567), 1,
      sym_assignment_operator,
    ACTIONS(627), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(629), 7,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
  [18607] = 3,
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
  [18629] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(399), 1,
      anon_sym_LPAREN,
    ACTIONS(567), 1,
      sym_assignment_operator,
    ACTIONS(631), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(633), 7,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
  [18657] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(373), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
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
  [18679] = 3,
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
  [18701] = 3,
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
  [18723] = 3,
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
  [18745] = 3,
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
  [18767] = 3,
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
  [18789] = 4,
    ACTIONS(607), 1,
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
  [18813] = 4,
    ACTIONS(609), 1,
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
  [18837] = 4,
    ACTIONS(611), 1,
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
  [18861] = 4,
    ACTIONS(613), 1,
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
  [18885] = 4,
    ACTIONS(595), 1,
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
  [18909] = 4,
    ACTIONS(615), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(437), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [18933] = 4,
    ACTIONS(617), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [18957] = 4,
    ACTIONS(619), 1,
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
  [18981] = 4,
    ACTIONS(621), 1,
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
  [19005] = 3,
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
  [19027] = 3,
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
  [19049] = 3,
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
  [19071] = 9,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(635), 1,
      sym_line_comment,
    ACTIONS(638), 1,
      anon_sym_COMMA,
    STATE(347), 1,
      aux_sym_numeric_operands_repeat1,
    ACTIONS(601), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(641), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(644), 2,
      sym__operand_separator,
      sym__data_separator,
    ACTIONS(603), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
  [19104] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(651), 1,
      sym__data_separator,
    STATE(348), 1,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(647), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(649), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19129] = 3,
    ACTIONS(473), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(463), 9,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_assignment_operator,
  [19148] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(654), 1,
      sym__data_separator,
    STATE(348), 1,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(597), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(599), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19173] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(654), 1,
      sym__data_separator,
    STATE(348), 1,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(656), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(658), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19198] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    STATE(358), 1,
      aux_sym__numeric_directive_repeat1,
    ACTIONS(660), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(662), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(664), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19222] = 5,
    STATE(10), 1,
      sym__control_operand_separator,
    STATE(356), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(668), 3,
      sym__operand_separator,
      sym__data_separator,
      aux_sym__control_operand_separator_token1,
    ACTIONS(666), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19244] = 4,
    ACTIONS(491), 1,
      anon_sym_LPAREN,
    ACTIONS(672), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(670), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      aux_sym__control_operand_separator_token1,
  [19264] = 5,
    STATE(10), 1,
      sym__control_operand_separator,
    STATE(355), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(676), 3,
      sym__operand_separator,
      sym__data_separator,
      aux_sym__control_operand_separator_token1,
    ACTIONS(674), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19286] = 5,
    STATE(10), 1,
      sym__control_operand_separator,
    STATE(355), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(668), 3,
      sym__operand_separator,
      sym__data_separator,
      aux_sym__control_operand_separator_token1,
    ACTIONS(679), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19308] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    STATE(357), 1,
      aux_sym__numeric_directive_repeat1,
    ACTIONS(681), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(683), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(685), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19332] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    STATE(357), 1,
      aux_sym__numeric_directive_repeat1,
    ACTIONS(688), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(690), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(692), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19356] = 3,
    ACTIONS(511), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(463), 8,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
  [19374] = 4,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(696), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(694), 6,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_COMMA,
  [19393] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(698), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      aux_sym__control_operand_separator_token1,
  [19407] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(704), 1,
      aux_sym__whitespace_token1,
    ACTIONS(706), 1,
      anon_sym_COMMA,
    STATE(367), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(700), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(702), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [19431] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(674), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      aux_sym__control_operand_separator_token1,
  [19445] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(712), 1,
      aux_sym__whitespace_token1,
    ACTIONS(715), 1,
      anon_sym_COMMA,
    STATE(364), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(708), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(710), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [19469] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(722), 1,
      aux_sym__whitespace_token1,
    ACTIONS(724), 1,
      sym_block_comment,
    ACTIONS(726), 1,
      anon_sym_LPAREN,
    STATE(424), 1,
      sym__call_expression,
    ACTIONS(718), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(720), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [19493] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(728), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      aux_sym__control_operand_separator_token1,
  [19507] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(704), 1,
      aux_sym__whitespace_token1,
    ACTIONS(706), 1,
      anon_sym_COMMA,
    STATE(364), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(730), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(732), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [19531] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(734), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      aux_sym__control_operand_separator_token1,
  [19545] = 5,
    ACTIONS(738), 1,
      anon_sym_COMMA,
    ACTIONS(740), 1,
      sym__operand_separator,
    STATE(372), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(736), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19565] = 4,
    STATE(370), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(744), 2,
      sym__operand_separator,
      anon_sym_COMMA,
    ACTIONS(742), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19583] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(747), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      aux_sym__control_operand_separator_token1,
  [19597] = 5,
    ACTIONS(738), 1,
      anon_sym_COMMA,
    ACTIONS(751), 1,
      sym__operand_separator,
    STATE(370), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(749), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19617] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(734), 6,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_COMMA,
  [19630] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(753), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(755), 3,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_COMMA,
  [19647] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(708), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(710), 3,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_COMMA,
  [19664] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(761), 1,
      aux_sym__whitespace_token1,
    ACTIONS(763), 1,
      anon_sym_LPAREN,
    ACTIONS(757), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(759), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [19685] = 3,
    ACTIONS(553), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(463), 5,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
  [19700] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(765), 6,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_COMMA,
  [19713] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(747), 6,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_COMMA,
  [19726] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(771), 1,
      aux_sym__whitespace_token1,
    ACTIONS(767), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(769), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [19744] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(773), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(747), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
  [19760] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(775), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(777), 3,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
  [19774] = 4,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(779), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(694), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [19790] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(781), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(734), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
  [19806] = 5,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(779), 1,
      sym_assignment_operator,
    ACTIONS(783), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(694), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [19824] = 5,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(779), 1,
      sym_assignment_operator,
    ACTIONS(786), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(694), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [19842] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(793), 1,
      aux_sym__whitespace_token1,
    ACTIONS(795), 1,
      sym_block_comment,
    ACTIONS(789), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(791), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [19860] = 5,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(779), 1,
      sym_assignment_operator,
    ACTIONS(797), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(694), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [19878] = 5,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(779), 1,
      sym_assignment_operator,
    ACTIONS(800), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(694), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [19896] = 5,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(779), 1,
      sym_assignment_operator,
    ACTIONS(803), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(694), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [19914] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(806), 1,
      aux_sym__whitespace_token1,
    ACTIONS(808), 1,
      anon_sym_RPAREN,
    ACTIONS(810), 1,
      sym_macro_parameter,
    STATE(450), 1,
      sym_macro_parameters,
  [19933] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(812), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19944] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(814), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19955] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(816), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19966] = 4,
    ACTIONS(742), 1,
      anon_sym_RPAREN,
    STATE(395), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(818), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [19981] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(821), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19992] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(823), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20003] = 5,
    ACTIONS(736), 1,
      anon_sym_RPAREN,
    ACTIONS(825), 1,
      anon_sym_COMMA,
    ACTIONS(827), 1,
      sym__operand_separator,
    STATE(415), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20020] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(829), 1,
      anon_sym_DQUOTE,
    STATE(399), 1,
      aux_sym_string_repeat1,
    ACTIONS(831), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20037] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(834), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20048] = 3,
    ACTIONS(605), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(463), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_assignment_operator,
  [20061] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(836), 1,
      anon_sym_DQUOTE,
    STATE(417), 1,
      aux_sym_string_repeat1,
    ACTIONS(838), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20078] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(840), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20089] = 4,
    ACTIONS(842), 1,
      ts_builtin_sym_end,
    ACTIONS(846), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(844), 2,
      sym__line_separator,
      anon_sym_SEMI,
  [20104] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(732), 1,
      anon_sym_RPAREN,
    ACTIONS(848), 1,
      aux_sym__whitespace_token1,
    ACTIONS(851), 1,
      anon_sym_COMMA,
    STATE(414), 1,
      aux_sym_macro_parameters_repeat1,
  [20123] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(853), 1,
      anon_sym_DQUOTE,
    STATE(409), 1,
      aux_sym_string_repeat1,
    ACTIONS(855), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20140] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(810), 1,
      sym_macro_parameter,
    ACTIONS(857), 1,
      aux_sym__whitespace_token1,
    ACTIONS(859), 1,
      anon_sym_RPAREN,
    STATE(457), 1,
      sym_macro_parameters,
  [20159] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(861), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20170] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(863), 1,
      anon_sym_DQUOTE,
    STATE(399), 1,
      aux_sym_string_repeat1,
    ACTIONS(865), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20187] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(867), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20198] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(869), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20209] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(871), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20220] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(873), 1,
      anon_sym_DQUOTE,
    STATE(416), 1,
      aux_sym_string_repeat1,
    ACTIONS(875), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20237] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(710), 1,
      anon_sym_RPAREN,
    ACTIONS(877), 1,
      aux_sym__whitespace_token1,
    ACTIONS(880), 1,
      anon_sym_COMMA,
    STATE(414), 1,
      aux_sym_macro_parameters_repeat1,
  [20256] = 5,
    ACTIONS(749), 1,
      anon_sym_RPAREN,
    ACTIONS(825), 1,
      anon_sym_COMMA,
    ACTIONS(883), 1,
      sym__operand_separator,
    STATE(395), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20273] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(885), 1,
      anon_sym_DQUOTE,
    STATE(399), 1,
      aux_sym_string_repeat1,
    ACTIONS(865), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20290] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(887), 1,
      anon_sym_DQUOTE,
    STATE(399), 1,
      aux_sym_string_repeat1,
    ACTIONS(865), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20307] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(889), 1,
      anon_sym_DQUOTE,
    STATE(420), 1,
      aux_sym_string_repeat1,
    ACTIONS(891), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20324] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(702), 1,
      anon_sym_RPAREN,
    ACTIONS(851), 1,
      anon_sym_COMMA,
    ACTIONS(893), 1,
      aux_sym__whitespace_token1,
    STATE(405), 1,
      aux_sym_macro_parameters_repeat1,
  [20343] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(896), 1,
      anon_sym_DQUOTE,
    STATE(399), 1,
      aux_sym_string_repeat1,
    ACTIONS(865), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20360] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(816), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20371] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(898), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20382] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(900), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20393] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(902), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20404] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(515), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20415] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(904), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20426] = 4,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(906), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(844), 2,
      sym__line_separator,
      anon_sym_SEMI,
  [20441] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(908), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20452] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(910), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20463] = 4,
    ACTIONS(623), 1,
      anon_sym_LPAREN,
    ACTIONS(912), 1,
      anon_sym_RPAREN,
    ACTIONS(914), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20477] = 4,
    ACTIONS(623), 1,
      anon_sym_LPAREN,
    ACTIONS(914), 1,
      sym_assignment_operator,
    ACTIONS(916), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20491] = 3,
    ACTIONS(918), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(920), 2,
      sym__data_separator,
      anon_sym_COMMA,
  [20503] = 3,
    ACTIONS(922), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(844), 2,
      sym__line_separator,
      anon_sym_SEMI,
  [20515] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(734), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20525] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(708), 1,
      aux_sym__whitespace_token1,
    ACTIONS(710), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20539] = 4,
    ACTIONS(623), 1,
      anon_sym_LPAREN,
    ACTIONS(914), 1,
      sym_assignment_operator,
    ACTIONS(924), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20553] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(926), 1,
      anon_sym_LPAREN,
    ACTIONS(928), 1,
      sym_macro_parameter,
    STATE(423), 1,
      sym_macro_parameters,
  [20569] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(753), 1,
      aux_sym__whitespace_token1,
    ACTIONS(755), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20583] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(765), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20593] = 4,
    ACTIONS(623), 1,
      anon_sym_LPAREN,
    ACTIONS(914), 1,
      sym_assignment_operator,
    ACTIONS(930), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20607] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(747), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20617] = 4,
    ACTIONS(623), 1,
      anon_sym_LPAREN,
    ACTIONS(914), 1,
      sym_assignment_operator,
    ACTIONS(932), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20631] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(934), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [20642] = 3,
    ACTIONS(491), 1,
      anon_sym_LPAREN,
    ACTIONS(914), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20653] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(936), 2,
      sym__data_separator,
      anon_sym_COMMA,
  [20662] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(920), 2,
      sym__data_separator,
      anon_sym_COMMA,
  [20671] = 3,
    ACTIONS(938), 1,
      ts_builtin_sym_end,
    ACTIONS(940), 1,
      sym__line_separator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20682] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(942), 1,
      anon_sym_COMMA,
    ACTIONS(944), 1,
      sym_macro_parameter,
  [20695] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(946), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [20706] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(948), 1,
      aux_sym__whitespace_token1,
    ACTIONS(950), 1,
      anon_sym_RPAREN,
  [20719] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(952), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [20730] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(954), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [20741] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(956), 1,
      anon_sym_COMMA,
    ACTIONS(958), 1,
      sym_macro_parameter,
  [20754] = 3,
    ACTIONS(842), 1,
      ts_builtin_sym_end,
    ACTIONS(940), 1,
      sym__line_separator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20765] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(844), 1,
      aux_sym__statement_token1,
  [20778] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(960), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [20789] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(962), 1,
      aux_sym__whitespace_token1,
    ACTIONS(964), 1,
      anon_sym_RPAREN,
  [20802] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(842), 1,
      ts_builtin_sym_end,
    ACTIONS(844), 1,
      aux_sym__statement_token1,
  [20815] = 3,
    ACTIONS(914), 1,
      sym_assignment_operator,
    ACTIONS(966), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20826] = 3,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    ACTIONS(914), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20837] = 3,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(914), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20848] = 3,
    ACTIONS(914), 1,
      sym_assignment_operator,
    ACTIONS(968), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20859] = 3,
    ACTIONS(623), 1,
      anon_sym_LPAREN,
    ACTIONS(914), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20870] = 2,
    ACTIONS(970), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20878] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(972), 1,
      aux_sym__whitespace_token1,
    ACTIONS(974), 1,
      sym_block_comment,
  [20888] = 2,
    ACTIONS(976), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20896] = 2,
    ACTIONS(978), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20904] = 2,
    ACTIONS(980), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20912] = 2,
    ACTIONS(982), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20920] = 2,
    ACTIONS(984), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20928] = 2,
    ACTIONS(986), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20936] = 2,
    ACTIONS(988), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20944] = 2,
    ACTIONS(990), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20952] = 2,
    ACTIONS(992), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20960] = 2,
    ACTIONS(994), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20968] = 2,
    ACTIONS(996), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20976] = 2,
    ACTIONS(998), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20984] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(1000), 1,
      aux_sym__whitespace_token1,
    ACTIONS(1002), 1,
      sym_block_comment,
  [20994] = 2,
    ACTIONS(1004), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21002] = 2,
    ACTIONS(1006), 1,
      sym_macro_name,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21010] = 2,
    ACTIONS(1008), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21018] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(1010), 1,
      aux_sym__whitespace_token1,
    ACTIONS(1012), 1,
      sym_block_comment,
  [21028] = 2,
    ACTIONS(1014), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21036] = 2,
    ACTIONS(1016), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21044] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(958), 1,
      sym_macro_parameter,
  [21054] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1018), 1,
      sym_macro_parameter,
  [21064] = 2,
    ACTIONS(1020), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21072] = 2,
    ACTIONS(1022), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21080] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(1024), 1,
      aux_sym__whitespace_token1,
    ACTIONS(1026), 1,
      sym_block_comment,
  [21090] = 2,
    ACTIONS(1028), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21098] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1030), 1,
      sym_macro_parameter,
  [21108] = 2,
    ACTIONS(940), 1,
      sym__line_separator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21116] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(844), 1,
      aux_sym__statement_token1,
  [21126] = 2,
    ACTIONS(1032), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21134] = 2,
    ACTIONS(1034), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21142] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(1036), 1,
      aux_sym__whitespace_token1,
    ACTIONS(1038), 1,
      sym_block_comment,
  [21152] = 2,
    ACTIONS(1040), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21160] = 2,
    ACTIONS(1042), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21168] = 2,
    ACTIONS(1044), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21176] = 2,
    ACTIONS(1046), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21184] = 2,
    ACTIONS(1048), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21192] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(944), 1,
      sym_macro_parameter,
  [21202] = 2,
    ACTIONS(1050), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21210] = 2,
    ACTIONS(1052), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 140,
  [SMALL_STATE(4)] = 275,
  [SMALL_STATE(5)] = 402,
  [SMALL_STATE(6)] = 536,
  [SMALL_STATE(7)] = 634,
  [SMALL_STATE(8)] = 732,
  [SMALL_STATE(9)] = 861,
  [SMALL_STATE(10)] = 990,
  [SMALL_STATE(11)] = 1121,
  [SMALL_STATE(12)] = 1250,
  [SMALL_STATE(13)] = 1383,
  [SMALL_STATE(14)] = 1513,
  [SMALL_STATE(15)] = 1643,
  [SMALL_STATE(16)] = 1773,
  [SMALL_STATE(17)] = 1899,
  [SMALL_STATE(18)] = 2025,
  [SMALL_STATE(19)] = 2155,
  [SMALL_STATE(20)] = 2285,
  [SMALL_STATE(21)] = 2415,
  [SMALL_STATE(22)] = 2545,
  [SMALL_STATE(23)] = 2675,
  [SMALL_STATE(24)] = 2805,
  [SMALL_STATE(25)] = 2935,
  [SMALL_STATE(26)] = 3065,
  [SMALL_STATE(27)] = 3195,
  [SMALL_STATE(28)] = 3322,
  [SMALL_STATE(29)] = 3445,
  [SMALL_STATE(30)] = 3568,
  [SMALL_STATE(31)] = 3687,
  [SMALL_STATE(32)] = 3803,
  [SMALL_STATE(33)] = 3919,
  [SMALL_STATE(34)] = 4035,
  [SMALL_STATE(35)] = 4151,
  [SMALL_STATE(36)] = 4267,
  [SMALL_STATE(37)] = 4383,
  [SMALL_STATE(38)] = 4499,
  [SMALL_STATE(39)] = 4615,
  [SMALL_STATE(40)] = 4731,
  [SMALL_STATE(41)] = 4847,
  [SMALL_STATE(42)] = 4963,
  [SMALL_STATE(43)] = 5079,
  [SMALL_STATE(44)] = 5195,
  [SMALL_STATE(45)] = 5311,
  [SMALL_STATE(46)] = 5427,
  [SMALL_STATE(47)] = 5545,
  [SMALL_STATE(48)] = 5661,
  [SMALL_STATE(49)] = 5777,
  [SMALL_STATE(50)] = 5893,
  [SMALL_STATE(51)] = 6009,
  [SMALL_STATE(52)] = 6125,
  [SMALL_STATE(53)] = 6241,
  [SMALL_STATE(54)] = 6357,
  [SMALL_STATE(55)] = 6473,
  [SMALL_STATE(56)] = 6589,
  [SMALL_STATE(57)] = 6705,
  [SMALL_STATE(58)] = 6821,
  [SMALL_STATE(59)] = 6939,
  [SMALL_STATE(60)] = 7055,
  [SMALL_STATE(61)] = 7171,
  [SMALL_STATE(62)] = 7287,
  [SMALL_STATE(63)] = 7403,
  [SMALL_STATE(64)] = 7519,
  [SMALL_STATE(65)] = 7635,
  [SMALL_STATE(66)] = 7751,
  [SMALL_STATE(67)] = 7867,
  [SMALL_STATE(68)] = 7983,
  [SMALL_STATE(69)] = 8099,
  [SMALL_STATE(70)] = 8217,
  [SMALL_STATE(71)] = 8333,
  [SMALL_STATE(72)] = 8449,
  [SMALL_STATE(73)] = 8565,
  [SMALL_STATE(74)] = 8681,
  [SMALL_STATE(75)] = 8797,
  [SMALL_STATE(76)] = 8913,
  [SMALL_STATE(77)] = 9029,
  [SMALL_STATE(78)] = 9145,
  [SMALL_STATE(79)] = 9261,
  [SMALL_STATE(80)] = 9377,
  [SMALL_STATE(81)] = 9495,
  [SMALL_STATE(82)] = 9611,
  [SMALL_STATE(83)] = 9727,
  [SMALL_STATE(84)] = 9843,
  [SMALL_STATE(85)] = 9959,
  [SMALL_STATE(86)] = 10075,
  [SMALL_STATE(87)] = 10191,
  [SMALL_STATE(88)] = 10307,
  [SMALL_STATE(89)] = 10423,
  [SMALL_STATE(90)] = 10539,
  [SMALL_STATE(91)] = 10655,
  [SMALL_STATE(92)] = 10771,
  [SMALL_STATE(93)] = 10887,
  [SMALL_STATE(94)] = 11003,
  [SMALL_STATE(95)] = 11119,
  [SMALL_STATE(96)] = 11235,
  [SMALL_STATE(97)] = 11351,
  [SMALL_STATE(98)] = 11467,
  [SMALL_STATE(99)] = 11583,
  [SMALL_STATE(100)] = 11699,
  [SMALL_STATE(101)] = 11815,
  [SMALL_STATE(102)] = 11933,
  [SMALL_STATE(103)] = 12049,
  [SMALL_STATE(104)] = 12165,
  [SMALL_STATE(105)] = 12222,
  [SMALL_STATE(106)] = 12276,
  [SMALL_STATE(107)] = 12330,
  [SMALL_STATE(108)] = 12384,
  [SMALL_STATE(109)] = 12420,
  [SMALL_STATE(110)] = 12454,
  [SMALL_STATE(111)] = 12488,
  [SMALL_STATE(112)] = 12522,
  [SMALL_STATE(113)] = 12556,
  [SMALL_STATE(114)] = 12590,
  [SMALL_STATE(115)] = 12626,
  [SMALL_STATE(116)] = 12660,
  [SMALL_STATE(117)] = 12696,
  [SMALL_STATE(118)] = 12730,
  [SMALL_STATE(119)] = 12766,
  [SMALL_STATE(120)] = 12800,
  [SMALL_STATE(121)] = 12836,
  [SMALL_STATE(122)] = 12870,
  [SMALL_STATE(123)] = 12906,
  [SMALL_STATE(124)] = 12940,
  [SMALL_STATE(125)] = 12976,
  [SMALL_STATE(126)] = 13010,
  [SMALL_STATE(127)] = 13046,
  [SMALL_STATE(128)] = 13080,
  [SMALL_STATE(129)] = 13114,
  [SMALL_STATE(130)] = 13148,
  [SMALL_STATE(131)] = 13184,
  [SMALL_STATE(132)] = 13218,
  [SMALL_STATE(133)] = 13254,
  [SMALL_STATE(134)] = 13292,
  [SMALL_STATE(135)] = 13326,
  [SMALL_STATE(136)] = 13360,
  [SMALL_STATE(137)] = 13394,
  [SMALL_STATE(138)] = 13430,
  [SMALL_STATE(139)] = 13466,
  [SMALL_STATE(140)] = 13502,
  [SMALL_STATE(141)] = 13538,
  [SMALL_STATE(142)] = 13574,
  [SMALL_STATE(143)] = 13610,
  [SMALL_STATE(144)] = 13646,
  [SMALL_STATE(145)] = 13682,
  [SMALL_STATE(146)] = 13716,
  [SMALL_STATE(147)] = 13750,
  [SMALL_STATE(148)] = 13784,
  [SMALL_STATE(149)] = 13818,
  [SMALL_STATE(150)] = 13852,
  [SMALL_STATE(151)] = 13888,
  [SMALL_STATE(152)] = 13918,
  [SMALL_STATE(153)] = 13946,
  [SMALL_STATE(154)] = 13974,
  [SMALL_STATE(155)] = 14002,
  [SMALL_STATE(156)] = 14030,
  [SMALL_STATE(157)] = 14060,
  [SMALL_STATE(158)] = 14088,
  [SMALL_STATE(159)] = 14118,
  [SMALL_STATE(160)] = 14146,
  [SMALL_STATE(161)] = 14176,
  [SMALL_STATE(162)] = 14204,
  [SMALL_STATE(163)] = 14234,
  [SMALL_STATE(164)] = 14262,
  [SMALL_STATE(165)] = 14292,
  [SMALL_STATE(166)] = 14320,
  [SMALL_STATE(167)] = 14350,
  [SMALL_STATE(168)] = 14378,
  [SMALL_STATE(169)] = 14408,
  [SMALL_STATE(170)] = 14436,
  [SMALL_STATE(171)] = 14466,
  [SMALL_STATE(172)] = 14494,
  [SMALL_STATE(173)] = 14524,
  [SMALL_STATE(174)] = 14552,
  [SMALL_STATE(175)] = 14582,
  [SMALL_STATE(176)] = 14614,
  [SMALL_STATE(177)] = 14642,
  [SMALL_STATE(178)] = 14670,
  [SMALL_STATE(179)] = 14698,
  [SMALL_STATE(180)] = 14728,
  [SMALL_STATE(181)] = 14758,
  [SMALL_STATE(182)] = 14788,
  [SMALL_STATE(183)] = 14816,
  [SMALL_STATE(184)] = 14846,
  [SMALL_STATE(185)] = 14876,
  [SMALL_STATE(186)] = 14906,
  [SMALL_STATE(187)] = 14936,
  [SMALL_STATE(188)] = 14966,
  [SMALL_STATE(189)] = 14994,
  [SMALL_STATE(190)] = 15022,
  [SMALL_STATE(191)] = 15050,
  [SMALL_STATE(192)] = 15078,
  [SMALL_STATE(193)] = 15106,
  [SMALL_STATE(194)] = 15134,
  [SMALL_STATE(195)] = 15163,
  [SMALL_STATE(196)] = 15190,
  [SMALL_STATE(197)] = 15219,
  [SMALL_STATE(198)] = 15246,
  [SMALL_STATE(199)] = 15275,
  [SMALL_STATE(200)] = 15302,
  [SMALL_STATE(201)] = 15331,
  [SMALL_STATE(202)] = 15358,
  [SMALL_STATE(203)] = 15387,
  [SMALL_STATE(204)] = 15414,
  [SMALL_STATE(205)] = 15443,
  [SMALL_STATE(206)] = 15470,
  [SMALL_STATE(207)] = 15497,
  [SMALL_STATE(208)] = 15526,
  [SMALL_STATE(209)] = 15553,
  [SMALL_STATE(210)] = 15582,
  [SMALL_STATE(211)] = 15609,
  [SMALL_STATE(212)] = 15636,
  [SMALL_STATE(213)] = 15663,
  [SMALL_STATE(214)] = 15690,
  [SMALL_STATE(215)] = 15719,
  [SMALL_STATE(216)] = 15746,
  [SMALL_STATE(217)] = 15775,
  [SMALL_STATE(218)] = 15802,
  [SMALL_STATE(219)] = 15831,
  [SMALL_STATE(220)] = 15858,
  [SMALL_STATE(221)] = 15885,
  [SMALL_STATE(222)] = 15914,
  [SMALL_STATE(223)] = 15943,
  [SMALL_STATE(224)] = 15972,
  [SMALL_STATE(225)] = 16001,
  [SMALL_STATE(226)] = 16030,
  [SMALL_STATE(227)] = 16059,
  [SMALL_STATE(228)] = 16088,
  [SMALL_STATE(229)] = 16117,
  [SMALL_STATE(230)] = 16144,
  [SMALL_STATE(231)] = 16173,
  [SMALL_STATE(232)] = 16200,
  [SMALL_STATE(233)] = 16227,
  [SMALL_STATE(234)] = 16254,
  [SMALL_STATE(235)] = 16281,
  [SMALL_STATE(236)] = 16308,
  [SMALL_STATE(237)] = 16339,
  [SMALL_STATE(238)] = 16366,
  [SMALL_STATE(239)] = 16394,
  [SMALL_STATE(240)] = 16422,
  [SMALL_STATE(241)] = 16450,
  [SMALL_STATE(242)] = 16478,
  [SMALL_STATE(243)] = 16508,
  [SMALL_STATE(244)] = 16534,
  [SMALL_STATE(245)] = 16558,
  [SMALL_STATE(246)] = 16584,
  [SMALL_STATE(247)] = 16608,
  [SMALL_STATE(248)] = 16634,
  [SMALL_STATE(249)] = 16658,
  [SMALL_STATE(250)] = 16684,
  [SMALL_STATE(251)] = 16708,
  [SMALL_STATE(252)] = 16732,
  [SMALL_STATE(253)] = 16756,
  [SMALL_STATE(254)] = 16780,
  [SMALL_STATE(255)] = 16806,
  [SMALL_STATE(256)] = 16832,
  [SMALL_STATE(257)] = 16858,
  [SMALL_STATE(258)] = 16884,
  [SMALL_STATE(259)] = 16910,
  [SMALL_STATE(260)] = 16936,
  [SMALL_STATE(261)] = 16962,
  [SMALL_STATE(262)] = 16988,
  [SMALL_STATE(263)] = 17014,
  [SMALL_STATE(264)] = 17038,
  [SMALL_STATE(265)] = 17064,
  [SMALL_STATE(266)] = 17088,
  [SMALL_STATE(267)] = 17112,
  [SMALL_STATE(268)] = 17136,
  [SMALL_STATE(269)] = 17160,
  [SMALL_STATE(270)] = 17184,
  [SMALL_STATE(271)] = 17212,
  [SMALL_STATE(272)] = 17238,
  [SMALL_STATE(273)] = 17262,
  [SMALL_STATE(274)] = 17286,
  [SMALL_STATE(275)] = 17312,
  [SMALL_STATE(276)] = 17336,
  [SMALL_STATE(277)] = 17362,
  [SMALL_STATE(278)] = 17388,
  [SMALL_STATE(279)] = 17412,
  [SMALL_STATE(280)] = 17436,
  [SMALL_STATE(281)] = 17480,
  [SMALL_STATE(282)] = 17504,
  [SMALL_STATE(283)] = 17528,
  [SMALL_STATE(284)] = 17552,
  [SMALL_STATE(285)] = 17576,
  [SMALL_STATE(286)] = 17600,
  [SMALL_STATE(287)] = 17626,
  [SMALL_STATE(288)] = 17652,
  [SMALL_STATE(289)] = 17678,
  [SMALL_STATE(290)] = 17704,
  [SMALL_STATE(291)] = 17730,
  [SMALL_STATE(292)] = 17756,
  [SMALL_STATE(293)] = 17782,
  [SMALL_STATE(294)] = 17808,
  [SMALL_STATE(295)] = 17834,
  [SMALL_STATE(296)] = 17860,
  [SMALL_STATE(297)] = 17886,
  [SMALL_STATE(298)] = 17912,
  [SMALL_STATE(299)] = 17938,
  [SMALL_STATE(300)] = 17965,
  [SMALL_STATE(301)] = 17989,
  [SMALL_STATE(302)] = 18023,
  [SMALL_STATE(303)] = 18051,
  [SMALL_STATE(304)] = 18073,
  [SMALL_STATE(305)] = 18095,
  [SMALL_STATE(306)] = 18117,
  [SMALL_STATE(307)] = 18139,
  [SMALL_STATE(308)] = 18161,
  [SMALL_STATE(309)] = 18185,
  [SMALL_STATE(310)] = 18207,
  [SMALL_STATE(311)] = 18231,
  [SMALL_STATE(312)] = 18253,
  [SMALL_STATE(313)] = 18277,
  [SMALL_STATE(314)] = 18299,
  [SMALL_STATE(315)] = 18323,
  [SMALL_STATE(316)] = 18345,
  [SMALL_STATE(317)] = 18369,
  [SMALL_STATE(318)] = 18391,
  [SMALL_STATE(319)] = 18413,
  [SMALL_STATE(320)] = 18437,
  [SMALL_STATE(321)] = 18461,
  [SMALL_STATE(322)] = 18483,
  [SMALL_STATE(323)] = 18507,
  [SMALL_STATE(324)] = 18529,
  [SMALL_STATE(325)] = 18553,
  [SMALL_STATE(326)] = 18579,
  [SMALL_STATE(327)] = 18607,
  [SMALL_STATE(328)] = 18629,
  [SMALL_STATE(329)] = 18657,
  [SMALL_STATE(330)] = 18679,
  [SMALL_STATE(331)] = 18701,
  [SMALL_STATE(332)] = 18723,
  [SMALL_STATE(333)] = 18745,
  [SMALL_STATE(334)] = 18767,
  [SMALL_STATE(335)] = 18789,
  [SMALL_STATE(336)] = 18813,
  [SMALL_STATE(337)] = 18837,
  [SMALL_STATE(338)] = 18861,
  [SMALL_STATE(339)] = 18885,
  [SMALL_STATE(340)] = 18909,
  [SMALL_STATE(341)] = 18933,
  [SMALL_STATE(342)] = 18957,
  [SMALL_STATE(343)] = 18981,
  [SMALL_STATE(344)] = 19005,
  [SMALL_STATE(345)] = 19027,
  [SMALL_STATE(346)] = 19049,
  [SMALL_STATE(347)] = 19071,
  [SMALL_STATE(348)] = 19104,
  [SMALL_STATE(349)] = 19129,
  [SMALL_STATE(350)] = 19148,
  [SMALL_STATE(351)] = 19173,
  [SMALL_STATE(352)] = 19198,
  [SMALL_STATE(353)] = 19222,
  [SMALL_STATE(354)] = 19244,
  [SMALL_STATE(355)] = 19264,
  [SMALL_STATE(356)] = 19286,
  [SMALL_STATE(357)] = 19308,
  [SMALL_STATE(358)] = 19332,
  [SMALL_STATE(359)] = 19356,
  [SMALL_STATE(360)] = 19374,
  [SMALL_STATE(361)] = 19393,
  [SMALL_STATE(362)] = 19407,
  [SMALL_STATE(363)] = 19431,
  [SMALL_STATE(364)] = 19445,
  [SMALL_STATE(365)] = 19469,
  [SMALL_STATE(366)] = 19493,
  [SMALL_STATE(367)] = 19507,
  [SMALL_STATE(368)] = 19531,
  [SMALL_STATE(369)] = 19545,
  [SMALL_STATE(370)] = 19565,
  [SMALL_STATE(371)] = 19583,
  [SMALL_STATE(372)] = 19597,
  [SMALL_STATE(373)] = 19617,
  [SMALL_STATE(374)] = 19630,
  [SMALL_STATE(375)] = 19647,
  [SMALL_STATE(376)] = 19664,
  [SMALL_STATE(377)] = 19685,
  [SMALL_STATE(378)] = 19700,
  [SMALL_STATE(379)] = 19713,
  [SMALL_STATE(380)] = 19726,
  [SMALL_STATE(381)] = 19744,
  [SMALL_STATE(382)] = 19760,
  [SMALL_STATE(383)] = 19774,
  [SMALL_STATE(384)] = 19790,
  [SMALL_STATE(385)] = 19806,
  [SMALL_STATE(386)] = 19824,
  [SMALL_STATE(387)] = 19842,
  [SMALL_STATE(388)] = 19860,
  [SMALL_STATE(389)] = 19878,
  [SMALL_STATE(390)] = 19896,
  [SMALL_STATE(391)] = 19914,
  [SMALL_STATE(392)] = 19933,
  [SMALL_STATE(393)] = 19944,
  [SMALL_STATE(394)] = 19955,
  [SMALL_STATE(395)] = 19966,
  [SMALL_STATE(396)] = 19981,
  [SMALL_STATE(397)] = 19992,
  [SMALL_STATE(398)] = 20003,
  [SMALL_STATE(399)] = 20020,
  [SMALL_STATE(400)] = 20037,
  [SMALL_STATE(401)] = 20048,
  [SMALL_STATE(402)] = 20061,
  [SMALL_STATE(403)] = 20078,
  [SMALL_STATE(404)] = 20089,
  [SMALL_STATE(405)] = 20104,
  [SMALL_STATE(406)] = 20123,
  [SMALL_STATE(407)] = 20140,
  [SMALL_STATE(408)] = 20159,
  [SMALL_STATE(409)] = 20170,
  [SMALL_STATE(410)] = 20187,
  [SMALL_STATE(411)] = 20198,
  [SMALL_STATE(412)] = 20209,
  [SMALL_STATE(413)] = 20220,
  [SMALL_STATE(414)] = 20237,
  [SMALL_STATE(415)] = 20256,
  [SMALL_STATE(416)] = 20273,
  [SMALL_STATE(417)] = 20290,
  [SMALL_STATE(418)] = 20307,
  [SMALL_STATE(419)] = 20324,
  [SMALL_STATE(420)] = 20343,
  [SMALL_STATE(421)] = 20360,
  [SMALL_STATE(422)] = 20371,
  [SMALL_STATE(423)] = 20382,
  [SMALL_STATE(424)] = 20393,
  [SMALL_STATE(425)] = 20404,
  [SMALL_STATE(426)] = 20415,
  [SMALL_STATE(427)] = 20426,
  [SMALL_STATE(428)] = 20441,
  [SMALL_STATE(429)] = 20452,
  [SMALL_STATE(430)] = 20463,
  [SMALL_STATE(431)] = 20477,
  [SMALL_STATE(432)] = 20491,
  [SMALL_STATE(433)] = 20503,
  [SMALL_STATE(434)] = 20515,
  [SMALL_STATE(435)] = 20525,
  [SMALL_STATE(436)] = 20539,
  [SMALL_STATE(437)] = 20553,
  [SMALL_STATE(438)] = 20569,
  [SMALL_STATE(439)] = 20583,
  [SMALL_STATE(440)] = 20593,
  [SMALL_STATE(441)] = 20607,
  [SMALL_STATE(442)] = 20617,
  [SMALL_STATE(443)] = 20631,
  [SMALL_STATE(444)] = 20642,
  [SMALL_STATE(445)] = 20653,
  [SMALL_STATE(446)] = 20662,
  [SMALL_STATE(447)] = 20671,
  [SMALL_STATE(448)] = 20682,
  [SMALL_STATE(449)] = 20695,
  [SMALL_STATE(450)] = 20706,
  [SMALL_STATE(451)] = 20719,
  [SMALL_STATE(452)] = 20730,
  [SMALL_STATE(453)] = 20741,
  [SMALL_STATE(454)] = 20754,
  [SMALL_STATE(455)] = 20765,
  [SMALL_STATE(456)] = 20778,
  [SMALL_STATE(457)] = 20789,
  [SMALL_STATE(458)] = 20802,
  [SMALL_STATE(459)] = 20815,
  [SMALL_STATE(460)] = 20826,
  [SMALL_STATE(461)] = 20837,
  [SMALL_STATE(462)] = 20848,
  [SMALL_STATE(463)] = 20859,
  [SMALL_STATE(464)] = 20870,
  [SMALL_STATE(465)] = 20878,
  [SMALL_STATE(466)] = 20888,
  [SMALL_STATE(467)] = 20896,
  [SMALL_STATE(468)] = 20904,
  [SMALL_STATE(469)] = 20912,
  [SMALL_STATE(470)] = 20920,
  [SMALL_STATE(471)] = 20928,
  [SMALL_STATE(472)] = 20936,
  [SMALL_STATE(473)] = 20944,
  [SMALL_STATE(474)] = 20952,
  [SMALL_STATE(475)] = 20960,
  [SMALL_STATE(476)] = 20968,
  [SMALL_STATE(477)] = 20976,
  [SMALL_STATE(478)] = 20984,
  [SMALL_STATE(479)] = 20994,
  [SMALL_STATE(480)] = 21002,
  [SMALL_STATE(481)] = 21010,
  [SMALL_STATE(482)] = 21018,
  [SMALL_STATE(483)] = 21028,
  [SMALL_STATE(484)] = 21036,
  [SMALL_STATE(485)] = 21044,
  [SMALL_STATE(486)] = 21054,
  [SMALL_STATE(487)] = 21064,
  [SMALL_STATE(488)] = 21072,
  [SMALL_STATE(489)] = 21080,
  [SMALL_STATE(490)] = 21090,
  [SMALL_STATE(491)] = 21098,
  [SMALL_STATE(492)] = 21108,
  [SMALL_STATE(493)] = 21116,
  [SMALL_STATE(494)] = 21126,
  [SMALL_STATE(495)] = 21134,
  [SMALL_STATE(496)] = 21142,
  [SMALL_STATE(497)] = 21152,
  [SMALL_STATE(498)] = 21160,
  [SMALL_STATE(499)] = 21168,
  [SMALL_STATE(500)] = 21176,
  [SMALL_STATE(501)] = 21184,
  [SMALL_STATE(502)] = 21192,
  [SMALL_STATE(503)] = 21202,
  [SMALL_STATE(504)] = 21210,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 2, 0, 5),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat2, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat2, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(493),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(465),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(478),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(482),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(382),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(365),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2, 0, 9),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 3, 0, 15),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 1, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label, 1, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 2, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label, 2, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relational_expression, 3, 0, 22),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__relational_expression, 3, 0, 22),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
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
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 11),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 11),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 16),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 3, 0, 16),
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
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
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
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__equality_expression, 3, 0, 22),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__equality_expression, 3, 0, 22),
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
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assignment_expression, 3, 0, 22),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__assignment_expression, 3, 0, 22),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 0),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 3, 0, 16),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_operand, 1, 0, 0),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_operand, 1, 0, 0),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_expression, 1, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_expression, 1, 0, 0),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_operands, 1, 0, 0),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_operands, 1, 0, 0),
  [559] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_numeric_operands, 1, 0, 0), SHIFT(446),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [564] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_numeric_operands, 1, 0, 0), SHIFT(432),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_operands, 2, 0, 0),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_operands, 2, 0, 0),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 3, 0, 0),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 3, 0, 0),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 4, 0, 0),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 4, 0, 0),
  [635] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(446),
  [638] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [641] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(432),
  [644] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat2, 2, 0, 0),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat2, 2, 0, 0),
  [651] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat2, 2, 0, 0), SHIFT_REPEAT(348),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_operands, 3, 0, 0),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_operands, 3, 0, 0),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_directive, 3, 0, 12),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__numeric_directive, 3, 0, 12),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_operands, 1, 0, 0),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_operand, 1, 0, 0),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0),
  [676] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_operands, 2, 0, 0),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__numeric_directive_repeat1, 2, 0, 0),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__numeric_directive_repeat1, 2, 0, 0),
  [685] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__numeric_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(357),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_directive, 4, 0, 12),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__numeric_directive, 4, 0, 12),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_type, 1, 0, 0),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_parameters, 1, 0, 0),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_parameters, 1, 0, 0),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0),
  [712] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(448),
  [715] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(502),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 1),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 1),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_flag, 1, 0, 0),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_parameters, 2, 0, 0),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_parameters, 2, 0, 0),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 1, 0, 9),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 21),
  [744] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 21), SHIFT_REPEAT(28),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2, 0, 15),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 3, 0, 0),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 3, 0, 0),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 3, 0, 7),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 3, 0, 7),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 20),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_directive, 3, 0, 13),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_directive, 3, 0, 13),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_mnemonic, 1, 0, 0),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_mnemonic, 1, 0, 0),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [783] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(251),
  [786] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(219),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 1, 0, 5),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_directive, 1, 0, 5),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [797] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(135),
  [800] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(332),
  [803] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(177),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 7),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 2, 0, 0),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 3),
  [818] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 21), SHIFT_REPEAT(29),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 8),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 26),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [829] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [831] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(399),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 10),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 4),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [848] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_macro_parameters, 2, 0, 0), SHIFT(453),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 17),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_directive, 4, 0, 13),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 8, 0, 26),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 3, 0, 12),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [877] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(453),
  [880] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(485),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [893] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_macro_parameters, 1, 0, 0), SHIFT(453),
  [896] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 17),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 5, 0, 17),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 6),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 5, 0, 7),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 2),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 7),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [934] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 0),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [942] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [946] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [950] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [952] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [964] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_mnemonic, 1, 0, 0),
  [1002] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_mnemonic, 1, 0, 0),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_mnemonic, 1, 0, 0),
  [1012] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_mnemonic, 1, 0, 0),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1026] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [1028] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1038] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
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
