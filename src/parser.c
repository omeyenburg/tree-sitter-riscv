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
#define STATE_COUNT 513
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 155
#define ALIAS_COUNT 0
#define TOKEN_COUNT 91
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
  sym__comment = 93,
  sym_directive = 94,
  sym__macro_directive = 95,
  sym_macro_parameters = 96,
  sym__numeric_directive = 97,
  sym_numeric_mnemonic = 98,
  sym_numeric_operands = 99,
  sym__string_directive = 100,
  sym_string_mnemonic = 101,
  sym__string_operand = 102,
  sym__control_directive = 103,
  sym_control_mnemonic = 104,
  sym_control_operands = 105,
  sym__control_operand = 106,
  sym__control_operand_separator = 107,
  sym_section_type = 108,
  sym_option_flag = 109,
  sym_instruction = 110,
  sym_operands = 111,
  sym__operand = 112,
  sym__call_expression = 113,
  sym__assignment_expression = 114,
  sym__wrapped_assignment_expression = 115,
  sym__logical_or_expression = 116,
  sym__wrapped_logical_or_expression = 117,
  sym__logical_and_expression = 118,
  sym__wrapped_logical_and_expression = 119,
  sym__bitwise_or_expression = 120,
  sym__wrapped_bitwise_or_expression = 121,
  sym__bitwise_xor_expression = 122,
  sym__wrapped_bitwise_xor_expression = 123,
  sym__bitwise_and_expression = 124,
  sym__wrapped_bitwise_and_expression = 125,
  sym__equality_expression = 126,
  sym__wrapped_equality_expression = 127,
  sym__relational_expression = 128,
  sym__wrapped_relational_expression = 129,
  sym__shift_expression = 130,
  sym__wrapped_shift_expression = 131,
  sym__additive_expression = 132,
  sym__wrapped_additive_expression = 133,
  sym__multiplicative_expression = 134,
  sym__wrapped_multiplicative_expression = 135,
  sym__simple_expression = 136,
  sym_parenthesized_expression = 137,
  sym_unary_expression = 138,
  sym_relocation_expression = 139,
  sym_decimal = 140,
  sym_char = 141,
  sym_string = 142,
  sym__label = 143,
  sym_local_label_reference = 144,
  sym_symbol = 145,
  sym_address = 146,
  aux_sym_program_repeat1 = 147,
  aux_sym_macro_parameters_repeat1 = 148,
  aux_sym__numeric_directive_repeat1 = 149,
  aux_sym_numeric_operands_repeat1 = 150,
  aux_sym_numeric_operands_repeat2 = 151,
  aux_sym_control_operands_repeat1 = 152,
  aux_sym_operands_repeat1 = 153,
  aux_sym_string_repeat1 = 154,
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
  [14] = 7,
  [15] = 8,
  [16] = 12,
  [17] = 12,
  [18] = 13,
  [19] = 12,
  [20] = 13,
  [21] = 13,
  [22] = 13,
  [23] = 12,
  [24] = 12,
  [25] = 13,
  [26] = 26,
  [27] = 27,
  [28] = 26,
  [29] = 29,
  [30] = 30,
  [31] = 30,
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
  [45] = 34,
  [46] = 34,
  [47] = 35,
  [48] = 36,
  [49] = 37,
  [50] = 38,
  [51] = 39,
  [52] = 40,
  [53] = 41,
  [54] = 42,
  [55] = 43,
  [56] = 44,
  [57] = 34,
  [58] = 35,
  [59] = 36,
  [60] = 37,
  [61] = 38,
  [62] = 39,
  [63] = 40,
  [64] = 41,
  [65] = 42,
  [66] = 43,
  [67] = 44,
  [68] = 34,
  [69] = 35,
  [70] = 70,
  [71] = 37,
  [72] = 38,
  [73] = 39,
  [74] = 40,
  [75] = 41,
  [76] = 42,
  [77] = 43,
  [78] = 44,
  [79] = 30,
  [80] = 34,
  [81] = 34,
  [82] = 34,
  [83] = 34,
  [84] = 34,
  [85] = 30,
  [86] = 35,
  [87] = 30,
  [88] = 36,
  [89] = 70,
  [90] = 37,
  [91] = 38,
  [92] = 70,
  [93] = 39,
  [94] = 40,
  [95] = 70,
  [96] = 41,
  [97] = 42,
  [98] = 70,
  [99] = 43,
  [100] = 44,
  [101] = 101,
  [102] = 36,
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
  [150] = 109,
  [151] = 140,
  [152] = 141,
  [153] = 142,
  [154] = 143,
  [155] = 144,
  [156] = 145,
  [157] = 146,
  [158] = 147,
  [159] = 148,
  [160] = 126,
  [161] = 149,
  [162] = 128,
  [163] = 129,
  [164] = 130,
  [165] = 131,
  [166] = 132,
  [167] = 138,
  [168] = 127,
  [169] = 121,
  [170] = 122,
  [171] = 123,
  [172] = 108,
  [173] = 110,
  [174] = 111,
  [175] = 112,
  [176] = 113,
  [177] = 114,
  [178] = 115,
  [179] = 116,
  [180] = 117,
  [181] = 118,
  [182] = 119,
  [183] = 120,
  [184] = 124,
  [185] = 126,
  [186] = 149,
  [187] = 128,
  [188] = 129,
  [189] = 130,
  [190] = 131,
  [191] = 132,
  [192] = 138,
  [193] = 127,
  [194] = 121,
  [195] = 122,
  [196] = 123,
  [197] = 108,
  [198] = 109,
  [199] = 110,
  [200] = 111,
  [201] = 112,
  [202] = 113,
  [203] = 114,
  [204] = 115,
  [205] = 116,
  [206] = 117,
  [207] = 118,
  [208] = 119,
  [209] = 120,
  [210] = 133,
  [211] = 134,
  [212] = 135,
  [213] = 136,
  [214] = 137,
  [215] = 107,
  [216] = 139,
  [217] = 140,
  [218] = 141,
  [219] = 142,
  [220] = 143,
  [221] = 144,
  [222] = 145,
  [223] = 124,
  [224] = 146,
  [225] = 147,
  [226] = 148,
  [227] = 125,
  [228] = 125,
  [229] = 133,
  [230] = 230,
  [231] = 134,
  [232] = 135,
  [233] = 107,
  [234] = 136,
  [235] = 137,
  [236] = 139,
  [237] = 237,
  [238] = 107,
  [239] = 114,
  [240] = 115,
  [241] = 116,
  [242] = 117,
  [243] = 118,
  [244] = 119,
  [245] = 120,
  [246] = 124,
  [247] = 133,
  [248] = 134,
  [249] = 135,
  [250] = 136,
  [251] = 137,
  [252] = 139,
  [253] = 141,
  [254] = 142,
  [255] = 143,
  [256] = 144,
  [257] = 145,
  [258] = 126,
  [259] = 146,
  [260] = 147,
  [261] = 148,
  [262] = 149,
  [263] = 128,
  [264] = 129,
  [265] = 130,
  [266] = 131,
  [267] = 132,
  [268] = 138,
  [269] = 127,
  [270] = 121,
  [271] = 122,
  [272] = 123,
  [273] = 108,
  [274] = 109,
  [275] = 110,
  [276] = 111,
  [277] = 112,
  [278] = 125,
  [279] = 113,
  [280] = 280,
  [281] = 281,
  [282] = 280,
  [283] = 281,
  [284] = 280,
  [285] = 281,
  [286] = 280,
  [287] = 281,
  [288] = 280,
  [289] = 281,
  [290] = 280,
  [291] = 281,
  [292] = 140,
  [293] = 125,
  [294] = 294,
  [295] = 131,
  [296] = 115,
  [297] = 116,
  [298] = 117,
  [299] = 118,
  [300] = 119,
  [301] = 120,
  [302] = 128,
  [303] = 133,
  [304] = 134,
  [305] = 135,
  [306] = 136,
  [307] = 137,
  [308] = 107,
  [309] = 139,
  [310] = 140,
  [311] = 141,
  [312] = 142,
  [313] = 143,
  [314] = 144,
  [315] = 145,
  [316] = 130,
  [317] = 146,
  [318] = 147,
  [319] = 113,
  [320] = 133,
  [321] = 132,
  [322] = 124,
  [323] = 147,
  [324] = 148,
  [325] = 138,
  [326] = 125,
  [327] = 127,
  [328] = 121,
  [329] = 122,
  [330] = 123,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 129,
  [335] = 108,
  [336] = 109,
  [337] = 110,
  [338] = 338,
  [339] = 339,
  [340] = 114,
  [341] = 111,
  [342] = 112,
  [343] = 149,
  [344] = 124,
  [345] = 126,
  [346] = 148,
  [347] = 125,
  [348] = 348,
  [349] = 349,
  [350] = 125,
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
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 371,
  [376] = 372,
  [377] = 377,
  [378] = 125,
  [379] = 379,
  [380] = 380,
  [381] = 362,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 385,
  [387] = 387,
  [388] = 388,
  [389] = 385,
  [390] = 390,
  [391] = 385,
  [392] = 392,
  [393] = 385,
  [394] = 364,
  [395] = 395,
  [396] = 355,
  [397] = 397,
  [398] = 365,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 363,
  [410] = 366,
  [411] = 411,
  [412] = 412,
  [413] = 361,
  [414] = 414,
  [415] = 415,
  [416] = 406,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 414,
  [421] = 421,
  [422] = 406,
  [423] = 414,
  [424] = 424,
  [425] = 406,
  [426] = 426,
  [427] = 373,
  [428] = 367,
  [429] = 414,
  [430] = 430,
  [431] = 125,
  [432] = 371,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 435,
  [438] = 374,
  [439] = 372,
  [440] = 440,
  [441] = 435,
  [442] = 442,
  [443] = 435,
  [444] = 435,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 448,
  [451] = 451,
  [452] = 452,
  [453] = 452,
  [454] = 452,
  [455] = 452,
  [456] = 452,
  [457] = 451,
  [458] = 451,
  [459] = 451,
  [460] = 460,
  [461] = 451,
  [462] = 451,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 463,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 465,
  [473] = 473,
  [474] = 473,
  [475] = 475,
  [476] = 467,
  [477] = 469,
  [478] = 478,
  [479] = 470,
  [480] = 465,
  [481] = 372,
  [482] = 469,
  [483] = 469,
  [484] = 465,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 371,
  [489] = 467,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 465,
  [500] = 500,
  [501] = 501,
  [502] = 467,
  [503] = 463,
  [504] = 467,
  [505] = 463,
  [506] = 506,
  [507] = 463,
  [508] = 469,
  [509] = 469,
  [510] = 510,
  [511] = 465,
  [512] = 512,
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
      if (eof) ADVANCE(110);
      ADVANCE_MAP(
        '!', 457,
        '"', 480,
        '#', 128,
        '$', 43,
        '&', 443,
        '\'', 476,
        '(', 132,
        ')', 141,
        '+', 449,
        ',', 144,
        '-', 453,
        '.', 583,
        '/', 452,
        '0', 491,
        '3', 492,
        ';', 111,
        '<', 446,
        '=', 438,
        '>', 447,
        '@', 80,
        'A', 571,
        'S', 560,
        'T', 573,
        '\\', 4,
        '^', 442,
        'a', 572,
        'f', 562,
        'g', 567,
        'r', 564,
        's', 561,
        't', 574,
        'z', 565,
        '|', 441,
        '~', 455,
        '%', 450,
        '*', 450,
        'C', 570,
        'c', 570,
        'K', 569,
        'k', 569,
        'V', 569,
        'v', 569,
        '1', 493,
        '2', 493,
        'F', 563,
        'R', 563,
        'X', 563,
        'x', 563,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(575);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\t', 137,
        '\n', 118,
        '\r', 112,
        ' ', 133,
        '!', 456,
        '#', 128,
        '$', 47,
        '%', 53,
        '\'', 476,
        '(', 132,
        ',', 144,
        '-', 454,
        '.', 588,
        '/', 34,
        '0', 461,
        '3', 465,
        ';', 111,
        '=', 437,
        'A', 596,
        'S', 581,
        'T', 598,
        '\\', 11,
        'a', 597,
        'f', 584,
        'g', 591,
        'r', 586,
        's', 582,
        't', 599,
        'z', 589,
        '|', 58,
        '~', 455,
        'C', 595,
        'c', 595,
        'K', 594,
        'k', 594,
        'V', 594,
        'v', 594,
      );
      if (lookahead == 0x0b ||
          lookahead == '\f') SKIP(1);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(466);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(585);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(466);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(600);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(140);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(559);
      if (lookahead == '$' ||
          lookahead == '%') ADVANCE(559);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(2);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(27);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(27);
      if (lookahead == '\r') SKIP(3);
      if (lookahead == 'U') ADVANCE(79);
      if (lookahead == 'u') ADVANCE(75);
      if (lookahead == 'x') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(486);
      if (set_contains(sym__escape_sequence_character_set_1, 12, lookahead)) ADVANCE(484);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(28);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(28);
      if (lookahead == '\r') SKIP(5);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '\n', 121,
        '\r', 115,
        '!', 456,
        '"', 480,
        '#', 128,
        '$', 47,
        '%', 53,
        '\'', 476,
        '(', 132,
        ',', 144,
        '-', 454,
        '.', 588,
        '/', 34,
        '0', 461,
        '3', 465,
        ';', 111,
        '=', 437,
        'A', 596,
        'S', 581,
        'T', 598,
        '\\', 9,
        'a', 597,
        'f', 584,
        'g', 591,
        'r', 586,
        's', 582,
        't', 599,
        'z', 589,
        '|', 58,
        '~', 455,
        'C', 595,
        'c', 595,
        'K', 594,
        'k', 594,
        'V', 594,
        'v', 594,
        '1', 466,
        '2', 466,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(7);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(585);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(466);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(600);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(29);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(29);
      if (lookahead == '\r') SKIP(12);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(30);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(30);
      if (lookahead == '\r') SKIP(14);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(31);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(31);
      if (lookahead == '\r') SKIP(16);
      if (lookahead == 'U') ADVANCE(79);
      if (lookahead == 'u') ADVANCE(75);
      if (lookahead == 'x') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(486);
      if (set_contains(sym__escape_sequence_character_set_1, 12, lookahead)) ADVANCE(484);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(125);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '/') ADVANCE(33);
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
      if (lookahead == '\n') SKIP(39);
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(39);
      if (lookahead == '\r') SKIP(21);
      if (lookahead == 'U') ADVANCE(79);
      if (lookahead == 'u') ADVANCE(75);
      if (lookahead == 'x') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(486);
      if (set_contains(sym__escape_sequence_character_set_1, 12, lookahead)) ADVANCE(484);
      END_STATE();
    case 23:
      if (lookahead == '\n') SKIP(25);
      END_STATE();
    case 24:
      if (lookahead == '\n') SKIP(25);
      if (lookahead == '\r') SKIP(23);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(124);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '\\') SKIP(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25);
      END_STATE();
    case 26:
      if (lookahead == '\r') ADVANCE(129);
      if (lookahead != 0) ADVANCE(128);
      END_STATE();
    case 27:
      ADVANCE_MAP(
        '!', 457,
        '"', 480,
        '#', 128,
        '$', 43,
        '&', 443,
        '\'', 476,
        '(', 132,
        ')', 141,
        '+', 449,
        ',', 144,
        '-', 453,
        '.', 583,
        '/', 452,
        '0', 491,
        '3', 492,
        ';', 111,
        '<', 446,
        '=', 438,
        '>', 447,
        '@', 80,
        'A', 571,
        'S', 560,
        'T', 573,
        '\\', 4,
        '^', 442,
        'a', 572,
        'f', 562,
        'g', 567,
        'r', 564,
        's', 561,
        't', 574,
        'z', 565,
        '|', 441,
        '~', 455,
        '%', 450,
        '*', 450,
        'C', 570,
        'c', 570,
        'K', 569,
        'k', 569,
        'V', 569,
        'v', 569,
        '1', 493,
        '2', 493,
        'F', 563,
        'R', 563,
        'X', 563,
        'x', 563,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(575);
      END_STATE();
    case 28:
      ADVANCE_MAP(
        '!', 456,
        '"', 480,
        '#', 128,
        '$', 47,
        '%', 53,
        '\'', 476,
        '(', 132,
        ')', 141,
        '+', 81,
        ',', 432,
        '-', 454,
        '.', 588,
        '/', 34,
        '0', 461,
        '3', 465,
        ';', 111,
        '=', 437,
        '@', 80,
        'A', 596,
        'S', 581,
        'T', 598,
        '\\', 6,
        'a', 597,
        'f', 584,
        'g', 591,
        'r', 586,
        's', 582,
        't', 599,
        'z', 589,
        '|', 58,
        '~', 455,
        '\t', 28,
        ' ', 28,
        'C', 595,
        'c', 595,
        'K', 594,
        'k', 594,
        'V', 594,
        'v', 594,
        '1', 466,
        '2', 466,
        'F', 585,
        'R', 585,
        'X', 585,
        'x', 585,
      );
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(28);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(466);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(600);
      END_STATE();
    case 29:
      ADVANCE_MAP(
        '!', 52,
        '#', 128,
        '&', 443,
        '(', 132,
        ',', 432,
        '/', 452,
        ';', 111,
        '<', 446,
        '=', 438,
        '>', 447,
      );
      if (lookahead == '\\') SKIP(13);
      if (lookahead == '^') ADVANCE(442);
      if (lookahead == '|') ADVANCE(441);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(450);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(449);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(576);
      END_STATE();
    case 30:
      ADVANCE_MAP(
        '!', 52,
        '&', 443,
        '(', 132,
        ')', 141,
        ',', 144,
        '/', 451,
        '<', 446,
        '=', 438,
        '>', 447,
      );
      if (lookahead == '\\') SKIP(15);
      if (lookahead == '^') ADVANCE(442);
      if (lookahead == '|') ADVANCE(441);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(450);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(449);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(480);
      if (lookahead == '/') ADVANCE(482);
      if (lookahead == '\\') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(483);
      if (lookahead != 0) ADVANCE(481);
      END_STATE();
    case 32:
      if (lookahead == '(') ADVANCE(132);
      if (lookahead == ',') ADVANCE(144);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(559);
      if (lookahead == '$' ||
          lookahead == '%') ADVANCE(559);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      END_STATE();
    case 33:
      if (lookahead == '*') ADVANCE(36);
      END_STATE();
    case 34:
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '/') ADVANCE(128);
      END_STATE();
    case 35:
      if (lookahead == '*') ADVANCE(37);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == '*') ADVANCE(37);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == ':') ADVANCE(577);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '/') ADVANCE(478);
      if (lookahead == '\\') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(477);
      END_STATE();
    case 40:
      if (lookahead == '1') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(487);
      END_STATE();
    case 41:
      if (lookahead == '1') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(487);
      END_STATE();
    case 42:
      ADVANCE_MAP(
        '2', 238,
        '4', 245,
        '8', 247,
        ':', 580,
        'L', 38,
        'a', 326,
        'b', 232,
        'c', 367,
        'd', 366,
        'f', 327,
        'h', 233,
        'i', 356,
        'l', 254,
        'm', 228,
        'p', 217,
        'q', 421,
        's', 305,
        'u', 332,
        'w', 369,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      END_STATE();
    case 43:
      ADVANCE_MAP(
        '3', 496,
        'A', 64,
        'S', 40,
        'T', 66,
        'a', 65,
        'f', 44,
        'g', 56,
        'r', 46,
        's', 41,
        't', 70,
        'z', 54,
        'C', 63,
        'c', 63,
        'K', 61,
        'k', 61,
        'V', 61,
        'v', 61,
        '1', 499,
        '2', 499,
        'F', 45,
        'R', 45,
        'X', 45,
        'x', 45,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(487);
      END_STATE();
    case 44:
      if (lookahead == '3') ADVANCE(496);
      if (lookahead == 'a') ADVANCE(64);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(499);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(487);
      END_STATE();
    case 45:
      if (lookahead == '3') ADVANCE(496);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(487);
      END_STATE();
    case 46:
      if (lookahead == '3') ADVANCE(496);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(487);
      END_STATE();
    case 47:
      ADVANCE_MAP(
        '3', 497,
        'A', 553,
        'S', 504,
        'T', 555,
        'a', 554,
        'f', 509,
        'g', 541,
        'r', 511,
        's', 505,
        't', 556,
        'z', 524,
        'C', 552,
        'c', 552,
        'K', 551,
        'k', 551,
        'V', 551,
        'v', 551,
        '1', 500,
        '2', 500,
        'F', 510,
        'R', 510,
        'X', 510,
        'x', 510,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(503);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(558);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(602);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 52:
      if (lookahead == '=') ADVANCE(444);
      END_STATE();
    case 53:
      ADVANCE_MAP(
        'a', 519,
        'c', 517,
        'd', 548,
        'g', 539,
        'h', 530,
        'l', 538,
        'p', 520,
        't', 534,
      );
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(487);
      END_STATE();
    case 56:
      if (lookahead == 'p') ADVANCE(487);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 58:
      if (lookahead == '|') ADVANCE(439);
      END_STATE();
    case 59:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(470);
      END_STATE();
    case 60:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      END_STATE();
    case 61:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(487);
      END_STATE();
    case 62:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(464);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(487);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(487);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(487);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(487);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(472);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(470);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(487);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(484);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(468);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
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
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 81:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(434);
      END_STATE();
    case 82:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 83:
      if (eof) ADVANCE(110);
      ADVANCE_MAP(
        '\t', 137,
        '\n', 118,
        '\r', 112,
        ' ', 133,
        '!', 456,
        '#', 128,
        '$', 47,
        '%', 53,
        '\'', 476,
        '(', 132,
        ',', 144,
        '-', 454,
        '.', 588,
        '/', 34,
        '0', 461,
        '3', 465,
        ';', 111,
        '=', 437,
        'A', 596,
        'S', 581,
        'T', 598,
        '\\', 11,
        'a', 597,
        'f', 584,
        'g', 591,
        'r', 586,
        's', 582,
        't', 599,
        'z', 589,
        '|', 58,
        '~', 455,
        'C', 595,
        'c', 595,
        'K', 594,
        'k', 594,
        'V', 594,
        'v', 594,
      );
      if (lookahead == 0x0b ||
          lookahead == '\f') SKIP(83);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(466);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(585);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(466);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(600);
      END_STATE();
    case 84:
      if (eof) ADVANCE(110);
      ADVANCE_MAP(
        '\t', 138,
        '\n', 119,
        '\r', 113,
        ' ', 134,
        '!', 52,
        '#', 128,
        '&', 443,
        '(', 132,
        ',', 144,
        '/', 452,
        ';', 111,
        '<', 446,
        '=', 438,
        '>', 447,
      );
      if (lookahead == '\\') SKIP(91);
      if (lookahead == '^') ADVANCE(442);
      if (lookahead == '|') ADVANCE(441);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(450);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(449);
      if (lookahead == 0x0b ||
          lookahead == '\f') SKIP(84);
      END_STATE();
    case 85:
      if (eof) ADVANCE(110);
      if (lookahead == '\t') ADVANCE(139);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == ',') ADVANCE(144);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\\') SKIP(101);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(85);
      END_STATE();
    case 86:
      if (eof) ADVANCE(110);
      if (lookahead == '\n') SKIP(88);
      END_STATE();
    case 87:
      if (eof) ADVANCE(110);
      if (lookahead == '\n') SKIP(88);
      if (lookahead == '\r') SKIP(86);
      END_STATE();
    case 88:
      if (eof) ADVANCE(110);
      ADVANCE_MAP(
        '\n', 120,
        '\r', 114,
        '#', 128,
        '%', 82,
        '.', 42,
        '/', 34,
        '0', 49,
        ';', 111,
      );
      if (lookahead == '\\') SKIP(87);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(88);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 89:
      if (eof) ADVANCE(110);
      ADVANCE_MAP(
        '\n', 121,
        '\r', 115,
        '!', 456,
        '"', 480,
        '#', 128,
        '$', 47,
        '%', 53,
        '\'', 476,
        '(', 132,
        ',', 144,
        '-', 454,
        '.', 588,
        '/', 34,
        '0', 461,
        '3', 465,
        ';', 111,
        '=', 437,
        'A', 596,
        'S', 581,
        'T', 598,
        '\\', 9,
        'a', 597,
        'f', 584,
        'g', 591,
        'r', 586,
        's', 582,
        't', 599,
        'z', 589,
        '|', 58,
        '~', 455,
        'C', 595,
        'c', 595,
        'K', 594,
        'k', 594,
        'V', 594,
        'v', 594,
        '1', 466,
        '2', 466,
      );
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(89);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(585);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(466);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(600);
      END_STATE();
    case 90:
      if (eof) ADVANCE(110);
      if (lookahead == '\n') SKIP(84);
      END_STATE();
    case 91:
      if (eof) ADVANCE(110);
      if (lookahead == '\n') SKIP(84);
      if (lookahead == '\r') SKIP(90);
      END_STATE();
    case 92:
      if (eof) ADVANCE(110);
      if (lookahead == '\n') SKIP(94);
      END_STATE();
    case 93:
      if (eof) ADVANCE(110);
      if (lookahead == '\n') SKIP(94);
      if (lookahead == '\r') SKIP(92);
      END_STATE();
    case 94:
      if (eof) ADVANCE(110);
      ADVANCE_MAP(
        '\n', 122,
        '\r', 116,
        '!', 52,
        '#', 128,
        '&', 443,
        '(', 132,
        ',', 144,
        '/', 452,
        ';', 111,
        '<', 446,
        '=', 438,
        '>', 447,
      );
      if (lookahead == '\\') SKIP(93);
      if (lookahead == '^') ADVANCE(442);
      if (lookahead == '|') ADVANCE(441);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(450);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(449);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(94);
      END_STATE();
    case 95:
      if (eof) ADVANCE(110);
      if (lookahead == '\n') SKIP(108);
      END_STATE();
    case 96:
      if (eof) ADVANCE(110);
      if (lookahead == '\n') SKIP(108);
      if (lookahead == '\r') SKIP(95);
      END_STATE();
    case 97:
      if (eof) ADVANCE(110);
      if (lookahead == '\n') SKIP(99);
      END_STATE();
    case 98:
      if (eof) ADVANCE(110);
      if (lookahead == '\n') SKIP(99);
      if (lookahead == '\r') SKIP(97);
      END_STATE();
    case 99:
      if (eof) ADVANCE(110);
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == '\r') ADVANCE(117);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '(') ADVANCE(132);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\\') SKIP(98);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(126);
      if (lookahead == 0x0b ||
          lookahead == '\f') SKIP(99);
      END_STATE();
    case 100:
      if (eof) ADVANCE(110);
      if (lookahead == '\n') SKIP(85);
      END_STATE();
    case 101:
      if (eof) ADVANCE(110);
      if (lookahead == '\n') SKIP(85);
      if (lookahead == '\r') SKIP(100);
      END_STATE();
    case 102:
      if (eof) ADVANCE(110);
      if (lookahead == '\n') SKIP(109);
      END_STATE();
    case 103:
      if (eof) ADVANCE(110);
      if (lookahead == '\n') SKIP(109);
      if (lookahead == '\r') SKIP(102);
      END_STATE();
    case 104:
      if (eof) ADVANCE(110);
      if (lookahead == '\n') SKIP(106);
      END_STATE();
    case 105:
      if (eof) ADVANCE(110);
      if (lookahead == '\n') SKIP(106);
      if (lookahead == '\r') SKIP(104);
      END_STATE();
    case 106:
      if (eof) ADVANCE(110);
      if (lookahead == '\n') ADVANCE(125);
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '\\') SKIP(105);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(106);
      END_STATE();
    case 107:
      if (eof) ADVANCE(110);
      ADVANCE_MAP(
        '!', 456,
        '"', 480,
        '#', 128,
        '$', 47,
        '%', 53,
        '\'', 476,
        '(', 132,
        ')', 141,
        '+', 81,
        ',', 432,
        '-', 454,
        '.', 588,
        '/', 34,
        '0', 461,
        '3', 465,
        ';', 111,
        '=', 437,
        '@', 80,
        'A', 596,
        'S', 581,
        'T', 598,
        '\\', 6,
        'a', 597,
        'f', 584,
        'g', 591,
        'r', 586,
        's', 582,
        't', 599,
        'z', 589,
        '|', 58,
        '~', 455,
        '\t', 28,
        ' ', 28,
        'C', 595,
        'c', 595,
        'K', 594,
        'k', 594,
        'V', 594,
        'v', 594,
        '1', 466,
        '2', 466,
        'F', 585,
        'R', 585,
        'X', 585,
        'x', 585,
      );
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(107);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(466);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(600);
      END_STATE();
    case 108:
      if (eof) ADVANCE(110);
      ADVANCE_MAP(
        '!', 52,
        '#', 128,
        '&', 443,
        '(', 132,
        ',', 432,
        '/', 452,
        ';', 111,
        '<', 446,
        '=', 438,
        '>', 447,
      );
      if (lookahead == '\\') SKIP(96);
      if (lookahead == '^') ADVANCE(442);
      if (lookahead == '|') ADVANCE(441);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(450);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(449);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(576);
      END_STATE();
    case 109:
      if (eof) ADVANCE(110);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '(') ADVANCE(132);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '\\') SKIP(103);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(127);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t') ADVANCE(137);
      if (lookahead == '\n') ADVANCE(118);
      if (lookahead == '\r') ADVANCE(112);
      if (lookahead == ' ') ADVANCE(133);
      if (lookahead == '\\') ADVANCE(11);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t') ADVANCE(138);
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == '\r') ADVANCE(113);
      if (lookahead == ' ') ADVANCE(134);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(120);
      if (lookahead == '\r') ADVANCE(114);
      if (lookahead == '%') ADVANCE(82);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '0') ADVANCE(49);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(121);
      if (lookahead == '\r') ADVANCE(115);
      if (lookahead == '\\') ADVANCE(9);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(122);
      if (lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == '\r') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(126);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(137);
      if (lookahead == '\n') ADVANCE(118);
      if (lookahead == '\r') ADVANCE(112);
      if (lookahead == ' ') ADVANCE(133);
      if (lookahead == '\\') ADVANCE(11);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(138);
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == '\r') ADVANCE(113);
      if (lookahead == ' ') ADVANCE(134);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(120);
      if (lookahead == '\r') ADVANCE(114);
      if (lookahead == '%') ADVANCE(82);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '0') ADVANCE(49);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(121);
      if (lookahead == '\r') ADVANCE(115);
      if (lookahead == '\\') ADVANCE(9);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(122);
      if (lookahead == '\r') ADVANCE(116);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == '\r') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(126);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (lookahead == '\n') ADVANCE(125);
      if (lookahead == '\r') ADVANCE(18);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == '\r') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0) ADVANCE(128);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_block_comment);
      if (lookahead == '*') ADVANCE(37);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(137);
      if (lookahead == '\n') ADVANCE(118);
      if (lookahead == '\r') ADVANCE(112);
      if (lookahead == ' ') ADVANCE(133);
      if (lookahead == '\\') ADVANCE(11);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(138);
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == '\r') ADVANCE(113);
      if (lookahead == ' ') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(139);
      if (lookahead == ' ') ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(140);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(559);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(137);
      if (lookahead == '\n') ADVANCE(118);
      if (lookahead == '\r') ADVANCE(112);
      if (lookahead == ' ') ADVANCE(133);
      if (lookahead == '\\') ADVANCE(11);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(138);
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == '\r') ADVANCE(113);
      if (lookahead == ' ') ADVANCE(134);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(139);
      if (lookahead == ' ') ADVANCE(135);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(140);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(559);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_macro_mnemonic);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_macro_mnemonic);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_DOTbyte);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_DOTbyte);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_DOT2byte);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_DOT2byte);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_DOTshort);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_DOTshort);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DOThalf);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_DOThalf);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_DOThword);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_DOThword);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_DOT4byte);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_DOT4byte);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_DOTword);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_DOTword);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_DOTint);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_DOTint);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_DOT8byte);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_DOT8byte);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_DOTdword);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_DOTdword);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_DOTlong);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_DOTlong);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_DOTquad);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_DOTquad);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_DOTcomm);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_DOTcomm);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_DOTlcomm);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_DOTlcomm);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_DOTalign);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_DOTalign);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_DOTbalign);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_DOTbalign);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_DOTp2align);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_DOTp2align);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_DOTsleb128);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_DOTsleb128);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_DOTuleb128);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_DOTuleb128);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_DOTdtprelword);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_DOTdtprelword);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_DOTdtpreldword);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_DOTdtpreldword);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DOTskip);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DOTskip);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_DOTspace);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_DOTspace);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_DOTfloat);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_DOTfloat);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_DOTdouble);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_DOTdouble);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_DOTsingle);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DOTsingle);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__string_directive_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_DOTasciz);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_DOTasciz);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DOTascii);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'z') ADVANCE(202);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(430);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_DOTascii);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'z') ADVANCE(203);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(431);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_DOTasciiz);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_DOTasciiz);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_DOTstring);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'z') ADVANCE(206);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(430);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_DOTstring);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'z') ADVANCE(207);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(431);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DOTstringz);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_DOTstringz);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(212);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(214);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(215);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(216);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(218);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(234);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(219);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(220);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(221);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(235);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(179);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(181);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(180);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(182);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'a') ADVANCE(256);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'a') ADVANCE(333);
      if (lookahead == 'y') ADVANCE(407);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'a') ADVANCE(251);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'a') ADVANCE(405);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'a') ADVANCE(321);
      if (lookahead == 'w') ADVANCE(376);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'a') ADVANCE(252);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'a') ADVANCE(253);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'a') ADVANCE(409);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'a') ADVANCE(263);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'a') ADVANCE(335);
      if (lookahead == 'y') ADVANCE(414);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'a') ADVANCE(323);
      if (lookahead == 'w') ADVANCE(377);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'a') ADVANCE(336);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'a') ADVANCE(337);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'b') ADVANCE(424);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'b') ADVANCE(208);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'b') ADVANCE(425);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'b') ADVANCE(210);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'b') ADVANCE(328);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'b') ADVANCE(209);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'b') ADVANCE(211);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'b') ADVANCE(330);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'b') ADVANCE(426);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'b') ADVANCE(427);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'b') ADVANCE(428);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'b') ADVANCE(429);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'c') ADVANCE(307);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'c') ADVANCE(388);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'c') ADVANCE(310);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'c') ADVANCE(274);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'c') ADVANCE(395);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'c') ADVANCE(281);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'c') ADVANCE(374);
      if (lookahead == 'o') ADVANCE(357);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'c') ADVANCE(372);
      if (lookahead == 'o') ADVANCE(350);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'd') ADVANCE(167);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'd') ADVANCE(157);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'd') ADVANCE(163);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'd') ADVANCE(153);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'd') ADVANCE(422);
      if (lookahead == 'w') ADVANCE(378);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'd') ADVANCE(183);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'd') ADVANCE(185);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'd') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'd') ADVANCE(158);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'd') ADVANCE(164);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'd') ADVANCE(154);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'd') ADVANCE(423);
      if (lookahead == 'w') ADVANCE(379);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'd') ADVANCE(184);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'd') ADVANCE(186);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'e') ADVANCE(193);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'e') ADVANCE(146);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'e') ADVANCE(237);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'e') ADVANCE(322);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'e') ADVANCE(324);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'e') ADVANCE(241);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'e') ADVANCE(242);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'f') ADVANCE(151);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'f') ADVANCE(152);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'g') ADVANCE(165);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'g') ADVANCE(204);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'g') ADVANCE(166);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'g') ADVANCE(205);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'g') ADVANCE(346);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'g') ADVANCE(347);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'g') ADVANCE(348);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'g') ADVANCE(351);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'g') ADVANCE(352);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'g') ADVANCE(353);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'g') ADVANCE(329);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'g') ADVANCE(331);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'h') ADVANCE(368);
      if (lookahead == 'i') ADVANCE(354);
      if (lookahead == 'k') ADVANCE(309);
      if (lookahead == 'l') ADVANCE(284);
      if (lookahead == 'p') ADVANCE(225);
      if (lookahead == 't') ADVANCE(389);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'h') ADVANCE(371);
      if (lookahead == 'i') ADVANCE(358);
      if (lookahead == 'k') ADVANCE(312);
      if (lookahead == 'l') ADVANCE(285);
      if (lookahead == 'p') ADVANCE(229);
      if (lookahead == 't') ADVANCE(396);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(296);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(308);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(200);
      if (lookahead == 'z') ADVANCE(198);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(430);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(382);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(311);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(201);
      if (lookahead == 'z') ADVANCE(199);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(431);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(383);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(299);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(359);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(297);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(300);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(298);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(355);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'l') ADVANCE(306);
      if (lookahead == 's') ADVANCE(248);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'l') ADVANCE(290);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'l') ADVANCE(260);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'l') ADVANCE(291);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'l') ADVANCE(267);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'l') ADVANCE(365);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'l') ADVANCE(313);
      if (lookahead == 's') ADVANCE(250);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'l') ADVANCE(370);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'l') ADVANCE(275);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'l') ADVANCE(276);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'l') ADVANCE(282);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'l') ADVANCE(283);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'l') ADVANCE(289);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'l') ADVANCE(315);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'l') ADVANCE(288);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'l') ADVANCE(316);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'l') ADVANCE(317);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'l') ADVANCE(319);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'm') ADVANCE(169);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'm') ADVANCE(171);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'm') ADVANCE(338);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'm') ADVANCE(170);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'm') ADVANCE(172);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'm') ADVANCE(339);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'm') ADVANCE(341);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'm') ADVANCE(342);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'n') ADVANCE(173);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'n') ADVANCE(175);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'n') ADVANCE(177);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'n') ADVANCE(404);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'n') ADVANCE(292);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'n') ADVANCE(174);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'n') ADVANCE(176);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'n') ADVANCE(178);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'n') ADVANCE(302);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'n') ADVANCE(293);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'n') ADVANCE(408);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'n') ADVANCE(294);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'n') ADVANCE(303);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'n') ADVANCE(295);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'o') ADVANCE(340);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'o') ADVANCE(142);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'o') ADVANCE(418);
      if (lookahead == 't') ADVANCE(384);
      if (lookahead == 'w') ADVANCE(373);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'o') ADVANCE(386);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'o') ADVANCE(143);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'o') ADVANCE(226);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'o') ADVANCE(420);
      if (lookahead == 't') ADVANCE(385);
      if (lookahead == 'w') ADVANCE(375);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'o') ADVANCE(344);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'o') ADVANCE(390);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'o') ADVANCE(398);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'o') ADVANCE(230);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'o') ADVANCE(397);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'o') ADVANCE(343);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'o') ADVANCE(387);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'o') ADVANCE(345);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'o') ADVANCE(399);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'o') ADVANCE(391);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'o') ADVANCE(400);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'o') ADVANCE(392);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'o') ADVANCE(401);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'o') ADVANCE(394);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'o') ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'p') ADVANCE(187);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'p') ADVANCE(188);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'p') ADVANCE(393);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'p') ADVANCE(403);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'r') ADVANCE(257);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'r') ADVANCE(258);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'r') ADVANCE(361);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'r') ADVANCE(318);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'r') ADVANCE(406);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'r') ADVANCE(259);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'r') ADVANCE(261);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'r') ADVANCE(286);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'r') ADVANCE(262);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'r') ADVANCE(364);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'r') ADVANCE(314);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'r') ADVANCE(410);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'r') ADVANCE(264);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'r') ADVANCE(265);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'r') ADVANCE(266);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'r') ADVANCE(268);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'r') ADVANCE(269);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'r') ADVANCE(287);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 't') ADVANCE(191);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 't') ADVANCE(270);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 't') ADVANCE(160);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 't') ADVANCE(192);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 't') ADVANCE(150);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 't') ADVANCE(271);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 't') ADVANCE(272);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 't') ADVANCE(273);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 't') ADVANCE(277);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 't') ADVANCE(278);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 't') ADVANCE(279);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 't') ADVANCE(280);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'u') ADVANCE(240);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'u') ADVANCE(222);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'u') ADVANCE(243);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'u') ADVANCE(231);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'w') ADVANCE(380);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'w') ADVANCE(381);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'y') ADVANCE(411);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'y') ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'y') ADVANCE(412);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'y') ADVANCE(416);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'y') ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'y') ADVANCE(417);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(431);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym__control_operand_separator_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(432);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_section_type_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(433);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_option_flag_token1);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '$') ADVANCE(48);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(436);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_assignment_operator);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_assignment_operator);
      if (lookahead == '=') ADVANCE(444);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_logical_or_operator);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_logical_and_operator);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_bitwise_or_operator);
      if (lookahead == '|') ADVANCE(439);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_bitwise_xor_operator);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_bitwise_and_operator);
      if (lookahead == '&') ADVANCE(440);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_equality_operator);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_relational_operator);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_relational_operator);
      if (lookahead == '<') ADVANCE(448);
      if (lookahead == '=') ADVANCE(445);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_relational_operator);
      if (lookahead == '=') ADVANCE(445);
      if (lookahead == '>') ADVANCE(448);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_shift_operator);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_additive_operator);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_multiplicative_operator);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_multiplicative_operator);
      if (lookahead == '*') ADVANCE(36);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_multiplicative_operator);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '/') ADVANCE(128);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_unary_minus_operator);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_unary_minus_operator);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '0') ADVANCE(462);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(467);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_bitwise_not_operator);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_logical_not_operator);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_logical_not_operator);
      if (lookahead == '=') ADVANCE(444);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_relocation_type);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_relocation_type);
      if (lookahead == '_') ADVANCE(518);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_relocation_type);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_octal);
      ADVANCE_MAP(
        '.', 472,
        'b', 604,
        'f', 603,
        'E', 59,
        'e', 59,
        'X', 72,
        'x', 72,
        '8', 467,
        '9', 467,
      );
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(463);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_octal);
      if (lookahead == '.') ADVANCE(472);
      if (lookahead == 'b') ADVANCE(62);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(72);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(463);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_octal);
      if (lookahead == '.') ADVANCE(472);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(463);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_binary);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(464);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(472);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(603);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(467);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(467);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(472);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(467);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(472);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(467);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(468);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'f') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(470);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(593);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(600);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(472);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(600);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(600);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '*') ADVANCE(36);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '/') ADVANCE(478);
      if (lookahead == '\\') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(477);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(36);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(482);
      if (lookahead == '\\') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(481);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(484);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(485);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.') ADVANCE(587);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(490);
      if (lookahead == '$' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.') ADVANCE(587);
      if (lookahead == ':') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(490);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.') ADVANCE(587);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(602);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(603);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(602);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(603);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(495);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(602);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(495);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(602);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == ':') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(487);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(503);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('2' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(502);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(600);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(487);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(503);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(502);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(600);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(600);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(503);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(503);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(513);
      if (lookahead == '3') ADVANCE(508);
      if (lookahead == 'r') ADVANCE(526);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '1') ADVANCE(513);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '2') ADVANCE(460);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '3') ADVANCE(497);
      if (lookahead == 'a') ADVANCE(553);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(500);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(503);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '3') ADVANCE(497);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(503);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '3') ADVANCE(497);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(503);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '4') ADVANCE(460);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '6') ADVANCE(460);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '6') ADVANCE(512);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '_') ADVANCE(529);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '_') ADVANCE(528);
      if (lookahead == 'g') ADVANCE(522);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'a') ADVANCE(535);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'a') ADVANCE(523);
      if (lookahead == 'h') ADVANCE(530);
      if (lookahead == 'l') ADVANCE(538);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'b') ADVANCE(546);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'c') ADVANCE(506);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'd') ADVANCE(460);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'd') ADVANCE(515);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'd') ADVANCE(521);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(543);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(531);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(533);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'e') ADVANCE(536);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'g') ADVANCE(540);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'h') ADVANCE(530);
      if (lookahead == 'l') ADVANCE(538);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'i') ADVANCE(460);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(460);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(507);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(515);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(547);
      if (lookahead == 'p') ADVANCE(545);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(532);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'l') ADVANCE(459);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(503);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(460);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(549);
      if (lookahead == 'p') ADVANCE(544);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'o') ADVANCE(550);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'p') ADVANCE(503);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'p') ADVANCE(544);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'r') ADVANCE(537);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'r') ADVANCE(525);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 'r') ADVANCE(527);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 's') ADVANCE(514);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 's') ADVANCE(516);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 't') ADVANCE(542);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 't') ADVANCE(458);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == 't') ADVANCE(515);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(503);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('2' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(503);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('4' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(503);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('8' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(503);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('8' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(503);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_macro_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(503);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_macro_parameter);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(559);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(587);
      if (lookahead == '1') ADVANCE(488);
      if (lookahead == ':') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(490);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(587);
      if (lookahead == '1') ADVANCE(488);
      if (lookahead == ':') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(490);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(587);
      if (lookahead == '3') ADVANCE(488);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'a') ADVANCE(571);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(489);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(490);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(587);
      if (lookahead == '3') ADVANCE(488);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(490);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(587);
      if (lookahead == '3') ADVANCE(488);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(490);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(587);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'e') ADVANCE(568);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(587);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'o') ADVANCE(490);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(587);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'p') ADVANCE(490);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(587);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == 'r') ADVANCE(566);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(587);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(490);
      if (lookahead == '$' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(587);
      if (lookahead == ':') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(490);
      if (lookahead == '$' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(587);
      if (lookahead == ':') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(490);
      if (lookahead == '$' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(587);
      if (lookahead == ':') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(490);
      if (lookahead == '$' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(587);
      if (lookahead == ':') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(490);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(587);
      if (lookahead == ':') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(490);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.') ADVANCE(587);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(575);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(576);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_local_label);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_local_label_reference_token1);
      if (lookahead == '.') ADVANCE(587);
      if (lookahead == ':') ADVANCE(577);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(578);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_local_label_reference_token1);
      if (lookahead == '.') ADVANCE(600);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_global_label);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '1') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(502);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(600);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '1') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(502);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(600);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      ADVANCE_MAP(
        '2', 236,
        '4', 244,
        '8', 246,
        ':', 580,
        'L', 578,
        'a', 320,
        'b', 224,
        'c', 360,
        'd', 362,
        'f', 325,
        'h', 227,
        'i', 349,
        'l', 255,
        'm', 223,
        'p', 213,
        'q', 419,
        's', 304,
        'u', 334,
        'w', 363,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(430);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(587);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '3') ADVANCE(498);
      if (lookahead == 'a') ADVANCE(596);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(501);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(502);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(600);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '3') ADVANCE(498);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(502);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(600);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '3') ADVANCE(498);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(502);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(600);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == ':') ADVANCE(580);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(587);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'L') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(471);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(600);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'e') ADVANCE(592);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(600);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'o') ADVANCE(502);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(600);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'p') ADVANCE(502);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(600);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'r') ADVANCE(590);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(600);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(473);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(600);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(502);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(600);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(502);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(600);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(502);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(600);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(502);
      if (lookahead == '$' ||
          lookahead == '.' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(600);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(502);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(600);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(502);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(600);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(600);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_global_numeric_label);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_local_numeric_label);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_local_numeric_label_reference);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_local_numeric_label_reference);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(464);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 88, .external_lex_state = 2},
  [2] = {.lex_state = 107, .external_lex_state = 3},
  [3] = {.lex_state = 89, .external_lex_state = 2},
  [4] = {.lex_state = 88, .external_lex_state = 2},
  [5] = {.lex_state = 83, .external_lex_state = 4},
  [6] = {.lex_state = 88, .external_lex_state = 2},
  [7] = {.lex_state = 89, .external_lex_state = 2},
  [8] = {.lex_state = 89, .external_lex_state = 2},
  [9] = {.lex_state = 107, .external_lex_state = 2},
  [10] = {.lex_state = 107, .external_lex_state = 2},
  [11] = {.lex_state = 107, .external_lex_state = 2},
  [12] = {.lex_state = 107, .external_lex_state = 2},
  [13] = {.lex_state = 107, .external_lex_state = 2},
  [14] = {.lex_state = 107, .external_lex_state = 2},
  [15] = {.lex_state = 107, .external_lex_state = 2},
  [16] = {.lex_state = 107, .external_lex_state = 2},
  [17] = {.lex_state = 107, .external_lex_state = 2},
  [18] = {.lex_state = 107, .external_lex_state = 2},
  [19] = {.lex_state = 107, .external_lex_state = 2},
  [20] = {.lex_state = 107, .external_lex_state = 2},
  [21] = {.lex_state = 107, .external_lex_state = 2},
  [22] = {.lex_state = 107, .external_lex_state = 2},
  [23] = {.lex_state = 107, .external_lex_state = 2},
  [24] = {.lex_state = 107, .external_lex_state = 2},
  [25] = {.lex_state = 107, .external_lex_state = 2},
  [26] = {.lex_state = 107, .external_lex_state = 2},
  [27] = {.lex_state = 107, .external_lex_state = 2},
  [28] = {.lex_state = 107, .external_lex_state = 2},
  [29] = {.lex_state = 107, .external_lex_state = 2},
  [30] = {.lex_state = 107, .external_lex_state = 2},
  [31] = {.lex_state = 107, .external_lex_state = 2},
  [32] = {.lex_state = 107, .external_lex_state = 2},
  [33] = {.lex_state = 107, .external_lex_state = 2},
  [34] = {.lex_state = 107, .external_lex_state = 2},
  [35] = {.lex_state = 107, .external_lex_state = 2},
  [36] = {.lex_state = 107, .external_lex_state = 2},
  [37] = {.lex_state = 107, .external_lex_state = 2},
  [38] = {.lex_state = 107, .external_lex_state = 2},
  [39] = {.lex_state = 107, .external_lex_state = 2},
  [40] = {.lex_state = 107, .external_lex_state = 2},
  [41] = {.lex_state = 107, .external_lex_state = 2},
  [42] = {.lex_state = 107, .external_lex_state = 2},
  [43] = {.lex_state = 107, .external_lex_state = 2},
  [44] = {.lex_state = 107, .external_lex_state = 2},
  [45] = {.lex_state = 107, .external_lex_state = 2},
  [46] = {.lex_state = 107, .external_lex_state = 2},
  [47] = {.lex_state = 107, .external_lex_state = 2},
  [48] = {.lex_state = 107, .external_lex_state = 2},
  [49] = {.lex_state = 107, .external_lex_state = 2},
  [50] = {.lex_state = 107, .external_lex_state = 2},
  [51] = {.lex_state = 107, .external_lex_state = 2},
  [52] = {.lex_state = 107, .external_lex_state = 2},
  [53] = {.lex_state = 107, .external_lex_state = 2},
  [54] = {.lex_state = 107, .external_lex_state = 2},
  [55] = {.lex_state = 107, .external_lex_state = 2},
  [56] = {.lex_state = 107, .external_lex_state = 2},
  [57] = {.lex_state = 107, .external_lex_state = 2},
  [58] = {.lex_state = 107, .external_lex_state = 2},
  [59] = {.lex_state = 107, .external_lex_state = 2},
  [60] = {.lex_state = 107, .external_lex_state = 2},
  [61] = {.lex_state = 107, .external_lex_state = 2},
  [62] = {.lex_state = 107, .external_lex_state = 2},
  [63] = {.lex_state = 107, .external_lex_state = 2},
  [64] = {.lex_state = 107, .external_lex_state = 2},
  [65] = {.lex_state = 107, .external_lex_state = 2},
  [66] = {.lex_state = 107, .external_lex_state = 2},
  [67] = {.lex_state = 107, .external_lex_state = 2},
  [68] = {.lex_state = 107, .external_lex_state = 2},
  [69] = {.lex_state = 107, .external_lex_state = 2},
  [70] = {.lex_state = 107, .external_lex_state = 2},
  [71] = {.lex_state = 107, .external_lex_state = 2},
  [72] = {.lex_state = 107, .external_lex_state = 2},
  [73] = {.lex_state = 107, .external_lex_state = 2},
  [74] = {.lex_state = 107, .external_lex_state = 2},
  [75] = {.lex_state = 107, .external_lex_state = 2},
  [76] = {.lex_state = 107, .external_lex_state = 2},
  [77] = {.lex_state = 107, .external_lex_state = 2},
  [78] = {.lex_state = 107, .external_lex_state = 2},
  [79] = {.lex_state = 107, .external_lex_state = 2},
  [80] = {.lex_state = 107, .external_lex_state = 2},
  [81] = {.lex_state = 107, .external_lex_state = 2},
  [82] = {.lex_state = 107, .external_lex_state = 2},
  [83] = {.lex_state = 107, .external_lex_state = 2},
  [84] = {.lex_state = 107, .external_lex_state = 2},
  [85] = {.lex_state = 107, .external_lex_state = 2},
  [86] = {.lex_state = 107, .external_lex_state = 2},
  [87] = {.lex_state = 107, .external_lex_state = 2},
  [88] = {.lex_state = 107, .external_lex_state = 2},
  [89] = {.lex_state = 107, .external_lex_state = 2},
  [90] = {.lex_state = 107, .external_lex_state = 2},
  [91] = {.lex_state = 107, .external_lex_state = 2},
  [92] = {.lex_state = 107, .external_lex_state = 2},
  [93] = {.lex_state = 107, .external_lex_state = 2},
  [94] = {.lex_state = 107, .external_lex_state = 2},
  [95] = {.lex_state = 107, .external_lex_state = 2},
  [96] = {.lex_state = 107, .external_lex_state = 2},
  [97] = {.lex_state = 107, .external_lex_state = 2},
  [98] = {.lex_state = 107, .external_lex_state = 2},
  [99] = {.lex_state = 107, .external_lex_state = 2},
  [100] = {.lex_state = 107, .external_lex_state = 2},
  [101] = {.lex_state = 107, .external_lex_state = 2},
  [102] = {.lex_state = 107, .external_lex_state = 2},
  [103] = {.lex_state = 88, .external_lex_state = 2},
  [104] = {.lex_state = 88, .external_lex_state = 2},
  [105] = {.lex_state = 88, .external_lex_state = 2},
  [106] = {.lex_state = 88, .external_lex_state = 2},
  [107] = {.lex_state = 84, .external_lex_state = 1},
  [108] = {.lex_state = 84, .external_lex_state = 1},
  [109] = {.lex_state = 84, .external_lex_state = 1},
  [110] = {.lex_state = 84, .external_lex_state = 1},
  [111] = {.lex_state = 84, .external_lex_state = 1},
  [112] = {.lex_state = 84, .external_lex_state = 1},
  [113] = {.lex_state = 84, .external_lex_state = 1},
  [114] = {.lex_state = 84, .external_lex_state = 1},
  [115] = {.lex_state = 84, .external_lex_state = 1},
  [116] = {.lex_state = 84, .external_lex_state = 1},
  [117] = {.lex_state = 84, .external_lex_state = 1},
  [118] = {.lex_state = 84, .external_lex_state = 1},
  [119] = {.lex_state = 84, .external_lex_state = 1},
  [120] = {.lex_state = 84, .external_lex_state = 1},
  [121] = {.lex_state = 84, .external_lex_state = 1},
  [122] = {.lex_state = 84, .external_lex_state = 1},
  [123] = {.lex_state = 84, .external_lex_state = 1},
  [124] = {.lex_state = 84, .external_lex_state = 1},
  [125] = {.lex_state = 84, .external_lex_state = 1},
  [126] = {.lex_state = 84, .external_lex_state = 1},
  [127] = {.lex_state = 84, .external_lex_state = 1},
  [128] = {.lex_state = 84, .external_lex_state = 1},
  [129] = {.lex_state = 84, .external_lex_state = 1},
  [130] = {.lex_state = 84, .external_lex_state = 1},
  [131] = {.lex_state = 84, .external_lex_state = 1},
  [132] = {.lex_state = 84, .external_lex_state = 1},
  [133] = {.lex_state = 84, .external_lex_state = 1},
  [134] = {.lex_state = 84, .external_lex_state = 1},
  [135] = {.lex_state = 84, .external_lex_state = 1},
  [136] = {.lex_state = 84, .external_lex_state = 1},
  [137] = {.lex_state = 84, .external_lex_state = 1},
  [138] = {.lex_state = 84, .external_lex_state = 1},
  [139] = {.lex_state = 84, .external_lex_state = 1},
  [140] = {.lex_state = 84, .external_lex_state = 1},
  [141] = {.lex_state = 84, .external_lex_state = 1},
  [142] = {.lex_state = 84, .external_lex_state = 1},
  [143] = {.lex_state = 84, .external_lex_state = 1},
  [144] = {.lex_state = 84, .external_lex_state = 1},
  [145] = {.lex_state = 84, .external_lex_state = 1},
  [146] = {.lex_state = 84, .external_lex_state = 1},
  [147] = {.lex_state = 84, .external_lex_state = 1},
  [148] = {.lex_state = 84, .external_lex_state = 1},
  [149] = {.lex_state = 84, .external_lex_state = 1},
  [150] = {.lex_state = 94, .external_lex_state = 5},
  [151] = {.lex_state = 94, .external_lex_state = 5},
  [152] = {.lex_state = 94, .external_lex_state = 5},
  [153] = {.lex_state = 94, .external_lex_state = 5},
  [154] = {.lex_state = 94, .external_lex_state = 5},
  [155] = {.lex_state = 94, .external_lex_state = 5},
  [156] = {.lex_state = 94, .external_lex_state = 5},
  [157] = {.lex_state = 94, .external_lex_state = 5},
  [158] = {.lex_state = 94, .external_lex_state = 5},
  [159] = {.lex_state = 94, .external_lex_state = 5},
  [160] = {.lex_state = 94, .external_lex_state = 5},
  [161] = {.lex_state = 94, .external_lex_state = 5},
  [162] = {.lex_state = 94, .external_lex_state = 5},
  [163] = {.lex_state = 94, .external_lex_state = 5},
  [164] = {.lex_state = 94, .external_lex_state = 5},
  [165] = {.lex_state = 94, .external_lex_state = 5},
  [166] = {.lex_state = 94, .external_lex_state = 5},
  [167] = {.lex_state = 94, .external_lex_state = 5},
  [168] = {.lex_state = 94, .external_lex_state = 5},
  [169] = {.lex_state = 94, .external_lex_state = 5},
  [170] = {.lex_state = 94, .external_lex_state = 5},
  [171] = {.lex_state = 94, .external_lex_state = 5},
  [172] = {.lex_state = 94, .external_lex_state = 5},
  [173] = {.lex_state = 94, .external_lex_state = 5},
  [174] = {.lex_state = 94, .external_lex_state = 5},
  [175] = {.lex_state = 94, .external_lex_state = 5},
  [176] = {.lex_state = 94, .external_lex_state = 5},
  [177] = {.lex_state = 94, .external_lex_state = 5},
  [178] = {.lex_state = 94, .external_lex_state = 5},
  [179] = {.lex_state = 94, .external_lex_state = 5},
  [180] = {.lex_state = 94, .external_lex_state = 5},
  [181] = {.lex_state = 94, .external_lex_state = 5},
  [182] = {.lex_state = 94, .external_lex_state = 5},
  [183] = {.lex_state = 94, .external_lex_state = 5},
  [184] = {.lex_state = 108, .external_lex_state = 1},
  [185] = {.lex_state = 108, .external_lex_state = 1},
  [186] = {.lex_state = 108, .external_lex_state = 1},
  [187] = {.lex_state = 108, .external_lex_state = 1},
  [188] = {.lex_state = 108, .external_lex_state = 1},
  [189] = {.lex_state = 108, .external_lex_state = 1},
  [190] = {.lex_state = 108, .external_lex_state = 1},
  [191] = {.lex_state = 108, .external_lex_state = 1},
  [192] = {.lex_state = 108, .external_lex_state = 1},
  [193] = {.lex_state = 108, .external_lex_state = 1},
  [194] = {.lex_state = 108, .external_lex_state = 1},
  [195] = {.lex_state = 108, .external_lex_state = 1},
  [196] = {.lex_state = 108, .external_lex_state = 1},
  [197] = {.lex_state = 108, .external_lex_state = 1},
  [198] = {.lex_state = 108, .external_lex_state = 1},
  [199] = {.lex_state = 108, .external_lex_state = 1},
  [200] = {.lex_state = 108, .external_lex_state = 1},
  [201] = {.lex_state = 108, .external_lex_state = 1},
  [202] = {.lex_state = 108, .external_lex_state = 1},
  [203] = {.lex_state = 108, .external_lex_state = 1},
  [204] = {.lex_state = 108, .external_lex_state = 1},
  [205] = {.lex_state = 108, .external_lex_state = 1},
  [206] = {.lex_state = 108, .external_lex_state = 1},
  [207] = {.lex_state = 108, .external_lex_state = 1},
  [208] = {.lex_state = 108, .external_lex_state = 1},
  [209] = {.lex_state = 108, .external_lex_state = 1},
  [210] = {.lex_state = 108, .external_lex_state = 1},
  [211] = {.lex_state = 108, .external_lex_state = 1},
  [212] = {.lex_state = 108, .external_lex_state = 1},
  [213] = {.lex_state = 108, .external_lex_state = 1},
  [214] = {.lex_state = 108, .external_lex_state = 1},
  [215] = {.lex_state = 108, .external_lex_state = 1},
  [216] = {.lex_state = 108, .external_lex_state = 1},
  [217] = {.lex_state = 108, .external_lex_state = 1},
  [218] = {.lex_state = 108, .external_lex_state = 1},
  [219] = {.lex_state = 108, .external_lex_state = 1},
  [220] = {.lex_state = 108, .external_lex_state = 1},
  [221] = {.lex_state = 108, .external_lex_state = 1},
  [222] = {.lex_state = 108, .external_lex_state = 1},
  [223] = {.lex_state = 94, .external_lex_state = 5},
  [224] = {.lex_state = 108, .external_lex_state = 1},
  [225] = {.lex_state = 108, .external_lex_state = 1},
  [226] = {.lex_state = 108, .external_lex_state = 1},
  [227] = {.lex_state = 94, .external_lex_state = 5},
  [228] = {.lex_state = 108, .external_lex_state = 1},
  [229] = {.lex_state = 94, .external_lex_state = 5},
  [230] = {.lex_state = 94, .external_lex_state = 5},
  [231] = {.lex_state = 94, .external_lex_state = 5},
  [232] = {.lex_state = 94, .external_lex_state = 5},
  [233] = {.lex_state = 94, .external_lex_state = 5},
  [234] = {.lex_state = 94, .external_lex_state = 5},
  [235] = {.lex_state = 94, .external_lex_state = 5},
  [236] = {.lex_state = 94, .external_lex_state = 5},
  [237] = {.lex_state = 83, .external_lex_state = 1},
  [238] = {.lex_state = 30, .external_lex_state = 5},
  [239] = {.lex_state = 30, .external_lex_state = 5},
  [240] = {.lex_state = 30, .external_lex_state = 5},
  [241] = {.lex_state = 30, .external_lex_state = 5},
  [242] = {.lex_state = 30, .external_lex_state = 5},
  [243] = {.lex_state = 30, .external_lex_state = 5},
  [244] = {.lex_state = 30, .external_lex_state = 5},
  [245] = {.lex_state = 30, .external_lex_state = 5},
  [246] = {.lex_state = 30, .external_lex_state = 5},
  [247] = {.lex_state = 30, .external_lex_state = 5},
  [248] = {.lex_state = 30, .external_lex_state = 5},
  [249] = {.lex_state = 30, .external_lex_state = 5},
  [250] = {.lex_state = 30, .external_lex_state = 5},
  [251] = {.lex_state = 30, .external_lex_state = 5},
  [252] = {.lex_state = 30, .external_lex_state = 5},
  [253] = {.lex_state = 30, .external_lex_state = 5},
  [254] = {.lex_state = 30, .external_lex_state = 5},
  [255] = {.lex_state = 30, .external_lex_state = 5},
  [256] = {.lex_state = 30, .external_lex_state = 5},
  [257] = {.lex_state = 30, .external_lex_state = 5},
  [258] = {.lex_state = 30, .external_lex_state = 5},
  [259] = {.lex_state = 30, .external_lex_state = 5},
  [260] = {.lex_state = 30, .external_lex_state = 5},
  [261] = {.lex_state = 30, .external_lex_state = 5},
  [262] = {.lex_state = 30, .external_lex_state = 5},
  [263] = {.lex_state = 30, .external_lex_state = 5},
  [264] = {.lex_state = 30, .external_lex_state = 5},
  [265] = {.lex_state = 30, .external_lex_state = 5},
  [266] = {.lex_state = 30, .external_lex_state = 5},
  [267] = {.lex_state = 30, .external_lex_state = 5},
  [268] = {.lex_state = 30, .external_lex_state = 5},
  [269] = {.lex_state = 30, .external_lex_state = 5},
  [270] = {.lex_state = 30, .external_lex_state = 5},
  [271] = {.lex_state = 30, .external_lex_state = 5},
  [272] = {.lex_state = 30, .external_lex_state = 5},
  [273] = {.lex_state = 30, .external_lex_state = 5},
  [274] = {.lex_state = 30, .external_lex_state = 5},
  [275] = {.lex_state = 30, .external_lex_state = 5},
  [276] = {.lex_state = 30, .external_lex_state = 5},
  [277] = {.lex_state = 30, .external_lex_state = 5},
  [278] = {.lex_state = 30, .external_lex_state = 5},
  [279] = {.lex_state = 30, .external_lex_state = 5},
  [280] = {.lex_state = 30, .external_lex_state = 5},
  [281] = {.lex_state = 30, .external_lex_state = 5},
  [282] = {.lex_state = 30, .external_lex_state = 5},
  [283] = {.lex_state = 30, .external_lex_state = 5},
  [284] = {.lex_state = 30, .external_lex_state = 5},
  [285] = {.lex_state = 30, .external_lex_state = 5},
  [286] = {.lex_state = 30, .external_lex_state = 5},
  [287] = {.lex_state = 30, .external_lex_state = 5},
  [288] = {.lex_state = 30, .external_lex_state = 5},
  [289] = {.lex_state = 30, .external_lex_state = 5},
  [290] = {.lex_state = 30, .external_lex_state = 5},
  [291] = {.lex_state = 30, .external_lex_state = 5},
  [292] = {.lex_state = 30, .external_lex_state = 5},
  [293] = {.lex_state = 83, .external_lex_state = 1},
  [294] = {.lex_state = 83, .external_lex_state = 1},
  [295] = {.lex_state = 30, .external_lex_state = 2},
  [296] = {.lex_state = 30, .external_lex_state = 2},
  [297] = {.lex_state = 30, .external_lex_state = 2},
  [298] = {.lex_state = 30, .external_lex_state = 2},
  [299] = {.lex_state = 30, .external_lex_state = 2},
  [300] = {.lex_state = 30, .external_lex_state = 2},
  [301] = {.lex_state = 30, .external_lex_state = 2},
  [302] = {.lex_state = 30, .external_lex_state = 2},
  [303] = {.lex_state = 197, .external_lex_state = 2},
  [304] = {.lex_state = 30, .external_lex_state = 2},
  [305] = {.lex_state = 30, .external_lex_state = 2},
  [306] = {.lex_state = 30, .external_lex_state = 2},
  [307] = {.lex_state = 30, .external_lex_state = 2},
  [308] = {.lex_state = 30, .external_lex_state = 2},
  [309] = {.lex_state = 30, .external_lex_state = 2},
  [310] = {.lex_state = 30, .external_lex_state = 2},
  [311] = {.lex_state = 30, .external_lex_state = 2},
  [312] = {.lex_state = 30, .external_lex_state = 2},
  [313] = {.lex_state = 30, .external_lex_state = 2},
  [314] = {.lex_state = 30, .external_lex_state = 2},
  [315] = {.lex_state = 30, .external_lex_state = 2},
  [316] = {.lex_state = 30, .external_lex_state = 2},
  [317] = {.lex_state = 30, .external_lex_state = 2},
  [318] = {.lex_state = 197, .external_lex_state = 2},
  [319] = {.lex_state = 30, .external_lex_state = 2},
  [320] = {.lex_state = 30, .external_lex_state = 2},
  [321] = {.lex_state = 30, .external_lex_state = 2},
  [322] = {.lex_state = 30, .external_lex_state = 2},
  [323] = {.lex_state = 30, .external_lex_state = 2},
  [324] = {.lex_state = 30, .external_lex_state = 2},
  [325] = {.lex_state = 30, .external_lex_state = 2},
  [326] = {.lex_state = 30, .external_lex_state = 2},
  [327] = {.lex_state = 30, .external_lex_state = 2},
  [328] = {.lex_state = 30, .external_lex_state = 2},
  [329] = {.lex_state = 30, .external_lex_state = 2},
  [330] = {.lex_state = 30, .external_lex_state = 2},
  [331] = {.lex_state = 83, .external_lex_state = 1},
  [332] = {.lex_state = 83, .external_lex_state = 1},
  [333] = {.lex_state = 83, .external_lex_state = 1},
  [334] = {.lex_state = 30, .external_lex_state = 2},
  [335] = {.lex_state = 30, .external_lex_state = 2},
  [336] = {.lex_state = 30, .external_lex_state = 2},
  [337] = {.lex_state = 30, .external_lex_state = 2},
  [338] = {.lex_state = 83, .external_lex_state = 1},
  [339] = {.lex_state = 197, .external_lex_state = 2},
  [340] = {.lex_state = 30, .external_lex_state = 2},
  [341] = {.lex_state = 30, .external_lex_state = 2},
  [342] = {.lex_state = 30, .external_lex_state = 2},
  [343] = {.lex_state = 30, .external_lex_state = 2},
  [344] = {.lex_state = 197, .external_lex_state = 2},
  [345] = {.lex_state = 30, .external_lex_state = 2},
  [346] = {.lex_state = 197, .external_lex_state = 2},
  [347] = {.lex_state = 89, .external_lex_state = 5},
  [348] = {.lex_state = 83, .external_lex_state = 4},
  [349] = {.lex_state = 83, .external_lex_state = 4},
  [350] = {.lex_state = 107, .external_lex_state = 1},
  [351] = {.lex_state = 83, .external_lex_state = 4},
  [352] = {.lex_state = 83, .external_lex_state = 3},
  [353] = {.lex_state = 107, .external_lex_state = 1},
  [354] = {.lex_state = 107, .external_lex_state = 1},
  [355] = {.lex_state = 89, .external_lex_state = 5},
  [356] = {.lex_state = 83, .external_lex_state = 3},
  [357] = {.lex_state = 107, .external_lex_state = 1},
  [358] = {.lex_state = 107, .external_lex_state = 1},
  [359] = {.lex_state = 83, .external_lex_state = 3},
  [360] = {.lex_state = 99, .external_lex_state = 2},
  [361] = {.lex_state = 89, .external_lex_state = 5},
  [362] = {.lex_state = 85, .external_lex_state = 3},
  [363] = {.lex_state = 89, .external_lex_state = 5},
  [364] = {.lex_state = 85, .external_lex_state = 3},
  [365] = {.lex_state = 85, .external_lex_state = 3},
  [366] = {.lex_state = 89, .external_lex_state = 5},
  [367] = {.lex_state = 85, .external_lex_state = 3},
  [368] = {.lex_state = 107, .external_lex_state = 1},
  [369] = {.lex_state = 107, .external_lex_state = 1},
  [370] = {.lex_state = 107, .external_lex_state = 1},
  [371] = {.lex_state = 89, .external_lex_state = 5},
  [372] = {.lex_state = 107, .external_lex_state = 1},
  [373] = {.lex_state = 85, .external_lex_state = 3},
  [374] = {.lex_state = 89, .external_lex_state = 5},
  [375] = {.lex_state = 107, .external_lex_state = 1},
  [376] = {.lex_state = 89, .external_lex_state = 5},
  [377] = {.lex_state = 89, .external_lex_state = 2},
  [378] = {.lex_state = 0, .external_lex_state = 5},
  [379] = {.lex_state = 109, .external_lex_state = 3},
  [380] = {.lex_state = 89, .external_lex_state = 2},
  [381] = {.lex_state = 85, .external_lex_state = 2},
  [382] = {.lex_state = 0, .external_lex_state = 3},
  [383] = {.lex_state = 0, .external_lex_state = 3},
  [384] = {.lex_state = 89, .external_lex_state = 2},
  [385] = {.lex_state = 0, .external_lex_state = 5},
  [386] = {.lex_state = 0, .external_lex_state = 5},
  [387] = {.lex_state = 2, .external_lex_state = 2},
  [388] = {.lex_state = 109, .external_lex_state = 3},
  [389] = {.lex_state = 0, .external_lex_state = 5},
  [390] = {.lex_state = 89, .external_lex_state = 2},
  [391] = {.lex_state = 0, .external_lex_state = 5},
  [392] = {.lex_state = 2, .external_lex_state = 2},
  [393] = {.lex_state = 0, .external_lex_state = 5},
  [394] = {.lex_state = 85, .external_lex_state = 2},
  [395] = {.lex_state = 109, .external_lex_state = 3},
  [396] = {.lex_state = 0, .external_lex_state = 5},
  [397] = {.lex_state = 89, .external_lex_state = 2},
  [398] = {.lex_state = 85, .external_lex_state = 2},
  [399] = {.lex_state = 89, .external_lex_state = 2},
  [400] = {.lex_state = 89, .external_lex_state = 2},
  [401] = {.lex_state = 0, .external_lex_state = 3},
  [402] = {.lex_state = 0, .external_lex_state = 6},
  [403] = {.lex_state = 0, .external_lex_state = 3},
  [404] = {.lex_state = 0, .external_lex_state = 3},
  [405] = {.lex_state = 0, .external_lex_state = 3},
  [406] = {.lex_state = 31, .external_lex_state = 2},
  [407] = {.lex_state = 0, .external_lex_state = 3},
  [408] = {.lex_state = 0, .external_lex_state = 3},
  [409] = {.lex_state = 0, .external_lex_state = 5},
  [410] = {.lex_state = 0, .external_lex_state = 5},
  [411] = {.lex_state = 0, .external_lex_state = 3},
  [412] = {.lex_state = 0, .external_lex_state = 3},
  [413] = {.lex_state = 0, .external_lex_state = 5},
  [414] = {.lex_state = 31, .external_lex_state = 2},
  [415] = {.lex_state = 0, .external_lex_state = 3},
  [416] = {.lex_state = 31, .external_lex_state = 2},
  [417] = {.lex_state = 0, .external_lex_state = 3},
  [418] = {.lex_state = 0, .external_lex_state = 3},
  [419] = {.lex_state = 0, .external_lex_state = 3},
  [420] = {.lex_state = 31, .external_lex_state = 2},
  [421] = {.lex_state = 0, .external_lex_state = 3},
  [422] = {.lex_state = 31, .external_lex_state = 2},
  [423] = {.lex_state = 31, .external_lex_state = 2},
  [424] = {.lex_state = 89, .external_lex_state = 2},
  [425] = {.lex_state = 31, .external_lex_state = 2},
  [426] = {.lex_state = 0, .external_lex_state = 3},
  [427] = {.lex_state = 85, .external_lex_state = 2},
  [428] = {.lex_state = 85, .external_lex_state = 2},
  [429] = {.lex_state = 31, .external_lex_state = 2},
  [430] = {.lex_state = 31, .external_lex_state = 2},
  [431] = {.lex_state = 0, .external_lex_state = 2},
  [432] = {.lex_state = 0, .external_lex_state = 5},
  [433] = {.lex_state = 0, .external_lex_state = 3},
  [434] = {.lex_state = 89, .external_lex_state = 2},
  [435] = {.lex_state = 0, .external_lex_state = 2},
  [436] = {.lex_state = 85, .external_lex_state = 2},
  [437] = {.lex_state = 0, .external_lex_state = 2},
  [438] = {.lex_state = 0, .external_lex_state = 5},
  [439] = {.lex_state = 0, .external_lex_state = 5},
  [440] = {.lex_state = 85, .external_lex_state = 2},
  [441] = {.lex_state = 0, .external_lex_state = 2},
  [442] = {.lex_state = 32, .external_lex_state = 2},
  [443] = {.lex_state = 0, .external_lex_state = 2},
  [444] = {.lex_state = 0, .external_lex_state = 2},
  [445] = {.lex_state = 89, .external_lex_state = 2},
  [446] = {.lex_state = 0, .external_lex_state = 3},
  [447] = {.lex_state = 106, .external_lex_state = 2},
  [448] = {.lex_state = 32, .external_lex_state = 2},
  [449] = {.lex_state = 0, .external_lex_state = 6},
  [450] = {.lex_state = 32, .external_lex_state = 2},
  [451] = {.lex_state = 0, .external_lex_state = 2},
  [452] = {.lex_state = 39, .external_lex_state = 2},
  [453] = {.lex_state = 39, .external_lex_state = 2},
  [454] = {.lex_state = 39, .external_lex_state = 2},
  [455] = {.lex_state = 39, .external_lex_state = 2},
  [456] = {.lex_state = 39, .external_lex_state = 2},
  [457] = {.lex_state = 0, .external_lex_state = 2},
  [458] = {.lex_state = 0, .external_lex_state = 2},
  [459] = {.lex_state = 0, .external_lex_state = 2},
  [460] = {.lex_state = 0, .external_lex_state = 6},
  [461] = {.lex_state = 0, .external_lex_state = 2},
  [462] = {.lex_state = 0, .external_lex_state = 2},
  [463] = {.lex_state = 0, .external_lex_state = 2},
  [464] = {.lex_state = 0, .external_lex_state = 2},
  [465] = {.lex_state = 0, .external_lex_state = 2},
  [466] = {.lex_state = 0, .external_lex_state = 2},
  [467] = {.lex_state = 0, .external_lex_state = 2},
  [468] = {.lex_state = 109, .external_lex_state = 2},
  [469] = {.lex_state = 0, .external_lex_state = 2},
  [470] = {.lex_state = 32, .external_lex_state = 2},
  [471] = {.lex_state = 197, .external_lex_state = 2},
  [472] = {.lex_state = 0, .external_lex_state = 2},
  [473] = {.lex_state = 32, .external_lex_state = 2},
  [474] = {.lex_state = 32, .external_lex_state = 2},
  [475] = {.lex_state = 25, .external_lex_state = 2},
  [476] = {.lex_state = 0, .external_lex_state = 2},
  [477] = {.lex_state = 0, .external_lex_state = 2},
  [478] = {.lex_state = 0, .external_lex_state = 2},
  [479] = {.lex_state = 32, .external_lex_state = 2},
  [480] = {.lex_state = 0, .external_lex_state = 2},
  [481] = {.lex_state = 197, .external_lex_state = 2},
  [482] = {.lex_state = 0, .external_lex_state = 2},
  [483] = {.lex_state = 0, .external_lex_state = 2},
  [484] = {.lex_state = 0, .external_lex_state = 2},
  [485] = {.lex_state = 0, .external_lex_state = 2},
  [486] = {.lex_state = 0, .external_lex_state = 2},
  [487] = {.lex_state = 109, .external_lex_state = 2},
  [488] = {.lex_state = 197, .external_lex_state = 2},
  [489] = {.lex_state = 0, .external_lex_state = 2},
  [490] = {.lex_state = 109, .external_lex_state = 2},
  [491] = {.lex_state = 0, .external_lex_state = 2},
  [492] = {.lex_state = 0, .external_lex_state = 2},
  [493] = {.lex_state = 0, .external_lex_state = 3},
  [494] = {.lex_state = 0, .external_lex_state = 2},
  [495] = {.lex_state = 0, .external_lex_state = 2},
  [496] = {.lex_state = 25, .external_lex_state = 2},
  [497] = {.lex_state = 106, .external_lex_state = 2},
  [498] = {.lex_state = 108, .external_lex_state = 2},
  [499] = {.lex_state = 0, .external_lex_state = 2},
  [500] = {.lex_state = 109, .external_lex_state = 2},
  [501] = {.lex_state = 109, .external_lex_state = 2},
  [502] = {.lex_state = 0, .external_lex_state = 2},
  [503] = {.lex_state = 0, .external_lex_state = 2},
  [504] = {.lex_state = 0, .external_lex_state = 2},
  [505] = {.lex_state = 0, .external_lex_state = 2},
  [506] = {.lex_state = 0, .external_lex_state = 2},
  [507] = {.lex_state = 0, .external_lex_state = 2},
  [508] = {.lex_state = 0, .external_lex_state = 2},
  [509] = {.lex_state = 0, .external_lex_state = 2},
  [510] = {.lex_state = 0, .external_lex_state = 2},
  [511] = {.lex_state = 0, .external_lex_state = 2},
  [512] = {.lex_state = 197, .external_lex_state = 2},
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
    [sym_program] = STATE(495),
    [sym__statement] = STATE(4),
    [sym__comment] = STATE(494),
    [sym_directive] = STATE(383),
    [sym__macro_directive] = STATE(412),
    [sym__numeric_directive] = STATE(401),
    [sym_numeric_mnemonic] = STATE(487),
    [sym__string_directive] = STATE(405),
    [sym_string_mnemonic] = STATE(468),
    [sym__control_directive] = STATE(407),
    [sym_control_mnemonic] = STATE(395),
    [sym_instruction] = STATE(377),
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
    STATE(188), 1,
      sym__assignment_expression,
    STATE(189), 1,
      sym__logical_or_expression,
    STATE(190), 1,
      sym__wrapped_logical_or_expression,
    STATE(191), 1,
      sym__logical_and_expression,
    STATE(192), 1,
      sym__wrapped_logical_and_expression,
    STATE(193), 1,
      sym__bitwise_or_expression,
    STATE(194), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(195), 1,
      sym__bitwise_xor_expression,
    STATE(196), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(197), 1,
      sym__bitwise_and_expression,
    STATE(198), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(199), 1,
      sym__equality_expression,
    STATE(200), 1,
      sym__wrapped_equality_expression,
    STATE(201), 1,
      sym__relational_expression,
    STATE(202), 1,
      sym__wrapped_relational_expression,
    STATE(203), 1,
      sym__shift_expression,
    STATE(204), 1,
      sym__wrapped_shift_expression,
    STATE(205), 1,
      sym__additive_expression,
    STATE(206), 1,
      sym__wrapped_additive_expression,
    STATE(207), 1,
      sym__multiplicative_expression,
    STATE(354), 1,
      sym__wrapped_assignment_expression,
    STATE(415), 1,
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
    STATE(208), 10,
      sym__wrapped_multiplicative_expression,
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
    STATE(150), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(163), 1,
      sym__assignment_expression,
    STATE(164), 1,
      sym__logical_or_expression,
    STATE(165), 1,
      sym__wrapped_logical_or_expression,
    STATE(166), 1,
      sym__logical_and_expression,
    STATE(167), 1,
      sym__wrapped_logical_and_expression,
    STATE(168), 1,
      sym__bitwise_or_expression,
    STATE(169), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(170), 1,
      sym__bitwise_xor_expression,
    STATE(171), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(172), 1,
      sym__bitwise_and_expression,
    STATE(173), 1,
      sym__equality_expression,
    STATE(174), 1,
      sym__wrapped_equality_expression,
    STATE(175), 1,
      sym__relational_expression,
    STATE(176), 1,
      sym__wrapped_relational_expression,
    STATE(177), 1,
      sym__shift_expression,
    STATE(178), 1,
      sym__wrapped_shift_expression,
    STATE(179), 1,
      sym__additive_expression,
    STATE(180), 1,
      sym__wrapped_additive_expression,
    STATE(181), 1,
      sym__multiplicative_expression,
    STATE(355), 1,
      sym__wrapped_assignment_expression,
    STATE(397), 1,
      sym__call_expression,
    STATE(400), 1,
      sym_operands,
    STATE(363), 2,
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
    STATE(182), 10,
      sym__wrapped_multiplicative_expression,
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
    STATE(380), 1,
      sym_instruction,
    STATE(382), 1,
      sym_directive,
    STATE(395), 1,
      sym_control_mnemonic,
    STATE(401), 1,
      sym__numeric_directive,
    STATE(405), 1,
      sym__string_directive,
    STATE(407), 1,
      sym__control_directive,
    STATE(412), 1,
      sym__macro_directive,
    STATE(464), 1,
      sym__comment,
    STATE(468), 1,
      sym_string_mnemonic,
    STATE(487), 1,
      sym_numeric_mnemonic,
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
      sym__bitwise_and_expression,
    STATE(109), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(110), 1,
      sym__equality_expression,
    STATE(111), 1,
      sym__wrapped_equality_expression,
    STATE(112), 1,
      sym__relational_expression,
    STATE(113), 1,
      sym__wrapped_relational_expression,
    STATE(114), 1,
      sym__shift_expression,
    STATE(115), 1,
      sym__wrapped_shift_expression,
    STATE(116), 1,
      sym__additive_expression,
    STATE(117), 1,
      sym__wrapped_additive_expression,
    STATE(118), 1,
      sym__multiplicative_expression,
    STATE(121), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(122), 1,
      sym__bitwise_xor_expression,
    STATE(123), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(127), 1,
      sym__bitwise_or_expression,
    STATE(129), 1,
      sym__assignment_expression,
    STATE(130), 1,
      sym__logical_or_expression,
    STATE(131), 1,
      sym__wrapped_logical_or_expression,
    STATE(132), 1,
      sym__logical_and_expression,
    STATE(138), 1,
      sym__wrapped_logical_and_expression,
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
    STATE(119), 10,
      sym__wrapped_multiplicative_expression,
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
    STATE(395), 1,
      sym_control_mnemonic,
    STATE(401), 1,
      sym__numeric_directive,
    STATE(405), 1,
      sym__string_directive,
    STATE(407), 1,
      sym__control_directive,
    STATE(412), 1,
      sym__macro_directive,
    STATE(424), 1,
      sym_instruction,
    STATE(433), 1,
      sym_directive,
    STATE(468), 1,
      sym_string_mnemonic,
    STATE(487), 1,
      sym_numeric_mnemonic,
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
    STATE(150), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(163), 1,
      sym__assignment_expression,
    STATE(164), 1,
      sym__logical_or_expression,
    STATE(165), 1,
      sym__wrapped_logical_or_expression,
    STATE(166), 1,
      sym__logical_and_expression,
    STATE(167), 1,
      sym__wrapped_logical_and_expression,
    STATE(168), 1,
      sym__bitwise_or_expression,
    STATE(169), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(170), 1,
      sym__bitwise_xor_expression,
    STATE(171), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(172), 1,
      sym__bitwise_and_expression,
    STATE(173), 1,
      sym__equality_expression,
    STATE(174), 1,
      sym__wrapped_equality_expression,
    STATE(175), 1,
      sym__relational_expression,
    STATE(176), 1,
      sym__wrapped_relational_expression,
    STATE(177), 1,
      sym__shift_expression,
    STATE(178), 1,
      sym__wrapped_shift_expression,
    STATE(179), 1,
      sym__additive_expression,
    STATE(180), 1,
      sym__wrapped_additive_expression,
    STATE(181), 1,
      sym__multiplicative_expression,
    STATE(355), 1,
      sym__wrapped_assignment_expression,
    STATE(374), 2,
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
    STATE(182), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [736] = 36,
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
    STATE(150), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(163), 1,
      sym__assignment_expression,
    STATE(164), 1,
      sym__logical_or_expression,
    STATE(165), 1,
      sym__wrapped_logical_or_expression,
    STATE(166), 1,
      sym__logical_and_expression,
    STATE(167), 1,
      sym__wrapped_logical_and_expression,
    STATE(168), 1,
      sym__bitwise_or_expression,
    STATE(169), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(170), 1,
      sym__bitwise_xor_expression,
    STATE(171), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(172), 1,
      sym__bitwise_and_expression,
    STATE(173), 1,
      sym__equality_expression,
    STATE(174), 1,
      sym__wrapped_equality_expression,
    STATE(175), 1,
      sym__relational_expression,
    STATE(176), 1,
      sym__wrapped_relational_expression,
    STATE(177), 1,
      sym__shift_expression,
    STATE(178), 1,
      sym__wrapped_shift_expression,
    STATE(179), 1,
      sym__additive_expression,
    STATE(180), 1,
      sym__wrapped_additive_expression,
    STATE(181), 1,
      sym__multiplicative_expression,
    STATE(355), 1,
      sym__wrapped_assignment_expression,
    STATE(374), 2,
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
    STATE(182), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [866] = 37,
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
    STATE(188), 1,
      sym__assignment_expression,
    STATE(189), 1,
      sym__logical_or_expression,
    STATE(190), 1,
      sym__wrapped_logical_or_expression,
    STATE(191), 1,
      sym__logical_and_expression,
    STATE(192), 1,
      sym__wrapped_logical_and_expression,
    STATE(193), 1,
      sym__bitwise_or_expression,
    STATE(194), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(195), 1,
      sym__bitwise_xor_expression,
    STATE(196), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(197), 1,
      sym__bitwise_and_expression,
    STATE(198), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(199), 1,
      sym__equality_expression,
    STATE(200), 1,
      sym__wrapped_equality_expression,
    STATE(201), 1,
      sym__relational_expression,
    STATE(202), 1,
      sym__wrapped_relational_expression,
    STATE(203), 1,
      sym__shift_expression,
    STATE(204), 1,
      sym__wrapped_shift_expression,
    STATE(205), 1,
      sym__additive_expression,
    STATE(206), 1,
      sym__wrapped_additive_expression,
    STATE(207), 1,
      sym__multiplicative_expression,
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
    STATE(368), 4,
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
    STATE(208), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [997] = 37,
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
    STATE(239), 1,
      sym__shift_expression,
    STATE(240), 1,
      sym__wrapped_shift_expression,
    STATE(241), 1,
      sym__additive_expression,
    STATE(242), 1,
      sym__wrapped_additive_expression,
    STATE(243), 1,
      sym__multiplicative_expression,
    STATE(264), 1,
      sym__assignment_expression,
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
      sym__wrapped_bitwise_or_expression,
    STATE(271), 1,
      sym__bitwise_xor_expression,
    STATE(272), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(273), 1,
      sym__bitwise_and_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(275), 1,
      sym__equality_expression,
    STATE(276), 1,
      sym__wrapped_equality_expression,
    STATE(277), 1,
      sym__relational_expression,
    STATE(279), 1,
      sym__wrapped_relational_expression,
    STATE(396), 1,
      sym__wrapped_assignment_expression,
    STATE(492), 1,
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
    STATE(409), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(244), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1126] = 39,
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
    STATE(239), 1,
      sym__shift_expression,
    STATE(240), 1,
      sym__wrapped_shift_expression,
    STATE(241), 1,
      sym__additive_expression,
    STATE(242), 1,
      sym__wrapped_additive_expression,
    STATE(243), 1,
      sym__multiplicative_expression,
    STATE(264), 1,
      sym__assignment_expression,
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
      sym__wrapped_bitwise_or_expression,
    STATE(271), 1,
      sym__bitwise_xor_expression,
    STATE(272), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(273), 1,
      sym__bitwise_and_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(275), 1,
      sym__equality_expression,
    STATE(276), 1,
      sym__wrapped_equality_expression,
    STATE(277), 1,
      sym__relational_expression,
    STATE(279), 1,
      sym__wrapped_relational_expression,
    STATE(290), 1,
      sym_symbol,
    STATE(386), 1,
      sym__wrapped_assignment_expression,
    STATE(506), 1,
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
    STATE(409), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(244), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1259] = 38,
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
      sym__shift_expression,
    STATE(240), 1,
      sym__wrapped_shift_expression,
    STATE(241), 1,
      sym__additive_expression,
    STATE(242), 1,
      sym__wrapped_additive_expression,
    STATE(243), 1,
      sym__multiplicative_expression,
    STATE(264), 1,
      sym__assignment_expression,
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
      sym__wrapped_bitwise_or_expression,
    STATE(271), 1,
      sym__bitwise_xor_expression,
    STATE(272), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(273), 1,
      sym__bitwise_and_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(275), 1,
      sym__equality_expression,
    STATE(276), 1,
      sym__wrapped_equality_expression,
    STATE(277), 1,
      sym__relational_expression,
    STATE(279), 1,
      sym__wrapped_relational_expression,
    STATE(280), 1,
      sym_symbol,
    STATE(385), 1,
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
    ACTIONS(161), 2,
      sym_register,
      sym_macro_variable,
    STATE(409), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(244), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1389] = 38,
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
      sym__shift_expression,
    STATE(240), 1,
      sym__wrapped_shift_expression,
    STATE(241), 1,
      sym__additive_expression,
    STATE(242), 1,
      sym__wrapped_additive_expression,
    STATE(243), 1,
      sym__multiplicative_expression,
    STATE(264), 1,
      sym__assignment_expression,
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
      sym__wrapped_bitwise_or_expression,
    STATE(271), 1,
      sym__bitwise_xor_expression,
    STATE(272), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(273), 1,
      sym__bitwise_and_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(275), 1,
      sym__equality_expression,
    STATE(276), 1,
      sym__wrapped_equality_expression,
    STATE(277), 1,
      sym__relational_expression,
    STATE(279), 1,
      sym__wrapped_relational_expression,
    STATE(291), 1,
      sym_symbol,
    STATE(396), 1,
      sym__wrapped_assignment_expression,
    STATE(499), 1,
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
    STATE(409), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(244), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1519] = 36,
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
    STATE(239), 1,
      sym__shift_expression,
    STATE(240), 1,
      sym__wrapped_shift_expression,
    STATE(241), 1,
      sym__additive_expression,
    STATE(242), 1,
      sym__wrapped_additive_expression,
    STATE(243), 1,
      sym__multiplicative_expression,
    STATE(264), 1,
      sym__assignment_expression,
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
      sym__wrapped_bitwise_or_expression,
    STATE(271), 1,
      sym__bitwise_xor_expression,
    STATE(272), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(273), 1,
      sym__bitwise_and_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(275), 1,
      sym__equality_expression,
    STATE(276), 1,
      sym__wrapped_equality_expression,
    STATE(277), 1,
      sym__relational_expression,
    STATE(279), 1,
      sym__wrapped_relational_expression,
    STATE(396), 1,
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
    STATE(438), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(244), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1645] = 36,
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
    STATE(239), 1,
      sym__shift_expression,
    STATE(240), 1,
      sym__wrapped_shift_expression,
    STATE(241), 1,
      sym__additive_expression,
    STATE(242), 1,
      sym__wrapped_additive_expression,
    STATE(243), 1,
      sym__multiplicative_expression,
    STATE(264), 1,
      sym__assignment_expression,
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
      sym__wrapped_bitwise_or_expression,
    STATE(271), 1,
      sym__bitwise_xor_expression,
    STATE(272), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(273), 1,
      sym__bitwise_and_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(275), 1,
      sym__equality_expression,
    STATE(276), 1,
      sym__wrapped_equality_expression,
    STATE(277), 1,
      sym__relational_expression,
    STATE(279), 1,
      sym__wrapped_relational_expression,
    STATE(396), 1,
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
    STATE(438), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(244), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1771] = 38,
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
      sym__shift_expression,
    STATE(240), 1,
      sym__wrapped_shift_expression,
    STATE(241), 1,
      sym__additive_expression,
    STATE(242), 1,
      sym__wrapped_additive_expression,
    STATE(243), 1,
      sym__multiplicative_expression,
    STATE(264), 1,
      sym__assignment_expression,
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
      sym__wrapped_bitwise_or_expression,
    STATE(271), 1,
      sym__bitwise_xor_expression,
    STATE(272), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(273), 1,
      sym__bitwise_and_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(275), 1,
      sym__equality_expression,
    STATE(276), 1,
      sym__wrapped_equality_expression,
    STATE(277), 1,
      sym__relational_expression,
    STATE(279), 1,
      sym__wrapped_relational_expression,
    STATE(286), 1,
      sym_symbol,
    STATE(393), 1,
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
    ACTIONS(165), 2,
      sym_register,
      sym_macro_variable,
    STATE(409), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(244), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1901] = 38,
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
      sym__shift_expression,
    STATE(240), 1,
      sym__wrapped_shift_expression,
    STATE(241), 1,
      sym__additive_expression,
    STATE(242), 1,
      sym__wrapped_additive_expression,
    STATE(243), 1,
      sym__multiplicative_expression,
    STATE(264), 1,
      sym__assignment_expression,
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
      sym__wrapped_bitwise_or_expression,
    STATE(271), 1,
      sym__bitwise_xor_expression,
    STATE(272), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(273), 1,
      sym__bitwise_and_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(275), 1,
      sym__equality_expression,
    STATE(276), 1,
      sym__wrapped_equality_expression,
    STATE(277), 1,
      sym__relational_expression,
    STATE(279), 1,
      sym__wrapped_relational_expression,
    STATE(282), 1,
      sym_symbol,
    STATE(389), 1,
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
    ACTIONS(167), 2,
      sym_register,
      sym_macro_variable,
    STATE(409), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(244), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2031] = 38,
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
      sym__shift_expression,
    STATE(240), 1,
      sym__wrapped_shift_expression,
    STATE(241), 1,
      sym__additive_expression,
    STATE(242), 1,
      sym__wrapped_additive_expression,
    STATE(243), 1,
      sym__multiplicative_expression,
    STATE(264), 1,
      sym__assignment_expression,
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
      sym__wrapped_bitwise_or_expression,
    STATE(271), 1,
      sym__bitwise_xor_expression,
    STATE(272), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(273), 1,
      sym__bitwise_and_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(275), 1,
      sym__equality_expression,
    STATE(276), 1,
      sym__wrapped_equality_expression,
    STATE(277), 1,
      sym__relational_expression,
    STATE(279), 1,
      sym__wrapped_relational_expression,
    STATE(281), 1,
      sym_symbol,
    STATE(396), 1,
      sym__wrapped_assignment_expression,
    STATE(465), 1,
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
    STATE(409), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(244), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2161] = 38,
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
      sym__shift_expression,
    STATE(240), 1,
      sym__wrapped_shift_expression,
    STATE(241), 1,
      sym__additive_expression,
    STATE(242), 1,
      sym__wrapped_additive_expression,
    STATE(243), 1,
      sym__multiplicative_expression,
    STATE(264), 1,
      sym__assignment_expression,
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
      sym__wrapped_bitwise_or_expression,
    STATE(271), 1,
      sym__bitwise_xor_expression,
    STATE(272), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(273), 1,
      sym__bitwise_and_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(275), 1,
      sym__equality_expression,
    STATE(276), 1,
      sym__wrapped_equality_expression,
    STATE(277), 1,
      sym__relational_expression,
    STATE(279), 1,
      sym__wrapped_relational_expression,
    STATE(284), 1,
      sym_symbol,
    STATE(391), 1,
      sym__wrapped_assignment_expression,
    STATE(508), 1,
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
    STATE(409), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(244), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2291] = 38,
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
      sym__shift_expression,
    STATE(240), 1,
      sym__wrapped_shift_expression,
    STATE(241), 1,
      sym__additive_expression,
    STATE(242), 1,
      sym__wrapped_additive_expression,
    STATE(243), 1,
      sym__multiplicative_expression,
    STATE(264), 1,
      sym__assignment_expression,
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
      sym__wrapped_bitwise_or_expression,
    STATE(271), 1,
      sym__bitwise_xor_expression,
    STATE(272), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(273), 1,
      sym__bitwise_and_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(275), 1,
      sym__equality_expression,
    STATE(276), 1,
      sym__wrapped_equality_expression,
    STATE(277), 1,
      sym__relational_expression,
    STATE(279), 1,
      sym__wrapped_relational_expression,
    STATE(283), 1,
      sym_symbol,
    STATE(396), 1,
      sym__wrapped_assignment_expression,
    STATE(511), 1,
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
    STATE(409), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(244), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2421] = 38,
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
      sym__shift_expression,
    STATE(240), 1,
      sym__wrapped_shift_expression,
    STATE(241), 1,
      sym__additive_expression,
    STATE(242), 1,
      sym__wrapped_additive_expression,
    STATE(243), 1,
      sym__multiplicative_expression,
    STATE(264), 1,
      sym__assignment_expression,
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
      sym__wrapped_bitwise_or_expression,
    STATE(271), 1,
      sym__bitwise_xor_expression,
    STATE(272), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(273), 1,
      sym__bitwise_and_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(275), 1,
      sym__equality_expression,
    STATE(276), 1,
      sym__wrapped_equality_expression,
    STATE(277), 1,
      sym__relational_expression,
    STATE(279), 1,
      sym__wrapped_relational_expression,
    STATE(285), 1,
      sym_symbol,
    STATE(396), 1,
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
    ACTIONS(175), 2,
      sym_register,
      sym_macro_variable,
    STATE(409), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(244), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2551] = 38,
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
      sym__shift_expression,
    STATE(240), 1,
      sym__wrapped_shift_expression,
    STATE(241), 1,
      sym__additive_expression,
    STATE(242), 1,
      sym__wrapped_additive_expression,
    STATE(243), 1,
      sym__multiplicative_expression,
    STATE(264), 1,
      sym__assignment_expression,
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
      sym__wrapped_bitwise_or_expression,
    STATE(271), 1,
      sym__bitwise_xor_expression,
    STATE(272), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(273), 1,
      sym__bitwise_and_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(275), 1,
      sym__equality_expression,
    STATE(276), 1,
      sym__wrapped_equality_expression,
    STATE(277), 1,
      sym__relational_expression,
    STATE(279), 1,
      sym__wrapped_relational_expression,
    STATE(287), 1,
      sym_symbol,
    STATE(396), 1,
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
    ACTIONS(177), 2,
      sym_register,
      sym_macro_variable,
    STATE(409), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(244), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2681] = 38,
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
      sym__shift_expression,
    STATE(240), 1,
      sym__wrapped_shift_expression,
    STATE(241), 1,
      sym__additive_expression,
    STATE(242), 1,
      sym__wrapped_additive_expression,
    STATE(243), 1,
      sym__multiplicative_expression,
    STATE(264), 1,
      sym__assignment_expression,
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
      sym__wrapped_bitwise_or_expression,
    STATE(271), 1,
      sym__bitwise_xor_expression,
    STATE(272), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(273), 1,
      sym__bitwise_and_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(275), 1,
      sym__equality_expression,
    STATE(276), 1,
      sym__wrapped_equality_expression,
    STATE(277), 1,
      sym__relational_expression,
    STATE(279), 1,
      sym__wrapped_relational_expression,
    STATE(290), 1,
      sym_symbol,
    STATE(386), 1,
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
    ACTIONS(159), 2,
      sym_register,
      sym_macro_variable,
    STATE(409), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(244), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2811] = 38,
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
      sym__shift_expression,
    STATE(240), 1,
      sym__wrapped_shift_expression,
    STATE(241), 1,
      sym__additive_expression,
    STATE(242), 1,
      sym__wrapped_additive_expression,
    STATE(243), 1,
      sym__multiplicative_expression,
    STATE(264), 1,
      sym__assignment_expression,
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
      sym__wrapped_bitwise_or_expression,
    STATE(271), 1,
      sym__bitwise_xor_expression,
    STATE(272), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(273), 1,
      sym__bitwise_and_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(275), 1,
      sym__equality_expression,
    STATE(276), 1,
      sym__wrapped_equality_expression,
    STATE(277), 1,
      sym__relational_expression,
    STATE(279), 1,
      sym__wrapped_relational_expression,
    STATE(288), 1,
      sym_symbol,
    STATE(391), 1,
      sym__wrapped_assignment_expression,
    STATE(482), 1,
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
    STATE(409), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(244), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2941] = 38,
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
      sym__shift_expression,
    STATE(240), 1,
      sym__wrapped_shift_expression,
    STATE(241), 1,
      sym__additive_expression,
    STATE(242), 1,
      sym__wrapped_additive_expression,
    STATE(243), 1,
      sym__multiplicative_expression,
    STATE(264), 1,
      sym__assignment_expression,
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
      sym__wrapped_bitwise_or_expression,
    STATE(271), 1,
      sym__bitwise_xor_expression,
    STATE(272), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(273), 1,
      sym__bitwise_and_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(275), 1,
      sym__equality_expression,
    STATE(276), 1,
      sym__wrapped_equality_expression,
    STATE(277), 1,
      sym__relational_expression,
    STATE(279), 1,
      sym__wrapped_relational_expression,
    STATE(289), 1,
      sym_symbol,
    STATE(396), 1,
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
    ACTIONS(181), 2,
      sym_register,
      sym_macro_variable,
    STATE(409), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(244), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3071] = 35,
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
    STATE(150), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(163), 1,
      sym__assignment_expression,
    STATE(164), 1,
      sym__logical_or_expression,
    STATE(165), 1,
      sym__wrapped_logical_or_expression,
    STATE(166), 1,
      sym__logical_and_expression,
    STATE(167), 1,
      sym__wrapped_logical_and_expression,
    STATE(168), 1,
      sym__bitwise_or_expression,
    STATE(169), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(170), 1,
      sym__bitwise_xor_expression,
    STATE(171), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(172), 1,
      sym__bitwise_and_expression,
    STATE(173), 1,
      sym__equality_expression,
    STATE(174), 1,
      sym__wrapped_equality_expression,
    STATE(175), 1,
      sym__relational_expression,
    STATE(176), 1,
      sym__wrapped_relational_expression,
    STATE(177), 1,
      sym__shift_expression,
    STATE(178), 1,
      sym__wrapped_shift_expression,
    STATE(179), 1,
      sym__additive_expression,
    STATE(180), 1,
      sym__wrapped_additive_expression,
    STATE(181), 1,
      sym__multiplicative_expression,
    STATE(355), 1,
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
    STATE(374), 2,
      sym__operand,
      sym_string,
    ACTIONS(63), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(182), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3194] = 37,
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
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(296), 1,
      sym__wrapped_shift_expression,
    STATE(297), 1,
      sym__additive_expression,
    STATE(298), 1,
      sym__wrapped_additive_expression,
    STATE(299), 1,
      sym__multiplicative_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(335), 1,
      sym__bitwise_and_expression,
    STATE(336), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(337), 1,
      sym__equality_expression,
    STATE(339), 1,
      sym_address,
    STATE(340), 1,
      sym__shift_expression,
    STATE(341), 1,
      sym__wrapped_equality_expression,
    STATE(342), 1,
      sym__relational_expression,
    STATE(451), 1,
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
    STATE(471), 2,
      sym__string_operand,
      sym_string,
    ACTIONS(201), 4,
      sym_octal,
      sym_float,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(300), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
  [3321] = 35,
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
      sym__shift_expression,
    STATE(240), 1,
      sym__wrapped_shift_expression,
    STATE(241), 1,
      sym__additive_expression,
    STATE(242), 1,
      sym__wrapped_additive_expression,
    STATE(243), 1,
      sym__multiplicative_expression,
    STATE(264), 1,
      sym__assignment_expression,
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
      sym__wrapped_bitwise_or_expression,
    STATE(271), 1,
      sym__bitwise_xor_expression,
    STATE(272), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(273), 1,
      sym__bitwise_and_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(275), 1,
      sym__equality_expression,
    STATE(276), 1,
      sym__wrapped_equality_expression,
    STATE(277), 1,
      sym__relational_expression,
    STATE(279), 1,
      sym__wrapped_relational_expression,
    STATE(396), 1,
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
    STATE(438), 2,
      sym__operand,
      sym_string,
    ACTIONS(145), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(244), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3444] = 34,
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
      sym__bitwise_and_expression,
    STATE(109), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(110), 1,
      sym__equality_expression,
    STATE(111), 1,
      sym__wrapped_equality_expression,
    STATE(112), 1,
      sym__relational_expression,
    STATE(113), 1,
      sym__wrapped_relational_expression,
    STATE(114), 1,
      sym__shift_expression,
    STATE(115), 1,
      sym__wrapped_shift_expression,
    STATE(116), 1,
      sym__additive_expression,
    STATE(117), 1,
      sym__wrapped_additive_expression,
    STATE(118), 1,
      sym__multiplicative_expression,
    STATE(121), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(122), 1,
      sym__bitwise_xor_expression,
    STATE(123), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(127), 1,
      sym__bitwise_or_expression,
    STATE(129), 1,
      sym__assignment_expression,
    STATE(130), 1,
      sym__logical_or_expression,
    STATE(131), 1,
      sym__wrapped_logical_or_expression,
    STATE(132), 1,
      sym__logical_and_expression,
    STATE(138), 1,
      sym__wrapped_logical_and_expression,
    STATE(237), 1,
      sym__wrapped_assignment_expression,
    STATE(352), 1,
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
    STATE(119), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3563] = 33,
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
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(296), 1,
      sym__wrapped_shift_expression,
    STATE(297), 1,
      sym__additive_expression,
    STATE(298), 1,
      sym__wrapped_additive_expression,
    STATE(299), 1,
      sym__multiplicative_expression,
    STATE(301), 1,
      sym__wrapped_assignment_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(335), 1,
      sym__bitwise_and_expression,
    STATE(336), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(337), 1,
      sym__equality_expression,
    STATE(340), 1,
      sym__shift_expression,
    STATE(341), 1,
      sym__wrapped_equality_expression,
    STATE(342), 1,
      sym__relational_expression,
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
    STATE(300), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3679] = 33,
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
    STATE(150), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(163), 1,
      sym__assignment_expression,
    STATE(164), 1,
      sym__logical_or_expression,
    STATE(165), 1,
      sym__wrapped_logical_or_expression,
    STATE(166), 1,
      sym__logical_and_expression,
    STATE(167), 1,
      sym__wrapped_logical_and_expression,
    STATE(168), 1,
      sym__bitwise_or_expression,
    STATE(169), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(170), 1,
      sym__bitwise_xor_expression,
    STATE(171), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(172), 1,
      sym__bitwise_and_expression,
    STATE(173), 1,
      sym__equality_expression,
    STATE(174), 1,
      sym__wrapped_equality_expression,
    STATE(175), 1,
      sym__relational_expression,
    STATE(176), 1,
      sym__wrapped_relational_expression,
    STATE(177), 1,
      sym__shift_expression,
    STATE(178), 1,
      sym__wrapped_shift_expression,
    STATE(179), 1,
      sym__additive_expression,
    STATE(180), 1,
      sym__wrapped_additive_expression,
    STATE(181), 1,
      sym__multiplicative_expression,
    STATE(183), 1,
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
    STATE(182), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3795] = 33,
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
      sym__bitwise_and_expression,
    STATE(109), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(110), 1,
      sym__equality_expression,
    STATE(111), 1,
      sym__wrapped_equality_expression,
    STATE(112), 1,
      sym__relational_expression,
    STATE(113), 1,
      sym__wrapped_relational_expression,
    STATE(114), 1,
      sym__shift_expression,
    STATE(115), 1,
      sym__wrapped_shift_expression,
    STATE(116), 1,
      sym__additive_expression,
    STATE(117), 1,
      sym__wrapped_additive_expression,
    STATE(118), 1,
      sym__multiplicative_expression,
    STATE(121), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(122), 1,
      sym__bitwise_xor_expression,
    STATE(123), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(127), 1,
      sym__bitwise_or_expression,
    STATE(129), 1,
      sym__assignment_expression,
    STATE(130), 1,
      sym__logical_or_expression,
    STATE(131), 1,
      sym__wrapped_logical_or_expression,
    STATE(132), 1,
      sym__logical_and_expression,
    STATE(138), 1,
      sym__wrapped_logical_and_expression,
    STATE(333), 1,
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
    STATE(119), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3911] = 33,
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
      sym__bitwise_and_expression,
    STATE(109), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(110), 1,
      sym__equality_expression,
    STATE(111), 1,
      sym__wrapped_equality_expression,
    STATE(112), 1,
      sym__relational_expression,
    STATE(113), 1,
      sym__wrapped_relational_expression,
    STATE(114), 1,
      sym__shift_expression,
    STATE(115), 1,
      sym__wrapped_shift_expression,
    STATE(116), 1,
      sym__additive_expression,
    STATE(117), 1,
      sym__wrapped_additive_expression,
    STATE(118), 1,
      sym__multiplicative_expression,
    STATE(121), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(122), 1,
      sym__bitwise_xor_expression,
    STATE(123), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(127), 1,
      sym__bitwise_or_expression,
    STATE(129), 1,
      sym__assignment_expression,
    STATE(130), 1,
      sym__logical_or_expression,
    STATE(131), 1,
      sym__wrapped_logical_or_expression,
    STATE(132), 1,
      sym__logical_and_expression,
    STATE(138), 1,
      sym__wrapped_logical_and_expression,
    STATE(338), 1,
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
    STATE(119), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4027] = 33,
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
    STATE(239), 1,
      sym__shift_expression,
    STATE(240), 1,
      sym__wrapped_shift_expression,
    STATE(241), 1,
      sym__additive_expression,
    STATE(242), 1,
      sym__wrapped_additive_expression,
    STATE(243), 1,
      sym__multiplicative_expression,
    STATE(265), 1,
      sym__logical_or_expression,
    STATE(267), 1,
      sym__logical_and_expression,
    STATE(268), 1,
      sym__wrapped_logical_and_expression,
    STATE(269), 1,
      sym__bitwise_or_expression,
    STATE(270), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(271), 1,
      sym__bitwise_xor_expression,
    STATE(272), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(273), 1,
      sym__bitwise_and_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(275), 1,
      sym__equality_expression,
    STATE(276), 1,
      sym__wrapped_equality_expression,
    STATE(277), 1,
      sym__relational_expression,
    STATE(279), 1,
      sym__wrapped_relational_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(378), 1,
      sym__wrapped_logical_or_expression,
    STATE(458), 1,
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
    STATE(244), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4143] = 33,
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
    STATE(239), 1,
      sym__shift_expression,
    STATE(240), 1,
      sym__wrapped_shift_expression,
    STATE(241), 1,
      sym__additive_expression,
    STATE(242), 1,
      sym__wrapped_additive_expression,
    STATE(243), 1,
      sym__multiplicative_expression,
    STATE(250), 1,
      sym__wrapped_logical_and_expression,
    STATE(267), 1,
      sym__logical_and_expression,
    STATE(269), 1,
      sym__bitwise_or_expression,
    STATE(270), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(271), 1,
      sym__bitwise_xor_expression,
    STATE(272), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(273), 1,
      sym__bitwise_and_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(275), 1,
      sym__equality_expression,
    STATE(276), 1,
      sym__wrapped_equality_expression,
    STATE(277), 1,
      sym__relational_expression,
    STATE(279), 1,
      sym__wrapped_relational_expression,
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(458), 1,
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
    STATE(244), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4259] = 33,
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
    STATE(239), 1,
      sym__shift_expression,
    STATE(240), 1,
      sym__wrapped_shift_expression,
    STATE(241), 1,
      sym__additive_expression,
    STATE(242), 1,
      sym__wrapped_additive_expression,
    STATE(243), 1,
      sym__multiplicative_expression,
    STATE(251), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(269), 1,
      sym__bitwise_or_expression,
    STATE(271), 1,
      sym__bitwise_xor_expression,
    STATE(272), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(273), 1,
      sym__bitwise_and_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(275), 1,
      sym__equality_expression,
    STATE(276), 1,
      sym__wrapped_equality_expression,
    STATE(277), 1,
      sym__relational_expression,
    STATE(279), 1,
      sym__wrapped_relational_expression,
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(458), 1,
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
    STATE(244), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4375] = 33,
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
    STATE(238), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(239), 1,
      sym__shift_expression,
    STATE(240), 1,
      sym__wrapped_shift_expression,
    STATE(241), 1,
      sym__additive_expression,
    STATE(242), 1,
      sym__wrapped_additive_expression,
    STATE(243), 1,
      sym__multiplicative_expression,
    STATE(271), 1,
      sym__bitwise_xor_expression,
    STATE(273), 1,
      sym__bitwise_and_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(275), 1,
      sym__equality_expression,
    STATE(276), 1,
      sym__wrapped_equality_expression,
    STATE(277), 1,
      sym__relational_expression,
    STATE(279), 1,
      sym__wrapped_relational_expression,
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(458), 1,
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
    STATE(244), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4491] = 33,
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
    STATE(239), 1,
      sym__shift_expression,
    STATE(240), 1,
      sym__wrapped_shift_expression,
    STATE(241), 1,
      sym__additive_expression,
    STATE(242), 1,
      sym__wrapped_additive_expression,
    STATE(243), 1,
      sym__multiplicative_expression,
    STATE(252), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(273), 1,
      sym__bitwise_and_expression,
    STATE(275), 1,
      sym__equality_expression,
    STATE(276), 1,
      sym__wrapped_equality_expression,
    STATE(277), 1,
      sym__relational_expression,
    STATE(279), 1,
      sym__wrapped_relational_expression,
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(458), 1,
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
    STATE(244), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4607] = 33,
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
    STATE(239), 1,
      sym__shift_expression,
    STATE(240), 1,
      sym__wrapped_shift_expression,
    STATE(241), 1,
      sym__additive_expression,
    STATE(242), 1,
      sym__wrapped_additive_expression,
    STATE(243), 1,
      sym__multiplicative_expression,
    STATE(275), 1,
      sym__equality_expression,
    STATE(277), 1,
      sym__relational_expression,
    STATE(279), 1,
      sym__wrapped_relational_expression,
    STATE(292), 1,
      sym__wrapped_equality_expression,
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(335), 1,
      sym__bitwise_and_expression,
    STATE(336), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(458), 1,
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
    STATE(244), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4723] = 33,
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
    STATE(239), 1,
      sym__shift_expression,
    STATE(240), 1,
      sym__wrapped_shift_expression,
    STATE(241), 1,
      sym__additive_expression,
    STATE(242), 1,
      sym__wrapped_additive_expression,
    STATE(243), 1,
      sym__multiplicative_expression,
    STATE(253), 1,
      sym__wrapped_relational_expression,
    STATE(277), 1,
      sym__relational_expression,
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(335), 1,
      sym__bitwise_and_expression,
    STATE(336), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(337), 1,
      sym__equality_expression,
    STATE(341), 1,
      sym__wrapped_equality_expression,
    STATE(458), 1,
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
    STATE(244), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4839] = 33,
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
    STATE(239), 1,
      sym__shift_expression,
    STATE(241), 1,
      sym__additive_expression,
    STATE(242), 1,
      sym__wrapped_additive_expression,
    STATE(243), 1,
      sym__multiplicative_expression,
    STATE(254), 1,
      sym__wrapped_shift_expression,
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(335), 1,
      sym__bitwise_and_expression,
    STATE(336), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(337), 1,
      sym__equality_expression,
    STATE(341), 1,
      sym__wrapped_equality_expression,
    STATE(342), 1,
      sym__relational_expression,
    STATE(458), 1,
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
    STATE(244), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4955] = 33,
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
      sym__additive_expression,
    STATE(243), 1,
      sym__multiplicative_expression,
    STATE(255), 1,
      sym__wrapped_additive_expression,
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(296), 1,
      sym__wrapped_shift_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(335), 1,
      sym__bitwise_and_expression,
    STATE(336), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(337), 1,
      sym__equality_expression,
    STATE(340), 1,
      sym__shift_expression,
    STATE(341), 1,
      sym__wrapped_equality_expression,
    STATE(342), 1,
      sym__relational_expression,
    STATE(458), 1,
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
    STATE(244), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5071] = 33,
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
      sym__multiplicative_expression,
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(296), 1,
      sym__wrapped_shift_expression,
    STATE(297), 1,
      sym__additive_expression,
    STATE(298), 1,
      sym__wrapped_additive_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(335), 1,
      sym__bitwise_and_expression,
    STATE(336), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(337), 1,
      sym__equality_expression,
    STATE(340), 1,
      sym__shift_expression,
    STATE(341), 1,
      sym__wrapped_equality_expression,
    STATE(342), 1,
      sym__relational_expression,
    STATE(458), 1,
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
  [5187] = 34,
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
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(296), 1,
      sym__wrapped_shift_expression,
    STATE(297), 1,
      sym__additive_expression,
    STATE(298), 1,
      sym__wrapped_additive_expression,
    STATE(299), 1,
      sym__multiplicative_expression,
    STATE(300), 1,
      sym__wrapped_multiplicative_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(335), 1,
      sym__bitwise_and_expression,
    STATE(336), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(337), 1,
      sym__equality_expression,
    STATE(340), 1,
      sym__shift_expression,
    STATE(341), 1,
      sym__wrapped_equality_expression,
    STATE(342), 1,
      sym__relational_expression,
    STATE(458), 1,
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
    STATE(257), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5305] = 33,
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
    STATE(150), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(164), 1,
      sym__logical_or_expression,
    STATE(166), 1,
      sym__logical_and_expression,
    STATE(167), 1,
      sym__wrapped_logical_and_expression,
    STATE(168), 1,
      sym__bitwise_or_expression,
    STATE(169), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(170), 1,
      sym__bitwise_xor_expression,
    STATE(171), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(172), 1,
      sym__bitwise_and_expression,
    STATE(173), 1,
      sym__equality_expression,
    STATE(174), 1,
      sym__wrapped_equality_expression,
    STATE(175), 1,
      sym__relational_expression,
    STATE(176), 1,
      sym__wrapped_relational_expression,
    STATE(177), 1,
      sym__shift_expression,
    STATE(178), 1,
      sym__wrapped_shift_expression,
    STATE(179), 1,
      sym__additive_expression,
    STATE(180), 1,
      sym__wrapped_additive_expression,
    STATE(181), 1,
      sym__multiplicative_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(347), 1,
      sym__wrapped_logical_or_expression,
    STATE(457), 1,
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
    STATE(182), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5421] = 33,
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
      sym__bitwise_and_expression,
    STATE(109), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(110), 1,
      sym__equality_expression,
    STATE(111), 1,
      sym__wrapped_equality_expression,
    STATE(112), 1,
      sym__relational_expression,
    STATE(113), 1,
      sym__wrapped_relational_expression,
    STATE(114), 1,
      sym__shift_expression,
    STATE(115), 1,
      sym__wrapped_shift_expression,
    STATE(116), 1,
      sym__additive_expression,
    STATE(117), 1,
      sym__wrapped_additive_expression,
    STATE(118), 1,
      sym__multiplicative_expression,
    STATE(121), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(122), 1,
      sym__bitwise_xor_expression,
    STATE(123), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(127), 1,
      sym__bitwise_or_expression,
    STATE(130), 1,
      sym__logical_or_expression,
    STATE(132), 1,
      sym__logical_and_expression,
    STATE(138), 1,
      sym__wrapped_logical_and_expression,
    STATE(293), 1,
      sym__wrapped_logical_or_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(459), 1,
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
    STATE(119), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5537] = 33,
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
      sym__bitwise_and_expression,
    STATE(109), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(110), 1,
      sym__equality_expression,
    STATE(111), 1,
      sym__wrapped_equality_expression,
    STATE(112), 1,
      sym__relational_expression,
    STATE(113), 1,
      sym__wrapped_relational_expression,
    STATE(114), 1,
      sym__shift_expression,
    STATE(115), 1,
      sym__wrapped_shift_expression,
    STATE(116), 1,
      sym__additive_expression,
    STATE(117), 1,
      sym__wrapped_additive_expression,
    STATE(118), 1,
      sym__multiplicative_expression,
    STATE(121), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(122), 1,
      sym__bitwise_xor_expression,
    STATE(123), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(127), 1,
      sym__bitwise_or_expression,
    STATE(132), 1,
      sym__logical_and_expression,
    STATE(136), 1,
      sym__wrapped_logical_and_expression,
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(459), 1,
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
    STATE(119), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5653] = 33,
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
      sym__bitwise_and_expression,
    STATE(109), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(110), 1,
      sym__equality_expression,
    STATE(111), 1,
      sym__wrapped_equality_expression,
    STATE(112), 1,
      sym__relational_expression,
    STATE(113), 1,
      sym__wrapped_relational_expression,
    STATE(114), 1,
      sym__shift_expression,
    STATE(115), 1,
      sym__wrapped_shift_expression,
    STATE(116), 1,
      sym__additive_expression,
    STATE(117), 1,
      sym__wrapped_additive_expression,
    STATE(118), 1,
      sym__multiplicative_expression,
    STATE(122), 1,
      sym__bitwise_xor_expression,
    STATE(123), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(127), 1,
      sym__bitwise_or_expression,
    STATE(137), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(459), 1,
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
    STATE(119), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5769] = 33,
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
    STATE(107), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(108), 1,
      sym__bitwise_and_expression,
    STATE(109), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(110), 1,
      sym__equality_expression,
    STATE(111), 1,
      sym__wrapped_equality_expression,
    STATE(112), 1,
      sym__relational_expression,
    STATE(113), 1,
      sym__wrapped_relational_expression,
    STATE(114), 1,
      sym__shift_expression,
    STATE(115), 1,
      sym__wrapped_shift_expression,
    STATE(116), 1,
      sym__additive_expression,
    STATE(117), 1,
      sym__wrapped_additive_expression,
    STATE(118), 1,
      sym__multiplicative_expression,
    STATE(122), 1,
      sym__bitwise_xor_expression,
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(459), 1,
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
    STATE(119), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5885] = 33,
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
      sym__bitwise_and_expression,
    STATE(110), 1,
      sym__equality_expression,
    STATE(111), 1,
      sym__wrapped_equality_expression,
    STATE(112), 1,
      sym__relational_expression,
    STATE(113), 1,
      sym__wrapped_relational_expression,
    STATE(114), 1,
      sym__shift_expression,
    STATE(115), 1,
      sym__wrapped_shift_expression,
    STATE(116), 1,
      sym__additive_expression,
    STATE(117), 1,
      sym__wrapped_additive_expression,
    STATE(118), 1,
      sym__multiplicative_expression,
    STATE(139), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(459), 1,
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
    STATE(119), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6001] = 33,
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
    STATE(110), 1,
      sym__equality_expression,
    STATE(112), 1,
      sym__relational_expression,
    STATE(113), 1,
      sym__wrapped_relational_expression,
    STATE(114), 1,
      sym__shift_expression,
    STATE(115), 1,
      sym__wrapped_shift_expression,
    STATE(116), 1,
      sym__additive_expression,
    STATE(117), 1,
      sym__wrapped_additive_expression,
    STATE(118), 1,
      sym__multiplicative_expression,
    STATE(140), 1,
      sym__wrapped_equality_expression,
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(335), 1,
      sym__bitwise_and_expression,
    STATE(336), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(459), 1,
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
    STATE(119), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6117] = 33,
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
    STATE(112), 1,
      sym__relational_expression,
    STATE(114), 1,
      sym__shift_expression,
    STATE(115), 1,
      sym__wrapped_shift_expression,
    STATE(116), 1,
      sym__additive_expression,
    STATE(117), 1,
      sym__wrapped_additive_expression,
    STATE(118), 1,
      sym__multiplicative_expression,
    STATE(141), 1,
      sym__wrapped_relational_expression,
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(335), 1,
      sym__bitwise_and_expression,
    STATE(336), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(337), 1,
      sym__equality_expression,
    STATE(341), 1,
      sym__wrapped_equality_expression,
    STATE(459), 1,
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
    STATE(119), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6233] = 33,
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
    STATE(114), 1,
      sym__shift_expression,
    STATE(116), 1,
      sym__additive_expression,
    STATE(117), 1,
      sym__wrapped_additive_expression,
    STATE(118), 1,
      sym__multiplicative_expression,
    STATE(142), 1,
      sym__wrapped_shift_expression,
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(335), 1,
      sym__bitwise_and_expression,
    STATE(336), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(337), 1,
      sym__equality_expression,
    STATE(341), 1,
      sym__wrapped_equality_expression,
    STATE(342), 1,
      sym__relational_expression,
    STATE(459), 1,
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
    STATE(119), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6349] = 33,
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
    STATE(116), 1,
      sym__additive_expression,
    STATE(118), 1,
      sym__multiplicative_expression,
    STATE(143), 1,
      sym__wrapped_additive_expression,
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(296), 1,
      sym__wrapped_shift_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(335), 1,
      sym__bitwise_and_expression,
    STATE(336), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(337), 1,
      sym__equality_expression,
    STATE(340), 1,
      sym__shift_expression,
    STATE(341), 1,
      sym__wrapped_equality_expression,
    STATE(342), 1,
      sym__relational_expression,
    STATE(459), 1,
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
    STATE(119), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6465] = 33,
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
    STATE(118), 1,
      sym__multiplicative_expression,
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(296), 1,
      sym__wrapped_shift_expression,
    STATE(297), 1,
      sym__additive_expression,
    STATE(298), 1,
      sym__wrapped_additive_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(335), 1,
      sym__bitwise_and_expression,
    STATE(336), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(337), 1,
      sym__equality_expression,
    STATE(340), 1,
      sym__shift_expression,
    STATE(341), 1,
      sym__wrapped_equality_expression,
    STATE(342), 1,
      sym__relational_expression,
    STATE(459), 1,
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
  [6581] = 34,
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
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(296), 1,
      sym__wrapped_shift_expression,
    STATE(297), 1,
      sym__additive_expression,
    STATE(298), 1,
      sym__wrapped_additive_expression,
    STATE(299), 1,
      sym__multiplicative_expression,
    STATE(300), 1,
      sym__wrapped_multiplicative_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(335), 1,
      sym__bitwise_and_expression,
    STATE(336), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(337), 1,
      sym__equality_expression,
    STATE(340), 1,
      sym__shift_expression,
    STATE(341), 1,
      sym__wrapped_equality_expression,
    STATE(342), 1,
      sym__relational_expression,
    STATE(459), 1,
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
  [6699] = 33,
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
      sym__wrapped_shift_expression,
    STATE(297), 1,
      sym__additive_expression,
    STATE(298), 1,
      sym__wrapped_additive_expression,
    STATE(299), 1,
      sym__multiplicative_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(335), 1,
      sym__bitwise_and_expression,
    STATE(336), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(337), 1,
      sym__equality_expression,
    STATE(340), 1,
      sym__shift_expression,
    STATE(341), 1,
      sym__wrapped_equality_expression,
    STATE(342), 1,
      sym__relational_expression,
    STATE(431), 1,
      sym__wrapped_logical_or_expression,
    STATE(461), 1,
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
    STATE(300), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6815] = 33,
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
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(296), 1,
      sym__wrapped_shift_expression,
    STATE(297), 1,
      sym__additive_expression,
    STATE(298), 1,
      sym__wrapped_additive_expression,
    STATE(299), 1,
      sym__multiplicative_expression,
    STATE(306), 1,
      sym__wrapped_logical_and_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(335), 1,
      sym__bitwise_and_expression,
    STATE(336), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(337), 1,
      sym__equality_expression,
    STATE(340), 1,
      sym__shift_expression,
    STATE(341), 1,
      sym__wrapped_equality_expression,
    STATE(342), 1,
      sym__relational_expression,
    STATE(461), 1,
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
    STATE(300), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6931] = 33,
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
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(296), 1,
      sym__wrapped_shift_expression,
    STATE(297), 1,
      sym__additive_expression,
    STATE(298), 1,
      sym__wrapped_additive_expression,
    STATE(299), 1,
      sym__multiplicative_expression,
    STATE(307), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(335), 1,
      sym__bitwise_and_expression,
    STATE(336), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(337), 1,
      sym__equality_expression,
    STATE(340), 1,
      sym__shift_expression,
    STATE(341), 1,
      sym__wrapped_equality_expression,
    STATE(342), 1,
      sym__relational_expression,
    STATE(461), 1,
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
    STATE(300), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7047] = 33,
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
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(296), 1,
      sym__wrapped_shift_expression,
    STATE(297), 1,
      sym__additive_expression,
    STATE(298), 1,
      sym__wrapped_additive_expression,
    STATE(299), 1,
      sym__multiplicative_expression,
    STATE(308), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(335), 1,
      sym__bitwise_and_expression,
    STATE(336), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(337), 1,
      sym__equality_expression,
    STATE(340), 1,
      sym__shift_expression,
    STATE(341), 1,
      sym__wrapped_equality_expression,
    STATE(342), 1,
      sym__relational_expression,
    STATE(461), 1,
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
    STATE(300), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7163] = 33,
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
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(296), 1,
      sym__wrapped_shift_expression,
    STATE(297), 1,
      sym__additive_expression,
    STATE(298), 1,
      sym__wrapped_additive_expression,
    STATE(299), 1,
      sym__multiplicative_expression,
    STATE(309), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(335), 1,
      sym__bitwise_and_expression,
    STATE(337), 1,
      sym__equality_expression,
    STATE(340), 1,
      sym__shift_expression,
    STATE(341), 1,
      sym__wrapped_equality_expression,
    STATE(342), 1,
      sym__relational_expression,
    STATE(461), 1,
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
    STATE(300), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7279] = 33,
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
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(296), 1,
      sym__wrapped_shift_expression,
    STATE(297), 1,
      sym__additive_expression,
    STATE(298), 1,
      sym__wrapped_additive_expression,
    STATE(299), 1,
      sym__multiplicative_expression,
    STATE(310), 1,
      sym__wrapped_equality_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(335), 1,
      sym__bitwise_and_expression,
    STATE(336), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(337), 1,
      sym__equality_expression,
    STATE(340), 1,
      sym__shift_expression,
    STATE(342), 1,
      sym__relational_expression,
    STATE(461), 1,
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
    STATE(300), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7395] = 33,
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
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(296), 1,
      sym__wrapped_shift_expression,
    STATE(297), 1,
      sym__additive_expression,
    STATE(298), 1,
      sym__wrapped_additive_expression,
    STATE(299), 1,
      sym__multiplicative_expression,
    STATE(311), 1,
      sym__wrapped_relational_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(335), 1,
      sym__bitwise_and_expression,
    STATE(336), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(337), 1,
      sym__equality_expression,
    STATE(340), 1,
      sym__shift_expression,
    STATE(341), 1,
      sym__wrapped_equality_expression,
    STATE(342), 1,
      sym__relational_expression,
    STATE(461), 1,
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
    STATE(300), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7511] = 33,
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
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(297), 1,
      sym__additive_expression,
    STATE(298), 1,
      sym__wrapped_additive_expression,
    STATE(299), 1,
      sym__multiplicative_expression,
    STATE(312), 1,
      sym__wrapped_shift_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(335), 1,
      sym__bitwise_and_expression,
    STATE(336), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(337), 1,
      sym__equality_expression,
    STATE(340), 1,
      sym__shift_expression,
    STATE(341), 1,
      sym__wrapped_equality_expression,
    STATE(342), 1,
      sym__relational_expression,
    STATE(461), 1,
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
    STATE(300), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7627] = 33,
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
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(296), 1,
      sym__wrapped_shift_expression,
    STATE(297), 1,
      sym__additive_expression,
    STATE(299), 1,
      sym__multiplicative_expression,
    STATE(313), 1,
      sym__wrapped_additive_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(335), 1,
      sym__bitwise_and_expression,
    STATE(336), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(337), 1,
      sym__equality_expression,
    STATE(340), 1,
      sym__shift_expression,
    STATE(341), 1,
      sym__wrapped_equality_expression,
    STATE(342), 1,
      sym__relational_expression,
    STATE(461), 1,
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
    STATE(300), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7743] = 33,
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
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(296), 1,
      sym__wrapped_shift_expression,
    STATE(297), 1,
      sym__additive_expression,
    STATE(298), 1,
      sym__wrapped_additive_expression,
    STATE(299), 1,
      sym__multiplicative_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(335), 1,
      sym__bitwise_and_expression,
    STATE(336), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(337), 1,
      sym__equality_expression,
    STATE(340), 1,
      sym__shift_expression,
    STATE(341), 1,
      sym__wrapped_equality_expression,
    STATE(342), 1,
      sym__relational_expression,
    STATE(461), 1,
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
    STATE(314), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7859] = 34,
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
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(296), 1,
      sym__wrapped_shift_expression,
    STATE(297), 1,
      sym__additive_expression,
    STATE(298), 1,
      sym__wrapped_additive_expression,
    STATE(299), 1,
      sym__multiplicative_expression,
    STATE(300), 1,
      sym__wrapped_multiplicative_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(335), 1,
      sym__bitwise_and_expression,
    STATE(336), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(337), 1,
      sym__equality_expression,
    STATE(340), 1,
      sym__shift_expression,
    STATE(341), 1,
      sym__wrapped_equality_expression,
    STATE(342), 1,
      sym__relational_expression,
    STATE(461), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(197), 2,
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
    STATE(315), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7977] = 33,
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
      sym__logical_or_expression,
    STATE(191), 1,
      sym__logical_and_expression,
    STATE(192), 1,
      sym__wrapped_logical_and_expression,
    STATE(193), 1,
      sym__bitwise_or_expression,
    STATE(194), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(195), 1,
      sym__bitwise_xor_expression,
    STATE(196), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(197), 1,
      sym__bitwise_and_expression,
    STATE(198), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(199), 1,
      sym__equality_expression,
    STATE(200), 1,
      sym__wrapped_equality_expression,
    STATE(201), 1,
      sym__relational_expression,
    STATE(202), 1,
      sym__wrapped_relational_expression,
    STATE(203), 1,
      sym__shift_expression,
    STATE(204), 1,
      sym__wrapped_shift_expression,
    STATE(205), 1,
      sym__additive_expression,
    STATE(206), 1,
      sym__wrapped_additive_expression,
    STATE(207), 1,
      sym__multiplicative_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(350), 1,
      sym__wrapped_logical_or_expression,
    STATE(462), 1,
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
    STATE(208), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8093] = 33,
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
      sym__logical_and_expression,
    STATE(193), 1,
      sym__bitwise_or_expression,
    STATE(194), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(195), 1,
      sym__bitwise_xor_expression,
    STATE(196), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(197), 1,
      sym__bitwise_and_expression,
    STATE(198), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(199), 1,
      sym__equality_expression,
    STATE(200), 1,
      sym__wrapped_equality_expression,
    STATE(201), 1,
      sym__relational_expression,
    STATE(202), 1,
      sym__wrapped_relational_expression,
    STATE(203), 1,
      sym__shift_expression,
    STATE(204), 1,
      sym__wrapped_shift_expression,
    STATE(205), 1,
      sym__additive_expression,
    STATE(206), 1,
      sym__wrapped_additive_expression,
    STATE(207), 1,
      sym__multiplicative_expression,
    STATE(213), 1,
      sym__wrapped_logical_and_expression,
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(462), 1,
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
    STATE(208), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8209] = 33,
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
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(296), 1,
      sym__wrapped_shift_expression,
    STATE(297), 1,
      sym__additive_expression,
    STATE(298), 1,
      sym__wrapped_additive_expression,
    STATE(299), 1,
      sym__multiplicative_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(335), 1,
      sym__bitwise_and_expression,
    STATE(336), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(337), 1,
      sym__equality_expression,
    STATE(340), 1,
      sym__shift_expression,
    STATE(341), 1,
      sym__wrapped_equality_expression,
    STATE(342), 1,
      sym__relational_expression,
    STATE(444), 1,
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
    STATE(300), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8325] = 33,
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
      sym__bitwise_xor_expression,
    STATE(197), 1,
      sym__bitwise_and_expression,
    STATE(198), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(199), 1,
      sym__equality_expression,
    STATE(200), 1,
      sym__wrapped_equality_expression,
    STATE(201), 1,
      sym__relational_expression,
    STATE(202), 1,
      sym__wrapped_relational_expression,
    STATE(203), 1,
      sym__shift_expression,
    STATE(204), 1,
      sym__wrapped_shift_expression,
    STATE(205), 1,
      sym__additive_expression,
    STATE(206), 1,
      sym__wrapped_additive_expression,
    STATE(207), 1,
      sym__multiplicative_expression,
    STATE(215), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(462), 1,
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
    STATE(208), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8441] = 33,
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
      sym__bitwise_and_expression,
    STATE(199), 1,
      sym__equality_expression,
    STATE(200), 1,
      sym__wrapped_equality_expression,
    STATE(201), 1,
      sym__relational_expression,
    STATE(202), 1,
      sym__wrapped_relational_expression,
    STATE(203), 1,
      sym__shift_expression,
    STATE(204), 1,
      sym__wrapped_shift_expression,
    STATE(205), 1,
      sym__additive_expression,
    STATE(206), 1,
      sym__wrapped_additive_expression,
    STATE(207), 1,
      sym__multiplicative_expression,
    STATE(216), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(462), 1,
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
    STATE(208), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8557] = 33,
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
      sym__equality_expression,
    STATE(201), 1,
      sym__relational_expression,
    STATE(202), 1,
      sym__wrapped_relational_expression,
    STATE(203), 1,
      sym__shift_expression,
    STATE(204), 1,
      sym__wrapped_shift_expression,
    STATE(205), 1,
      sym__additive_expression,
    STATE(206), 1,
      sym__wrapped_additive_expression,
    STATE(207), 1,
      sym__multiplicative_expression,
    STATE(217), 1,
      sym__wrapped_equality_expression,
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(335), 1,
      sym__bitwise_and_expression,
    STATE(336), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(462), 1,
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
    STATE(208), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8673] = 33,
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
    STATE(201), 1,
      sym__relational_expression,
    STATE(203), 1,
      sym__shift_expression,
    STATE(204), 1,
      sym__wrapped_shift_expression,
    STATE(205), 1,
      sym__additive_expression,
    STATE(206), 1,
      sym__wrapped_additive_expression,
    STATE(207), 1,
      sym__multiplicative_expression,
    STATE(218), 1,
      sym__wrapped_relational_expression,
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(335), 1,
      sym__bitwise_and_expression,
    STATE(336), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(337), 1,
      sym__equality_expression,
    STATE(341), 1,
      sym__wrapped_equality_expression,
    STATE(462), 1,
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
    STATE(208), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8789] = 33,
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
    STATE(203), 1,
      sym__shift_expression,
    STATE(205), 1,
      sym__additive_expression,
    STATE(206), 1,
      sym__wrapped_additive_expression,
    STATE(207), 1,
      sym__multiplicative_expression,
    STATE(219), 1,
      sym__wrapped_shift_expression,
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(335), 1,
      sym__bitwise_and_expression,
    STATE(336), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(337), 1,
      sym__equality_expression,
    STATE(341), 1,
      sym__wrapped_equality_expression,
    STATE(342), 1,
      sym__relational_expression,
    STATE(462), 1,
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
    STATE(208), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8905] = 33,
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
    STATE(205), 1,
      sym__additive_expression,
    STATE(207), 1,
      sym__multiplicative_expression,
    STATE(220), 1,
      sym__wrapped_additive_expression,
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(296), 1,
      sym__wrapped_shift_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(335), 1,
      sym__bitwise_and_expression,
    STATE(336), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(337), 1,
      sym__equality_expression,
    STATE(340), 1,
      sym__shift_expression,
    STATE(341), 1,
      sym__wrapped_equality_expression,
    STATE(342), 1,
      sym__relational_expression,
    STATE(462), 1,
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
    STATE(208), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9021] = 33,
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
    STATE(207), 1,
      sym__multiplicative_expression,
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(296), 1,
      sym__wrapped_shift_expression,
    STATE(297), 1,
      sym__additive_expression,
    STATE(298), 1,
      sym__wrapped_additive_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(335), 1,
      sym__bitwise_and_expression,
    STATE(336), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(337), 1,
      sym__equality_expression,
    STATE(340), 1,
      sym__shift_expression,
    STATE(341), 1,
      sym__wrapped_equality_expression,
    STATE(342), 1,
      sym__relational_expression,
    STATE(462), 1,
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
  [9137] = 34,
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
      sym__wrapped_logical_or_expression,
    STATE(296), 1,
      sym__wrapped_shift_expression,
    STATE(297), 1,
      sym__additive_expression,
    STATE(298), 1,
      sym__wrapped_additive_expression,
    STATE(299), 1,
      sym__multiplicative_expression,
    STATE(300), 1,
      sym__wrapped_multiplicative_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(335), 1,
      sym__bitwise_and_expression,
    STATE(336), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(337), 1,
      sym__equality_expression,
    STATE(340), 1,
      sym__shift_expression,
    STATE(341), 1,
      sym__wrapped_equality_expression,
    STATE(342), 1,
      sym__relational_expression,
    STATE(462), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(35), 2,
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
  [9255] = 33,
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
    STATE(239), 1,
      sym__shift_expression,
    STATE(240), 1,
      sym__wrapped_shift_expression,
    STATE(241), 1,
      sym__additive_expression,
    STATE(242), 1,
      sym__wrapped_additive_expression,
    STATE(243), 1,
      sym__multiplicative_expression,
    STATE(245), 1,
      sym__wrapped_assignment_expression,
    STATE(264), 1,
      sym__assignment_expression,
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
      sym__wrapped_bitwise_or_expression,
    STATE(271), 1,
      sym__bitwise_xor_expression,
    STATE(272), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(273), 1,
      sym__bitwise_and_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(275), 1,
      sym__equality_expression,
    STATE(276), 1,
      sym__wrapped_equality_expression,
    STATE(277), 1,
      sym__relational_expression,
    STATE(279), 1,
      sym__wrapped_relational_expression,
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
    STATE(244), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9371] = 33,
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
    STATE(150), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(164), 1,
      sym__logical_or_expression,
    STATE(166), 1,
      sym__logical_and_expression,
    STATE(167), 1,
      sym__wrapped_logical_and_expression,
    STATE(168), 1,
      sym__bitwise_or_expression,
    STATE(169), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(170), 1,
      sym__bitwise_xor_expression,
    STATE(171), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(172), 1,
      sym__bitwise_and_expression,
    STATE(173), 1,
      sym__equality_expression,
    STATE(174), 1,
      sym__wrapped_equality_expression,
    STATE(175), 1,
      sym__relational_expression,
    STATE(176), 1,
      sym__wrapped_relational_expression,
    STATE(177), 1,
      sym__shift_expression,
    STATE(178), 1,
      sym__wrapped_shift_expression,
    STATE(179), 1,
      sym__additive_expression,
    STATE(180), 1,
      sym__wrapped_additive_expression,
    STATE(181), 1,
      sym__multiplicative_expression,
    STATE(227), 1,
      sym__wrapped_logical_or_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(457), 1,
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
    STATE(182), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9487] = 33,
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
    STATE(239), 1,
      sym__shift_expression,
    STATE(240), 1,
      sym__wrapped_shift_expression,
    STATE(241), 1,
      sym__additive_expression,
    STATE(242), 1,
      sym__wrapped_additive_expression,
    STATE(243), 1,
      sym__multiplicative_expression,
    STATE(265), 1,
      sym__logical_or_expression,
    STATE(267), 1,
      sym__logical_and_expression,
    STATE(268), 1,
      sym__wrapped_logical_and_expression,
    STATE(269), 1,
      sym__bitwise_or_expression,
    STATE(270), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(271), 1,
      sym__bitwise_xor_expression,
    STATE(272), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(273), 1,
      sym__bitwise_and_expression,
    STATE(274), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(275), 1,
      sym__equality_expression,
    STATE(276), 1,
      sym__wrapped_equality_expression,
    STATE(277), 1,
      sym__relational_expression,
    STATE(278), 1,
      sym__wrapped_logical_or_expression,
    STATE(279), 1,
      sym__wrapped_relational_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(458), 1,
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
    STATE(244), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9603] = 33,
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
      sym__bitwise_and_expression,
    STATE(109), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(110), 1,
      sym__equality_expression,
    STATE(111), 1,
      sym__wrapped_equality_expression,
    STATE(112), 1,
      sym__relational_expression,
    STATE(113), 1,
      sym__wrapped_relational_expression,
    STATE(114), 1,
      sym__shift_expression,
    STATE(115), 1,
      sym__wrapped_shift_expression,
    STATE(116), 1,
      sym__additive_expression,
    STATE(117), 1,
      sym__wrapped_additive_expression,
    STATE(118), 1,
      sym__multiplicative_expression,
    STATE(121), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(122), 1,
      sym__bitwise_xor_expression,
    STATE(123), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(125), 1,
      sym__wrapped_logical_or_expression,
    STATE(127), 1,
      sym__bitwise_or_expression,
    STATE(130), 1,
      sym__logical_or_expression,
    STATE(132), 1,
      sym__logical_and_expression,
    STATE(138), 1,
      sym__wrapped_logical_and_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(459), 1,
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
    STATE(119), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9719] = 33,
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
      sym__wrapped_shift_expression,
    STATE(297), 1,
      sym__additive_expression,
    STATE(298), 1,
      sym__wrapped_additive_expression,
    STATE(299), 1,
      sym__multiplicative_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(326), 1,
      sym__wrapped_logical_or_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(335), 1,
      sym__bitwise_and_expression,
    STATE(336), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(337), 1,
      sym__equality_expression,
    STATE(340), 1,
      sym__shift_expression,
    STATE(341), 1,
      sym__wrapped_equality_expression,
    STATE(342), 1,
      sym__relational_expression,
    STATE(461), 1,
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
    STATE(300), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9835] = 33,
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
      sym__logical_or_expression,
    STATE(191), 1,
      sym__logical_and_expression,
    STATE(192), 1,
      sym__wrapped_logical_and_expression,
    STATE(193), 1,
      sym__bitwise_or_expression,
    STATE(194), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(195), 1,
      sym__bitwise_xor_expression,
    STATE(196), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(197), 1,
      sym__bitwise_and_expression,
    STATE(198), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(199), 1,
      sym__equality_expression,
    STATE(200), 1,
      sym__wrapped_equality_expression,
    STATE(201), 1,
      sym__relational_expression,
    STATE(202), 1,
      sym__wrapped_relational_expression,
    STATE(203), 1,
      sym__shift_expression,
    STATE(204), 1,
      sym__wrapped_shift_expression,
    STATE(205), 1,
      sym__additive_expression,
    STATE(206), 1,
      sym__wrapped_additive_expression,
    STATE(207), 1,
      sym__multiplicative_expression,
    STATE(228), 1,
      sym__wrapped_logical_or_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(462), 1,
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
    STATE(208), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9951] = 33,
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
      sym__bitwise_and_expression,
    STATE(109), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(110), 1,
      sym__equality_expression,
    STATE(111), 1,
      sym__wrapped_equality_expression,
    STATE(112), 1,
      sym__relational_expression,
    STATE(113), 1,
      sym__wrapped_relational_expression,
    STATE(114), 1,
      sym__shift_expression,
    STATE(115), 1,
      sym__wrapped_shift_expression,
    STATE(116), 1,
      sym__additive_expression,
    STATE(117), 1,
      sym__wrapped_additive_expression,
    STATE(118), 1,
      sym__multiplicative_expression,
    STATE(120), 1,
      sym__wrapped_assignment_expression,
    STATE(121), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(122), 1,
      sym__bitwise_xor_expression,
    STATE(123), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(127), 1,
      sym__bitwise_or_expression,
    STATE(129), 1,
      sym__assignment_expression,
    STATE(130), 1,
      sym__logical_or_expression,
    STATE(131), 1,
      sym__wrapped_logical_or_expression,
    STATE(132), 1,
      sym__logical_and_expression,
    STATE(138), 1,
      sym__wrapped_logical_and_expression,
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
    STATE(119), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10067] = 33,
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
    STATE(150), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(166), 1,
      sym__logical_and_expression,
    STATE(168), 1,
      sym__bitwise_or_expression,
    STATE(169), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(170), 1,
      sym__bitwise_xor_expression,
    STATE(171), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(172), 1,
      sym__bitwise_and_expression,
    STATE(173), 1,
      sym__equality_expression,
    STATE(174), 1,
      sym__wrapped_equality_expression,
    STATE(175), 1,
      sym__relational_expression,
    STATE(176), 1,
      sym__wrapped_relational_expression,
    STATE(177), 1,
      sym__shift_expression,
    STATE(178), 1,
      sym__wrapped_shift_expression,
    STATE(179), 1,
      sym__additive_expression,
    STATE(180), 1,
      sym__wrapped_additive_expression,
    STATE(181), 1,
      sym__multiplicative_expression,
    STATE(234), 1,
      sym__wrapped_logical_and_expression,
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(457), 1,
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
    STATE(182), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10183] = 33,
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
    STATE(188), 1,
      sym__assignment_expression,
    STATE(189), 1,
      sym__logical_or_expression,
    STATE(190), 1,
      sym__wrapped_logical_or_expression,
    STATE(191), 1,
      sym__logical_and_expression,
    STATE(192), 1,
      sym__wrapped_logical_and_expression,
    STATE(193), 1,
      sym__bitwise_or_expression,
    STATE(194), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(195), 1,
      sym__bitwise_xor_expression,
    STATE(196), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(197), 1,
      sym__bitwise_and_expression,
    STATE(198), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(199), 1,
      sym__equality_expression,
    STATE(200), 1,
      sym__wrapped_equality_expression,
    STATE(201), 1,
      sym__relational_expression,
    STATE(202), 1,
      sym__wrapped_relational_expression,
    STATE(203), 1,
      sym__shift_expression,
    STATE(204), 1,
      sym__wrapped_shift_expression,
    STATE(205), 1,
      sym__additive_expression,
    STATE(206), 1,
      sym__wrapped_additive_expression,
    STATE(207), 1,
      sym__multiplicative_expression,
    STATE(209), 1,
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
    STATE(208), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10299] = 33,
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
    STATE(150), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(168), 1,
      sym__bitwise_or_expression,
    STATE(170), 1,
      sym__bitwise_xor_expression,
    STATE(171), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(172), 1,
      sym__bitwise_and_expression,
    STATE(173), 1,
      sym__equality_expression,
    STATE(174), 1,
      sym__wrapped_equality_expression,
    STATE(175), 1,
      sym__relational_expression,
    STATE(176), 1,
      sym__wrapped_relational_expression,
    STATE(177), 1,
      sym__shift_expression,
    STATE(178), 1,
      sym__wrapped_shift_expression,
    STATE(179), 1,
      sym__additive_expression,
    STATE(180), 1,
      sym__wrapped_additive_expression,
    STATE(181), 1,
      sym__multiplicative_expression,
    STATE(235), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(457), 1,
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
    STATE(182), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10415] = 33,
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
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(296), 1,
      sym__wrapped_shift_expression,
    STATE(297), 1,
      sym__additive_expression,
    STATE(298), 1,
      sym__wrapped_additive_expression,
    STATE(299), 1,
      sym__multiplicative_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(335), 1,
      sym__bitwise_and_expression,
    STATE(336), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(337), 1,
      sym__equality_expression,
    STATE(340), 1,
      sym__shift_expression,
    STATE(341), 1,
      sym__wrapped_equality_expression,
    STATE(342), 1,
      sym__relational_expression,
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
    STATE(300), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10531] = 33,
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
    STATE(150), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(170), 1,
      sym__bitwise_xor_expression,
    STATE(172), 1,
      sym__bitwise_and_expression,
    STATE(173), 1,
      sym__equality_expression,
    STATE(174), 1,
      sym__wrapped_equality_expression,
    STATE(175), 1,
      sym__relational_expression,
    STATE(176), 1,
      sym__wrapped_relational_expression,
    STATE(177), 1,
      sym__shift_expression,
    STATE(178), 1,
      sym__wrapped_shift_expression,
    STATE(179), 1,
      sym__additive_expression,
    STATE(180), 1,
      sym__wrapped_additive_expression,
    STATE(181), 1,
      sym__multiplicative_expression,
    STATE(233), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(457), 1,
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
    STATE(182), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10647] = 33,
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
    STATE(172), 1,
      sym__bitwise_and_expression,
    STATE(173), 1,
      sym__equality_expression,
    STATE(174), 1,
      sym__wrapped_equality_expression,
    STATE(175), 1,
      sym__relational_expression,
    STATE(176), 1,
      sym__wrapped_relational_expression,
    STATE(177), 1,
      sym__shift_expression,
    STATE(178), 1,
      sym__wrapped_shift_expression,
    STATE(179), 1,
      sym__additive_expression,
    STATE(180), 1,
      sym__wrapped_additive_expression,
    STATE(181), 1,
      sym__multiplicative_expression,
    STATE(236), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(457), 1,
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
    STATE(182), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10763] = 33,
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
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(296), 1,
      sym__wrapped_shift_expression,
    STATE(297), 1,
      sym__additive_expression,
    STATE(298), 1,
      sym__wrapped_additive_expression,
    STATE(299), 1,
      sym__multiplicative_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(335), 1,
      sym__bitwise_and_expression,
    STATE(336), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(337), 1,
      sym__equality_expression,
    STATE(340), 1,
      sym__shift_expression,
    STATE(341), 1,
      sym__wrapped_equality_expression,
    STATE(342), 1,
      sym__relational_expression,
    STATE(435), 1,
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
    STATE(300), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10879] = 33,
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
    STATE(151), 1,
      sym__wrapped_equality_expression,
    STATE(173), 1,
      sym__equality_expression,
    STATE(175), 1,
      sym__relational_expression,
    STATE(176), 1,
      sym__wrapped_relational_expression,
    STATE(177), 1,
      sym__shift_expression,
    STATE(178), 1,
      sym__wrapped_shift_expression,
    STATE(179), 1,
      sym__additive_expression,
    STATE(180), 1,
      sym__wrapped_additive_expression,
    STATE(181), 1,
      sym__multiplicative_expression,
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(335), 1,
      sym__bitwise_and_expression,
    STATE(336), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(457), 1,
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
    STATE(182), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10995] = 33,
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
      sym__wrapped_relational_expression,
    STATE(175), 1,
      sym__relational_expression,
    STATE(177), 1,
      sym__shift_expression,
    STATE(178), 1,
      sym__wrapped_shift_expression,
    STATE(179), 1,
      sym__additive_expression,
    STATE(180), 1,
      sym__wrapped_additive_expression,
    STATE(181), 1,
      sym__multiplicative_expression,
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(335), 1,
      sym__bitwise_and_expression,
    STATE(336), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(337), 1,
      sym__equality_expression,
    STATE(341), 1,
      sym__wrapped_equality_expression,
    STATE(457), 1,
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
    STATE(182), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11111] = 33,
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
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(296), 1,
      sym__wrapped_shift_expression,
    STATE(297), 1,
      sym__additive_expression,
    STATE(298), 1,
      sym__wrapped_additive_expression,
    STATE(299), 1,
      sym__multiplicative_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(335), 1,
      sym__bitwise_and_expression,
    STATE(336), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(337), 1,
      sym__equality_expression,
    STATE(340), 1,
      sym__shift_expression,
    STATE(341), 1,
      sym__wrapped_equality_expression,
    STATE(342), 1,
      sym__relational_expression,
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
    STATE(300), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11227] = 33,
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
    STATE(153), 1,
      sym__wrapped_shift_expression,
    STATE(177), 1,
      sym__shift_expression,
    STATE(179), 1,
      sym__additive_expression,
    STATE(180), 1,
      sym__wrapped_additive_expression,
    STATE(181), 1,
      sym__multiplicative_expression,
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(335), 1,
      sym__bitwise_and_expression,
    STATE(336), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(337), 1,
      sym__equality_expression,
    STATE(341), 1,
      sym__wrapped_equality_expression,
    STATE(342), 1,
      sym__relational_expression,
    STATE(457), 1,
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
    STATE(182), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11343] = 33,
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
    STATE(154), 1,
      sym__wrapped_additive_expression,
    STATE(179), 1,
      sym__additive_expression,
    STATE(181), 1,
      sym__multiplicative_expression,
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(296), 1,
      sym__wrapped_shift_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(335), 1,
      sym__bitwise_and_expression,
    STATE(336), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(337), 1,
      sym__equality_expression,
    STATE(340), 1,
      sym__shift_expression,
    STATE(341), 1,
      sym__wrapped_equality_expression,
    STATE(342), 1,
      sym__relational_expression,
    STATE(457), 1,
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
    STATE(182), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11459] = 33,
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
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(296), 1,
      sym__wrapped_shift_expression,
    STATE(297), 1,
      sym__additive_expression,
    STATE(298), 1,
      sym__wrapped_additive_expression,
    STATE(299), 1,
      sym__multiplicative_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(335), 1,
      sym__bitwise_and_expression,
    STATE(336), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(337), 1,
      sym__equality_expression,
    STATE(340), 1,
      sym__shift_expression,
    STATE(341), 1,
      sym__wrapped_equality_expression,
    STATE(342), 1,
      sym__relational_expression,
    STATE(443), 1,
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
    STATE(300), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11575] = 33,
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
    STATE(181), 1,
      sym__multiplicative_expression,
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(296), 1,
      sym__wrapped_shift_expression,
    STATE(297), 1,
      sym__additive_expression,
    STATE(298), 1,
      sym__wrapped_additive_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(335), 1,
      sym__bitwise_and_expression,
    STATE(336), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(337), 1,
      sym__equality_expression,
    STATE(340), 1,
      sym__shift_expression,
    STATE(341), 1,
      sym__wrapped_equality_expression,
    STATE(342), 1,
      sym__relational_expression,
    STATE(457), 1,
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
    STATE(155), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11691] = 34,
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
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(296), 1,
      sym__wrapped_shift_expression,
    STATE(297), 1,
      sym__additive_expression,
    STATE(298), 1,
      sym__wrapped_additive_expression,
    STATE(299), 1,
      sym__multiplicative_expression,
    STATE(300), 1,
      sym__wrapped_multiplicative_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(319), 1,
      sym__wrapped_relational_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(327), 1,
      sym__bitwise_or_expression,
    STATE(328), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(329), 1,
      sym__bitwise_xor_expression,
    STATE(330), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(335), 1,
      sym__bitwise_and_expression,
    STATE(336), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(337), 1,
      sym__equality_expression,
    STATE(340), 1,
      sym__shift_expression,
    STATE(341), 1,
      sym__wrapped_equality_expression,
    STATE(342), 1,
      sym__relational_expression,
    STATE(457), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(185), 2,
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
    STATE(156), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11809] = 33,
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
      sym__bitwise_and_expression,
    STATE(109), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(110), 1,
      sym__equality_expression,
    STATE(111), 1,
      sym__wrapped_equality_expression,
    STATE(112), 1,
      sym__relational_expression,
    STATE(113), 1,
      sym__wrapped_relational_expression,
    STATE(114), 1,
      sym__shift_expression,
    STATE(115), 1,
      sym__wrapped_shift_expression,
    STATE(116), 1,
      sym__additive_expression,
    STATE(117), 1,
      sym__wrapped_additive_expression,
    STATE(118), 1,
      sym__multiplicative_expression,
    STATE(121), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(122), 1,
      sym__bitwise_xor_expression,
    STATE(123), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(127), 1,
      sym__bitwise_or_expression,
    STATE(129), 1,
      sym__assignment_expression,
    STATE(130), 1,
      sym__logical_or_expression,
    STATE(131), 1,
      sym__wrapped_logical_or_expression,
    STATE(132), 1,
      sym__logical_and_expression,
    STATE(138), 1,
      sym__wrapped_logical_and_expression,
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
    STATE(119), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11925] = 33,
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
      sym__bitwise_or_expression,
    STATE(195), 1,
      sym__bitwise_xor_expression,
    STATE(196), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(197), 1,
      sym__bitwise_and_expression,
    STATE(198), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(199), 1,
      sym__equality_expression,
    STATE(200), 1,
      sym__wrapped_equality_expression,
    STATE(201), 1,
      sym__relational_expression,
    STATE(202), 1,
      sym__wrapped_relational_expression,
    STATE(203), 1,
      sym__shift_expression,
    STATE(204), 1,
      sym__wrapped_shift_expression,
    STATE(205), 1,
      sym__additive_expression,
    STATE(206), 1,
      sym__wrapped_additive_expression,
    STATE(207), 1,
      sym__multiplicative_expression,
    STATE(214), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(295), 1,
      sym__wrapped_logical_or_expression,
    STATE(316), 1,
      sym__logical_or_expression,
    STATE(321), 1,
      sym__logical_and_expression,
    STATE(325), 1,
      sym__wrapped_logical_and_expression,
    STATE(334), 1,
      sym__assignment_expression,
    STATE(462), 1,
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
    STATE(208), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12041] = 4,
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
  [12095] = 4,
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
  [12149] = 4,
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
  [12203] = 4,
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
  [12257] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(287), 1,
      sym_bitwise_xor_operator,
    ACTIONS(283), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(285), 18,
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
  [12293] = 4,
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
  [12327] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(297), 1,
      sym_bitwise_and_operator,
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
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [12363] = 4,
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
  [12397] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(307), 1,
      sym_equality_operator,
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
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [12433] = 4,
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
  [12467] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(317), 1,
      sym_relational_operator,
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
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [12503] = 4,
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
  [12537] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(327), 1,
      sym_shift_operator,
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
      sym_relational_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [12573] = 4,
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
  [12607] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(337), 1,
      sym_additive_operator,
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
      sym_shift_operator,
      sym_multiplicative_operator,
  [12643] = 4,
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
  [12677] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(347), 1,
      sym_multiplicative_operator,
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
      sym_additive_operator,
  [12713] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(355), 1,
      sym_assignment_operator,
    ACTIONS(349), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(351), 17,
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
  [12751] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(361), 1,
      sym_bitwise_or_operator,
    ACTIONS(357), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(359), 18,
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
  [12787] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(363), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(365), 19,
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
  [12821] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(287), 1,
      sym_bitwise_xor_operator,
    ACTIONS(367), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(369), 18,
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
  [12857] = 4,
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
  [12891] = 4,
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
  [12925] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
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
  [12959] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(383), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(385), 19,
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
  [12993] = 4,
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
  [13027] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(391), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(393), 19,
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
  [13061] = 4,
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
  [13095] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(403), 1,
      sym_logical_or_operator,
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
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [13131] = 4,
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
  [13165] = 4,
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
  [13199] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
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
  [13233] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(417), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(419), 19,
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
  [13267] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(425), 1,
      sym_logical_and_operator,
    ACTIONS(421), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(423), 18,
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
  [13303] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(361), 1,
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
  [13339] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(425), 1,
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
  [13375] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(297), 1,
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
  [13411] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(307), 1,
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
  [13447] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(317), 1,
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
  [13483] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(327), 1,
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
  [13519] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(337), 1,
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
  [13555] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(347), 1,
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
  [13591] = 4,
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
  [13625] = 4,
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
  [13659] = 4,
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
  [13693] = 4,
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
  [13727] = 4,
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
  [13761] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(479), 1,
      sym_bitwise_and_operator,
    ACTIONS(293), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(295), 16,
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
  [13793] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(481), 1,
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
  [13825] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(483), 1,
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
  [13857] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(485), 1,
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
  [13889] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(487), 1,
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
  [13921] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(489), 1,
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
  [13953] = 4,
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
  [13983] = 4,
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
  [14013] = 4,
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
  [14043] = 4,
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
  [14073] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(379), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(381), 17,
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
  [14103] = 4,
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
  [14133] = 4,
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
  [14163] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(391), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(393), 17,
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
  [14193] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(395), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(397), 17,
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
  [14223] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(491), 1,
      sym_logical_or_operator,
    ACTIONS(399), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(401), 16,
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
  [14255] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(405), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(407), 17,
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
  [14285] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(493), 1,
      sym_logical_and_operator,
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
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [14317] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(383), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(385), 17,
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
  [14347] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(495), 1,
      sym_bitwise_or_operator,
    ACTIONS(357), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(359), 16,
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
  [14379] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(363), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(365), 17,
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
  [14409] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(497), 1,
      sym_bitwise_xor_operator,
    ACTIONS(367), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(369), 16,
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
  [14441] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(289), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(291), 17,
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
  [14471] = 4,
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
  [14501] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(481), 1,
      sym_equality_operator,
    ACTIONS(303), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(305), 16,
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
  [14533] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(309), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(311), 17,
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
  [14563] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(483), 1,
      sym_relational_operator,
    ACTIONS(313), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(315), 16,
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
  [14595] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(319), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(321), 17,
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
  [14625] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(485), 1,
      sym_shift_operator,
    ACTIONS(323), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(325), 16,
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
  [14657] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(329), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(331), 17,
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
  [14687] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(487), 1,
      sym_additive_operator,
    ACTIONS(333), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(335), 16,
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
  [14719] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(339), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(341), 17,
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
  [14749] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(489), 1,
      sym_multiplicative_operator,
    ACTIONS(343), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(345), 16,
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
  [14781] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(501), 1,
      sym_assignment_operator,
    ACTIONS(349), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(351), 15,
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
  [14815] = 3,
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
  [14843] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14871] = 3,
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
  [14899] = 3,
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
  [14927] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(393), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(391), 14,
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
  [14955] = 3,
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
  [14983] = 4,
    ACTIONS(503), 1,
      sym_logical_or_operator,
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
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15013] = 3,
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
  [15041] = 4,
    ACTIONS(505), 1,
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
  [15071] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15099] = 4,
    ACTIONS(507), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(359), 4,
      sym_assignment_operator,
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
  [15129] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15157] = 4,
    ACTIONS(509), 1,
      sym_bitwise_xor_operator,
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
  [15187] = 3,
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
  [15215] = 4,
    ACTIONS(511), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(295), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [15245] = 3,
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
  [15273] = 4,
    ACTIONS(513), 1,
      sym_equality_operator,
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
  [15303] = 3,
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
  [15331] = 4,
    ACTIONS(515), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(315), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(313), 14,
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
  [15361] = 3,
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
  [15389] = 4,
    ACTIONS(517), 1,
      sym_shift_operator,
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
  [15419] = 3,
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
  [15447] = 4,
    ACTIONS(519), 1,
      sym_additive_operator,
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
      sym_shift_operator,
  [15477] = 3,
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
  [15505] = 4,
    ACTIONS(521), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(345), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(343), 14,
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
  [15535] = 5,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(525), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(351), 4,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(349), 13,
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
  [15567] = 3,
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
  [15595] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15623] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15651] = 4,
    ACTIONS(505), 1,
      sym_logical_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15681] = 4,
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
  [15711] = 4,
    ACTIONS(509), 1,
      sym_bitwise_xor_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(285), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(283), 13,
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
  [15741] = 4,
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
  [15771] = 4,
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
  [15801] = 4,
    ACTIONS(515), 1,
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
  [15831] = 4,
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
  [15861] = 4,
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
  [15891] = 4,
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
  [15921] = 3,
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
  [15949] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(371), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(373), 17,
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
  [15979] = 3,
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
  [16007] = 3,
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
  [16035] = 3,
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
  [16063] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(375), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(377), 17,
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
  [16093] = 3,
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
  [16121] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(409), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(411), 17,
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
  [16151] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(371), 1,
      sym__operand_separator,
    ACTIONS(527), 1,
      ts_builtin_sym_end,
    ACTIONS(529), 4,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
    ACTIONS(373), 13,
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
  [16185] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(413), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(415), 17,
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
  [16215] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(417), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(419), 17,
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
  [16245] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(497), 1,
      sym_bitwise_xor_operator,
    ACTIONS(283), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(285), 16,
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
  [16277] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(493), 1,
      sym_logical_and_operator,
    ACTIONS(421), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(423), 16,
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
  [16309] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(495), 1,
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
  [16341] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(479), 1,
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
  [16373] = 14,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(353), 1,
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
    STATE(460), 1,
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
  [16420] = 4,
    ACTIONS(549), 1,
      sym_bitwise_xor_operator,
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
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16446] = 3,
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
  [16470] = 4,
    ACTIONS(551), 1,
      sym_shift_operator,
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
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [16496] = 3,
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
  [16520] = 4,
    ACTIONS(553), 1,
      sym_additive_operator,
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
      sym_shift_operator,
  [16546] = 3,
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
  [16570] = 4,
    ACTIONS(555), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(345), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
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
  [16596] = 5,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(559), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [16624] = 3,
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
  [16648] = 3,
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
  [16672] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [16696] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [16720] = 4,
    ACTIONS(561), 1,
      sym_logical_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [16746] = 4,
    ACTIONS(563), 1,
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
  [16772] = 4,
    ACTIONS(565), 1,
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
  [16798] = 4,
    ACTIONS(567), 1,
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
  [16824] = 4,
    ACTIONS(551), 1,
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
  [16850] = 4,
    ACTIONS(553), 1,
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
  [16876] = 4,
    ACTIONS(555), 1,
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
  [16902] = 3,
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
  [16926] = 3,
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
  [16950] = 3,
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
  [16974] = 3,
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
  [16998] = 3,
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
  [17022] = 3,
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
  [17046] = 3,
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
  [17070] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(393), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(391), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17094] = 3,
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
  [17118] = 4,
    ACTIONS(569), 1,
      sym_logical_or_operator,
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
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17144] = 3,
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
  [17168] = 4,
    ACTIONS(561), 1,
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
  [17194] = 3,
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
  [17218] = 4,
    ACTIONS(563), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(359), 4,
      sym_assignment_operator,
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
  [17244] = 3,
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
  [17268] = 4,
    ACTIONS(549), 1,
      sym_bitwise_xor_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(369), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(367), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17294] = 3,
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
  [17318] = 4,
    ACTIONS(565), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(295), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [17344] = 3,
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
  [17368] = 4,
    ACTIONS(571), 1,
      sym_equality_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(305), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(303), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17394] = 3,
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
  [17418] = 3,
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
  [17442] = 4,
    ACTIONS(567), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(315), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [17468] = 4,
    ACTIONS(575), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(577), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(573), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17494] = 4,
    ACTIONS(579), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(577), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(573), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17520] = 4,
    ACTIONS(581), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(577), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(573), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17546] = 4,
    ACTIONS(583), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(577), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(573), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17572] = 4,
    ACTIONS(585), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(577), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(573), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17598] = 4,
    ACTIONS(587), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(577), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(573), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17624] = 4,
    ACTIONS(589), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(577), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(573), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17650] = 4,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(577), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(573), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17676] = 4,
    ACTIONS(593), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(577), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(573), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17702] = 4,
    ACTIONS(595), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(577), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(573), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17728] = 4,
    ACTIONS(597), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(577), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(573), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17754] = 4,
    ACTIONS(599), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(577), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(573), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17780] = 4,
    ACTIONS(571), 1,
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
  [17806] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(403), 1,
      sym_logical_or_operator,
    ACTIONS(375), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(377), 9,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
      sym_assignment_operator,
  [17833] = 12,
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
    ACTIONS(605), 1,
      sym_line_comment,
    STATE(332), 1,
      aux_sym_numeric_operands_repeat1,
    STATE(351), 1,
      aux_sym_numeric_operands_repeat2,
    STATE(460), 1,
      sym__comment,
    ACTIONS(601), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(608), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(603), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
  [17874] = 4,
    ACTIONS(611), 1,
      sym_logical_or_operator,
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
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17898] = 4,
    ACTIONS(613), 1,
      sym_shift_operator,
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
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [17922] = 3,
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
  [17944] = 4,
    ACTIONS(615), 1,
      sym_additive_operator,
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
      sym_shift_operator,
  [17968] = 3,
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
  [17990] = 4,
    ACTIONS(617), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(345), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(343), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18014] = 5,
    ACTIONS(619), 1,
      anon_sym_LPAREN,
    ACTIONS(621), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [18040] = 3,
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
  [18062] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(409), 1,
      aux_sym__string_directive_token1,
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
  [18086] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [18108] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [18130] = 4,
    ACTIONS(623), 1,
      sym_logical_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [18154] = 4,
    ACTIONS(625), 1,
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
  [18178] = 4,
    ACTIONS(627), 1,
      sym_bitwise_xor_operator,
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
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18202] = 4,
    ACTIONS(629), 1,
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
  [18226] = 4,
    ACTIONS(631), 1,
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
  [18250] = 4,
    ACTIONS(633), 1,
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
  [18274] = 4,
    ACTIONS(613), 1,
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
  [18298] = 4,
    ACTIONS(615), 1,
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
  [18322] = 4,
    ACTIONS(617), 1,
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
  [18346] = 3,
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
  [18368] = 3,
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
  [18390] = 3,
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
  [18412] = 4,
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
  [18436] = 4,
    ACTIONS(633), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(315), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [18460] = 3,
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
  [18482] = 3,
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
  [18504] = 3,
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
  [18526] = 3,
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
  [18548] = 3,
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
  [18570] = 4,
    ACTIONS(623), 1,
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
  [18594] = 3,
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
  [18616] = 3,
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
  [18638] = 4,
    ACTIONS(625), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(359), 4,
      sym_assignment_operator,
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
  [18662] = 3,
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
  [18684] = 4,
    ACTIONS(627), 1,
      sym_bitwise_xor_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(369), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(367), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18708] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(543), 1,
      sym_assignment_operator,
    ACTIONS(635), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(637), 7,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [18736] = 10,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(639), 1,
      sym_line_comment,
    ACTIONS(645), 1,
      anon_sym_COMMA,
    STATE(332), 1,
      aux_sym_numeric_operands_repeat1,
    STATE(460), 1,
      sym__comment,
    ACTIONS(635), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(642), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(648), 2,
      sym__operand_separator,
      sym__data_separator,
    ACTIONS(637), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
  [18772] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(543), 1,
      sym_assignment_operator,
    ACTIONS(651), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(653), 7,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [18800] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(393), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(391), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18822] = 3,
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
  [18844] = 4,
    ACTIONS(629), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(295), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [18868] = 3,
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
  [18890] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(543), 1,
      sym_assignment_operator,
    ACTIONS(655), 4,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
    ACTIONS(657), 7,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [18918] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(659), 1,
      aux_sym__string_directive_token1,
    ACTIONS(577), 12,
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
  [18942] = 3,
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
  [18964] = 4,
    ACTIONS(631), 1,
      sym_equality_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(305), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(303), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18988] = 3,
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
  [19010] = 3,
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
  [19032] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(371), 1,
      aux_sym__string_directive_token1,
    ACTIONS(373), 12,
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
  [19056] = 3,
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
  [19078] = 4,
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
  [19102] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(491), 1,
      sym_logical_or_operator,
    ACTIONS(375), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(377), 7,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
  [19125] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(665), 1,
      sym__data_separator,
    STATE(348), 1,
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
  [19150] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(668), 1,
      sym__data_separator,
    STATE(348), 1,
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
  [19175] = 3,
    ACTIONS(503), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(375), 9,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_assignment_operator,
  [19194] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(668), 1,
      sym__data_separator,
    STATE(348), 1,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(670), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(672), 6,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19219] = 6,
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
  [19243] = 5,
    STATE(9), 1,
      sym__control_operand_separator,
    STATE(358), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(682), 3,
      sym__operand_separator,
      sym__data_separator,
      aux_sym__control_operand_separator_token1,
    ACTIONS(680), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19265] = 4,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(686), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(684), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      aux_sym__control_operand_separator_token1,
  [19285] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(692), 1,
      sym_assignment_operator,
    ACTIONS(688), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(690), 5,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_COMMA,
  [19309] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    STATE(359), 1,
      aux_sym__numeric_directive_repeat1,
    ACTIONS(694), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(696), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(698), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19333] = 5,
    STATE(9), 1,
      sym__control_operand_separator,
    STATE(357), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(702), 3,
      sym__operand_separator,
      sym__data_separator,
      aux_sym__control_operand_separator_token1,
    ACTIONS(700), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19355] = 5,
    STATE(9), 1,
      sym__control_operand_separator,
    STATE(357), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(682), 3,
      sym__operand_separator,
      sym__data_separator,
      aux_sym__control_operand_separator_token1,
    ACTIONS(705), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19377] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    STATE(359), 1,
      aux_sym__numeric_directive_repeat1,
    ACTIONS(707), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(709), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(711), 4,
      anon_sym_CR,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19401] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(714), 1,
      ts_builtin_sym_end,
    ACTIONS(718), 1,
      aux_sym__whitespace_token1,
    ACTIONS(720), 1,
      anon_sym_LPAREN,
    STATE(390), 1,
      sym__call_expression,
    ACTIONS(716), 4,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
  [19426] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(722), 1,
      ts_builtin_sym_end,
    ACTIONS(726), 1,
      anon_sym_COMMA,
    ACTIONS(728), 1,
      sym__operand_separator,
    STATE(366), 1,
      aux_sym_operands_repeat1,
    ACTIONS(724), 4,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
  [19451] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(736), 1,
      anon_sym_COMMA,
    STATE(364), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(730), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(732), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(734), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19476] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(726), 1,
      anon_sym_COMMA,
    ACTIONS(738), 1,
      ts_builtin_sym_end,
    ACTIONS(742), 1,
      sym__operand_separator,
    STATE(361), 1,
      aux_sym_operands_repeat1,
    ACTIONS(740), 4,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
  [19501] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(751), 1,
      anon_sym_COMMA,
    STATE(364), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(744), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(746), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(748), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19526] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(736), 1,
      anon_sym_COMMA,
    STATE(362), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(734), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(754), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(756), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [19551] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(758), 1,
      ts_builtin_sym_end,
    ACTIONS(762), 1,
      anon_sym_COMMA,
    ACTIONS(765), 1,
      sym__operand_separator,
    STATE(366), 1,
      aux_sym_operands_repeat1,
    ACTIONS(760), 4,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
  [19576] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(768), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(770), 5,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [19594] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(700), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      aux_sym__control_operand_separator_token1,
  [19608] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(772), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      aux_sym__control_operand_separator_token1,
  [19622] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(774), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      aux_sym__control_operand_separator_token1,
  [19636] = 4,
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
  [19654] = 2,
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
  [19668] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(744), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(746), 5,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_COMMA,
  [19686] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(782), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(784), 5,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_COMMA,
  [19704] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(776), 7,
      sym__operand_separator,
      sym__line_separator,
      sym__data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      aux_sym__control_operand_separator_token1,
  [19718] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(780), 2,
      sym__operand_separator,
      ts_builtin_sym_end,
    ACTIONS(786), 5,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
      anon_sym_COMMA,
  [19736] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(790), 1,
      anon_sym_CR,
    ACTIONS(792), 1,
      sym_line_comment,
    STATE(464), 1,
      sym__comment,
    ACTIONS(788), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [19759] = 3,
    ACTIONS(569), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(375), 5,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
  [19774] = 6,
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
  [19795] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(790), 1,
      anon_sym_CR,
    ACTIONS(792), 1,
      sym_line_comment,
    ACTIONS(802), 1,
      ts_builtin_sym_end,
    STATE(478), 1,
      sym__comment,
    ACTIONS(788), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [19818] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(732), 1,
      anon_sym_RPAREN,
    ACTIONS(807), 1,
      anon_sym_COMMA,
    STATE(394), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(804), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19838] = 5,
    ACTIONS(802), 1,
      ts_builtin_sym_end,
    ACTIONS(811), 1,
      sym_line_comment,
    STATE(478), 1,
      sym__comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(809), 2,
      sym__line_separator,
      anon_sym_SEMI,
  [19856] = 5,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(811), 1,
      sym_line_comment,
    STATE(464), 1,
      sym__comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(809), 2,
      sym__line_separator,
      anon_sym_SEMI,
  [19874] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(813), 1,
      ts_builtin_sym_end,
    ACTIONS(815), 4,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
  [19890] = 5,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(817), 1,
      anon_sym_RPAREN,
    ACTIONS(820), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(688), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [19908] = 5,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(820), 1,
      sym_assignment_operator,
    ACTIONS(822), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(688), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [19926] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(827), 1,
      anon_sym_RPAREN,
    ACTIONS(829), 1,
      sym_macro_parameter,
    STATE(436), 1,
      sym_macro_parameters,
    ACTIONS(825), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19946] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(833), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(831), 3,
      sym__line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
  [19962] = 5,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(820), 1,
      sym_assignment_operator,
    ACTIONS(835), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(688), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [19980] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(838), 1,
      ts_builtin_sym_end,
    ACTIONS(840), 4,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
  [19996] = 5,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(820), 1,
      sym_assignment_operator,
    ACTIONS(842), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(688), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [20014] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(829), 1,
      sym_macro_parameter,
    ACTIONS(847), 1,
      anon_sym_RPAREN,
    STATE(440), 1,
      sym_macro_parameters,
    ACTIONS(845), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [20034] = 5,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(820), 1,
      sym_assignment_operator,
    ACTIONS(849), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(688), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [20052] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(746), 1,
      anon_sym_RPAREN,
    ACTIONS(855), 1,
      anon_sym_COMMA,
    STATE(394), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(852), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [20072] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(862), 1,
      aux_sym__whitespace_token1,
    ACTIONS(858), 2,
      sym__line_separator,
      ts_builtin_sym_end,
    ACTIONS(860), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [20090] = 4,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(820), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(688), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20106] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(864), 1,
      ts_builtin_sym_end,
    ACTIONS(866), 4,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
  [20122] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(756), 1,
      anon_sym_RPAREN,
    ACTIONS(807), 1,
      anon_sym_COMMA,
    STATE(381), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(868), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [20142] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(527), 1,
      ts_builtin_sym_end,
    ACTIONS(529), 4,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
  [20158] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(871), 1,
      ts_builtin_sym_end,
    ACTIONS(873), 4,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      sym_line_comment,
  [20174] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(875), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20185] = 4,
    ACTIONS(877), 1,
      sym_line_comment,
    STATE(449), 1,
      sym__comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(879), 2,
      sym__data_separator,
      anon_sym_COMMA,
  [20200] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(881), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20211] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(883), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20222] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(885), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20233] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(887), 1,
      anon_sym_DQUOTE,
    STATE(430), 1,
      aux_sym_string_repeat1,
    ACTIONS(889), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20250] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(875), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20261] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(891), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20272] = 5,
    ACTIONS(738), 1,
      anon_sym_RPAREN,
    ACTIONS(893), 1,
      anon_sym_COMMA,
    ACTIONS(895), 1,
      sym__operand_separator,
    STATE(413), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20289] = 4,
    ACTIONS(758), 1,
      anon_sym_RPAREN,
    STATE(410), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(897), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [20304] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(900), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20315] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(902), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20326] = 5,
    ACTIONS(722), 1,
      anon_sym_RPAREN,
    ACTIONS(893), 1,
      anon_sym_COMMA,
    ACTIONS(904), 1,
      sym__operand_separator,
    STATE(410), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20343] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(906), 1,
      anon_sym_DQUOTE,
    STATE(416), 1,
      aux_sym_string_repeat1,
    ACTIONS(908), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20360] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(910), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20371] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(912), 1,
      anon_sym_DQUOTE,
    STATE(430), 1,
      aux_sym_string_repeat1,
    ACTIONS(889), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20388] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(914), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20399] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(916), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20410] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(918), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20421] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(920), 1,
      anon_sym_DQUOTE,
    STATE(422), 1,
      aux_sym_string_repeat1,
    ACTIONS(922), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20438] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(924), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20449] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(926), 1,
      anon_sym_DQUOTE,
    STATE(430), 1,
      aux_sym_string_repeat1,
    ACTIONS(889), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20466] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(928), 1,
      anon_sym_DQUOTE,
    STATE(425), 1,
      aux_sym_string_repeat1,
    ACTIONS(930), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20483] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(790), 1,
      anon_sym_CR,
    ACTIONS(932), 1,
      sym_line_comment,
    ACTIONS(788), 2,
      anon_sym_SEMI,
      anon_sym_LF,
  [20500] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(934), 1,
      anon_sym_DQUOTE,
    STATE(430), 1,
      aux_sym_string_repeat1,
    ACTIONS(889), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20517] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(936), 4,
      sym__line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20528] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(746), 4,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20541] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(770), 4,
      anon_sym_SPACE,
      anon_sym_TAB,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20554] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(938), 1,
      anon_sym_DQUOTE,
    STATE(406), 1,
      aux_sym_string_repeat1,
    ACTIONS(940), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20571] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(942), 1,
      anon_sym_DQUOTE,
    STATE(430), 1,
      aux_sym_string_repeat1,
    ACTIONS(944), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20588] = 3,
    ACTIONS(611), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(375), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_assignment_operator,
  [20601] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(776), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20611] = 3,
    ACTIONS(947), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(809), 2,
      sym__line_separator,
      anon_sym_SEMI,
  [20623] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(949), 1,
      ts_builtin_sym_end,
    ACTIONS(951), 1,
      anon_sym_CR,
    ACTIONS(953), 1,
      anon_sym_LF,
  [20639] = 4,
    ACTIONS(619), 1,
      anon_sym_LPAREN,
    ACTIONS(955), 1,
      anon_sym_RPAREN,
    ACTIONS(957), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20653] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(961), 1,
      anon_sym_RPAREN,
    ACTIONS(959), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [20667] = 4,
    ACTIONS(619), 1,
      anon_sym_LPAREN,
    ACTIONS(957), 1,
      sym_assignment_operator,
    ACTIONS(963), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20681] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(782), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20691] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(780), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20701] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(967), 1,
      anon_sym_RPAREN,
    ACTIONS(965), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [20715] = 4,
    ACTIONS(619), 1,
      anon_sym_LPAREN,
    ACTIONS(957), 1,
      sym_assignment_operator,
    ACTIONS(969), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20729] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(971), 1,
      anon_sym_LPAREN,
    ACTIONS(973), 1,
      sym_macro_parameter,
    STATE(418), 1,
      sym_macro_parameters,
  [20745] = 4,
    ACTIONS(619), 1,
      anon_sym_LPAREN,
    ACTIONS(957), 1,
      sym_assignment_operator,
    ACTIONS(975), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20759] = 4,
    ACTIONS(619), 1,
      anon_sym_LPAREN,
    ACTIONS(957), 1,
      sym_assignment_operator,
    ACTIONS(977), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20773] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(951), 1,
      anon_sym_CR,
    ACTIONS(953), 1,
      anon_sym_LF,
  [20786] = 3,
    ACTIONS(949), 1,
      ts_builtin_sym_end,
    ACTIONS(979), 1,
      sym__line_separator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20797] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(809), 1,
      aux_sym__statement_token1,
    ACTIONS(949), 1,
      ts_builtin_sym_end,
  [20810] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(981), 1,
      anon_sym_COMMA,
    ACTIONS(983), 1,
      sym_macro_parameter,
  [20823] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(985), 2,
      sym__data_separator,
      anon_sym_COMMA,
  [20832] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(987), 1,
      anon_sym_COMMA,
    ACTIONS(989), 1,
      sym_macro_parameter,
  [20845] = 3,
    ACTIONS(957), 1,
      sym_assignment_operator,
    ACTIONS(991), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20856] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(993), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [20867] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(995), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [20878] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(997), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [20889] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(999), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [20900] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1001), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [20911] = 3,
    ACTIONS(957), 1,
      sym_assignment_operator,
    ACTIONS(1003), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20922] = 3,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(957), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20933] = 3,
    ACTIONS(957), 1,
      sym_assignment_operator,
    ACTIONS(1005), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20944] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(879), 2,
      sym__data_separator,
      anon_sym_COMMA,
  [20953] = 3,
    ACTIONS(619), 1,
      anon_sym_LPAREN,
    ACTIONS(957), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20964] = 3,
    ACTIONS(523), 1,
      anon_sym_LPAREN,
    ACTIONS(957), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20975] = 2,
    ACTIONS(1007), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20983] = 2,
    ACTIONS(802), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20991] = 2,
    ACTIONS(1009), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20999] = 2,
    ACTIONS(1011), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21007] = 2,
    ACTIONS(1013), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21015] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1015), 1,
      aux_sym__whitespace_token1,
  [21025] = 2,
    ACTIONS(1017), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21033] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(983), 1,
      sym_macro_parameter,
  [21043] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1019), 1,
      aux_sym__string_directive_token1,
  [21053] = 2,
    ACTIONS(1021), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21061] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1023), 1,
      sym_macro_parameter,
  [21071] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1025), 1,
      sym_macro_parameter,
  [21081] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1027), 1,
      anon_sym_LF,
  [21091] = 2,
    ACTIONS(1029), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21099] = 2,
    ACTIONS(1031), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21107] = 2,
    ACTIONS(1033), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21115] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(989), 1,
      sym_macro_parameter,
  [21125] = 2,
    ACTIONS(1035), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21133] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(780), 1,
      aux_sym__string_directive_token1,
  [21143] = 2,
    ACTIONS(1037), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21151] = 2,
    ACTIONS(1039), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21159] = 2,
    ACTIONS(1041), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21167] = 2,
    ACTIONS(1043), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21175] = 2,
    ACTIONS(1045), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21183] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1047), 1,
      aux_sym__whitespace_token1,
  [21193] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(776), 1,
      aux_sym__string_directive_token1,
  [21203] = 2,
    ACTIONS(1049), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21211] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1051), 1,
      aux_sym__whitespace_token1,
  [21221] = 2,
    ACTIONS(1053), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21229] = 2,
    ACTIONS(1055), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21237] = 2,
    ACTIONS(979), 1,
      sym__line_separator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21245] = 2,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21253] = 2,
    ACTIONS(1057), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21261] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(979), 1,
      anon_sym_LF,
  [21271] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(809), 1,
      aux_sym__statement_token1,
  [21281] = 2,
    ACTIONS(1059), 1,
      sym_macro_name,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21289] = 2,
    ACTIONS(1061), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21297] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1063), 1,
      aux_sym__whitespace_token1,
  [21307] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1065), 1,
      aux_sym__whitespace_token1,
  [21317] = 2,
    ACTIONS(1067), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21325] = 2,
    ACTIONS(1069), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21333] = 2,
    ACTIONS(1071), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21341] = 2,
    ACTIONS(1073), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21349] = 2,
    ACTIONS(1075), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21357] = 2,
    ACTIONS(1077), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21365] = 2,
    ACTIONS(1079), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21373] = 2,
    ACTIONS(1081), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21381] = 2,
    ACTIONS(1083), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21389] = 2,
    ACTIONS(1085), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [21397] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1087), 1,
      aux_sym__string_directive_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 140,
  [SMALL_STATE(4)] = 276,
  [SMALL_STATE(5)] = 379,
  [SMALL_STATE(6)] = 506,
  [SMALL_STATE(7)] = 606,
  [SMALL_STATE(8)] = 736,
  [SMALL_STATE(9)] = 866,
  [SMALL_STATE(10)] = 997,
  [SMALL_STATE(11)] = 1126,
  [SMALL_STATE(12)] = 1259,
  [SMALL_STATE(13)] = 1389,
  [SMALL_STATE(14)] = 1519,
  [SMALL_STATE(15)] = 1645,
  [SMALL_STATE(16)] = 1771,
  [SMALL_STATE(17)] = 1901,
  [SMALL_STATE(18)] = 2031,
  [SMALL_STATE(19)] = 2161,
  [SMALL_STATE(20)] = 2291,
  [SMALL_STATE(21)] = 2421,
  [SMALL_STATE(22)] = 2551,
  [SMALL_STATE(23)] = 2681,
  [SMALL_STATE(24)] = 2811,
  [SMALL_STATE(25)] = 2941,
  [SMALL_STATE(26)] = 3071,
  [SMALL_STATE(27)] = 3194,
  [SMALL_STATE(28)] = 3321,
  [SMALL_STATE(29)] = 3444,
  [SMALL_STATE(30)] = 3563,
  [SMALL_STATE(31)] = 3679,
  [SMALL_STATE(32)] = 3795,
  [SMALL_STATE(33)] = 3911,
  [SMALL_STATE(34)] = 4027,
  [SMALL_STATE(35)] = 4143,
  [SMALL_STATE(36)] = 4259,
  [SMALL_STATE(37)] = 4375,
  [SMALL_STATE(38)] = 4491,
  [SMALL_STATE(39)] = 4607,
  [SMALL_STATE(40)] = 4723,
  [SMALL_STATE(41)] = 4839,
  [SMALL_STATE(42)] = 4955,
  [SMALL_STATE(43)] = 5071,
  [SMALL_STATE(44)] = 5187,
  [SMALL_STATE(45)] = 5305,
  [SMALL_STATE(46)] = 5421,
  [SMALL_STATE(47)] = 5537,
  [SMALL_STATE(48)] = 5653,
  [SMALL_STATE(49)] = 5769,
  [SMALL_STATE(50)] = 5885,
  [SMALL_STATE(51)] = 6001,
  [SMALL_STATE(52)] = 6117,
  [SMALL_STATE(53)] = 6233,
  [SMALL_STATE(54)] = 6349,
  [SMALL_STATE(55)] = 6465,
  [SMALL_STATE(56)] = 6581,
  [SMALL_STATE(57)] = 6699,
  [SMALL_STATE(58)] = 6815,
  [SMALL_STATE(59)] = 6931,
  [SMALL_STATE(60)] = 7047,
  [SMALL_STATE(61)] = 7163,
  [SMALL_STATE(62)] = 7279,
  [SMALL_STATE(63)] = 7395,
  [SMALL_STATE(64)] = 7511,
  [SMALL_STATE(65)] = 7627,
  [SMALL_STATE(66)] = 7743,
  [SMALL_STATE(67)] = 7859,
  [SMALL_STATE(68)] = 7977,
  [SMALL_STATE(69)] = 8093,
  [SMALL_STATE(70)] = 8209,
  [SMALL_STATE(71)] = 8325,
  [SMALL_STATE(72)] = 8441,
  [SMALL_STATE(73)] = 8557,
  [SMALL_STATE(74)] = 8673,
  [SMALL_STATE(75)] = 8789,
  [SMALL_STATE(76)] = 8905,
  [SMALL_STATE(77)] = 9021,
  [SMALL_STATE(78)] = 9137,
  [SMALL_STATE(79)] = 9255,
  [SMALL_STATE(80)] = 9371,
  [SMALL_STATE(81)] = 9487,
  [SMALL_STATE(82)] = 9603,
  [SMALL_STATE(83)] = 9719,
  [SMALL_STATE(84)] = 9835,
  [SMALL_STATE(85)] = 9951,
  [SMALL_STATE(86)] = 10067,
  [SMALL_STATE(87)] = 10183,
  [SMALL_STATE(88)] = 10299,
  [SMALL_STATE(89)] = 10415,
  [SMALL_STATE(90)] = 10531,
  [SMALL_STATE(91)] = 10647,
  [SMALL_STATE(92)] = 10763,
  [SMALL_STATE(93)] = 10879,
  [SMALL_STATE(94)] = 10995,
  [SMALL_STATE(95)] = 11111,
  [SMALL_STATE(96)] = 11227,
  [SMALL_STATE(97)] = 11343,
  [SMALL_STATE(98)] = 11459,
  [SMALL_STATE(99)] = 11575,
  [SMALL_STATE(100)] = 11691,
  [SMALL_STATE(101)] = 11809,
  [SMALL_STATE(102)] = 11925,
  [SMALL_STATE(103)] = 12041,
  [SMALL_STATE(104)] = 12095,
  [SMALL_STATE(105)] = 12149,
  [SMALL_STATE(106)] = 12203,
  [SMALL_STATE(107)] = 12257,
  [SMALL_STATE(108)] = 12293,
  [SMALL_STATE(109)] = 12327,
  [SMALL_STATE(110)] = 12363,
  [SMALL_STATE(111)] = 12397,
  [SMALL_STATE(112)] = 12433,
  [SMALL_STATE(113)] = 12467,
  [SMALL_STATE(114)] = 12503,
  [SMALL_STATE(115)] = 12537,
  [SMALL_STATE(116)] = 12573,
  [SMALL_STATE(117)] = 12607,
  [SMALL_STATE(118)] = 12643,
  [SMALL_STATE(119)] = 12677,
  [SMALL_STATE(120)] = 12713,
  [SMALL_STATE(121)] = 12751,
  [SMALL_STATE(122)] = 12787,
  [SMALL_STATE(123)] = 12821,
  [SMALL_STATE(124)] = 12857,
  [SMALL_STATE(125)] = 12891,
  [SMALL_STATE(126)] = 12925,
  [SMALL_STATE(127)] = 12959,
  [SMALL_STATE(128)] = 12993,
  [SMALL_STATE(129)] = 13027,
  [SMALL_STATE(130)] = 13061,
  [SMALL_STATE(131)] = 13095,
  [SMALL_STATE(132)] = 13131,
  [SMALL_STATE(133)] = 13165,
  [SMALL_STATE(134)] = 13199,
  [SMALL_STATE(135)] = 13233,
  [SMALL_STATE(136)] = 13267,
  [SMALL_STATE(137)] = 13303,
  [SMALL_STATE(138)] = 13339,
  [SMALL_STATE(139)] = 13375,
  [SMALL_STATE(140)] = 13411,
  [SMALL_STATE(141)] = 13447,
  [SMALL_STATE(142)] = 13483,
  [SMALL_STATE(143)] = 13519,
  [SMALL_STATE(144)] = 13555,
  [SMALL_STATE(145)] = 13591,
  [SMALL_STATE(146)] = 13625,
  [SMALL_STATE(147)] = 13659,
  [SMALL_STATE(148)] = 13693,
  [SMALL_STATE(149)] = 13727,
  [SMALL_STATE(150)] = 13761,
  [SMALL_STATE(151)] = 13793,
  [SMALL_STATE(152)] = 13825,
  [SMALL_STATE(153)] = 13857,
  [SMALL_STATE(154)] = 13889,
  [SMALL_STATE(155)] = 13921,
  [SMALL_STATE(156)] = 13953,
  [SMALL_STATE(157)] = 13983,
  [SMALL_STATE(158)] = 14013,
  [SMALL_STATE(159)] = 14043,
  [SMALL_STATE(160)] = 14073,
  [SMALL_STATE(161)] = 14103,
  [SMALL_STATE(162)] = 14133,
  [SMALL_STATE(163)] = 14163,
  [SMALL_STATE(164)] = 14193,
  [SMALL_STATE(165)] = 14223,
  [SMALL_STATE(166)] = 14255,
  [SMALL_STATE(167)] = 14285,
  [SMALL_STATE(168)] = 14317,
  [SMALL_STATE(169)] = 14347,
  [SMALL_STATE(170)] = 14379,
  [SMALL_STATE(171)] = 14409,
  [SMALL_STATE(172)] = 14441,
  [SMALL_STATE(173)] = 14471,
  [SMALL_STATE(174)] = 14501,
  [SMALL_STATE(175)] = 14533,
  [SMALL_STATE(176)] = 14563,
  [SMALL_STATE(177)] = 14595,
  [SMALL_STATE(178)] = 14625,
  [SMALL_STATE(179)] = 14657,
  [SMALL_STATE(180)] = 14687,
  [SMALL_STATE(181)] = 14719,
  [SMALL_STATE(182)] = 14749,
  [SMALL_STATE(183)] = 14781,
  [SMALL_STATE(184)] = 14815,
  [SMALL_STATE(185)] = 14843,
  [SMALL_STATE(186)] = 14871,
  [SMALL_STATE(187)] = 14899,
  [SMALL_STATE(188)] = 14927,
  [SMALL_STATE(189)] = 14955,
  [SMALL_STATE(190)] = 14983,
  [SMALL_STATE(191)] = 15013,
  [SMALL_STATE(192)] = 15041,
  [SMALL_STATE(193)] = 15071,
  [SMALL_STATE(194)] = 15099,
  [SMALL_STATE(195)] = 15129,
  [SMALL_STATE(196)] = 15157,
  [SMALL_STATE(197)] = 15187,
  [SMALL_STATE(198)] = 15215,
  [SMALL_STATE(199)] = 15245,
  [SMALL_STATE(200)] = 15273,
  [SMALL_STATE(201)] = 15303,
  [SMALL_STATE(202)] = 15331,
  [SMALL_STATE(203)] = 15361,
  [SMALL_STATE(204)] = 15389,
  [SMALL_STATE(205)] = 15419,
  [SMALL_STATE(206)] = 15447,
  [SMALL_STATE(207)] = 15477,
  [SMALL_STATE(208)] = 15505,
  [SMALL_STATE(209)] = 15535,
  [SMALL_STATE(210)] = 15567,
  [SMALL_STATE(211)] = 15595,
  [SMALL_STATE(212)] = 15623,
  [SMALL_STATE(213)] = 15651,
  [SMALL_STATE(214)] = 15681,
  [SMALL_STATE(215)] = 15711,
  [SMALL_STATE(216)] = 15741,
  [SMALL_STATE(217)] = 15771,
  [SMALL_STATE(218)] = 15801,
  [SMALL_STATE(219)] = 15831,
  [SMALL_STATE(220)] = 15861,
  [SMALL_STATE(221)] = 15891,
  [SMALL_STATE(222)] = 15921,
  [SMALL_STATE(223)] = 15949,
  [SMALL_STATE(224)] = 15979,
  [SMALL_STATE(225)] = 16007,
  [SMALL_STATE(226)] = 16035,
  [SMALL_STATE(227)] = 16063,
  [SMALL_STATE(228)] = 16093,
  [SMALL_STATE(229)] = 16121,
  [SMALL_STATE(230)] = 16151,
  [SMALL_STATE(231)] = 16185,
  [SMALL_STATE(232)] = 16215,
  [SMALL_STATE(233)] = 16245,
  [SMALL_STATE(234)] = 16277,
  [SMALL_STATE(235)] = 16309,
  [SMALL_STATE(236)] = 16341,
  [SMALL_STATE(237)] = 16373,
  [SMALL_STATE(238)] = 16420,
  [SMALL_STATE(239)] = 16446,
  [SMALL_STATE(240)] = 16470,
  [SMALL_STATE(241)] = 16496,
  [SMALL_STATE(242)] = 16520,
  [SMALL_STATE(243)] = 16546,
  [SMALL_STATE(244)] = 16570,
  [SMALL_STATE(245)] = 16596,
  [SMALL_STATE(246)] = 16624,
  [SMALL_STATE(247)] = 16648,
  [SMALL_STATE(248)] = 16672,
  [SMALL_STATE(249)] = 16696,
  [SMALL_STATE(250)] = 16720,
  [SMALL_STATE(251)] = 16746,
  [SMALL_STATE(252)] = 16772,
  [SMALL_STATE(253)] = 16798,
  [SMALL_STATE(254)] = 16824,
  [SMALL_STATE(255)] = 16850,
  [SMALL_STATE(256)] = 16876,
  [SMALL_STATE(257)] = 16902,
  [SMALL_STATE(258)] = 16926,
  [SMALL_STATE(259)] = 16950,
  [SMALL_STATE(260)] = 16974,
  [SMALL_STATE(261)] = 16998,
  [SMALL_STATE(262)] = 17022,
  [SMALL_STATE(263)] = 17046,
  [SMALL_STATE(264)] = 17070,
  [SMALL_STATE(265)] = 17094,
  [SMALL_STATE(266)] = 17118,
  [SMALL_STATE(267)] = 17144,
  [SMALL_STATE(268)] = 17168,
  [SMALL_STATE(269)] = 17194,
  [SMALL_STATE(270)] = 17218,
  [SMALL_STATE(271)] = 17244,
  [SMALL_STATE(272)] = 17268,
  [SMALL_STATE(273)] = 17294,
  [SMALL_STATE(274)] = 17318,
  [SMALL_STATE(275)] = 17344,
  [SMALL_STATE(276)] = 17368,
  [SMALL_STATE(277)] = 17394,
  [SMALL_STATE(278)] = 17418,
  [SMALL_STATE(279)] = 17442,
  [SMALL_STATE(280)] = 17468,
  [SMALL_STATE(281)] = 17494,
  [SMALL_STATE(282)] = 17520,
  [SMALL_STATE(283)] = 17546,
  [SMALL_STATE(284)] = 17572,
  [SMALL_STATE(285)] = 17598,
  [SMALL_STATE(286)] = 17624,
  [SMALL_STATE(287)] = 17650,
  [SMALL_STATE(288)] = 17676,
  [SMALL_STATE(289)] = 17702,
  [SMALL_STATE(290)] = 17728,
  [SMALL_STATE(291)] = 17754,
  [SMALL_STATE(292)] = 17780,
  [SMALL_STATE(293)] = 17806,
  [SMALL_STATE(294)] = 17833,
  [SMALL_STATE(295)] = 17874,
  [SMALL_STATE(296)] = 17898,
  [SMALL_STATE(297)] = 17922,
  [SMALL_STATE(298)] = 17944,
  [SMALL_STATE(299)] = 17968,
  [SMALL_STATE(300)] = 17990,
  [SMALL_STATE(301)] = 18014,
  [SMALL_STATE(302)] = 18040,
  [SMALL_STATE(303)] = 18062,
  [SMALL_STATE(304)] = 18086,
  [SMALL_STATE(305)] = 18108,
  [SMALL_STATE(306)] = 18130,
  [SMALL_STATE(307)] = 18154,
  [SMALL_STATE(308)] = 18178,
  [SMALL_STATE(309)] = 18202,
  [SMALL_STATE(310)] = 18226,
  [SMALL_STATE(311)] = 18250,
  [SMALL_STATE(312)] = 18274,
  [SMALL_STATE(313)] = 18298,
  [SMALL_STATE(314)] = 18322,
  [SMALL_STATE(315)] = 18346,
  [SMALL_STATE(316)] = 18368,
  [SMALL_STATE(317)] = 18390,
  [SMALL_STATE(318)] = 18412,
  [SMALL_STATE(319)] = 18436,
  [SMALL_STATE(320)] = 18460,
  [SMALL_STATE(321)] = 18482,
  [SMALL_STATE(322)] = 18504,
  [SMALL_STATE(323)] = 18526,
  [SMALL_STATE(324)] = 18548,
  [SMALL_STATE(325)] = 18570,
  [SMALL_STATE(326)] = 18594,
  [SMALL_STATE(327)] = 18616,
  [SMALL_STATE(328)] = 18638,
  [SMALL_STATE(329)] = 18662,
  [SMALL_STATE(330)] = 18684,
  [SMALL_STATE(331)] = 18708,
  [SMALL_STATE(332)] = 18736,
  [SMALL_STATE(333)] = 18772,
  [SMALL_STATE(334)] = 18800,
  [SMALL_STATE(335)] = 18822,
  [SMALL_STATE(336)] = 18844,
  [SMALL_STATE(337)] = 18868,
  [SMALL_STATE(338)] = 18890,
  [SMALL_STATE(339)] = 18918,
  [SMALL_STATE(340)] = 18942,
  [SMALL_STATE(341)] = 18964,
  [SMALL_STATE(342)] = 18988,
  [SMALL_STATE(343)] = 19010,
  [SMALL_STATE(344)] = 19032,
  [SMALL_STATE(345)] = 19056,
  [SMALL_STATE(346)] = 19078,
  [SMALL_STATE(347)] = 19102,
  [SMALL_STATE(348)] = 19125,
  [SMALL_STATE(349)] = 19150,
  [SMALL_STATE(350)] = 19175,
  [SMALL_STATE(351)] = 19194,
  [SMALL_STATE(352)] = 19219,
  [SMALL_STATE(353)] = 19243,
  [SMALL_STATE(354)] = 19265,
  [SMALL_STATE(355)] = 19285,
  [SMALL_STATE(356)] = 19309,
  [SMALL_STATE(357)] = 19333,
  [SMALL_STATE(358)] = 19355,
  [SMALL_STATE(359)] = 19377,
  [SMALL_STATE(360)] = 19401,
  [SMALL_STATE(361)] = 19426,
  [SMALL_STATE(362)] = 19451,
  [SMALL_STATE(363)] = 19476,
  [SMALL_STATE(364)] = 19501,
  [SMALL_STATE(365)] = 19526,
  [SMALL_STATE(366)] = 19551,
  [SMALL_STATE(367)] = 19576,
  [SMALL_STATE(368)] = 19594,
  [SMALL_STATE(369)] = 19608,
  [SMALL_STATE(370)] = 19622,
  [SMALL_STATE(371)] = 19636,
  [SMALL_STATE(372)] = 19654,
  [SMALL_STATE(373)] = 19668,
  [SMALL_STATE(374)] = 19686,
  [SMALL_STATE(375)] = 19704,
  [SMALL_STATE(376)] = 19718,
  [SMALL_STATE(377)] = 19736,
  [SMALL_STATE(378)] = 19759,
  [SMALL_STATE(379)] = 19774,
  [SMALL_STATE(380)] = 19795,
  [SMALL_STATE(381)] = 19818,
  [SMALL_STATE(382)] = 19838,
  [SMALL_STATE(383)] = 19856,
  [SMALL_STATE(384)] = 19874,
  [SMALL_STATE(385)] = 19890,
  [SMALL_STATE(386)] = 19908,
  [SMALL_STATE(387)] = 19926,
  [SMALL_STATE(388)] = 19946,
  [SMALL_STATE(389)] = 19962,
  [SMALL_STATE(390)] = 19980,
  [SMALL_STATE(391)] = 19996,
  [SMALL_STATE(392)] = 20014,
  [SMALL_STATE(393)] = 20034,
  [SMALL_STATE(394)] = 20052,
  [SMALL_STATE(395)] = 20072,
  [SMALL_STATE(396)] = 20090,
  [SMALL_STATE(397)] = 20106,
  [SMALL_STATE(398)] = 20122,
  [SMALL_STATE(399)] = 20142,
  [SMALL_STATE(400)] = 20158,
  [SMALL_STATE(401)] = 20174,
  [SMALL_STATE(402)] = 20185,
  [SMALL_STATE(403)] = 20200,
  [SMALL_STATE(404)] = 20211,
  [SMALL_STATE(405)] = 20222,
  [SMALL_STATE(406)] = 20233,
  [SMALL_STATE(407)] = 20250,
  [SMALL_STATE(408)] = 20261,
  [SMALL_STATE(409)] = 20272,
  [SMALL_STATE(410)] = 20289,
  [SMALL_STATE(411)] = 20304,
  [SMALL_STATE(412)] = 20315,
  [SMALL_STATE(413)] = 20326,
  [SMALL_STATE(414)] = 20343,
  [SMALL_STATE(415)] = 20360,
  [SMALL_STATE(416)] = 20371,
  [SMALL_STATE(417)] = 20388,
  [SMALL_STATE(418)] = 20399,
  [SMALL_STATE(419)] = 20410,
  [SMALL_STATE(420)] = 20421,
  [SMALL_STATE(421)] = 20438,
  [SMALL_STATE(422)] = 20449,
  [SMALL_STATE(423)] = 20466,
  [SMALL_STATE(424)] = 20483,
  [SMALL_STATE(425)] = 20500,
  [SMALL_STATE(426)] = 20517,
  [SMALL_STATE(427)] = 20528,
  [SMALL_STATE(428)] = 20541,
  [SMALL_STATE(429)] = 20554,
  [SMALL_STATE(430)] = 20571,
  [SMALL_STATE(431)] = 20588,
  [SMALL_STATE(432)] = 20601,
  [SMALL_STATE(433)] = 20611,
  [SMALL_STATE(434)] = 20623,
  [SMALL_STATE(435)] = 20639,
  [SMALL_STATE(436)] = 20653,
  [SMALL_STATE(437)] = 20667,
  [SMALL_STATE(438)] = 20681,
  [SMALL_STATE(439)] = 20691,
  [SMALL_STATE(440)] = 20701,
  [SMALL_STATE(441)] = 20715,
  [SMALL_STATE(442)] = 20729,
  [SMALL_STATE(443)] = 20745,
  [SMALL_STATE(444)] = 20759,
  [SMALL_STATE(445)] = 20773,
  [SMALL_STATE(446)] = 20786,
  [SMALL_STATE(447)] = 20797,
  [SMALL_STATE(448)] = 20810,
  [SMALL_STATE(449)] = 20823,
  [SMALL_STATE(450)] = 20832,
  [SMALL_STATE(451)] = 20845,
  [SMALL_STATE(452)] = 20856,
  [SMALL_STATE(453)] = 20867,
  [SMALL_STATE(454)] = 20878,
  [SMALL_STATE(455)] = 20889,
  [SMALL_STATE(456)] = 20900,
  [SMALL_STATE(457)] = 20911,
  [SMALL_STATE(458)] = 20922,
  [SMALL_STATE(459)] = 20933,
  [SMALL_STATE(460)] = 20944,
  [SMALL_STATE(461)] = 20953,
  [SMALL_STATE(462)] = 20964,
  [SMALL_STATE(463)] = 20975,
  [SMALL_STATE(464)] = 20983,
  [SMALL_STATE(465)] = 20991,
  [SMALL_STATE(466)] = 20999,
  [SMALL_STATE(467)] = 21007,
  [SMALL_STATE(468)] = 21015,
  [SMALL_STATE(469)] = 21025,
  [SMALL_STATE(470)] = 21033,
  [SMALL_STATE(471)] = 21043,
  [SMALL_STATE(472)] = 21053,
  [SMALL_STATE(473)] = 21061,
  [SMALL_STATE(474)] = 21071,
  [SMALL_STATE(475)] = 21081,
  [SMALL_STATE(476)] = 21091,
  [SMALL_STATE(477)] = 21099,
  [SMALL_STATE(478)] = 21107,
  [SMALL_STATE(479)] = 21115,
  [SMALL_STATE(480)] = 21125,
  [SMALL_STATE(481)] = 21133,
  [SMALL_STATE(482)] = 21143,
  [SMALL_STATE(483)] = 21151,
  [SMALL_STATE(484)] = 21159,
  [SMALL_STATE(485)] = 21167,
  [SMALL_STATE(486)] = 21175,
  [SMALL_STATE(487)] = 21183,
  [SMALL_STATE(488)] = 21193,
  [SMALL_STATE(489)] = 21203,
  [SMALL_STATE(490)] = 21211,
  [SMALL_STATE(491)] = 21221,
  [SMALL_STATE(492)] = 21229,
  [SMALL_STATE(493)] = 21237,
  [SMALL_STATE(494)] = 21245,
  [SMALL_STATE(495)] = 21253,
  [SMALL_STATE(496)] = 21261,
  [SMALL_STATE(497)] = 21271,
  [SMALL_STATE(498)] = 21281,
  [SMALL_STATE(499)] = 21289,
  [SMALL_STATE(500)] = 21297,
  [SMALL_STATE(501)] = 21307,
  [SMALL_STATE(502)] = 21317,
  [SMALL_STATE(503)] = 21325,
  [SMALL_STATE(504)] = 21333,
  [SMALL_STATE(505)] = 21341,
  [SMALL_STATE(506)] = 21349,
  [SMALL_STATE(507)] = 21357,
  [SMALL_STATE(508)] = 21365,
  [SMALL_STATE(509)] = 21373,
  [SMALL_STATE(510)] = 21381,
  [SMALL_STATE(511)] = 21389,
  [SMALL_STATE(512)] = 21397,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 2, 0, 5),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, 0, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat2, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat2, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(497),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(490),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(500),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(501),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(388),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(360),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(512),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2, 0, 9),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operands, 2, 0, 9),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 3, 0, 14),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operands, 3, 0, 14),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 4, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 4, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 2, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label, 2, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitwise_or_expression, 3, 0, 22),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitwise_or_expression, 3, 0, 22),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 11),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 11),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 11),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 11),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 11),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 11),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 11),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 11),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 11),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 11),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_multiplicative_expression, 1, 0, 11),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_multiplicative_expression, 1, 0, 11),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 13),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, 0, 13),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 11),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 11),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 15),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 3, 0, 15),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assignment_expression, 3, 0, 22),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__assignment_expression, 3, 0, 22),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal, 1, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 11),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 11),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 11),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 11),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 11),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 11),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 11),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 11),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 18),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 3, 0, 18),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 19),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 19),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logical_or_expression, 3, 0, 22),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__logical_or_expression, 3, 0, 22),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logical_and_expression, 3, 0, 22),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__logical_and_expression, 3, 0, 22),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 0),
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
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_label_reference, 1, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_label_reference, 1, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 3, 0, 15),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_expression, 3, 0, 15),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_operands, 1, 0, 0),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_operands, 1, 0, 0),
  [535] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_numeric_operands, 1, 0, 0), SHIFT(460),
  [538] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_numeric_operands, 1, 0, 0), SHIFT(402),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_expression, 1, 0, 0),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_expression, 1, 0, 0),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_operands, 2, 0, 0),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_operands, 2, 0, 0),
  [605] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_numeric_operands, 2, 0, 0), SHIFT(460),
  [608] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_numeric_operands, 2, 0, 0), SHIFT(402),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0),
  [639] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(460),
  [642] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(402),
  [645] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [648] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 3, 0, 0),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 3, 0, 0),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 4, 0, 0),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 4, 0, 0),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_operand, 1, 0, 0),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat2, 2, 0, 0),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat2, 2, 0, 0),
  [665] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat2, 2, 0, 0), SHIFT_REPEAT(348),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_operands, 3, 0, 0),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_operands, 3, 0, 0),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_directive, 3, 0, 12),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__numeric_directive, 3, 0, 12),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_operands, 1, 0, 0),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_operand, 1, 0, 0),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operand, 1, 0, 0),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_directive, 4, 0, 12),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__numeric_directive, 4, 0, 12),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0),
  [702] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_operands, 2, 0, 0),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__numeric_directive_repeat1, 2, 0, 0),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__numeric_directive_repeat1, 2, 0, 0),
  [711] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__numeric_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(359),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 1),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 1),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2, 0, 14),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operands, 2, 0, 14),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_parameters, 2, 0, 0),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_parameters, 2, 0, 0),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 1, 0, 9),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operands, 1, 0, 9),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0),
  [748] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(450),
  [751] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(479),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_parameters, 1, 0, 0),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_parameters, 1, 0, 0),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 21),
  [760] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 21),
  [762] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 21), SHIFT_REPEAT(26),
  [765] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 21), SHIFT_REPEAT(26),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 3, 0, 0),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 3, 0, 0),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_type, 1, 0, 0),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_flag, 1, 0, 0),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 20),
  [784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 20),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 3, 0, 7),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 3, 0, 7),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [804] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_macro_parameters, 2, 0, 0), SHIFT(448),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 2, 0, 0),
  [815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_expression, 2, 0, 0),
  [817] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(248),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [822] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(231),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_mnemonic, 1, 0, 0),
  [833] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_mnemonic, 1, 0, 0),
  [835] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(134),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 6),
  [840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, 0, 6),
  [842] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(304),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [849] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(211),
  [852] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(448),
  [855] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(470),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 1, 0, 5),
  [860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_directive, 1, 0, 5),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 10),
  [866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3, 0, 10),
  [868] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_macro_parameters, 1, 0, 0), SHIFT(448),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 8),
  [873] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3, 0, 8),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 3),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_directive, 4, 0, 16),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 7),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 4),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 17),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [897] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 21), SHIFT_REPEAT(28),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 17),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 2),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [908] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 3, 0, 12),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 8, 0, 26),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 5, 0, 17),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 5, 0, 7),
  [920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 7),
  [926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [928] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [932] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [934] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 26),
  [938] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [940] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [942] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [944] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(430),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment, 1, 0, 0),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [959] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [961] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [965] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [967] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [971] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [995] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [997] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [999] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 0),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1057] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_mnemonic, 1, 0, 0),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_mnemonic, 1, 0, 0),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
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
