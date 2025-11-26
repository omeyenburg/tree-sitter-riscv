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
  [19] = 19,
  [20] = 19,
  [21] = 18,
  [22] = 14,
  [23] = 13,
  [24] = 19,
  [25] = 18,
  [26] = 19,
  [27] = 18,
  [28] = 19,
  [29] = 18,
  [30] = 19,
  [31] = 18,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 32,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 39,
  [46] = 40,
  [47] = 41,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 36,
  [53] = 48,
  [54] = 49,
  [55] = 42,
  [56] = 43,
  [57] = 44,
  [58] = 39,
  [59] = 40,
  [60] = 41,
  [61] = 48,
  [62] = 49,
  [63] = 50,
  [64] = 51,
  [65] = 42,
  [66] = 43,
  [67] = 44,
  [68] = 39,
  [69] = 40,
  [70] = 41,
  [71] = 48,
  [72] = 49,
  [73] = 50,
  [74] = 42,
  [75] = 36,
  [76] = 42,
  [77] = 43,
  [78] = 44,
  [79] = 39,
  [80] = 40,
  [81] = 41,
  [82] = 48,
  [83] = 49,
  [84] = 50,
  [85] = 51,
  [86] = 36,
  [87] = 87,
  [88] = 42,
  [89] = 42,
  [90] = 42,
  [91] = 42,
  [92] = 42,
  [93] = 87,
  [94] = 87,
  [95] = 87,
  [96] = 50,
  [97] = 37,
  [98] = 51,
  [99] = 36,
  [100] = 37,
  [101] = 101,
  [102] = 43,
  [103] = 37,
  [104] = 87,
  [105] = 37,
  [106] = 44,
  [107] = 107,
  [108] = 51,
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
  [156] = 147,
  [157] = 133,
  [158] = 114,
  [159] = 115,
  [160] = 117,
  [161] = 118,
  [162] = 119,
  [163] = 120,
  [164] = 121,
  [165] = 122,
  [166] = 123,
  [167] = 124,
  [168] = 125,
  [169] = 126,
  [170] = 127,
  [171] = 128,
  [172] = 129,
  [173] = 130,
  [174] = 131,
  [175] = 132,
  [176] = 155,
  [177] = 134,
  [178] = 135,
  [179] = 113,
  [180] = 136,
  [181] = 137,
  [182] = 138,
  [183] = 139,
  [184] = 140,
  [185] = 141,
  [186] = 142,
  [187] = 143,
  [188] = 144,
  [189] = 145,
  [190] = 146,
  [191] = 148,
  [192] = 149,
  [193] = 150,
  [194] = 151,
  [195] = 152,
  [196] = 153,
  [197] = 154,
  [198] = 116,
  [199] = 147,
  [200] = 119,
  [201] = 120,
  [202] = 139,
  [203] = 121,
  [204] = 122,
  [205] = 123,
  [206] = 124,
  [207] = 125,
  [208] = 126,
  [209] = 127,
  [210] = 128,
  [211] = 211,
  [212] = 140,
  [213] = 141,
  [214] = 115,
  [215] = 142,
  [216] = 143,
  [217] = 144,
  [218] = 145,
  [219] = 146,
  [220] = 118,
  [221] = 149,
  [222] = 150,
  [223] = 151,
  [224] = 116,
  [225] = 138,
  [226] = 152,
  [227] = 153,
  [228] = 154,
  [229] = 117,
  [230] = 129,
  [231] = 130,
  [232] = 131,
  [233] = 132,
  [234] = 155,
  [235] = 134,
  [236] = 135,
  [237] = 113,
  [238] = 114,
  [239] = 136,
  [240] = 137,
  [241] = 133,
  [242] = 148,
  [243] = 153,
  [244] = 154,
  [245] = 114,
  [246] = 139,
  [247] = 247,
  [248] = 248,
  [249] = 138,
  [250] = 152,
  [251] = 153,
  [252] = 115,
  [253] = 154,
  [254] = 116,
  [255] = 117,
  [256] = 118,
  [257] = 136,
  [258] = 139,
  [259] = 140,
  [260] = 248,
  [261] = 141,
  [262] = 137,
  [263] = 142,
  [264] = 143,
  [265] = 144,
  [266] = 119,
  [267] = 120,
  [268] = 121,
  [269] = 122,
  [270] = 123,
  [271] = 271,
  [272] = 124,
  [273] = 125,
  [274] = 126,
  [275] = 113,
  [276] = 128,
  [277] = 129,
  [278] = 130,
  [279] = 131,
  [280] = 145,
  [281] = 248,
  [282] = 132,
  [283] = 155,
  [284] = 134,
  [285] = 285,
  [286] = 146,
  [287] = 147,
  [288] = 148,
  [289] = 149,
  [290] = 114,
  [291] = 133,
  [292] = 135,
  [293] = 150,
  [294] = 271,
  [295] = 151,
  [296] = 271,
  [297] = 248,
  [298] = 271,
  [299] = 248,
  [300] = 271,
  [301] = 248,
  [302] = 271,
  [303] = 127,
  [304] = 133,
  [305] = 128,
  [306] = 151,
  [307] = 152,
  [308] = 308,
  [309] = 309,
  [310] = 115,
  [311] = 116,
  [312] = 117,
  [313] = 118,
  [314] = 119,
  [315] = 120,
  [316] = 121,
  [317] = 122,
  [318] = 123,
  [319] = 124,
  [320] = 125,
  [321] = 126,
  [322] = 127,
  [323] = 129,
  [324] = 130,
  [325] = 131,
  [326] = 132,
  [327] = 155,
  [328] = 134,
  [329] = 329,
  [330] = 113,
  [331] = 136,
  [332] = 137,
  [333] = 138,
  [334] = 334,
  [335] = 139,
  [336] = 114,
  [337] = 153,
  [338] = 154,
  [339] = 140,
  [340] = 141,
  [341] = 133,
  [342] = 142,
  [343] = 143,
  [344] = 144,
  [345] = 145,
  [346] = 146,
  [347] = 147,
  [348] = 148,
  [349] = 149,
  [350] = 150,
  [351] = 135,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 133,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 133,
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
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 375,
  [383] = 133,
  [384] = 384,
  [385] = 377,
  [386] = 377,
  [387] = 387,
  [388] = 366,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 387,
  [394] = 375,
  [395] = 395,
  [396] = 387,
  [397] = 387,
  [398] = 387,
  [399] = 399,
  [400] = 373,
  [401] = 401,
  [402] = 370,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 133,
  [409] = 409,
  [410] = 410,
  [411] = 368,
  [412] = 401,
  [413] = 413,
  [414] = 414,
  [415] = 376,
  [416] = 414,
  [417] = 372,
  [418] = 401,
  [419] = 419,
  [420] = 414,
  [421] = 421,
  [422] = 401,
  [423] = 423,
  [424] = 424,
  [425] = 414,
  [426] = 426,
  [427] = 427,
  [428] = 374,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 375,
  [441] = 377,
  [442] = 438,
  [443] = 443,
  [444] = 444,
  [445] = 380,
  [446] = 438,
  [447] = 381,
  [448] = 438,
  [449] = 438,
  [450] = 384,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 452,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 451,
  [460] = 454,
  [461] = 451,
  [462] = 462,
  [463] = 463,
  [464] = 451,
  [465] = 465,
  [466] = 451,
  [467] = 467,
  [468] = 452,
  [469] = 452,
  [470] = 452,
  [471] = 452,
  [472] = 472,
  [473] = 473,
  [474] = 473,
  [475] = 472,
  [476] = 476,
  [477] = 473,
  [478] = 478,
  [479] = 479,
  [480] = 472,
  [481] = 478,
  [482] = 478,
  [483] = 483,
  [484] = 484,
  [485] = 478,
  [486] = 478,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 472,
  [492] = 483,
  [493] = 484,
  [494] = 473,
  [495] = 473,
  [496] = 472,
  [497] = 472,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 501,
  [504] = 501,
  [505] = 501,
  [506] = 478,
  [507] = 501,
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
        '\\', 7,
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
      if (lookahead == '\n') SKIP(1);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(1);
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
      if (lookahead == '\n') SKIP(23);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(23);
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
        ',', 126,
        '-', 441,
        '.', 577,
        '/', 31,
        '0', 448,
        '3', 453,
        ';', 105,
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
        '\\', 7,
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
        ',', 126,
        '-', 441,
        '.', 577,
        '/', 31,
        '0', 448,
        '3', 453,
        ';', 105,
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
      if (lookahead == '\\') ADVANCE(7);
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
      if (lookahead == '\\') ADVANCE(7);
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
      if (lookahead == '\\') ADVANCE(7);
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
      if (lookahead == '\\') ADVANCE(7);
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
  [3] = {.lex_state = 100, .external_lex_state = 3},
  [4] = {.lex_state = 100, .external_lex_state = 3},
  [5] = {.lex_state = 80, .external_lex_state = 3},
  [6] = {.lex_state = 80, .external_lex_state = 4},
  [7] = {.lex_state = 80, .external_lex_state = 4},
  [8] = {.lex_state = 99, .external_lex_state = 3},
  [9] = {.lex_state = 80, .external_lex_state = 4},
  [10] = {.lex_state = 84, .external_lex_state = 2},
  [11] = {.lex_state = 100, .external_lex_state = 2},
  [12] = {.lex_state = 84, .external_lex_state = 2},
  [13] = {.lex_state = 99, .external_lex_state = 3},
  [14] = {.lex_state = 99, .external_lex_state = 3},
  [15] = {.lex_state = 100, .external_lex_state = 2},
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
  [34] = {.lex_state = 99, .external_lex_state = 5},
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
  [104] = {.lex_state = 99, .external_lex_state = 2},
  [105] = {.lex_state = 99, .external_lex_state = 2},
  [106] = {.lex_state = 99, .external_lex_state = 2},
  [107] = {.lex_state = 99, .external_lex_state = 2},
  [108] = {.lex_state = 99, .external_lex_state = 2},
  [109] = {.lex_state = 87, .external_lex_state = 2},
  [110] = {.lex_state = 84, .external_lex_state = 2},
  [111] = {.lex_state = 84, .external_lex_state = 2},
  [112] = {.lex_state = 84, .external_lex_state = 2},
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
  [151] = {.lex_state = 81, .external_lex_state = 1},
  [152] = {.lex_state = 81, .external_lex_state = 1},
  [153] = {.lex_state = 81, .external_lex_state = 1},
  [154] = {.lex_state = 81, .external_lex_state = 1},
  [155] = {.lex_state = 81, .external_lex_state = 1},
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
  [194] = {.lex_state = 103, .external_lex_state = 1},
  [195] = {.lex_state = 103, .external_lex_state = 1},
  [196] = {.lex_state = 103, .external_lex_state = 1},
  [197] = {.lex_state = 103, .external_lex_state = 1},
  [198] = {.lex_state = 103, .external_lex_state = 1},
  [199] = {.lex_state = 102, .external_lex_state = 6},
  [200] = {.lex_state = 102, .external_lex_state = 6},
  [201] = {.lex_state = 102, .external_lex_state = 6},
  [202] = {.lex_state = 102, .external_lex_state = 6},
  [203] = {.lex_state = 102, .external_lex_state = 6},
  [204] = {.lex_state = 102, .external_lex_state = 6},
  [205] = {.lex_state = 102, .external_lex_state = 6},
  [206] = {.lex_state = 102, .external_lex_state = 6},
  [207] = {.lex_state = 102, .external_lex_state = 6},
  [208] = {.lex_state = 102, .external_lex_state = 6},
  [209] = {.lex_state = 102, .external_lex_state = 6},
  [210] = {.lex_state = 102, .external_lex_state = 6},
  [211] = {.lex_state = 102, .external_lex_state = 6},
  [212] = {.lex_state = 102, .external_lex_state = 6},
  [213] = {.lex_state = 102, .external_lex_state = 6},
  [214] = {.lex_state = 102, .external_lex_state = 6},
  [215] = {.lex_state = 102, .external_lex_state = 6},
  [216] = {.lex_state = 102, .external_lex_state = 6},
  [217] = {.lex_state = 102, .external_lex_state = 6},
  [218] = {.lex_state = 102, .external_lex_state = 6},
  [219] = {.lex_state = 102, .external_lex_state = 6},
  [220] = {.lex_state = 102, .external_lex_state = 6},
  [221] = {.lex_state = 102, .external_lex_state = 6},
  [222] = {.lex_state = 102, .external_lex_state = 6},
  [223] = {.lex_state = 102, .external_lex_state = 6},
  [224] = {.lex_state = 102, .external_lex_state = 6},
  [225] = {.lex_state = 102, .external_lex_state = 6},
  [226] = {.lex_state = 102, .external_lex_state = 6},
  [227] = {.lex_state = 102, .external_lex_state = 6},
  [228] = {.lex_state = 102, .external_lex_state = 6},
  [229] = {.lex_state = 102, .external_lex_state = 6},
  [230] = {.lex_state = 102, .external_lex_state = 6},
  [231] = {.lex_state = 102, .external_lex_state = 6},
  [232] = {.lex_state = 102, .external_lex_state = 6},
  [233] = {.lex_state = 102, .external_lex_state = 6},
  [234] = {.lex_state = 102, .external_lex_state = 6},
  [235] = {.lex_state = 102, .external_lex_state = 6},
  [236] = {.lex_state = 102, .external_lex_state = 6},
  [237] = {.lex_state = 102, .external_lex_state = 6},
  [238] = {.lex_state = 102, .external_lex_state = 6},
  [239] = {.lex_state = 102, .external_lex_state = 6},
  [240] = {.lex_state = 102, .external_lex_state = 6},
  [241] = {.lex_state = 102, .external_lex_state = 6},
  [242] = {.lex_state = 102, .external_lex_state = 6},
  [243] = {.lex_state = 101, .external_lex_state = 3},
  [244] = {.lex_state = 101, .external_lex_state = 3},
  [245] = {.lex_state = 101, .external_lex_state = 3},
  [246] = {.lex_state = 101, .external_lex_state = 3},
  [247] = {.lex_state = 101, .external_lex_state = 3},
  [248] = {.lex_state = 26, .external_lex_state = 7},
  [249] = {.lex_state = 26, .external_lex_state = 7},
  [250] = {.lex_state = 26, .external_lex_state = 7},
  [251] = {.lex_state = 26, .external_lex_state = 7},
  [252] = {.lex_state = 26, .external_lex_state = 7},
  [253] = {.lex_state = 26, .external_lex_state = 7},
  [254] = {.lex_state = 26, .external_lex_state = 7},
  [255] = {.lex_state = 26, .external_lex_state = 7},
  [256] = {.lex_state = 26, .external_lex_state = 7},
  [257] = {.lex_state = 26, .external_lex_state = 7},
  [258] = {.lex_state = 26, .external_lex_state = 7},
  [259] = {.lex_state = 26, .external_lex_state = 7},
  [260] = {.lex_state = 26, .external_lex_state = 7},
  [261] = {.lex_state = 26, .external_lex_state = 7},
  [262] = {.lex_state = 26, .external_lex_state = 7},
  [263] = {.lex_state = 26, .external_lex_state = 7},
  [264] = {.lex_state = 26, .external_lex_state = 7},
  [265] = {.lex_state = 26, .external_lex_state = 7},
  [266] = {.lex_state = 26, .external_lex_state = 7},
  [267] = {.lex_state = 26, .external_lex_state = 7},
  [268] = {.lex_state = 26, .external_lex_state = 7},
  [269] = {.lex_state = 26, .external_lex_state = 7},
  [270] = {.lex_state = 26, .external_lex_state = 7},
  [271] = {.lex_state = 26, .external_lex_state = 7},
  [272] = {.lex_state = 26, .external_lex_state = 7},
  [273] = {.lex_state = 26, .external_lex_state = 7},
  [274] = {.lex_state = 26, .external_lex_state = 7},
  [275] = {.lex_state = 26, .external_lex_state = 7},
  [276] = {.lex_state = 26, .external_lex_state = 7},
  [277] = {.lex_state = 26, .external_lex_state = 7},
  [278] = {.lex_state = 26, .external_lex_state = 7},
  [279] = {.lex_state = 26, .external_lex_state = 7},
  [280] = {.lex_state = 26, .external_lex_state = 7},
  [281] = {.lex_state = 26, .external_lex_state = 7},
  [282] = {.lex_state = 26, .external_lex_state = 7},
  [283] = {.lex_state = 26, .external_lex_state = 7},
  [284] = {.lex_state = 26, .external_lex_state = 7},
  [285] = {.lex_state = 80, .external_lex_state = 1},
  [286] = {.lex_state = 26, .external_lex_state = 7},
  [287] = {.lex_state = 26, .external_lex_state = 7},
  [288] = {.lex_state = 26, .external_lex_state = 7},
  [289] = {.lex_state = 26, .external_lex_state = 7},
  [290] = {.lex_state = 26, .external_lex_state = 7},
  [291] = {.lex_state = 26, .external_lex_state = 7},
  [292] = {.lex_state = 26, .external_lex_state = 7},
  [293] = {.lex_state = 26, .external_lex_state = 7},
  [294] = {.lex_state = 26, .external_lex_state = 7},
  [295] = {.lex_state = 26, .external_lex_state = 7},
  [296] = {.lex_state = 26, .external_lex_state = 7},
  [297] = {.lex_state = 26, .external_lex_state = 7},
  [298] = {.lex_state = 26, .external_lex_state = 7},
  [299] = {.lex_state = 26, .external_lex_state = 7},
  [300] = {.lex_state = 26, .external_lex_state = 7},
  [301] = {.lex_state = 26, .external_lex_state = 7},
  [302] = {.lex_state = 26, .external_lex_state = 7},
  [303] = {.lex_state = 26, .external_lex_state = 7},
  [304] = {.lex_state = 80, .external_lex_state = 1},
  [305] = {.lex_state = 26, .external_lex_state = 2},
  [306] = {.lex_state = 26, .external_lex_state = 2},
  [307] = {.lex_state = 26, .external_lex_state = 2},
  [308] = {.lex_state = 80, .external_lex_state = 1},
  [309] = {.lex_state = 80, .external_lex_state = 1},
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
  [326] = {.lex_state = 26, .external_lex_state = 2},
  [327] = {.lex_state = 26, .external_lex_state = 2},
  [328] = {.lex_state = 26, .external_lex_state = 2},
  [329] = {.lex_state = 80, .external_lex_state = 1},
  [330] = {.lex_state = 26, .external_lex_state = 2},
  [331] = {.lex_state = 26, .external_lex_state = 2},
  [332] = {.lex_state = 26, .external_lex_state = 2},
  [333] = {.lex_state = 26, .external_lex_state = 2},
  [334] = {.lex_state = 80, .external_lex_state = 1},
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
  [347] = {.lex_state = 26, .external_lex_state = 2},
  [348] = {.lex_state = 26, .external_lex_state = 2},
  [349] = {.lex_state = 26, .external_lex_state = 2},
  [350] = {.lex_state = 26, .external_lex_state = 2},
  [351] = {.lex_state = 26, .external_lex_state = 2},
  [352] = {.lex_state = 80, .external_lex_state = 1},
  [353] = {.lex_state = 80, .external_lex_state = 4},
  [354] = {.lex_state = 80, .external_lex_state = 4},
  [355] = {.lex_state = 80, .external_lex_state = 4},
  [356] = {.lex_state = 100, .external_lex_state = 1},
  [357] = {.lex_state = 80, .external_lex_state = 3},
  [358] = {.lex_state = 100, .external_lex_state = 1},
  [359] = {.lex_state = 80, .external_lex_state = 3},
  [360] = {.lex_state = 100, .external_lex_state = 1},
  [361] = {.lex_state = 100, .external_lex_state = 1},
  [362] = {.lex_state = 100, .external_lex_state = 1},
  [363] = {.lex_state = 80, .external_lex_state = 3},
  [364] = {.lex_state = 0, .external_lex_state = 6},
  [365] = {.lex_state = 80, .external_lex_state = 3},
  [366] = {.lex_state = 0, .external_lex_state = 6},
  [367] = {.lex_state = 100, .external_lex_state = 1},
  [368] = {.lex_state = 101, .external_lex_state = 3},
  [369] = {.lex_state = 100, .external_lex_state = 1},
  [370] = {.lex_state = 0, .external_lex_state = 6},
  [371] = {.lex_state = 100, .external_lex_state = 1},
  [372] = {.lex_state = 0, .external_lex_state = 6},
  [373] = {.lex_state = 101, .external_lex_state = 3},
  [374] = {.lex_state = 0, .external_lex_state = 6},
  [375] = {.lex_state = 100, .external_lex_state = 1},
  [376] = {.lex_state = 101, .external_lex_state = 3},
  [377] = {.lex_state = 100, .external_lex_state = 1},
  [378] = {.lex_state = 101, .external_lex_state = 3},
  [379] = {.lex_state = 101, .external_lex_state = 3},
  [380] = {.lex_state = 101, .external_lex_state = 3},
  [381] = {.lex_state = 101, .external_lex_state = 3},
  [382] = {.lex_state = 0, .external_lex_state = 6},
  [383] = {.lex_state = 0, .external_lex_state = 7},
  [384] = {.lex_state = 0, .external_lex_state = 6},
  [385] = {.lex_state = 0, .external_lex_state = 6},
  [386] = {.lex_state = 101, .external_lex_state = 3},
  [387] = {.lex_state = 0, .external_lex_state = 7},
  [388] = {.lex_state = 0, .external_lex_state = 7},
  [389] = {.lex_state = 101, .external_lex_state = 3},
  [390] = {.lex_state = 101, .external_lex_state = 3},
  [391] = {.lex_state = 101, .external_lex_state = 3},
  [392] = {.lex_state = 101, .external_lex_state = 3},
  [393] = {.lex_state = 0, .external_lex_state = 7},
  [394] = {.lex_state = 101, .external_lex_state = 3},
  [395] = {.lex_state = 101, .external_lex_state = 3},
  [396] = {.lex_state = 0, .external_lex_state = 7},
  [397] = {.lex_state = 0, .external_lex_state = 7},
  [398] = {.lex_state = 0, .external_lex_state = 7},
  [399] = {.lex_state = 0, .external_lex_state = 3},
  [400] = {.lex_state = 101, .external_lex_state = 2},
  [401] = {.lex_state = 27, .external_lex_state = 2},
  [402] = {.lex_state = 0, .external_lex_state = 7},
  [403] = {.lex_state = 29, .external_lex_state = 2},
  [404] = {.lex_state = 0, .external_lex_state = 3},
  [405] = {.lex_state = 0, .external_lex_state = 3},
  [406] = {.lex_state = 0, .external_lex_state = 3},
  [407] = {.lex_state = 0, .external_lex_state = 3},
  [408] = {.lex_state = 0, .external_lex_state = 2},
  [409] = {.lex_state = 0, .external_lex_state = 3},
  [410] = {.lex_state = 0, .external_lex_state = 3},
  [411] = {.lex_state = 101, .external_lex_state = 2},
  [412] = {.lex_state = 27, .external_lex_state = 2},
  [413] = {.lex_state = 29, .external_lex_state = 2},
  [414] = {.lex_state = 27, .external_lex_state = 2},
  [415] = {.lex_state = 101, .external_lex_state = 2},
  [416] = {.lex_state = 27, .external_lex_state = 2},
  [417] = {.lex_state = 0, .external_lex_state = 7},
  [418] = {.lex_state = 27, .external_lex_state = 2},
  [419] = {.lex_state = 0, .external_lex_state = 3},
  [420] = {.lex_state = 27, .external_lex_state = 2},
  [421] = {.lex_state = 0, .external_lex_state = 3},
  [422] = {.lex_state = 27, .external_lex_state = 2},
  [423] = {.lex_state = 0, .external_lex_state = 3},
  [424] = {.lex_state = 0, .external_lex_state = 3},
  [425] = {.lex_state = 27, .external_lex_state = 2},
  [426] = {.lex_state = 27, .external_lex_state = 2},
  [427] = {.lex_state = 0, .external_lex_state = 3},
  [428] = {.lex_state = 0, .external_lex_state = 7},
  [429] = {.lex_state = 0, .external_lex_state = 3},
  [430] = {.lex_state = 0, .external_lex_state = 3},
  [431] = {.lex_state = 0, .external_lex_state = 3},
  [432] = {.lex_state = 0, .external_lex_state = 3},
  [433] = {.lex_state = 0, .external_lex_state = 3},
  [434] = {.lex_state = 0, .external_lex_state = 3},
  [435] = {.lex_state = 0, .external_lex_state = 3},
  [436] = {.lex_state = 0, .external_lex_state = 3},
  [437] = {.lex_state = 0, .external_lex_state = 3},
  [438] = {.lex_state = 0, .external_lex_state = 2},
  [439] = {.lex_state = 0, .external_lex_state = 5},
  [440] = {.lex_state = 0, .external_lex_state = 7},
  [441] = {.lex_state = 0, .external_lex_state = 7},
  [442] = {.lex_state = 0, .external_lex_state = 2},
  [443] = {.lex_state = 28, .external_lex_state = 2},
  [444] = {.lex_state = 0, .external_lex_state = 3},
  [445] = {.lex_state = 101, .external_lex_state = 2},
  [446] = {.lex_state = 0, .external_lex_state = 2},
  [447] = {.lex_state = 101, .external_lex_state = 2},
  [448] = {.lex_state = 0, .external_lex_state = 2},
  [449] = {.lex_state = 0, .external_lex_state = 2},
  [450] = {.lex_state = 0, .external_lex_state = 7},
  [451] = {.lex_state = 36, .external_lex_state = 2},
  [452] = {.lex_state = 0, .external_lex_state = 2},
  [453] = {.lex_state = 101, .external_lex_state = 2},
  [454] = {.lex_state = 28, .external_lex_state = 2},
  [455] = {.lex_state = 0, .external_lex_state = 2},
  [456] = {.lex_state = 101, .external_lex_state = 2},
  [457] = {.lex_state = 0, .external_lex_state = 5},
  [458] = {.lex_state = 0, .external_lex_state = 3},
  [459] = {.lex_state = 36, .external_lex_state = 2},
  [460] = {.lex_state = 28, .external_lex_state = 2},
  [461] = {.lex_state = 36, .external_lex_state = 2},
  [462] = {.lex_state = 0, .external_lex_state = 3},
  [463] = {.lex_state = 98, .external_lex_state = 2},
  [464] = {.lex_state = 36, .external_lex_state = 2},
  [465] = {.lex_state = 98, .external_lex_state = 2},
  [466] = {.lex_state = 36, .external_lex_state = 2},
  [467] = {.lex_state = 0, .external_lex_state = 5},
  [468] = {.lex_state = 0, .external_lex_state = 2},
  [469] = {.lex_state = 0, .external_lex_state = 2},
  [470] = {.lex_state = 0, .external_lex_state = 2},
  [471] = {.lex_state = 0, .external_lex_state = 2},
  [472] = {.lex_state = 0, .external_lex_state = 2},
  [473] = {.lex_state = 0, .external_lex_state = 2},
  [474] = {.lex_state = 0, .external_lex_state = 2},
  [475] = {.lex_state = 0, .external_lex_state = 2},
  [476] = {.lex_state = 98, .external_lex_state = 2},
  [477] = {.lex_state = 0, .external_lex_state = 2},
  [478] = {.lex_state = 0, .external_lex_state = 2},
  [479] = {.lex_state = 0, .external_lex_state = 3},
  [480] = {.lex_state = 0, .external_lex_state = 2},
  [481] = {.lex_state = 0, .external_lex_state = 2},
  [482] = {.lex_state = 0, .external_lex_state = 2},
  [483] = {.lex_state = 28, .external_lex_state = 2},
  [484] = {.lex_state = 28, .external_lex_state = 2},
  [485] = {.lex_state = 0, .external_lex_state = 2},
  [486] = {.lex_state = 0, .external_lex_state = 2},
  [487] = {.lex_state = 103, .external_lex_state = 2},
  [488] = {.lex_state = 0, .external_lex_state = 2},
  [489] = {.lex_state = 0, .external_lex_state = 2},
  [490] = {.lex_state = 0, .external_lex_state = 2},
  [491] = {.lex_state = 0, .external_lex_state = 2},
  [492] = {.lex_state = 28, .external_lex_state = 2},
  [493] = {.lex_state = 28, .external_lex_state = 2},
  [494] = {.lex_state = 0, .external_lex_state = 2},
  [495] = {.lex_state = 0, .external_lex_state = 2},
  [496] = {.lex_state = 0, .external_lex_state = 2},
  [497] = {.lex_state = 0, .external_lex_state = 2},
  [498] = {.lex_state = 0, .external_lex_state = 2},
  [499] = {.lex_state = 101, .external_lex_state = 2},
  [500] = {.lex_state = 0, .external_lex_state = 2},
  [501] = {.lex_state = 0, .external_lex_state = 2},
  [502] = {.lex_state = 0, .external_lex_state = 2},
  [503] = {.lex_state = 0, .external_lex_state = 2},
  [504] = {.lex_state = 0, .external_lex_state = 2},
  [505] = {.lex_state = 0, .external_lex_state = 2},
  [506] = {.lex_state = 0, .external_lex_state = 2},
  [507] = {.lex_state = 0, .external_lex_state = 2},
  [508] = {.lex_state = 101, .external_lex_state = 2},
  [509] = {.lex_state = 101, .external_lex_state = 2},
  [510] = {.lex_state = 0, .external_lex_state = 2},
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
    [sym__statement] = STATE(10),
    [sym_directive] = STATE(431),
    [sym__macro_directive] = STATE(432),
    [sym__numeric_directive] = STATE(436),
    [sym_numeric_mnemonic] = STATE(390),
    [sym__string_directive] = STATE(423),
    [sym_string_mnemonic] = STATE(509),
    [sym__control_directive] = STATE(424),
    [sym_control_mnemonic] = STATE(392),
    [sym_instruction] = STATE(431),
    [sym__label] = STATE(10),
    [aux_sym_program_repeat1] = STATE(10),
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
    STATE(362), 1,
      sym__wrapped_assignment_expression,
    STATE(405), 1,
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
    STATE(361), 4,
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
    STATE(362), 1,
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
    STATE(371), 4,
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
    STATE(362), 1,
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
    STATE(371), 4,
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
  [414] = 37,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      sym_relocation_type,
    ACTIONS(71), 1,
      aux_sym_decimal_token1,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    STATE(113), 1,
      sym__wrapped_additive_expression,
    STATE(118), 1,
      sym__assignment_expression,
    STATE(119), 1,
      sym__logical_or_expression,
    STATE(120), 1,
      sym__wrapped_logical_or_expression,
    STATE(121), 1,
      sym__logical_and_expression,
    STATE(122), 1,
      sym__wrapped_logical_and_expression,
    STATE(123), 1,
      sym__bitwise_or_expression,
    STATE(124), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(125), 1,
      sym__bitwise_xor_expression,
    STATE(126), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(127), 1,
      sym__bitwise_and_expression,
    STATE(128), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(129), 1,
      sym__equality_expression,
    STATE(130), 1,
      sym__wrapped_equality_expression,
    STATE(131), 1,
      sym__relational_expression,
    STATE(132), 1,
      sym__wrapped_relational_expression,
    STATE(134), 1,
      sym__wrapped_shift_expression,
    STATE(135), 1,
      sym__additive_expression,
    STATE(136), 1,
      sym__multiplicative_expression,
    STATE(155), 1,
      sym__shift_expression,
    STATE(285), 1,
      sym__wrapped_assignment_expression,
    STATE(357), 1,
      aux_sym__numeric_directive_repeat1,
    STATE(365), 1,
      sym_numeric_operands,
    ACTIONS(57), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(59), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(65), 3,
      sym_unary_minus_operator,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(61), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(69), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(137), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [548] = 36,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      sym_relocation_type,
    ACTIONS(71), 1,
      aux_sym_decimal_token1,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(83), 1,
      anon_sym_COMMA,
    ACTIONS(85), 1,
      sym__data_separator,
    STATE(113), 1,
      sym__wrapped_additive_expression,
    STATE(118), 1,
      sym__assignment_expression,
    STATE(119), 1,
      sym__logical_or_expression,
    STATE(120), 1,
      sym__wrapped_logical_or_expression,
    STATE(121), 1,
      sym__logical_and_expression,
    STATE(122), 1,
      sym__wrapped_logical_and_expression,
    STATE(123), 1,
      sym__bitwise_or_expression,
    STATE(124), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(125), 1,
      sym__bitwise_xor_expression,
    STATE(126), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(127), 1,
      sym__bitwise_and_expression,
    STATE(128), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(129), 1,
      sym__equality_expression,
    STATE(130), 1,
      sym__wrapped_equality_expression,
    STATE(131), 1,
      sym__relational_expression,
    STATE(132), 1,
      sym__wrapped_relational_expression,
    STATE(134), 1,
      sym__wrapped_shift_expression,
    STATE(135), 1,
      sym__additive_expression,
    STATE(136), 1,
      sym__multiplicative_expression,
    STATE(155), 1,
      sym__shift_expression,
    STATE(334), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(79), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(65), 3,
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
    ACTIONS(69), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(137), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [680] = 36,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      sym_relocation_type,
    ACTIONS(71), 1,
      aux_sym_decimal_token1,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(83), 1,
      anon_sym_COMMA,
    ACTIONS(85), 1,
      sym__data_separator,
    STATE(113), 1,
      sym__wrapped_additive_expression,
    STATE(118), 1,
      sym__assignment_expression,
    STATE(119), 1,
      sym__logical_or_expression,
    STATE(120), 1,
      sym__wrapped_logical_or_expression,
    STATE(121), 1,
      sym__logical_and_expression,
    STATE(122), 1,
      sym__wrapped_logical_and_expression,
    STATE(123), 1,
      sym__bitwise_or_expression,
    STATE(124), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(125), 1,
      sym__bitwise_xor_expression,
    STATE(126), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(127), 1,
      sym__bitwise_and_expression,
    STATE(128), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(129), 1,
      sym__equality_expression,
    STATE(130), 1,
      sym__wrapped_equality_expression,
    STATE(131), 1,
      sym__relational_expression,
    STATE(132), 1,
      sym__wrapped_relational_expression,
    STATE(134), 1,
      sym__wrapped_shift_expression,
    STATE(135), 1,
      sym__additive_expression,
    STATE(136), 1,
      sym__multiplicative_expression,
    STATE(155), 1,
      sym__shift_expression,
    STATE(334), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(87), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(65), 3,
      sym_unary_minus_operator,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(89), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(69), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(137), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [812] = 38,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      sym_unary_minus_operator,
    ACTIONS(99), 1,
      sym_relocation_type,
    ACTIONS(105), 1,
      aux_sym_decimal_token1,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(113), 1,
      aux_sym_symbol_token1,
    STATE(200), 1,
      sym__logical_or_expression,
    STATE(201), 1,
      sym__wrapped_logical_or_expression,
    STATE(203), 1,
      sym__logical_and_expression,
    STATE(204), 1,
      sym__wrapped_logical_and_expression,
    STATE(205), 1,
      sym__bitwise_or_expression,
    STATE(206), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(207), 1,
      sym__bitwise_xor_expression,
    STATE(208), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(209), 1,
      sym__bitwise_and_expression,
    STATE(210), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(220), 1,
      sym__assignment_expression,
    STATE(230), 1,
      sym__equality_expression,
    STATE(231), 1,
      sym__wrapped_equality_expression,
    STATE(232), 1,
      sym__relational_expression,
    STATE(233), 1,
      sym__wrapped_relational_expression,
    STATE(234), 1,
      sym__shift_expression,
    STATE(235), 1,
      sym__wrapped_shift_expression,
    STATE(236), 1,
      sym__additive_expression,
    STATE(237), 1,
      sym__wrapped_additive_expression,
    STATE(239), 1,
      sym__multiplicative_expression,
    STATE(366), 1,
      sym__wrapped_assignment_expression,
    STATE(427), 1,
      sym_operands,
    STATE(435), 1,
      sym__call_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(97), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(103), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(370), 2,
      sym__operand,
      sym_string,
    ACTIONS(91), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(101), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(240), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [947] = 34,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      sym_relocation_type,
    ACTIONS(71), 1,
      aux_sym_decimal_token1,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    STATE(113), 1,
      sym__wrapped_additive_expression,
    STATE(118), 1,
      sym__assignment_expression,
    STATE(119), 1,
      sym__logical_or_expression,
    STATE(120), 1,
      sym__wrapped_logical_or_expression,
    STATE(121), 1,
      sym__logical_and_expression,
    STATE(122), 1,
      sym__wrapped_logical_and_expression,
    STATE(123), 1,
      sym__bitwise_or_expression,
    STATE(124), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(125), 1,
      sym__bitwise_xor_expression,
    STATE(126), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(127), 1,
      sym__bitwise_and_expression,
    STATE(128), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(129), 1,
      sym__equality_expression,
    STATE(130), 1,
      sym__wrapped_equality_expression,
    STATE(131), 1,
      sym__relational_expression,
    STATE(132), 1,
      sym__wrapped_relational_expression,
    STATE(134), 1,
      sym__wrapped_shift_expression,
    STATE(135), 1,
      sym__additive_expression,
    STATE(136), 1,
      sym__multiplicative_expression,
    STATE(155), 1,
      sym__shift_expression,
    STATE(334), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(65), 3,
      sym_unary_minus_operator,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(115), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(117), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(69), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(137), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1074] = 20,
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
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 1,
      sym_line_comment,
    STATE(390), 1,
      sym_numeric_mnemonic,
    STATE(392), 1,
      sym_control_mnemonic,
    STATE(423), 1,
      sym__string_directive,
    STATE(424), 1,
      sym__control_directive,
    STATE(432), 1,
      sym__macro_directive,
    STATE(436), 1,
      sym__numeric_directive,
    STATE(509), 1,
      sym_string_mnemonic,
    STATE(433), 2,
      sym_directive,
      sym_instruction,
    ACTIONS(121), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
    STATE(12), 3,
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
  [1172] = 38,
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
    STATE(362), 1,
      sym__wrapped_assignment_expression,
    STATE(405), 1,
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
    STATE(361), 4,
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
  [1306] = 20,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 1,
      sym_line_comment,
    ACTIONS(133), 1,
      sym_macro_mnemonic,
    ACTIONS(142), 1,
      aux_sym_control_mnemonic_token1,
    ACTIONS(145), 1,
      sym_opcode,
    STATE(390), 1,
      sym_numeric_mnemonic,
    STATE(392), 1,
      sym_control_mnemonic,
    STATE(423), 1,
      sym__string_directive,
    STATE(424), 1,
      sym__control_directive,
    STATE(432), 1,
      sym__macro_directive,
    STATE(436), 1,
      sym__numeric_directive,
    STATE(509), 1,
      sym_string_mnemonic,
    STATE(444), 2,
      sym_directive,
      sym_instruction,
    ACTIONS(127), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
    STATE(12), 3,
      sym__statement,
      sym__label,
      aux_sym_program_repeat1,
    ACTIONS(148), 4,
      sym_local_label,
      sym_global_label,
      sym_global_numeric_label,
      sym_local_numeric_label,
    ACTIONS(139), 5,
      anon_sym_DOTasciz,
      anon_sym_DOTascii,
      anon_sym_DOTasciiz,
      anon_sym_DOTstring,
      anon_sym_DOTstringz,
    ACTIONS(136), 26,
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
  [1404] = 36,
    ACTIONS(95), 1,
      sym_unary_minus_operator,
    ACTIONS(99), 1,
      sym_relocation_type,
    ACTIONS(105), 1,
      aux_sym_decimal_token1,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(113), 1,
      aux_sym_symbol_token1,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(200), 1,
      sym__logical_or_expression,
    STATE(201), 1,
      sym__wrapped_logical_or_expression,
    STATE(203), 1,
      sym__logical_and_expression,
    STATE(204), 1,
      sym__wrapped_logical_and_expression,
    STATE(205), 1,
      sym__bitwise_or_expression,
    STATE(206), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(207), 1,
      sym__bitwise_xor_expression,
    STATE(208), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(209), 1,
      sym__bitwise_and_expression,
    STATE(210), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(220), 1,
      sym__assignment_expression,
    STATE(230), 1,
      sym__equality_expression,
    STATE(231), 1,
      sym__wrapped_equality_expression,
    STATE(232), 1,
      sym__relational_expression,
    STATE(233), 1,
      sym__wrapped_relational_expression,
    STATE(234), 1,
      sym__shift_expression,
    STATE(235), 1,
      sym__wrapped_shift_expression,
    STATE(236), 1,
      sym__additive_expression,
    STATE(237), 1,
      sym__wrapped_additive_expression,
    STATE(239), 1,
      sym__multiplicative_expression,
    STATE(366), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(97), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(103), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(384), 2,
      sym__operand,
      sym_string,
    ACTIONS(151), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(101), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(240), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1533] = 36,
    ACTIONS(95), 1,
      sym_unary_minus_operator,
    ACTIONS(99), 1,
      sym_relocation_type,
    ACTIONS(105), 1,
      aux_sym_decimal_token1,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(113), 1,
      aux_sym_symbol_token1,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(200), 1,
      sym__logical_or_expression,
    STATE(201), 1,
      sym__wrapped_logical_or_expression,
    STATE(203), 1,
      sym__logical_and_expression,
    STATE(204), 1,
      sym__wrapped_logical_and_expression,
    STATE(205), 1,
      sym__bitwise_or_expression,
    STATE(206), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(207), 1,
      sym__bitwise_xor_expression,
    STATE(208), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(209), 1,
      sym__bitwise_and_expression,
    STATE(210), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(220), 1,
      sym__assignment_expression,
    STATE(230), 1,
      sym__equality_expression,
    STATE(231), 1,
      sym__wrapped_equality_expression,
    STATE(232), 1,
      sym__relational_expression,
    STATE(233), 1,
      sym__wrapped_relational_expression,
    STATE(234), 1,
      sym__shift_expression,
    STATE(235), 1,
      sym__wrapped_shift_expression,
    STATE(236), 1,
      sym__additive_expression,
    STATE(237), 1,
      sym__wrapped_additive_expression,
    STATE(239), 1,
      sym__multiplicative_expression,
    STATE(366), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(97), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(103), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(384), 2,
      sym__operand,
      sym_string,
    ACTIONS(155), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(101), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(240), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1662] = 37,
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
    STATE(362), 1,
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
    STATE(371), 4,
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
  [1793] = 37,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(171), 1,
      aux_sym_decimal_token1,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(179), 1,
      aux_sym_symbol_token1,
    STATE(256), 1,
      sym__assignment_expression,
    STATE(257), 1,
      sym__multiplicative_expression,
    STATE(266), 1,
      sym__logical_or_expression,
    STATE(267), 1,
      sym__wrapped_logical_or_expression,
    STATE(268), 1,
      sym__logical_and_expression,
    STATE(269), 1,
      sym__wrapped_logical_and_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(272), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(273), 1,
      sym__bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(275), 1,
      sym__wrapped_additive_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(277), 1,
      sym__equality_expression,
    STATE(278), 1,
      sym__wrapped_equality_expression,
    STATE(279), 1,
      sym__relational_expression,
    STATE(282), 1,
      sym__wrapped_relational_expression,
    STATE(283), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__wrapped_shift_expression,
    STATE(292), 1,
      sym__additive_expression,
    STATE(303), 1,
      sym__bitwise_and_expression,
    STATE(388), 1,
      sym__wrapped_assignment_expression,
    STATE(502), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(169), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(402), 2,
      sym__operand,
      sym_string,
    ACTIONS(167), 5,
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
  [1922] = 39,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(171), 1,
      aux_sym_decimal_token1,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(179), 1,
      aux_sym_symbol_token1,
    STATE(256), 1,
      sym__assignment_expression,
    STATE(257), 1,
      sym__multiplicative_expression,
    STATE(266), 1,
      sym__logical_or_expression,
    STATE(267), 1,
      sym__wrapped_logical_or_expression,
    STATE(268), 1,
      sym__logical_and_expression,
    STATE(269), 1,
      sym__wrapped_logical_and_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(271), 1,
      sym_symbol,
    STATE(272), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(273), 1,
      sym__bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(275), 1,
      sym__wrapped_additive_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(277), 1,
      sym__equality_expression,
    STATE(278), 1,
      sym__wrapped_equality_expression,
    STATE(279), 1,
      sym__relational_expression,
    STATE(282), 1,
      sym__wrapped_relational_expression,
    STATE(283), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__wrapped_shift_expression,
    STATE(292), 1,
      sym__additive_expression,
    STATE(303), 1,
      sym__bitwise_and_expression,
    STATE(387), 1,
      sym__wrapped_assignment_expression,
    STATE(510), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(169), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(181), 2,
      sym_register,
      sym_macro_variable,
    STATE(402), 2,
      sym__operand,
      sym_string,
    ACTIONS(167), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(262), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2055] = 38,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(171), 1,
      aux_sym_decimal_token1,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(179), 1,
      aux_sym_symbol_token1,
    STATE(256), 1,
      sym__assignment_expression,
    STATE(257), 1,
      sym__multiplicative_expression,
    STATE(266), 1,
      sym__logical_or_expression,
    STATE(267), 1,
      sym__wrapped_logical_or_expression,
    STATE(268), 1,
      sym__logical_and_expression,
    STATE(269), 1,
      sym__wrapped_logical_and_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(272), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(273), 1,
      sym__bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(275), 1,
      sym__wrapped_additive_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(277), 1,
      sym__equality_expression,
    STATE(278), 1,
      sym__wrapped_equality_expression,
    STATE(279), 1,
      sym__relational_expression,
    STATE(282), 1,
      sym__wrapped_relational_expression,
    STATE(283), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__wrapped_shift_expression,
    STATE(292), 1,
      sym__additive_expression,
    STATE(298), 1,
      sym_symbol,
    STATE(303), 1,
      sym__bitwise_and_expression,
    STATE(397), 1,
      sym__wrapped_assignment_expression,
    STATE(491), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(169), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(183), 2,
      sym_register,
      sym_macro_variable,
    STATE(402), 2,
      sym__operand,
      sym_string,
    ACTIONS(167), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(262), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2185] = 38,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(171), 1,
      aux_sym_decimal_token1,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(179), 1,
      aux_sym_symbol_token1,
    STATE(256), 1,
      sym__assignment_expression,
    STATE(257), 1,
      sym__multiplicative_expression,
    STATE(266), 1,
      sym__logical_or_expression,
    STATE(267), 1,
      sym__wrapped_logical_or_expression,
    STATE(268), 1,
      sym__logical_and_expression,
    STATE(269), 1,
      sym__wrapped_logical_and_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(272), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(273), 1,
      sym__bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(275), 1,
      sym__wrapped_additive_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(277), 1,
      sym__equality_expression,
    STATE(278), 1,
      sym__wrapped_equality_expression,
    STATE(279), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym_symbol,
    STATE(282), 1,
      sym__wrapped_relational_expression,
    STATE(283), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__wrapped_shift_expression,
    STATE(292), 1,
      sym__additive_expression,
    STATE(303), 1,
      sym__bitwise_and_expression,
    STATE(388), 1,
      sym__wrapped_assignment_expression,
    STATE(482), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(169), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(185), 2,
      sym_register,
      sym_macro_variable,
    STATE(402), 2,
      sym__operand,
      sym_string,
    ACTIONS(167), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(262), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2315] = 38,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(171), 1,
      aux_sym_decimal_token1,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(179), 1,
      aux_sym_symbol_token1,
    STATE(256), 1,
      sym__assignment_expression,
    STATE(257), 1,
      sym__multiplicative_expression,
    STATE(260), 1,
      sym_symbol,
    STATE(266), 1,
      sym__logical_or_expression,
    STATE(267), 1,
      sym__wrapped_logical_or_expression,
    STATE(268), 1,
      sym__logical_and_expression,
    STATE(269), 1,
      sym__wrapped_logical_and_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(272), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(273), 1,
      sym__bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(275), 1,
      sym__wrapped_additive_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(277), 1,
      sym__equality_expression,
    STATE(278), 1,
      sym__wrapped_equality_expression,
    STATE(279), 1,
      sym__relational_expression,
    STATE(282), 1,
      sym__wrapped_relational_expression,
    STATE(283), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__wrapped_shift_expression,
    STATE(292), 1,
      sym__additive_expression,
    STATE(303), 1,
      sym__bitwise_and_expression,
    STATE(388), 1,
      sym__wrapped_assignment_expression,
    STATE(481), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(169), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(187), 2,
      sym_register,
      sym_macro_variable,
    STATE(402), 2,
      sym__operand,
      sym_string,
    ACTIONS(167), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(262), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2445] = 38,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(171), 1,
      aux_sym_decimal_token1,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(179), 1,
      aux_sym_symbol_token1,
    STATE(256), 1,
      sym__assignment_expression,
    STATE(257), 1,
      sym__multiplicative_expression,
    STATE(266), 1,
      sym__logical_or_expression,
    STATE(267), 1,
      sym__wrapped_logical_or_expression,
    STATE(268), 1,
      sym__logical_and_expression,
    STATE(269), 1,
      sym__wrapped_logical_and_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(272), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(273), 1,
      sym__bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(275), 1,
      sym__wrapped_additive_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(277), 1,
      sym__equality_expression,
    STATE(278), 1,
      sym__wrapped_equality_expression,
    STATE(279), 1,
      sym__relational_expression,
    STATE(282), 1,
      sym__wrapped_relational_expression,
    STATE(283), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__wrapped_shift_expression,
    STATE(292), 1,
      sym__additive_expression,
    STATE(294), 1,
      sym_symbol,
    STATE(303), 1,
      sym__bitwise_and_expression,
    STATE(393), 1,
      sym__wrapped_assignment_expression,
    STATE(497), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(169), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(189), 2,
      sym_register,
      sym_macro_variable,
    STATE(402), 2,
      sym__operand,
      sym_string,
    ACTIONS(167), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(262), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2575] = 36,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(171), 1,
      aux_sym_decimal_token1,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(179), 1,
      aux_sym_symbol_token1,
    STATE(256), 1,
      sym__assignment_expression,
    STATE(257), 1,
      sym__multiplicative_expression,
    STATE(266), 1,
      sym__logical_or_expression,
    STATE(267), 1,
      sym__wrapped_logical_or_expression,
    STATE(268), 1,
      sym__logical_and_expression,
    STATE(269), 1,
      sym__wrapped_logical_and_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(272), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(273), 1,
      sym__bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(275), 1,
      sym__wrapped_additive_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(277), 1,
      sym__equality_expression,
    STATE(278), 1,
      sym__wrapped_equality_expression,
    STATE(279), 1,
      sym__relational_expression,
    STATE(282), 1,
      sym__wrapped_relational_expression,
    STATE(283), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__wrapped_shift_expression,
    STATE(292), 1,
      sym__additive_expression,
    STATE(303), 1,
      sym__bitwise_and_expression,
    STATE(388), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(169), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(450), 2,
      sym__operand,
      sym_string,
    ACTIONS(167), 5,
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
  [2701] = 36,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(171), 1,
      aux_sym_decimal_token1,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(179), 1,
      aux_sym_symbol_token1,
    STATE(256), 1,
      sym__assignment_expression,
    STATE(257), 1,
      sym__multiplicative_expression,
    STATE(266), 1,
      sym__logical_or_expression,
    STATE(267), 1,
      sym__wrapped_logical_or_expression,
    STATE(268), 1,
      sym__logical_and_expression,
    STATE(269), 1,
      sym__wrapped_logical_and_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(272), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(273), 1,
      sym__bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(275), 1,
      sym__wrapped_additive_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(277), 1,
      sym__equality_expression,
    STATE(278), 1,
      sym__wrapped_equality_expression,
    STATE(279), 1,
      sym__relational_expression,
    STATE(282), 1,
      sym__wrapped_relational_expression,
    STATE(283), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__wrapped_shift_expression,
    STATE(292), 1,
      sym__additive_expression,
    STATE(303), 1,
      sym__bitwise_and_expression,
    STATE(388), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(169), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(450), 2,
      sym__operand,
      sym_string,
    ACTIONS(167), 5,
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
  [2827] = 38,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(171), 1,
      aux_sym_decimal_token1,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(179), 1,
      aux_sym_symbol_token1,
    STATE(256), 1,
      sym__assignment_expression,
    STATE(257), 1,
      sym__multiplicative_expression,
    STATE(266), 1,
      sym__logical_or_expression,
    STATE(267), 1,
      sym__wrapped_logical_or_expression,
    STATE(268), 1,
      sym__logical_and_expression,
    STATE(269), 1,
      sym__wrapped_logical_and_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(272), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(273), 1,
      sym__bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(275), 1,
      sym__wrapped_additive_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(277), 1,
      sym__equality_expression,
    STATE(278), 1,
      sym__wrapped_equality_expression,
    STATE(279), 1,
      sym__relational_expression,
    STATE(282), 1,
      sym__wrapped_relational_expression,
    STATE(283), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__wrapped_shift_expression,
    STATE(292), 1,
      sym__additive_expression,
    STATE(297), 1,
      sym_symbol,
    STATE(303), 1,
      sym__bitwise_and_expression,
    STATE(388), 1,
      sym__wrapped_assignment_expression,
    STATE(486), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(169), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(191), 2,
      sym_register,
      sym_macro_variable,
    STATE(402), 2,
      sym__operand,
      sym_string,
    ACTIONS(167), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(262), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2957] = 38,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(171), 1,
      aux_sym_decimal_token1,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(179), 1,
      aux_sym_symbol_token1,
    STATE(256), 1,
      sym__assignment_expression,
    STATE(257), 1,
      sym__multiplicative_expression,
    STATE(266), 1,
      sym__logical_or_expression,
    STATE(267), 1,
      sym__wrapped_logical_or_expression,
    STATE(268), 1,
      sym__logical_and_expression,
    STATE(269), 1,
      sym__wrapped_logical_and_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(272), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(273), 1,
      sym__bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(275), 1,
      sym__wrapped_additive_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(277), 1,
      sym__equality_expression,
    STATE(278), 1,
      sym__wrapped_equality_expression,
    STATE(279), 1,
      sym__relational_expression,
    STATE(282), 1,
      sym__wrapped_relational_expression,
    STATE(283), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__wrapped_shift_expression,
    STATE(292), 1,
      sym__additive_expression,
    STATE(300), 1,
      sym_symbol,
    STATE(303), 1,
      sym__bitwise_and_expression,
    STATE(398), 1,
      sym__wrapped_assignment_expression,
    STATE(496), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(169), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(193), 2,
      sym_register,
      sym_macro_variable,
    STATE(402), 2,
      sym__operand,
      sym_string,
    ACTIONS(167), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(262), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3087] = 38,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(171), 1,
      aux_sym_decimal_token1,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(179), 1,
      aux_sym_symbol_token1,
    STATE(248), 1,
      sym_symbol,
    STATE(256), 1,
      sym__assignment_expression,
    STATE(257), 1,
      sym__multiplicative_expression,
    STATE(266), 1,
      sym__logical_or_expression,
    STATE(267), 1,
      sym__wrapped_logical_or_expression,
    STATE(268), 1,
      sym__logical_and_expression,
    STATE(269), 1,
      sym__wrapped_logical_and_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(272), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(273), 1,
      sym__bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(275), 1,
      sym__wrapped_additive_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(277), 1,
      sym__equality_expression,
    STATE(278), 1,
      sym__wrapped_equality_expression,
    STATE(279), 1,
      sym__relational_expression,
    STATE(282), 1,
      sym__wrapped_relational_expression,
    STATE(283), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__wrapped_shift_expression,
    STATE(292), 1,
      sym__additive_expression,
    STATE(303), 1,
      sym__bitwise_and_expression,
    STATE(388), 1,
      sym__wrapped_assignment_expression,
    STATE(485), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(169), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(195), 2,
      sym_register,
      sym_macro_variable,
    STATE(402), 2,
      sym__operand,
      sym_string,
    ACTIONS(167), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(262), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3217] = 38,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(171), 1,
      aux_sym_decimal_token1,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(179), 1,
      aux_sym_symbol_token1,
    STATE(256), 1,
      sym__assignment_expression,
    STATE(257), 1,
      sym__multiplicative_expression,
    STATE(266), 1,
      sym__logical_or_expression,
    STATE(267), 1,
      sym__wrapped_logical_or_expression,
    STATE(268), 1,
      sym__logical_and_expression,
    STATE(269), 1,
      sym__wrapped_logical_and_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(272), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(273), 1,
      sym__bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(275), 1,
      sym__wrapped_additive_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(277), 1,
      sym__equality_expression,
    STATE(278), 1,
      sym__wrapped_equality_expression,
    STATE(279), 1,
      sym__relational_expression,
    STATE(282), 1,
      sym__wrapped_relational_expression,
    STATE(283), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__wrapped_shift_expression,
    STATE(292), 1,
      sym__additive_expression,
    STATE(296), 1,
      sym_symbol,
    STATE(303), 1,
      sym__bitwise_and_expression,
    STATE(396), 1,
      sym__wrapped_assignment_expression,
    STATE(472), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(169), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(197), 2,
      sym_register,
      sym_macro_variable,
    STATE(402), 2,
      sym__operand,
      sym_string,
    ACTIONS(167), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(262), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3347] = 38,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(171), 1,
      aux_sym_decimal_token1,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(179), 1,
      aux_sym_symbol_token1,
    STATE(256), 1,
      sym__assignment_expression,
    STATE(257), 1,
      sym__multiplicative_expression,
    STATE(266), 1,
      sym__logical_or_expression,
    STATE(267), 1,
      sym__wrapped_logical_or_expression,
    STATE(268), 1,
      sym__logical_and_expression,
    STATE(269), 1,
      sym__wrapped_logical_and_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(272), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(273), 1,
      sym__bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(275), 1,
      sym__wrapped_additive_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(277), 1,
      sym__equality_expression,
    STATE(278), 1,
      sym__wrapped_equality_expression,
    STATE(279), 1,
      sym__relational_expression,
    STATE(282), 1,
      sym__wrapped_relational_expression,
    STATE(283), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__wrapped_shift_expression,
    STATE(292), 1,
      sym__additive_expression,
    STATE(299), 1,
      sym_symbol,
    STATE(303), 1,
      sym__bitwise_and_expression,
    STATE(388), 1,
      sym__wrapped_assignment_expression,
    STATE(506), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(169), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(199), 2,
      sym_register,
      sym_macro_variable,
    STATE(402), 2,
      sym__operand,
      sym_string,
    ACTIONS(167), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(262), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3477] = 38,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(171), 1,
      aux_sym_decimal_token1,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(179), 1,
      aux_sym_symbol_token1,
    STATE(256), 1,
      sym__assignment_expression,
    STATE(257), 1,
      sym__multiplicative_expression,
    STATE(266), 1,
      sym__logical_or_expression,
    STATE(267), 1,
      sym__wrapped_logical_or_expression,
    STATE(268), 1,
      sym__logical_and_expression,
    STATE(269), 1,
      sym__wrapped_logical_and_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(271), 1,
      sym_symbol,
    STATE(272), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(273), 1,
      sym__bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(275), 1,
      sym__wrapped_additive_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(277), 1,
      sym__equality_expression,
    STATE(278), 1,
      sym__wrapped_equality_expression,
    STATE(279), 1,
      sym__relational_expression,
    STATE(282), 1,
      sym__wrapped_relational_expression,
    STATE(283), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__wrapped_shift_expression,
    STATE(292), 1,
      sym__additive_expression,
    STATE(303), 1,
      sym__bitwise_and_expression,
    STATE(387), 1,
      sym__wrapped_assignment_expression,
    STATE(475), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(169), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(181), 2,
      sym_register,
      sym_macro_variable,
    STATE(402), 2,
      sym__operand,
      sym_string,
    ACTIONS(167), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(262), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3607] = 38,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(171), 1,
      aux_sym_decimal_token1,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(179), 1,
      aux_sym_symbol_token1,
    STATE(256), 1,
      sym__assignment_expression,
    STATE(257), 1,
      sym__multiplicative_expression,
    STATE(266), 1,
      sym__logical_or_expression,
    STATE(267), 1,
      sym__wrapped_logical_or_expression,
    STATE(268), 1,
      sym__logical_and_expression,
    STATE(269), 1,
      sym__wrapped_logical_and_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(272), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(273), 1,
      sym__bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(275), 1,
      sym__wrapped_additive_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(277), 1,
      sym__equality_expression,
    STATE(278), 1,
      sym__wrapped_equality_expression,
    STATE(279), 1,
      sym__relational_expression,
    STATE(282), 1,
      sym__wrapped_relational_expression,
    STATE(283), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__wrapped_shift_expression,
    STATE(292), 1,
      sym__additive_expression,
    STATE(301), 1,
      sym_symbol,
    STATE(303), 1,
      sym__bitwise_and_expression,
    STATE(388), 1,
      sym__wrapped_assignment_expression,
    STATE(478), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(169), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(201), 2,
      sym_register,
      sym_macro_variable,
    STATE(402), 2,
      sym__operand,
      sym_string,
    ACTIONS(167), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(262), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3737] = 38,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(171), 1,
      aux_sym_decimal_token1,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(179), 1,
      aux_sym_symbol_token1,
    STATE(256), 1,
      sym__assignment_expression,
    STATE(257), 1,
      sym__multiplicative_expression,
    STATE(266), 1,
      sym__logical_or_expression,
    STATE(267), 1,
      sym__wrapped_logical_or_expression,
    STATE(268), 1,
      sym__logical_and_expression,
    STATE(269), 1,
      sym__wrapped_logical_and_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(272), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(273), 1,
      sym__bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(275), 1,
      sym__wrapped_additive_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(277), 1,
      sym__equality_expression,
    STATE(278), 1,
      sym__wrapped_equality_expression,
    STATE(279), 1,
      sym__relational_expression,
    STATE(282), 1,
      sym__wrapped_relational_expression,
    STATE(283), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__wrapped_shift_expression,
    STATE(292), 1,
      sym__additive_expression,
    STATE(302), 1,
      sym_symbol,
    STATE(303), 1,
      sym__bitwise_and_expression,
    STATE(397), 1,
      sym__wrapped_assignment_expression,
    STATE(480), 1,
      sym_operands,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(169), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(203), 2,
      sym_register,
      sym_macro_variable,
    STATE(402), 2,
      sym__operand,
      sym_string,
    ACTIONS(167), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(262), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3867] = 35,
    ACTIONS(95), 1,
      sym_unary_minus_operator,
    ACTIONS(99), 1,
      sym_relocation_type,
    ACTIONS(105), 1,
      aux_sym_decimal_token1,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(113), 1,
      aux_sym_symbol_token1,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(200), 1,
      sym__logical_or_expression,
    STATE(201), 1,
      sym__wrapped_logical_or_expression,
    STATE(203), 1,
      sym__logical_and_expression,
    STATE(204), 1,
      sym__wrapped_logical_and_expression,
    STATE(205), 1,
      sym__bitwise_or_expression,
    STATE(206), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(207), 1,
      sym__bitwise_xor_expression,
    STATE(208), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(209), 1,
      sym__bitwise_and_expression,
    STATE(210), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(220), 1,
      sym__assignment_expression,
    STATE(230), 1,
      sym__equality_expression,
    STATE(231), 1,
      sym__wrapped_equality_expression,
    STATE(232), 1,
      sym__relational_expression,
    STATE(233), 1,
      sym__wrapped_relational_expression,
    STATE(234), 1,
      sym__shift_expression,
    STATE(235), 1,
      sym__wrapped_shift_expression,
    STATE(236), 1,
      sym__additive_expression,
    STATE(237), 1,
      sym__wrapped_additive_expression,
    STATE(239), 1,
      sym__multiplicative_expression,
    STATE(366), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(97), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(103), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(384), 2,
      sym__operand,
      sym_string,
    ACTIONS(101), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(240), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3990] = 37,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      sym_unary_minus_operator,
    ACTIONS(211), 1,
      sym_relocation_type,
    ACTIONS(217), 1,
      aux_sym_decimal_token1,
    ACTIONS(219), 1,
      anon_sym_SQUOTE,
    ACTIONS(221), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_macro_variable,
    ACTIONS(225), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(227), 1,
      aux_sym_symbol_token1,
    STATE(247), 1,
      sym_address,
    STATE(305), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(322), 1,
      sym__bitwise_and_expression,
    STATE(323), 1,
      sym__equality_expression,
    STATE(324), 1,
      sym__wrapped_equality_expression,
    STATE(325), 1,
      sym__relational_expression,
    STATE(326), 1,
      sym__wrapped_relational_expression,
    STATE(327), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__wrapped_additive_expression,
    STATE(331), 1,
      sym__multiplicative_expression,
    STATE(351), 1,
      sym__additive_expression,
    STATE(455), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(209), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(215), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(391), 2,
      sym__string_operand,
      sym_string,
    ACTIONS(213), 4,
      sym_octal,
      sym_float,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(332), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
  [4117] = 35,
    ACTIONS(65), 1,
      sym_unary_minus_operator,
    ACTIONS(67), 1,
      sym_relocation_type,
    ACTIONS(71), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(229), 1,
      sym_line_comment,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    STATE(113), 1,
      sym__wrapped_additive_expression,
    STATE(118), 1,
      sym__assignment_expression,
    STATE(119), 1,
      sym__logical_or_expression,
    STATE(120), 1,
      sym__wrapped_logical_or_expression,
    STATE(121), 1,
      sym__logical_and_expression,
    STATE(122), 1,
      sym__wrapped_logical_and_expression,
    STATE(123), 1,
      sym__bitwise_or_expression,
    STATE(124), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(125), 1,
      sym__bitwise_xor_expression,
    STATE(126), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(127), 1,
      sym__bitwise_and_expression,
    STATE(128), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(129), 1,
      sym__equality_expression,
    STATE(130), 1,
      sym__wrapped_equality_expression,
    STATE(131), 1,
      sym__relational_expression,
    STATE(132), 1,
      sym__wrapped_relational_expression,
    STATE(134), 1,
      sym__wrapped_shift_expression,
    STATE(135), 1,
      sym__additive_expression,
    STATE(136), 1,
      sym__multiplicative_expression,
    STATE(155), 1,
      sym__shift_expression,
    STATE(334), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(85), 2,
      sym__data_separator,
      anon_sym_COMMA,
    ACTIONS(233), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(235), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(69), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(137), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4240] = 35,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(171), 1,
      aux_sym_decimal_token1,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(179), 1,
      aux_sym_symbol_token1,
    STATE(256), 1,
      sym__assignment_expression,
    STATE(257), 1,
      sym__multiplicative_expression,
    STATE(266), 1,
      sym__logical_or_expression,
    STATE(267), 1,
      sym__wrapped_logical_or_expression,
    STATE(268), 1,
      sym__logical_and_expression,
    STATE(269), 1,
      sym__wrapped_logical_and_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(272), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(273), 1,
      sym__bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(275), 1,
      sym__wrapped_additive_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(277), 1,
      sym__equality_expression,
    STATE(278), 1,
      sym__wrapped_equality_expression,
    STATE(279), 1,
      sym__relational_expression,
    STATE(282), 1,
      sym__wrapped_relational_expression,
    STATE(283), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__wrapped_shift_expression,
    STATE(292), 1,
      sym__additive_expression,
    STATE(303), 1,
      sym__bitwise_and_expression,
    STATE(388), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(169), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(450), 2,
      sym__operand,
      sym_string,
    ACTIONS(167), 5,
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
  [4363] = 34,
    ACTIONS(65), 1,
      sym_unary_minus_operator,
    ACTIONS(67), 1,
      sym_relocation_type,
    ACTIONS(71), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    STATE(305), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(322), 1,
      sym__bitwise_and_expression,
    STATE(323), 1,
      sym__equality_expression,
    STATE(324), 1,
      sym__wrapped_equality_expression,
    STATE(325), 1,
      sym__relational_expression,
    STATE(326), 1,
      sym__wrapped_relational_expression,
    STATE(327), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__wrapped_additive_expression,
    STATE(331), 1,
      sym__multiplicative_expression,
    STATE(332), 1,
      sym__wrapped_multiplicative_expression,
    STATE(351), 1,
      sym__additive_expression,
    STATE(470), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(233), 2,
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
    STATE(151), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4481] = 33,
    ACTIONS(207), 1,
      sym_unary_minus_operator,
    ACTIONS(211), 1,
      sym_relocation_type,
    ACTIONS(217), 1,
      aux_sym_decimal_token1,
    ACTIONS(219), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(227), 1,
      aux_sym_symbol_token1,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    STATE(305), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(322), 1,
      sym__bitwise_and_expression,
    STATE(323), 1,
      sym__equality_expression,
    STATE(324), 1,
      sym__wrapped_equality_expression,
    STATE(325), 1,
      sym__relational_expression,
    STATE(326), 1,
      sym__wrapped_relational_expression,
    STATE(327), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__wrapped_additive_expression,
    STATE(331), 1,
      sym__multiplicative_expression,
    STATE(351), 1,
      sym__additive_expression,
    STATE(449), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(209), 2,
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
    STATE(332), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4597] = 33,
    ACTIONS(65), 1,
      sym_unary_minus_operator,
    ACTIONS(67), 1,
      sym_relocation_type,
    ACTIONS(71), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    STATE(113), 1,
      sym__wrapped_additive_expression,
    STATE(118), 1,
      sym__assignment_expression,
    STATE(119), 1,
      sym__logical_or_expression,
    STATE(120), 1,
      sym__wrapped_logical_or_expression,
    STATE(121), 1,
      sym__logical_and_expression,
    STATE(122), 1,
      sym__wrapped_logical_and_expression,
    STATE(123), 1,
      sym__bitwise_or_expression,
    STATE(124), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(125), 1,
      sym__bitwise_xor_expression,
    STATE(126), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(127), 1,
      sym__bitwise_and_expression,
    STATE(128), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(129), 1,
      sym__equality_expression,
    STATE(130), 1,
      sym__wrapped_equality_expression,
    STATE(131), 1,
      sym__relational_expression,
    STATE(132), 1,
      sym__wrapped_relational_expression,
    STATE(134), 1,
      sym__wrapped_shift_expression,
    STATE(135), 1,
      sym__additive_expression,
    STATE(136), 1,
      sym__multiplicative_expression,
    STATE(155), 1,
      sym__shift_expression,
    STATE(309), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(233), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(235), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(69), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(137), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4713] = 33,
    ACTIONS(95), 1,
      sym_unary_minus_operator,
    ACTIONS(99), 1,
      sym_relocation_type,
    ACTIONS(105), 1,
      aux_sym_decimal_token1,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(113), 1,
      aux_sym_symbol_token1,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(207), 1,
      sym__bitwise_xor_expression,
    STATE(209), 1,
      sym__bitwise_and_expression,
    STATE(210), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(217), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(230), 1,
      sym__equality_expression,
    STATE(231), 1,
      sym__wrapped_equality_expression,
    STATE(232), 1,
      sym__relational_expression,
    STATE(233), 1,
      sym__wrapped_relational_expression,
    STATE(234), 1,
      sym__shift_expression,
    STATE(235), 1,
      sym__wrapped_shift_expression,
    STATE(236), 1,
      sym__additive_expression,
    STATE(237), 1,
      sym__wrapped_additive_expression,
    STATE(239), 1,
      sym__multiplicative_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(468), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(97), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(103), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(101), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(240), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4829] = 33,
    ACTIONS(95), 1,
      sym_unary_minus_operator,
    ACTIONS(99), 1,
      sym_relocation_type,
    ACTIONS(105), 1,
      aux_sym_decimal_token1,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(113), 1,
      aux_sym_symbol_token1,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(209), 1,
      sym__bitwise_and_expression,
    STATE(218), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(230), 1,
      sym__equality_expression,
    STATE(231), 1,
      sym__wrapped_equality_expression,
    STATE(232), 1,
      sym__relational_expression,
    STATE(233), 1,
      sym__wrapped_relational_expression,
    STATE(234), 1,
      sym__shift_expression,
    STATE(235), 1,
      sym__wrapped_shift_expression,
    STATE(236), 1,
      sym__additive_expression,
    STATE(237), 1,
      sym__wrapped_additive_expression,
    STATE(239), 1,
      sym__multiplicative_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(468), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(97), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(103), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(101), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(240), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4945] = 33,
    ACTIONS(95), 1,
      sym_unary_minus_operator,
    ACTIONS(99), 1,
      sym_relocation_type,
    ACTIONS(105), 1,
      aux_sym_decimal_token1,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(113), 1,
      aux_sym_symbol_token1,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(219), 1,
      sym__wrapped_equality_expression,
    STATE(230), 1,
      sym__equality_expression,
    STATE(232), 1,
      sym__relational_expression,
    STATE(233), 1,
      sym__wrapped_relational_expression,
    STATE(234), 1,
      sym__shift_expression,
    STATE(235), 1,
      sym__wrapped_shift_expression,
    STATE(236), 1,
      sym__additive_expression,
    STATE(237), 1,
      sym__wrapped_additive_expression,
    STATE(239), 1,
      sym__multiplicative_expression,
    STATE(305), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(322), 1,
      sym__bitwise_and_expression,
    STATE(468), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(97), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(103), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(101), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(240), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5061] = 33,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(171), 1,
      aux_sym_decimal_token1,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(179), 1,
      aux_sym_symbol_token1,
    STATE(257), 1,
      sym__multiplicative_expression,
    STATE(266), 1,
      sym__logical_or_expression,
    STATE(268), 1,
      sym__logical_and_expression,
    STATE(269), 1,
      sym__wrapped_logical_and_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(272), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(273), 1,
      sym__bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(275), 1,
      sym__wrapped_additive_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(277), 1,
      sym__equality_expression,
    STATE(278), 1,
      sym__wrapped_equality_expression,
    STATE(279), 1,
      sym__relational_expression,
    STATE(282), 1,
      sym__wrapped_relational_expression,
    STATE(283), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__wrapped_shift_expression,
    STATE(292), 1,
      sym__additive_expression,
    STATE(303), 1,
      sym__bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(383), 1,
      sym__wrapped_logical_or_expression,
    STATE(469), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(169), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(167), 5,
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
  [5177] = 33,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(171), 1,
      aux_sym_decimal_token1,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(179), 1,
      aux_sym_symbol_token1,
    STATE(257), 1,
      sym__multiplicative_expression,
    STATE(263), 1,
      sym__wrapped_logical_and_expression,
    STATE(268), 1,
      sym__logical_and_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(272), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(273), 1,
      sym__bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(275), 1,
      sym__wrapped_additive_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(277), 1,
      sym__equality_expression,
    STATE(278), 1,
      sym__wrapped_equality_expression,
    STATE(279), 1,
      sym__relational_expression,
    STATE(282), 1,
      sym__wrapped_relational_expression,
    STATE(283), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__wrapped_shift_expression,
    STATE(292), 1,
      sym__additive_expression,
    STATE(303), 1,
      sym__bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(469), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(169), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(167), 5,
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
  [5293] = 33,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(171), 1,
      aux_sym_decimal_token1,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(179), 1,
      aux_sym_symbol_token1,
    STATE(257), 1,
      sym__multiplicative_expression,
    STATE(264), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(273), 1,
      sym__bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(275), 1,
      sym__wrapped_additive_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(277), 1,
      sym__equality_expression,
    STATE(278), 1,
      sym__wrapped_equality_expression,
    STATE(279), 1,
      sym__relational_expression,
    STATE(282), 1,
      sym__wrapped_relational_expression,
    STATE(283), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__wrapped_shift_expression,
    STATE(292), 1,
      sym__additive_expression,
    STATE(303), 1,
      sym__bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(469), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(169), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(167), 5,
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
  [5409] = 33,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(171), 1,
      aux_sym_decimal_token1,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(179), 1,
      aux_sym_symbol_token1,
    STATE(257), 1,
      sym__multiplicative_expression,
    STATE(265), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(273), 1,
      sym__bitwise_xor_expression,
    STATE(275), 1,
      sym__wrapped_additive_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(277), 1,
      sym__equality_expression,
    STATE(278), 1,
      sym__wrapped_equality_expression,
    STATE(279), 1,
      sym__relational_expression,
    STATE(282), 1,
      sym__wrapped_relational_expression,
    STATE(283), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__wrapped_shift_expression,
    STATE(292), 1,
      sym__additive_expression,
    STATE(303), 1,
      sym__bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(469), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(169), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(167), 5,
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
  [5525] = 33,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(171), 1,
      aux_sym_decimal_token1,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(179), 1,
      aux_sym_symbol_token1,
    STATE(257), 1,
      sym__multiplicative_expression,
    STATE(275), 1,
      sym__wrapped_additive_expression,
    STATE(277), 1,
      sym__equality_expression,
    STATE(278), 1,
      sym__wrapped_equality_expression,
    STATE(279), 1,
      sym__relational_expression,
    STATE(280), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(282), 1,
      sym__wrapped_relational_expression,
    STATE(283), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__wrapped_shift_expression,
    STATE(292), 1,
      sym__additive_expression,
    STATE(303), 1,
      sym__bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(469), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(169), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(167), 5,
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
  [5641] = 33,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(171), 1,
      aux_sym_decimal_token1,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(179), 1,
      aux_sym_symbol_token1,
    STATE(257), 1,
      sym__multiplicative_expression,
    STATE(275), 1,
      sym__wrapped_additive_expression,
    STATE(277), 1,
      sym__equality_expression,
    STATE(279), 1,
      sym__relational_expression,
    STATE(282), 1,
      sym__wrapped_relational_expression,
    STATE(283), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__wrapped_shift_expression,
    STATE(286), 1,
      sym__wrapped_equality_expression,
    STATE(292), 1,
      sym__additive_expression,
    STATE(305), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(322), 1,
      sym__bitwise_and_expression,
    STATE(469), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(169), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(167), 5,
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
  [5757] = 33,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(171), 1,
      aux_sym_decimal_token1,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(179), 1,
      aux_sym_symbol_token1,
    STATE(257), 1,
      sym__multiplicative_expression,
    STATE(275), 1,
      sym__wrapped_additive_expression,
    STATE(279), 1,
      sym__relational_expression,
    STATE(283), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__wrapped_shift_expression,
    STATE(287), 1,
      sym__wrapped_relational_expression,
    STATE(292), 1,
      sym__additive_expression,
    STATE(305), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(322), 1,
      sym__bitwise_and_expression,
    STATE(323), 1,
      sym__equality_expression,
    STATE(324), 1,
      sym__wrapped_equality_expression,
    STATE(469), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(169), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(167), 5,
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
  [5873] = 33,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(171), 1,
      aux_sym_decimal_token1,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(179), 1,
      aux_sym_symbol_token1,
    STATE(257), 1,
      sym__multiplicative_expression,
    STATE(275), 1,
      sym__wrapped_additive_expression,
    STATE(283), 1,
      sym__shift_expression,
    STATE(288), 1,
      sym__wrapped_shift_expression,
    STATE(292), 1,
      sym__additive_expression,
    STATE(305), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(322), 1,
      sym__bitwise_and_expression,
    STATE(323), 1,
      sym__equality_expression,
    STATE(324), 1,
      sym__wrapped_equality_expression,
    STATE(325), 1,
      sym__relational_expression,
    STATE(326), 1,
      sym__wrapped_relational_expression,
    STATE(469), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(169), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(167), 5,
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
  [5989] = 33,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(171), 1,
      aux_sym_decimal_token1,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(179), 1,
      aux_sym_symbol_token1,
    STATE(257), 1,
      sym__multiplicative_expression,
    STATE(289), 1,
      sym__wrapped_additive_expression,
    STATE(292), 1,
      sym__additive_expression,
    STATE(305), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(322), 1,
      sym__bitwise_and_expression,
    STATE(323), 1,
      sym__equality_expression,
    STATE(324), 1,
      sym__wrapped_equality_expression,
    STATE(325), 1,
      sym__relational_expression,
    STATE(326), 1,
      sym__wrapped_relational_expression,
    STATE(327), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(469), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(169), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(167), 5,
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
  [6105] = 33,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(171), 1,
      aux_sym_decimal_token1,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(179), 1,
      aux_sym_symbol_token1,
    STATE(257), 1,
      sym__multiplicative_expression,
    STATE(305), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(322), 1,
      sym__bitwise_and_expression,
    STATE(323), 1,
      sym__equality_expression,
    STATE(324), 1,
      sym__wrapped_equality_expression,
    STATE(325), 1,
      sym__relational_expression,
    STATE(326), 1,
      sym__wrapped_relational_expression,
    STATE(327), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__wrapped_additive_expression,
    STATE(351), 1,
      sym__additive_expression,
    STATE(469), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(163), 2,
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
    STATE(293), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6221] = 34,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(171), 1,
      aux_sym_decimal_token1,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(179), 1,
      aux_sym_symbol_token1,
    STATE(305), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(322), 1,
      sym__bitwise_and_expression,
    STATE(323), 1,
      sym__equality_expression,
    STATE(324), 1,
      sym__wrapped_equality_expression,
    STATE(325), 1,
      sym__relational_expression,
    STATE(326), 1,
      sym__wrapped_relational_expression,
    STATE(327), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__wrapped_additive_expression,
    STATE(331), 1,
      sym__multiplicative_expression,
    STATE(332), 1,
      sym__wrapped_multiplicative_expression,
    STATE(351), 1,
      sym__additive_expression,
    STATE(469), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(163), 2,
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
    STATE(295), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6339] = 33,
    ACTIONS(95), 1,
      sym_unary_minus_operator,
    ACTIONS(99), 1,
      sym_relocation_type,
    ACTIONS(105), 1,
      aux_sym_decimal_token1,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(113), 1,
      aux_sym_symbol_token1,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(199), 1,
      sym__wrapped_relational_expression,
    STATE(232), 1,
      sym__relational_expression,
    STATE(234), 1,
      sym__shift_expression,
    STATE(235), 1,
      sym__wrapped_shift_expression,
    STATE(236), 1,
      sym__additive_expression,
    STATE(237), 1,
      sym__wrapped_additive_expression,
    STATE(239), 1,
      sym__multiplicative_expression,
    STATE(305), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(322), 1,
      sym__bitwise_and_expression,
    STATE(323), 1,
      sym__equality_expression,
    STATE(324), 1,
      sym__wrapped_equality_expression,
    STATE(468), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(97), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(103), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(101), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(240), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6455] = 33,
    ACTIONS(95), 1,
      sym_unary_minus_operator,
    ACTIONS(99), 1,
      sym_relocation_type,
    ACTIONS(105), 1,
      aux_sym_decimal_token1,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(113), 1,
      aux_sym_symbol_token1,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(234), 1,
      sym__shift_expression,
    STATE(236), 1,
      sym__additive_expression,
    STATE(237), 1,
      sym__wrapped_additive_expression,
    STATE(239), 1,
      sym__multiplicative_expression,
    STATE(242), 1,
      sym__wrapped_shift_expression,
    STATE(305), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(322), 1,
      sym__bitwise_and_expression,
    STATE(323), 1,
      sym__equality_expression,
    STATE(324), 1,
      sym__wrapped_equality_expression,
    STATE(325), 1,
      sym__relational_expression,
    STATE(326), 1,
      sym__wrapped_relational_expression,
    STATE(468), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(97), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(103), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(101), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(240), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6571] = 33,
    ACTIONS(65), 1,
      sym_unary_minus_operator,
    ACTIONS(67), 1,
      sym_relocation_type,
    ACTIONS(71), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    STATE(113), 1,
      sym__wrapped_additive_expression,
    STATE(119), 1,
      sym__logical_or_expression,
    STATE(121), 1,
      sym__logical_and_expression,
    STATE(122), 1,
      sym__wrapped_logical_and_expression,
    STATE(123), 1,
      sym__bitwise_or_expression,
    STATE(124), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(125), 1,
      sym__bitwise_xor_expression,
    STATE(126), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(127), 1,
      sym__bitwise_and_expression,
    STATE(128), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(129), 1,
      sym__equality_expression,
    STATE(130), 1,
      sym__wrapped_equality_expression,
    STATE(131), 1,
      sym__relational_expression,
    STATE(132), 1,
      sym__wrapped_relational_expression,
    STATE(134), 1,
      sym__wrapped_shift_expression,
    STATE(135), 1,
      sym__additive_expression,
    STATE(136), 1,
      sym__multiplicative_expression,
    STATE(155), 1,
      sym__shift_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(470), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(233), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(235), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(69), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(137), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6687] = 33,
    ACTIONS(65), 1,
      sym_unary_minus_operator,
    ACTIONS(67), 1,
      sym_relocation_type,
    ACTIONS(71), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    STATE(113), 1,
      sym__wrapped_additive_expression,
    STATE(121), 1,
      sym__logical_and_expression,
    STATE(123), 1,
      sym__bitwise_or_expression,
    STATE(124), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(125), 1,
      sym__bitwise_xor_expression,
    STATE(126), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(127), 1,
      sym__bitwise_and_expression,
    STATE(128), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(129), 1,
      sym__equality_expression,
    STATE(130), 1,
      sym__wrapped_equality_expression,
    STATE(131), 1,
      sym__relational_expression,
    STATE(132), 1,
      sym__wrapped_relational_expression,
    STATE(134), 1,
      sym__wrapped_shift_expression,
    STATE(135), 1,
      sym__additive_expression,
    STATE(136), 1,
      sym__multiplicative_expression,
    STATE(142), 1,
      sym__wrapped_logical_and_expression,
    STATE(155), 1,
      sym__shift_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(470), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(233), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(235), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(69), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(137), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6803] = 33,
    ACTIONS(65), 1,
      sym_unary_minus_operator,
    ACTIONS(67), 1,
      sym_relocation_type,
    ACTIONS(71), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    STATE(113), 1,
      sym__wrapped_additive_expression,
    STATE(123), 1,
      sym__bitwise_or_expression,
    STATE(125), 1,
      sym__bitwise_xor_expression,
    STATE(126), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(127), 1,
      sym__bitwise_and_expression,
    STATE(128), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(129), 1,
      sym__equality_expression,
    STATE(130), 1,
      sym__wrapped_equality_expression,
    STATE(131), 1,
      sym__relational_expression,
    STATE(132), 1,
      sym__wrapped_relational_expression,
    STATE(134), 1,
      sym__wrapped_shift_expression,
    STATE(135), 1,
      sym__additive_expression,
    STATE(136), 1,
      sym__multiplicative_expression,
    STATE(143), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(155), 1,
      sym__shift_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(470), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(233), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(235), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(69), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(137), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6919] = 33,
    ACTIONS(65), 1,
      sym_unary_minus_operator,
    ACTIONS(67), 1,
      sym_relocation_type,
    ACTIONS(71), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    STATE(113), 1,
      sym__wrapped_additive_expression,
    STATE(125), 1,
      sym__bitwise_xor_expression,
    STATE(127), 1,
      sym__bitwise_and_expression,
    STATE(128), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(129), 1,
      sym__equality_expression,
    STATE(130), 1,
      sym__wrapped_equality_expression,
    STATE(131), 1,
      sym__relational_expression,
    STATE(132), 1,
      sym__wrapped_relational_expression,
    STATE(134), 1,
      sym__wrapped_shift_expression,
    STATE(135), 1,
      sym__additive_expression,
    STATE(136), 1,
      sym__multiplicative_expression,
    STATE(144), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(155), 1,
      sym__shift_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(470), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(233), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(235), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(69), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(137), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7035] = 33,
    ACTIONS(65), 1,
      sym_unary_minus_operator,
    ACTIONS(67), 1,
      sym_relocation_type,
    ACTIONS(71), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    STATE(113), 1,
      sym__wrapped_additive_expression,
    STATE(127), 1,
      sym__bitwise_and_expression,
    STATE(129), 1,
      sym__equality_expression,
    STATE(130), 1,
      sym__wrapped_equality_expression,
    STATE(131), 1,
      sym__relational_expression,
    STATE(132), 1,
      sym__wrapped_relational_expression,
    STATE(134), 1,
      sym__wrapped_shift_expression,
    STATE(135), 1,
      sym__additive_expression,
    STATE(136), 1,
      sym__multiplicative_expression,
    STATE(145), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(155), 1,
      sym__shift_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(470), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(233), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(235), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(69), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(137), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7151] = 33,
    ACTIONS(65), 1,
      sym_unary_minus_operator,
    ACTIONS(67), 1,
      sym_relocation_type,
    ACTIONS(71), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    STATE(113), 1,
      sym__wrapped_additive_expression,
    STATE(129), 1,
      sym__equality_expression,
    STATE(131), 1,
      sym__relational_expression,
    STATE(132), 1,
      sym__wrapped_relational_expression,
    STATE(134), 1,
      sym__wrapped_shift_expression,
    STATE(135), 1,
      sym__additive_expression,
    STATE(136), 1,
      sym__multiplicative_expression,
    STATE(146), 1,
      sym__wrapped_equality_expression,
    STATE(155), 1,
      sym__shift_expression,
    STATE(305), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(322), 1,
      sym__bitwise_and_expression,
    STATE(470), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(233), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(235), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(69), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(137), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7267] = 33,
    ACTIONS(65), 1,
      sym_unary_minus_operator,
    ACTIONS(67), 1,
      sym_relocation_type,
    ACTIONS(71), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    STATE(113), 1,
      sym__wrapped_additive_expression,
    STATE(131), 1,
      sym__relational_expression,
    STATE(134), 1,
      sym__wrapped_shift_expression,
    STATE(135), 1,
      sym__additive_expression,
    STATE(136), 1,
      sym__multiplicative_expression,
    STATE(147), 1,
      sym__wrapped_relational_expression,
    STATE(155), 1,
      sym__shift_expression,
    STATE(305), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(322), 1,
      sym__bitwise_and_expression,
    STATE(323), 1,
      sym__equality_expression,
    STATE(324), 1,
      sym__wrapped_equality_expression,
    STATE(470), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(233), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(235), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(69), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(137), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7383] = 33,
    ACTIONS(65), 1,
      sym_unary_minus_operator,
    ACTIONS(67), 1,
      sym_relocation_type,
    ACTIONS(71), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    STATE(113), 1,
      sym__wrapped_additive_expression,
    STATE(135), 1,
      sym__additive_expression,
    STATE(136), 1,
      sym__multiplicative_expression,
    STATE(148), 1,
      sym__wrapped_shift_expression,
    STATE(155), 1,
      sym__shift_expression,
    STATE(305), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(322), 1,
      sym__bitwise_and_expression,
    STATE(323), 1,
      sym__equality_expression,
    STATE(324), 1,
      sym__wrapped_equality_expression,
    STATE(325), 1,
      sym__relational_expression,
    STATE(326), 1,
      sym__wrapped_relational_expression,
    STATE(470), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(233), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(235), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(69), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(137), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7499] = 33,
    ACTIONS(65), 1,
      sym_unary_minus_operator,
    ACTIONS(67), 1,
      sym_relocation_type,
    ACTIONS(71), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    STATE(135), 1,
      sym__additive_expression,
    STATE(136), 1,
      sym__multiplicative_expression,
    STATE(149), 1,
      sym__wrapped_additive_expression,
    STATE(305), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(322), 1,
      sym__bitwise_and_expression,
    STATE(323), 1,
      sym__equality_expression,
    STATE(324), 1,
      sym__wrapped_equality_expression,
    STATE(325), 1,
      sym__relational_expression,
    STATE(326), 1,
      sym__wrapped_relational_expression,
    STATE(327), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(470), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(233), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(235), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(69), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(137), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7615] = 33,
    ACTIONS(65), 1,
      sym_unary_minus_operator,
    ACTIONS(67), 1,
      sym_relocation_type,
    ACTIONS(71), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    STATE(136), 1,
      sym__multiplicative_expression,
    STATE(305), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(322), 1,
      sym__bitwise_and_expression,
    STATE(323), 1,
      sym__equality_expression,
    STATE(324), 1,
      sym__wrapped_equality_expression,
    STATE(325), 1,
      sym__relational_expression,
    STATE(326), 1,
      sym__wrapped_relational_expression,
    STATE(327), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__wrapped_additive_expression,
    STATE(351), 1,
      sym__additive_expression,
    STATE(470), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(233), 2,
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
    STATE(150), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7731] = 33,
    ACTIONS(207), 1,
      sym_unary_minus_operator,
    ACTIONS(211), 1,
      sym_relocation_type,
    ACTIONS(217), 1,
      aux_sym_decimal_token1,
    ACTIONS(219), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(227), 1,
      aux_sym_symbol_token1,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    STATE(305), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(322), 1,
      sym__bitwise_and_expression,
    STATE(323), 1,
      sym__equality_expression,
    STATE(324), 1,
      sym__wrapped_equality_expression,
    STATE(325), 1,
      sym__relational_expression,
    STATE(326), 1,
      sym__wrapped_relational_expression,
    STATE(327), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__wrapped_additive_expression,
    STATE(331), 1,
      sym__multiplicative_expression,
    STATE(351), 1,
      sym__additive_expression,
    STATE(408), 1,
      sym__wrapped_logical_or_expression,
    STATE(471), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(209), 2,
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
    STATE(332), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7847] = 33,
    ACTIONS(207), 1,
      sym_unary_minus_operator,
    ACTIONS(211), 1,
      sym_relocation_type,
    ACTIONS(217), 1,
      aux_sym_decimal_token1,
    ACTIONS(219), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(227), 1,
      aux_sym_symbol_token1,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    STATE(305), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(322), 1,
      sym__bitwise_and_expression,
    STATE(323), 1,
      sym__equality_expression,
    STATE(324), 1,
      sym__wrapped_equality_expression,
    STATE(325), 1,
      sym__relational_expression,
    STATE(326), 1,
      sym__wrapped_relational_expression,
    STATE(327), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__wrapped_additive_expression,
    STATE(331), 1,
      sym__multiplicative_expression,
    STATE(342), 1,
      sym__wrapped_logical_and_expression,
    STATE(351), 1,
      sym__additive_expression,
    STATE(471), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(209), 2,
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
    STATE(332), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7963] = 33,
    ACTIONS(207), 1,
      sym_unary_minus_operator,
    ACTIONS(211), 1,
      sym_relocation_type,
    ACTIONS(217), 1,
      aux_sym_decimal_token1,
    ACTIONS(219), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(227), 1,
      aux_sym_symbol_token1,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    STATE(305), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(322), 1,
      sym__bitwise_and_expression,
    STATE(323), 1,
      sym__equality_expression,
    STATE(324), 1,
      sym__wrapped_equality_expression,
    STATE(325), 1,
      sym__relational_expression,
    STATE(326), 1,
      sym__wrapped_relational_expression,
    STATE(327), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__wrapped_additive_expression,
    STATE(331), 1,
      sym__multiplicative_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(351), 1,
      sym__additive_expression,
    STATE(471), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(209), 2,
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
    STATE(332), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8079] = 33,
    ACTIONS(207), 1,
      sym_unary_minus_operator,
    ACTIONS(211), 1,
      sym_relocation_type,
    ACTIONS(217), 1,
      aux_sym_decimal_token1,
    ACTIONS(219), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(227), 1,
      aux_sym_symbol_token1,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    STATE(305), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(322), 1,
      sym__bitwise_and_expression,
    STATE(323), 1,
      sym__equality_expression,
    STATE(324), 1,
      sym__wrapped_equality_expression,
    STATE(325), 1,
      sym__relational_expression,
    STATE(326), 1,
      sym__wrapped_relational_expression,
    STATE(327), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__wrapped_additive_expression,
    STATE(331), 1,
      sym__multiplicative_expression,
    STATE(344), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(351), 1,
      sym__additive_expression,
    STATE(471), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(209), 2,
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
    STATE(332), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8195] = 33,
    ACTIONS(207), 1,
      sym_unary_minus_operator,
    ACTIONS(211), 1,
      sym_relocation_type,
    ACTIONS(217), 1,
      aux_sym_decimal_token1,
    ACTIONS(219), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(227), 1,
      aux_sym_symbol_token1,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(322), 1,
      sym__bitwise_and_expression,
    STATE(323), 1,
      sym__equality_expression,
    STATE(324), 1,
      sym__wrapped_equality_expression,
    STATE(325), 1,
      sym__relational_expression,
    STATE(326), 1,
      sym__wrapped_relational_expression,
    STATE(327), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__wrapped_additive_expression,
    STATE(331), 1,
      sym__multiplicative_expression,
    STATE(345), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(351), 1,
      sym__additive_expression,
    STATE(471), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(209), 2,
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
    STATE(332), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8311] = 33,
    ACTIONS(207), 1,
      sym_unary_minus_operator,
    ACTIONS(211), 1,
      sym_relocation_type,
    ACTIONS(217), 1,
      aux_sym_decimal_token1,
    ACTIONS(219), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(227), 1,
      aux_sym_symbol_token1,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    STATE(305), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(322), 1,
      sym__bitwise_and_expression,
    STATE(323), 1,
      sym__equality_expression,
    STATE(325), 1,
      sym__relational_expression,
    STATE(326), 1,
      sym__wrapped_relational_expression,
    STATE(327), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__wrapped_additive_expression,
    STATE(331), 1,
      sym__multiplicative_expression,
    STATE(346), 1,
      sym__wrapped_equality_expression,
    STATE(351), 1,
      sym__additive_expression,
    STATE(471), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(209), 2,
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
    STATE(332), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8427] = 33,
    ACTIONS(207), 1,
      sym_unary_minus_operator,
    ACTIONS(211), 1,
      sym_relocation_type,
    ACTIONS(217), 1,
      aux_sym_decimal_token1,
    ACTIONS(219), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(227), 1,
      aux_sym_symbol_token1,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    STATE(305), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(322), 1,
      sym__bitwise_and_expression,
    STATE(323), 1,
      sym__equality_expression,
    STATE(324), 1,
      sym__wrapped_equality_expression,
    STATE(325), 1,
      sym__relational_expression,
    STATE(327), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__wrapped_additive_expression,
    STATE(331), 1,
      sym__multiplicative_expression,
    STATE(347), 1,
      sym__wrapped_relational_expression,
    STATE(351), 1,
      sym__additive_expression,
    STATE(471), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(209), 2,
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
    STATE(332), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8543] = 33,
    ACTIONS(207), 1,
      sym_unary_minus_operator,
    ACTIONS(211), 1,
      sym_relocation_type,
    ACTIONS(217), 1,
      aux_sym_decimal_token1,
    ACTIONS(219), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(227), 1,
      aux_sym_symbol_token1,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    STATE(305), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(322), 1,
      sym__bitwise_and_expression,
    STATE(323), 1,
      sym__equality_expression,
    STATE(324), 1,
      sym__wrapped_equality_expression,
    STATE(325), 1,
      sym__relational_expression,
    STATE(326), 1,
      sym__wrapped_relational_expression,
    STATE(327), 1,
      sym__shift_expression,
    STATE(330), 1,
      sym__wrapped_additive_expression,
    STATE(331), 1,
      sym__multiplicative_expression,
    STATE(348), 1,
      sym__wrapped_shift_expression,
    STATE(351), 1,
      sym__additive_expression,
    STATE(471), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(209), 2,
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
    STATE(332), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8659] = 33,
    ACTIONS(207), 1,
      sym_unary_minus_operator,
    ACTIONS(211), 1,
      sym_relocation_type,
    ACTIONS(217), 1,
      aux_sym_decimal_token1,
    ACTIONS(219), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(227), 1,
      aux_sym_symbol_token1,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    STATE(305), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(322), 1,
      sym__bitwise_and_expression,
    STATE(323), 1,
      sym__equality_expression,
    STATE(324), 1,
      sym__wrapped_equality_expression,
    STATE(325), 1,
      sym__relational_expression,
    STATE(326), 1,
      sym__wrapped_relational_expression,
    STATE(327), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(331), 1,
      sym__multiplicative_expression,
    STATE(349), 1,
      sym__wrapped_additive_expression,
    STATE(351), 1,
      sym__additive_expression,
    STATE(471), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(209), 2,
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
    STATE(332), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8775] = 33,
    ACTIONS(95), 1,
      sym_unary_minus_operator,
    ACTIONS(99), 1,
      sym_relocation_type,
    ACTIONS(105), 1,
      aux_sym_decimal_token1,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(113), 1,
      aux_sym_symbol_token1,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(200), 1,
      sym__logical_or_expression,
    STATE(203), 1,
      sym__logical_and_expression,
    STATE(204), 1,
      sym__wrapped_logical_and_expression,
    STATE(205), 1,
      sym__bitwise_or_expression,
    STATE(206), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(207), 1,
      sym__bitwise_xor_expression,
    STATE(208), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(209), 1,
      sym__bitwise_and_expression,
    STATE(210), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(230), 1,
      sym__equality_expression,
    STATE(231), 1,
      sym__wrapped_equality_expression,
    STATE(232), 1,
      sym__relational_expression,
    STATE(233), 1,
      sym__wrapped_relational_expression,
    STATE(234), 1,
      sym__shift_expression,
    STATE(235), 1,
      sym__wrapped_shift_expression,
    STATE(236), 1,
      sym__additive_expression,
    STATE(237), 1,
      sym__wrapped_additive_expression,
    STATE(239), 1,
      sym__multiplicative_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(364), 1,
      sym__wrapped_logical_or_expression,
    STATE(468), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(97), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(103), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(101), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(240), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8891] = 34,
    ACTIONS(207), 1,
      sym_unary_minus_operator,
    ACTIONS(211), 1,
      sym_relocation_type,
    ACTIONS(217), 1,
      aux_sym_decimal_token1,
    ACTIONS(219), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(227), 1,
      aux_sym_symbol_token1,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    STATE(305), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(322), 1,
      sym__bitwise_and_expression,
    STATE(323), 1,
      sym__equality_expression,
    STATE(324), 1,
      sym__wrapped_equality_expression,
    STATE(325), 1,
      sym__relational_expression,
    STATE(326), 1,
      sym__wrapped_relational_expression,
    STATE(327), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__wrapped_additive_expression,
    STATE(331), 1,
      sym__multiplicative_expression,
    STATE(332), 1,
      sym__wrapped_multiplicative_expression,
    STATE(351), 1,
      sym__additive_expression,
    STATE(471), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(209), 2,
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
    STATE(306), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9009] = 33,
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
    STATE(313), 1,
      sym__assignment_expression,
    STATE(356), 1,
      sym__wrapped_logical_or_expression,
    STATE(452), 1,
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
  [9125] = 33,
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
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(452), 1,
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
  [9241] = 33,
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
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(452), 1,
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
  [9357] = 33,
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
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(452), 1,
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
  [9473] = 33,
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
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(452), 1,
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
  [9589] = 33,
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
    STATE(190), 1,
      sym__wrapped_equality_expression,
    STATE(305), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(322), 1,
      sym__bitwise_and_expression,
    STATE(452), 1,
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
  [9705] = 33,
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
    STATE(156), 1,
      sym__wrapped_relational_expression,
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
    STATE(305), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(322), 1,
      sym__bitwise_and_expression,
    STATE(323), 1,
      sym__equality_expression,
    STATE(324), 1,
      sym__wrapped_equality_expression,
    STATE(452), 1,
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
  [9821] = 33,
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
    STATE(305), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(322), 1,
      sym__bitwise_and_expression,
    STATE(323), 1,
      sym__equality_expression,
    STATE(324), 1,
      sym__wrapped_equality_expression,
    STATE(325), 1,
      sym__relational_expression,
    STATE(326), 1,
      sym__wrapped_relational_expression,
    STATE(452), 1,
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
  [9937] = 33,
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
    STATE(305), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(322), 1,
      sym__bitwise_and_expression,
    STATE(323), 1,
      sym__equality_expression,
    STATE(324), 1,
      sym__wrapped_equality_expression,
    STATE(325), 1,
      sym__relational_expression,
    STATE(326), 1,
      sym__wrapped_relational_expression,
    STATE(327), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(452), 1,
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
  [10053] = 33,
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
    STATE(305), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(322), 1,
      sym__bitwise_and_expression,
    STATE(323), 1,
      sym__equality_expression,
    STATE(324), 1,
      sym__wrapped_equality_expression,
    STATE(325), 1,
      sym__relational_expression,
    STATE(326), 1,
      sym__wrapped_relational_expression,
    STATE(327), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__wrapped_additive_expression,
    STATE(351), 1,
      sym__additive_expression,
    STATE(452), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(35), 2,
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
  [10169] = 34,
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
    STATE(305), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(322), 1,
      sym__bitwise_and_expression,
    STATE(323), 1,
      sym__equality_expression,
    STATE(324), 1,
      sym__wrapped_equality_expression,
    STATE(325), 1,
      sym__relational_expression,
    STATE(326), 1,
      sym__wrapped_relational_expression,
    STATE(327), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__wrapped_additive_expression,
    STATE(331), 1,
      sym__multiplicative_expression,
    STATE(332), 1,
      sym__wrapped_multiplicative_expression,
    STATE(351), 1,
      sym__additive_expression,
    STATE(452), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(35), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(267), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(265), 5,
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
  [10287] = 33,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(171), 1,
      aux_sym_decimal_token1,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(179), 1,
      aux_sym_symbol_token1,
    STATE(249), 1,
      sym__wrapped_assignment_expression,
    STATE(256), 1,
      sym__assignment_expression,
    STATE(257), 1,
      sym__multiplicative_expression,
    STATE(266), 1,
      sym__logical_or_expression,
    STATE(267), 1,
      sym__wrapped_logical_or_expression,
    STATE(268), 1,
      sym__logical_and_expression,
    STATE(269), 1,
      sym__wrapped_logical_and_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(272), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(273), 1,
      sym__bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(275), 1,
      sym__wrapped_additive_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(277), 1,
      sym__equality_expression,
    STATE(278), 1,
      sym__wrapped_equality_expression,
    STATE(279), 1,
      sym__relational_expression,
    STATE(282), 1,
      sym__wrapped_relational_expression,
    STATE(283), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__wrapped_shift_expression,
    STATE(292), 1,
      sym__additive_expression,
    STATE(303), 1,
      sym__bitwise_and_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(169), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(167), 5,
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
  [10403] = 33,
    ACTIONS(95), 1,
      sym_unary_minus_operator,
    ACTIONS(99), 1,
      sym_relocation_type,
    ACTIONS(105), 1,
      aux_sym_decimal_token1,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(113), 1,
      aux_sym_symbol_token1,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(200), 1,
      sym__logical_or_expression,
    STATE(203), 1,
      sym__logical_and_expression,
    STATE(204), 1,
      sym__wrapped_logical_and_expression,
    STATE(205), 1,
      sym__bitwise_or_expression,
    STATE(206), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(207), 1,
      sym__bitwise_xor_expression,
    STATE(208), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(209), 1,
      sym__bitwise_and_expression,
    STATE(210), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(230), 1,
      sym__equality_expression,
    STATE(231), 1,
      sym__wrapped_equality_expression,
    STATE(232), 1,
      sym__relational_expression,
    STATE(233), 1,
      sym__wrapped_relational_expression,
    STATE(234), 1,
      sym__shift_expression,
    STATE(235), 1,
      sym__wrapped_shift_expression,
    STATE(236), 1,
      sym__additive_expression,
    STATE(237), 1,
      sym__wrapped_additive_expression,
    STATE(239), 1,
      sym__multiplicative_expression,
    STATE(241), 1,
      sym__wrapped_logical_or_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(468), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(97), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(103), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(101), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(240), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10519] = 33,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(171), 1,
      aux_sym_decimal_token1,
    ACTIONS(173), 1,
      anon_sym_SQUOTE,
    ACTIONS(177), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(179), 1,
      aux_sym_symbol_token1,
    STATE(257), 1,
      sym__multiplicative_expression,
    STATE(266), 1,
      sym__logical_or_expression,
    STATE(268), 1,
      sym__logical_and_expression,
    STATE(269), 1,
      sym__wrapped_logical_and_expression,
    STATE(270), 1,
      sym__bitwise_or_expression,
    STATE(272), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(273), 1,
      sym__bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(275), 1,
      sym__wrapped_additive_expression,
    STATE(276), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(277), 1,
      sym__equality_expression,
    STATE(278), 1,
      sym__wrapped_equality_expression,
    STATE(279), 1,
      sym__relational_expression,
    STATE(282), 1,
      sym__wrapped_relational_expression,
    STATE(283), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__wrapped_shift_expression,
    STATE(291), 1,
      sym__wrapped_logical_or_expression,
    STATE(292), 1,
      sym__additive_expression,
    STATE(303), 1,
      sym__bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(469), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(169), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(167), 5,
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
  [10635] = 33,
    ACTIONS(65), 1,
      sym_unary_minus_operator,
    ACTIONS(67), 1,
      sym_relocation_type,
    ACTIONS(71), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    STATE(113), 1,
      sym__wrapped_additive_expression,
    STATE(119), 1,
      sym__logical_or_expression,
    STATE(121), 1,
      sym__logical_and_expression,
    STATE(122), 1,
      sym__wrapped_logical_and_expression,
    STATE(123), 1,
      sym__bitwise_or_expression,
    STATE(124), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(125), 1,
      sym__bitwise_xor_expression,
    STATE(126), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(127), 1,
      sym__bitwise_and_expression,
    STATE(128), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(129), 1,
      sym__equality_expression,
    STATE(130), 1,
      sym__wrapped_equality_expression,
    STATE(131), 1,
      sym__relational_expression,
    STATE(132), 1,
      sym__wrapped_relational_expression,
    STATE(133), 1,
      sym__wrapped_logical_or_expression,
    STATE(134), 1,
      sym__wrapped_shift_expression,
    STATE(135), 1,
      sym__additive_expression,
    STATE(136), 1,
      sym__multiplicative_expression,
    STATE(155), 1,
      sym__shift_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(470), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(233), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(235), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(69), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(137), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10751] = 33,
    ACTIONS(207), 1,
      sym_unary_minus_operator,
    ACTIONS(211), 1,
      sym_relocation_type,
    ACTIONS(217), 1,
      aux_sym_decimal_token1,
    ACTIONS(219), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(227), 1,
      aux_sym_symbol_token1,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    STATE(305), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(322), 1,
      sym__bitwise_and_expression,
    STATE(323), 1,
      sym__equality_expression,
    STATE(324), 1,
      sym__wrapped_equality_expression,
    STATE(325), 1,
      sym__relational_expression,
    STATE(326), 1,
      sym__wrapped_relational_expression,
    STATE(327), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__wrapped_additive_expression,
    STATE(331), 1,
      sym__multiplicative_expression,
    STATE(341), 1,
      sym__wrapped_logical_or_expression,
    STATE(351), 1,
      sym__additive_expression,
    STATE(471), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(209), 2,
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
    STATE(332), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10867] = 33,
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
    STATE(313), 1,
      sym__assignment_expression,
    STATE(452), 1,
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
  [10983] = 33,
    ACTIONS(65), 1,
      sym_unary_minus_operator,
    ACTIONS(67), 1,
      sym_relocation_type,
    ACTIONS(71), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    STATE(113), 1,
      sym__wrapped_additive_expression,
    STATE(118), 1,
      sym__assignment_expression,
    STATE(119), 1,
      sym__logical_or_expression,
    STATE(120), 1,
      sym__wrapped_logical_or_expression,
    STATE(121), 1,
      sym__logical_and_expression,
    STATE(122), 1,
      sym__wrapped_logical_and_expression,
    STATE(123), 1,
      sym__bitwise_or_expression,
    STATE(124), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(125), 1,
      sym__bitwise_xor_expression,
    STATE(126), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(127), 1,
      sym__bitwise_and_expression,
    STATE(128), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(129), 1,
      sym__equality_expression,
    STATE(130), 1,
      sym__wrapped_equality_expression,
    STATE(131), 1,
      sym__relational_expression,
    STATE(132), 1,
      sym__wrapped_relational_expression,
    STATE(134), 1,
      sym__wrapped_shift_expression,
    STATE(135), 1,
      sym__additive_expression,
    STATE(136), 1,
      sym__multiplicative_expression,
    STATE(138), 1,
      sym__wrapped_assignment_expression,
    STATE(155), 1,
      sym__shift_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(233), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(235), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(69), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(137), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11099] = 33,
    ACTIONS(207), 1,
      sym_unary_minus_operator,
    ACTIONS(211), 1,
      sym_relocation_type,
    ACTIONS(217), 1,
      aux_sym_decimal_token1,
    ACTIONS(219), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(227), 1,
      aux_sym_symbol_token1,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    STATE(305), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(322), 1,
      sym__bitwise_and_expression,
    STATE(323), 1,
      sym__equality_expression,
    STATE(324), 1,
      sym__wrapped_equality_expression,
    STATE(325), 1,
      sym__relational_expression,
    STATE(326), 1,
      sym__wrapped_relational_expression,
    STATE(327), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__wrapped_additive_expression,
    STATE(331), 1,
      sym__multiplicative_expression,
    STATE(333), 1,
      sym__wrapped_assignment_expression,
    STATE(351), 1,
      sym__additive_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(209), 2,
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
    STATE(332), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11215] = 33,
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
  [11331] = 33,
    ACTIONS(95), 1,
      sym_unary_minus_operator,
    ACTIONS(99), 1,
      sym_relocation_type,
    ACTIONS(105), 1,
      aux_sym_decimal_token1,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(113), 1,
      aux_sym_symbol_token1,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(221), 1,
      sym__wrapped_additive_expression,
    STATE(236), 1,
      sym__additive_expression,
    STATE(239), 1,
      sym__multiplicative_expression,
    STATE(305), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(322), 1,
      sym__bitwise_and_expression,
    STATE(323), 1,
      sym__equality_expression,
    STATE(324), 1,
      sym__wrapped_equality_expression,
    STATE(325), 1,
      sym__relational_expression,
    STATE(326), 1,
      sym__wrapped_relational_expression,
    STATE(327), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(468), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(97), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(103), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(101), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(240), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11447] = 33,
    ACTIONS(207), 1,
      sym_unary_minus_operator,
    ACTIONS(211), 1,
      sym_relocation_type,
    ACTIONS(217), 1,
      aux_sym_decimal_token1,
    ACTIONS(219), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(227), 1,
      aux_sym_symbol_token1,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    STATE(305), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(322), 1,
      sym__bitwise_and_expression,
    STATE(323), 1,
      sym__equality_expression,
    STATE(324), 1,
      sym__wrapped_equality_expression,
    STATE(325), 1,
      sym__relational_expression,
    STATE(326), 1,
      sym__wrapped_relational_expression,
    STATE(327), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__wrapped_additive_expression,
    STATE(331), 1,
      sym__multiplicative_expression,
    STATE(351), 1,
      sym__additive_expression,
    STATE(446), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(209), 2,
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
    STATE(332), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11563] = 33,
    ACTIONS(95), 1,
      sym_unary_minus_operator,
    ACTIONS(99), 1,
      sym_relocation_type,
    ACTIONS(105), 1,
      aux_sym_decimal_token1,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(113), 1,
      aux_sym_symbol_token1,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(239), 1,
      sym__multiplicative_expression,
    STATE(305), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(322), 1,
      sym__bitwise_and_expression,
    STATE(323), 1,
      sym__equality_expression,
    STATE(324), 1,
      sym__wrapped_equality_expression,
    STATE(325), 1,
      sym__relational_expression,
    STATE(326), 1,
      sym__wrapped_relational_expression,
    STATE(327), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__wrapped_additive_expression,
    STATE(351), 1,
      sym__additive_expression,
    STATE(468), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(97), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(271), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(269), 5,
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
  [11679] = 34,
    ACTIONS(95), 1,
      sym_unary_minus_operator,
    ACTIONS(99), 1,
      sym_relocation_type,
    ACTIONS(105), 1,
      aux_sym_decimal_token1,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(113), 1,
      aux_sym_symbol_token1,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(305), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(322), 1,
      sym__bitwise_and_expression,
    STATE(323), 1,
      sym__equality_expression,
    STATE(324), 1,
      sym__wrapped_equality_expression,
    STATE(325), 1,
      sym__relational_expression,
    STATE(326), 1,
      sym__wrapped_relational_expression,
    STATE(327), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__wrapped_additive_expression,
    STATE(331), 1,
      sym__multiplicative_expression,
    STATE(332), 1,
      sym__wrapped_multiplicative_expression,
    STATE(351), 1,
      sym__additive_expression,
    STATE(468), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(97), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(275), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(273), 5,
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
  [11797] = 33,
    ACTIONS(207), 1,
      sym_unary_minus_operator,
    ACTIONS(211), 1,
      sym_relocation_type,
    ACTIONS(217), 1,
      aux_sym_decimal_token1,
    ACTIONS(219), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(227), 1,
      aux_sym_symbol_token1,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    STATE(305), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(322), 1,
      sym__bitwise_and_expression,
    STATE(323), 1,
      sym__equality_expression,
    STATE(324), 1,
      sym__wrapped_equality_expression,
    STATE(325), 1,
      sym__relational_expression,
    STATE(326), 1,
      sym__wrapped_relational_expression,
    STATE(327), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__wrapped_additive_expression,
    STATE(331), 1,
      sym__multiplicative_expression,
    STATE(351), 1,
      sym__additive_expression,
    STATE(442), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(209), 2,
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
    STATE(332), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11913] = 33,
    ACTIONS(65), 1,
      sym_unary_minus_operator,
    ACTIONS(67), 1,
      sym_relocation_type,
    ACTIONS(71), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    STATE(113), 1,
      sym__wrapped_additive_expression,
    STATE(118), 1,
      sym__assignment_expression,
    STATE(119), 1,
      sym__logical_or_expression,
    STATE(120), 1,
      sym__wrapped_logical_or_expression,
    STATE(121), 1,
      sym__logical_and_expression,
    STATE(122), 1,
      sym__wrapped_logical_and_expression,
    STATE(123), 1,
      sym__bitwise_or_expression,
    STATE(124), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(125), 1,
      sym__bitwise_xor_expression,
    STATE(126), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(127), 1,
      sym__bitwise_and_expression,
    STATE(128), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(129), 1,
      sym__equality_expression,
    STATE(130), 1,
      sym__wrapped_equality_expression,
    STATE(131), 1,
      sym__relational_expression,
    STATE(132), 1,
      sym__wrapped_relational_expression,
    STATE(134), 1,
      sym__wrapped_shift_expression,
    STATE(135), 1,
      sym__additive_expression,
    STATE(136), 1,
      sym__multiplicative_expression,
    STATE(155), 1,
      sym__shift_expression,
    STATE(334), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(233), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(235), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(69), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(137), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12029] = 33,
    ACTIONS(95), 1,
      sym_unary_minus_operator,
    ACTIONS(99), 1,
      sym_relocation_type,
    ACTIONS(105), 1,
      aux_sym_decimal_token1,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(113), 1,
      aux_sym_symbol_token1,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(203), 1,
      sym__logical_and_expression,
    STATE(205), 1,
      sym__bitwise_or_expression,
    STATE(206), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(207), 1,
      sym__bitwise_xor_expression,
    STATE(208), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(209), 1,
      sym__bitwise_and_expression,
    STATE(210), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(215), 1,
      sym__wrapped_logical_and_expression,
    STATE(230), 1,
      sym__equality_expression,
    STATE(231), 1,
      sym__wrapped_equality_expression,
    STATE(232), 1,
      sym__relational_expression,
    STATE(233), 1,
      sym__wrapped_relational_expression,
    STATE(234), 1,
      sym__shift_expression,
    STATE(235), 1,
      sym__wrapped_shift_expression,
    STATE(236), 1,
      sym__additive_expression,
    STATE(237), 1,
      sym__wrapped_additive_expression,
    STATE(239), 1,
      sym__multiplicative_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(468), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(97), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(103), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(101), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(240), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12145] = 33,
    ACTIONS(207), 1,
      sym_unary_minus_operator,
    ACTIONS(211), 1,
      sym_relocation_type,
    ACTIONS(217), 1,
      aux_sym_decimal_token1,
    ACTIONS(219), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(227), 1,
      aux_sym_symbol_token1,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    STATE(305), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(322), 1,
      sym__bitwise_and_expression,
    STATE(323), 1,
      sym__equality_expression,
    STATE(324), 1,
      sym__wrapped_equality_expression,
    STATE(325), 1,
      sym__relational_expression,
    STATE(326), 1,
      sym__wrapped_relational_expression,
    STATE(327), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__wrapped_additive_expression,
    STATE(331), 1,
      sym__multiplicative_expression,
    STATE(351), 1,
      sym__additive_expression,
    STATE(448), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(209), 2,
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
    STATE(332), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12261] = 33,
    ACTIONS(95), 1,
      sym_unary_minus_operator,
    ACTIONS(99), 1,
      sym_relocation_type,
    ACTIONS(105), 1,
      aux_sym_decimal_token1,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(113), 1,
      aux_sym_symbol_token1,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(200), 1,
      sym__logical_or_expression,
    STATE(201), 1,
      sym__wrapped_logical_or_expression,
    STATE(203), 1,
      sym__logical_and_expression,
    STATE(204), 1,
      sym__wrapped_logical_and_expression,
    STATE(205), 1,
      sym__bitwise_or_expression,
    STATE(206), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(207), 1,
      sym__bitwise_xor_expression,
    STATE(208), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(209), 1,
      sym__bitwise_and_expression,
    STATE(210), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(220), 1,
      sym__assignment_expression,
    STATE(225), 1,
      sym__wrapped_assignment_expression,
    STATE(230), 1,
      sym__equality_expression,
    STATE(231), 1,
      sym__wrapped_equality_expression,
    STATE(232), 1,
      sym__relational_expression,
    STATE(233), 1,
      sym__wrapped_relational_expression,
    STATE(234), 1,
      sym__shift_expression,
    STATE(235), 1,
      sym__wrapped_shift_expression,
    STATE(236), 1,
      sym__additive_expression,
    STATE(237), 1,
      sym__wrapped_additive_expression,
    STATE(239), 1,
      sym__multiplicative_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(97), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(103), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(101), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(240), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12377] = 33,
    ACTIONS(207), 1,
      sym_unary_minus_operator,
    ACTIONS(211), 1,
      sym_relocation_type,
    ACTIONS(217), 1,
      aux_sym_decimal_token1,
    ACTIONS(219), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(227), 1,
      aux_sym_symbol_token1,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    STATE(305), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(322), 1,
      sym__bitwise_and_expression,
    STATE(323), 1,
      sym__equality_expression,
    STATE(324), 1,
      sym__wrapped_equality_expression,
    STATE(325), 1,
      sym__relational_expression,
    STATE(326), 1,
      sym__wrapped_relational_expression,
    STATE(327), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__wrapped_additive_expression,
    STATE(331), 1,
      sym__multiplicative_expression,
    STATE(351), 1,
      sym__additive_expression,
    STATE(438), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(209), 2,
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
    STATE(332), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12493] = 33,
    ACTIONS(95), 1,
      sym_unary_minus_operator,
    ACTIONS(99), 1,
      sym_relocation_type,
    ACTIONS(105), 1,
      aux_sym_decimal_token1,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(113), 1,
      aux_sym_symbol_token1,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(205), 1,
      sym__bitwise_or_expression,
    STATE(207), 1,
      sym__bitwise_xor_expression,
    STATE(208), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(209), 1,
      sym__bitwise_and_expression,
    STATE(210), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(216), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(230), 1,
      sym__equality_expression,
    STATE(231), 1,
      sym__wrapped_equality_expression,
    STATE(232), 1,
      sym__relational_expression,
    STATE(233), 1,
      sym__wrapped_relational_expression,
    STATE(234), 1,
      sym__shift_expression,
    STATE(235), 1,
      sym__wrapped_shift_expression,
    STATE(236), 1,
      sym__additive_expression,
    STATE(237), 1,
      sym__wrapped_additive_expression,
    STATE(239), 1,
      sym__multiplicative_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(468), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(97), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(103), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(101), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(240), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12609] = 33,
    ACTIONS(65), 1,
      sym_unary_minus_operator,
    ACTIONS(67), 1,
      sym_relocation_type,
    ACTIONS(71), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(77), 1,
      aux_sym_symbol_token1,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
    STATE(113), 1,
      sym__wrapped_additive_expression,
    STATE(118), 1,
      sym__assignment_expression,
    STATE(119), 1,
      sym__logical_or_expression,
    STATE(120), 1,
      sym__wrapped_logical_or_expression,
    STATE(121), 1,
      sym__logical_and_expression,
    STATE(122), 1,
      sym__wrapped_logical_and_expression,
    STATE(123), 1,
      sym__bitwise_or_expression,
    STATE(124), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(125), 1,
      sym__bitwise_xor_expression,
    STATE(126), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(127), 1,
      sym__bitwise_and_expression,
    STATE(128), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(129), 1,
      sym__equality_expression,
    STATE(130), 1,
      sym__wrapped_equality_expression,
    STATE(131), 1,
      sym__relational_expression,
    STATE(132), 1,
      sym__wrapped_relational_expression,
    STATE(134), 1,
      sym__wrapped_shift_expression,
    STATE(135), 1,
      sym__additive_expression,
    STATE(136), 1,
      sym__multiplicative_expression,
    STATE(155), 1,
      sym__shift_expression,
    STATE(308), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(233), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(235), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(69), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(137), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12725] = 33,
    ACTIONS(207), 1,
      sym_unary_minus_operator,
    ACTIONS(211), 1,
      sym_relocation_type,
    ACTIONS(217), 1,
      aux_sym_decimal_token1,
    ACTIONS(219), 1,
      anon_sym_SQUOTE,
    ACTIONS(225), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(227), 1,
      aux_sym_symbol_token1,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    STATE(305), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(313), 1,
      sym__assignment_expression,
    STATE(314), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__wrapped_logical_and_expression,
    STATE(318), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(320), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(322), 1,
      sym__bitwise_and_expression,
    STATE(323), 1,
      sym__equality_expression,
    STATE(324), 1,
      sym__wrapped_equality_expression,
    STATE(325), 1,
      sym__relational_expression,
    STATE(326), 1,
      sym__wrapped_relational_expression,
    STATE(327), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__wrapped_additive_expression,
    STATE(331), 1,
      sym__multiplicative_expression,
    STATE(351), 1,
      sym__additive_expression,
    STATE(471), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(209), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(279), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(277), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(350), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12841] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
    ACTIONS(285), 1,
      aux_sym__whitespace_token1,
    ACTIONS(283), 42,
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
  [12898] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(287), 1,
      ts_builtin_sym_end,
    ACTIONS(289), 42,
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
  [12952] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(291), 1,
      ts_builtin_sym_end,
    ACTIONS(293), 42,
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
  [13006] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
    ACTIONS(297), 42,
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
  [13060] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(303), 1,
      sym_additive_operator,
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
  [13094] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(305), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(307), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [13126] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(309), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(311), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [13158] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(313), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(315), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [13190] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(317), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(319), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [13222] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(321), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(323), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [13254] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(325), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(327), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [13286] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(333), 1,
      sym_logical_or_operator,
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
  [13320] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(335), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(337), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [13352] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(343), 1,
      sym_logical_and_operator,
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
  [13386] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(345), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(347), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [13418] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(353), 1,
      sym_bitwise_or_operator,
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
  [13452] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(355), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(357), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [13484] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(363), 1,
      sym_bitwise_xor_operator,
    ACTIONS(359), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(361), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [13518] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(365), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(367), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [13550] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(373), 1,
      sym_bitwise_and_operator,
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
  [13584] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(375), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(377), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [13616] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(383), 1,
      sym_equality_operator,
    ACTIONS(379), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(381), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [13650] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(385), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(387), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [13682] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(393), 1,
      sym_relational_operator,
    ACTIONS(389), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(391), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [13716] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(395), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(397), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [13748] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(403), 1,
      sym_shift_operator,
    ACTIONS(399), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(401), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [13782] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(405), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(407), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [13814] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(409), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(411), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [13846] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(417), 1,
      sym_multiplicative_operator,
    ACTIONS(413), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(415), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [13880] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      sym_assignment_operator,
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
  [13916] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(427), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(429), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [13948] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(431), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(433), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [13980] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(435), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(437), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [14012] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(343), 1,
      sym_logical_and_operator,
    ACTIONS(439), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(441), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [14046] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(353), 1,
      sym_bitwise_or_operator,
    ACTIONS(443), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(445), 19,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [14080] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(363), 1,
      sym_bitwise_xor_operator,
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
  [14114] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(373), 1,
      sym_bitwise_and_operator,
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
  [14148] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(383), 1,
      sym_equality_operator,
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
  [14182] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(393), 1,
      sym_relational_operator,
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
  [14216] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(403), 1,
      sym_shift_operator,
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
  [14250] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(303), 1,
      sym_additive_operator,
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
  [14284] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(417), 1,
      sym_multiplicative_operator,
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
  [14318] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(475), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(477), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [14350] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(479), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(481), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [14382] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(483), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(485), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [14414] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(487), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(489), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [14446] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(491), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(493), 20,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
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
  [14478] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(495), 1,
      sym_relational_operator,
    ACTIONS(461), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [14508] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(397), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(395), 15,
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
  [14536] = 3,
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
  [14564] = 3,
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
  [14592] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(319), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(317), 15,
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
  [14620] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
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
  [14648] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
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
  [14676] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(497), 1,
      sym_logical_or_operator,
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
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14706] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(337), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(335), 15,
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
  [14734] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(499), 1,
      sym_logical_and_operator,
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
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14764] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(347), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(345), 15,
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
  [14792] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(501), 1,
      sym_bitwise_or_operator,
    ACTIONS(351), 4,
      sym_assignment_operator,
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
  [14822] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(357), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(355), 15,
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
  [14850] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(503), 1,
      sym_bitwise_xor_operator,
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
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14880] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(367), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(365), 15,
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
  [14908] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(505), 1,
      sym_bitwise_and_operator,
    ACTIONS(371), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [14938] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(377), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(375), 15,
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
  [14966] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(507), 1,
      sym_equality_operator,
    ACTIONS(381), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(379), 14,
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
  [14996] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(387), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(385), 15,
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
  [15024] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(495), 1,
      sym_relational_operator,
    ACTIONS(391), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [15054] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(493), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(491), 15,
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
  [15082] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(509), 1,
      sym_shift_operator,
    ACTIONS(401), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(399), 14,
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
  [15112] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(407), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(405), 15,
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
  [15140] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(511), 1,
      sym_additive_operator,
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
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [15170] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(411), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(409), 15,
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
  [15198] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(513), 1,
      sym_multiplicative_operator,
    ACTIONS(415), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(413), 15,
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
  [15228] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(515), 1,
      anon_sym_LPAREN,
    ACTIONS(517), 1,
      sym_assignment_operator,
    ACTIONS(421), 4,
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
      sym_block_comment,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15260] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(429), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [15288] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(433), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(431), 15,
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
  [15316] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(437), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [15344] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(499), 1,
      sym_logical_and_operator,
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
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15374] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(501), 1,
      sym_bitwise_or_operator,
    ACTIONS(445), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
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
  [15404] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(503), 1,
      sym_bitwise_xor_operator,
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
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15434] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(505), 1,
      sym_bitwise_and_operator,
    ACTIONS(453), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(451), 15,
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
  [15464] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(507), 1,
      sym_equality_operator,
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
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15494] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(509), 1,
      sym_shift_operator,
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
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [15524] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(511), 1,
      sym_additive_operator,
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
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [15554] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(513), 1,
      sym_multiplicative_operator,
    ACTIONS(473), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
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
  [15584] = 3,
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
  [15612] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(481), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(479), 15,
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
  [15640] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(485), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(483), 15,
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
  [15668] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(489), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(487), 15,
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
  [15696] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(315), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(313), 15,
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
  [15724] = 4,
    ACTIONS(519), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(461), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [15753] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(327), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(325), 13,
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
  [15780] = 4,
    ACTIONS(521), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(331), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(329), 12,
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
  [15809] = 3,
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
  [15836] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(337), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(335), 13,
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
  [15863] = 4,
    ACTIONS(523), 1,
      sym_logical_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(341), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(339), 12,
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
  [15892] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(347), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(345), 13,
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
  [15919] = 4,
    ACTIONS(525), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(351), 4,
      sym_assignment_operator,
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
  [15948] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15975] = 4,
    ACTIONS(527), 1,
      sym_bitwise_xor_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(361), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(359), 12,
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
  [16004] = 3,
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
  [16031] = 4,
    ACTIONS(529), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(371), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [16060] = 4,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(531), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(307), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(305), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16089] = 3,
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
  [16116] = 3,
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
  [16143] = 3,
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
  [16170] = 4,
    ACTIONS(523), 1,
      sym_logical_and_operator,
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
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16199] = 4,
    ACTIONS(525), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(445), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
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
  [16228] = 4,
    ACTIONS(527), 1,
      sym_bitwise_xor_operator,
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
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16257] = 4,
    ACTIONS(529), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(453), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [16286] = 4,
    ACTIONS(533), 1,
      sym_equality_operator,
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
      sym_shift_operator,
      sym_additive_operator,
  [16315] = 3,
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
  [16342] = 4,
    ACTIONS(535), 1,
      sym_additive_operator,
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
      sym_shift_operator,
  [16371] = 4,
    ACTIONS(537), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(473), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
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
  [16400] = 3,
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
  [16427] = 3,
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
  [16454] = 5,
    ACTIONS(539), 1,
      anon_sym_LPAREN,
    ACTIONS(541), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(421), 4,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(419), 12,
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
  [16485] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(481), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(479), 13,
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
  [16512] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(485), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(483), 13,
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
  [16539] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(489), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(487), 13,
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
  [16566] = 3,
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
  [16593] = 3,
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
  [16620] = 4,
    ACTIONS(533), 1,
      sym_equality_operator,
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
      sym_shift_operator,
      sym_additive_operator,
  [16649] = 3,
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
  [16676] = 4,
    ACTIONS(519), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(391), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [16705] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(493), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(491), 13,
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
  [16732] = 4,
    ACTIONS(543), 1,
      sym_shift_operator,
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
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [16761] = 3,
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
  [16788] = 4,
    ACTIONS(535), 1,
      sym_additive_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(301), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(299), 12,
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
  [16817] = 3,
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
  [16844] = 3,
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
  [16871] = 4,
    ACTIONS(537), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(415), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
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
  [16900] = 3,
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
  [16927] = 4,
    ACTIONS(543), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(465), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(463), 12,
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
  [16956] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(483), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(485), 14,
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
  [16984] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(487), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(489), 14,
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
  [17012] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(305), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(307), 14,
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
  [17040] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(427), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(429), 14,
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
  [17068] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(547), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(545), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(549), 12,
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
  [17098] = 4,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(549), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(551), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17124] = 5,
    ACTIONS(555), 1,
      anon_sym_LPAREN,
    ACTIONS(557), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(421), 4,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(419), 9,
      sym__operand_separator,
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
    ACTIONS(481), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(479), 10,
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
    ACTIONS(485), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(483), 10,
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
  [17200] = 3,
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
  [17224] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(489), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(487), 10,
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
  [17248] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [17272] = 3,
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
  [17296] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(323), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [17320] = 3,
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
  [17344] = 3,
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
  [17368] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(433), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(431), 10,
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
  [17392] = 4,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(549), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(551), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17418] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(437), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [17442] = 4,
    ACTIONS(561), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(415), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
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
  [17468] = 4,
    ACTIONS(563), 1,
      sym_logical_and_operator,
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
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17494] = 4,
    ACTIONS(565), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(445), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
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
  [17520] = 4,
    ACTIONS(567), 1,
      sym_bitwise_xor_operator,
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
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17546] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(327), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(325), 10,
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
  [17570] = 4,
    ACTIONS(569), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(331), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(329), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17596] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(337), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
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
  [17620] = 4,
    ACTIONS(563), 1,
      sym_logical_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(341), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(339), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17646] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [17670] = 4,
    ACTIONS(571), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(549), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(551), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17696] = 4,
    ACTIONS(565), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(351), 4,
      sym_assignment_operator,
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
  [17722] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [17746] = 4,
    ACTIONS(567), 1,
      sym_bitwise_xor_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(361), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(359), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17772] = 4,
    ACTIONS(573), 1,
      sym_additive_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(301), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(299), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [17798] = 4,
    ACTIONS(575), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(371), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [17824] = 3,
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
  [17848] = 4,
    ACTIONS(577), 1,
      sym_equality_operator,
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
      sym_shift_operator,
      sym_additive_operator,
  [17874] = 3,
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
  [17898] = 4,
    ACTIONS(575), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(453), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [17924] = 4,
    ACTIONS(579), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(549), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(551), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17950] = 4,
    ACTIONS(581), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(391), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [17976] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(493), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(491), 10,
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
  [18000] = 4,
    ACTIONS(583), 1,
      sym_shift_operator,
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
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [18026] = 13,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(589), 1,
      sym_line_comment,
    ACTIONS(592), 1,
      sym_block_comment,
    ACTIONS(594), 1,
      anon_sym_COMMA,
    ACTIONS(599), 1,
      sym_assignment_operator,
    ACTIONS(601), 1,
      sym__operand_separator,
    ACTIONS(603), 1,
      sym__data_separator,
    STATE(329), 1,
      aux_sym_numeric_operands_repeat1,
    STATE(355), 1,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(585), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(596), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(587), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
  [18070] = 4,
    ACTIONS(577), 1,
      sym_equality_operator,
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
      sym_shift_operator,
      sym_additive_operator,
  [18096] = 4,
    ACTIONS(581), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(461), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [18122] = 4,
    ACTIONS(583), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(465), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(463), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [18148] = 4,
    ACTIONS(573), 1,
      sym_additive_operator,
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
      sym_shift_operator,
  [18174] = 3,
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
  [18198] = 3,
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
  [18222] = 3,
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
  [18246] = 4,
    ACTIONS(561), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(473), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
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
  [18272] = 4,
    ACTIONS(605), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(549), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(551), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18298] = 3,
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
  [18322] = 4,
    ACTIONS(607), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(549), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(551), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18348] = 4,
    ACTIONS(609), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(549), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(551), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18374] = 4,
    ACTIONS(611), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(549), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(551), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18400] = 4,
    ACTIONS(613), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(549), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(551), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18426] = 4,
    ACTIONS(615), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(549), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(551), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18452] = 4,
    ACTIONS(617), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(549), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(551), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18478] = 4,
    ACTIONS(619), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(549), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(551), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18504] = 3,
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
  [18528] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(333), 1,
      sym_logical_or_operator,
    ACTIONS(395), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(397), 10,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
      sym_assignment_operator,
  [18553] = 4,
    ACTIONS(621), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(371), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [18577] = 3,
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
  [18599] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(481), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(479), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18621] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(599), 1,
      sym_assignment_operator,
    ACTIONS(623), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(625), 8,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
  [18647] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(599), 1,
      sym_assignment_operator,
    ACTIONS(627), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(629), 8,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
  [18673] = 3,
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
  [18695] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [18717] = 3,
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
  [18739] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(323), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [18761] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(327), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(325), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18783] = 4,
    ACTIONS(631), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(331), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(329), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18807] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(337), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(335), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18829] = 4,
    ACTIONS(633), 1,
      sym_logical_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(341), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(339), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18853] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [18875] = 4,
    ACTIONS(635), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(351), 4,
      sym_assignment_operator,
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
  [18899] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [18921] = 4,
    ACTIONS(637), 1,
      sym_bitwise_xor_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(361), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(359), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18945] = 3,
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
  [18967] = 3,
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
  [18989] = 4,
    ACTIONS(639), 1,
      sym_equality_operator,
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
      sym_shift_operator,
      sym_additive_operator,
  [19013] = 3,
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
  [19035] = 4,
    ACTIONS(641), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(391), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [19059] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(493), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(491), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19081] = 4,
    ACTIONS(643), 1,
      sym_shift_operator,
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
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [19105] = 9,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(594), 1,
      anon_sym_COMMA,
    ACTIONS(601), 1,
      sym__operand_separator,
    ACTIONS(603), 1,
      sym__data_separator,
    ACTIONS(645), 1,
      sym_block_comment,
    STATE(352), 1,
      aux_sym_numeric_operands_repeat1,
    STATE(354), 1,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(87), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(89), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19139] = 4,
    ACTIONS(647), 1,
      sym_additive_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(301), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(299), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [19163] = 3,
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
  [19185] = 4,
    ACTIONS(649), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(415), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(413), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19209] = 5,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
    ACTIONS(653), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(421), 4,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(419), 7,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19235] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(599), 1,
      sym_assignment_operator,
    ACTIONS(655), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(657), 8,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      sym_block_comment,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19261] = 3,
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
  [19283] = 3,
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
  [19305] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(485), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(483), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19327] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(489), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(487), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19349] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(433), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(431), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19371] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(437), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [19393] = 3,
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
  [19415] = 4,
    ACTIONS(633), 1,
      sym_logical_and_operator,
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
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19439] = 4,
    ACTIONS(635), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(445), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
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
  [19463] = 4,
    ACTIONS(637), 1,
      sym_bitwise_xor_operator,
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
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19487] = 4,
    ACTIONS(621), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(453), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [19511] = 4,
    ACTIONS(639), 1,
      sym_equality_operator,
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
      sym_shift_operator,
      sym_additive_operator,
  [19535] = 4,
    ACTIONS(641), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(461), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [19559] = 4,
    ACTIONS(643), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(465), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(463), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [19583] = 4,
    ACTIONS(647), 1,
      sym_additive_operator,
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
      sym_shift_operator,
  [19607] = 4,
    ACTIONS(649), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(473), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(471), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19631] = 3,
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
  [19653] = 9,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(659), 1,
      sym_line_comment,
    ACTIONS(662), 1,
      sym_block_comment,
    ACTIONS(665), 1,
      anon_sym_COMMA,
    STATE(352), 1,
      aux_sym_numeric_operands_repeat1,
    ACTIONS(655), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(668), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(671), 2,
      sym__operand_separator,
      sym__data_separator,
    ACTIONS(657), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
  [19686] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(678), 1,
      sym__data_separator,
    STATE(353), 1,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(674), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(676), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19711] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(681), 1,
      sym__data_separator,
    STATE(353), 1,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(79), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(81), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19736] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(681), 1,
      sym__data_separator,
    STATE(353), 1,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(87), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(89), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19761] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(497), 1,
      sym_logical_or_operator,
    ACTIONS(395), 10,
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
  [19780] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    STATE(363), 1,
      aux_sym__numeric_directive_repeat1,
    ACTIONS(683), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(685), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(687), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19804] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    STATE(15), 1,
      sym__control_operand_separator,
    STATE(358), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(689), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(691), 4,
      sym__operand_separator,
      sym__data_separator,
      sym_block_comment,
      aux_sym__control_operand_separator_token1,
  [19826] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    STATE(363), 1,
      aux_sym__numeric_directive_repeat1,
    ACTIONS(694), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(696), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(687), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19850] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(698), 1,
      sym_block_comment,
    STATE(15), 1,
      sym__control_operand_separator,
    STATE(358), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(700), 3,
      sym__operand_separator,
      sym__data_separator,
      aux_sym__control_operand_separator_token1,
    ACTIONS(55), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19874] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(704), 1,
      sym_block_comment,
    STATE(15), 1,
      sym__control_operand_separator,
    STATE(360), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(700), 3,
      sym__operand_separator,
      sym__data_separator,
      aux_sym__control_operand_separator_token1,
    ACTIONS(702), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19898] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(515), 1,
      anon_sym_LPAREN,
    ACTIONS(708), 1,
      sym_assignment_operator,
    ACTIONS(706), 8,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      aux_sym__control_operand_separator_token1,
  [19918] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    STATE(363), 1,
      aux_sym__numeric_directive_repeat1,
    ACTIONS(710), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(712), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(714), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19942] = 3,
    ACTIONS(521), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(395), 8,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
  [19960] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    STATE(359), 1,
      aux_sym__numeric_directive_repeat1,
    ACTIONS(717), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(719), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(721), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19984] = 4,
    ACTIONS(539), 1,
      anon_sym_LPAREN,
    ACTIONS(725), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(723), 6,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_COMMA,
  [20003] = 2,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(727), 8,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      aux_sym__control_operand_separator_token1,
  [20017] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(733), 1,
      aux_sym__whitespace_token1,
    ACTIONS(735), 1,
      anon_sym_COMMA,
    STATE(376), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(729), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(731), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [20041] = 2,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(737), 8,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      aux_sym__control_operand_separator_token1,
  [20055] = 5,
    ACTIONS(741), 1,
      anon_sym_COMMA,
    ACTIONS(743), 1,
      sym__operand_separator,
    STATE(372), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(739), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20075] = 2,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(689), 8,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      aux_sym__control_operand_separator_token1,
  [20089] = 5,
    ACTIONS(741), 1,
      anon_sym_COMMA,
    ACTIONS(747), 1,
      sym__operand_separator,
    STATE(374), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(745), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20109] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(733), 1,
      aux_sym__whitespace_token1,
    ACTIONS(735), 1,
      anon_sym_COMMA,
    STATE(368), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(749), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(751), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [20133] = 4,
    STATE(374), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(755), 2,
      sym__operand_separator,
      anon_sym_COMMA,
    ACTIONS(753), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20151] = 2,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(758), 8,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      aux_sym__control_operand_separator_token1,
  [20165] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(764), 1,
      aux_sym__whitespace_token1,
    ACTIONS(767), 1,
      anon_sym_COMMA,
    STATE(376), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(760), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(762), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [20189] = 2,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(770), 8,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      aux_sym__control_operand_separator_token1,
  [20203] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(776), 1,
      aux_sym__whitespace_token1,
    ACTIONS(778), 1,
      sym_block_comment,
    ACTIONS(780), 1,
      anon_sym_LPAREN,
    STATE(429), 1,
      sym__call_expression,
    ACTIONS(772), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(774), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [20227] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(786), 1,
      aux_sym__whitespace_token1,
    ACTIONS(788), 1,
      anon_sym_LPAREN,
    ACTIONS(782), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(784), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [20248] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(790), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(792), 3,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_COMMA,
  [20265] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(760), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(762), 3,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_COMMA,
  [20282] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(758), 6,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_COMMA,
  [20295] = 3,
    ACTIONS(569), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(395), 5,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
  [20310] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(794), 6,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_COMMA,
  [20323] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(770), 6,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_COMMA,
  [20336] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(796), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(770), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
  [20352] = 5,
    ACTIONS(555), 1,
      anon_sym_LPAREN,
    ACTIONS(798), 1,
      anon_sym_RPAREN,
    ACTIONS(801), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(723), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [20370] = 4,
    ACTIONS(555), 1,
      anon_sym_LPAREN,
    ACTIONS(801), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(723), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20386] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(803), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(805), 3,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
  [20400] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(811), 1,
      aux_sym__whitespace_token1,
    ACTIONS(813), 1,
      sym_block_comment,
    ACTIONS(807), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(809), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [20418] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(819), 1,
      aux_sym__whitespace_token1,
    ACTIONS(815), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(817), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [20436] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(825), 1,
      aux_sym__whitespace_token1,
    ACTIONS(827), 1,
      sym_block_comment,
    ACTIONS(821), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(823), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [20454] = 5,
    ACTIONS(555), 1,
      anon_sym_LPAREN,
    ACTIONS(801), 1,
      sym_assignment_operator,
    ACTIONS(829), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(723), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [20472] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(832), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(758), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
  [20488] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(834), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(836), 3,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
  [20502] = 5,
    ACTIONS(555), 1,
      anon_sym_LPAREN,
    ACTIONS(801), 1,
      sym_assignment_operator,
    ACTIONS(838), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(723), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [20520] = 5,
    ACTIONS(555), 1,
      anon_sym_LPAREN,
    ACTIONS(801), 1,
      sym_assignment_operator,
    ACTIONS(841), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(723), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [20538] = 5,
    ACTIONS(555), 1,
      anon_sym_LPAREN,
    ACTIONS(801), 1,
      sym_assignment_operator,
    ACTIONS(844), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(723), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [20556] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(847), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20567] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(751), 1,
      anon_sym_RPAREN,
    ACTIONS(849), 1,
      aux_sym__whitespace_token1,
    ACTIONS(852), 1,
      anon_sym_COMMA,
    STATE(411), 1,
      aux_sym_macro_parameters_repeat1,
  [20586] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(854), 1,
      anon_sym_DQUOTE,
    STATE(416), 1,
      aux_sym_string_repeat1,
    ACTIONS(856), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20603] = 5,
    ACTIONS(739), 1,
      anon_sym_RPAREN,
    ACTIONS(858), 1,
      anon_sym_COMMA,
    ACTIONS(860), 1,
      sym__operand_separator,
    STATE(417), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20620] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(862), 1,
      aux_sym__whitespace_token1,
    ACTIONS(864), 1,
      anon_sym_RPAREN,
    ACTIONS(866), 1,
      sym_macro_parameter,
    STATE(453), 1,
      sym_macro_parameters,
  [20639] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(868), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20650] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(870), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20661] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(872), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20672] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(874), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20683] = 3,
    ACTIONS(631), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(395), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_assignment_operator,
  [20696] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(876), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20707] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(878), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20718] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(731), 1,
      anon_sym_RPAREN,
    ACTIONS(852), 1,
      anon_sym_COMMA,
    ACTIONS(880), 1,
      aux_sym__whitespace_token1,
    STATE(415), 1,
      aux_sym_macro_parameters_repeat1,
  [20737] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(883), 1,
      anon_sym_DQUOTE,
    STATE(414), 1,
      aux_sym_string_repeat1,
    ACTIONS(885), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20754] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(866), 1,
      sym_macro_parameter,
    ACTIONS(887), 1,
      aux_sym__whitespace_token1,
    ACTIONS(889), 1,
      anon_sym_RPAREN,
    STATE(456), 1,
      sym_macro_parameters,
  [20773] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(891), 1,
      anon_sym_DQUOTE,
    STATE(426), 1,
      aux_sym_string_repeat1,
    ACTIONS(893), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20790] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(762), 1,
      anon_sym_RPAREN,
    ACTIONS(895), 1,
      aux_sym__whitespace_token1,
    ACTIONS(898), 1,
      anon_sym_COMMA,
    STATE(415), 1,
      aux_sym_macro_parameters_repeat1,
  [20809] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(901), 1,
      anon_sym_DQUOTE,
    STATE(426), 1,
      aux_sym_string_repeat1,
    ACTIONS(893), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20826] = 5,
    ACTIONS(745), 1,
      anon_sym_RPAREN,
    ACTIONS(858), 1,
      anon_sym_COMMA,
    ACTIONS(903), 1,
      sym__operand_separator,
    STATE(428), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20843] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(905), 1,
      anon_sym_DQUOTE,
    STATE(420), 1,
      aux_sym_string_repeat1,
    ACTIONS(907), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20860] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(909), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20871] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(911), 1,
      anon_sym_DQUOTE,
    STATE(426), 1,
      aux_sym_string_repeat1,
    ACTIONS(893), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20888] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(913), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20899] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(915), 1,
      anon_sym_DQUOTE,
    STATE(425), 1,
      aux_sym_string_repeat1,
    ACTIONS(917), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20916] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(919), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20927] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(921), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20938] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(923), 1,
      anon_sym_DQUOTE,
    STATE(426), 1,
      aux_sym_string_repeat1,
    ACTIONS(893), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20955] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(925), 1,
      anon_sym_DQUOTE,
    STATE(426), 1,
      aux_sym_string_repeat1,
    ACTIONS(927), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20972] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(930), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20983] = 4,
    ACTIONS(753), 1,
      anon_sym_RPAREN,
    STATE(428), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(932), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [20998] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(935), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [21009] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(937), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [21020] = 4,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(941), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(939), 2,
      sym__line_separator,
      anon_sym_SEMI,
  [21035] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(943), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [21046] = 4,
    ACTIONS(945), 1,
      ts_builtin_sym_end,
    ACTIONS(947), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(939), 2,
      sym__line_separator,
      anon_sym_SEMI,
  [21061] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(531), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [21072] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(949), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [21083] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(921), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [21094] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(951), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [21105] = 4,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
    ACTIONS(953), 1,
      anon_sym_RPAREN,
    ACTIONS(955), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21119] = 3,
    ACTIONS(229), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(85), 2,
      sym__data_separator,
      anon_sym_COMMA,
  [21131] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(758), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21141] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(770), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21151] = 4,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
    ACTIONS(955), 1,
      sym_assignment_operator,
    ACTIONS(957), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21165] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(959), 1,
      anon_sym_LPAREN,
    ACTIONS(961), 1,
      sym_macro_parameter,
    STATE(407), 1,
      sym_macro_parameters,
  [21181] = 3,
    ACTIONS(963), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(939), 2,
      sym__line_separator,
      anon_sym_SEMI,
  [21193] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(790), 1,
      aux_sym__whitespace_token1,
    ACTIONS(792), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21207] = 4,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
    ACTIONS(955), 1,
      sym_assignment_operator,
    ACTIONS(965), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21221] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(760), 1,
      aux_sym__whitespace_token1,
    ACTIONS(762), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21235] = 4,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
    ACTIONS(955), 1,
      sym_assignment_operator,
    ACTIONS(967), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21249] = 4,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
    ACTIONS(955), 1,
      sym_assignment_operator,
    ACTIONS(969), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21263] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(794), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21273] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(971), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [21284] = 3,
    ACTIONS(515), 1,
      anon_sym_LPAREN,
    ACTIONS(955), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21295] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(973), 1,
      aux_sym__whitespace_token1,
    ACTIONS(975), 1,
      anon_sym_RPAREN,
  [21308] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(977), 1,
      anon_sym_COMMA,
    ACTIONS(979), 1,
      sym_macro_parameter,
  [21321] = 3,
    ACTIONS(955), 1,
      sym_assignment_operator,
    ACTIONS(981), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21332] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(983), 1,
      aux_sym__whitespace_token1,
    ACTIONS(985), 1,
      anon_sym_RPAREN,
  [21345] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(987), 2,
      sym__data_separator,
      anon_sym_COMMA,
  [21354] = 3,
    ACTIONS(989), 1,
      ts_builtin_sym_end,
    ACTIONS(991), 1,
      sym__line_separator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21365] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(993), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [21376] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(995), 1,
      anon_sym_COMMA,
    ACTIONS(997), 1,
      sym_macro_parameter,
  [21389] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(999), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [21400] = 3,
    ACTIONS(945), 1,
      ts_builtin_sym_end,
    ACTIONS(991), 1,
      sym__line_separator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21411] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(939), 1,
      aux_sym__statement_token1,
  [21424] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1001), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [21435] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(939), 1,
      aux_sym__statement_token1,
    ACTIONS(945), 1,
      ts_builtin_sym_end,
  [21448] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1003), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [21459] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(85), 2,
      sym__data_separator,
      anon_sym_COMMA,
  [21468] = 3,
    ACTIONS(539), 1,
      anon_sym_LPAREN,
    ACTIONS(955), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21479] = 3,
    ACTIONS(555), 1,
      anon_sym_LPAREN,
    ACTIONS(955), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21490] = 3,
    ACTIONS(955), 1,
      sym_assignment_operator,
    ACTIONS(1005), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21501] = 3,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
    ACTIONS(955), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21512] = 2,
    ACTIONS(1007), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21520] = 2,
    ACTIONS(1009), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21528] = 2,
    ACTIONS(1011), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21536] = 2,
    ACTIONS(1013), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21544] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(939), 1,
      aux_sym__statement_token1,
  [21554] = 2,
    ACTIONS(1015), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21562] = 2,
    ACTIONS(1017), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21570] = 2,
    ACTIONS(991), 1,
      sym__line_separator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21578] = 2,
    ACTIONS(1019), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21586] = 2,
    ACTIONS(1021), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21594] = 2,
    ACTIONS(1023), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21602] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(979), 1,
      sym_macro_parameter,
  [21612] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1025), 1,
      sym_macro_parameter,
  [21622] = 2,
    ACTIONS(1027), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21630] = 2,
    ACTIONS(1029), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21638] = 2,
    ACTIONS(1031), 1,
      sym_macro_name,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21646] = 2,
    ACTIONS(1033), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21654] = 2,
    ACTIONS(1035), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21662] = 2,
    ACTIONS(1037), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21670] = 2,
    ACTIONS(1039), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21678] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(997), 1,
      sym_macro_parameter,
  [21688] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1041), 1,
      sym_macro_parameter,
  [21698] = 2,
    ACTIONS(1043), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21706] = 2,
    ACTIONS(1045), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21714] = 2,
    ACTIONS(1047), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21722] = 2,
    ACTIONS(1049), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21730] = 2,
    ACTIONS(1051), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21738] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(1053), 1,
      aux_sym__whitespace_token1,
    ACTIONS(1055), 1,
      sym_block_comment,
  [21748] = 2,
    ACTIONS(1057), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21756] = 2,
    ACTIONS(1059), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21764] = 2,
    ACTIONS(1061), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21772] = 2,
    ACTIONS(1063), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21780] = 2,
    ACTIONS(1065), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21788] = 2,
    ACTIONS(1067), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21796] = 2,
    ACTIONS(1069), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21804] = 2,
    ACTIONS(1071), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21812] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(1073), 1,
      aux_sym__whitespace_token1,
    ACTIONS(1075), 1,
      sym_block_comment,
  [21822] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(1077), 1,
      aux_sym__whitespace_token1,
    ACTIONS(1079), 1,
      sym_block_comment,
  [21832] = 2,
    ACTIONS(1081), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 140,
  [SMALL_STATE(4)] = 277,
  [SMALL_STATE(5)] = 414,
  [SMALL_STATE(6)] = 548,
  [SMALL_STATE(7)] = 680,
  [SMALL_STATE(8)] = 812,
  [SMALL_STATE(9)] = 947,
  [SMALL_STATE(10)] = 1074,
  [SMALL_STATE(11)] = 1172,
  [SMALL_STATE(12)] = 1306,
  [SMALL_STATE(13)] = 1404,
  [SMALL_STATE(14)] = 1533,
  [SMALL_STATE(15)] = 1662,
  [SMALL_STATE(16)] = 1793,
  [SMALL_STATE(17)] = 1922,
  [SMALL_STATE(18)] = 2055,
  [SMALL_STATE(19)] = 2185,
  [SMALL_STATE(20)] = 2315,
  [SMALL_STATE(21)] = 2445,
  [SMALL_STATE(22)] = 2575,
  [SMALL_STATE(23)] = 2701,
  [SMALL_STATE(24)] = 2827,
  [SMALL_STATE(25)] = 2957,
  [SMALL_STATE(26)] = 3087,
  [SMALL_STATE(27)] = 3217,
  [SMALL_STATE(28)] = 3347,
  [SMALL_STATE(29)] = 3477,
  [SMALL_STATE(30)] = 3607,
  [SMALL_STATE(31)] = 3737,
  [SMALL_STATE(32)] = 3867,
  [SMALL_STATE(33)] = 3990,
  [SMALL_STATE(34)] = 4117,
  [SMALL_STATE(35)] = 4240,
  [SMALL_STATE(36)] = 4363,
  [SMALL_STATE(37)] = 4481,
  [SMALL_STATE(38)] = 4597,
  [SMALL_STATE(39)] = 4713,
  [SMALL_STATE(40)] = 4829,
  [SMALL_STATE(41)] = 4945,
  [SMALL_STATE(42)] = 5061,
  [SMALL_STATE(43)] = 5177,
  [SMALL_STATE(44)] = 5293,
  [SMALL_STATE(45)] = 5409,
  [SMALL_STATE(46)] = 5525,
  [SMALL_STATE(47)] = 5641,
  [SMALL_STATE(48)] = 5757,
  [SMALL_STATE(49)] = 5873,
  [SMALL_STATE(50)] = 5989,
  [SMALL_STATE(51)] = 6105,
  [SMALL_STATE(52)] = 6221,
  [SMALL_STATE(53)] = 6339,
  [SMALL_STATE(54)] = 6455,
  [SMALL_STATE(55)] = 6571,
  [SMALL_STATE(56)] = 6687,
  [SMALL_STATE(57)] = 6803,
  [SMALL_STATE(58)] = 6919,
  [SMALL_STATE(59)] = 7035,
  [SMALL_STATE(60)] = 7151,
  [SMALL_STATE(61)] = 7267,
  [SMALL_STATE(62)] = 7383,
  [SMALL_STATE(63)] = 7499,
  [SMALL_STATE(64)] = 7615,
  [SMALL_STATE(65)] = 7731,
  [SMALL_STATE(66)] = 7847,
  [SMALL_STATE(67)] = 7963,
  [SMALL_STATE(68)] = 8079,
  [SMALL_STATE(69)] = 8195,
  [SMALL_STATE(70)] = 8311,
  [SMALL_STATE(71)] = 8427,
  [SMALL_STATE(72)] = 8543,
  [SMALL_STATE(73)] = 8659,
  [SMALL_STATE(74)] = 8775,
  [SMALL_STATE(75)] = 8891,
  [SMALL_STATE(76)] = 9009,
  [SMALL_STATE(77)] = 9125,
  [SMALL_STATE(78)] = 9241,
  [SMALL_STATE(79)] = 9357,
  [SMALL_STATE(80)] = 9473,
  [SMALL_STATE(81)] = 9589,
  [SMALL_STATE(82)] = 9705,
  [SMALL_STATE(83)] = 9821,
  [SMALL_STATE(84)] = 9937,
  [SMALL_STATE(85)] = 10053,
  [SMALL_STATE(86)] = 10169,
  [SMALL_STATE(87)] = 10287,
  [SMALL_STATE(88)] = 10403,
  [SMALL_STATE(89)] = 10519,
  [SMALL_STATE(90)] = 10635,
  [SMALL_STATE(91)] = 10751,
  [SMALL_STATE(92)] = 10867,
  [SMALL_STATE(93)] = 10983,
  [SMALL_STATE(94)] = 11099,
  [SMALL_STATE(95)] = 11215,
  [SMALL_STATE(96)] = 11331,
  [SMALL_STATE(97)] = 11447,
  [SMALL_STATE(98)] = 11563,
  [SMALL_STATE(99)] = 11679,
  [SMALL_STATE(100)] = 11797,
  [SMALL_STATE(101)] = 11913,
  [SMALL_STATE(102)] = 12029,
  [SMALL_STATE(103)] = 12145,
  [SMALL_STATE(104)] = 12261,
  [SMALL_STATE(105)] = 12377,
  [SMALL_STATE(106)] = 12493,
  [SMALL_STATE(107)] = 12609,
  [SMALL_STATE(108)] = 12725,
  [SMALL_STATE(109)] = 12841,
  [SMALL_STATE(110)] = 12898,
  [SMALL_STATE(111)] = 12952,
  [SMALL_STATE(112)] = 13006,
  [SMALL_STATE(113)] = 13060,
  [SMALL_STATE(114)] = 13094,
  [SMALL_STATE(115)] = 13126,
  [SMALL_STATE(116)] = 13158,
  [SMALL_STATE(117)] = 13190,
  [SMALL_STATE(118)] = 13222,
  [SMALL_STATE(119)] = 13254,
  [SMALL_STATE(120)] = 13286,
  [SMALL_STATE(121)] = 13320,
  [SMALL_STATE(122)] = 13352,
  [SMALL_STATE(123)] = 13386,
  [SMALL_STATE(124)] = 13418,
  [SMALL_STATE(125)] = 13452,
  [SMALL_STATE(126)] = 13484,
  [SMALL_STATE(127)] = 13518,
  [SMALL_STATE(128)] = 13550,
  [SMALL_STATE(129)] = 13584,
  [SMALL_STATE(130)] = 13616,
  [SMALL_STATE(131)] = 13650,
  [SMALL_STATE(132)] = 13682,
  [SMALL_STATE(133)] = 13716,
  [SMALL_STATE(134)] = 13748,
  [SMALL_STATE(135)] = 13782,
  [SMALL_STATE(136)] = 13814,
  [SMALL_STATE(137)] = 13846,
  [SMALL_STATE(138)] = 13880,
  [SMALL_STATE(139)] = 13916,
  [SMALL_STATE(140)] = 13948,
  [SMALL_STATE(141)] = 13980,
  [SMALL_STATE(142)] = 14012,
  [SMALL_STATE(143)] = 14046,
  [SMALL_STATE(144)] = 14080,
  [SMALL_STATE(145)] = 14114,
  [SMALL_STATE(146)] = 14148,
  [SMALL_STATE(147)] = 14182,
  [SMALL_STATE(148)] = 14216,
  [SMALL_STATE(149)] = 14250,
  [SMALL_STATE(150)] = 14284,
  [SMALL_STATE(151)] = 14318,
  [SMALL_STATE(152)] = 14350,
  [SMALL_STATE(153)] = 14382,
  [SMALL_STATE(154)] = 14414,
  [SMALL_STATE(155)] = 14446,
  [SMALL_STATE(156)] = 14478,
  [SMALL_STATE(157)] = 14508,
  [SMALL_STATE(158)] = 14536,
  [SMALL_STATE(159)] = 14564,
  [SMALL_STATE(160)] = 14592,
  [SMALL_STATE(161)] = 14620,
  [SMALL_STATE(162)] = 14648,
  [SMALL_STATE(163)] = 14676,
  [SMALL_STATE(164)] = 14706,
  [SMALL_STATE(165)] = 14734,
  [SMALL_STATE(166)] = 14764,
  [SMALL_STATE(167)] = 14792,
  [SMALL_STATE(168)] = 14822,
  [SMALL_STATE(169)] = 14850,
  [SMALL_STATE(170)] = 14880,
  [SMALL_STATE(171)] = 14908,
  [SMALL_STATE(172)] = 14938,
  [SMALL_STATE(173)] = 14966,
  [SMALL_STATE(174)] = 14996,
  [SMALL_STATE(175)] = 15024,
  [SMALL_STATE(176)] = 15054,
  [SMALL_STATE(177)] = 15082,
  [SMALL_STATE(178)] = 15112,
  [SMALL_STATE(179)] = 15140,
  [SMALL_STATE(180)] = 15170,
  [SMALL_STATE(181)] = 15198,
  [SMALL_STATE(182)] = 15228,
  [SMALL_STATE(183)] = 15260,
  [SMALL_STATE(184)] = 15288,
  [SMALL_STATE(185)] = 15316,
  [SMALL_STATE(186)] = 15344,
  [SMALL_STATE(187)] = 15374,
  [SMALL_STATE(188)] = 15404,
  [SMALL_STATE(189)] = 15434,
  [SMALL_STATE(190)] = 15464,
  [SMALL_STATE(191)] = 15494,
  [SMALL_STATE(192)] = 15524,
  [SMALL_STATE(193)] = 15554,
  [SMALL_STATE(194)] = 15584,
  [SMALL_STATE(195)] = 15612,
  [SMALL_STATE(196)] = 15640,
  [SMALL_STATE(197)] = 15668,
  [SMALL_STATE(198)] = 15696,
  [SMALL_STATE(199)] = 15724,
  [SMALL_STATE(200)] = 15753,
  [SMALL_STATE(201)] = 15780,
  [SMALL_STATE(202)] = 15809,
  [SMALL_STATE(203)] = 15836,
  [SMALL_STATE(204)] = 15863,
  [SMALL_STATE(205)] = 15892,
  [SMALL_STATE(206)] = 15919,
  [SMALL_STATE(207)] = 15948,
  [SMALL_STATE(208)] = 15975,
  [SMALL_STATE(209)] = 16004,
  [SMALL_STATE(210)] = 16031,
  [SMALL_STATE(211)] = 16060,
  [SMALL_STATE(212)] = 16089,
  [SMALL_STATE(213)] = 16116,
  [SMALL_STATE(214)] = 16143,
  [SMALL_STATE(215)] = 16170,
  [SMALL_STATE(216)] = 16199,
  [SMALL_STATE(217)] = 16228,
  [SMALL_STATE(218)] = 16257,
  [SMALL_STATE(219)] = 16286,
  [SMALL_STATE(220)] = 16315,
  [SMALL_STATE(221)] = 16342,
  [SMALL_STATE(222)] = 16371,
  [SMALL_STATE(223)] = 16400,
  [SMALL_STATE(224)] = 16427,
  [SMALL_STATE(225)] = 16454,
  [SMALL_STATE(226)] = 16485,
  [SMALL_STATE(227)] = 16512,
  [SMALL_STATE(228)] = 16539,
  [SMALL_STATE(229)] = 16566,
  [SMALL_STATE(230)] = 16593,
  [SMALL_STATE(231)] = 16620,
  [SMALL_STATE(232)] = 16649,
  [SMALL_STATE(233)] = 16676,
  [SMALL_STATE(234)] = 16705,
  [SMALL_STATE(235)] = 16732,
  [SMALL_STATE(236)] = 16761,
  [SMALL_STATE(237)] = 16788,
  [SMALL_STATE(238)] = 16817,
  [SMALL_STATE(239)] = 16844,
  [SMALL_STATE(240)] = 16871,
  [SMALL_STATE(241)] = 16900,
  [SMALL_STATE(242)] = 16927,
  [SMALL_STATE(243)] = 16956,
  [SMALL_STATE(244)] = 16984,
  [SMALL_STATE(245)] = 17012,
  [SMALL_STATE(246)] = 17040,
  [SMALL_STATE(247)] = 17068,
  [SMALL_STATE(248)] = 17098,
  [SMALL_STATE(249)] = 17124,
  [SMALL_STATE(250)] = 17152,
  [SMALL_STATE(251)] = 17176,
  [SMALL_STATE(252)] = 17200,
  [SMALL_STATE(253)] = 17224,
  [SMALL_STATE(254)] = 17248,
  [SMALL_STATE(255)] = 17272,
  [SMALL_STATE(256)] = 17296,
  [SMALL_STATE(257)] = 17320,
  [SMALL_STATE(258)] = 17344,
  [SMALL_STATE(259)] = 17368,
  [SMALL_STATE(260)] = 17392,
  [SMALL_STATE(261)] = 17418,
  [SMALL_STATE(262)] = 17442,
  [SMALL_STATE(263)] = 17468,
  [SMALL_STATE(264)] = 17494,
  [SMALL_STATE(265)] = 17520,
  [SMALL_STATE(266)] = 17546,
  [SMALL_STATE(267)] = 17570,
  [SMALL_STATE(268)] = 17596,
  [SMALL_STATE(269)] = 17620,
  [SMALL_STATE(270)] = 17646,
  [SMALL_STATE(271)] = 17670,
  [SMALL_STATE(272)] = 17696,
  [SMALL_STATE(273)] = 17722,
  [SMALL_STATE(274)] = 17746,
  [SMALL_STATE(275)] = 17772,
  [SMALL_STATE(276)] = 17798,
  [SMALL_STATE(277)] = 17824,
  [SMALL_STATE(278)] = 17848,
  [SMALL_STATE(279)] = 17874,
  [SMALL_STATE(280)] = 17898,
  [SMALL_STATE(281)] = 17924,
  [SMALL_STATE(282)] = 17950,
  [SMALL_STATE(283)] = 17976,
  [SMALL_STATE(284)] = 18000,
  [SMALL_STATE(285)] = 18026,
  [SMALL_STATE(286)] = 18070,
  [SMALL_STATE(287)] = 18096,
  [SMALL_STATE(288)] = 18122,
  [SMALL_STATE(289)] = 18148,
  [SMALL_STATE(290)] = 18174,
  [SMALL_STATE(291)] = 18198,
  [SMALL_STATE(292)] = 18222,
  [SMALL_STATE(293)] = 18246,
  [SMALL_STATE(294)] = 18272,
  [SMALL_STATE(295)] = 18298,
  [SMALL_STATE(296)] = 18322,
  [SMALL_STATE(297)] = 18348,
  [SMALL_STATE(298)] = 18374,
  [SMALL_STATE(299)] = 18400,
  [SMALL_STATE(300)] = 18426,
  [SMALL_STATE(301)] = 18452,
  [SMALL_STATE(302)] = 18478,
  [SMALL_STATE(303)] = 18504,
  [SMALL_STATE(304)] = 18528,
  [SMALL_STATE(305)] = 18553,
  [SMALL_STATE(306)] = 18577,
  [SMALL_STATE(307)] = 18599,
  [SMALL_STATE(308)] = 18621,
  [SMALL_STATE(309)] = 18647,
  [SMALL_STATE(310)] = 18673,
  [SMALL_STATE(311)] = 18695,
  [SMALL_STATE(312)] = 18717,
  [SMALL_STATE(313)] = 18739,
  [SMALL_STATE(314)] = 18761,
  [SMALL_STATE(315)] = 18783,
  [SMALL_STATE(316)] = 18807,
  [SMALL_STATE(317)] = 18829,
  [SMALL_STATE(318)] = 18853,
  [SMALL_STATE(319)] = 18875,
  [SMALL_STATE(320)] = 18899,
  [SMALL_STATE(321)] = 18921,
  [SMALL_STATE(322)] = 18945,
  [SMALL_STATE(323)] = 18967,
  [SMALL_STATE(324)] = 18989,
  [SMALL_STATE(325)] = 19013,
  [SMALL_STATE(326)] = 19035,
  [SMALL_STATE(327)] = 19059,
  [SMALL_STATE(328)] = 19081,
  [SMALL_STATE(329)] = 19105,
  [SMALL_STATE(330)] = 19139,
  [SMALL_STATE(331)] = 19163,
  [SMALL_STATE(332)] = 19185,
  [SMALL_STATE(333)] = 19209,
  [SMALL_STATE(334)] = 19235,
  [SMALL_STATE(335)] = 19261,
  [SMALL_STATE(336)] = 19283,
  [SMALL_STATE(337)] = 19305,
  [SMALL_STATE(338)] = 19327,
  [SMALL_STATE(339)] = 19349,
  [SMALL_STATE(340)] = 19371,
  [SMALL_STATE(341)] = 19393,
  [SMALL_STATE(342)] = 19415,
  [SMALL_STATE(343)] = 19439,
  [SMALL_STATE(344)] = 19463,
  [SMALL_STATE(345)] = 19487,
  [SMALL_STATE(346)] = 19511,
  [SMALL_STATE(347)] = 19535,
  [SMALL_STATE(348)] = 19559,
  [SMALL_STATE(349)] = 19583,
  [SMALL_STATE(350)] = 19607,
  [SMALL_STATE(351)] = 19631,
  [SMALL_STATE(352)] = 19653,
  [SMALL_STATE(353)] = 19686,
  [SMALL_STATE(354)] = 19711,
  [SMALL_STATE(355)] = 19736,
  [SMALL_STATE(356)] = 19761,
  [SMALL_STATE(357)] = 19780,
  [SMALL_STATE(358)] = 19804,
  [SMALL_STATE(359)] = 19826,
  [SMALL_STATE(360)] = 19850,
  [SMALL_STATE(361)] = 19874,
  [SMALL_STATE(362)] = 19898,
  [SMALL_STATE(363)] = 19918,
  [SMALL_STATE(364)] = 19942,
  [SMALL_STATE(365)] = 19960,
  [SMALL_STATE(366)] = 19984,
  [SMALL_STATE(367)] = 20003,
  [SMALL_STATE(368)] = 20017,
  [SMALL_STATE(369)] = 20041,
  [SMALL_STATE(370)] = 20055,
  [SMALL_STATE(371)] = 20075,
  [SMALL_STATE(372)] = 20089,
  [SMALL_STATE(373)] = 20109,
  [SMALL_STATE(374)] = 20133,
  [SMALL_STATE(375)] = 20151,
  [SMALL_STATE(376)] = 20165,
  [SMALL_STATE(377)] = 20189,
  [SMALL_STATE(378)] = 20203,
  [SMALL_STATE(379)] = 20227,
  [SMALL_STATE(380)] = 20248,
  [SMALL_STATE(381)] = 20265,
  [SMALL_STATE(382)] = 20282,
  [SMALL_STATE(383)] = 20295,
  [SMALL_STATE(384)] = 20310,
  [SMALL_STATE(385)] = 20323,
  [SMALL_STATE(386)] = 20336,
  [SMALL_STATE(387)] = 20352,
  [SMALL_STATE(388)] = 20370,
  [SMALL_STATE(389)] = 20386,
  [SMALL_STATE(390)] = 20400,
  [SMALL_STATE(391)] = 20418,
  [SMALL_STATE(392)] = 20436,
  [SMALL_STATE(393)] = 20454,
  [SMALL_STATE(394)] = 20472,
  [SMALL_STATE(395)] = 20488,
  [SMALL_STATE(396)] = 20502,
  [SMALL_STATE(397)] = 20520,
  [SMALL_STATE(398)] = 20538,
  [SMALL_STATE(399)] = 20556,
  [SMALL_STATE(400)] = 20567,
  [SMALL_STATE(401)] = 20586,
  [SMALL_STATE(402)] = 20603,
  [SMALL_STATE(403)] = 20620,
  [SMALL_STATE(404)] = 20639,
  [SMALL_STATE(405)] = 20650,
  [SMALL_STATE(406)] = 20661,
  [SMALL_STATE(407)] = 20672,
  [SMALL_STATE(408)] = 20683,
  [SMALL_STATE(409)] = 20696,
  [SMALL_STATE(410)] = 20707,
  [SMALL_STATE(411)] = 20718,
  [SMALL_STATE(412)] = 20737,
  [SMALL_STATE(413)] = 20754,
  [SMALL_STATE(414)] = 20773,
  [SMALL_STATE(415)] = 20790,
  [SMALL_STATE(416)] = 20809,
  [SMALL_STATE(417)] = 20826,
  [SMALL_STATE(418)] = 20843,
  [SMALL_STATE(419)] = 20860,
  [SMALL_STATE(420)] = 20871,
  [SMALL_STATE(421)] = 20888,
  [SMALL_STATE(422)] = 20899,
  [SMALL_STATE(423)] = 20916,
  [SMALL_STATE(424)] = 20927,
  [SMALL_STATE(425)] = 20938,
  [SMALL_STATE(426)] = 20955,
  [SMALL_STATE(427)] = 20972,
  [SMALL_STATE(428)] = 20983,
  [SMALL_STATE(429)] = 20998,
  [SMALL_STATE(430)] = 21009,
  [SMALL_STATE(431)] = 21020,
  [SMALL_STATE(432)] = 21035,
  [SMALL_STATE(433)] = 21046,
  [SMALL_STATE(434)] = 21061,
  [SMALL_STATE(435)] = 21072,
  [SMALL_STATE(436)] = 21083,
  [SMALL_STATE(437)] = 21094,
  [SMALL_STATE(438)] = 21105,
  [SMALL_STATE(439)] = 21119,
  [SMALL_STATE(440)] = 21131,
  [SMALL_STATE(441)] = 21141,
  [SMALL_STATE(442)] = 21151,
  [SMALL_STATE(443)] = 21165,
  [SMALL_STATE(444)] = 21181,
  [SMALL_STATE(445)] = 21193,
  [SMALL_STATE(446)] = 21207,
  [SMALL_STATE(447)] = 21221,
  [SMALL_STATE(448)] = 21235,
  [SMALL_STATE(449)] = 21249,
  [SMALL_STATE(450)] = 21263,
  [SMALL_STATE(451)] = 21273,
  [SMALL_STATE(452)] = 21284,
  [SMALL_STATE(453)] = 21295,
  [SMALL_STATE(454)] = 21308,
  [SMALL_STATE(455)] = 21321,
  [SMALL_STATE(456)] = 21332,
  [SMALL_STATE(457)] = 21345,
  [SMALL_STATE(458)] = 21354,
  [SMALL_STATE(459)] = 21365,
  [SMALL_STATE(460)] = 21376,
  [SMALL_STATE(461)] = 21389,
  [SMALL_STATE(462)] = 21400,
  [SMALL_STATE(463)] = 21411,
  [SMALL_STATE(464)] = 21424,
  [SMALL_STATE(465)] = 21435,
  [SMALL_STATE(466)] = 21448,
  [SMALL_STATE(467)] = 21459,
  [SMALL_STATE(468)] = 21468,
  [SMALL_STATE(469)] = 21479,
  [SMALL_STATE(470)] = 21490,
  [SMALL_STATE(471)] = 21501,
  [SMALL_STATE(472)] = 21512,
  [SMALL_STATE(473)] = 21520,
  [SMALL_STATE(474)] = 21528,
  [SMALL_STATE(475)] = 21536,
  [SMALL_STATE(476)] = 21544,
  [SMALL_STATE(477)] = 21554,
  [SMALL_STATE(478)] = 21562,
  [SMALL_STATE(479)] = 21570,
  [SMALL_STATE(480)] = 21578,
  [SMALL_STATE(481)] = 21586,
  [SMALL_STATE(482)] = 21594,
  [SMALL_STATE(483)] = 21602,
  [SMALL_STATE(484)] = 21612,
  [SMALL_STATE(485)] = 21622,
  [SMALL_STATE(486)] = 21630,
  [SMALL_STATE(487)] = 21638,
  [SMALL_STATE(488)] = 21646,
  [SMALL_STATE(489)] = 21654,
  [SMALL_STATE(490)] = 21662,
  [SMALL_STATE(491)] = 21670,
  [SMALL_STATE(492)] = 21678,
  [SMALL_STATE(493)] = 21688,
  [SMALL_STATE(494)] = 21698,
  [SMALL_STATE(495)] = 21706,
  [SMALL_STATE(496)] = 21714,
  [SMALL_STATE(497)] = 21722,
  [SMALL_STATE(498)] = 21730,
  [SMALL_STATE(499)] = 21738,
  [SMALL_STATE(500)] = 21748,
  [SMALL_STATE(501)] = 21756,
  [SMALL_STATE(502)] = 21764,
  [SMALL_STATE(503)] = 21772,
  [SMALL_STATE(504)] = 21780,
  [SMALL_STATE(505)] = 21788,
  [SMALL_STATE(506)] = 21796,
  [SMALL_STATE(507)] = 21804,
  [SMALL_STATE(508)] = 21812,
  [SMALL_STATE(509)] = 21822,
  [SMALL_STATE(510)] = 21832,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 2, 0, 4),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_operands, 3, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_operands, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_directive, 2, 0, 4),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__numeric_directive, 2, 0, 4),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_operands, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_operands, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_operands, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_operands, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat2, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat2, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(476),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(499),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(395),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(508),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(389),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(378),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2, 0, 9),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 3, 0, 15),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 1, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label, 1, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 2, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label, 2, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 16),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 3, 0, 16),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal, 1, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_label_reference, 1, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_label_reference, 1, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 11),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 11),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 11),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 11),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 11),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 11),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 11),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 11),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 11),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 11),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 11),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 11),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 11),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 11),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 11),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 11),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assignment_expression, 3, 0, 22),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__assignment_expression, 3, 0, 22),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 11),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 11),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_multiplicative_expression, 1, 0, 11),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_multiplicative_expression, 1, 0, 11),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 14),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, 0, 14),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 18),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 3, 0, 18),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 19),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 19),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logical_or_expression, 3, 0, 22),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__logical_or_expression, 3, 0, 22),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logical_and_expression, 3, 0, 22),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__logical_and_expression, 3, 0, 22),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitwise_or_expression, 3, 0, 22),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitwise_or_expression, 3, 0, 22),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitwise_xor_expression, 3, 0, 22),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitwise_xor_expression, 3, 0, 22),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitwise_and_expression, 3, 0, 22),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitwise_and_expression, 3, 0, 22),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__equality_expression, 3, 0, 22),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__equality_expression, 3, 0, 22),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relational_expression, 3, 0, 22),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__relational_expression, 3, 0, 22),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shift_expression, 3, 0, 22),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shift_expression, 3, 0, 22),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__additive_expression, 3, 0, 22),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__additive_expression, 3, 0, 22),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiplicative_expression, 3, 0, 22),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiplicative_expression, 3, 0, 22),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relocation_expression, 4, 0, 23),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relocation_expression, 4, 0, 23),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 4, 0, 24),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 4, 0, 24),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 4, 0, 25),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 4, 0, 25),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 11),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 11),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 3, 0, 16),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_operand, 1, 0, 0),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_operand, 1, 0, 0),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_expression, 1, 0, 0),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_expression, 1, 0, 0),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_operands, 1, 0, 0),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_operands, 1, 0, 0),
  [589] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_numeric_operands, 1, 0, 0), SHIFT(467),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [596] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_numeric_operands, 1, 0, 0), SHIFT(439),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 3, 0, 0),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 3, 0, 0),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 4, 0, 0),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 4, 0, 0),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0),
  [659] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(467),
  [662] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [665] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [668] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(439),
  [671] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat2, 2, 0, 0),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat2, 2, 0, 0),
  [678] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat2, 2, 0, 0), SHIFT_REPEAT(353),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_directive, 3, 0, 4),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__numeric_directive, 3, 0, 4),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0),
  [691] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_directive, 4, 0, 12),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__numeric_directive, 4, 0, 12),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_operands, 1, 0, 0),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_operand, 1, 0, 0),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__numeric_directive_repeat1, 2, 0, 0),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__numeric_directive_repeat1, 2, 0, 0),
  [714] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__numeric_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(363),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_directive, 3, 0, 12),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__numeric_directive, 3, 0, 12),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_flag, 1, 0, 0),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_parameters, 2, 0, 0),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_parameters, 2, 0, 0),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_type, 1, 0, 0),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 1, 0, 9),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2, 0, 15),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_parameters, 1, 0, 0),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_parameters, 1, 0, 0),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 21),
  [755] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 21), SHIFT_REPEAT(32),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0),
  [764] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(454),
  [767] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(483),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 1),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 1),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 3, 0, 7),
  [784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 3, 0, 7),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 3, 0, 0),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 3, 0, 0),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 20),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [798] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(212),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_mnemonic, 1, 0, 0),
  [805] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_mnemonic, 1, 0, 0),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_directive, 1, 0, 4),
  [809] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__numeric_directive, 1, 0, 4),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_directive, 3, 0, 13),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_directive, 3, 0, 13),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 1, 0, 4),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_directive, 1, 0, 4),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [829] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(259),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_mnemonic, 1, 0, 0),
  [836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_mnemonic, 1, 0, 0),
  [838] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(140),
  [841] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(339),
  [844] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(184),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 17),
  [849] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_macro_parameters, 1, 0, 0), SHIFT(460),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 8, 0, 26),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 3, 0, 12),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 2, 0, 0),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 5, 0, 17),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 5, 0, 7),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 7),
  [880] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_macro_parameters, 2, 0, 0), SHIFT(460),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [893] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [895] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(460),
  [898] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(492),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 17),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_directive, 4, 0, 13),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 5),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 3),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [925] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [927] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(426),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 8),
  [932] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 21), SHIFT_REPEAT(35),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 6),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 7),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 2),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 10),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 26),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [959] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [971] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [975] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [977] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 0),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [995] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [999] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [1003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1037] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1055] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_mnemonic, 1, 0, 0),
  [1075] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_mnemonic, 1, 0, 0),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1079] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
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
