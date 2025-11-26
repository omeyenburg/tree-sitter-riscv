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
#define STATE_COUNT 510
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
  [19] = 17,
  [20] = 18,
  [21] = 12,
  [22] = 18,
  [23] = 13,
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
  [155] = 146,
  [156] = 132,
  [157] = 113,
  [158] = 114,
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
  [169] = 126,
  [170] = 127,
  [171] = 128,
  [172] = 129,
  [173] = 130,
  [174] = 131,
  [175] = 154,
  [176] = 133,
  [177] = 134,
  [178] = 135,
  [179] = 112,
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
  [190] = 147,
  [191] = 148,
  [192] = 149,
  [193] = 150,
  [194] = 151,
  [195] = 152,
  [196] = 153,
  [197] = 115,
  [198] = 146,
  [199] = 118,
  [200] = 119,
  [201] = 138,
  [202] = 120,
  [203] = 121,
  [204] = 122,
  [205] = 123,
  [206] = 124,
  [207] = 125,
  [208] = 126,
  [209] = 127,
  [210] = 210,
  [211] = 139,
  [212] = 140,
  [213] = 114,
  [214] = 141,
  [215] = 142,
  [216] = 143,
  [217] = 144,
  [218] = 145,
  [219] = 117,
  [220] = 148,
  [221] = 149,
  [222] = 150,
  [223] = 115,
  [224] = 137,
  [225] = 151,
  [226] = 152,
  [227] = 153,
  [228] = 116,
  [229] = 128,
  [230] = 129,
  [231] = 130,
  [232] = 131,
  [233] = 154,
  [234] = 133,
  [235] = 134,
  [236] = 135,
  [237] = 113,
  [238] = 112,
  [239] = 136,
  [240] = 132,
  [241] = 147,
  [242] = 152,
  [243] = 153,
  [244] = 113,
  [245] = 138,
  [246] = 246,
  [247] = 247,
  [248] = 137,
  [249] = 151,
  [250] = 152,
  [251] = 114,
  [252] = 115,
  [253] = 153,
  [254] = 116,
  [255] = 117,
  [256] = 112,
  [257] = 138,
  [258] = 139,
  [259] = 247,
  [260] = 140,
  [261] = 136,
  [262] = 141,
  [263] = 142,
  [264] = 143,
  [265] = 118,
  [266] = 119,
  [267] = 120,
  [268] = 121,
  [269] = 122,
  [270] = 270,
  [271] = 123,
  [272] = 124,
  [273] = 125,
  [274] = 135,
  [275] = 127,
  [276] = 128,
  [277] = 129,
  [278] = 130,
  [279] = 144,
  [280] = 247,
  [281] = 131,
  [282] = 154,
  [283] = 133,
  [284] = 284,
  [285] = 145,
  [286] = 146,
  [287] = 147,
  [288] = 148,
  [289] = 113,
  [290] = 132,
  [291] = 134,
  [292] = 149,
  [293] = 270,
  [294] = 150,
  [295] = 270,
  [296] = 247,
  [297] = 270,
  [298] = 247,
  [299] = 270,
  [300] = 247,
  [301] = 270,
  [302] = 126,
  [303] = 132,
  [304] = 127,
  [305] = 150,
  [306] = 151,
  [307] = 307,
  [308] = 308,
  [309] = 114,
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
  [322] = 128,
  [323] = 129,
  [324] = 130,
  [325] = 131,
  [326] = 154,
  [327] = 133,
  [328] = 328,
  [329] = 135,
  [330] = 112,
  [331] = 136,
  [332] = 137,
  [333] = 333,
  [334] = 138,
  [335] = 113,
  [336] = 152,
  [337] = 153,
  [338] = 139,
  [339] = 140,
  [340] = 132,
  [341] = 141,
  [342] = 142,
  [343] = 143,
  [344] = 144,
  [345] = 145,
  [346] = 146,
  [347] = 147,
  [348] = 148,
  [349] = 149,
  [350] = 134,
  [351] = 351,
  [352] = 352,
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
  [363] = 132,
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
  [378] = 378,
  [379] = 379,
  [380] = 374,
  [381] = 381,
  [382] = 382,
  [383] = 132,
  [384] = 376,
  [385] = 376,
  [386] = 365,
  [387] = 387,
  [388] = 388,
  [389] = 387,
  [390] = 374,
  [391] = 391,
  [392] = 387,
  [393] = 393,
  [394] = 394,
  [395] = 387,
  [396] = 387,
  [397] = 397,
  [398] = 367,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 132,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 375,
  [412] = 412,
  [413] = 410,
  [414] = 414,
  [415] = 408,
  [416] = 416,
  [417] = 373,
  [418] = 410,
  [419] = 419,
  [420] = 372,
  [421] = 408,
  [422] = 408,
  [423] = 369,
  [424] = 410,
  [425] = 425,
  [426] = 371,
  [427] = 427,
  [428] = 428,
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
  [439] = 438,
  [440] = 379,
  [441] = 376,
  [442] = 442,
  [443] = 381,
  [444] = 382,
  [445] = 438,
  [446] = 446,
  [447] = 438,
  [448] = 438,
  [449] = 374,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 451,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 450,
  [459] = 453,
  [460] = 450,
  [461] = 461,
  [462] = 462,
  [463] = 450,
  [464] = 464,
  [465] = 450,
  [466] = 466,
  [467] = 451,
  [468] = 451,
  [469] = 451,
  [470] = 451,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 473,
  [476] = 474,
  [477] = 471,
  [478] = 478,
  [479] = 474,
  [480] = 480,
  [481] = 471,
  [482] = 482,
  [483] = 483,
  [484] = 471,
  [485] = 471,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 474,
  [491] = 491,
  [492] = 492,
  [493] = 473,
  [494] = 473,
  [495] = 492,
  [496] = 474,
  [497] = 497,
  [498] = 474,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 500,
  [503] = 500,
  [504] = 500,
  [505] = 471,
  [506] = 500,
  [507] = 507,
  [508] = 473,
  [509] = 482,
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
  [5] = {.lex_state = 80, .external_lex_state = 4},
  [6] = {.lex_state = 80, .external_lex_state = 3},
  [7] = {.lex_state = 80, .external_lex_state = 4},
  [8] = {.lex_state = 80, .external_lex_state = 4},
  [9] = {.lex_state = 99, .external_lex_state = 3},
  [10] = {.lex_state = 84, .external_lex_state = 2},
  [11] = {.lex_state = 84, .external_lex_state = 2},
  [12] = {.lex_state = 99, .external_lex_state = 3},
  [13] = {.lex_state = 99, .external_lex_state = 3},
  [14] = {.lex_state = 100, .external_lex_state = 2},
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
  [31] = {.lex_state = 99, .external_lex_state = 5},
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
  [104] = {.lex_state = 99, .external_lex_state = 2},
  [105] = {.lex_state = 99, .external_lex_state = 2},
  [106] = {.lex_state = 99, .external_lex_state = 2},
  [107] = {.lex_state = 99, .external_lex_state = 2},
  [108] = {.lex_state = 87, .external_lex_state = 2},
  [109] = {.lex_state = 84, .external_lex_state = 2},
  [110] = {.lex_state = 84, .external_lex_state = 2},
  [111] = {.lex_state = 84, .external_lex_state = 2},
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
  [151] = {.lex_state = 81, .external_lex_state = 1},
  [152] = {.lex_state = 81, .external_lex_state = 1},
  [153] = {.lex_state = 81, .external_lex_state = 1},
  [154] = {.lex_state = 81, .external_lex_state = 1},
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
  [194] = {.lex_state = 103, .external_lex_state = 1},
  [195] = {.lex_state = 103, .external_lex_state = 1},
  [196] = {.lex_state = 103, .external_lex_state = 1},
  [197] = {.lex_state = 103, .external_lex_state = 1},
  [198] = {.lex_state = 102, .external_lex_state = 6},
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
  [242] = {.lex_state = 101, .external_lex_state = 3},
  [243] = {.lex_state = 101, .external_lex_state = 3},
  [244] = {.lex_state = 101, .external_lex_state = 3},
  [245] = {.lex_state = 101, .external_lex_state = 3},
  [246] = {.lex_state = 101, .external_lex_state = 3},
  [247] = {.lex_state = 26, .external_lex_state = 7},
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
  [284] = {.lex_state = 80, .external_lex_state = 1},
  [285] = {.lex_state = 26, .external_lex_state = 7},
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
  [303] = {.lex_state = 80, .external_lex_state = 1},
  [304] = {.lex_state = 26, .external_lex_state = 2},
  [305] = {.lex_state = 26, .external_lex_state = 2},
  [306] = {.lex_state = 26, .external_lex_state = 2},
  [307] = {.lex_state = 80, .external_lex_state = 1},
  [308] = {.lex_state = 80, .external_lex_state = 1},
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
  [326] = {.lex_state = 26, .external_lex_state = 2},
  [327] = {.lex_state = 26, .external_lex_state = 2},
  [328] = {.lex_state = 80, .external_lex_state = 1},
  [329] = {.lex_state = 26, .external_lex_state = 2},
  [330] = {.lex_state = 26, .external_lex_state = 2},
  [331] = {.lex_state = 26, .external_lex_state = 2},
  [332] = {.lex_state = 26, .external_lex_state = 2},
  [333] = {.lex_state = 80, .external_lex_state = 1},
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
  [347] = {.lex_state = 26, .external_lex_state = 2},
  [348] = {.lex_state = 26, .external_lex_state = 2},
  [349] = {.lex_state = 26, .external_lex_state = 2},
  [350] = {.lex_state = 26, .external_lex_state = 2},
  [351] = {.lex_state = 80, .external_lex_state = 1},
  [352] = {.lex_state = 80, .external_lex_state = 4},
  [353] = {.lex_state = 80, .external_lex_state = 4},
  [354] = {.lex_state = 80, .external_lex_state = 4},
  [355] = {.lex_state = 100, .external_lex_state = 1},
  [356] = {.lex_state = 80, .external_lex_state = 3},
  [357] = {.lex_state = 100, .external_lex_state = 1},
  [358] = {.lex_state = 80, .external_lex_state = 3},
  [359] = {.lex_state = 100, .external_lex_state = 1},
  [360] = {.lex_state = 100, .external_lex_state = 1},
  [361] = {.lex_state = 100, .external_lex_state = 1},
  [362] = {.lex_state = 80, .external_lex_state = 3},
  [363] = {.lex_state = 0, .external_lex_state = 6},
  [364] = {.lex_state = 80, .external_lex_state = 3},
  [365] = {.lex_state = 0, .external_lex_state = 6},
  [366] = {.lex_state = 100, .external_lex_state = 1},
  [367] = {.lex_state = 101, .external_lex_state = 3},
  [368] = {.lex_state = 100, .external_lex_state = 1},
  [369] = {.lex_state = 0, .external_lex_state = 6},
  [370] = {.lex_state = 100, .external_lex_state = 1},
  [371] = {.lex_state = 0, .external_lex_state = 6},
  [372] = {.lex_state = 101, .external_lex_state = 3},
  [373] = {.lex_state = 0, .external_lex_state = 6},
  [374] = {.lex_state = 100, .external_lex_state = 1},
  [375] = {.lex_state = 101, .external_lex_state = 3},
  [376] = {.lex_state = 100, .external_lex_state = 1},
  [377] = {.lex_state = 101, .external_lex_state = 3},
  [378] = {.lex_state = 101, .external_lex_state = 3},
  [379] = {.lex_state = 101, .external_lex_state = 3},
  [380] = {.lex_state = 0, .external_lex_state = 6},
  [381] = {.lex_state = 101, .external_lex_state = 3},
  [382] = {.lex_state = 0, .external_lex_state = 6},
  [383] = {.lex_state = 0, .external_lex_state = 7},
  [384] = {.lex_state = 0, .external_lex_state = 6},
  [385] = {.lex_state = 101, .external_lex_state = 3},
  [386] = {.lex_state = 0, .external_lex_state = 7},
  [387] = {.lex_state = 0, .external_lex_state = 7},
  [388] = {.lex_state = 101, .external_lex_state = 3},
  [389] = {.lex_state = 0, .external_lex_state = 7},
  [390] = {.lex_state = 101, .external_lex_state = 3},
  [391] = {.lex_state = 101, .external_lex_state = 3},
  [392] = {.lex_state = 0, .external_lex_state = 7},
  [393] = {.lex_state = 101, .external_lex_state = 3},
  [394] = {.lex_state = 101, .external_lex_state = 3},
  [395] = {.lex_state = 0, .external_lex_state = 7},
  [396] = {.lex_state = 0, .external_lex_state = 7},
  [397] = {.lex_state = 101, .external_lex_state = 3},
  [398] = {.lex_state = 101, .external_lex_state = 2},
  [399] = {.lex_state = 0, .external_lex_state = 3},
  [400] = {.lex_state = 0, .external_lex_state = 3},
  [401] = {.lex_state = 0, .external_lex_state = 3},
  [402] = {.lex_state = 0, .external_lex_state = 2},
  [403] = {.lex_state = 0, .external_lex_state = 3},
  [404] = {.lex_state = 0, .external_lex_state = 3},
  [405] = {.lex_state = 0, .external_lex_state = 3},
  [406] = {.lex_state = 0, .external_lex_state = 3},
  [407] = {.lex_state = 0, .external_lex_state = 3},
  [408] = {.lex_state = 27, .external_lex_state = 2},
  [409] = {.lex_state = 29, .external_lex_state = 2},
  [410] = {.lex_state = 27, .external_lex_state = 2},
  [411] = {.lex_state = 101, .external_lex_state = 2},
  [412] = {.lex_state = 0, .external_lex_state = 3},
  [413] = {.lex_state = 27, .external_lex_state = 2},
  [414] = {.lex_state = 0, .external_lex_state = 3},
  [415] = {.lex_state = 27, .external_lex_state = 2},
  [416] = {.lex_state = 0, .external_lex_state = 3},
  [417] = {.lex_state = 0, .external_lex_state = 7},
  [418] = {.lex_state = 27, .external_lex_state = 2},
  [419] = {.lex_state = 0, .external_lex_state = 3},
  [420] = {.lex_state = 101, .external_lex_state = 2},
  [421] = {.lex_state = 27, .external_lex_state = 2},
  [422] = {.lex_state = 27, .external_lex_state = 2},
  [423] = {.lex_state = 0, .external_lex_state = 7},
  [424] = {.lex_state = 27, .external_lex_state = 2},
  [425] = {.lex_state = 29, .external_lex_state = 2},
  [426] = {.lex_state = 0, .external_lex_state = 7},
  [427] = {.lex_state = 0, .external_lex_state = 3},
  [428] = {.lex_state = 0, .external_lex_state = 3},
  [429] = {.lex_state = 0, .external_lex_state = 3},
  [430] = {.lex_state = 0, .external_lex_state = 3},
  [431] = {.lex_state = 0, .external_lex_state = 3},
  [432] = {.lex_state = 0, .external_lex_state = 3},
  [433] = {.lex_state = 0, .external_lex_state = 3},
  [434] = {.lex_state = 0, .external_lex_state = 3},
  [435] = {.lex_state = 0, .external_lex_state = 3},
  [436] = {.lex_state = 27, .external_lex_state = 2},
  [437] = {.lex_state = 0, .external_lex_state = 5},
  [438] = {.lex_state = 0, .external_lex_state = 2},
  [439] = {.lex_state = 0, .external_lex_state = 2},
  [440] = {.lex_state = 101, .external_lex_state = 2},
  [441] = {.lex_state = 0, .external_lex_state = 7},
  [442] = {.lex_state = 28, .external_lex_state = 2},
  [443] = {.lex_state = 101, .external_lex_state = 2},
  [444] = {.lex_state = 0, .external_lex_state = 7},
  [445] = {.lex_state = 0, .external_lex_state = 2},
  [446] = {.lex_state = 0, .external_lex_state = 3},
  [447] = {.lex_state = 0, .external_lex_state = 2},
  [448] = {.lex_state = 0, .external_lex_state = 2},
  [449] = {.lex_state = 0, .external_lex_state = 7},
  [450] = {.lex_state = 36, .external_lex_state = 2},
  [451] = {.lex_state = 0, .external_lex_state = 2},
  [452] = {.lex_state = 101, .external_lex_state = 2},
  [453] = {.lex_state = 28, .external_lex_state = 2},
  [454] = {.lex_state = 0, .external_lex_state = 2},
  [455] = {.lex_state = 101, .external_lex_state = 2},
  [456] = {.lex_state = 0, .external_lex_state = 5},
  [457] = {.lex_state = 0, .external_lex_state = 3},
  [458] = {.lex_state = 36, .external_lex_state = 2},
  [459] = {.lex_state = 28, .external_lex_state = 2},
  [460] = {.lex_state = 36, .external_lex_state = 2},
  [461] = {.lex_state = 0, .external_lex_state = 3},
  [462] = {.lex_state = 98, .external_lex_state = 2},
  [463] = {.lex_state = 36, .external_lex_state = 2},
  [464] = {.lex_state = 98, .external_lex_state = 2},
  [465] = {.lex_state = 36, .external_lex_state = 2},
  [466] = {.lex_state = 0, .external_lex_state = 5},
  [467] = {.lex_state = 0, .external_lex_state = 2},
  [468] = {.lex_state = 0, .external_lex_state = 2},
  [469] = {.lex_state = 0, .external_lex_state = 2},
  [470] = {.lex_state = 0, .external_lex_state = 2},
  [471] = {.lex_state = 0, .external_lex_state = 2},
  [472] = {.lex_state = 101, .external_lex_state = 2},
  [473] = {.lex_state = 0, .external_lex_state = 2},
  [474] = {.lex_state = 0, .external_lex_state = 2},
  [475] = {.lex_state = 0, .external_lex_state = 2},
  [476] = {.lex_state = 0, .external_lex_state = 2},
  [477] = {.lex_state = 0, .external_lex_state = 2},
  [478] = {.lex_state = 0, .external_lex_state = 2},
  [479] = {.lex_state = 0, .external_lex_state = 2},
  [480] = {.lex_state = 98, .external_lex_state = 2},
  [481] = {.lex_state = 0, .external_lex_state = 2},
  [482] = {.lex_state = 28, .external_lex_state = 2},
  [483] = {.lex_state = 101, .external_lex_state = 2},
  [484] = {.lex_state = 0, .external_lex_state = 2},
  [485] = {.lex_state = 0, .external_lex_state = 2},
  [486] = {.lex_state = 0, .external_lex_state = 3},
  [487] = {.lex_state = 0, .external_lex_state = 2},
  [488] = {.lex_state = 0, .external_lex_state = 2},
  [489] = {.lex_state = 0, .external_lex_state = 2},
  [490] = {.lex_state = 0, .external_lex_state = 2},
  [491] = {.lex_state = 0, .external_lex_state = 2},
  [492] = {.lex_state = 28, .external_lex_state = 2},
  [493] = {.lex_state = 0, .external_lex_state = 2},
  [494] = {.lex_state = 0, .external_lex_state = 2},
  [495] = {.lex_state = 28, .external_lex_state = 2},
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
  [507] = {.lex_state = 103, .external_lex_state = 2},
  [508] = {.lex_state = 0, .external_lex_state = 2},
  [509] = {.lex_state = 28, .external_lex_state = 2},
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
    [sym_program] = STATE(491),
    [sym__statement] = STATE(10),
    [sym_directive] = STATE(431),
    [sym__macro_directive] = STATE(435),
    [sym__numeric_directive] = STATE(428),
    [sym_numeric_mnemonic] = STATE(394),
    [sym__string_directive] = STATE(399),
    [sym_string_mnemonic] = STATE(472),
    [sym__control_directive] = STATE(407),
    [sym_control_mnemonic] = STATE(391),
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
    STATE(160), 1,
      sym__assignment_expression,
    STATE(161), 1,
      sym__logical_or_expression,
    STATE(162), 1,
      sym__wrapped_logical_or_expression,
    STATE(163), 1,
      sym__logical_and_expression,
    STATE(164), 1,
      sym__wrapped_logical_and_expression,
    STATE(165), 1,
      sym__bitwise_or_expression,
    STATE(166), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(167), 1,
      sym__bitwise_xor_expression,
    STATE(168), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(169), 1,
      sym__bitwise_and_expression,
    STATE(170), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(171), 1,
      sym__equality_expression,
    STATE(172), 1,
      sym__wrapped_equality_expression,
    STATE(173), 1,
      sym__relational_expression,
    STATE(174), 1,
      sym__wrapped_relational_expression,
    STATE(175), 1,
      sym__shift_expression,
    STATE(176), 1,
      sym__wrapped_shift_expression,
    STATE(177), 1,
      sym__additive_expression,
    STATE(178), 1,
      sym__wrapped_additive_expression,
    STATE(179), 1,
      sym__multiplicative_expression,
    STATE(361), 1,
      sym__wrapped_assignment_expression,
    STATE(414), 1,
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
    STATE(360), 4,
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
    STATE(180), 10,
      sym__wrapped_multiplicative_expression,
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
    STATE(160), 1,
      sym__assignment_expression,
    STATE(161), 1,
      sym__logical_or_expression,
    STATE(162), 1,
      sym__wrapped_logical_or_expression,
    STATE(163), 1,
      sym__logical_and_expression,
    STATE(164), 1,
      sym__wrapped_logical_and_expression,
    STATE(165), 1,
      sym__bitwise_or_expression,
    STATE(166), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(167), 1,
      sym__bitwise_xor_expression,
    STATE(168), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(169), 1,
      sym__bitwise_and_expression,
    STATE(170), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(171), 1,
      sym__equality_expression,
    STATE(172), 1,
      sym__wrapped_equality_expression,
    STATE(173), 1,
      sym__relational_expression,
    STATE(174), 1,
      sym__wrapped_relational_expression,
    STATE(175), 1,
      sym__shift_expression,
    STATE(176), 1,
      sym__wrapped_shift_expression,
    STATE(177), 1,
      sym__additive_expression,
    STATE(178), 1,
      sym__wrapped_additive_expression,
    STATE(179), 1,
      sym__multiplicative_expression,
    STATE(361), 1,
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
    STATE(370), 4,
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
    STATE(180), 10,
      sym__wrapped_multiplicative_expression,
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
    STATE(160), 1,
      sym__assignment_expression,
    STATE(161), 1,
      sym__logical_or_expression,
    STATE(162), 1,
      sym__wrapped_logical_or_expression,
    STATE(163), 1,
      sym__logical_and_expression,
    STATE(164), 1,
      sym__wrapped_logical_and_expression,
    STATE(165), 1,
      sym__bitwise_or_expression,
    STATE(166), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(167), 1,
      sym__bitwise_xor_expression,
    STATE(168), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(169), 1,
      sym__bitwise_and_expression,
    STATE(170), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(171), 1,
      sym__equality_expression,
    STATE(172), 1,
      sym__wrapped_equality_expression,
    STATE(173), 1,
      sym__relational_expression,
    STATE(174), 1,
      sym__wrapped_relational_expression,
    STATE(175), 1,
      sym__shift_expression,
    STATE(176), 1,
      sym__wrapped_shift_expression,
    STATE(177), 1,
      sym__additive_expression,
    STATE(178), 1,
      sym__wrapped_additive_expression,
    STATE(179), 1,
      sym__multiplicative_expression,
    STATE(361), 1,
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
    STATE(370), 4,
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
    STATE(180), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [414] = 36,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_COMMA,
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
    ACTIONS(79), 1,
      sym__data_separator,
    STATE(112), 1,
      sym__multiplicative_expression,
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
      sym__wrapped_additive_expression,
    STATE(154), 1,
      sym__shift_expression,
    STATE(333), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(57), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(65), 3,
      sym_unary_minus_operator,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(59), 6,
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
  [546] = 37,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(61), 1,
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
    STATE(112), 1,
      sym__multiplicative_expression,
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
      sym__wrapped_additive_expression,
    STATE(154), 1,
      sym__shift_expression,
    STATE(284), 1,
      sym__wrapped_assignment_expression,
    STATE(356), 1,
      aux_sym__numeric_directive_repeat1,
    STATE(364), 1,
      sym_numeric_operands,
    ACTIONS(81), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(83), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(65), 3,
      sym_unary_minus_operator,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(85), 4,
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
  [680] = 36,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_COMMA,
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
    ACTIONS(79), 1,
      sym__data_separator,
    STATE(112), 1,
      sym__multiplicative_expression,
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
      sym__wrapped_additive_expression,
    STATE(154), 1,
      sym__shift_expression,
    STATE(333), 1,
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
  [812] = 34,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(61), 1,
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
    STATE(112), 1,
      sym__multiplicative_expression,
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
      sym__wrapped_additive_expression,
    STATE(154), 1,
      sym__shift_expression,
    STATE(333), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(65), 3,
      sym_unary_minus_operator,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(91), 3,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(93), 6,
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
  [939] = 38,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      sym_unary_minus_operator,
    ACTIONS(103), 1,
      sym_relocation_type,
    ACTIONS(109), 1,
      aux_sym_decimal_token1,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(117), 1,
      aux_sym_symbol_token1,
    STATE(199), 1,
      sym__logical_or_expression,
    STATE(200), 1,
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
    STATE(229), 1,
      sym__equality_expression,
    STATE(230), 1,
      sym__wrapped_equality_expression,
    STATE(231), 1,
      sym__relational_expression,
    STATE(232), 1,
      sym__wrapped_relational_expression,
    STATE(233), 1,
      sym__shift_expression,
    STATE(234), 1,
      sym__wrapped_shift_expression,
    STATE(235), 1,
      sym__additive_expression,
    STATE(236), 1,
      sym__wrapped_additive_expression,
    STATE(238), 1,
      sym__multiplicative_expression,
    STATE(365), 1,
      sym__wrapped_assignment_expression,
    STATE(427), 1,
      sym_operands,
    STATE(434), 1,
      sym__call_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(101), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(107), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(369), 2,
      sym__operand,
      sym_string,
    ACTIONS(95), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(105), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(239), 10,
      sym__wrapped_multiplicative_expression,
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
    STATE(391), 1,
      sym_control_mnemonic,
    STATE(394), 1,
      sym_numeric_mnemonic,
    STATE(399), 1,
      sym__string_directive,
    STATE(407), 1,
      sym__control_directive,
    STATE(428), 1,
      sym__numeric_directive,
    STATE(435), 1,
      sym__macro_directive,
    STATE(472), 1,
      sym_string_mnemonic,
    STATE(432), 2,
      sym_directive,
      sym_instruction,
    ACTIONS(121), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
    STATE(11), 3,
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
  [1172] = 20,
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
    STATE(391), 1,
      sym_control_mnemonic,
    STATE(394), 1,
      sym_numeric_mnemonic,
    STATE(399), 1,
      sym__string_directive,
    STATE(407), 1,
      sym__control_directive,
    STATE(428), 1,
      sym__numeric_directive,
    STATE(435), 1,
      sym__macro_directive,
    STATE(472), 1,
      sym_string_mnemonic,
    STATE(446), 2,
      sym_directive,
      sym_instruction,
    ACTIONS(127), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
    STATE(11), 3,
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
  [1270] = 36,
    ACTIONS(99), 1,
      sym_unary_minus_operator,
    ACTIONS(103), 1,
      sym_relocation_type,
    ACTIONS(109), 1,
      aux_sym_decimal_token1,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(117), 1,
      aux_sym_symbol_token1,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(199), 1,
      sym__logical_or_expression,
    STATE(200), 1,
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
    STATE(229), 1,
      sym__equality_expression,
    STATE(230), 1,
      sym__wrapped_equality_expression,
    STATE(231), 1,
      sym__relational_expression,
    STATE(232), 1,
      sym__wrapped_relational_expression,
    STATE(233), 1,
      sym__shift_expression,
    STATE(234), 1,
      sym__wrapped_shift_expression,
    STATE(235), 1,
      sym__additive_expression,
    STATE(236), 1,
      sym__wrapped_additive_expression,
    STATE(238), 1,
      sym__multiplicative_expression,
    STATE(365), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(101), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(107), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(382), 2,
      sym__operand,
      sym_string,
    ACTIONS(151), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(105), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(239), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1399] = 36,
    ACTIONS(99), 1,
      sym_unary_minus_operator,
    ACTIONS(103), 1,
      sym_relocation_type,
    ACTIONS(109), 1,
      aux_sym_decimal_token1,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(117), 1,
      aux_sym_symbol_token1,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(199), 1,
      sym__logical_or_expression,
    STATE(200), 1,
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
    STATE(229), 1,
      sym__equality_expression,
    STATE(230), 1,
      sym__wrapped_equality_expression,
    STATE(231), 1,
      sym__relational_expression,
    STATE(232), 1,
      sym__wrapped_relational_expression,
    STATE(233), 1,
      sym__shift_expression,
    STATE(234), 1,
      sym__wrapped_shift_expression,
    STATE(235), 1,
      sym__additive_expression,
    STATE(236), 1,
      sym__wrapped_additive_expression,
    STATE(238), 1,
      sym__multiplicative_expression,
    STATE(365), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(101), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(107), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(382), 2,
      sym__operand,
      sym_string,
    ACTIONS(155), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(105), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(239), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1528] = 37,
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
    STATE(160), 1,
      sym__assignment_expression,
    STATE(161), 1,
      sym__logical_or_expression,
    STATE(162), 1,
      sym__wrapped_logical_or_expression,
    STATE(163), 1,
      sym__logical_and_expression,
    STATE(164), 1,
      sym__wrapped_logical_and_expression,
    STATE(165), 1,
      sym__bitwise_or_expression,
    STATE(166), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(167), 1,
      sym__bitwise_xor_expression,
    STATE(168), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(169), 1,
      sym__bitwise_and_expression,
    STATE(170), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(171), 1,
      sym__equality_expression,
    STATE(172), 1,
      sym__wrapped_equality_expression,
    STATE(173), 1,
      sym__relational_expression,
    STATE(174), 1,
      sym__wrapped_relational_expression,
    STATE(175), 1,
      sym__shift_expression,
    STATE(176), 1,
      sym__wrapped_shift_expression,
    STATE(177), 1,
      sym__additive_expression,
    STATE(178), 1,
      sym__wrapped_additive_expression,
    STATE(179), 1,
      sym__multiplicative_expression,
    STATE(361), 1,
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
    STATE(370), 4,
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
    STATE(180), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1659] = 37,
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
    STATE(255), 1,
      sym__assignment_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(265), 1,
      sym__logical_or_expression,
    STATE(266), 1,
      sym__wrapped_logical_or_expression,
    STATE(267), 1,
      sym__logical_and_expression,
    STATE(268), 1,
      sym__wrapped_logical_and_expression,
    STATE(269), 1,
      sym__bitwise_or_expression,
    STATE(271), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(276), 1,
      sym__equality_expression,
    STATE(277), 1,
      sym__wrapped_equality_expression,
    STATE(278), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(291), 1,
      sym__additive_expression,
    STATE(302), 1,
      sym__bitwise_and_expression,
    STATE(386), 1,
      sym__wrapped_assignment_expression,
    STATE(501), 1,
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
    STATE(423), 2,
      sym__operand,
      sym_string,
    ACTIONS(167), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(261), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1788] = 39,
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
    STATE(255), 1,
      sym__assignment_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(265), 1,
      sym__logical_or_expression,
    STATE(266), 1,
      sym__wrapped_logical_or_expression,
    STATE(267), 1,
      sym__logical_and_expression,
    STATE(268), 1,
      sym__wrapped_logical_and_expression,
    STATE(269), 1,
      sym__bitwise_or_expression,
    STATE(270), 1,
      sym_symbol,
    STATE(271), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(276), 1,
      sym__equality_expression,
    STATE(277), 1,
      sym__wrapped_equality_expression,
    STATE(278), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(291), 1,
      sym__additive_expression,
    STATE(302), 1,
      sym__bitwise_and_expression,
    STATE(387), 1,
      sym__wrapped_assignment_expression,
    STATE(489), 1,
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
    STATE(423), 2,
      sym__operand,
      sym_string,
    ACTIONS(167), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(261), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1921] = 38,
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
    STATE(255), 1,
      sym__assignment_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(265), 1,
      sym__logical_or_expression,
    STATE(266), 1,
      sym__wrapped_logical_or_expression,
    STATE(267), 1,
      sym__logical_and_expression,
    STATE(268), 1,
      sym__wrapped_logical_and_expression,
    STATE(269), 1,
      sym__bitwise_or_expression,
    STATE(271), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(276), 1,
      sym__equality_expression,
    STATE(277), 1,
      sym__wrapped_equality_expression,
    STATE(278), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(291), 1,
      sym__additive_expression,
    STATE(296), 1,
      sym_symbol,
    STATE(302), 1,
      sym__bitwise_and_expression,
    STATE(386), 1,
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
    ACTIONS(183), 2,
      sym_register,
      sym_macro_variable,
    STATE(423), 2,
      sym__operand,
      sym_string,
    ACTIONS(167), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(261), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2051] = 38,
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
    STATE(255), 1,
      sym__assignment_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(265), 1,
      sym__logical_or_expression,
    STATE(266), 1,
      sym__wrapped_logical_or_expression,
    STATE(267), 1,
      sym__logical_and_expression,
    STATE(268), 1,
      sym__wrapped_logical_and_expression,
    STATE(269), 1,
      sym__bitwise_or_expression,
    STATE(271), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(276), 1,
      sym__equality_expression,
    STATE(277), 1,
      sym__wrapped_equality_expression,
    STATE(278), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(291), 1,
      sym__additive_expression,
    STATE(293), 1,
      sym_symbol,
    STATE(302), 1,
      sym__bitwise_and_expression,
    STATE(389), 1,
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
    ACTIONS(185), 2,
      sym_register,
      sym_macro_variable,
    STATE(423), 2,
      sym__operand,
      sym_string,
    ACTIONS(167), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(261), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2181] = 38,
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
    STATE(255), 1,
      sym__assignment_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(265), 1,
      sym__logical_or_expression,
    STATE(266), 1,
      sym__wrapped_logical_or_expression,
    STATE(267), 1,
      sym__logical_and_expression,
    STATE(268), 1,
      sym__wrapped_logical_and_expression,
    STATE(269), 1,
      sym__bitwise_or_expression,
    STATE(271), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(276), 1,
      sym__equality_expression,
    STATE(277), 1,
      sym__wrapped_equality_expression,
    STATE(278), 1,
      sym__relational_expression,
    STATE(280), 1,
      sym_symbol,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(291), 1,
      sym__additive_expression,
    STATE(302), 1,
      sym__bitwise_and_expression,
    STATE(386), 1,
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
    STATE(423), 2,
      sym__operand,
      sym_string,
    ACTIONS(167), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(261), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2311] = 38,
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
    STATE(255), 1,
      sym__assignment_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(265), 1,
      sym__logical_or_expression,
    STATE(266), 1,
      sym__wrapped_logical_or_expression,
    STATE(267), 1,
      sym__logical_and_expression,
    STATE(268), 1,
      sym__wrapped_logical_and_expression,
    STATE(269), 1,
      sym__bitwise_or_expression,
    STATE(271), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(276), 1,
      sym__equality_expression,
    STATE(277), 1,
      sym__wrapped_equality_expression,
    STATE(278), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(291), 1,
      sym__additive_expression,
    STATE(297), 1,
      sym_symbol,
    STATE(302), 1,
      sym__bitwise_and_expression,
    STATE(395), 1,
      sym__wrapped_assignment_expression,
    STATE(490), 1,
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
    STATE(423), 2,
      sym__operand,
      sym_string,
    ACTIONS(167), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(261), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2441] = 36,
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
    STATE(255), 1,
      sym__assignment_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(265), 1,
      sym__logical_or_expression,
    STATE(266), 1,
      sym__wrapped_logical_or_expression,
    STATE(267), 1,
      sym__logical_and_expression,
    STATE(268), 1,
      sym__wrapped_logical_and_expression,
    STATE(269), 1,
      sym__bitwise_or_expression,
    STATE(271), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(276), 1,
      sym__equality_expression,
    STATE(277), 1,
      sym__wrapped_equality_expression,
    STATE(278), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(291), 1,
      sym__additive_expression,
    STATE(302), 1,
      sym__bitwise_and_expression,
    STATE(386), 1,
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
    STATE(444), 2,
      sym__operand,
      sym_string,
    ACTIONS(167), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(261), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [2567] = 38,
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
    STATE(255), 1,
      sym__assignment_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(265), 1,
      sym__logical_or_expression,
    STATE(266), 1,
      sym__wrapped_logical_or_expression,
    STATE(267), 1,
      sym__logical_and_expression,
    STATE(268), 1,
      sym__wrapped_logical_and_expression,
    STATE(269), 1,
      sym__bitwise_or_expression,
    STATE(271), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(276), 1,
      sym__equality_expression,
    STATE(277), 1,
      sym__wrapped_equality_expression,
    STATE(278), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(291), 1,
      sym__additive_expression,
    STATE(299), 1,
      sym_symbol,
    STATE(302), 1,
      sym__bitwise_and_expression,
    STATE(396), 1,
      sym__wrapped_assignment_expression,
    STATE(498), 1,
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
    STATE(423), 2,
      sym__operand,
      sym_string,
    ACTIONS(167), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(261), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2697] = 36,
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
    STATE(255), 1,
      sym__assignment_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(265), 1,
      sym__logical_or_expression,
    STATE(266), 1,
      sym__wrapped_logical_or_expression,
    STATE(267), 1,
      sym__logical_and_expression,
    STATE(268), 1,
      sym__wrapped_logical_and_expression,
    STATE(269), 1,
      sym__bitwise_or_expression,
    STATE(271), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(276), 1,
      sym__equality_expression,
    STATE(277), 1,
      sym__wrapped_equality_expression,
    STATE(278), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(291), 1,
      sym__additive_expression,
    STATE(302), 1,
      sym__bitwise_and_expression,
    STATE(386), 1,
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
    STATE(444), 2,
      sym__operand,
      sym_string,
    ACTIONS(167), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(261), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [2823] = 38,
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
    STATE(255), 1,
      sym__assignment_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(259), 1,
      sym_symbol,
    STATE(265), 1,
      sym__logical_or_expression,
    STATE(266), 1,
      sym__wrapped_logical_or_expression,
    STATE(267), 1,
      sym__logical_and_expression,
    STATE(268), 1,
      sym__wrapped_logical_and_expression,
    STATE(269), 1,
      sym__bitwise_or_expression,
    STATE(271), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(276), 1,
      sym__equality_expression,
    STATE(277), 1,
      sym__wrapped_equality_expression,
    STATE(278), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(291), 1,
      sym__additive_expression,
    STATE(302), 1,
      sym__bitwise_and_expression,
    STATE(386), 1,
      sym__wrapped_assignment_expression,
    STATE(471), 1,
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
    STATE(423), 2,
      sym__operand,
      sym_string,
    ACTIONS(167), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(261), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2953] = 38,
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
    STATE(255), 1,
      sym__assignment_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(265), 1,
      sym__logical_or_expression,
    STATE(266), 1,
      sym__wrapped_logical_or_expression,
    STATE(267), 1,
      sym__logical_and_expression,
    STATE(268), 1,
      sym__wrapped_logical_and_expression,
    STATE(269), 1,
      sym__bitwise_or_expression,
    STATE(271), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(276), 1,
      sym__equality_expression,
    STATE(277), 1,
      sym__wrapped_equality_expression,
    STATE(278), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(291), 1,
      sym__additive_expression,
    STATE(295), 1,
      sym_symbol,
    STATE(302), 1,
      sym__bitwise_and_expression,
    STATE(392), 1,
      sym__wrapped_assignment_expression,
    STATE(476), 1,
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
    STATE(423), 2,
      sym__operand,
      sym_string,
    ACTIONS(167), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(261), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3083] = 38,
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
    STATE(247), 1,
      sym_symbol,
    STATE(255), 1,
      sym__assignment_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(265), 1,
      sym__logical_or_expression,
    STATE(266), 1,
      sym__wrapped_logical_or_expression,
    STATE(267), 1,
      sym__logical_and_expression,
    STATE(268), 1,
      sym__wrapped_logical_and_expression,
    STATE(269), 1,
      sym__bitwise_or_expression,
    STATE(271), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(276), 1,
      sym__equality_expression,
    STATE(277), 1,
      sym__wrapped_equality_expression,
    STATE(278), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(291), 1,
      sym__additive_expression,
    STATE(302), 1,
      sym__bitwise_and_expression,
    STATE(386), 1,
      sym__wrapped_assignment_expression,
    STATE(484), 1,
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
    STATE(423), 2,
      sym__operand,
      sym_string,
    ACTIONS(167), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(261), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3213] = 38,
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
    STATE(255), 1,
      sym__assignment_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(265), 1,
      sym__logical_or_expression,
    STATE(266), 1,
      sym__wrapped_logical_or_expression,
    STATE(267), 1,
      sym__logical_and_expression,
    STATE(268), 1,
      sym__wrapped_logical_and_expression,
    STATE(269), 1,
      sym__bitwise_or_expression,
    STATE(271), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(276), 1,
      sym__equality_expression,
    STATE(277), 1,
      sym__wrapped_equality_expression,
    STATE(278), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(291), 1,
      sym__additive_expression,
    STATE(298), 1,
      sym_symbol,
    STATE(302), 1,
      sym__bitwise_and_expression,
    STATE(386), 1,
      sym__wrapped_assignment_expression,
    STATE(505), 1,
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
    STATE(423), 2,
      sym__operand,
      sym_string,
    ACTIONS(167), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(261), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3343] = 38,
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
    STATE(255), 1,
      sym__assignment_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(265), 1,
      sym__logical_or_expression,
    STATE(266), 1,
      sym__wrapped_logical_or_expression,
    STATE(267), 1,
      sym__logical_and_expression,
    STATE(268), 1,
      sym__wrapped_logical_and_expression,
    STATE(269), 1,
      sym__bitwise_or_expression,
    STATE(270), 1,
      sym_symbol,
    STATE(271), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(276), 1,
      sym__equality_expression,
    STATE(277), 1,
      sym__wrapped_equality_expression,
    STATE(278), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(291), 1,
      sym__additive_expression,
    STATE(302), 1,
      sym__bitwise_and_expression,
    STATE(387), 1,
      sym__wrapped_assignment_expression,
    STATE(474), 1,
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
    STATE(423), 2,
      sym__operand,
      sym_string,
    ACTIONS(167), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(261), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3473] = 38,
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
    STATE(255), 1,
      sym__assignment_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(265), 1,
      sym__logical_or_expression,
    STATE(266), 1,
      sym__wrapped_logical_or_expression,
    STATE(267), 1,
      sym__logical_and_expression,
    STATE(268), 1,
      sym__wrapped_logical_and_expression,
    STATE(269), 1,
      sym__bitwise_or_expression,
    STATE(271), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(276), 1,
      sym__equality_expression,
    STATE(277), 1,
      sym__wrapped_equality_expression,
    STATE(278), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(291), 1,
      sym__additive_expression,
    STATE(300), 1,
      sym_symbol,
    STATE(302), 1,
      sym__bitwise_and_expression,
    STATE(386), 1,
      sym__wrapped_assignment_expression,
    STATE(477), 1,
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
    STATE(423), 2,
      sym__operand,
      sym_string,
    ACTIONS(167), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(261), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3603] = 38,
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
    STATE(255), 1,
      sym__assignment_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(265), 1,
      sym__logical_or_expression,
    STATE(266), 1,
      sym__wrapped_logical_or_expression,
    STATE(267), 1,
      sym__logical_and_expression,
    STATE(268), 1,
      sym__wrapped_logical_and_expression,
    STATE(269), 1,
      sym__bitwise_or_expression,
    STATE(271), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(276), 1,
      sym__equality_expression,
    STATE(277), 1,
      sym__wrapped_equality_expression,
    STATE(278), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(291), 1,
      sym__additive_expression,
    STATE(301), 1,
      sym_symbol,
    STATE(302), 1,
      sym__bitwise_and_expression,
    STATE(395), 1,
      sym__wrapped_assignment_expression,
    STATE(479), 1,
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
    STATE(423), 2,
      sym__operand,
      sym_string,
    ACTIONS(167), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(261), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3733] = 35,
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
    ACTIONS(205), 1,
      sym_line_comment,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    STATE(112), 1,
      sym__multiplicative_expression,
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
      sym__wrapped_additive_expression,
    STATE(154), 1,
      sym__shift_expression,
    STATE(333), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(79), 2,
      sym__data_separator,
      anon_sym_COMMA,
    ACTIONS(209), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(211), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(69), 5,
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
  [3856] = 35,
    ACTIONS(99), 1,
      sym_unary_minus_operator,
    ACTIONS(103), 1,
      sym_relocation_type,
    ACTIONS(109), 1,
      aux_sym_decimal_token1,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(117), 1,
      aux_sym_symbol_token1,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(199), 1,
      sym__logical_or_expression,
    STATE(200), 1,
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
    STATE(229), 1,
      sym__equality_expression,
    STATE(230), 1,
      sym__wrapped_equality_expression,
    STATE(231), 1,
      sym__relational_expression,
    STATE(232), 1,
      sym__wrapped_relational_expression,
    STATE(233), 1,
      sym__shift_expression,
    STATE(234), 1,
      sym__wrapped_shift_expression,
    STATE(235), 1,
      sym__additive_expression,
    STATE(236), 1,
      sym__wrapped_additive_expression,
    STATE(238), 1,
      sym__multiplicative_expression,
    STATE(365), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(101), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(107), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(382), 2,
      sym__operand,
      sym_string,
    ACTIONS(105), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(239), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3979] = 35,
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
    STATE(255), 1,
      sym__assignment_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(265), 1,
      sym__logical_or_expression,
    STATE(266), 1,
      sym__wrapped_logical_or_expression,
    STATE(267), 1,
      sym__logical_and_expression,
    STATE(268), 1,
      sym__wrapped_logical_and_expression,
    STATE(269), 1,
      sym__bitwise_or_expression,
    STATE(271), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(276), 1,
      sym__equality_expression,
    STATE(277), 1,
      sym__wrapped_equality_expression,
    STATE(278), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(291), 1,
      sym__additive_expression,
    STATE(302), 1,
      sym__bitwise_and_expression,
    STATE(386), 1,
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
    STATE(444), 2,
      sym__operand,
      sym_string,
    ACTIONS(167), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(261), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4102] = 37,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      sym_unary_minus_operator,
    ACTIONS(221), 1,
      sym_relocation_type,
    ACTIONS(227), 1,
      aux_sym_decimal_token1,
    ACTIONS(229), 1,
      anon_sym_SQUOTE,
    ACTIONS(231), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      sym_macro_variable,
    ACTIONS(235), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(237), 1,
      aux_sym_symbol_token1,
    STATE(246), 1,
      sym_address,
    STATE(304), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(321), 1,
      sym__bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(327), 1,
      sym__wrapped_shift_expression,
    STATE(329), 1,
      sym__wrapped_additive_expression,
    STATE(330), 1,
      sym__multiplicative_expression,
    STATE(350), 1,
      sym__additive_expression,
    STATE(454), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(219), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(225), 2,
      sym_binary,
      sym_hexadecimal,
    STATE(388), 2,
      sym__string_operand,
      sym_string,
    ACTIONS(223), 4,
      sym_octal,
      sym_float,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(331), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
  [4229] = 33,
    ACTIONS(217), 1,
      sym_unary_minus_operator,
    ACTIONS(221), 1,
      sym_relocation_type,
    ACTIONS(227), 1,
      aux_sym_decimal_token1,
    ACTIONS(229), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(237), 1,
      aux_sym_symbol_token1,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    STATE(304), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(321), 1,
      sym__bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(327), 1,
      sym__wrapped_shift_expression,
    STATE(329), 1,
      sym__wrapped_additive_expression,
    STATE(330), 1,
      sym__multiplicative_expression,
    STATE(350), 1,
      sym__additive_expression,
    STATE(447), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(219), 2,
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
    STATE(331), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4345] = 33,
    ACTIONS(99), 1,
      sym_unary_minus_operator,
    ACTIONS(103), 1,
      sym_relocation_type,
    ACTIONS(109), 1,
      aux_sym_decimal_token1,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(115), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(117), 1,
      aux_sym_symbol_token1,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(199), 1,
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
    STATE(229), 1,
      sym__equality_expression,
    STATE(230), 1,
      sym__wrapped_equality_expression,
    STATE(231), 1,
      sym__relational_expression,
    STATE(232), 1,
      sym__wrapped_relational_expression,
    STATE(233), 1,
      sym__shift_expression,
    STATE(234), 1,
      sym__wrapped_shift_expression,
    STATE(235), 1,
      sym__additive_expression,
    STATE(236), 1,
      sym__wrapped_additive_expression,
    STATE(238), 1,
      sym__multiplicative_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(363), 1,
      sym__wrapped_logical_or_expression,
    STATE(467), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(101), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(107), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(105), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(239), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4461] = 33,
    ACTIONS(99), 1,
      sym_unary_minus_operator,
    ACTIONS(103), 1,
      sym_relocation_type,
    ACTIONS(109), 1,
      aux_sym_decimal_token1,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(115), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(117), 1,
      aux_sym_symbol_token1,
    ACTIONS(153), 1,
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
    STATE(214), 1,
      sym__wrapped_logical_and_expression,
    STATE(229), 1,
      sym__equality_expression,
    STATE(230), 1,
      sym__wrapped_equality_expression,
    STATE(231), 1,
      sym__relational_expression,
    STATE(232), 1,
      sym__wrapped_relational_expression,
    STATE(233), 1,
      sym__shift_expression,
    STATE(234), 1,
      sym__wrapped_shift_expression,
    STATE(235), 1,
      sym__additive_expression,
    STATE(236), 1,
      sym__wrapped_additive_expression,
    STATE(238), 1,
      sym__multiplicative_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(467), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(101), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(107), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(105), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(239), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4577] = 33,
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
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    STATE(112), 1,
      sym__multiplicative_expression,
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
      sym__wrapped_additive_expression,
    STATE(154), 1,
      sym__shift_expression,
    STATE(308), 1,
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
    ACTIONS(69), 5,
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
  [4693] = 33,
    ACTIONS(99), 1,
      sym_unary_minus_operator,
    ACTIONS(103), 1,
      sym_relocation_type,
    ACTIONS(109), 1,
      aux_sym_decimal_token1,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(115), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(117), 1,
      aux_sym_symbol_token1,
    ACTIONS(153), 1,
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
    STATE(215), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(229), 1,
      sym__equality_expression,
    STATE(230), 1,
      sym__wrapped_equality_expression,
    STATE(231), 1,
      sym__relational_expression,
    STATE(232), 1,
      sym__wrapped_relational_expression,
    STATE(233), 1,
      sym__shift_expression,
    STATE(234), 1,
      sym__wrapped_shift_expression,
    STATE(235), 1,
      sym__additive_expression,
    STATE(236), 1,
      sym__wrapped_additive_expression,
    STATE(238), 1,
      sym__multiplicative_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(467), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(101), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(107), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(105), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(239), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4809] = 33,
    ACTIONS(99), 1,
      sym_unary_minus_operator,
    ACTIONS(103), 1,
      sym_relocation_type,
    ACTIONS(109), 1,
      aux_sym_decimal_token1,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(115), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(117), 1,
      aux_sym_symbol_token1,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(206), 1,
      sym__bitwise_xor_expression,
    STATE(208), 1,
      sym__bitwise_and_expression,
    STATE(209), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(216), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(229), 1,
      sym__equality_expression,
    STATE(230), 1,
      sym__wrapped_equality_expression,
    STATE(231), 1,
      sym__relational_expression,
    STATE(232), 1,
      sym__wrapped_relational_expression,
    STATE(233), 1,
      sym__shift_expression,
    STATE(234), 1,
      sym__wrapped_shift_expression,
    STATE(235), 1,
      sym__additive_expression,
    STATE(236), 1,
      sym__wrapped_additive_expression,
    STATE(238), 1,
      sym__multiplicative_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(467), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(101), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(107), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(105), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(239), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4925] = 33,
    ACTIONS(99), 1,
      sym_unary_minus_operator,
    ACTIONS(103), 1,
      sym_relocation_type,
    ACTIONS(109), 1,
      aux_sym_decimal_token1,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(115), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(117), 1,
      aux_sym_symbol_token1,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(208), 1,
      sym__bitwise_and_expression,
    STATE(217), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(229), 1,
      sym__equality_expression,
    STATE(230), 1,
      sym__wrapped_equality_expression,
    STATE(231), 1,
      sym__relational_expression,
    STATE(232), 1,
      sym__wrapped_relational_expression,
    STATE(233), 1,
      sym__shift_expression,
    STATE(234), 1,
      sym__wrapped_shift_expression,
    STATE(235), 1,
      sym__additive_expression,
    STATE(236), 1,
      sym__wrapped_additive_expression,
    STATE(238), 1,
      sym__multiplicative_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(467), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(101), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(107), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(105), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(239), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5041] = 33,
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
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(265), 1,
      sym__logical_or_expression,
    STATE(267), 1,
      sym__logical_and_expression,
    STATE(268), 1,
      sym__wrapped_logical_and_expression,
    STATE(269), 1,
      sym__bitwise_or_expression,
    STATE(271), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(276), 1,
      sym__equality_expression,
    STATE(277), 1,
      sym__wrapped_equality_expression,
    STATE(278), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(291), 1,
      sym__additive_expression,
    STATE(302), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(383), 1,
      sym__wrapped_logical_or_expression,
    STATE(468), 1,
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
    STATE(261), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5157] = 33,
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
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(262), 1,
      sym__wrapped_logical_and_expression,
    STATE(267), 1,
      sym__logical_and_expression,
    STATE(269), 1,
      sym__bitwise_or_expression,
    STATE(271), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(276), 1,
      sym__equality_expression,
    STATE(277), 1,
      sym__wrapped_equality_expression,
    STATE(278), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(291), 1,
      sym__additive_expression,
    STATE(302), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(468), 1,
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
    STATE(261), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5273] = 33,
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
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(263), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(269), 1,
      sym__bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(276), 1,
      sym__equality_expression,
    STATE(277), 1,
      sym__wrapped_equality_expression,
    STATE(278), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(291), 1,
      sym__additive_expression,
    STATE(302), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(468), 1,
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
    STATE(261), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5389] = 33,
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
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(264), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(276), 1,
      sym__equality_expression,
    STATE(277), 1,
      sym__wrapped_equality_expression,
    STATE(278), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(291), 1,
      sym__additive_expression,
    STATE(302), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(468), 1,
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
    STATE(261), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5505] = 33,
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
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(276), 1,
      sym__equality_expression,
    STATE(277), 1,
      sym__wrapped_equality_expression,
    STATE(278), 1,
      sym__relational_expression,
    STATE(279), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(291), 1,
      sym__additive_expression,
    STATE(302), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(468), 1,
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
    STATE(261), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5621] = 33,
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
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(276), 1,
      sym__equality_expression,
    STATE(278), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(285), 1,
      sym__wrapped_equality_expression,
    STATE(291), 1,
      sym__additive_expression,
    STATE(304), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(321), 1,
      sym__bitwise_and_expression,
    STATE(468), 1,
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
    STATE(261), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5737] = 33,
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
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(278), 1,
      sym__relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(286), 1,
      sym__wrapped_relational_expression,
    STATE(291), 1,
      sym__additive_expression,
    STATE(304), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(321), 1,
      sym__bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(468), 1,
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
    STATE(261), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5853] = 33,
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
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(287), 1,
      sym__wrapped_shift_expression,
    STATE(291), 1,
      sym__additive_expression,
    STATE(304), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(321), 1,
      sym__bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(468), 1,
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
    STATE(261), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5969] = 33,
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
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(288), 1,
      sym__wrapped_additive_expression,
    STATE(291), 1,
      sym__additive_expression,
    STATE(304), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(321), 1,
      sym__bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(327), 1,
      sym__wrapped_shift_expression,
    STATE(468), 1,
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
    STATE(261), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6085] = 33,
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
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(304), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(321), 1,
      sym__bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(327), 1,
      sym__wrapped_shift_expression,
    STATE(329), 1,
      sym__wrapped_additive_expression,
    STATE(350), 1,
      sym__additive_expression,
    STATE(468), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(163), 2,
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
    STATE(292), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6201] = 34,
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
    STATE(304), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(321), 1,
      sym__bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(327), 1,
      sym__wrapped_shift_expression,
    STATE(329), 1,
      sym__wrapped_additive_expression,
    STATE(330), 1,
      sym__multiplicative_expression,
    STATE(331), 1,
      sym__wrapped_multiplicative_expression,
    STATE(350), 1,
      sym__additive_expression,
    STATE(468), 1,
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
    STATE(294), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6319] = 33,
    ACTIONS(99), 1,
      sym_unary_minus_operator,
    ACTIONS(103), 1,
      sym_relocation_type,
    ACTIONS(109), 1,
      aux_sym_decimal_token1,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(115), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(117), 1,
      aux_sym_symbol_token1,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(218), 1,
      sym__wrapped_equality_expression,
    STATE(229), 1,
      sym__equality_expression,
    STATE(231), 1,
      sym__relational_expression,
    STATE(232), 1,
      sym__wrapped_relational_expression,
    STATE(233), 1,
      sym__shift_expression,
    STATE(234), 1,
      sym__wrapped_shift_expression,
    STATE(235), 1,
      sym__additive_expression,
    STATE(236), 1,
      sym__wrapped_additive_expression,
    STATE(238), 1,
      sym__multiplicative_expression,
    STATE(304), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(321), 1,
      sym__bitwise_and_expression,
    STATE(467), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(101), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(107), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(105), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(239), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6435] = 33,
    ACTIONS(99), 1,
      sym_unary_minus_operator,
    ACTIONS(103), 1,
      sym_relocation_type,
    ACTIONS(109), 1,
      aux_sym_decimal_token1,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(115), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(117), 1,
      aux_sym_symbol_token1,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(198), 1,
      sym__wrapped_relational_expression,
    STATE(231), 1,
      sym__relational_expression,
    STATE(233), 1,
      sym__shift_expression,
    STATE(234), 1,
      sym__wrapped_shift_expression,
    STATE(235), 1,
      sym__additive_expression,
    STATE(236), 1,
      sym__wrapped_additive_expression,
    STATE(238), 1,
      sym__multiplicative_expression,
    STATE(304), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(321), 1,
      sym__bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(467), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(101), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(107), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(105), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(239), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6551] = 33,
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
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    STATE(112), 1,
      sym__multiplicative_expression,
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
      sym__wrapped_additive_expression,
    STATE(154), 1,
      sym__shift_expression,
    STATE(303), 1,
      sym__wrapped_logical_or_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(469), 1,
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
    ACTIONS(69), 5,
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
  [6667] = 33,
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
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    STATE(112), 1,
      sym__multiplicative_expression,
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
      sym__wrapped_additive_expression,
    STATE(141), 1,
      sym__wrapped_logical_and_expression,
    STATE(154), 1,
      sym__shift_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(469), 1,
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
    ACTIONS(69), 5,
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
  [6783] = 33,
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
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    STATE(112), 1,
      sym__multiplicative_expression,
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
      sym__wrapped_additive_expression,
    STATE(142), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(154), 1,
      sym__shift_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(469), 1,
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
    ACTIONS(69), 5,
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
  [6899] = 33,
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
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    STATE(112), 1,
      sym__multiplicative_expression,
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
      sym__wrapped_additive_expression,
    STATE(143), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(154), 1,
      sym__shift_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(469), 1,
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
    ACTIONS(69), 5,
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
  [7015] = 33,
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
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    STATE(112), 1,
      sym__multiplicative_expression,
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
      sym__wrapped_additive_expression,
    STATE(144), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(154), 1,
      sym__shift_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(469), 1,
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
    ACTIONS(69), 5,
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
  [7131] = 33,
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
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    STATE(112), 1,
      sym__multiplicative_expression,
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
      sym__wrapped_additive_expression,
    STATE(145), 1,
      sym__wrapped_equality_expression,
    STATE(154), 1,
      sym__shift_expression,
    STATE(304), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(321), 1,
      sym__bitwise_and_expression,
    STATE(469), 1,
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
    ACTIONS(69), 5,
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
  [7247] = 33,
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
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    STATE(112), 1,
      sym__multiplicative_expression,
    STATE(130), 1,
      sym__relational_expression,
    STATE(133), 1,
      sym__wrapped_shift_expression,
    STATE(134), 1,
      sym__additive_expression,
    STATE(135), 1,
      sym__wrapped_additive_expression,
    STATE(146), 1,
      sym__wrapped_relational_expression,
    STATE(154), 1,
      sym__shift_expression,
    STATE(304), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(321), 1,
      sym__bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(469), 1,
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
    ACTIONS(69), 5,
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
  [7363] = 33,
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
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    STATE(112), 1,
      sym__multiplicative_expression,
    STATE(134), 1,
      sym__additive_expression,
    STATE(135), 1,
      sym__wrapped_additive_expression,
    STATE(147), 1,
      sym__wrapped_shift_expression,
    STATE(154), 1,
      sym__shift_expression,
    STATE(304), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(321), 1,
      sym__bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(469), 1,
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
    ACTIONS(69), 5,
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
  [7479] = 33,
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
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    STATE(112), 1,
      sym__multiplicative_expression,
    STATE(134), 1,
      sym__additive_expression,
    STATE(148), 1,
      sym__wrapped_additive_expression,
    STATE(304), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(321), 1,
      sym__bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(327), 1,
      sym__wrapped_shift_expression,
    STATE(469), 1,
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
    ACTIONS(69), 5,
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
  [7595] = 33,
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
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    STATE(112), 1,
      sym__multiplicative_expression,
    STATE(304), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(321), 1,
      sym__bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(327), 1,
      sym__wrapped_shift_expression,
    STATE(329), 1,
      sym__wrapped_additive_expression,
    STATE(350), 1,
      sym__additive_expression,
    STATE(469), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(209), 2,
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
  [7711] = 34,
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
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    STATE(304), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(321), 1,
      sym__bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(327), 1,
      sym__wrapped_shift_expression,
    STATE(329), 1,
      sym__wrapped_additive_expression,
    STATE(330), 1,
      sym__multiplicative_expression,
    STATE(331), 1,
      sym__wrapped_multiplicative_expression,
    STATE(350), 1,
      sym__additive_expression,
    STATE(469), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(209), 2,
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
  [7829] = 33,
    ACTIONS(217), 1,
      sym_unary_minus_operator,
    ACTIONS(221), 1,
      sym_relocation_type,
    ACTIONS(227), 1,
      aux_sym_decimal_token1,
    ACTIONS(229), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(237), 1,
      aux_sym_symbol_token1,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    STATE(304), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(321), 1,
      sym__bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(327), 1,
      sym__wrapped_shift_expression,
    STATE(329), 1,
      sym__wrapped_additive_expression,
    STATE(330), 1,
      sym__multiplicative_expression,
    STATE(350), 1,
      sym__additive_expression,
    STATE(402), 1,
      sym__wrapped_logical_or_expression,
    STATE(470), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(219), 2,
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
    STATE(331), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7945] = 33,
    ACTIONS(217), 1,
      sym_unary_minus_operator,
    ACTIONS(221), 1,
      sym_relocation_type,
    ACTIONS(227), 1,
      aux_sym_decimal_token1,
    ACTIONS(229), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(237), 1,
      aux_sym_symbol_token1,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    STATE(304), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(321), 1,
      sym__bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(327), 1,
      sym__wrapped_shift_expression,
    STATE(329), 1,
      sym__wrapped_additive_expression,
    STATE(330), 1,
      sym__multiplicative_expression,
    STATE(341), 1,
      sym__wrapped_logical_and_expression,
    STATE(350), 1,
      sym__additive_expression,
    STATE(470), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(219), 2,
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
    STATE(331), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8061] = 33,
    ACTIONS(217), 1,
      sym_unary_minus_operator,
    ACTIONS(221), 1,
      sym_relocation_type,
    ACTIONS(227), 1,
      aux_sym_decimal_token1,
    ACTIONS(229), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(237), 1,
      aux_sym_symbol_token1,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    STATE(304), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(321), 1,
      sym__bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(327), 1,
      sym__wrapped_shift_expression,
    STATE(329), 1,
      sym__wrapped_additive_expression,
    STATE(330), 1,
      sym__multiplicative_expression,
    STATE(342), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(350), 1,
      sym__additive_expression,
    STATE(470), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(219), 2,
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
    STATE(331), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8177] = 33,
    ACTIONS(217), 1,
      sym_unary_minus_operator,
    ACTIONS(221), 1,
      sym_relocation_type,
    ACTIONS(227), 1,
      aux_sym_decimal_token1,
    ACTIONS(229), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(237), 1,
      aux_sym_symbol_token1,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    STATE(304), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(321), 1,
      sym__bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(327), 1,
      sym__wrapped_shift_expression,
    STATE(329), 1,
      sym__wrapped_additive_expression,
    STATE(330), 1,
      sym__multiplicative_expression,
    STATE(343), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(350), 1,
      sym__additive_expression,
    STATE(470), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(219), 2,
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
    STATE(331), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8293] = 33,
    ACTIONS(217), 1,
      sym_unary_minus_operator,
    ACTIONS(221), 1,
      sym_relocation_type,
    ACTIONS(227), 1,
      aux_sym_decimal_token1,
    ACTIONS(229), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(237), 1,
      aux_sym_symbol_token1,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(321), 1,
      sym__bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(327), 1,
      sym__wrapped_shift_expression,
    STATE(329), 1,
      sym__wrapped_additive_expression,
    STATE(330), 1,
      sym__multiplicative_expression,
    STATE(344), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(350), 1,
      sym__additive_expression,
    STATE(470), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(219), 2,
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
    STATE(331), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8409] = 33,
    ACTIONS(217), 1,
      sym_unary_minus_operator,
    ACTIONS(221), 1,
      sym_relocation_type,
    ACTIONS(227), 1,
      aux_sym_decimal_token1,
    ACTIONS(229), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(237), 1,
      aux_sym_symbol_token1,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    STATE(304), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(321), 1,
      sym__bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(327), 1,
      sym__wrapped_shift_expression,
    STATE(329), 1,
      sym__wrapped_additive_expression,
    STATE(330), 1,
      sym__multiplicative_expression,
    STATE(345), 1,
      sym__wrapped_equality_expression,
    STATE(350), 1,
      sym__additive_expression,
    STATE(470), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(219), 2,
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
    STATE(331), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8525] = 33,
    ACTIONS(217), 1,
      sym_unary_minus_operator,
    ACTIONS(221), 1,
      sym_relocation_type,
    ACTIONS(227), 1,
      aux_sym_decimal_token1,
    ACTIONS(229), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(237), 1,
      aux_sym_symbol_token1,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    STATE(304), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(321), 1,
      sym__bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(327), 1,
      sym__wrapped_shift_expression,
    STATE(329), 1,
      sym__wrapped_additive_expression,
    STATE(330), 1,
      sym__multiplicative_expression,
    STATE(346), 1,
      sym__wrapped_relational_expression,
    STATE(350), 1,
      sym__additive_expression,
    STATE(470), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(219), 2,
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
    STATE(331), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8641] = 33,
    ACTIONS(217), 1,
      sym_unary_minus_operator,
    ACTIONS(221), 1,
      sym_relocation_type,
    ACTIONS(227), 1,
      aux_sym_decimal_token1,
    ACTIONS(229), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(237), 1,
      aux_sym_symbol_token1,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    STATE(304), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(321), 1,
      sym__bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(329), 1,
      sym__wrapped_additive_expression,
    STATE(330), 1,
      sym__multiplicative_expression,
    STATE(347), 1,
      sym__wrapped_shift_expression,
    STATE(350), 1,
      sym__additive_expression,
    STATE(470), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(219), 2,
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
    STATE(331), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8757] = 33,
    ACTIONS(217), 1,
      sym_unary_minus_operator,
    ACTIONS(221), 1,
      sym_relocation_type,
    ACTIONS(227), 1,
      aux_sym_decimal_token1,
    ACTIONS(229), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(237), 1,
      aux_sym_symbol_token1,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    STATE(304), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(321), 1,
      sym__bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(327), 1,
      sym__wrapped_shift_expression,
    STATE(330), 1,
      sym__multiplicative_expression,
    STATE(348), 1,
      sym__wrapped_additive_expression,
    STATE(350), 1,
      sym__additive_expression,
    STATE(470), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(219), 2,
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
    STATE(331), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8873] = 34,
    ACTIONS(217), 1,
      sym_unary_minus_operator,
    ACTIONS(221), 1,
      sym_relocation_type,
    ACTIONS(227), 1,
      aux_sym_decimal_token1,
    ACTIONS(229), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(237), 1,
      aux_sym_symbol_token1,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    STATE(304), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(321), 1,
      sym__bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(327), 1,
      sym__wrapped_shift_expression,
    STATE(329), 1,
      sym__wrapped_additive_expression,
    STATE(330), 1,
      sym__multiplicative_expression,
    STATE(331), 1,
      sym__wrapped_multiplicative_expression,
    STATE(350), 1,
      sym__additive_expression,
    STATE(470), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(219), 2,
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
    STATE(305), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8991] = 33,
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
      sym__logical_or_expression,
    STATE(163), 1,
      sym__logical_and_expression,
    STATE(164), 1,
      sym__wrapped_logical_and_expression,
    STATE(165), 1,
      sym__bitwise_or_expression,
    STATE(166), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(167), 1,
      sym__bitwise_xor_expression,
    STATE(168), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(169), 1,
      sym__bitwise_and_expression,
    STATE(170), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(171), 1,
      sym__equality_expression,
    STATE(172), 1,
      sym__wrapped_equality_expression,
    STATE(173), 1,
      sym__relational_expression,
    STATE(174), 1,
      sym__wrapped_relational_expression,
    STATE(175), 1,
      sym__shift_expression,
    STATE(176), 1,
      sym__wrapped_shift_expression,
    STATE(177), 1,
      sym__additive_expression,
    STATE(178), 1,
      sym__wrapped_additive_expression,
    STATE(179), 1,
      sym__multiplicative_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(355), 1,
      sym__wrapped_logical_or_expression,
    STATE(451), 1,
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
    STATE(180), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9107] = 33,
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
      sym__logical_and_expression,
    STATE(165), 1,
      sym__bitwise_or_expression,
    STATE(166), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(167), 1,
      sym__bitwise_xor_expression,
    STATE(168), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(169), 1,
      sym__bitwise_and_expression,
    STATE(170), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(171), 1,
      sym__equality_expression,
    STATE(172), 1,
      sym__wrapped_equality_expression,
    STATE(173), 1,
      sym__relational_expression,
    STATE(174), 1,
      sym__wrapped_relational_expression,
    STATE(175), 1,
      sym__shift_expression,
    STATE(176), 1,
      sym__wrapped_shift_expression,
    STATE(177), 1,
      sym__additive_expression,
    STATE(178), 1,
      sym__wrapped_additive_expression,
    STATE(179), 1,
      sym__multiplicative_expression,
    STATE(185), 1,
      sym__wrapped_logical_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(451), 1,
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
    STATE(180), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9223] = 33,
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
      sym__bitwise_or_expression,
    STATE(167), 1,
      sym__bitwise_xor_expression,
    STATE(168), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(169), 1,
      sym__bitwise_and_expression,
    STATE(170), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(171), 1,
      sym__equality_expression,
    STATE(172), 1,
      sym__wrapped_equality_expression,
    STATE(173), 1,
      sym__relational_expression,
    STATE(174), 1,
      sym__wrapped_relational_expression,
    STATE(175), 1,
      sym__shift_expression,
    STATE(176), 1,
      sym__wrapped_shift_expression,
    STATE(177), 1,
      sym__additive_expression,
    STATE(178), 1,
      sym__wrapped_additive_expression,
    STATE(179), 1,
      sym__multiplicative_expression,
    STATE(186), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(451), 1,
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
    STATE(180), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9339] = 33,
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
      sym__bitwise_xor_expression,
    STATE(169), 1,
      sym__bitwise_and_expression,
    STATE(170), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(171), 1,
      sym__equality_expression,
    STATE(172), 1,
      sym__wrapped_equality_expression,
    STATE(173), 1,
      sym__relational_expression,
    STATE(174), 1,
      sym__wrapped_relational_expression,
    STATE(175), 1,
      sym__shift_expression,
    STATE(176), 1,
      sym__wrapped_shift_expression,
    STATE(177), 1,
      sym__additive_expression,
    STATE(178), 1,
      sym__wrapped_additive_expression,
    STATE(179), 1,
      sym__multiplicative_expression,
    STATE(187), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(451), 1,
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
    STATE(180), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9455] = 33,
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
      sym__bitwise_and_expression,
    STATE(171), 1,
      sym__equality_expression,
    STATE(172), 1,
      sym__wrapped_equality_expression,
    STATE(173), 1,
      sym__relational_expression,
    STATE(174), 1,
      sym__wrapped_relational_expression,
    STATE(175), 1,
      sym__shift_expression,
    STATE(176), 1,
      sym__wrapped_shift_expression,
    STATE(177), 1,
      sym__additive_expression,
    STATE(178), 1,
      sym__wrapped_additive_expression,
    STATE(179), 1,
      sym__multiplicative_expression,
    STATE(188), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(451), 1,
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
    STATE(180), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9571] = 33,
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
      sym__equality_expression,
    STATE(173), 1,
      sym__relational_expression,
    STATE(174), 1,
      sym__wrapped_relational_expression,
    STATE(175), 1,
      sym__shift_expression,
    STATE(176), 1,
      sym__wrapped_shift_expression,
    STATE(177), 1,
      sym__additive_expression,
    STATE(178), 1,
      sym__wrapped_additive_expression,
    STATE(179), 1,
      sym__multiplicative_expression,
    STATE(189), 1,
      sym__wrapped_equality_expression,
    STATE(304), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(321), 1,
      sym__bitwise_and_expression,
    STATE(451), 1,
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
    STATE(180), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9687] = 33,
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
      sym__wrapped_relational_expression,
    STATE(173), 1,
      sym__relational_expression,
    STATE(175), 1,
      sym__shift_expression,
    STATE(176), 1,
      sym__wrapped_shift_expression,
    STATE(177), 1,
      sym__additive_expression,
    STATE(178), 1,
      sym__wrapped_additive_expression,
    STATE(179), 1,
      sym__multiplicative_expression,
    STATE(304), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(321), 1,
      sym__bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(451), 1,
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
    STATE(180), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9803] = 33,
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
    STATE(175), 1,
      sym__shift_expression,
    STATE(177), 1,
      sym__additive_expression,
    STATE(178), 1,
      sym__wrapped_additive_expression,
    STATE(179), 1,
      sym__multiplicative_expression,
    STATE(190), 1,
      sym__wrapped_shift_expression,
    STATE(304), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(321), 1,
      sym__bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(451), 1,
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
    STATE(180), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9919] = 33,
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
    STATE(177), 1,
      sym__additive_expression,
    STATE(179), 1,
      sym__multiplicative_expression,
    STATE(191), 1,
      sym__wrapped_additive_expression,
    STATE(304), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(321), 1,
      sym__bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(327), 1,
      sym__wrapped_shift_expression,
    STATE(451), 1,
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
    STATE(180), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10035] = 33,
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
    STATE(179), 1,
      sym__multiplicative_expression,
    STATE(304), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(321), 1,
      sym__bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(327), 1,
      sym__wrapped_shift_expression,
    STATE(329), 1,
      sym__wrapped_additive_expression,
    STATE(350), 1,
      sym__additive_expression,
    STATE(451), 1,
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
    STATE(192), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10151] = 34,
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
    STATE(304), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(321), 1,
      sym__bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(327), 1,
      sym__wrapped_shift_expression,
    STATE(329), 1,
      sym__wrapped_additive_expression,
    STATE(330), 1,
      sym__multiplicative_expression,
    STATE(331), 1,
      sym__wrapped_multiplicative_expression,
    STATE(350), 1,
      sym__additive_expression,
    STATE(451), 1,
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
    STATE(193), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10269] = 33,
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
    STATE(248), 1,
      sym__wrapped_assignment_expression,
    STATE(255), 1,
      sym__assignment_expression,
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(265), 1,
      sym__logical_or_expression,
    STATE(266), 1,
      sym__wrapped_logical_or_expression,
    STATE(267), 1,
      sym__logical_and_expression,
    STATE(268), 1,
      sym__wrapped_logical_and_expression,
    STATE(269), 1,
      sym__bitwise_or_expression,
    STATE(271), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(276), 1,
      sym__equality_expression,
    STATE(277), 1,
      sym__wrapped_equality_expression,
    STATE(278), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(291), 1,
      sym__additive_expression,
    STATE(302), 1,
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
    STATE(261), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10385] = 33,
    ACTIONS(99), 1,
      sym_unary_minus_operator,
    ACTIONS(103), 1,
      sym_relocation_type,
    ACTIONS(109), 1,
      aux_sym_decimal_token1,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(115), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(117), 1,
      aux_sym_symbol_token1,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(199), 1,
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
    STATE(229), 1,
      sym__equality_expression,
    STATE(230), 1,
      sym__wrapped_equality_expression,
    STATE(231), 1,
      sym__relational_expression,
    STATE(232), 1,
      sym__wrapped_relational_expression,
    STATE(233), 1,
      sym__shift_expression,
    STATE(234), 1,
      sym__wrapped_shift_expression,
    STATE(235), 1,
      sym__additive_expression,
    STATE(236), 1,
      sym__wrapped_additive_expression,
    STATE(238), 1,
      sym__multiplicative_expression,
    STATE(240), 1,
      sym__wrapped_logical_or_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(467), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(101), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(107), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(105), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(239), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10501] = 33,
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
    STATE(256), 1,
      sym__multiplicative_expression,
    STATE(265), 1,
      sym__logical_or_expression,
    STATE(267), 1,
      sym__logical_and_expression,
    STATE(268), 1,
      sym__wrapped_logical_and_expression,
    STATE(269), 1,
      sym__bitwise_or_expression,
    STATE(271), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(272), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(274), 1,
      sym__wrapped_additive_expression,
    STATE(275), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(276), 1,
      sym__equality_expression,
    STATE(277), 1,
      sym__wrapped_equality_expression,
    STATE(278), 1,
      sym__relational_expression,
    STATE(281), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym__shift_expression,
    STATE(283), 1,
      sym__wrapped_shift_expression,
    STATE(290), 1,
      sym__wrapped_logical_or_expression,
    STATE(291), 1,
      sym__additive_expression,
    STATE(302), 1,
      sym__bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(468), 1,
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
    STATE(261), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10617] = 33,
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
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    STATE(112), 1,
      sym__multiplicative_expression,
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
      sym__wrapped_additive_expression,
    STATE(154), 1,
      sym__shift_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(469), 1,
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
    ACTIONS(69), 5,
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
  [10733] = 33,
    ACTIONS(217), 1,
      sym_unary_minus_operator,
    ACTIONS(221), 1,
      sym_relocation_type,
    ACTIONS(227), 1,
      aux_sym_decimal_token1,
    ACTIONS(229), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(237), 1,
      aux_sym_symbol_token1,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    STATE(304), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(321), 1,
      sym__bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(327), 1,
      sym__wrapped_shift_expression,
    STATE(329), 1,
      sym__wrapped_additive_expression,
    STATE(330), 1,
      sym__multiplicative_expression,
    STATE(340), 1,
      sym__wrapped_logical_or_expression,
    STATE(350), 1,
      sym__additive_expression,
    STATE(470), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(219), 2,
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
    STATE(331), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10849] = 33,
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
      sym__wrapped_logical_or_expression,
    STATE(161), 1,
      sym__logical_or_expression,
    STATE(163), 1,
      sym__logical_and_expression,
    STATE(164), 1,
      sym__wrapped_logical_and_expression,
    STATE(165), 1,
      sym__bitwise_or_expression,
    STATE(166), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(167), 1,
      sym__bitwise_xor_expression,
    STATE(168), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(169), 1,
      sym__bitwise_and_expression,
    STATE(170), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(171), 1,
      sym__equality_expression,
    STATE(172), 1,
      sym__wrapped_equality_expression,
    STATE(173), 1,
      sym__relational_expression,
    STATE(174), 1,
      sym__wrapped_relational_expression,
    STATE(175), 1,
      sym__shift_expression,
    STATE(176), 1,
      sym__wrapped_shift_expression,
    STATE(177), 1,
      sym__additive_expression,
    STATE(178), 1,
      sym__wrapped_additive_expression,
    STATE(179), 1,
      sym__multiplicative_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(451), 1,
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
    STATE(180), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10965] = 33,
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
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    STATE(112), 1,
      sym__multiplicative_expression,
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
      sym__wrapped_additive_expression,
    STATE(137), 1,
      sym__wrapped_assignment_expression,
    STATE(154), 1,
      sym__shift_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(209), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(211), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(69), 5,
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
  [11081] = 33,
    ACTIONS(217), 1,
      sym_unary_minus_operator,
    ACTIONS(221), 1,
      sym_relocation_type,
    ACTIONS(227), 1,
      aux_sym_decimal_token1,
    ACTIONS(229), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(237), 1,
      aux_sym_symbol_token1,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    STATE(304), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(321), 1,
      sym__bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(327), 1,
      sym__wrapped_shift_expression,
    STATE(329), 1,
      sym__wrapped_additive_expression,
    STATE(330), 1,
      sym__multiplicative_expression,
    STATE(332), 1,
      sym__wrapped_assignment_expression,
    STATE(350), 1,
      sym__additive_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(219), 2,
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
    STATE(331), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11197] = 33,
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
    STATE(160), 1,
      sym__assignment_expression,
    STATE(161), 1,
      sym__logical_or_expression,
    STATE(162), 1,
      sym__wrapped_logical_or_expression,
    STATE(163), 1,
      sym__logical_and_expression,
    STATE(164), 1,
      sym__wrapped_logical_and_expression,
    STATE(165), 1,
      sym__bitwise_or_expression,
    STATE(166), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(167), 1,
      sym__bitwise_xor_expression,
    STATE(168), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(169), 1,
      sym__bitwise_and_expression,
    STATE(170), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(171), 1,
      sym__equality_expression,
    STATE(172), 1,
      sym__wrapped_equality_expression,
    STATE(173), 1,
      sym__relational_expression,
    STATE(174), 1,
      sym__wrapped_relational_expression,
    STATE(175), 1,
      sym__shift_expression,
    STATE(176), 1,
      sym__wrapped_shift_expression,
    STATE(177), 1,
      sym__additive_expression,
    STATE(178), 1,
      sym__wrapped_additive_expression,
    STATE(179), 1,
      sym__multiplicative_expression,
    STATE(181), 1,
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
    STATE(180), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11313] = 33,
    ACTIONS(99), 1,
      sym_unary_minus_operator,
    ACTIONS(103), 1,
      sym_relocation_type,
    ACTIONS(109), 1,
      aux_sym_decimal_token1,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(115), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(117), 1,
      aux_sym_symbol_token1,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(233), 1,
      sym__shift_expression,
    STATE(235), 1,
      sym__additive_expression,
    STATE(236), 1,
      sym__wrapped_additive_expression,
    STATE(238), 1,
      sym__multiplicative_expression,
    STATE(241), 1,
      sym__wrapped_shift_expression,
    STATE(304), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(321), 1,
      sym__bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(467), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(101), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(107), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(105), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(239), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11429] = 33,
    ACTIONS(217), 1,
      sym_unary_minus_operator,
    ACTIONS(221), 1,
      sym_relocation_type,
    ACTIONS(227), 1,
      aux_sym_decimal_token1,
    ACTIONS(229), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(237), 1,
      aux_sym_symbol_token1,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    STATE(304), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(321), 1,
      sym__bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(327), 1,
      sym__wrapped_shift_expression,
    STATE(329), 1,
      sym__wrapped_additive_expression,
    STATE(330), 1,
      sym__multiplicative_expression,
    STATE(350), 1,
      sym__additive_expression,
    STATE(445), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(219), 2,
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
    STATE(331), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11545] = 33,
    ACTIONS(99), 1,
      sym_unary_minus_operator,
    ACTIONS(103), 1,
      sym_relocation_type,
    ACTIONS(109), 1,
      aux_sym_decimal_token1,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(115), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(117), 1,
      aux_sym_symbol_token1,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(220), 1,
      sym__wrapped_additive_expression,
    STATE(235), 1,
      sym__additive_expression,
    STATE(238), 1,
      sym__multiplicative_expression,
    STATE(304), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(321), 1,
      sym__bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(327), 1,
      sym__wrapped_shift_expression,
    STATE(467), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(101), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(107), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(105), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(239), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11661] = 33,
    ACTIONS(99), 1,
      sym_unary_minus_operator,
    ACTIONS(103), 1,
      sym_relocation_type,
    ACTIONS(109), 1,
      aux_sym_decimal_token1,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(115), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(117), 1,
      aux_sym_symbol_token1,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(238), 1,
      sym__multiplicative_expression,
    STATE(304), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(321), 1,
      sym__bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(327), 1,
      sym__wrapped_shift_expression,
    STATE(329), 1,
      sym__wrapped_additive_expression,
    STATE(350), 1,
      sym__additive_expression,
    STATE(467), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(101), 2,
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
    STATE(221), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11777] = 33,
    ACTIONS(217), 1,
      sym_unary_minus_operator,
    ACTIONS(221), 1,
      sym_relocation_type,
    ACTIONS(227), 1,
      aux_sym_decimal_token1,
    ACTIONS(229), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(237), 1,
      aux_sym_symbol_token1,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    STATE(304), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(321), 1,
      sym__bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(327), 1,
      sym__wrapped_shift_expression,
    STATE(329), 1,
      sym__wrapped_additive_expression,
    STATE(330), 1,
      sym__multiplicative_expression,
    STATE(350), 1,
      sym__additive_expression,
    STATE(439), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(219), 2,
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
    STATE(331), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11893] = 34,
    ACTIONS(99), 1,
      sym_unary_minus_operator,
    ACTIONS(103), 1,
      sym_relocation_type,
    ACTIONS(109), 1,
      aux_sym_decimal_token1,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(115), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(117), 1,
      aux_sym_symbol_token1,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(304), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(321), 1,
      sym__bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(327), 1,
      sym__wrapped_shift_expression,
    STATE(329), 1,
      sym__wrapped_additive_expression,
    STATE(330), 1,
      sym__multiplicative_expression,
    STATE(331), 1,
      sym__wrapped_multiplicative_expression,
    STATE(350), 1,
      sym__additive_expression,
    STATE(467), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(101), 2,
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
    STATE(222), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12011] = 33,
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
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    STATE(112), 1,
      sym__multiplicative_expression,
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
      sym__wrapped_additive_expression,
    STATE(154), 1,
      sym__shift_expression,
    STATE(333), 1,
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
    ACTIONS(69), 5,
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
  [12127] = 33,
    ACTIONS(217), 1,
      sym_unary_minus_operator,
    ACTIONS(221), 1,
      sym_relocation_type,
    ACTIONS(227), 1,
      aux_sym_decimal_token1,
    ACTIONS(229), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(237), 1,
      aux_sym_symbol_token1,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    STATE(304), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(321), 1,
      sym__bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(327), 1,
      sym__wrapped_shift_expression,
    STATE(329), 1,
      sym__wrapped_additive_expression,
    STATE(330), 1,
      sym__multiplicative_expression,
    STATE(350), 1,
      sym__additive_expression,
    STATE(448), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(219), 2,
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
    STATE(331), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12243] = 33,
    ACTIONS(217), 1,
      sym_unary_minus_operator,
    ACTIONS(221), 1,
      sym_relocation_type,
    ACTIONS(227), 1,
      aux_sym_decimal_token1,
    ACTIONS(229), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(237), 1,
      aux_sym_symbol_token1,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    STATE(304), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(321), 1,
      sym__bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(327), 1,
      sym__wrapped_shift_expression,
    STATE(329), 1,
      sym__wrapped_additive_expression,
    STATE(330), 1,
      sym__multiplicative_expression,
    STATE(350), 1,
      sym__additive_expression,
    STATE(438), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(219), 2,
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
    STATE(331), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12359] = 33,
    ACTIONS(99), 1,
      sym_unary_minus_operator,
    ACTIONS(103), 1,
      sym_relocation_type,
    ACTIONS(109), 1,
      aux_sym_decimal_token1,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(115), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(117), 1,
      aux_sym_symbol_token1,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(199), 1,
      sym__logical_or_expression,
    STATE(200), 1,
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
    STATE(224), 1,
      sym__wrapped_assignment_expression,
    STATE(229), 1,
      sym__equality_expression,
    STATE(230), 1,
      sym__wrapped_equality_expression,
    STATE(231), 1,
      sym__relational_expression,
    STATE(232), 1,
      sym__wrapped_relational_expression,
    STATE(233), 1,
      sym__shift_expression,
    STATE(234), 1,
      sym__wrapped_shift_expression,
    STATE(235), 1,
      sym__additive_expression,
    STATE(236), 1,
      sym__wrapped_additive_expression,
    STATE(238), 1,
      sym__multiplicative_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(101), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(107), 2,
      sym_binary,
      sym_hexadecimal,
    ACTIONS(105), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(239), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12475] = 33,
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
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    STATE(112), 1,
      sym__multiplicative_expression,
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
      sym__wrapped_additive_expression,
    STATE(154), 1,
      sym__shift_expression,
    STATE(307), 1,
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
    ACTIONS(69), 5,
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
  [12591] = 33,
    ACTIONS(217), 1,
      sym_unary_minus_operator,
    ACTIONS(221), 1,
      sym_relocation_type,
    ACTIONS(227), 1,
      aux_sym_decimal_token1,
    ACTIONS(229), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(237), 1,
      aux_sym_symbol_token1,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    STATE(304), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(312), 1,
      sym__assignment_expression,
    STATE(313), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__wrapped_logical_or_expression,
    STATE(315), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__wrapped_logical_and_expression,
    STATE(317), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(319), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(321), 1,
      sym__bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(327), 1,
      sym__wrapped_shift_expression,
    STATE(329), 1,
      sym__wrapped_additive_expression,
    STATE(330), 1,
      sym__multiplicative_expression,
    STATE(350), 1,
      sym__additive_expression,
    STATE(470), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(219), 2,
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
    STATE(349), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12707] = 5,
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
  [12764] = 4,
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
  [12818] = 4,
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
  [12872] = 4,
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
  [12926] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(299), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(301), 20,
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
  [12958] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(303), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(305), 20,
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
  [12990] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(307), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(309), 20,
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
  [13022] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(311), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(313), 20,
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
  [13054] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(315), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(317), 20,
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
  [13086] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(319), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(321), 20,
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
  [13118] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(323), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(325), 20,
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
  [13150] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(331), 1,
      sym_logical_or_operator,
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
  [13184] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(333), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(335), 20,
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
  [13216] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(341), 1,
      sym_logical_and_operator,
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
  [13250] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(343), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(345), 20,
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
  [13282] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(351), 1,
      sym_bitwise_or_operator,
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
  [13316] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(353), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(355), 20,
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
  [13348] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(361), 1,
      sym_bitwise_xor_operator,
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
  [13382] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(363), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(365), 20,
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
  [13414] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(371), 1,
      sym_bitwise_and_operator,
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
  [13448] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(373), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(375), 20,
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
  [13480] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(381), 1,
      sym_equality_operator,
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
  [13514] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(383), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(385), 20,
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
  [13546] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(391), 1,
      sym_relational_operator,
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
  [13580] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(393), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(395), 20,
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
  [13612] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(401), 1,
      sym_shift_operator,
    ACTIONS(397), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(399), 19,
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
  [13646] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(403), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(405), 20,
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
  [13678] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(411), 1,
      sym_additive_operator,
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
  [13712] = 4,
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
  [13746] = 5,
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
  [13782] = 3,
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
  [13814] = 3,
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
  [13846] = 3,
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
  [13878] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(341), 1,
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
  [13912] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(351), 1,
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
  [13946] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(361), 1,
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
  [13980] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(371), 1,
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
  [14014] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(381), 1,
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
  [14048] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(391), 1,
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
  [14082] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(401), 1,
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
  [14116] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(411), 1,
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
  [14150] = 4,
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
  [14184] = 3,
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
  [14216] = 3,
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
  [14248] = 3,
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
  [14280] = 3,
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
  [14312] = 3,
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
  [14344] = 4,
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
  [14374] = 3,
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
  [14402] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(305), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(303), 15,
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
  [14430] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(309), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(307), 15,
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
  [14458] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
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
  [14486] = 3,
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
  [14514] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(325), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(323), 15,
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
  [14542] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(497), 1,
      sym_logical_or_operator,
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
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14572] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(335), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [14600] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(499), 1,
      sym_logical_and_operator,
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
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14630] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(345), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(343), 15,
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
  [14658] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(501), 1,
      sym_bitwise_or_operator,
    ACTIONS(349), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(347), 15,
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
  [14688] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(355), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [14716] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(503), 1,
      sym_bitwise_xor_operator,
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
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14746] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(365), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(363), 15,
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
  [14774] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(505), 1,
      sym_bitwise_and_operator,
    ACTIONS(369), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(367), 15,
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
  [14804] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(375), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
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
  [14832] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(507), 1,
      sym_equality_operator,
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
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14862] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(385), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(383), 15,
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
  [14890] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(495), 1,
      sym_relational_operator,
    ACTIONS(389), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(387), 15,
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
  [14920] = 3,
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
  [14948] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(509), 1,
      sym_shift_operator,
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
      sym_line_comment,
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [14978] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(405), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(403), 15,
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
  [15006] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(511), 1,
      sym_additive_operator,
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
      sym_block_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [15036] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(301), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(299), 15,
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
  [15064] = 4,
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
  [15094] = 5,
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
  [15126] = 3,
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
  [15154] = 3,
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
  [15182] = 3,
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
  [15210] = 4,
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
  [15240] = 4,
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
  [15270] = 4,
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
  [15300] = 4,
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
  [15330] = 4,
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
  [15360] = 4,
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
  [15390] = 4,
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
  [15420] = 4,
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
  [15450] = 3,
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
  [15478] = 3,
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
  [15506] = 3,
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
  [15534] = 3,
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
  [15562] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(313), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(311), 15,
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
  [15590] = 4,
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
  [15619] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15646] = 4,
    ACTIONS(521), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15675] = 3,
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
  [15702] = 3,
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
  [15729] = 4,
    ACTIONS(523), 1,
      sym_logical_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(339), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(337), 12,
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
  [15758] = 3,
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
  [15785] = 4,
    ACTIONS(525), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(349), 4,
      sym_assignment_operator,
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
  [15814] = 3,
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
  [15841] = 4,
    ACTIONS(527), 1,
      sym_bitwise_xor_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(359), 5,
      sym_assignment_operator,
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
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15870] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(365), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(363), 13,
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
  [15897] = 4,
    ACTIONS(529), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(369), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [15926] = 4,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(531), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(305), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(303), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15955] = 3,
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
  [15982] = 3,
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
  [16009] = 3,
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
  [16036] = 4,
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
  [16065] = 4,
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
  [16094] = 4,
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
  [16123] = 4,
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
  [16152] = 4,
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
  [16181] = 3,
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
  [16208] = 4,
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
  [16237] = 4,
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
  [16266] = 3,
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
  [16293] = 3,
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
  [16320] = 5,
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
  [16351] = 3,
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
  [16378] = 3,
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
  [16405] = 3,
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
  [16432] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(317), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(315), 13,
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
  [16459] = 3,
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
  [16486] = 4,
    ACTIONS(533), 1,
      sym_equality_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(379), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(377), 12,
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
  [16515] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(385), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(383), 13,
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
  [16542] = 4,
    ACTIONS(519), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(389), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(387), 13,
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
  [16571] = 3,
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
  [16598] = 4,
    ACTIONS(543), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [16627] = 3,
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
  [16654] = 4,
    ACTIONS(535), 1,
      sym_additive_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(409), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(407), 12,
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
  [16683] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16710] = 3,
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
  [16737] = 4,
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
  [16766] = 3,
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
  [16793] = 4,
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
  [16822] = 4,
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
  [16850] = 4,
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
  [16878] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(303), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(305), 14,
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
  [16906] = 4,
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
  [16934] = 5,
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
  [16964] = 4,
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
  [16990] = 5,
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
  [17018] = 3,
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
  [17042] = 3,
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
  [17066] = 3,
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
  [17090] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(313), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [17114] = 3,
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
  [17138] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(317), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(315), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17162] = 3,
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
  [17186] = 3,
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
  [17210] = 3,
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
  [17234] = 3,
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
  [17258] = 4,
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
  [17284] = 3,
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
  [17308] = 4,
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
  [17334] = 4,
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
  [17360] = 4,
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
  [17386] = 4,
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
  [17412] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [17436] = 4,
    ACTIONS(569), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17462] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [17486] = 4,
    ACTIONS(563), 1,
      sym_logical_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(339), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(337), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17512] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [17536] = 4,
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
  [17562] = 4,
    ACTIONS(565), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(349), 4,
      sym_assignment_operator,
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
  [17588] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(355), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [17612] = 4,
    ACTIONS(567), 1,
      sym_bitwise_xor_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(359), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(357), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17638] = 4,
    ACTIONS(573), 1,
      sym_additive_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(409), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(407), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [17664] = 4,
    ACTIONS(575), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(369), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [17690] = 3,
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
  [17714] = 4,
    ACTIONS(577), 1,
      sym_equality_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(379), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(377), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17740] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(385), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(383), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17764] = 4,
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
  [17790] = 4,
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
  [17816] = 4,
    ACTIONS(581), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(389), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [17842] = 3,
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
  [17866] = 4,
    ACTIONS(583), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [17892] = 13,
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
    STATE(328), 1,
      aux_sym_numeric_operands_repeat1,
    STATE(354), 1,
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
  [17936] = 4,
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
  [17962] = 4,
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
  [17988] = 4,
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
  [18014] = 4,
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
  [18040] = 3,
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
  [18064] = 3,
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
  [18088] = 3,
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
  [18112] = 4,
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
  [18138] = 4,
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
  [18164] = 3,
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
  [18188] = 4,
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
  [18214] = 4,
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
  [18240] = 4,
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
  [18266] = 4,
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
  [18292] = 4,
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
  [18318] = 4,
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
  [18344] = 4,
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
  [18370] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(365), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
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
  [18394] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(331), 1,
      sym_logical_or_operator,
    ACTIONS(393), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(395), 10,
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
  [18419] = 4,
    ACTIONS(621), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(369), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [18443] = 3,
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
  [18465] = 3,
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
  [18487] = 5,
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
  [18513] = 5,
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
  [18539] = 3,
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
  [18561] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(313), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [18583] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(317), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(315), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18605] = 3,
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
  [18627] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [18649] = 4,
    ACTIONS(631), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(329), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(327), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18673] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [18695] = 4,
    ACTIONS(633), 1,
      sym_logical_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(339), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(337), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18719] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [18741] = 4,
    ACTIONS(635), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(349), 4,
      sym_assignment_operator,
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
  [18765] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(355), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [18787] = 4,
    ACTIONS(637), 1,
      sym_bitwise_xor_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(359), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(357), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18811] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(365), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(363), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18833] = 3,
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
  [18855] = 4,
    ACTIONS(639), 1,
      sym_equality_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(379), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(377), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18879] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(385), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(383), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18901] = 4,
    ACTIONS(641), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(389), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [18925] = 3,
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
  [18947] = 4,
    ACTIONS(643), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [18971] = 9,
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
    STATE(351), 1,
      aux_sym_numeric_operands_repeat1,
    STATE(353), 1,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(57), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(59), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19005] = 4,
    ACTIONS(647), 1,
      sym_additive_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(409), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(407), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [19029] = 3,
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
  [19051] = 4,
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
  [19075] = 5,
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
  [19101] = 5,
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
  [19127] = 3,
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
  [19149] = 3,
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
  [19171] = 3,
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
  [19193] = 3,
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
  [19215] = 3,
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
  [19237] = 3,
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
  [19259] = 3,
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
  [19281] = 4,
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
  [19305] = 4,
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
  [19329] = 4,
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
  [19353] = 4,
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
  [19377] = 4,
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
  [19401] = 4,
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
  [19425] = 4,
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
  [19449] = 4,
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
  [19473] = 4,
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
  [19497] = 3,
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
  [19519] = 9,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(659), 1,
      sym_line_comment,
    ACTIONS(662), 1,
      sym_block_comment,
    ACTIONS(665), 1,
      anon_sym_COMMA,
    STATE(351), 1,
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
  [19552] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(678), 1,
      sym__data_separator,
    STATE(352), 1,
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
  [19577] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(681), 1,
      sym__data_separator,
    STATE(352), 1,
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
  [19602] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(681), 1,
      sym__data_separator,
    STATE(352), 1,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(57), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(59), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19627] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(497), 1,
      sym_logical_or_operator,
    ACTIONS(393), 10,
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
  [19646] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    STATE(362), 1,
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
  [19670] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    STATE(14), 1,
      sym__control_operand_separator,
    STATE(357), 1,
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
  [19692] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    STATE(362), 1,
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
  [19716] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(698), 1,
      sym_block_comment,
    STATE(14), 1,
      sym__control_operand_separator,
    STATE(357), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(700), 3,
      sym__operand_separator,
      sym__data_separator,
      aux_sym__control_operand_separator_token1,
    ACTIONS(53), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19740] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(704), 1,
      sym_block_comment,
    STATE(14), 1,
      sym__control_operand_separator,
    STATE(359), 1,
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
  [19764] = 4,
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
  [19784] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    STATE(362), 1,
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
  [19808] = 3,
    ACTIONS(521), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(393), 8,
      sym__operand_separator,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
  [19826] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    STATE(358), 1,
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
  [19850] = 4,
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
  [19869] = 2,
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
  [19883] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(733), 1,
      aux_sym__whitespace_token1,
    ACTIONS(735), 1,
      anon_sym_COMMA,
    STATE(375), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(729), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(731), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [19907] = 2,
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
  [19921] = 5,
    ACTIONS(741), 1,
      anon_sym_COMMA,
    ACTIONS(743), 1,
      sym__operand_separator,
    STATE(371), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(739), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19941] = 2,
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
  [19955] = 5,
    ACTIONS(741), 1,
      anon_sym_COMMA,
    ACTIONS(747), 1,
      sym__operand_separator,
    STATE(373), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(745), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19975] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(733), 1,
      aux_sym__whitespace_token1,
    ACTIONS(735), 1,
      anon_sym_COMMA,
    STATE(367), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(749), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(751), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [19999] = 4,
    STATE(373), 1,
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
  [20017] = 2,
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
  [20031] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(764), 1,
      aux_sym__whitespace_token1,
    ACTIONS(767), 1,
      anon_sym_COMMA,
    STATE(375), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(760), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(762), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [20055] = 2,
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
  [20069] = 7,
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
  [20093] = 6,
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
  [20114] = 4,
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
  [20131] = 2,
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
  [20144] = 4,
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
  [20161] = 2,
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
  [20174] = 3,
    ACTIONS(569), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(393), 5,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
  [20189] = 2,
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
  [20202] = 4,
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
  [20218] = 4,
    ACTIONS(555), 1,
      anon_sym_LPAREN,
    ACTIONS(798), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(723), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20234] = 5,
    ACTIONS(555), 1,
      anon_sym_LPAREN,
    ACTIONS(798), 1,
      sym_assignment_operator,
    ACTIONS(800), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(723), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [20252] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(807), 1,
      aux_sym__whitespace_token1,
    ACTIONS(803), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(805), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [20270] = 5,
    ACTIONS(555), 1,
      anon_sym_LPAREN,
    ACTIONS(798), 1,
      sym_assignment_operator,
    ACTIONS(809), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(723), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [20288] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(812), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(758), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
  [20304] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(818), 1,
      aux_sym__whitespace_token1,
    ACTIONS(820), 1,
      sym_block_comment,
    ACTIONS(814), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(816), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [20322] = 5,
    ACTIONS(555), 1,
      anon_sym_LPAREN,
    ACTIONS(798), 1,
      sym_assignment_operator,
    ACTIONS(822), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(723), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [20340] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(825), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(827), 3,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
  [20354] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(833), 1,
      aux_sym__whitespace_token1,
    ACTIONS(835), 1,
      sym_block_comment,
    ACTIONS(829), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(831), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [20372] = 5,
    ACTIONS(555), 1,
      anon_sym_LPAREN,
    ACTIONS(798), 1,
      sym_assignment_operator,
    ACTIONS(837), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(723), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [20390] = 5,
    ACTIONS(555), 1,
      anon_sym_LPAREN,
    ACTIONS(798), 1,
      sym_assignment_operator,
    ACTIONS(840), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(723), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [20408] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(843), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(845), 3,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
  [20422] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(731), 1,
      anon_sym_RPAREN,
    ACTIONS(847), 1,
      aux_sym__whitespace_token1,
    ACTIONS(850), 1,
      anon_sym_COMMA,
    STATE(411), 1,
      aux_sym_macro_parameters_repeat1,
  [20441] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(852), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20452] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(854), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20463] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(856), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20474] = 3,
    ACTIONS(631), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(393), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_assignment_operator,
  [20487] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(858), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20498] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(860), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20509] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(862), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20520] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(864), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20531] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(866), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20542] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(868), 1,
      anon_sym_DQUOTE,
    STATE(410), 1,
      aux_sym_string_repeat1,
    ACTIONS(870), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20559] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(872), 1,
      aux_sym__whitespace_token1,
    ACTIONS(874), 1,
      anon_sym_RPAREN,
    ACTIONS(876), 1,
      sym_macro_parameter,
    STATE(455), 1,
      sym_macro_parameters,
  [20578] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(878), 1,
      anon_sym_DQUOTE,
    STATE(436), 1,
      aux_sym_string_repeat1,
    ACTIONS(880), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20595] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(762), 1,
      anon_sym_RPAREN,
    ACTIONS(882), 1,
      aux_sym__whitespace_token1,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    STATE(411), 1,
      aux_sym_macro_parameters_repeat1,
  [20614] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(888), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20625] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(890), 1,
      anon_sym_DQUOTE,
    STATE(436), 1,
      aux_sym_string_repeat1,
    ACTIONS(880), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20642] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(892), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20653] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(894), 1,
      anon_sym_DQUOTE,
    STATE(418), 1,
      aux_sym_string_repeat1,
    ACTIONS(896), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20670] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(898), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20681] = 4,
    ACTIONS(753), 1,
      anon_sym_RPAREN,
    STATE(417), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(900), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [20696] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(903), 1,
      anon_sym_DQUOTE,
    STATE(436), 1,
      aux_sym_string_repeat1,
    ACTIONS(880), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20713] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(905), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20724] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(751), 1,
      anon_sym_RPAREN,
    ACTIONS(850), 1,
      anon_sym_COMMA,
    ACTIONS(907), 1,
      aux_sym__whitespace_token1,
    STATE(398), 1,
      aux_sym_macro_parameters_repeat1,
  [20743] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(910), 1,
      anon_sym_DQUOTE,
    STATE(424), 1,
      aux_sym_string_repeat1,
    ACTIONS(912), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20760] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(914), 1,
      anon_sym_DQUOTE,
    STATE(413), 1,
      aux_sym_string_repeat1,
    ACTIONS(916), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20777] = 5,
    ACTIONS(739), 1,
      anon_sym_RPAREN,
    ACTIONS(918), 1,
      anon_sym_COMMA,
    ACTIONS(920), 1,
      sym__operand_separator,
    STATE(426), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20794] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(922), 1,
      anon_sym_DQUOTE,
    STATE(436), 1,
      aux_sym_string_repeat1,
    ACTIONS(880), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20811] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(876), 1,
      sym_macro_parameter,
    ACTIONS(924), 1,
      aux_sym__whitespace_token1,
    ACTIONS(926), 1,
      anon_sym_RPAREN,
    STATE(452), 1,
      sym_macro_parameters,
  [20830] = 5,
    ACTIONS(745), 1,
      anon_sym_RPAREN,
    ACTIONS(918), 1,
      anon_sym_COMMA,
    ACTIONS(928), 1,
      sym__operand_separator,
    STATE(417), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20847] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(930), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20858] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(866), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20869] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(932), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20880] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(934), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20891] = 4,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(938), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(936), 2,
      sym__line_separator,
      anon_sym_SEMI,
  [20906] = 4,
    ACTIONS(940), 1,
      ts_builtin_sym_end,
    ACTIONS(942), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(936), 2,
      sym__line_separator,
      anon_sym_SEMI,
  [20921] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(531), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20932] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(944), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20943] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(946), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20954] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(948), 1,
      anon_sym_DQUOTE,
    STATE(436), 1,
      aux_sym_string_repeat1,
    ACTIONS(950), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20971] = 3,
    ACTIONS(205), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(79), 2,
      sym__data_separator,
      anon_sym_COMMA,
  [20983] = 4,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
    ACTIONS(953), 1,
      anon_sym_RPAREN,
    ACTIONS(955), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20997] = 4,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
    ACTIONS(955), 1,
      sym_assignment_operator,
    ACTIONS(957), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21011] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(760), 1,
      aux_sym__whitespace_token1,
    ACTIONS(762), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21025] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(770), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21035] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(959), 1,
      anon_sym_LPAREN,
    ACTIONS(961), 1,
      sym_macro_parameter,
    STATE(401), 1,
      sym_macro_parameters,
  [21051] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(790), 1,
      aux_sym__whitespace_token1,
    ACTIONS(792), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21065] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(794), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21075] = 4,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
    ACTIONS(955), 1,
      sym_assignment_operator,
    ACTIONS(963), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21089] = 3,
    ACTIONS(965), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(936), 2,
      sym__line_separator,
      anon_sym_SEMI,
  [21101] = 4,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
    ACTIONS(955), 1,
      sym_assignment_operator,
    ACTIONS(967), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21115] = 4,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
    ACTIONS(955), 1,
      sym_assignment_operator,
    ACTIONS(969), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21129] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(758), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21139] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(971), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [21150] = 3,
    ACTIONS(515), 1,
      anon_sym_LPAREN,
    ACTIONS(955), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21161] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(973), 1,
      aux_sym__whitespace_token1,
    ACTIONS(975), 1,
      anon_sym_RPAREN,
  [21174] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(977), 1,
      anon_sym_COMMA,
    ACTIONS(979), 1,
      sym_macro_parameter,
  [21187] = 3,
    ACTIONS(955), 1,
      sym_assignment_operator,
    ACTIONS(981), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21198] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(983), 1,
      aux_sym__whitespace_token1,
    ACTIONS(985), 1,
      anon_sym_RPAREN,
  [21211] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(987), 2,
      sym__data_separator,
      anon_sym_COMMA,
  [21220] = 3,
    ACTIONS(989), 1,
      ts_builtin_sym_end,
    ACTIONS(991), 1,
      sym__line_separator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21231] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(993), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [21242] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(995), 1,
      anon_sym_COMMA,
    ACTIONS(997), 1,
      sym_macro_parameter,
  [21255] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(999), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [21266] = 3,
    ACTIONS(940), 1,
      ts_builtin_sym_end,
    ACTIONS(991), 1,
      sym__line_separator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21277] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(936), 1,
      aux_sym__statement_token1,
  [21290] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1001), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [21301] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(936), 1,
      aux_sym__statement_token1,
    ACTIONS(940), 1,
      ts_builtin_sym_end,
  [21314] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1003), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [21325] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(79), 2,
      sym__data_separator,
      anon_sym_COMMA,
  [21334] = 3,
    ACTIONS(539), 1,
      anon_sym_LPAREN,
    ACTIONS(955), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21345] = 3,
    ACTIONS(555), 1,
      anon_sym_LPAREN,
    ACTIONS(955), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21356] = 3,
    ACTIONS(955), 1,
      sym_assignment_operator,
    ACTIONS(1005), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21367] = 3,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
    ACTIONS(955), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21378] = 2,
    ACTIONS(1007), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21386] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(1009), 1,
      aux_sym__whitespace_token1,
    ACTIONS(1011), 1,
      sym_block_comment,
  [21396] = 2,
    ACTIONS(1013), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21404] = 2,
    ACTIONS(1015), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21412] = 2,
    ACTIONS(1017), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21420] = 2,
    ACTIONS(1019), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21428] = 2,
    ACTIONS(1021), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21436] = 2,
    ACTIONS(1023), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21444] = 2,
    ACTIONS(1025), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21452] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(936), 1,
      aux_sym__statement_token1,
  [21462] = 2,
    ACTIONS(1027), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21470] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(979), 1,
      sym_macro_parameter,
  [21480] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(1029), 1,
      aux_sym__whitespace_token1,
    ACTIONS(1031), 1,
      sym_block_comment,
  [21490] = 2,
    ACTIONS(1033), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21498] = 2,
    ACTIONS(1035), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21506] = 2,
    ACTIONS(991), 1,
      sym__line_separator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21514] = 2,
    ACTIONS(1037), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21522] = 2,
    ACTIONS(1039), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21530] = 2,
    ACTIONS(1041), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21538] = 2,
    ACTIONS(1043), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21546] = 2,
    ACTIONS(1045), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21554] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1047), 1,
      sym_macro_parameter,
  [21564] = 2,
    ACTIONS(1049), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21572] = 2,
    ACTIONS(1051), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21580] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1053), 1,
      sym_macro_parameter,
  [21590] = 2,
    ACTIONS(1055), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21598] = 2,
    ACTIONS(1057), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21606] = 2,
    ACTIONS(1059), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21614] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(1061), 1,
      aux_sym__whitespace_token1,
    ACTIONS(1063), 1,
      sym_block_comment,
  [21624] = 2,
    ACTIONS(1065), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21632] = 2,
    ACTIONS(1067), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21640] = 2,
    ACTIONS(1069), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21648] = 2,
    ACTIONS(1071), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21656] = 2,
    ACTIONS(1073), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21664] = 2,
    ACTIONS(1075), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21672] = 2,
    ACTIONS(1077), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21680] = 2,
    ACTIONS(1079), 1,
      sym_macro_name,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21688] = 2,
    ACTIONS(1081), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21696] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(997), 1,
      sym_macro_parameter,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 140,
  [SMALL_STATE(4)] = 277,
  [SMALL_STATE(5)] = 414,
  [SMALL_STATE(6)] = 546,
  [SMALL_STATE(7)] = 680,
  [SMALL_STATE(8)] = 812,
  [SMALL_STATE(9)] = 939,
  [SMALL_STATE(10)] = 1074,
  [SMALL_STATE(11)] = 1172,
  [SMALL_STATE(12)] = 1270,
  [SMALL_STATE(13)] = 1399,
  [SMALL_STATE(14)] = 1528,
  [SMALL_STATE(15)] = 1659,
  [SMALL_STATE(16)] = 1788,
  [SMALL_STATE(17)] = 1921,
  [SMALL_STATE(18)] = 2051,
  [SMALL_STATE(19)] = 2181,
  [SMALL_STATE(20)] = 2311,
  [SMALL_STATE(21)] = 2441,
  [SMALL_STATE(22)] = 2567,
  [SMALL_STATE(23)] = 2697,
  [SMALL_STATE(24)] = 2823,
  [SMALL_STATE(25)] = 2953,
  [SMALL_STATE(26)] = 3083,
  [SMALL_STATE(27)] = 3213,
  [SMALL_STATE(28)] = 3343,
  [SMALL_STATE(29)] = 3473,
  [SMALL_STATE(30)] = 3603,
  [SMALL_STATE(31)] = 3733,
  [SMALL_STATE(32)] = 3856,
  [SMALL_STATE(33)] = 3979,
  [SMALL_STATE(34)] = 4102,
  [SMALL_STATE(35)] = 4229,
  [SMALL_STATE(36)] = 4345,
  [SMALL_STATE(37)] = 4461,
  [SMALL_STATE(38)] = 4577,
  [SMALL_STATE(39)] = 4693,
  [SMALL_STATE(40)] = 4809,
  [SMALL_STATE(41)] = 4925,
  [SMALL_STATE(42)] = 5041,
  [SMALL_STATE(43)] = 5157,
  [SMALL_STATE(44)] = 5273,
  [SMALL_STATE(45)] = 5389,
  [SMALL_STATE(46)] = 5505,
  [SMALL_STATE(47)] = 5621,
  [SMALL_STATE(48)] = 5737,
  [SMALL_STATE(49)] = 5853,
  [SMALL_STATE(50)] = 5969,
  [SMALL_STATE(51)] = 6085,
  [SMALL_STATE(52)] = 6201,
  [SMALL_STATE(53)] = 6319,
  [SMALL_STATE(54)] = 6435,
  [SMALL_STATE(55)] = 6551,
  [SMALL_STATE(56)] = 6667,
  [SMALL_STATE(57)] = 6783,
  [SMALL_STATE(58)] = 6899,
  [SMALL_STATE(59)] = 7015,
  [SMALL_STATE(60)] = 7131,
  [SMALL_STATE(61)] = 7247,
  [SMALL_STATE(62)] = 7363,
  [SMALL_STATE(63)] = 7479,
  [SMALL_STATE(64)] = 7595,
  [SMALL_STATE(65)] = 7711,
  [SMALL_STATE(66)] = 7829,
  [SMALL_STATE(67)] = 7945,
  [SMALL_STATE(68)] = 8061,
  [SMALL_STATE(69)] = 8177,
  [SMALL_STATE(70)] = 8293,
  [SMALL_STATE(71)] = 8409,
  [SMALL_STATE(72)] = 8525,
  [SMALL_STATE(73)] = 8641,
  [SMALL_STATE(74)] = 8757,
  [SMALL_STATE(75)] = 8873,
  [SMALL_STATE(76)] = 8991,
  [SMALL_STATE(77)] = 9107,
  [SMALL_STATE(78)] = 9223,
  [SMALL_STATE(79)] = 9339,
  [SMALL_STATE(80)] = 9455,
  [SMALL_STATE(81)] = 9571,
  [SMALL_STATE(82)] = 9687,
  [SMALL_STATE(83)] = 9803,
  [SMALL_STATE(84)] = 9919,
  [SMALL_STATE(85)] = 10035,
  [SMALL_STATE(86)] = 10151,
  [SMALL_STATE(87)] = 10269,
  [SMALL_STATE(88)] = 10385,
  [SMALL_STATE(89)] = 10501,
  [SMALL_STATE(90)] = 10617,
  [SMALL_STATE(91)] = 10733,
  [SMALL_STATE(92)] = 10849,
  [SMALL_STATE(93)] = 10965,
  [SMALL_STATE(94)] = 11081,
  [SMALL_STATE(95)] = 11197,
  [SMALL_STATE(96)] = 11313,
  [SMALL_STATE(97)] = 11429,
  [SMALL_STATE(98)] = 11545,
  [SMALL_STATE(99)] = 11661,
  [SMALL_STATE(100)] = 11777,
  [SMALL_STATE(101)] = 11893,
  [SMALL_STATE(102)] = 12011,
  [SMALL_STATE(103)] = 12127,
  [SMALL_STATE(104)] = 12243,
  [SMALL_STATE(105)] = 12359,
  [SMALL_STATE(106)] = 12475,
  [SMALL_STATE(107)] = 12591,
  [SMALL_STATE(108)] = 12707,
  [SMALL_STATE(109)] = 12764,
  [SMALL_STATE(110)] = 12818,
  [SMALL_STATE(111)] = 12872,
  [SMALL_STATE(112)] = 12926,
  [SMALL_STATE(113)] = 12958,
  [SMALL_STATE(114)] = 12990,
  [SMALL_STATE(115)] = 13022,
  [SMALL_STATE(116)] = 13054,
  [SMALL_STATE(117)] = 13086,
  [SMALL_STATE(118)] = 13118,
  [SMALL_STATE(119)] = 13150,
  [SMALL_STATE(120)] = 13184,
  [SMALL_STATE(121)] = 13216,
  [SMALL_STATE(122)] = 13250,
  [SMALL_STATE(123)] = 13282,
  [SMALL_STATE(124)] = 13316,
  [SMALL_STATE(125)] = 13348,
  [SMALL_STATE(126)] = 13382,
  [SMALL_STATE(127)] = 13414,
  [SMALL_STATE(128)] = 13448,
  [SMALL_STATE(129)] = 13480,
  [SMALL_STATE(130)] = 13514,
  [SMALL_STATE(131)] = 13546,
  [SMALL_STATE(132)] = 13580,
  [SMALL_STATE(133)] = 13612,
  [SMALL_STATE(134)] = 13646,
  [SMALL_STATE(135)] = 13678,
  [SMALL_STATE(136)] = 13712,
  [SMALL_STATE(137)] = 13746,
  [SMALL_STATE(138)] = 13782,
  [SMALL_STATE(139)] = 13814,
  [SMALL_STATE(140)] = 13846,
  [SMALL_STATE(141)] = 13878,
  [SMALL_STATE(142)] = 13912,
  [SMALL_STATE(143)] = 13946,
  [SMALL_STATE(144)] = 13980,
  [SMALL_STATE(145)] = 14014,
  [SMALL_STATE(146)] = 14048,
  [SMALL_STATE(147)] = 14082,
  [SMALL_STATE(148)] = 14116,
  [SMALL_STATE(149)] = 14150,
  [SMALL_STATE(150)] = 14184,
  [SMALL_STATE(151)] = 14216,
  [SMALL_STATE(152)] = 14248,
  [SMALL_STATE(153)] = 14280,
  [SMALL_STATE(154)] = 14312,
  [SMALL_STATE(155)] = 14344,
  [SMALL_STATE(156)] = 14374,
  [SMALL_STATE(157)] = 14402,
  [SMALL_STATE(158)] = 14430,
  [SMALL_STATE(159)] = 14458,
  [SMALL_STATE(160)] = 14486,
  [SMALL_STATE(161)] = 14514,
  [SMALL_STATE(162)] = 14542,
  [SMALL_STATE(163)] = 14572,
  [SMALL_STATE(164)] = 14600,
  [SMALL_STATE(165)] = 14630,
  [SMALL_STATE(166)] = 14658,
  [SMALL_STATE(167)] = 14688,
  [SMALL_STATE(168)] = 14716,
  [SMALL_STATE(169)] = 14746,
  [SMALL_STATE(170)] = 14774,
  [SMALL_STATE(171)] = 14804,
  [SMALL_STATE(172)] = 14832,
  [SMALL_STATE(173)] = 14862,
  [SMALL_STATE(174)] = 14890,
  [SMALL_STATE(175)] = 14920,
  [SMALL_STATE(176)] = 14948,
  [SMALL_STATE(177)] = 14978,
  [SMALL_STATE(178)] = 15006,
  [SMALL_STATE(179)] = 15036,
  [SMALL_STATE(180)] = 15064,
  [SMALL_STATE(181)] = 15094,
  [SMALL_STATE(182)] = 15126,
  [SMALL_STATE(183)] = 15154,
  [SMALL_STATE(184)] = 15182,
  [SMALL_STATE(185)] = 15210,
  [SMALL_STATE(186)] = 15240,
  [SMALL_STATE(187)] = 15270,
  [SMALL_STATE(188)] = 15300,
  [SMALL_STATE(189)] = 15330,
  [SMALL_STATE(190)] = 15360,
  [SMALL_STATE(191)] = 15390,
  [SMALL_STATE(192)] = 15420,
  [SMALL_STATE(193)] = 15450,
  [SMALL_STATE(194)] = 15478,
  [SMALL_STATE(195)] = 15506,
  [SMALL_STATE(196)] = 15534,
  [SMALL_STATE(197)] = 15562,
  [SMALL_STATE(198)] = 15590,
  [SMALL_STATE(199)] = 15619,
  [SMALL_STATE(200)] = 15646,
  [SMALL_STATE(201)] = 15675,
  [SMALL_STATE(202)] = 15702,
  [SMALL_STATE(203)] = 15729,
  [SMALL_STATE(204)] = 15758,
  [SMALL_STATE(205)] = 15785,
  [SMALL_STATE(206)] = 15814,
  [SMALL_STATE(207)] = 15841,
  [SMALL_STATE(208)] = 15870,
  [SMALL_STATE(209)] = 15897,
  [SMALL_STATE(210)] = 15926,
  [SMALL_STATE(211)] = 15955,
  [SMALL_STATE(212)] = 15982,
  [SMALL_STATE(213)] = 16009,
  [SMALL_STATE(214)] = 16036,
  [SMALL_STATE(215)] = 16065,
  [SMALL_STATE(216)] = 16094,
  [SMALL_STATE(217)] = 16123,
  [SMALL_STATE(218)] = 16152,
  [SMALL_STATE(219)] = 16181,
  [SMALL_STATE(220)] = 16208,
  [SMALL_STATE(221)] = 16237,
  [SMALL_STATE(222)] = 16266,
  [SMALL_STATE(223)] = 16293,
  [SMALL_STATE(224)] = 16320,
  [SMALL_STATE(225)] = 16351,
  [SMALL_STATE(226)] = 16378,
  [SMALL_STATE(227)] = 16405,
  [SMALL_STATE(228)] = 16432,
  [SMALL_STATE(229)] = 16459,
  [SMALL_STATE(230)] = 16486,
  [SMALL_STATE(231)] = 16515,
  [SMALL_STATE(232)] = 16542,
  [SMALL_STATE(233)] = 16571,
  [SMALL_STATE(234)] = 16598,
  [SMALL_STATE(235)] = 16627,
  [SMALL_STATE(236)] = 16654,
  [SMALL_STATE(237)] = 16683,
  [SMALL_STATE(238)] = 16710,
  [SMALL_STATE(239)] = 16737,
  [SMALL_STATE(240)] = 16766,
  [SMALL_STATE(241)] = 16793,
  [SMALL_STATE(242)] = 16822,
  [SMALL_STATE(243)] = 16850,
  [SMALL_STATE(244)] = 16878,
  [SMALL_STATE(245)] = 16906,
  [SMALL_STATE(246)] = 16934,
  [SMALL_STATE(247)] = 16964,
  [SMALL_STATE(248)] = 16990,
  [SMALL_STATE(249)] = 17018,
  [SMALL_STATE(250)] = 17042,
  [SMALL_STATE(251)] = 17066,
  [SMALL_STATE(252)] = 17090,
  [SMALL_STATE(253)] = 17114,
  [SMALL_STATE(254)] = 17138,
  [SMALL_STATE(255)] = 17162,
  [SMALL_STATE(256)] = 17186,
  [SMALL_STATE(257)] = 17210,
  [SMALL_STATE(258)] = 17234,
  [SMALL_STATE(259)] = 17258,
  [SMALL_STATE(260)] = 17284,
  [SMALL_STATE(261)] = 17308,
  [SMALL_STATE(262)] = 17334,
  [SMALL_STATE(263)] = 17360,
  [SMALL_STATE(264)] = 17386,
  [SMALL_STATE(265)] = 17412,
  [SMALL_STATE(266)] = 17436,
  [SMALL_STATE(267)] = 17462,
  [SMALL_STATE(268)] = 17486,
  [SMALL_STATE(269)] = 17512,
  [SMALL_STATE(270)] = 17536,
  [SMALL_STATE(271)] = 17562,
  [SMALL_STATE(272)] = 17588,
  [SMALL_STATE(273)] = 17612,
  [SMALL_STATE(274)] = 17638,
  [SMALL_STATE(275)] = 17664,
  [SMALL_STATE(276)] = 17690,
  [SMALL_STATE(277)] = 17714,
  [SMALL_STATE(278)] = 17740,
  [SMALL_STATE(279)] = 17764,
  [SMALL_STATE(280)] = 17790,
  [SMALL_STATE(281)] = 17816,
  [SMALL_STATE(282)] = 17842,
  [SMALL_STATE(283)] = 17866,
  [SMALL_STATE(284)] = 17892,
  [SMALL_STATE(285)] = 17936,
  [SMALL_STATE(286)] = 17962,
  [SMALL_STATE(287)] = 17988,
  [SMALL_STATE(288)] = 18014,
  [SMALL_STATE(289)] = 18040,
  [SMALL_STATE(290)] = 18064,
  [SMALL_STATE(291)] = 18088,
  [SMALL_STATE(292)] = 18112,
  [SMALL_STATE(293)] = 18138,
  [SMALL_STATE(294)] = 18164,
  [SMALL_STATE(295)] = 18188,
  [SMALL_STATE(296)] = 18214,
  [SMALL_STATE(297)] = 18240,
  [SMALL_STATE(298)] = 18266,
  [SMALL_STATE(299)] = 18292,
  [SMALL_STATE(300)] = 18318,
  [SMALL_STATE(301)] = 18344,
  [SMALL_STATE(302)] = 18370,
  [SMALL_STATE(303)] = 18394,
  [SMALL_STATE(304)] = 18419,
  [SMALL_STATE(305)] = 18443,
  [SMALL_STATE(306)] = 18465,
  [SMALL_STATE(307)] = 18487,
  [SMALL_STATE(308)] = 18513,
  [SMALL_STATE(309)] = 18539,
  [SMALL_STATE(310)] = 18561,
  [SMALL_STATE(311)] = 18583,
  [SMALL_STATE(312)] = 18605,
  [SMALL_STATE(313)] = 18627,
  [SMALL_STATE(314)] = 18649,
  [SMALL_STATE(315)] = 18673,
  [SMALL_STATE(316)] = 18695,
  [SMALL_STATE(317)] = 18719,
  [SMALL_STATE(318)] = 18741,
  [SMALL_STATE(319)] = 18765,
  [SMALL_STATE(320)] = 18787,
  [SMALL_STATE(321)] = 18811,
  [SMALL_STATE(322)] = 18833,
  [SMALL_STATE(323)] = 18855,
  [SMALL_STATE(324)] = 18879,
  [SMALL_STATE(325)] = 18901,
  [SMALL_STATE(326)] = 18925,
  [SMALL_STATE(327)] = 18947,
  [SMALL_STATE(328)] = 18971,
  [SMALL_STATE(329)] = 19005,
  [SMALL_STATE(330)] = 19029,
  [SMALL_STATE(331)] = 19051,
  [SMALL_STATE(332)] = 19075,
  [SMALL_STATE(333)] = 19101,
  [SMALL_STATE(334)] = 19127,
  [SMALL_STATE(335)] = 19149,
  [SMALL_STATE(336)] = 19171,
  [SMALL_STATE(337)] = 19193,
  [SMALL_STATE(338)] = 19215,
  [SMALL_STATE(339)] = 19237,
  [SMALL_STATE(340)] = 19259,
  [SMALL_STATE(341)] = 19281,
  [SMALL_STATE(342)] = 19305,
  [SMALL_STATE(343)] = 19329,
  [SMALL_STATE(344)] = 19353,
  [SMALL_STATE(345)] = 19377,
  [SMALL_STATE(346)] = 19401,
  [SMALL_STATE(347)] = 19425,
  [SMALL_STATE(348)] = 19449,
  [SMALL_STATE(349)] = 19473,
  [SMALL_STATE(350)] = 19497,
  [SMALL_STATE(351)] = 19519,
  [SMALL_STATE(352)] = 19552,
  [SMALL_STATE(353)] = 19577,
  [SMALL_STATE(354)] = 19602,
  [SMALL_STATE(355)] = 19627,
  [SMALL_STATE(356)] = 19646,
  [SMALL_STATE(357)] = 19670,
  [SMALL_STATE(358)] = 19692,
  [SMALL_STATE(359)] = 19716,
  [SMALL_STATE(360)] = 19740,
  [SMALL_STATE(361)] = 19764,
  [SMALL_STATE(362)] = 19784,
  [SMALL_STATE(363)] = 19808,
  [SMALL_STATE(364)] = 19826,
  [SMALL_STATE(365)] = 19850,
  [SMALL_STATE(366)] = 19869,
  [SMALL_STATE(367)] = 19883,
  [SMALL_STATE(368)] = 19907,
  [SMALL_STATE(369)] = 19921,
  [SMALL_STATE(370)] = 19941,
  [SMALL_STATE(371)] = 19955,
  [SMALL_STATE(372)] = 19975,
  [SMALL_STATE(373)] = 19999,
  [SMALL_STATE(374)] = 20017,
  [SMALL_STATE(375)] = 20031,
  [SMALL_STATE(376)] = 20055,
  [SMALL_STATE(377)] = 20069,
  [SMALL_STATE(378)] = 20093,
  [SMALL_STATE(379)] = 20114,
  [SMALL_STATE(380)] = 20131,
  [SMALL_STATE(381)] = 20144,
  [SMALL_STATE(382)] = 20161,
  [SMALL_STATE(383)] = 20174,
  [SMALL_STATE(384)] = 20189,
  [SMALL_STATE(385)] = 20202,
  [SMALL_STATE(386)] = 20218,
  [SMALL_STATE(387)] = 20234,
  [SMALL_STATE(388)] = 20252,
  [SMALL_STATE(389)] = 20270,
  [SMALL_STATE(390)] = 20288,
  [SMALL_STATE(391)] = 20304,
  [SMALL_STATE(392)] = 20322,
  [SMALL_STATE(393)] = 20340,
  [SMALL_STATE(394)] = 20354,
  [SMALL_STATE(395)] = 20372,
  [SMALL_STATE(396)] = 20390,
  [SMALL_STATE(397)] = 20408,
  [SMALL_STATE(398)] = 20422,
  [SMALL_STATE(399)] = 20441,
  [SMALL_STATE(400)] = 20452,
  [SMALL_STATE(401)] = 20463,
  [SMALL_STATE(402)] = 20474,
  [SMALL_STATE(403)] = 20487,
  [SMALL_STATE(404)] = 20498,
  [SMALL_STATE(405)] = 20509,
  [SMALL_STATE(406)] = 20520,
  [SMALL_STATE(407)] = 20531,
  [SMALL_STATE(408)] = 20542,
  [SMALL_STATE(409)] = 20559,
  [SMALL_STATE(410)] = 20578,
  [SMALL_STATE(411)] = 20595,
  [SMALL_STATE(412)] = 20614,
  [SMALL_STATE(413)] = 20625,
  [SMALL_STATE(414)] = 20642,
  [SMALL_STATE(415)] = 20653,
  [SMALL_STATE(416)] = 20670,
  [SMALL_STATE(417)] = 20681,
  [SMALL_STATE(418)] = 20696,
  [SMALL_STATE(419)] = 20713,
  [SMALL_STATE(420)] = 20724,
  [SMALL_STATE(421)] = 20743,
  [SMALL_STATE(422)] = 20760,
  [SMALL_STATE(423)] = 20777,
  [SMALL_STATE(424)] = 20794,
  [SMALL_STATE(425)] = 20811,
  [SMALL_STATE(426)] = 20830,
  [SMALL_STATE(427)] = 20847,
  [SMALL_STATE(428)] = 20858,
  [SMALL_STATE(429)] = 20869,
  [SMALL_STATE(430)] = 20880,
  [SMALL_STATE(431)] = 20891,
  [SMALL_STATE(432)] = 20906,
  [SMALL_STATE(433)] = 20921,
  [SMALL_STATE(434)] = 20932,
  [SMALL_STATE(435)] = 20943,
  [SMALL_STATE(436)] = 20954,
  [SMALL_STATE(437)] = 20971,
  [SMALL_STATE(438)] = 20983,
  [SMALL_STATE(439)] = 20997,
  [SMALL_STATE(440)] = 21011,
  [SMALL_STATE(441)] = 21025,
  [SMALL_STATE(442)] = 21035,
  [SMALL_STATE(443)] = 21051,
  [SMALL_STATE(444)] = 21065,
  [SMALL_STATE(445)] = 21075,
  [SMALL_STATE(446)] = 21089,
  [SMALL_STATE(447)] = 21101,
  [SMALL_STATE(448)] = 21115,
  [SMALL_STATE(449)] = 21129,
  [SMALL_STATE(450)] = 21139,
  [SMALL_STATE(451)] = 21150,
  [SMALL_STATE(452)] = 21161,
  [SMALL_STATE(453)] = 21174,
  [SMALL_STATE(454)] = 21187,
  [SMALL_STATE(455)] = 21198,
  [SMALL_STATE(456)] = 21211,
  [SMALL_STATE(457)] = 21220,
  [SMALL_STATE(458)] = 21231,
  [SMALL_STATE(459)] = 21242,
  [SMALL_STATE(460)] = 21255,
  [SMALL_STATE(461)] = 21266,
  [SMALL_STATE(462)] = 21277,
  [SMALL_STATE(463)] = 21290,
  [SMALL_STATE(464)] = 21301,
  [SMALL_STATE(465)] = 21314,
  [SMALL_STATE(466)] = 21325,
  [SMALL_STATE(467)] = 21334,
  [SMALL_STATE(468)] = 21345,
  [SMALL_STATE(469)] = 21356,
  [SMALL_STATE(470)] = 21367,
  [SMALL_STATE(471)] = 21378,
  [SMALL_STATE(472)] = 21386,
  [SMALL_STATE(473)] = 21396,
  [SMALL_STATE(474)] = 21404,
  [SMALL_STATE(475)] = 21412,
  [SMALL_STATE(476)] = 21420,
  [SMALL_STATE(477)] = 21428,
  [SMALL_STATE(478)] = 21436,
  [SMALL_STATE(479)] = 21444,
  [SMALL_STATE(480)] = 21452,
  [SMALL_STATE(481)] = 21462,
  [SMALL_STATE(482)] = 21470,
  [SMALL_STATE(483)] = 21480,
  [SMALL_STATE(484)] = 21490,
  [SMALL_STATE(485)] = 21498,
  [SMALL_STATE(486)] = 21506,
  [SMALL_STATE(487)] = 21514,
  [SMALL_STATE(488)] = 21522,
  [SMALL_STATE(489)] = 21530,
  [SMALL_STATE(490)] = 21538,
  [SMALL_STATE(491)] = 21546,
  [SMALL_STATE(492)] = 21554,
  [SMALL_STATE(493)] = 21564,
  [SMALL_STATE(494)] = 21572,
  [SMALL_STATE(495)] = 21580,
  [SMALL_STATE(496)] = 21590,
  [SMALL_STATE(497)] = 21598,
  [SMALL_STATE(498)] = 21606,
  [SMALL_STATE(499)] = 21614,
  [SMALL_STATE(500)] = 21624,
  [SMALL_STATE(501)] = 21632,
  [SMALL_STATE(502)] = 21640,
  [SMALL_STATE(503)] = 21648,
  [SMALL_STATE(504)] = 21656,
  [SMALL_STATE(505)] = 21664,
  [SMALL_STATE(506)] = 21672,
  [SMALL_STATE(507)] = 21680,
  [SMALL_STATE(508)] = 21688,
  [SMALL_STATE(509)] = 21696,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 2, 0, 4),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_operands, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_operands, 3, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_operands, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_operands, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_directive, 2, 0, 4),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__numeric_directive, 2, 0, 4),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_operands, 3, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_operands, 3, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat2, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat2, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(480),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(499),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(393),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(483),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(397),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(377),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2, 0, 9),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 3, 0, 15),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 1, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label, 1, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 2, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label, 2, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_multiplicative_expression, 1, 0, 11),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_multiplicative_expression, 1, 0, 11),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 16),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 3, 0, 16),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal, 1, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_label_reference, 1, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_label_reference, 1, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 11),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 11),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 11),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 11),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 11),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 11),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 11),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 11),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 11),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 11),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 11),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 11),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 11),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 11),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 11),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 11),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assignment_expression, 3, 0, 22),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__assignment_expression, 3, 0, 22),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 11),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 11),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 14),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, 0, 14),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
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
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 3, 0, 16),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_operand, 1, 0, 0),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_operand, 1, 0, 0),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_expression, 1, 0, 0),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_expression, 1, 0, 0),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_operands, 1, 0, 0),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_operands, 1, 0, 0),
  [589] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_numeric_operands, 1, 0, 0), SHIFT(466),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [596] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_numeric_operands, 1, 0, 0), SHIFT(437),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 3, 0, 0),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 3, 0, 0),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 4, 0, 0),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 4, 0, 0),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0),
  [659] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(466),
  [662] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [665] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [668] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(437),
  [671] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat2, 2, 0, 0),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat2, 2, 0, 0),
  [678] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat2, 2, 0, 0), SHIFT_REPEAT(352),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_directive, 3, 0, 4),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__numeric_directive, 3, 0, 4),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0),
  [691] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_directive, 4, 0, 12),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__numeric_directive, 4, 0, 12),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_operands, 1, 0, 0),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_operand, 1, 0, 0),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__numeric_directive_repeat1, 2, 0, 0),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__numeric_directive_repeat1, 2, 0, 0),
  [714] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__numeric_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(362),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_directive, 3, 0, 12),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__numeric_directive, 3, 0, 12),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_flag, 1, 0, 0),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_parameters, 2, 0, 0),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_parameters, 2, 0, 0),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_type, 1, 0, 0),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 1, 0, 9),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2, 0, 15),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_parameters, 1, 0, 0),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_parameters, 1, 0, 0),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 21),
  [755] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 21), SHIFT_REPEAT(32),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0),
  [764] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(453),
  [767] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(482),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 1),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 1),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [778] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [780] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 3, 0, 7),
  [784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 3, 0, 7),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 3, 0, 0),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 3, 0, 0),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 20),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [800] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(211),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_directive, 3, 0, 13),
  [805] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_directive, 3, 0, 13),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [809] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(258),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 1, 0, 4),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_directive, 1, 0, 4),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [820] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [822] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(139),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_mnemonic, 1, 0, 0),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_mnemonic, 1, 0, 0),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_directive, 1, 0, 4),
  [831] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__numeric_directive, 1, 0, 4),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [837] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(338),
  [840] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(183),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_mnemonic, 1, 0, 0),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_mnemonic, 1, 0, 0),
  [847] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_macro_parameters, 2, 0, 0), SHIFT(459),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 5),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 2, 0, 0),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 5, 0, 17),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 8, 0, 26),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 5, 0, 7),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 7),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 26),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 3),
  [868] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [872] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [874] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [876] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [880] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [882] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(459),
  [885] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(509),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 17),
  [890] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 3, 0, 12),
  [894] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [896] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 17),
  [900] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 21), SHIFT_REPEAT(33),
  [903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_directive, 4, 0, 13),
  [907] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_macro_parameters, 1, 0, 0), SHIFT(459),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [914] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [916] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 8),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 6),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 7),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 10),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 2),
  [948] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [950] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(436),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [959] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [971] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [975] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [977] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 0),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [995] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [999] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [1003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1011] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_mnemonic, 1, 0, 0),
  [1031] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_mnemonic, 1, 0, 0),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1045] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1063] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
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
