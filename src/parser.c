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
#define STATE_COUNT 507
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 154
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
  sym_line_separator = 88,
  sym_data_separator = 89,
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
  sym_string_operands = 100,
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
  aux_sym_string_operands_repeat1 = 150,
  aux_sym_control_operands_repeat1 = 151,
  aux_sym_operands_repeat1 = 152,
  aux_sym_string_repeat1 = 153,
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
  [sym_line_separator] = "line_separator",
  [sym_data_separator] = "data_separator",
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
  [sym_line_separator] = sym_line_separator,
  [sym_data_separator] = sym_data_separator,
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
  [sym_line_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_data_separator] = {
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
  [46] = 33,
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
  [57] = 33,
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
  [68] = 33,
  [69] = 35,
  [70] = 36,
  [71] = 37,
  [72] = 38,
  [73] = 39,
  [74] = 40,
  [75] = 41,
  [76] = 42,
  [77] = 43,
  [78] = 33,
  [79] = 34,
  [80] = 35,
  [81] = 36,
  [82] = 37,
  [83] = 38,
  [84] = 39,
  [85] = 40,
  [86] = 41,
  [87] = 42,
  [88] = 43,
  [89] = 30,
  [90] = 33,
  [91] = 33,
  [92] = 33,
  [93] = 33,
  [94] = 33,
  [95] = 30,
  [96] = 30,
  [97] = 30,
  [98] = 31,
  [99] = 31,
  [100] = 31,
  [101] = 34,
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
  [149] = 108,
  [150] = 137,
  [151] = 138,
  [152] = 139,
  [153] = 140,
  [154] = 141,
  [155] = 142,
  [156] = 143,
  [157] = 144,
  [158] = 145,
  [159] = 146,
  [160] = 147,
  [161] = 121,
  [162] = 126,
  [163] = 132,
  [164] = 133,
  [165] = 134,
  [166] = 135,
  [167] = 107,
  [168] = 109,
  [169] = 136,
  [170] = 111,
  [171] = 112,
  [172] = 113,
  [173] = 114,
  [174] = 115,
  [175] = 116,
  [176] = 117,
  [177] = 118,
  [178] = 119,
  [179] = 120,
  [180] = 106,
  [181] = 122,
  [182] = 123,
  [183] = 124,
  [184] = 125,
  [185] = 148,
  [186] = 127,
  [187] = 128,
  [188] = 129,
  [189] = 130,
  [190] = 131,
  [191] = 110,
  [192] = 142,
  [193] = 138,
  [194] = 139,
  [195] = 112,
  [196] = 129,
  [197] = 110,
  [198] = 130,
  [199] = 131,
  [200] = 143,
  [201] = 113,
  [202] = 144,
  [203] = 114,
  [204] = 119,
  [205] = 120,
  [206] = 137,
  [207] = 115,
  [208] = 111,
  [209] = 136,
  [210] = 122,
  [211] = 106,
  [212] = 128,
  [213] = 145,
  [214] = 123,
  [215] = 141,
  [216] = 116,
  [217] = 217,
  [218] = 117,
  [219] = 118,
  [220] = 146,
  [221] = 147,
  [222] = 124,
  [223] = 121,
  [224] = 126,
  [225] = 127,
  [226] = 132,
  [227] = 133,
  [228] = 125,
  [229] = 134,
  [230] = 135,
  [231] = 148,
  [232] = 107,
  [233] = 108,
  [234] = 109,
  [235] = 140,
  [236] = 116,
  [237] = 137,
  [238] = 130,
  [239] = 239,
  [240] = 131,
  [241] = 241,
  [242] = 148,
  [243] = 127,
  [244] = 128,
  [245] = 129,
  [246] = 130,
  [247] = 131,
  [248] = 248,
  [249] = 137,
  [250] = 124,
  [251] = 138,
  [252] = 139,
  [253] = 140,
  [254] = 141,
  [255] = 142,
  [256] = 143,
  [257] = 144,
  [258] = 145,
  [259] = 146,
  [260] = 147,
  [261] = 121,
  [262] = 126,
  [263] = 132,
  [264] = 133,
  [265] = 134,
  [266] = 135,
  [267] = 107,
  [268] = 108,
  [269] = 109,
  [270] = 110,
  [271] = 111,
  [272] = 112,
  [273] = 113,
  [274] = 114,
  [275] = 115,
  [276] = 136,
  [277] = 241,
  [278] = 248,
  [279] = 241,
  [280] = 241,
  [281] = 248,
  [282] = 241,
  [283] = 248,
  [284] = 248,
  [285] = 241,
  [286] = 248,
  [287] = 116,
  [288] = 117,
  [289] = 118,
  [290] = 119,
  [291] = 120,
  [292] = 106,
  [293] = 122,
  [294] = 123,
  [295] = 125,
  [296] = 296,
  [297] = 107,
  [298] = 148,
  [299] = 138,
  [300] = 139,
  [301] = 140,
  [302] = 141,
  [303] = 142,
  [304] = 143,
  [305] = 144,
  [306] = 145,
  [307] = 146,
  [308] = 147,
  [309] = 121,
  [310] = 126,
  [311] = 132,
  [312] = 133,
  [313] = 134,
  [314] = 135,
  [315] = 127,
  [316] = 108,
  [317] = 128,
  [318] = 110,
  [319] = 111,
  [320] = 116,
  [321] = 137,
  [322] = 130,
  [323] = 131,
  [324] = 112,
  [325] = 136,
  [326] = 113,
  [327] = 114,
  [328] = 115,
  [329] = 129,
  [330] = 117,
  [331] = 118,
  [332] = 119,
  [333] = 120,
  [334] = 106,
  [335] = 122,
  [336] = 123,
  [337] = 124,
  [338] = 125,
  [339] = 109,
  [340] = 136,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 136,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 136,
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
  [370] = 369,
  [371] = 371,
  [372] = 356,
  [373] = 373,
  [374] = 374,
  [375] = 356,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 369,
  [381] = 381,
  [382] = 136,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 354,
  [389] = 389,
  [390] = 386,
  [391] = 391,
  [392] = 386,
  [393] = 386,
  [394] = 386,
  [395] = 395,
  [396] = 355,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 362,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 403,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 409,
  [416] = 416,
  [417] = 403,
  [418] = 357,
  [419] = 419,
  [420] = 409,
  [421] = 403,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 367,
  [427] = 427,
  [428] = 428,
  [429] = 360,
  [430] = 371,
  [431] = 136,
  [432] = 432,
  [433] = 409,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 435,
  [438] = 374,
  [439] = 356,
  [440] = 376,
  [441] = 441,
  [442] = 435,
  [443] = 435,
  [444] = 377,
  [445] = 369,
  [446] = 435,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 454,
  [456] = 456,
  [457] = 454,
  [458] = 454,
  [459] = 454,
  [460] = 456,
  [461] = 461,
  [462] = 449,
  [463] = 449,
  [464] = 449,
  [465] = 449,
  [466] = 449,
  [467] = 467,
  [468] = 468,
  [469] = 468,
  [470] = 468,
  [471] = 467,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 467,
  [477] = 477,
  [478] = 474,
  [479] = 479,
  [480] = 480,
  [481] = 474,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 474,
  [486] = 474,
  [487] = 467,
  [488] = 472,
  [489] = 489,
  [490] = 468,
  [491] = 491,
  [492] = 492,
  [493] = 489,
  [494] = 494,
  [495] = 468,
  [496] = 496,
  [497] = 492,
  [498] = 498,
  [499] = 492,
  [500] = 467,
  [501] = 492,
  [502] = 502,
  [503] = 492,
  [504] = 467,
  [505] = 474,
  [506] = 506,
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
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '/') ADVANCE(27);
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
      if (lookahead == '\n') SKIP(33);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(33);
      if (lookahead == '\r') SKIP(16);
      if (lookahead == 'U') ADVANCE(73);
      if (lookahead == 'u') ADVANCE(69);
      if (lookahead == 'x') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(464);
      if (set_contains(sym__escape_sequence_character_set_1, 12, lookahead)) ADVANCE(462);
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
      if (lookahead == '\\') ADVANCE(17);
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
      if (lookahead == '\r') ADVANCE(13);
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
        '"', 458,
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
      if (lookahead == '\r') ADVANCE(13);
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
      if (lookahead == '\\') ADVANCE(17);
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
  [7] = {.lex_state = 95, .external_lex_state = 3},
  [8] = {.lex_state = 96, .external_lex_state = 2},
  [9] = {.lex_state = 95, .external_lex_state = 2},
  [10] = {.lex_state = 95, .external_lex_state = 3},
  [11] = {.lex_state = 95, .external_lex_state = 2},
  [12] = {.lex_state = 95, .external_lex_state = 4},
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
  [346] = {.lex_state = 97, .external_lex_state = 3},
  [347] = {.lex_state = 97, .external_lex_state = 3},
  [348] = {.lex_state = 96, .external_lex_state = 1},
  [349] = {.lex_state = 97, .external_lex_state = 3},
  [350] = {.lex_state = 96, .external_lex_state = 1},
  [351] = {.lex_state = 96, .external_lex_state = 1},
  [352] = {.lex_state = 96, .external_lex_state = 1},
  [353] = {.lex_state = 0, .external_lex_state = 5},
  [354] = {.lex_state = 0, .external_lex_state = 5},
  [355] = {.lex_state = 97, .external_lex_state = 3},
  [356] = {.lex_state = 97, .external_lex_state = 3},
  [357] = {.lex_state = 97, .external_lex_state = 3},
  [358] = {.lex_state = 77, .external_lex_state = 3},
  [359] = {.lex_state = 97, .external_lex_state = 3},
  [360] = {.lex_state = 0, .external_lex_state = 5},
  [361] = {.lex_state = 96, .external_lex_state = 1},
  [362] = {.lex_state = 0, .external_lex_state = 5},
  [363] = {.lex_state = 96, .external_lex_state = 1},
  [364] = {.lex_state = 96, .external_lex_state = 1},
  [365] = {.lex_state = 97, .external_lex_state = 3},
  [366] = {.lex_state = 77, .external_lex_state = 3},
  [367] = {.lex_state = 97, .external_lex_state = 3},
  [368] = {.lex_state = 77, .external_lex_state = 3},
  [369] = {.lex_state = 97, .external_lex_state = 3},
  [370] = {.lex_state = 96, .external_lex_state = 1},
  [371] = {.lex_state = 0, .external_lex_state = 5},
  [372] = {.lex_state = 96, .external_lex_state = 1},
  [373] = {.lex_state = 77, .external_lex_state = 3},
  [374] = {.lex_state = 97, .external_lex_state = 3},
  [375] = {.lex_state = 0, .external_lex_state = 5},
  [376] = {.lex_state = 0, .external_lex_state = 5},
  [377] = {.lex_state = 97, .external_lex_state = 3},
  [378] = {.lex_state = 0, .external_lex_state = 4},
  [379] = {.lex_state = 0, .external_lex_state = 4},
  [380] = {.lex_state = 0, .external_lex_state = 5},
  [381] = {.lex_state = 0, .external_lex_state = 4},
  [382] = {.lex_state = 0, .external_lex_state = 6},
  [383] = {.lex_state = 97, .external_lex_state = 3},
  [384] = {.lex_state = 97, .external_lex_state = 3},
  [385] = {.lex_state = 97, .external_lex_state = 3},
  [386] = {.lex_state = 0, .external_lex_state = 6},
  [387] = {.lex_state = 97, .external_lex_state = 3},
  [388] = {.lex_state = 0, .external_lex_state = 6},
  [389] = {.lex_state = 97, .external_lex_state = 3},
  [390] = {.lex_state = 0, .external_lex_state = 6},
  [391] = {.lex_state = 97, .external_lex_state = 3},
  [392] = {.lex_state = 0, .external_lex_state = 6},
  [393] = {.lex_state = 0, .external_lex_state = 6},
  [394] = {.lex_state = 0, .external_lex_state = 6},
  [395] = {.lex_state = 24, .external_lex_state = 2},
  [396] = {.lex_state = 97, .external_lex_state = 2},
  [397] = {.lex_state = 0, .external_lex_state = 3},
  [398] = {.lex_state = 0, .external_lex_state = 3},
  [399] = {.lex_state = 0, .external_lex_state = 3},
  [400] = {.lex_state = 0, .external_lex_state = 3},
  [401] = {.lex_state = 0, .external_lex_state = 3},
  [402] = {.lex_state = 0, .external_lex_state = 3},
  [403] = {.lex_state = 24, .external_lex_state = 2},
  [404] = {.lex_state = 0, .external_lex_state = 3},
  [405] = {.lex_state = 0, .external_lex_state = 3},
  [406] = {.lex_state = 0, .external_lex_state = 3},
  [407] = {.lex_state = 0, .external_lex_state = 6},
  [408] = {.lex_state = 0, .external_lex_state = 3},
  [409] = {.lex_state = 24, .external_lex_state = 2},
  [410] = {.lex_state = 0, .external_lex_state = 3},
  [411] = {.lex_state = 24, .external_lex_state = 2},
  [412] = {.lex_state = 0, .external_lex_state = 3},
  [413] = {.lex_state = 0, .external_lex_state = 3},
  [414] = {.lex_state = 0, .external_lex_state = 3},
  [415] = {.lex_state = 24, .external_lex_state = 2},
  [416] = {.lex_state = 0, .external_lex_state = 3},
  [417] = {.lex_state = 24, .external_lex_state = 2},
  [418] = {.lex_state = 97, .external_lex_state = 2},
  [419] = {.lex_state = 0, .external_lex_state = 3},
  [420] = {.lex_state = 24, .external_lex_state = 2},
  [421] = {.lex_state = 24, .external_lex_state = 2},
  [422] = {.lex_state = 26, .external_lex_state = 2},
  [423] = {.lex_state = 0, .external_lex_state = 3},
  [424] = {.lex_state = 0, .external_lex_state = 3},
  [425] = {.lex_state = 0, .external_lex_state = 3},
  [426] = {.lex_state = 97, .external_lex_state = 2},
  [427] = {.lex_state = 0, .external_lex_state = 3},
  [428] = {.lex_state = 0, .external_lex_state = 3},
  [429] = {.lex_state = 0, .external_lex_state = 6},
  [430] = {.lex_state = 0, .external_lex_state = 6},
  [431] = {.lex_state = 0, .external_lex_state = 2},
  [432] = {.lex_state = 0, .external_lex_state = 3},
  [433] = {.lex_state = 24, .external_lex_state = 2},
  [434] = {.lex_state = 26, .external_lex_state = 2},
  [435] = {.lex_state = 0, .external_lex_state = 2},
  [436] = {.lex_state = 25, .external_lex_state = 2},
  [437] = {.lex_state = 0, .external_lex_state = 2},
  [438] = {.lex_state = 97, .external_lex_state = 2},
  [439] = {.lex_state = 0, .external_lex_state = 6},
  [440] = {.lex_state = 0, .external_lex_state = 6},
  [441] = {.lex_state = 0, .external_lex_state = 3},
  [442] = {.lex_state = 0, .external_lex_state = 2},
  [443] = {.lex_state = 0, .external_lex_state = 2},
  [444] = {.lex_state = 97, .external_lex_state = 2},
  [445] = {.lex_state = 0, .external_lex_state = 6},
  [446] = {.lex_state = 0, .external_lex_state = 2},
  [447] = {.lex_state = 97, .external_lex_state = 2},
  [448] = {.lex_state = 0, .external_lex_state = 2},
  [449] = {.lex_state = 0, .external_lex_state = 2},
  [450] = {.lex_state = 0, .external_lex_state = 3},
  [451] = {.lex_state = 94, .external_lex_state = 2},
  [452] = {.lex_state = 0, .external_lex_state = 3},
  [453] = {.lex_state = 94, .external_lex_state = 2},
  [454] = {.lex_state = 33, .external_lex_state = 2},
  [455] = {.lex_state = 33, .external_lex_state = 2},
  [456] = {.lex_state = 25, .external_lex_state = 2},
  [457] = {.lex_state = 33, .external_lex_state = 2},
  [458] = {.lex_state = 33, .external_lex_state = 2},
  [459] = {.lex_state = 33, .external_lex_state = 2},
  [460] = {.lex_state = 25, .external_lex_state = 2},
  [461] = {.lex_state = 97, .external_lex_state = 2},
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
  [472] = {.lex_state = 25, .external_lex_state = 2},
  [473] = {.lex_state = 99, .external_lex_state = 2},
  [474] = {.lex_state = 0, .external_lex_state = 2},
  [475] = {.lex_state = 0, .external_lex_state = 2},
  [476] = {.lex_state = 0, .external_lex_state = 2},
  [477] = {.lex_state = 0, .external_lex_state = 2},
  [478] = {.lex_state = 0, .external_lex_state = 2},
  [479] = {.lex_state = 0, .external_lex_state = 2},
  [480] = {.lex_state = 97, .external_lex_state = 2},
  [481] = {.lex_state = 0, .external_lex_state = 2},
  [482] = {.lex_state = 97, .external_lex_state = 2},
  [483] = {.lex_state = 0, .external_lex_state = 2},
  [484] = {.lex_state = 0, .external_lex_state = 2},
  [485] = {.lex_state = 0, .external_lex_state = 2},
  [486] = {.lex_state = 0, .external_lex_state = 2},
  [487] = {.lex_state = 0, .external_lex_state = 2},
  [488] = {.lex_state = 25, .external_lex_state = 2},
  [489] = {.lex_state = 25, .external_lex_state = 2},
  [490] = {.lex_state = 0, .external_lex_state = 2},
  [491] = {.lex_state = 0, .external_lex_state = 3},
  [492] = {.lex_state = 0, .external_lex_state = 2},
  [493] = {.lex_state = 25, .external_lex_state = 2},
  [494] = {.lex_state = 0, .external_lex_state = 2},
  [495] = {.lex_state = 0, .external_lex_state = 2},
  [496] = {.lex_state = 0, .external_lex_state = 2},
  [497] = {.lex_state = 0, .external_lex_state = 2},
  [498] = {.lex_state = 94, .external_lex_state = 2},
  [499] = {.lex_state = 0, .external_lex_state = 2},
  [500] = {.lex_state = 0, .external_lex_state = 2},
  [501] = {.lex_state = 0, .external_lex_state = 2},
  [502] = {.lex_state = 97, .external_lex_state = 2},
  [503] = {.lex_state = 0, .external_lex_state = 2},
  [504] = {.lex_state = 0, .external_lex_state = 2},
  [505] = {.lex_state = 0, .external_lex_state = 2},
  [506] = {.lex_state = 0, .external_lex_state = 2},
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
    [sym_line_separator] = ACTIONS(1),
    [sym_data_separator] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(479),
    [sym__statement] = STATE(5),
    [sym_directive] = STATE(399),
    [sym__macro_directive] = STATE(410),
    [sym__numeric_directive] = STATE(397),
    [sym_numeric_mnemonic] = STATE(385),
    [sym__string_directive] = STATE(423),
    [sym_string_mnemonic] = STATE(482),
    [sym__control_directive] = STATE(412),
    [sym_control_mnemonic] = STATE(389),
    [sym_instruction] = STATE(399),
    [sym__label] = STATE(5),
    [aux_sym_program_repeat1] = STATE(5),
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
    STATE(149), 1,
      sym__wrapped_relational_expression,
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
      sym__shift_expression,
    STATE(170), 1,
      sym__additive_expression,
    STATE(171), 1,
      sym__wrapped_additive_expression,
    STATE(172), 1,
      sym__multiplicative_expression,
    STATE(191), 1,
      sym__wrapped_shift_expression,
    STATE(351), 1,
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
      sym_line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
    STATE(352), 4,
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
    STATE(173), 10,
      sym__wrapped_multiplicative_expression,
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
    STATE(192), 1,
      sym__logical_or_expression,
    STATE(195), 1,
      sym__wrapped_additive_expression,
    STATE(197), 1,
      sym__wrapped_shift_expression,
    STATE(200), 1,
      sym__wrapped_logical_or_expression,
    STATE(201), 1,
      sym__multiplicative_expression,
    STATE(202), 1,
      sym__logical_and_expression,
    STATE(208), 1,
      sym__additive_expression,
    STATE(213), 1,
      sym__wrapped_logical_and_expression,
    STATE(215), 1,
      sym__assignment_expression,
    STATE(220), 1,
      sym__bitwise_or_expression,
    STATE(221), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(223), 1,
      sym__bitwise_xor_expression,
    STATE(224), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(226), 1,
      sym__bitwise_and_expression,
    STATE(227), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(229), 1,
      sym__equality_expression,
    STATE(230), 1,
      sym__wrapped_equality_expression,
    STATE(232), 1,
      sym__relational_expression,
    STATE(233), 1,
      sym__wrapped_relational_expression,
    STATE(234), 1,
      sym__shift_expression,
    STATE(354), 1,
      sym__wrapped_assignment_expression,
    STATE(406), 1,
      sym__call_expression,
    STATE(419), 1,
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
    STATE(371), 2,
      sym__operand,
      sym_string,
    ACTIONS(53), 4,
      sym_line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(63), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(203), 10,
      sym__wrapped_multiplicative_expression,
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
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 1,
      sym_line_comment,
    ACTIONS(85), 1,
      sym_macro_mnemonic,
    ACTIONS(94), 1,
      aux_sym_control_mnemonic_token1,
    ACTIONS(97), 1,
      sym_opcode,
    STATE(385), 1,
      sym_numeric_mnemonic,
    STATE(389), 1,
      sym_control_mnemonic,
    STATE(397), 1,
      sym__numeric_directive,
    STATE(410), 1,
      sym__macro_directive,
    STATE(412), 1,
      sym__control_directive,
    STATE(423), 1,
      sym__string_directive,
    STATE(482), 1,
      sym_string_mnemonic,
    STATE(441), 2,
      sym_directive,
      sym_instruction,
    ACTIONS(79), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
    STATE(4), 3,
      sym__statement,
      sym__label,
      aux_sym_program_repeat1,
    ACTIONS(100), 4,
      sym_local_label,
      sym_global_label,
      sym_global_numeric_label,
      sym_local_numeric_label,
    ACTIONS(91), 5,
      anon_sym_DOTasciz,
      anon_sym_DOTascii,
      anon_sym_DOTasciiz,
      anon_sym_DOTstring,
      anon_sym_DOTstringz,
    ACTIONS(88), 26,
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
    ACTIONS(13), 1,
      sym_macro_mnemonic,
    ACTIONS(19), 1,
      aux_sym_control_mnemonic_token1,
    ACTIONS(21), 1,
      sym_opcode,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 1,
      sym_line_comment,
    STATE(385), 1,
      sym_numeric_mnemonic,
    STATE(389), 1,
      sym_control_mnemonic,
    STATE(397), 1,
      sym__numeric_directive,
    STATE(410), 1,
      sym__macro_directive,
    STATE(412), 1,
      sym__control_directive,
    STATE(423), 1,
      sym__string_directive,
    STATE(482), 1,
      sym_string_mnemonic,
    STATE(401), 2,
      sym_directive,
      sym_instruction,
    ACTIONS(105), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
    STATE(4), 3,
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
    STATE(192), 1,
      sym__logical_or_expression,
    STATE(195), 1,
      sym__wrapped_additive_expression,
    STATE(197), 1,
      sym__wrapped_shift_expression,
    STATE(200), 1,
      sym__wrapped_logical_or_expression,
    STATE(201), 1,
      sym__multiplicative_expression,
    STATE(202), 1,
      sym__logical_and_expression,
    STATE(208), 1,
      sym__additive_expression,
    STATE(213), 1,
      sym__wrapped_logical_and_expression,
    STATE(215), 1,
      sym__assignment_expression,
    STATE(220), 1,
      sym__bitwise_or_expression,
    STATE(221), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(223), 1,
      sym__bitwise_xor_expression,
    STATE(224), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(226), 1,
      sym__bitwise_and_expression,
    STATE(227), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(229), 1,
      sym__equality_expression,
    STATE(230), 1,
      sym__wrapped_equality_expression,
    STATE(232), 1,
      sym__relational_expression,
    STATE(233), 1,
      sym__wrapped_relational_expression,
    STATE(234), 1,
      sym__shift_expression,
    STATE(354), 1,
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
    STATE(376), 2,
      sym__operand,
      sym_string,
    ACTIONS(109), 4,
      sym_line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(63), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(203), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [600] = 36,
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
    STATE(192), 1,
      sym__logical_or_expression,
    STATE(195), 1,
      sym__wrapped_additive_expression,
    STATE(197), 1,
      sym__wrapped_shift_expression,
    STATE(200), 1,
      sym__wrapped_logical_or_expression,
    STATE(201), 1,
      sym__multiplicative_expression,
    STATE(202), 1,
      sym__logical_and_expression,
    STATE(208), 1,
      sym__additive_expression,
    STATE(213), 1,
      sym__wrapped_logical_and_expression,
    STATE(215), 1,
      sym__assignment_expression,
    STATE(220), 1,
      sym__bitwise_or_expression,
    STATE(221), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(223), 1,
      sym__bitwise_xor_expression,
    STATE(224), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(226), 1,
      sym__bitwise_and_expression,
    STATE(227), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(229), 1,
      sym__equality_expression,
    STATE(230), 1,
      sym__wrapped_equality_expression,
    STATE(232), 1,
      sym__relational_expression,
    STATE(233), 1,
      sym__wrapped_relational_expression,
    STATE(234), 1,
      sym__shift_expression,
    STATE(354), 1,
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
    STATE(376), 2,
      sym__operand,
      sym_string,
    ACTIONS(113), 4,
      sym_line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(63), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(203), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [729] = 37,
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
    STATE(149), 1,
      sym__wrapped_relational_expression,
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
      sym__shift_expression,
    STATE(170), 1,
      sym__additive_expression,
    STATE(171), 1,
      sym__wrapped_additive_expression,
    STATE(172), 1,
      sym__multiplicative_expression,
    STATE(191), 1,
      sym__wrapped_shift_expression,
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
    STATE(173), 10,
      sym__wrapped_multiplicative_expression,
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
    STATE(254), 1,
      sym__assignment_expression,
    STATE(255), 1,
      sym__logical_or_expression,
    STATE(256), 1,
      sym__wrapped_logical_or_expression,
    STATE(257), 1,
      sym__logical_and_expression,
    STATE(258), 1,
      sym__wrapped_logical_and_expression,
    STATE(259), 1,
      sym__bitwise_or_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(261), 1,
      sym__bitwise_xor_expression,
    STATE(262), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(263), 1,
      sym__bitwise_and_expression,
    STATE(264), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(265), 1,
      sym__equality_expression,
    STATE(266), 1,
      sym__wrapped_equality_expression,
    STATE(267), 1,
      sym__relational_expression,
    STATE(268), 1,
      sym__wrapped_relational_expression,
    STATE(269), 1,
      sym__shift_expression,
    STATE(270), 1,
      sym__wrapped_shift_expression,
    STATE(271), 1,
      sym__additive_expression,
    STATE(272), 1,
      sym__wrapped_additive_expression,
    STATE(273), 1,
      sym__multiplicative_expression,
    STATE(388), 1,
      sym__wrapped_assignment_expression,
    STATE(506), 1,
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
    STATE(430), 2,
      sym__operand,
      sym_string,
    ACTIONS(125), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(274), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [989] = 35,
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
    STATE(107), 1,
      sym__relational_expression,
    STATE(108), 1,
      sym__wrapped_relational_expression,
    STATE(109), 1,
      sym__shift_expression,
    STATE(110), 1,
      sym__wrapped_shift_expression,
    STATE(111), 1,
      sym__additive_expression,
    STATE(112), 1,
      sym__wrapped_additive_expression,
    STATE(113), 1,
      sym__multiplicative_expression,
    STATE(121), 1,
      sym__bitwise_xor_expression,
    STATE(126), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(132), 1,
      sym__bitwise_and_expression,
    STATE(133), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(134), 1,
      sym__equality_expression,
    STATE(135), 1,
      sym__wrapped_equality_expression,
    STATE(141), 1,
      sym__assignment_expression,
    STATE(142), 1,
      sym__logical_or_expression,
    STATE(143), 1,
      sym__wrapped_logical_or_expression,
    STATE(144), 1,
      sym__logical_and_expression,
    STATE(145), 1,
      sym__wrapped_logical_and_expression,
    STATE(146), 1,
      sym__bitwise_or_expression,
    STATE(147), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(296), 1,
      sym__wrapped_assignment_expression,
    STATE(408), 1,
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
    ACTIONS(139), 4,
      sym_line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(149), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(114), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1114] = 39,
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
    STATE(254), 1,
      sym__assignment_expression,
    STATE(255), 1,
      sym__logical_or_expression,
    STATE(256), 1,
      sym__wrapped_logical_or_expression,
    STATE(257), 1,
      sym__logical_and_expression,
    STATE(258), 1,
      sym__wrapped_logical_and_expression,
    STATE(259), 1,
      sym__bitwise_or_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(261), 1,
      sym__bitwise_xor_expression,
    STATE(262), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(263), 1,
      sym__bitwise_and_expression,
    STATE(264), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(265), 1,
      sym__equality_expression,
    STATE(266), 1,
      sym__wrapped_equality_expression,
    STATE(267), 1,
      sym__relational_expression,
    STATE(268), 1,
      sym__wrapped_relational_expression,
    STATE(269), 1,
      sym__shift_expression,
    STATE(270), 1,
      sym__wrapped_shift_expression,
    STATE(271), 1,
      sym__additive_expression,
    STATE(272), 1,
      sym__wrapped_additive_expression,
    STATE(273), 1,
      sym__multiplicative_expression,
    STATE(279), 1,
      sym_symbol,
    STATE(392), 1,
      sym__wrapped_assignment_expression,
    STATE(496), 1,
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
    STATE(430), 2,
      sym__operand,
      sym_string,
    ACTIONS(125), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(274), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1247] = 34,
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
    STATE(107), 1,
      sym__relational_expression,
    STATE(108), 1,
      sym__wrapped_relational_expression,
    STATE(109), 1,
      sym__shift_expression,
    STATE(110), 1,
      sym__wrapped_shift_expression,
    STATE(111), 1,
      sym__additive_expression,
    STATE(112), 1,
      sym__wrapped_additive_expression,
    STATE(113), 1,
      sym__multiplicative_expression,
    STATE(121), 1,
      sym__bitwise_xor_expression,
    STATE(126), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(132), 1,
      sym__bitwise_and_expression,
    STATE(133), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(134), 1,
      sym__equality_expression,
    STATE(135), 1,
      sym__wrapped_equality_expression,
    STATE(141), 1,
      sym__assignment_expression,
    STATE(142), 1,
      sym__logical_or_expression,
    STATE(143), 1,
      sym__wrapped_logical_or_expression,
    STATE(144), 1,
      sym__logical_and_expression,
    STATE(145), 1,
      sym__wrapped_logical_and_expression,
    STATE(146), 1,
      sym__bitwise_or_expression,
    STATE(147), 1,
      sym__wrapped_bitwise_or_expression,
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
    ACTIONS(163), 5,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
    STATE(114), 10,
      sym__wrapped_multiplicative_expression,
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
    STATE(254), 1,
      sym__assignment_expression,
    STATE(255), 1,
      sym__logical_or_expression,
    STATE(256), 1,
      sym__wrapped_logical_or_expression,
    STATE(257), 1,
      sym__logical_and_expression,
    STATE(258), 1,
      sym__wrapped_logical_and_expression,
    STATE(259), 1,
      sym__bitwise_or_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(261), 1,
      sym__bitwise_xor_expression,
    STATE(262), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(263), 1,
      sym__bitwise_and_expression,
    STATE(264), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(265), 1,
      sym__equality_expression,
    STATE(266), 1,
      sym__wrapped_equality_expression,
    STATE(267), 1,
      sym__relational_expression,
    STATE(268), 1,
      sym__wrapped_relational_expression,
    STATE(269), 1,
      sym__shift_expression,
    STATE(270), 1,
      sym__wrapped_shift_expression,
    STATE(271), 1,
      sym__additive_expression,
    STATE(272), 1,
      sym__wrapped_additive_expression,
    STATE(273), 1,
      sym__multiplicative_expression,
    STATE(286), 1,
      sym_symbol,
    STATE(388), 1,
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
    STATE(430), 2,
      sym__operand,
      sym_string,
    ACTIONS(125), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(274), 9,
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
    STATE(254), 1,
      sym__assignment_expression,
    STATE(255), 1,
      sym__logical_or_expression,
    STATE(256), 1,
      sym__wrapped_logical_or_expression,
    STATE(257), 1,
      sym__logical_and_expression,
    STATE(258), 1,
      sym__wrapped_logical_and_expression,
    STATE(259), 1,
      sym__bitwise_or_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(261), 1,
      sym__bitwise_xor_expression,
    STATE(262), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(263), 1,
      sym__bitwise_and_expression,
    STATE(264), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(265), 1,
      sym__equality_expression,
    STATE(266), 1,
      sym__wrapped_equality_expression,
    STATE(267), 1,
      sym__relational_expression,
    STATE(268), 1,
      sym__wrapped_relational_expression,
    STATE(269), 1,
      sym__shift_expression,
    STATE(270), 1,
      sym__wrapped_shift_expression,
    STATE(271), 1,
      sym__additive_expression,
    STATE(272), 1,
      sym__wrapped_additive_expression,
    STATE(273), 1,
      sym__multiplicative_expression,
    STATE(277), 1,
      sym_symbol,
    STATE(390), 1,
      sym__wrapped_assignment_expression,
    STATE(487), 1,
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
    STATE(430), 2,
      sym__operand,
      sym_string,
    ACTIONS(125), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(274), 9,
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
    STATE(248), 1,
      sym_symbol,
    STATE(254), 1,
      sym__assignment_expression,
    STATE(255), 1,
      sym__logical_or_expression,
    STATE(256), 1,
      sym__wrapped_logical_or_expression,
    STATE(257), 1,
      sym__logical_and_expression,
    STATE(258), 1,
      sym__wrapped_logical_and_expression,
    STATE(259), 1,
      sym__bitwise_or_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(261), 1,
      sym__bitwise_xor_expression,
    STATE(262), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(263), 1,
      sym__bitwise_and_expression,
    STATE(264), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(265), 1,
      sym__equality_expression,
    STATE(266), 1,
      sym__wrapped_equality_expression,
    STATE(267), 1,
      sym__relational_expression,
    STATE(268), 1,
      sym__wrapped_relational_expression,
    STATE(269), 1,
      sym__shift_expression,
    STATE(270), 1,
      sym__wrapped_shift_expression,
    STATE(271), 1,
      sym__additive_expression,
    STATE(272), 1,
      sym__wrapped_additive_expression,
    STATE(273), 1,
      sym__multiplicative_expression,
    STATE(388), 1,
      sym__wrapped_assignment_expression,
    STATE(481), 1,
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
    STATE(430), 2,
      sym__operand,
      sym_string,
    ACTIONS(125), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(274), 9,
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
    STATE(254), 1,
      sym__assignment_expression,
    STATE(255), 1,
      sym__logical_or_expression,
    STATE(256), 1,
      sym__wrapped_logical_or_expression,
    STATE(257), 1,
      sym__logical_and_expression,
    STATE(258), 1,
      sym__wrapped_logical_and_expression,
    STATE(259), 1,
      sym__bitwise_or_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(261), 1,
      sym__bitwise_xor_expression,
    STATE(262), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(263), 1,
      sym__bitwise_and_expression,
    STATE(264), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(265), 1,
      sym__equality_expression,
    STATE(266), 1,
      sym__wrapped_equality_expression,
    STATE(267), 1,
      sym__relational_expression,
    STATE(268), 1,
      sym__wrapped_relational_expression,
    STATE(269), 1,
      sym__shift_expression,
    STATE(270), 1,
      sym__wrapped_shift_expression,
    STATE(271), 1,
      sym__additive_expression,
    STATE(272), 1,
      sym__wrapped_additive_expression,
    STATE(273), 1,
      sym__multiplicative_expression,
    STATE(278), 1,
      sym_symbol,
    STATE(388), 1,
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
    STATE(430), 2,
      sym__operand,
      sym_string,
    ACTIONS(125), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(274), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1890] = 36,
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
    STATE(254), 1,
      sym__assignment_expression,
    STATE(255), 1,
      sym__logical_or_expression,
    STATE(256), 1,
      sym__wrapped_logical_or_expression,
    STATE(257), 1,
      sym__logical_and_expression,
    STATE(258), 1,
      sym__wrapped_logical_and_expression,
    STATE(259), 1,
      sym__bitwise_or_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(261), 1,
      sym__bitwise_xor_expression,
    STATE(262), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(263), 1,
      sym__bitwise_and_expression,
    STATE(264), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(265), 1,
      sym__equality_expression,
    STATE(266), 1,
      sym__wrapped_equality_expression,
    STATE(267), 1,
      sym__relational_expression,
    STATE(268), 1,
      sym__wrapped_relational_expression,
    STATE(269), 1,
      sym__shift_expression,
    STATE(270), 1,
      sym__wrapped_shift_expression,
    STATE(271), 1,
      sym__additive_expression,
    STATE(272), 1,
      sym__wrapped_additive_expression,
    STATE(273), 1,
      sym__multiplicative_expression,
    STATE(388), 1,
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
    STATE(440), 2,
      sym__operand,
      sym_string,
    ACTIONS(125), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(274), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [2016] = 36,
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
    STATE(254), 1,
      sym__assignment_expression,
    STATE(255), 1,
      sym__logical_or_expression,
    STATE(256), 1,
      sym__wrapped_logical_or_expression,
    STATE(257), 1,
      sym__logical_and_expression,
    STATE(258), 1,
      sym__wrapped_logical_and_expression,
    STATE(259), 1,
      sym__bitwise_or_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(261), 1,
      sym__bitwise_xor_expression,
    STATE(262), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(263), 1,
      sym__bitwise_and_expression,
    STATE(264), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(265), 1,
      sym__equality_expression,
    STATE(266), 1,
      sym__wrapped_equality_expression,
    STATE(267), 1,
      sym__relational_expression,
    STATE(268), 1,
      sym__wrapped_relational_expression,
    STATE(269), 1,
      sym__shift_expression,
    STATE(270), 1,
      sym__wrapped_shift_expression,
    STATE(271), 1,
      sym__additive_expression,
    STATE(272), 1,
      sym__wrapped_additive_expression,
    STATE(273), 1,
      sym__multiplicative_expression,
    STATE(388), 1,
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
    STATE(440), 2,
      sym__operand,
      sym_string,
    ACTIONS(125), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(274), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [2142] = 38,
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
    STATE(254), 1,
      sym__assignment_expression,
    STATE(255), 1,
      sym__logical_or_expression,
    STATE(256), 1,
      sym__wrapped_logical_or_expression,
    STATE(257), 1,
      sym__logical_and_expression,
    STATE(258), 1,
      sym__wrapped_logical_and_expression,
    STATE(259), 1,
      sym__bitwise_or_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(261), 1,
      sym__bitwise_xor_expression,
    STATE(262), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(263), 1,
      sym__bitwise_and_expression,
    STATE(264), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(265), 1,
      sym__equality_expression,
    STATE(266), 1,
      sym__wrapped_equality_expression,
    STATE(267), 1,
      sym__relational_expression,
    STATE(268), 1,
      sym__wrapped_relational_expression,
    STATE(269), 1,
      sym__shift_expression,
    STATE(270), 1,
      sym__wrapped_shift_expression,
    STATE(271), 1,
      sym__additive_expression,
    STATE(272), 1,
      sym__wrapped_additive_expression,
    STATE(273), 1,
      sym__multiplicative_expression,
    STATE(280), 1,
      sym_symbol,
    STATE(393), 1,
      sym__wrapped_assignment_expression,
    STATE(467), 1,
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
    STATE(430), 2,
      sym__operand,
      sym_string,
    ACTIONS(125), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(274), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2272] = 38,
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
    STATE(254), 1,
      sym__assignment_expression,
    STATE(255), 1,
      sym__logical_or_expression,
    STATE(256), 1,
      sym__wrapped_logical_or_expression,
    STATE(257), 1,
      sym__logical_and_expression,
    STATE(258), 1,
      sym__wrapped_logical_and_expression,
    STATE(259), 1,
      sym__bitwise_or_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(261), 1,
      sym__bitwise_xor_expression,
    STATE(262), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(263), 1,
      sym__bitwise_and_expression,
    STATE(264), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(265), 1,
      sym__equality_expression,
    STATE(266), 1,
      sym__wrapped_equality_expression,
    STATE(267), 1,
      sym__relational_expression,
    STATE(268), 1,
      sym__wrapped_relational_expression,
    STATE(269), 1,
      sym__shift_expression,
    STATE(270), 1,
      sym__wrapped_shift_expression,
    STATE(271), 1,
      sym__additive_expression,
    STATE(272), 1,
      sym__wrapped_additive_expression,
    STATE(273), 1,
      sym__multiplicative_expression,
    STATE(281), 1,
      sym_symbol,
    STATE(388), 1,
      sym__wrapped_assignment_expression,
    STATE(486), 1,
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
    STATE(430), 2,
      sym__operand,
      sym_string,
    ACTIONS(125), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(274), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
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
    STATE(254), 1,
      sym__assignment_expression,
    STATE(255), 1,
      sym__logical_or_expression,
    STATE(256), 1,
      sym__wrapped_logical_or_expression,
    STATE(257), 1,
      sym__logical_and_expression,
    STATE(258), 1,
      sym__wrapped_logical_and_expression,
    STATE(259), 1,
      sym__bitwise_or_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(261), 1,
      sym__bitwise_xor_expression,
    STATE(262), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(263), 1,
      sym__bitwise_and_expression,
    STATE(264), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(265), 1,
      sym__equality_expression,
    STATE(266), 1,
      sym__wrapped_equality_expression,
    STATE(267), 1,
      sym__relational_expression,
    STATE(268), 1,
      sym__wrapped_relational_expression,
    STATE(269), 1,
      sym__shift_expression,
    STATE(270), 1,
      sym__wrapped_shift_expression,
    STATE(271), 1,
      sym__additive_expression,
    STATE(272), 1,
      sym__wrapped_additive_expression,
    STATE(273), 1,
      sym__multiplicative_expression,
    STATE(282), 1,
      sym_symbol,
    STATE(394), 1,
      sym__wrapped_assignment_expression,
    STATE(504), 1,
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
    STATE(430), 2,
      sym__operand,
      sym_string,
    ACTIONS(125), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(274), 9,
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
      sym_symbol,
    STATE(254), 1,
      sym__assignment_expression,
    STATE(255), 1,
      sym__logical_or_expression,
    STATE(256), 1,
      sym__wrapped_logical_or_expression,
    STATE(257), 1,
      sym__logical_and_expression,
    STATE(258), 1,
      sym__wrapped_logical_and_expression,
    STATE(259), 1,
      sym__bitwise_or_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(261), 1,
      sym__bitwise_xor_expression,
    STATE(262), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(263), 1,
      sym__bitwise_and_expression,
    STATE(264), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(265), 1,
      sym__equality_expression,
    STATE(266), 1,
      sym__wrapped_equality_expression,
    STATE(267), 1,
      sym__relational_expression,
    STATE(268), 1,
      sym__wrapped_relational_expression,
    STATE(269), 1,
      sym__shift_expression,
    STATE(270), 1,
      sym__wrapped_shift_expression,
    STATE(271), 1,
      sym__additive_expression,
    STATE(272), 1,
      sym__wrapped_additive_expression,
    STATE(273), 1,
      sym__multiplicative_expression,
    STATE(386), 1,
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
    ACTIONS(179), 2,
      sym_register,
      sym_macro_variable,
    STATE(430), 2,
      sym__operand,
      sym_string,
    ACTIONS(125), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(274), 9,
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
    STATE(254), 1,
      sym__assignment_expression,
    STATE(255), 1,
      sym__logical_or_expression,
    STATE(256), 1,
      sym__wrapped_logical_or_expression,
    STATE(257), 1,
      sym__logical_and_expression,
    STATE(258), 1,
      sym__wrapped_logical_and_expression,
    STATE(259), 1,
      sym__bitwise_or_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(261), 1,
      sym__bitwise_xor_expression,
    STATE(262), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(263), 1,
      sym__bitwise_and_expression,
    STATE(264), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(265), 1,
      sym__equality_expression,
    STATE(266), 1,
      sym__wrapped_equality_expression,
    STATE(267), 1,
      sym__relational_expression,
    STATE(268), 1,
      sym__wrapped_relational_expression,
    STATE(269), 1,
      sym__shift_expression,
    STATE(270), 1,
      sym__wrapped_shift_expression,
    STATE(271), 1,
      sym__additive_expression,
    STATE(272), 1,
      sym__wrapped_additive_expression,
    STATE(273), 1,
      sym__multiplicative_expression,
    STATE(279), 1,
      sym_symbol,
    STATE(392), 1,
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
    ACTIONS(161), 2,
      sym_register,
      sym_macro_variable,
    STATE(430), 2,
      sym__operand,
      sym_string,
    ACTIONS(125), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(274), 9,
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
    STATE(254), 1,
      sym__assignment_expression,
    STATE(255), 1,
      sym__logical_or_expression,
    STATE(256), 1,
      sym__wrapped_logical_or_expression,
    STATE(257), 1,
      sym__logical_and_expression,
    STATE(258), 1,
      sym__wrapped_logical_and_expression,
    STATE(259), 1,
      sym__bitwise_or_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(261), 1,
      sym__bitwise_xor_expression,
    STATE(262), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(263), 1,
      sym__bitwise_and_expression,
    STATE(264), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(265), 1,
      sym__equality_expression,
    STATE(266), 1,
      sym__wrapped_equality_expression,
    STATE(267), 1,
      sym__relational_expression,
    STATE(268), 1,
      sym__wrapped_relational_expression,
    STATE(269), 1,
      sym__shift_expression,
    STATE(270), 1,
      sym__wrapped_shift_expression,
    STATE(271), 1,
      sym__additive_expression,
    STATE(272), 1,
      sym__wrapped_additive_expression,
    STATE(273), 1,
      sym__multiplicative_expression,
    STATE(283), 1,
      sym_symbol,
    STATE(388), 1,
      sym__wrapped_assignment_expression,
    STATE(505), 1,
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
    STATE(430), 2,
      sym__operand,
      sym_string,
    ACTIONS(125), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(274), 9,
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
    STATE(254), 1,
      sym__assignment_expression,
    STATE(255), 1,
      sym__logical_or_expression,
    STATE(256), 1,
      sym__wrapped_logical_or_expression,
    STATE(257), 1,
      sym__logical_and_expression,
    STATE(258), 1,
      sym__wrapped_logical_and_expression,
    STATE(259), 1,
      sym__bitwise_or_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(261), 1,
      sym__bitwise_xor_expression,
    STATE(262), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(263), 1,
      sym__bitwise_and_expression,
    STATE(264), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(265), 1,
      sym__equality_expression,
    STATE(266), 1,
      sym__wrapped_equality_expression,
    STATE(267), 1,
      sym__relational_expression,
    STATE(268), 1,
      sym__wrapped_relational_expression,
    STATE(269), 1,
      sym__shift_expression,
    STATE(270), 1,
      sym__wrapped_shift_expression,
    STATE(271), 1,
      sym__additive_expression,
    STATE(272), 1,
      sym__wrapped_additive_expression,
    STATE(273), 1,
      sym__multiplicative_expression,
    STATE(284), 1,
      sym_symbol,
    STATE(388), 1,
      sym__wrapped_assignment_expression,
    STATE(474), 1,
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
    STATE(430), 2,
      sym__operand,
      sym_string,
    ACTIONS(125), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(274), 9,
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
    STATE(254), 1,
      sym__assignment_expression,
    STATE(255), 1,
      sym__logical_or_expression,
    STATE(256), 1,
      sym__wrapped_logical_or_expression,
    STATE(257), 1,
      sym__logical_and_expression,
    STATE(258), 1,
      sym__wrapped_logical_and_expression,
    STATE(259), 1,
      sym__bitwise_or_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(261), 1,
      sym__bitwise_xor_expression,
    STATE(262), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(263), 1,
      sym__bitwise_and_expression,
    STATE(264), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(265), 1,
      sym__equality_expression,
    STATE(266), 1,
      sym__wrapped_equality_expression,
    STATE(267), 1,
      sym__relational_expression,
    STATE(268), 1,
      sym__wrapped_relational_expression,
    STATE(269), 1,
      sym__shift_expression,
    STATE(270), 1,
      sym__wrapped_shift_expression,
    STATE(271), 1,
      sym__additive_expression,
    STATE(272), 1,
      sym__wrapped_additive_expression,
    STATE(273), 1,
      sym__multiplicative_expression,
    STATE(285), 1,
      sym_symbol,
    STATE(394), 1,
      sym__wrapped_assignment_expression,
    STATE(476), 1,
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
    STATE(430), 2,
      sym__operand,
      sym_string,
    ACTIONS(125), 3,
      sym_octal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(274), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3182] = 38,
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
    STATE(239), 1,
      sym_address,
    STATE(297), 1,
      sym__relational_expression,
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
      sym__equality_expression,
    STATE(314), 1,
      sym__wrapped_equality_expression,
    STATE(316), 1,
      sym__wrapped_relational_expression,
    STATE(318), 1,
      sym__wrapped_shift_expression,
    STATE(319), 1,
      sym__additive_expression,
    STATE(324), 1,
      sym__wrapped_additive_expression,
    STATE(326), 1,
      sym__multiplicative_expression,
    STATE(339), 1,
      sym__shift_expression,
    STATE(346), 1,
      sym_string,
    STATE(391), 1,
      sym_string_operands,
    STATE(449), 1,
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
    ACTIONS(195), 4,
      sym_octal,
      sym_float,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(327), 9,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
  [3311] = 35,
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
    STATE(192), 1,
      sym__logical_or_expression,
    STATE(195), 1,
      sym__wrapped_additive_expression,
    STATE(197), 1,
      sym__wrapped_shift_expression,
    STATE(200), 1,
      sym__wrapped_logical_or_expression,
    STATE(201), 1,
      sym__multiplicative_expression,
    STATE(202), 1,
      sym__logical_and_expression,
    STATE(208), 1,
      sym__additive_expression,
    STATE(213), 1,
      sym__wrapped_logical_and_expression,
    STATE(215), 1,
      sym__assignment_expression,
    STATE(220), 1,
      sym__bitwise_or_expression,
    STATE(221), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(223), 1,
      sym__bitwise_xor_expression,
    STATE(224), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(226), 1,
      sym__bitwise_and_expression,
    STATE(227), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(229), 1,
      sym__equality_expression,
    STATE(230), 1,
      sym__wrapped_equality_expression,
    STATE(232), 1,
      sym__relational_expression,
    STATE(233), 1,
      sym__wrapped_relational_expression,
    STATE(234), 1,
      sym__shift_expression,
    STATE(354), 1,
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
    STATE(376), 2,
      sym__operand,
      sym_string,
    ACTIONS(63), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(203), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3434] = 35,
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
    STATE(254), 1,
      sym__assignment_expression,
    STATE(255), 1,
      sym__logical_or_expression,
    STATE(256), 1,
      sym__wrapped_logical_or_expression,
    STATE(257), 1,
      sym__logical_and_expression,
    STATE(258), 1,
      sym__wrapped_logical_and_expression,
    STATE(259), 1,
      sym__bitwise_or_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(261), 1,
      sym__bitwise_xor_expression,
    STATE(262), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(263), 1,
      sym__bitwise_and_expression,
    STATE(264), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(265), 1,
      sym__equality_expression,
    STATE(266), 1,
      sym__wrapped_equality_expression,
    STATE(267), 1,
      sym__relational_expression,
    STATE(268), 1,
      sym__wrapped_relational_expression,
    STATE(269), 1,
      sym__shift_expression,
    STATE(270), 1,
      sym__wrapped_shift_expression,
    STATE(271), 1,
      sym__additive_expression,
    STATE(272), 1,
      sym__wrapped_additive_expression,
    STATE(273), 1,
      sym__multiplicative_expression,
    STATE(388), 1,
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
    STATE(440), 2,
      sym__operand,
      sym_string,
    ACTIONS(125), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(274), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3557] = 33,
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
    STATE(192), 1,
      sym__logical_or_expression,
    STATE(195), 1,
      sym__wrapped_additive_expression,
    STATE(197), 1,
      sym__wrapped_shift_expression,
    STATE(200), 1,
      sym__wrapped_logical_or_expression,
    STATE(201), 1,
      sym__multiplicative_expression,
    STATE(202), 1,
      sym__logical_and_expression,
    STATE(207), 1,
      sym__wrapped_assignment_expression,
    STATE(208), 1,
      sym__additive_expression,
    STATE(213), 1,
      sym__wrapped_logical_and_expression,
    STATE(215), 1,
      sym__assignment_expression,
    STATE(220), 1,
      sym__bitwise_or_expression,
    STATE(221), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(223), 1,
      sym__bitwise_xor_expression,
    STATE(224), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(226), 1,
      sym__bitwise_and_expression,
    STATE(227), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(229), 1,
      sym__equality_expression,
    STATE(230), 1,
      sym__wrapped_equality_expression,
    STATE(232), 1,
      sym__relational_expression,
    STATE(233), 1,
      sym__wrapped_relational_expression,
    STATE(234), 1,
      sym__shift_expression,
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
    STATE(203), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3673] = 33,
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
      sym__relational_expression,
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
      sym__equality_expression,
    STATE(314), 1,
      sym__wrapped_equality_expression,
    STATE(316), 1,
      sym__wrapped_relational_expression,
    STATE(318), 1,
      sym__wrapped_shift_expression,
    STATE(319), 1,
      sym__additive_expression,
    STATE(324), 1,
      sym__wrapped_additive_expression,
    STATE(326), 1,
      sym__multiplicative_expression,
    STATE(339), 1,
      sym__shift_expression,
    STATE(446), 1,
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
    STATE(327), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3789] = 33,
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
      sym__relational_expression,
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
      sym__equality_expression,
    STATE(314), 1,
      sym__wrapped_equality_expression,
    STATE(316), 1,
      sym__wrapped_relational_expression,
    STATE(318), 1,
      sym__wrapped_shift_expression,
    STATE(319), 1,
      sym__additive_expression,
    STATE(324), 1,
      sym__wrapped_additive_expression,
    STATE(326), 1,
      sym__multiplicative_expression,
    STATE(339), 1,
      sym__shift_expression,
    STATE(437), 1,
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
    STATE(327), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3905] = 33,
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
    STATE(192), 1,
      sym__logical_or_expression,
    STATE(195), 1,
      sym__wrapped_additive_expression,
    STATE(197), 1,
      sym__wrapped_shift_expression,
    STATE(201), 1,
      sym__multiplicative_expression,
    STATE(202), 1,
      sym__logical_and_expression,
    STATE(208), 1,
      sym__additive_expression,
    STATE(213), 1,
      sym__wrapped_logical_and_expression,
    STATE(220), 1,
      sym__bitwise_or_expression,
    STATE(221), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(223), 1,
      sym__bitwise_xor_expression,
    STATE(224), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(226), 1,
      sym__bitwise_and_expression,
    STATE(227), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(229), 1,
      sym__equality_expression,
    STATE(230), 1,
      sym__wrapped_equality_expression,
    STATE(232), 1,
      sym__relational_expression,
    STATE(233), 1,
      sym__wrapped_relational_expression,
    STATE(234), 1,
      sym__shift_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(353), 1,
      sym__wrapped_logical_or_expression,
    STATE(462), 1,
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
    STATE(203), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4021] = 33,
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
      sym__wrapped_additive_expression,
    STATE(197), 1,
      sym__wrapped_shift_expression,
    STATE(201), 1,
      sym__multiplicative_expression,
    STATE(202), 1,
      sym__logical_and_expression,
    STATE(204), 1,
      sym__wrapped_logical_and_expression,
    STATE(208), 1,
      sym__additive_expression,
    STATE(220), 1,
      sym__bitwise_or_expression,
    STATE(221), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(223), 1,
      sym__bitwise_xor_expression,
    STATE(224), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(226), 1,
      sym__bitwise_and_expression,
    STATE(227), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(229), 1,
      sym__equality_expression,
    STATE(230), 1,
      sym__wrapped_equality_expression,
    STATE(232), 1,
      sym__relational_expression,
    STATE(233), 1,
      sym__wrapped_relational_expression,
    STATE(234), 1,
      sym__shift_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(462), 1,
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
    STATE(203), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4137] = 33,
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
      sym__wrapped_additive_expression,
    STATE(197), 1,
      sym__wrapped_shift_expression,
    STATE(201), 1,
      sym__multiplicative_expression,
    STATE(205), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(208), 1,
      sym__additive_expression,
    STATE(220), 1,
      sym__bitwise_or_expression,
    STATE(223), 1,
      sym__bitwise_xor_expression,
    STATE(224), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(226), 1,
      sym__bitwise_and_expression,
    STATE(227), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(229), 1,
      sym__equality_expression,
    STATE(230), 1,
      sym__wrapped_equality_expression,
    STATE(232), 1,
      sym__relational_expression,
    STATE(233), 1,
      sym__wrapped_relational_expression,
    STATE(234), 1,
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
    STATE(462), 1,
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
    STATE(203), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4253] = 33,
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
      sym__wrapped_additive_expression,
    STATE(197), 1,
      sym__wrapped_shift_expression,
    STATE(201), 1,
      sym__multiplicative_expression,
    STATE(208), 1,
      sym__additive_expression,
    STATE(211), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(223), 1,
      sym__bitwise_xor_expression,
    STATE(226), 1,
      sym__bitwise_and_expression,
    STATE(227), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(229), 1,
      sym__equality_expression,
    STATE(230), 1,
      sym__wrapped_equality_expression,
    STATE(232), 1,
      sym__relational_expression,
    STATE(233), 1,
      sym__wrapped_relational_expression,
    STATE(234), 1,
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
    STATE(462), 1,
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
    STATE(203), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4369] = 33,
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
      sym__wrapped_additive_expression,
    STATE(197), 1,
      sym__wrapped_shift_expression,
    STATE(201), 1,
      sym__multiplicative_expression,
    STATE(208), 1,
      sym__additive_expression,
    STATE(210), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(226), 1,
      sym__bitwise_and_expression,
    STATE(229), 1,
      sym__equality_expression,
    STATE(230), 1,
      sym__wrapped_equality_expression,
    STATE(232), 1,
      sym__relational_expression,
    STATE(233), 1,
      sym__wrapped_relational_expression,
    STATE(234), 1,
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
    STATE(462), 1,
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
    STATE(203), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4485] = 33,
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
      sym__wrapped_additive_expression,
    STATE(197), 1,
      sym__wrapped_shift_expression,
    STATE(201), 1,
      sym__multiplicative_expression,
    STATE(208), 1,
      sym__additive_expression,
    STATE(214), 1,
      sym__wrapped_equality_expression,
    STATE(229), 1,
      sym__equality_expression,
    STATE(232), 1,
      sym__relational_expression,
    STATE(233), 1,
      sym__wrapped_relational_expression,
    STATE(234), 1,
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
    STATE(462), 1,
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
    STATE(203), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4601] = 33,
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
      sym__wrapped_additive_expression,
    STATE(197), 1,
      sym__wrapped_shift_expression,
    STATE(201), 1,
      sym__multiplicative_expression,
    STATE(208), 1,
      sym__additive_expression,
    STATE(222), 1,
      sym__wrapped_relational_expression,
    STATE(232), 1,
      sym__relational_expression,
    STATE(234), 1,
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
    STATE(313), 1,
      sym__equality_expression,
    STATE(314), 1,
      sym__wrapped_equality_expression,
    STATE(462), 1,
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
    STATE(203), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4717] = 33,
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
      sym__wrapped_additive_expression,
    STATE(201), 1,
      sym__multiplicative_expression,
    STATE(208), 1,
      sym__additive_expression,
    STATE(228), 1,
      sym__wrapped_shift_expression,
    STATE(234), 1,
      sym__shift_expression,
    STATE(297), 1,
      sym__relational_expression,
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
      sym__equality_expression,
    STATE(314), 1,
      sym__wrapped_equality_expression,
    STATE(316), 1,
      sym__wrapped_relational_expression,
    STATE(462), 1,
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
    STATE(203), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4833] = 33,
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
    STATE(201), 1,
      sym__multiplicative_expression,
    STATE(208), 1,
      sym__additive_expression,
    STATE(231), 1,
      sym__wrapped_additive_expression,
    STATE(297), 1,
      sym__relational_expression,
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
      sym__equality_expression,
    STATE(314), 1,
      sym__wrapped_equality_expression,
    STATE(316), 1,
      sym__wrapped_relational_expression,
    STATE(318), 1,
      sym__wrapped_shift_expression,
    STATE(339), 1,
      sym__shift_expression,
    STATE(462), 1,
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
    STATE(203), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4949] = 33,
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
    STATE(201), 1,
      sym__multiplicative_expression,
    STATE(297), 1,
      sym__relational_expression,
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
      sym__equality_expression,
    STATE(314), 1,
      sym__wrapped_equality_expression,
    STATE(316), 1,
      sym__wrapped_relational_expression,
    STATE(318), 1,
      sym__wrapped_shift_expression,
    STATE(319), 1,
      sym__additive_expression,
    STATE(324), 1,
      sym__wrapped_additive_expression,
    STATE(339), 1,
      sym__shift_expression,
    STATE(462), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(59), 2,
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
    STATE(225), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5065] = 34,
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
      sym__relational_expression,
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
      sym__equality_expression,
    STATE(314), 1,
      sym__wrapped_equality_expression,
    STATE(316), 1,
      sym__wrapped_relational_expression,
    STATE(318), 1,
      sym__wrapped_shift_expression,
    STATE(319), 1,
      sym__additive_expression,
    STATE(324), 1,
      sym__wrapped_additive_expression,
    STATE(326), 1,
      sym__multiplicative_expression,
    STATE(327), 1,
      sym__wrapped_multiplicative_expression,
    STATE(339), 1,
      sym__shift_expression,
    STATE(462), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(59), 2,
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
    STATE(212), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5183] = 33,
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
    STATE(107), 1,
      sym__relational_expression,
    STATE(108), 1,
      sym__wrapped_relational_expression,
    STATE(109), 1,
      sym__shift_expression,
    STATE(110), 1,
      sym__wrapped_shift_expression,
    STATE(111), 1,
      sym__additive_expression,
    STATE(112), 1,
      sym__wrapped_additive_expression,
    STATE(113), 1,
      sym__multiplicative_expression,
    STATE(121), 1,
      sym__bitwise_xor_expression,
    STATE(126), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(132), 1,
      sym__bitwise_and_expression,
    STATE(133), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(134), 1,
      sym__equality_expression,
    STATE(135), 1,
      sym__wrapped_equality_expression,
    STATE(141), 1,
      sym__assignment_expression,
    STATE(142), 1,
      sym__logical_or_expression,
    STATE(143), 1,
      sym__wrapped_logical_or_expression,
    STATE(144), 1,
      sym__logical_and_expression,
    STATE(145), 1,
      sym__wrapped_logical_and_expression,
    STATE(146), 1,
      sym__bitwise_or_expression,
    STATE(147), 1,
      sym__wrapped_bitwise_or_expression,
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
    STATE(114), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5299] = 33,
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
    STATE(107), 1,
      sym__relational_expression,
    STATE(108), 1,
      sym__wrapped_relational_expression,
    STATE(109), 1,
      sym__shift_expression,
    STATE(110), 1,
      sym__wrapped_shift_expression,
    STATE(111), 1,
      sym__additive_expression,
    STATE(112), 1,
      sym__wrapped_additive_expression,
    STATE(113), 1,
      sym__multiplicative_expression,
    STATE(121), 1,
      sym__bitwise_xor_expression,
    STATE(126), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(132), 1,
      sym__bitwise_and_expression,
    STATE(133), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(134), 1,
      sym__equality_expression,
    STATE(135), 1,
      sym__wrapped_equality_expression,
    STATE(141), 1,
      sym__assignment_expression,
    STATE(142), 1,
      sym__logical_or_expression,
    STATE(143), 1,
      sym__wrapped_logical_or_expression,
    STATE(144), 1,
      sym__logical_and_expression,
    STATE(145), 1,
      sym__wrapped_logical_and_expression,
    STATE(146), 1,
      sym__bitwise_or_expression,
    STATE(147), 1,
      sym__wrapped_bitwise_or_expression,
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
    STATE(114), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5415] = 33,
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
    STATE(255), 1,
      sym__logical_or_expression,
    STATE(257), 1,
      sym__logical_and_expression,
    STATE(258), 1,
      sym__wrapped_logical_and_expression,
    STATE(259), 1,
      sym__bitwise_or_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(261), 1,
      sym__bitwise_xor_expression,
    STATE(262), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(263), 1,
      sym__bitwise_and_expression,
    STATE(264), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(265), 1,
      sym__equality_expression,
    STATE(266), 1,
      sym__wrapped_equality_expression,
    STATE(267), 1,
      sym__relational_expression,
    STATE(268), 1,
      sym__wrapped_relational_expression,
    STATE(269), 1,
      sym__shift_expression,
    STATE(270), 1,
      sym__wrapped_shift_expression,
    STATE(271), 1,
      sym__additive_expression,
    STATE(272), 1,
      sym__wrapped_additive_expression,
    STATE(273), 1,
      sym__multiplicative_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(382), 1,
      sym__wrapped_logical_or_expression,
    STATE(463), 1,
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
    STATE(274), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5531] = 33,
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
      sym__logical_and_expression,
    STATE(259), 1,
      sym__bitwise_or_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(261), 1,
      sym__bitwise_xor_expression,
    STATE(262), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(263), 1,
      sym__bitwise_and_expression,
    STATE(264), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(265), 1,
      sym__equality_expression,
    STATE(266), 1,
      sym__wrapped_equality_expression,
    STATE(267), 1,
      sym__relational_expression,
    STATE(268), 1,
      sym__wrapped_relational_expression,
    STATE(269), 1,
      sym__shift_expression,
    STATE(270), 1,
      sym__wrapped_shift_expression,
    STATE(271), 1,
      sym__additive_expression,
    STATE(272), 1,
      sym__wrapped_additive_expression,
    STATE(273), 1,
      sym__multiplicative_expression,
    STATE(290), 1,
      sym__wrapped_logical_and_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(463), 1,
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
    STATE(274), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5647] = 33,
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
    STATE(259), 1,
      sym__bitwise_or_expression,
    STATE(261), 1,
      sym__bitwise_xor_expression,
    STATE(262), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(263), 1,
      sym__bitwise_and_expression,
    STATE(264), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(265), 1,
      sym__equality_expression,
    STATE(266), 1,
      sym__wrapped_equality_expression,
    STATE(267), 1,
      sym__relational_expression,
    STATE(268), 1,
      sym__wrapped_relational_expression,
    STATE(269), 1,
      sym__shift_expression,
    STATE(270), 1,
      sym__wrapped_shift_expression,
    STATE(271), 1,
      sym__additive_expression,
    STATE(272), 1,
      sym__wrapped_additive_expression,
    STATE(273), 1,
      sym__multiplicative_expression,
    STATE(291), 1,
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
    STATE(463), 1,
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
    STATE(274), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5763] = 33,
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
    STATE(261), 1,
      sym__bitwise_xor_expression,
    STATE(263), 1,
      sym__bitwise_and_expression,
    STATE(264), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(265), 1,
      sym__equality_expression,
    STATE(266), 1,
      sym__wrapped_equality_expression,
    STATE(267), 1,
      sym__relational_expression,
    STATE(268), 1,
      sym__wrapped_relational_expression,
    STATE(269), 1,
      sym__shift_expression,
    STATE(270), 1,
      sym__wrapped_shift_expression,
    STATE(271), 1,
      sym__additive_expression,
    STATE(272), 1,
      sym__wrapped_additive_expression,
    STATE(273), 1,
      sym__multiplicative_expression,
    STATE(292), 1,
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
    STATE(463), 1,
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
    STATE(274), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5879] = 33,
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
    STATE(263), 1,
      sym__bitwise_and_expression,
    STATE(265), 1,
      sym__equality_expression,
    STATE(266), 1,
      sym__wrapped_equality_expression,
    STATE(267), 1,
      sym__relational_expression,
    STATE(268), 1,
      sym__wrapped_relational_expression,
    STATE(269), 1,
      sym__shift_expression,
    STATE(270), 1,
      sym__wrapped_shift_expression,
    STATE(271), 1,
      sym__additive_expression,
    STATE(272), 1,
      sym__wrapped_additive_expression,
    STATE(273), 1,
      sym__multiplicative_expression,
    STATE(293), 1,
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
    STATE(463), 1,
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
    STATE(274), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5995] = 33,
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
    STATE(265), 1,
      sym__equality_expression,
    STATE(267), 1,
      sym__relational_expression,
    STATE(268), 1,
      sym__wrapped_relational_expression,
    STATE(269), 1,
      sym__shift_expression,
    STATE(270), 1,
      sym__wrapped_shift_expression,
    STATE(271), 1,
      sym__additive_expression,
    STATE(272), 1,
      sym__wrapped_additive_expression,
    STATE(273), 1,
      sym__multiplicative_expression,
    STATE(294), 1,
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
    STATE(463), 1,
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
    STATE(274), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6111] = 33,
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
    STATE(250), 1,
      sym__wrapped_relational_expression,
    STATE(267), 1,
      sym__relational_expression,
    STATE(269), 1,
      sym__shift_expression,
    STATE(270), 1,
      sym__wrapped_shift_expression,
    STATE(271), 1,
      sym__additive_expression,
    STATE(272), 1,
      sym__wrapped_additive_expression,
    STATE(273), 1,
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
    STATE(313), 1,
      sym__equality_expression,
    STATE(314), 1,
      sym__wrapped_equality_expression,
    STATE(463), 1,
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
    STATE(274), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6227] = 33,
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
    STATE(269), 1,
      sym__shift_expression,
    STATE(271), 1,
      sym__additive_expression,
    STATE(272), 1,
      sym__wrapped_additive_expression,
    STATE(273), 1,
      sym__multiplicative_expression,
    STATE(295), 1,
      sym__wrapped_shift_expression,
    STATE(297), 1,
      sym__relational_expression,
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
      sym__equality_expression,
    STATE(314), 1,
      sym__wrapped_equality_expression,
    STATE(316), 1,
      sym__wrapped_relational_expression,
    STATE(463), 1,
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
    STATE(274), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6343] = 33,
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
    STATE(242), 1,
      sym__wrapped_additive_expression,
    STATE(271), 1,
      sym__additive_expression,
    STATE(273), 1,
      sym__multiplicative_expression,
    STATE(297), 1,
      sym__relational_expression,
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
      sym__equality_expression,
    STATE(314), 1,
      sym__wrapped_equality_expression,
    STATE(316), 1,
      sym__wrapped_relational_expression,
    STATE(318), 1,
      sym__wrapped_shift_expression,
    STATE(339), 1,
      sym__shift_expression,
    STATE(463), 1,
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
    STATE(274), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6459] = 33,
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
    STATE(273), 1,
      sym__multiplicative_expression,
    STATE(297), 1,
      sym__relational_expression,
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
      sym__equality_expression,
    STATE(314), 1,
      sym__wrapped_equality_expression,
    STATE(316), 1,
      sym__wrapped_relational_expression,
    STATE(318), 1,
      sym__wrapped_shift_expression,
    STATE(319), 1,
      sym__additive_expression,
    STATE(324), 1,
      sym__wrapped_additive_expression,
    STATE(339), 1,
      sym__shift_expression,
    STATE(463), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(121), 2,
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
    STATE(243), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6575] = 34,
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
      sym__relational_expression,
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
      sym__equality_expression,
    STATE(314), 1,
      sym__wrapped_equality_expression,
    STATE(316), 1,
      sym__wrapped_relational_expression,
    STATE(318), 1,
      sym__wrapped_shift_expression,
    STATE(319), 1,
      sym__additive_expression,
    STATE(324), 1,
      sym__wrapped_additive_expression,
    STATE(326), 1,
      sym__multiplicative_expression,
    STATE(327), 1,
      sym__wrapped_multiplicative_expression,
    STATE(339), 1,
      sym__shift_expression,
    STATE(463), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(121), 2,
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
    STATE(244), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6693] = 33,
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
    STATE(107), 1,
      sym__relational_expression,
    STATE(108), 1,
      sym__wrapped_relational_expression,
    STATE(109), 1,
      sym__shift_expression,
    STATE(110), 1,
      sym__wrapped_shift_expression,
    STATE(111), 1,
      sym__additive_expression,
    STATE(112), 1,
      sym__wrapped_additive_expression,
    STATE(113), 1,
      sym__multiplicative_expression,
    STATE(121), 1,
      sym__bitwise_xor_expression,
    STATE(126), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(132), 1,
      sym__bitwise_and_expression,
    STATE(133), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(134), 1,
      sym__equality_expression,
    STATE(135), 1,
      sym__wrapped_equality_expression,
    STATE(142), 1,
      sym__logical_or_expression,
    STATE(144), 1,
      sym__logical_and_expression,
    STATE(145), 1,
      sym__wrapped_logical_and_expression,
    STATE(146), 1,
      sym__bitwise_or_expression,
    STATE(147), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(340), 1,
      sym__wrapped_logical_or_expression,
    STATE(464), 1,
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
    STATE(114), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6809] = 33,
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
    STATE(107), 1,
      sym__relational_expression,
    STATE(108), 1,
      sym__wrapped_relational_expression,
    STATE(109), 1,
      sym__shift_expression,
    STATE(110), 1,
      sym__wrapped_shift_expression,
    STATE(111), 1,
      sym__additive_expression,
    STATE(112), 1,
      sym__wrapped_additive_expression,
    STATE(113), 1,
      sym__multiplicative_expression,
    STATE(119), 1,
      sym__wrapped_logical_and_expression,
    STATE(121), 1,
      sym__bitwise_xor_expression,
    STATE(126), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(132), 1,
      sym__bitwise_and_expression,
    STATE(133), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(134), 1,
      sym__equality_expression,
    STATE(135), 1,
      sym__wrapped_equality_expression,
    STATE(144), 1,
      sym__logical_and_expression,
    STATE(146), 1,
      sym__bitwise_or_expression,
    STATE(147), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(464), 1,
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
    STATE(114), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6925] = 33,
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
    STATE(107), 1,
      sym__relational_expression,
    STATE(108), 1,
      sym__wrapped_relational_expression,
    STATE(109), 1,
      sym__shift_expression,
    STATE(110), 1,
      sym__wrapped_shift_expression,
    STATE(111), 1,
      sym__additive_expression,
    STATE(112), 1,
      sym__wrapped_additive_expression,
    STATE(113), 1,
      sym__multiplicative_expression,
    STATE(120), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(121), 1,
      sym__bitwise_xor_expression,
    STATE(126), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(132), 1,
      sym__bitwise_and_expression,
    STATE(133), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(134), 1,
      sym__equality_expression,
    STATE(135), 1,
      sym__wrapped_equality_expression,
    STATE(146), 1,
      sym__bitwise_or_expression,
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
    STATE(464), 1,
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
    STATE(114), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7041] = 33,
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
      sym__wrapped_bitwise_xor_expression,
    STATE(107), 1,
      sym__relational_expression,
    STATE(108), 1,
      sym__wrapped_relational_expression,
    STATE(109), 1,
      sym__shift_expression,
    STATE(110), 1,
      sym__wrapped_shift_expression,
    STATE(111), 1,
      sym__additive_expression,
    STATE(112), 1,
      sym__wrapped_additive_expression,
    STATE(113), 1,
      sym__multiplicative_expression,
    STATE(121), 1,
      sym__bitwise_xor_expression,
    STATE(132), 1,
      sym__bitwise_and_expression,
    STATE(133), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(134), 1,
      sym__equality_expression,
    STATE(135), 1,
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
    STATE(464), 1,
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
    STATE(114), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7157] = 33,
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
    STATE(107), 1,
      sym__relational_expression,
    STATE(108), 1,
      sym__wrapped_relational_expression,
    STATE(109), 1,
      sym__shift_expression,
    STATE(110), 1,
      sym__wrapped_shift_expression,
    STATE(111), 1,
      sym__additive_expression,
    STATE(112), 1,
      sym__wrapped_additive_expression,
    STATE(113), 1,
      sym__multiplicative_expression,
    STATE(122), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(132), 1,
      sym__bitwise_and_expression,
    STATE(134), 1,
      sym__equality_expression,
    STATE(135), 1,
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
    STATE(464), 1,
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
    STATE(114), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7273] = 33,
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
    STATE(107), 1,
      sym__relational_expression,
    STATE(108), 1,
      sym__wrapped_relational_expression,
    STATE(109), 1,
      sym__shift_expression,
    STATE(110), 1,
      sym__wrapped_shift_expression,
    STATE(111), 1,
      sym__additive_expression,
    STATE(112), 1,
      sym__wrapped_additive_expression,
    STATE(113), 1,
      sym__multiplicative_expression,
    STATE(123), 1,
      sym__wrapped_equality_expression,
    STATE(134), 1,
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
    STATE(464), 1,
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
    STATE(114), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7389] = 33,
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
    STATE(107), 1,
      sym__relational_expression,
    STATE(109), 1,
      sym__shift_expression,
    STATE(110), 1,
      sym__wrapped_shift_expression,
    STATE(111), 1,
      sym__additive_expression,
    STATE(112), 1,
      sym__wrapped_additive_expression,
    STATE(113), 1,
      sym__multiplicative_expression,
    STATE(124), 1,
      sym__wrapped_relational_expression,
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
      sym__equality_expression,
    STATE(314), 1,
      sym__wrapped_equality_expression,
    STATE(464), 1,
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
    STATE(114), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7505] = 33,
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
    STATE(109), 1,
      sym__shift_expression,
    STATE(111), 1,
      sym__additive_expression,
    STATE(112), 1,
      sym__wrapped_additive_expression,
    STATE(113), 1,
      sym__multiplicative_expression,
    STATE(125), 1,
      sym__wrapped_shift_expression,
    STATE(297), 1,
      sym__relational_expression,
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
      sym__equality_expression,
    STATE(314), 1,
      sym__wrapped_equality_expression,
    STATE(316), 1,
      sym__wrapped_relational_expression,
    STATE(464), 1,
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
    STATE(114), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7621] = 33,
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
      sym__additive_expression,
    STATE(113), 1,
      sym__multiplicative_expression,
    STATE(148), 1,
      sym__wrapped_additive_expression,
    STATE(297), 1,
      sym__relational_expression,
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
      sym__equality_expression,
    STATE(314), 1,
      sym__wrapped_equality_expression,
    STATE(316), 1,
      sym__wrapped_relational_expression,
    STATE(318), 1,
      sym__wrapped_shift_expression,
    STATE(339), 1,
      sym__shift_expression,
    STATE(464), 1,
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
    STATE(114), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7737] = 33,
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
    STATE(113), 1,
      sym__multiplicative_expression,
    STATE(297), 1,
      sym__relational_expression,
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
      sym__equality_expression,
    STATE(314), 1,
      sym__wrapped_equality_expression,
    STATE(316), 1,
      sym__wrapped_relational_expression,
    STATE(318), 1,
      sym__wrapped_shift_expression,
    STATE(319), 1,
      sym__additive_expression,
    STATE(324), 1,
      sym__wrapped_additive_expression,
    STATE(339), 1,
      sym__shift_expression,
    STATE(464), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(145), 2,
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
    STATE(127), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7853] = 34,
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
      sym__relational_expression,
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
      sym__equality_expression,
    STATE(314), 1,
      sym__wrapped_equality_expression,
    STATE(316), 1,
      sym__wrapped_relational_expression,
    STATE(318), 1,
      sym__wrapped_shift_expression,
    STATE(319), 1,
      sym__additive_expression,
    STATE(324), 1,
      sym__wrapped_additive_expression,
    STATE(326), 1,
      sym__multiplicative_expression,
    STATE(327), 1,
      sym__wrapped_multiplicative_expression,
    STATE(339), 1,
      sym__shift_expression,
    STATE(464), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(145), 2,
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
    STATE(128), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7971] = 33,
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
      sym__relational_expression,
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
      sym__equality_expression,
    STATE(314), 1,
      sym__wrapped_equality_expression,
    STATE(316), 1,
      sym__wrapped_relational_expression,
    STATE(318), 1,
      sym__wrapped_shift_expression,
    STATE(319), 1,
      sym__additive_expression,
    STATE(324), 1,
      sym__wrapped_additive_expression,
    STATE(326), 1,
      sym__multiplicative_expression,
    STATE(339), 1,
      sym__shift_expression,
    STATE(431), 1,
      sym__wrapped_logical_or_expression,
    STATE(465), 1,
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
    STATE(327), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8087] = 33,
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
      sym__relational_expression,
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
      sym__equality_expression,
    STATE(314), 1,
      sym__wrapped_equality_expression,
    STATE(316), 1,
      sym__wrapped_relational_expression,
    STATE(318), 1,
      sym__wrapped_shift_expression,
    STATE(319), 1,
      sym__additive_expression,
    STATE(324), 1,
      sym__wrapped_additive_expression,
    STATE(326), 1,
      sym__multiplicative_expression,
    STATE(333), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(339), 1,
      sym__shift_expression,
    STATE(465), 1,
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
    STATE(327), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8203] = 33,
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
      sym__relational_expression,
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
      sym__equality_expression,
    STATE(314), 1,
      sym__wrapped_equality_expression,
    STATE(316), 1,
      sym__wrapped_relational_expression,
    STATE(318), 1,
      sym__wrapped_shift_expression,
    STATE(319), 1,
      sym__additive_expression,
    STATE(324), 1,
      sym__wrapped_additive_expression,
    STATE(326), 1,
      sym__multiplicative_expression,
    STATE(334), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(339), 1,
      sym__shift_expression,
    STATE(465), 1,
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
    STATE(327), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8319] = 33,
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
      sym__relational_expression,
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
      sym__equality_expression,
    STATE(314), 1,
      sym__wrapped_equality_expression,
    STATE(316), 1,
      sym__wrapped_relational_expression,
    STATE(318), 1,
      sym__wrapped_shift_expression,
    STATE(319), 1,
      sym__additive_expression,
    STATE(324), 1,
      sym__wrapped_additive_expression,
    STATE(326), 1,
      sym__multiplicative_expression,
    STATE(335), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(339), 1,
      sym__shift_expression,
    STATE(465), 1,
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
    STATE(327), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8435] = 33,
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
      sym__relational_expression,
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
      sym__equality_expression,
    STATE(316), 1,
      sym__wrapped_relational_expression,
    STATE(318), 1,
      sym__wrapped_shift_expression,
    STATE(319), 1,
      sym__additive_expression,
    STATE(324), 1,
      sym__wrapped_additive_expression,
    STATE(326), 1,
      sym__multiplicative_expression,
    STATE(336), 1,
      sym__wrapped_equality_expression,
    STATE(339), 1,
      sym__shift_expression,
    STATE(465), 1,
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
    STATE(327), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8551] = 33,
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
      sym__relational_expression,
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
      sym__equality_expression,
    STATE(314), 1,
      sym__wrapped_equality_expression,
    STATE(318), 1,
      sym__wrapped_shift_expression,
    STATE(319), 1,
      sym__additive_expression,
    STATE(324), 1,
      sym__wrapped_additive_expression,
    STATE(326), 1,
      sym__multiplicative_expression,
    STATE(337), 1,
      sym__wrapped_relational_expression,
    STATE(339), 1,
      sym__shift_expression,
    STATE(465), 1,
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
    STATE(327), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8667] = 33,
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
      sym__relational_expression,
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
      sym__equality_expression,
    STATE(314), 1,
      sym__wrapped_equality_expression,
    STATE(316), 1,
      sym__wrapped_relational_expression,
    STATE(319), 1,
      sym__additive_expression,
    STATE(324), 1,
      sym__wrapped_additive_expression,
    STATE(326), 1,
      sym__multiplicative_expression,
    STATE(338), 1,
      sym__wrapped_shift_expression,
    STATE(339), 1,
      sym__shift_expression,
    STATE(465), 1,
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
    STATE(327), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8783] = 33,
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
      sym__relational_expression,
    STATE(298), 1,
      sym__wrapped_additive_expression,
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
      sym__equality_expression,
    STATE(314), 1,
      sym__wrapped_equality_expression,
    STATE(316), 1,
      sym__wrapped_relational_expression,
    STATE(318), 1,
      sym__wrapped_shift_expression,
    STATE(319), 1,
      sym__additive_expression,
    STATE(326), 1,
      sym__multiplicative_expression,
    STATE(339), 1,
      sym__shift_expression,
    STATE(465), 1,
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
    STATE(327), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8899] = 33,
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
      sym__relational_expression,
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
      sym__equality_expression,
    STATE(314), 1,
      sym__wrapped_equality_expression,
    STATE(316), 1,
      sym__wrapped_relational_expression,
    STATE(318), 1,
      sym__wrapped_shift_expression,
    STATE(319), 1,
      sym__additive_expression,
    STATE(324), 1,
      sym__wrapped_additive_expression,
    STATE(326), 1,
      sym__multiplicative_expression,
    STATE(339), 1,
      sym__shift_expression,
    STATE(465), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(191), 2,
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
    STATE(315), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9015] = 34,
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
      sym__relational_expression,
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
      sym__equality_expression,
    STATE(314), 1,
      sym__wrapped_equality_expression,
    STATE(316), 1,
      sym__wrapped_relational_expression,
    STATE(318), 1,
      sym__wrapped_shift_expression,
    STATE(319), 1,
      sym__additive_expression,
    STATE(324), 1,
      sym__wrapped_additive_expression,
    STATE(326), 1,
      sym__multiplicative_expression,
    STATE(327), 1,
      sym__wrapped_multiplicative_expression,
    STATE(339), 1,
      sym__shift_expression,
    STATE(465), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(191), 2,
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
    STATE(317), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9133] = 33,
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
      sym__wrapped_relational_expression,
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
      sym__shift_expression,
    STATE(170), 1,
      sym__additive_expression,
    STATE(171), 1,
      sym__wrapped_additive_expression,
    STATE(172), 1,
      sym__multiplicative_expression,
    STATE(191), 1,
      sym__wrapped_shift_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(344), 1,
      sym__wrapped_logical_or_expression,
    STATE(466), 1,
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
    STATE(173), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9249] = 33,
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
      sym__wrapped_relational_expression,
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
      sym__shift_expression,
    STATE(170), 1,
      sym__additive_expression,
    STATE(171), 1,
      sym__wrapped_additive_expression,
    STATE(172), 1,
      sym__multiplicative_expression,
    STATE(178), 1,
      sym__wrapped_logical_and_expression,
    STATE(191), 1,
      sym__wrapped_shift_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(303), 1,
      sym__logical_or_expression,
    STATE(304), 1,
      sym__wrapped_logical_or_expression,
    STATE(466), 1,
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
    STATE(173), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9365] = 33,
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
      sym__wrapped_relational_expression,
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
      sym__shift_expression,
    STATE(170), 1,
      sym__additive_expression,
    STATE(171), 1,
      sym__wrapped_additive_expression,
    STATE(172), 1,
      sym__multiplicative_expression,
    STATE(179), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(191), 1,
      sym__wrapped_shift_expression,
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
    STATE(466), 1,
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
    STATE(173), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9481] = 33,
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
      sym__wrapped_relational_expression,
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
      sym__shift_expression,
    STATE(170), 1,
      sym__additive_expression,
    STATE(171), 1,
      sym__wrapped_additive_expression,
    STATE(172), 1,
      sym__multiplicative_expression,
    STATE(180), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(191), 1,
      sym__wrapped_shift_expression,
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
    STATE(466), 1,
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
    STATE(173), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9597] = 33,
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
      sym__wrapped_relational_expression,
    STATE(163), 1,
      sym__bitwise_and_expression,
    STATE(165), 1,
      sym__equality_expression,
    STATE(166), 1,
      sym__wrapped_equality_expression,
    STATE(167), 1,
      sym__relational_expression,
    STATE(168), 1,
      sym__shift_expression,
    STATE(170), 1,
      sym__additive_expression,
    STATE(171), 1,
      sym__wrapped_additive_expression,
    STATE(172), 1,
      sym__multiplicative_expression,
    STATE(181), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(191), 1,
      sym__wrapped_shift_expression,
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
    STATE(466), 1,
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
    STATE(173), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9713] = 33,
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
      sym__wrapped_relational_expression,
    STATE(165), 1,
      sym__equality_expression,
    STATE(167), 1,
      sym__relational_expression,
    STATE(168), 1,
      sym__shift_expression,
    STATE(170), 1,
      sym__additive_expression,
    STATE(171), 1,
      sym__wrapped_additive_expression,
    STATE(172), 1,
      sym__multiplicative_expression,
    STATE(182), 1,
      sym__wrapped_equality_expression,
    STATE(191), 1,
      sym__wrapped_shift_expression,
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
    STATE(466), 1,
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
    STATE(173), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9829] = 33,
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
    STATE(168), 1,
      sym__shift_expression,
    STATE(170), 1,
      sym__additive_expression,
    STATE(171), 1,
      sym__wrapped_additive_expression,
    STATE(172), 1,
      sym__multiplicative_expression,
    STATE(183), 1,
      sym__wrapped_relational_expression,
    STATE(191), 1,
      sym__wrapped_shift_expression,
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
      sym__equality_expression,
    STATE(314), 1,
      sym__wrapped_equality_expression,
    STATE(466), 1,
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
    STATE(173), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9945] = 33,
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
      sym__shift_expression,
    STATE(170), 1,
      sym__additive_expression,
    STATE(171), 1,
      sym__wrapped_additive_expression,
    STATE(172), 1,
      sym__multiplicative_expression,
    STATE(184), 1,
      sym__wrapped_shift_expression,
    STATE(297), 1,
      sym__relational_expression,
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
      sym__equality_expression,
    STATE(314), 1,
      sym__wrapped_equality_expression,
    STATE(316), 1,
      sym__wrapped_relational_expression,
    STATE(466), 1,
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
    STATE(173), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10061] = 33,
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
      sym__additive_expression,
    STATE(172), 1,
      sym__multiplicative_expression,
    STATE(185), 1,
      sym__wrapped_additive_expression,
    STATE(297), 1,
      sym__relational_expression,
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
      sym__equality_expression,
    STATE(314), 1,
      sym__wrapped_equality_expression,
    STATE(316), 1,
      sym__wrapped_relational_expression,
    STATE(318), 1,
      sym__wrapped_shift_expression,
    STATE(339), 1,
      sym__shift_expression,
    STATE(466), 1,
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
    STATE(173), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10177] = 33,
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
      sym__multiplicative_expression,
    STATE(297), 1,
      sym__relational_expression,
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
      sym__equality_expression,
    STATE(314), 1,
      sym__wrapped_equality_expression,
    STATE(316), 1,
      sym__wrapped_relational_expression,
    STATE(318), 1,
      sym__wrapped_shift_expression,
    STATE(319), 1,
      sym__additive_expression,
    STATE(324), 1,
      sym__wrapped_additive_expression,
    STATE(339), 1,
      sym__shift_expression,
    STATE(466), 1,
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
  [10293] = 34,
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
      sym__relational_expression,
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
      sym__equality_expression,
    STATE(314), 1,
      sym__wrapped_equality_expression,
    STATE(316), 1,
      sym__wrapped_relational_expression,
    STATE(318), 1,
      sym__wrapped_shift_expression,
    STATE(319), 1,
      sym__additive_expression,
    STATE(324), 1,
      sym__wrapped_additive_expression,
    STATE(326), 1,
      sym__multiplicative_expression,
    STATE(327), 1,
      sym__wrapped_multiplicative_expression,
    STATE(339), 1,
      sym__shift_expression,
    STATE(466), 1,
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
  [10411] = 33,
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
    STATE(254), 1,
      sym__assignment_expression,
    STATE(255), 1,
      sym__logical_or_expression,
    STATE(256), 1,
      sym__wrapped_logical_or_expression,
    STATE(257), 1,
      sym__logical_and_expression,
    STATE(258), 1,
      sym__wrapped_logical_and_expression,
    STATE(259), 1,
      sym__bitwise_or_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(261), 1,
      sym__bitwise_xor_expression,
    STATE(262), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(263), 1,
      sym__bitwise_and_expression,
    STATE(264), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(265), 1,
      sym__equality_expression,
    STATE(266), 1,
      sym__wrapped_equality_expression,
    STATE(267), 1,
      sym__relational_expression,
    STATE(268), 1,
      sym__wrapped_relational_expression,
    STATE(269), 1,
      sym__shift_expression,
    STATE(270), 1,
      sym__wrapped_shift_expression,
    STATE(271), 1,
      sym__additive_expression,
    STATE(272), 1,
      sym__wrapped_additive_expression,
    STATE(273), 1,
      sym__multiplicative_expression,
    STATE(275), 1,
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
    STATE(274), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10527] = 33,
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
    STATE(192), 1,
      sym__logical_or_expression,
    STATE(195), 1,
      sym__wrapped_additive_expression,
    STATE(197), 1,
      sym__wrapped_shift_expression,
    STATE(201), 1,
      sym__multiplicative_expression,
    STATE(202), 1,
      sym__logical_and_expression,
    STATE(208), 1,
      sym__additive_expression,
    STATE(209), 1,
      sym__wrapped_logical_or_expression,
    STATE(213), 1,
      sym__wrapped_logical_and_expression,
    STATE(220), 1,
      sym__bitwise_or_expression,
    STATE(221), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(223), 1,
      sym__bitwise_xor_expression,
    STATE(224), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(226), 1,
      sym__bitwise_and_expression,
    STATE(227), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(229), 1,
      sym__equality_expression,
    STATE(230), 1,
      sym__wrapped_equality_expression,
    STATE(232), 1,
      sym__relational_expression,
    STATE(233), 1,
      sym__wrapped_relational_expression,
    STATE(234), 1,
      sym__shift_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(462), 1,
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
    STATE(203), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10643] = 33,
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
    STATE(255), 1,
      sym__logical_or_expression,
    STATE(257), 1,
      sym__logical_and_expression,
    STATE(258), 1,
      sym__wrapped_logical_and_expression,
    STATE(259), 1,
      sym__bitwise_or_expression,
    STATE(260), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(261), 1,
      sym__bitwise_xor_expression,
    STATE(262), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(263), 1,
      sym__bitwise_and_expression,
    STATE(264), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(265), 1,
      sym__equality_expression,
    STATE(266), 1,
      sym__wrapped_equality_expression,
    STATE(267), 1,
      sym__relational_expression,
    STATE(268), 1,
      sym__wrapped_relational_expression,
    STATE(269), 1,
      sym__shift_expression,
    STATE(270), 1,
      sym__wrapped_shift_expression,
    STATE(271), 1,
      sym__additive_expression,
    STATE(272), 1,
      sym__wrapped_additive_expression,
    STATE(273), 1,
      sym__multiplicative_expression,
    STATE(276), 1,
      sym__wrapped_logical_or_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(463), 1,
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
    STATE(274), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10759] = 33,
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
    STATE(107), 1,
      sym__relational_expression,
    STATE(108), 1,
      sym__wrapped_relational_expression,
    STATE(109), 1,
      sym__shift_expression,
    STATE(110), 1,
      sym__wrapped_shift_expression,
    STATE(111), 1,
      sym__additive_expression,
    STATE(112), 1,
      sym__wrapped_additive_expression,
    STATE(113), 1,
      sym__multiplicative_expression,
    STATE(121), 1,
      sym__bitwise_xor_expression,
    STATE(126), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(132), 1,
      sym__bitwise_and_expression,
    STATE(133), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(134), 1,
      sym__equality_expression,
    STATE(135), 1,
      sym__wrapped_equality_expression,
    STATE(136), 1,
      sym__wrapped_logical_or_expression,
    STATE(142), 1,
      sym__logical_or_expression,
    STATE(144), 1,
      sym__logical_and_expression,
    STATE(145), 1,
      sym__wrapped_logical_and_expression,
    STATE(146), 1,
      sym__bitwise_or_expression,
    STATE(147), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(464), 1,
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
    STATE(114), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10875] = 33,
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
      sym__relational_expression,
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
      sym__equality_expression,
    STATE(314), 1,
      sym__wrapped_equality_expression,
    STATE(316), 1,
      sym__wrapped_relational_expression,
    STATE(318), 1,
      sym__wrapped_shift_expression,
    STATE(319), 1,
      sym__additive_expression,
    STATE(324), 1,
      sym__wrapped_additive_expression,
    STATE(325), 1,
      sym__wrapped_logical_or_expression,
    STATE(326), 1,
      sym__multiplicative_expression,
    STATE(339), 1,
      sym__shift_expression,
    STATE(465), 1,
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
    STATE(327), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10991] = 33,
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
      sym__wrapped_relational_expression,
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
      sym__shift_expression,
    STATE(169), 1,
      sym__wrapped_logical_or_expression,
    STATE(170), 1,
      sym__additive_expression,
    STATE(171), 1,
      sym__wrapped_additive_expression,
    STATE(172), 1,
      sym__multiplicative_expression,
    STATE(191), 1,
      sym__wrapped_shift_expression,
    STATE(302), 1,
      sym__assignment_expression,
    STATE(466), 1,
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
    STATE(173), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11107] = 33,
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
    STATE(107), 1,
      sym__relational_expression,
    STATE(108), 1,
      sym__wrapped_relational_expression,
    STATE(109), 1,
      sym__shift_expression,
    STATE(110), 1,
      sym__wrapped_shift_expression,
    STATE(111), 1,
      sym__additive_expression,
    STATE(112), 1,
      sym__wrapped_additive_expression,
    STATE(113), 1,
      sym__multiplicative_expression,
    STATE(115), 1,
      sym__wrapped_assignment_expression,
    STATE(121), 1,
      sym__bitwise_xor_expression,
    STATE(126), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(132), 1,
      sym__bitwise_and_expression,
    STATE(133), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(134), 1,
      sym__equality_expression,
    STATE(135), 1,
      sym__wrapped_equality_expression,
    STATE(141), 1,
      sym__assignment_expression,
    STATE(142), 1,
      sym__logical_or_expression,
    STATE(143), 1,
      sym__wrapped_logical_or_expression,
    STATE(144), 1,
      sym__logical_and_expression,
    STATE(145), 1,
      sym__wrapped_logical_and_expression,
    STATE(146), 1,
      sym__bitwise_or_expression,
    STATE(147), 1,
      sym__wrapped_bitwise_or_expression,
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
    STATE(114), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11223] = 33,
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
      sym__relational_expression,
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
      sym__equality_expression,
    STATE(314), 1,
      sym__wrapped_equality_expression,
    STATE(316), 1,
      sym__wrapped_relational_expression,
    STATE(318), 1,
      sym__wrapped_shift_expression,
    STATE(319), 1,
      sym__additive_expression,
    STATE(324), 1,
      sym__wrapped_additive_expression,
    STATE(326), 1,
      sym__multiplicative_expression,
    STATE(328), 1,
      sym__wrapped_assignment_expression,
    STATE(339), 1,
      sym__shift_expression,
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
    STATE(327), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11339] = 33,
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
      sym__wrapped_relational_expression,
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
      sym__shift_expression,
    STATE(170), 1,
      sym__additive_expression,
    STATE(171), 1,
      sym__wrapped_additive_expression,
    STATE(172), 1,
      sym__multiplicative_expression,
    STATE(174), 1,
      sym__wrapped_assignment_expression,
    STATE(191), 1,
      sym__wrapped_shift_expression,
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
    STATE(173), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11455] = 33,
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
      sym__relational_expression,
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
      sym__equality_expression,
    STATE(314), 1,
      sym__wrapped_equality_expression,
    STATE(316), 1,
      sym__wrapped_relational_expression,
    STATE(318), 1,
      sym__wrapped_shift_expression,
    STATE(319), 1,
      sym__additive_expression,
    STATE(324), 1,
      sym__wrapped_additive_expression,
    STATE(326), 1,
      sym__multiplicative_expression,
    STATE(339), 1,
      sym__shift_expression,
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
    ACTIONS(195), 5,
      sym_octal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(327), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11571] = 33,
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
      sym__relational_expression,
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
      sym__equality_expression,
    STATE(314), 1,
      sym__wrapped_equality_expression,
    STATE(316), 1,
      sym__wrapped_relational_expression,
    STATE(318), 1,
      sym__wrapped_shift_expression,
    STATE(319), 1,
      sym__additive_expression,
    STATE(324), 1,
      sym__wrapped_additive_expression,
    STATE(326), 1,
      sym__multiplicative_expression,
    STATE(339), 1,
      sym__shift_expression,
    STATE(435), 1,
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
    STATE(327), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11687] = 33,
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
      sym__relational_expression,
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
      sym__equality_expression,
    STATE(314), 1,
      sym__wrapped_equality_expression,
    STATE(316), 1,
      sym__wrapped_relational_expression,
    STATE(318), 1,
      sym__wrapped_shift_expression,
    STATE(319), 1,
      sym__additive_expression,
    STATE(324), 1,
      sym__wrapped_additive_expression,
    STATE(326), 1,
      sym__multiplicative_expression,
    STATE(339), 1,
      sym__shift_expression,
    STATE(442), 1,
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
    STATE(327), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11803] = 33,
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
      sym__relational_expression,
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
      sym__equality_expression,
    STATE(314), 1,
      sym__wrapped_equality_expression,
    STATE(316), 1,
      sym__wrapped_relational_expression,
    STATE(318), 1,
      sym__wrapped_shift_expression,
    STATE(319), 1,
      sym__additive_expression,
    STATE(324), 1,
      sym__wrapped_additive_expression,
    STATE(326), 1,
      sym__multiplicative_expression,
    STATE(332), 1,
      sym__wrapped_logical_and_expression,
    STATE(339), 1,
      sym__shift_expression,
    STATE(465), 1,
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
    STATE(327), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11919] = 5,
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
  [11976] = 4,
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
  [12030] = 4,
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
  [12084] = 4,
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
  [12138] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(275), 1,
      sym_bitwise_xor_operator,
    ACTIONS(271), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
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
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      sym_multiplicative_operator,
  [12172] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(277), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
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
  [12204] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(285), 1,
      sym_relational_operator,
    ACTIONS(281), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
    ACTIONS(283), 16,
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
  [12238] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(287), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
    ACTIONS(289), 17,
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
  [12270] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(295), 1,
      sym_shift_operator,
    ACTIONS(291), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
    ACTIONS(293), 16,
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
  [12304] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(297), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
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
  [12336] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(305), 1,
      sym_additive_operator,
    ACTIONS(301), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
    ACTIONS(303), 16,
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
  [12370] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(307), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
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
  [12402] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(315), 1,
      sym_multiplicative_operator,
    ACTIONS(311), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
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
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
  [12436] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    ACTIONS(323), 1,
      sym_assignment_operator,
    ACTIONS(317), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
    ACTIONS(319), 15,
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
  [12472] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(325), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
    ACTIONS(327), 17,
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
  [12504] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(329), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
    ACTIONS(331), 17,
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
  [12536] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(333), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
    ACTIONS(335), 17,
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
  [12568] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(341), 1,
      sym_logical_and_operator,
    ACTIONS(337), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
    ACTIONS(339), 16,
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
  [12602] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(347), 1,
      sym_bitwise_or_operator,
    ACTIONS(343), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
    ACTIONS(345), 16,
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
  [12636] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(349), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
    ACTIONS(351), 17,
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
  [12668] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(357), 1,
      sym_bitwise_and_operator,
    ACTIONS(353), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
    ACTIONS(355), 16,
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
  [12702] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(363), 1,
      sym_equality_operator,
    ACTIONS(359), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
    ACTIONS(361), 16,
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
  [12736] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(285), 1,
      sym_relational_operator,
    ACTIONS(365), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
    ACTIONS(367), 16,
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
  [12770] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(295), 1,
      sym_shift_operator,
    ACTIONS(369), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
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
  [12804] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(275), 1,
      sym_bitwise_xor_operator,
    ACTIONS(373), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
    ACTIONS(375), 16,
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
  [12838] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(315), 1,
      sym_multiplicative_operator,
    ACTIONS(377), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
    ACTIONS(379), 16,
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
  [12872] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(381), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
    ACTIONS(383), 17,
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
  [12904] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(385), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
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
  [12936] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(389), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
    ACTIONS(391), 17,
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
  [12968] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(393), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
    ACTIONS(395), 17,
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
  [13000] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(397), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
    ACTIONS(399), 17,
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
  [13032] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(357), 1,
      sym_bitwise_and_operator,
    ACTIONS(401), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
    ACTIONS(403), 16,
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
  [13066] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(405), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
    ACTIONS(407), 17,
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
  [13098] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(363), 1,
      sym_equality_operator,
    ACTIONS(409), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
    ACTIONS(411), 16,
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
  [13132] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(413), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
    ACTIONS(415), 17,
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
  [13164] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(417), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
    ACTIONS(419), 17,
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
  [13196] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(421), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
    ACTIONS(423), 17,
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
  [13228] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(425), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
    ACTIONS(427), 17,
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
  [13260] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(429), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
    ACTIONS(431), 17,
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
  [13292] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(433), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
    ACTIONS(435), 17,
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
  [13324] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(437), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
    ACTIONS(439), 17,
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
  [13356] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(445), 1,
      sym_logical_or_operator,
    ACTIONS(441), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
    ACTIONS(443), 16,
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
  [13390] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(447), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
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
  [13422] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(341), 1,
      sym_logical_and_operator,
    ACTIONS(451), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
    ACTIONS(453), 16,
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
  [13456] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(455), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
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
  [13488] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(347), 1,
      sym_bitwise_or_operator,
    ACTIONS(459), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
    ACTIONS(461), 16,
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
  [13522] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(305), 1,
      sym_additive_operator,
    ACTIONS(463), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
    ACTIONS(465), 16,
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
  [13556] = 4,
    ACTIONS(467), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(283), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(281), 14,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
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
  [13586] = 3,
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
      sym_line_separator,
      sym_data_separator,
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
  [13614] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(423), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(421), 14,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
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
  [13642] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(427), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(425), 14,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
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
  [13670] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(431), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(429), 14,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
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
  [13698] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(435), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(433), 14,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
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
  [13726] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(439), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(437), 14,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
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
  [13754] = 4,
    ACTIONS(469), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(443), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(441), 13,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
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
  [13784] = 3,
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
      sym_line_separator,
      sym_data_separator,
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
  [13812] = 4,
    ACTIONS(471), 1,
      sym_logical_and_operator,
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
      sym_line_separator,
      sym_data_separator,
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
  [13842] = 3,
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
      sym_line_separator,
      sym_data_separator,
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
  [13870] = 4,
    ACTIONS(473), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(461), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(459), 14,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
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
  [13900] = 3,
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
      sym_line_separator,
      sym_data_separator,
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
  [13928] = 4,
    ACTIONS(475), 1,
      sym_bitwise_xor_operator,
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
      sym_line_separator,
      sym_data_separator,
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
  [13958] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(399), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(397), 14,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
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
  [13986] = 4,
    ACTIONS(477), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(403), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(401), 14,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
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
  [14016] = 3,
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
      sym_line_separator,
      sym_data_separator,
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
  [14044] = 4,
    ACTIONS(479), 1,
      sym_equality_operator,
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
      sym_line_separator,
      sym_data_separator,
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
  [14074] = 3,
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
      sym_line_separator,
      sym_data_separator,
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
  [14102] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(289), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(287), 14,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
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
    ACTIONS(415), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(413), 14,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
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
  [14158] = 3,
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
      sym_line_separator,
      sym_data_separator,
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
  [14186] = 4,
    ACTIONS(481), 1,
      sym_additive_operator,
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
      sym_line_separator,
      sym_data_separator,
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
  [14216] = 3,
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
      sym_line_separator,
      sym_data_separator,
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
  [14244] = 4,
    ACTIONS(483), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(313), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(311), 14,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
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
  [14274] = 5,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(487), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(319), 4,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(317), 13,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
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
  [14306] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(327), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(325), 14,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
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
  [14334] = 3,
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
      sym_line_separator,
      sym_data_separator,
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
  [14362] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(335), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(333), 14,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
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
  [14390] = 4,
    ACTIONS(471), 1,
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
    ACTIONS(337), 13,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
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
  [14420] = 4,
    ACTIONS(473), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(345), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(343), 14,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
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
    ACTIONS(475), 1,
      sym_bitwise_xor_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(273), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(271), 13,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
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
    ACTIONS(477), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(355), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(353), 14,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
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
    ACTIONS(479), 1,
      sym_equality_operator,
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
      sym_line_separator,
      sym_data_separator,
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
    ACTIONS(467), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(367), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(365), 14,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
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
    ACTIONS(489), 1,
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
      sym_line_separator,
      sym_data_separator,
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
    ACTIONS(481), 1,
      sym_additive_operator,
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
      sym_line_separator,
      sym_data_separator,
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
    ACTIONS(483), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(379), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(377), 14,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
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
    ACTIONS(383), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(381), 14,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
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
    ACTIONS(387), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(385), 14,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
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
    ACTIONS(391), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(389), 14,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
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
    ACTIONS(395), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(393), 14,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
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
  [14772] = 4,
    ACTIONS(489), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(293), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(291), 13,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
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
  [14802] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(439), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(437), 13,
      sym__operand_separator,
      sym_line_separator,
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
  [14829] = 3,
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
      sym_line_separator,
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
  [14856] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(427), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(425), 13,
      sym__operand_separator,
      sym_line_separator,
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
  [14883] = 4,
    ACTIONS(491), 1,
      sym_additive_operator,
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
      sym_line_separator,
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
  [14912] = 3,
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
      sym_line_separator,
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
  [14939] = 4,
    ACTIONS(493), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(293), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(291), 12,
      sym__operand_separator,
      sym_line_separator,
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
  [14968] = 3,
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
      sym_line_separator,
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
  [14995] = 3,
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
      sym_line_separator,
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
  [15022] = 4,
    ACTIONS(495), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(443), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(441), 12,
      sym__operand_separator,
      sym_line_separator,
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
  [15051] = 3,
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
      sym_line_separator,
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
  [15078] = 3,
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
      sym_line_separator,
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
  [15105] = 4,
    ACTIONS(497), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(313), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(311), 13,
      sym__operand_separator,
      sym_line_separator,
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
  [15134] = 4,
    ACTIONS(499), 1,
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
      sym_line_separator,
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
  [15163] = 4,
    ACTIONS(501), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(345), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(343), 13,
      sym__operand_separator,
      sym_line_separator,
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
  [15192] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(419), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(417), 13,
      sym__operand_separator,
      sym_line_separator,
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
  [15219] = 5,
    ACTIONS(503), 1,
      anon_sym_LPAREN,
    ACTIONS(505), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(319), 4,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(317), 12,
      sym__operand_separator,
      sym_line_separator,
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
  [15250] = 3,
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
      sym_line_separator,
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
  [15277] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(415), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(413), 13,
      sym__operand_separator,
      sym_line_separator,
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
  [15304] = 4,
    ACTIONS(507), 1,
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
      sym_line_separator,
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
  [15333] = 4,
    ACTIONS(509), 1,
      sym_bitwise_xor_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(273), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(271), 12,
      sym__operand_separator,
      sym_line_separator,
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
  [15362] = 3,
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
      sym_line_separator,
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
  [15389] = 4,
    ACTIONS(499), 1,
      sym_logical_and_operator,
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
      sym_line_separator,
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
  [15418] = 4,
    ACTIONS(511), 1,
      sym_equality_operator,
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
      sym_line_separator,
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
  [15447] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(435), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(433), 13,
      sym__operand_separator,
      sym_line_separator,
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
  [15474] = 3,
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
      sym_line_separator,
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
  [15501] = 4,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(513), 4,
      sym_line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(419), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(417), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15530] = 3,
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
      sym_line_separator,
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
  [15557] = 3,
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
      sym_line_separator,
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
  [15584] = 3,
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
      sym_line_separator,
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
  [15611] = 4,
    ACTIONS(501), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(461), 4,
      sym_assignment_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(459), 13,
      sym__operand_separator,
      sym_line_separator,
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
  [15640] = 4,
    ACTIONS(515), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(367), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(365), 13,
      sym__operand_separator,
      sym_line_separator,
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
  [15669] = 3,
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
      sym_line_separator,
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
  [15696] = 4,
    ACTIONS(509), 1,
      sym_bitwise_xor_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(375), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(373), 12,
      sym__operand_separator,
      sym_line_separator,
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
  [15725] = 4,
    ACTIONS(497), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(379), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(377), 13,
      sym__operand_separator,
      sym_line_separator,
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
  [15754] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(399), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(397), 13,
      sym__operand_separator,
      sym_line_separator,
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
  [15781] = 4,
    ACTIONS(507), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(403), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(401), 13,
      sym__operand_separator,
      sym_line_separator,
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
  [15810] = 4,
    ACTIONS(493), 1,
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
      sym_line_separator,
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
  [15839] = 3,
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
      sym_line_separator,
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
  [15866] = 4,
    ACTIONS(511), 1,
      sym_equality_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(411), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(409), 12,
      sym__operand_separator,
      sym_line_separator,
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
  [15895] = 4,
    ACTIONS(491), 1,
      sym_additive_operator,
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
      sym_line_separator,
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
  [15924] = 3,
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
      sym_line_separator,
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
  [15951] = 4,
    ACTIONS(515), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(283), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_multiplicative_operator,
    ACTIONS(281), 13,
      sym__operand_separator,
      sym_line_separator,
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
  [15980] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(289), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(287), 13,
      sym__operand_separator,
      sym_line_separator,
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
  [16007] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(431), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(429), 13,
      sym__operand_separator,
      sym_line_separator,
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
  [16034] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(325), 3,
      sym_line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(327), 14,
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
  [16062] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(417), 3,
      sym_line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(419), 14,
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
  [16090] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(389), 3,
      sym_line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(391), 14,
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
  [16118] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(519), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(517), 3,
      sym_line_separator,
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
  [16148] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(393), 3,
      sym_line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(395), 14,
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
  [16176] = 4,
    ACTIONS(525), 1,
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
    ACTIONS(523), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16202] = 4,
    ACTIONS(527), 1,
      sym_additive_operator,
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
      sym_shift_operator,
  [16228] = 4,
    ACTIONS(529), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(379), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
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
  [16254] = 3,
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
  [16278] = 3,
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
  [16302] = 3,
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
  [16326] = 3,
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
  [16350] = 4,
    ACTIONS(531), 1,
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
    ACTIONS(523), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16376] = 3,
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
  [16400] = 4,
    ACTIONS(533), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(367), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [16426] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [16450] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [16474] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(431), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
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
  [16498] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [16522] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [16546] = 4,
    ACTIONS(535), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(443), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(441), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16572] = 3,
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
  [16596] = 4,
    ACTIONS(537), 1,
      sym_logical_and_operator,
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
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16622] = 3,
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
  [16646] = 4,
    ACTIONS(539), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(461), 4,
      sym_assignment_operator,
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
  [16672] = 3,
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
  [16696] = 4,
    ACTIONS(541), 1,
      sym_bitwise_xor_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(375), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(373), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16722] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [16746] = 4,
    ACTIONS(543), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(403), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [16772] = 3,
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
  [16796] = 4,
    ACTIONS(545), 1,
      sym_equality_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(411), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(409), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16822] = 3,
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
  [16846] = 4,
    ACTIONS(533), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(283), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [16872] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(289), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(287), 10,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [16896] = 4,
    ACTIONS(547), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(293), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(291), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [16922] = 3,
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
  [16946] = 4,
    ACTIONS(527), 1,
      sym_additive_operator,
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
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [16972] = 3,
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
  [16996] = 4,
    ACTIONS(529), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(313), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
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
  [17022] = 5,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(551), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(319), 4,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(317), 9,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17050] = 3,
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
  [17074] = 4,
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
    ACTIONS(523), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17100] = 4,
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
    ACTIONS(523), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17126] = 4,
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
    ACTIONS(523), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17152] = 4,
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
    ACTIONS(523), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17178] = 4,
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
    ACTIONS(523), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17204] = 4,
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
    ACTIONS(523), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17230] = 4,
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
    ACTIONS(523), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17256] = 4,
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
    ACTIONS(523), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17282] = 4,
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
    ACTIONS(523), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17308] = 4,
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
    ACTIONS(523), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17334] = 3,
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
  [17358] = 3,
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
  [17382] = 3,
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
  [17406] = 4,
    ACTIONS(537), 1,
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
  [17432] = 4,
    ACTIONS(539), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(345), 4,
      sym_assignment_operator,
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
  [17458] = 4,
    ACTIONS(541), 1,
      sym_bitwise_xor_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(273), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(271), 9,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17484] = 4,
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
  [17510] = 4,
    ACTIONS(545), 1,
      sym_equality_operator,
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
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17536] = 4,
    ACTIONS(547), 1,
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
  [17562] = 13,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    ACTIONS(577), 1,
      anon_sym_COMMA,
    ACTIONS(581), 1,
      sym_assignment_operator,
    ACTIONS(583), 1,
      sym__operand_separator,
    ACTIONS(585), 1,
      sym_data_separator,
    STATE(341), 1,
      aux_sym_numeric_operands_repeat1,
    STATE(368), 1,
      aux_sym_numeric_operands_repeat3,
    STATE(378), 1,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(573), 2,
      sym_line_separator,
      ts_builtin_sym_end,
    ACTIONS(575), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(579), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [17605] = 3,
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
  [17627] = 4,
    ACTIONS(587), 1,
      sym_additive_operator,
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
      sym_shift_operator,
  [17651] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [17673] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [17695] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(431), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(429), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17717] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [17739] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [17761] = 4,
    ACTIONS(589), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(443), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(441), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17785] = 3,
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
  [17807] = 4,
    ACTIONS(591), 1,
      sym_logical_and_operator,
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
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17831] = 3,
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
  [17853] = 4,
    ACTIONS(593), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(461), 4,
      sym_assignment_operator,
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
  [17877] = 3,
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
  [17899] = 4,
    ACTIONS(595), 1,
      sym_bitwise_xor_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(375), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(373), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [17923] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
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
  [17945] = 4,
    ACTIONS(597), 1,
      sym_bitwise_and_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(403), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
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
  [17969] = 3,
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
  [17991] = 4,
    ACTIONS(599), 1,
      sym_equality_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(411), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(409), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18015] = 4,
    ACTIONS(601), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(379), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(377), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18039] = 4,
    ACTIONS(603), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(283), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [18063] = 3,
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
  [18085] = 4,
    ACTIONS(605), 1,
      sym_shift_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(293), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(291), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
  [18109] = 3,
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
  [18131] = 3,
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
  [18153] = 3,
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
  [18175] = 3,
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
  [18197] = 3,
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
  [18219] = 4,
    ACTIONS(587), 1,
      sym_additive_operator,
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
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
  [18243] = 3,
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
  [18265] = 3,
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
  [18287] = 4,
    ACTIONS(601), 1,
      sym_multiplicative_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(313), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(311), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18311] = 5,
    ACTIONS(607), 1,
      anon_sym_LPAREN,
    ACTIONS(609), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(319), 4,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(317), 7,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18337] = 3,
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
  [18359] = 3,
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
  [18381] = 3,
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
  [18403] = 4,
    ACTIONS(591), 1,
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
  [18427] = 4,
    ACTIONS(593), 1,
      sym_bitwise_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(345), 4,
      sym_assignment_operator,
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
  [18451] = 4,
    ACTIONS(595), 1,
      sym_bitwise_xor_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(273), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(271), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18475] = 4,
    ACTIONS(597), 1,
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
  [18499] = 4,
    ACTIONS(599), 1,
      sym_equality_operator,
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
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18523] = 4,
    ACTIONS(603), 1,
      sym_relational_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(367), 4,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
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
  [18547] = 4,
    ACTIONS(605), 1,
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
  [18571] = 3,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(289), 5,
      sym_assignment_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_multiplicative_operator,
    ACTIONS(287), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [18593] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(445), 1,
      sym_logical_or_operator,
    ACTIONS(413), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
    ACTIONS(415), 7,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
      sym_assignment_operator,
  [18618] = 11,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(577), 1,
      anon_sym_COMMA,
    ACTIONS(583), 1,
      sym__operand_separator,
    ACTIONS(585), 1,
      sym_data_separator,
    STATE(345), 1,
      aux_sym_numeric_operands_repeat1,
    STATE(373), 1,
      aux_sym_numeric_operands_repeat3,
    STATE(381), 1,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(579), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(611), 2,
      sym_line_separator,
      ts_builtin_sym_end,
    ACTIONS(613), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [18655] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    ACTIONS(581), 1,
      sym_assignment_operator,
    ACTIONS(615), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
    ACTIONS(617), 5,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
  [18681] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    ACTIONS(581), 1,
      sym_assignment_operator,
    ACTIONS(619), 4,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
    ACTIONS(621), 5,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_COMMA,
      anon_sym_SPACE,
      anon_sym_TAB,
  [18707] = 3,
    ACTIONS(469), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(413), 9,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      aux_sym__control_operand_separator_token1,
      sym_assignment_operator,
  [18726] = 8,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(623), 1,
      anon_sym_COMMA,
    STATE(345), 1,
      aux_sym_numeric_operands_repeat1,
    ACTIONS(615), 2,
      sym_line_separator,
      ts_builtin_sym_end,
    ACTIONS(617), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(626), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(629), 2,
      sym__operand_separator,
      sym_data_separator,
  [18755] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(632), 1,
      aux_sym__whitespace_token1,
    ACTIONS(637), 1,
      anon_sym_DQUOTE,
    ACTIONS(517), 2,
      sym_line_separator,
      ts_builtin_sym_end,
    ACTIONS(519), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(635), 2,
      sym_block_comment,
      anon_sym_COMMA,
    STATE(349), 2,
      sym_string,
      aux_sym_string_operands_repeat1,
  [18781] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(643), 1,
      aux_sym__whitespace_token1,
    ACTIONS(649), 1,
      anon_sym_DQUOTE,
    ACTIONS(639), 2,
      sym_line_separator,
      ts_builtin_sym_end,
    ACTIONS(641), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(646), 2,
      sym_block_comment,
      anon_sym_COMMA,
    STATE(347), 2,
      sym_string,
      aux_sym_string_operands_repeat1,
  [18807] = 5,
    STATE(8), 1,
      sym__control_operand_separator,
    STATE(348), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(654), 3,
      sym__operand_separator,
      sym_data_separator,
      aux_sym__control_operand_separator_token1,
    ACTIONS(652), 4,
      sym_line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [18829] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(637), 1,
      anon_sym_DQUOTE,
    ACTIONS(661), 1,
      aux_sym__whitespace_token1,
    ACTIONS(635), 2,
      sym_block_comment,
      anon_sym_COMMA,
    ACTIONS(657), 2,
      sym_line_separator,
      ts_builtin_sym_end,
    ACTIONS(659), 2,
      anon_sym_SEMI,
      sym_line_comment,
    STATE(347), 2,
      sym_string,
      aux_sym_string_operands_repeat1,
  [18855] = 5,
    STATE(8), 1,
      sym__control_operand_separator,
    STATE(348), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(666), 3,
      sym__operand_separator,
      sym_data_separator,
      aux_sym__control_operand_separator_token1,
    ACTIONS(664), 4,
      sym_line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [18877] = 4,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(670), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(668), 7,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      aux_sym__control_operand_separator_token1,
  [18897] = 5,
    STATE(8), 1,
      sym__control_operand_separator,
    STATE(350), 1,
      aux_sym_control_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(666), 3,
      sym__operand_separator,
      sym_data_separator,
      aux_sym__control_operand_separator_token1,
    ACTIONS(672), 4,
      sym_line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [18919] = 3,
    ACTIONS(495), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(413), 8,
      sym__operand_separator,
      sym_line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
  [18937] = 4,
    ACTIONS(503), 1,
      anon_sym_LPAREN,
    ACTIONS(676), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(674), 6,
      sym__operand_separator,
      sym_line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_COMMA,
  [18956] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(682), 1,
      aux_sym__whitespace_token1,
    ACTIONS(684), 1,
      anon_sym_COMMA,
    STATE(357), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(678), 2,
      sym_line_separator,
      ts_builtin_sym_end,
    ACTIONS(680), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [18980] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(686), 3,
      sym_line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(688), 5,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
  [18996] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(694), 1,
      aux_sym__whitespace_token1,
    ACTIONS(697), 1,
      anon_sym_COMMA,
    STATE(357), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(690), 2,
      sym_line_separator,
      ts_builtin_sym_end,
    ACTIONS(692), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [19020] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    STATE(358), 1,
      aux_sym_numeric_operands_repeat3,
    ACTIONS(700), 2,
      sym_line_separator,
      ts_builtin_sym_end,
    ACTIONS(702), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(704), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19042] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(639), 3,
      sym_line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(641), 5,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
  [19058] = 4,
    STATE(360), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(709), 2,
      sym__operand_separator,
      anon_sym_COMMA,
    ACTIONS(707), 4,
      sym_line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19076] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(652), 7,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      aux_sym__control_operand_separator_token1,
  [19090] = 5,
    ACTIONS(714), 1,
      anon_sym_COMMA,
    ACTIONS(716), 1,
      sym__operand_separator,
    STATE(360), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(712), 4,
      sym_line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19110] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(718), 7,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      aux_sym__control_operand_separator_token1,
  [19124] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(720), 7,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      aux_sym__control_operand_separator_token1,
  [19138] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(726), 1,
      aux_sym__whitespace_token1,
    ACTIONS(728), 1,
      sym_block_comment,
    ACTIONS(730), 1,
      anon_sym_LPAREN,
    STATE(398), 1,
      sym__call_expression,
    ACTIONS(722), 2,
      sym_line_separator,
      ts_builtin_sym_end,
    ACTIONS(724), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [19162] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(736), 1,
      anon_sym_COMMA,
    ACTIONS(732), 2,
      sym_line_separator,
      ts_builtin_sym_end,
    ACTIONS(734), 4,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19182] = 7,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(682), 1,
      aux_sym__whitespace_token1,
    ACTIONS(684), 1,
      anon_sym_COMMA,
    STATE(355), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(738), 2,
      sym_line_separator,
      ts_builtin_sym_end,
    ACTIONS(740), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [19206] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    STATE(358), 1,
      aux_sym_numeric_operands_repeat3,
    ACTIONS(611), 2,
      sym_line_separator,
      ts_builtin_sym_end,
    ACTIONS(613), 2,
      anon_sym_SEMI,
      sym_line_comment,
    ACTIONS(742), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [19228] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(744), 3,
      sym_line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(746), 5,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
  [19244] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(744), 7,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      aux_sym__control_operand_separator_token1,
  [19258] = 5,
    ACTIONS(714), 1,
      anon_sym_COMMA,
    ACTIONS(750), 1,
      sym__operand_separator,
    STATE(362), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(748), 4,
      sym_line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19278] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(686), 7,
      sym__operand_separator,
      sym_line_separator,
      sym_data_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      aux_sym__control_operand_separator_token1,
  [19292] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    STATE(358), 1,
      aux_sym_numeric_operands_repeat3,
    ACTIONS(742), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(752), 2,
      sym_line_separator,
      ts_builtin_sym_end,
    ACTIONS(754), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [19314] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(690), 3,
      sym_line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(692), 3,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_COMMA,
  [19331] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(686), 6,
      sym__operand_separator,
      sym_line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_COMMA,
  [19344] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(756), 6,
      sym__operand_separator,
      sym_line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_COMMA,
  [19357] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(758), 3,
      sym_line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(760), 3,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_COMMA,
  [19374] = 4,
    ACTIONS(762), 1,
      sym_data_separator,
    STATE(379), 1,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(611), 4,
      sym_line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19391] = 4,
    ACTIONS(766), 1,
      sym_data_separator,
    STATE(379), 1,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(764), 4,
      sym_line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19408] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(744), 6,
      sym__operand_separator,
      sym_line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
      anon_sym_COMMA,
  [19421] = 4,
    ACTIONS(762), 1,
      sym_data_separator,
    STATE(379), 1,
      aux_sym_numeric_operands_repeat2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(752), 4,
      sym_line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19438] = 3,
    ACTIONS(535), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(413), 5,
      sym__operand_separator,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_assignment_operator,
  [19453] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(773), 1,
      aux_sym__whitespace_token1,
    ACTIONS(775), 1,
      anon_sym_LPAREN,
    ACTIONS(769), 2,
      sym_line_separator,
      ts_builtin_sym_end,
    ACTIONS(771), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [19474] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(777), 3,
      sym_line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(779), 3,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
  [19488] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(785), 1,
      aux_sym__whitespace_token1,
    ACTIONS(787), 1,
      sym_block_comment,
    ACTIONS(781), 2,
      sym_line_separator,
      ts_builtin_sym_end,
    ACTIONS(783), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [19506] = 5,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(789), 1,
      anon_sym_RPAREN,
    ACTIONS(792), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(674), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [19524] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(794), 3,
      sym_line_separator,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
    ACTIONS(796), 3,
      anon_sym_SEMI,
      sym_line_comment,
      sym_block_comment,
  [19538] = 4,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(792), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(674), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [19554] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(802), 1,
      aux_sym__whitespace_token1,
    ACTIONS(804), 1,
      sym_block_comment,
    ACTIONS(798), 2,
      sym_line_separator,
      ts_builtin_sym_end,
    ACTIONS(800), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [19572] = 5,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(792), 1,
      sym_assignment_operator,
    ACTIONS(806), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(674), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [19590] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(813), 1,
      aux_sym__whitespace_token1,
    ACTIONS(809), 2,
      sym_line_separator,
      ts_builtin_sym_end,
    ACTIONS(811), 2,
      anon_sym_SEMI,
      sym_line_comment,
  [19608] = 5,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(792), 1,
      sym_assignment_operator,
    ACTIONS(815), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(674), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [19626] = 5,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(792), 1,
      sym_assignment_operator,
    ACTIONS(818), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(674), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [19644] = 5,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(792), 1,
      sym_assignment_operator,
    ACTIONS(821), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(674), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [19662] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(824), 1,
      anon_sym_DQUOTE,
    STATE(395), 1,
      aux_sym_string_repeat1,
    ACTIONS(826), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [19679] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(680), 1,
      anon_sym_RPAREN,
    ACTIONS(829), 1,
      aux_sym__whitespace_token1,
    ACTIONS(832), 1,
      anon_sym_COMMA,
    STATE(418), 1,
      aux_sym_macro_parameters_repeat1,
  [19698] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(834), 4,
      sym_line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19709] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(836), 4,
      sym_line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19720] = 4,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(840), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(838), 2,
      sym_line_separator,
      anon_sym_SEMI,
  [19735] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(513), 4,
      sym_line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19746] = 4,
    ACTIONS(842), 1,
      ts_builtin_sym_end,
    ACTIONS(844), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(838), 2,
      sym_line_separator,
      anon_sym_SEMI,
  [19761] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(846), 4,
      sym_line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19772] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(848), 1,
      anon_sym_DQUOTE,
    STATE(395), 1,
      aux_sym_string_repeat1,
    ACTIONS(850), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [19789] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(852), 4,
      sym_line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19800] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(854), 4,
      sym_line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19811] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(856), 4,
      sym_line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19822] = 5,
    ACTIONS(712), 1,
      anon_sym_RPAREN,
    ACTIONS(858), 1,
      anon_sym_COMMA,
    ACTIONS(860), 1,
      sym__operand_separator,
    STATE(429), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [19839] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(862), 4,
      sym_line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19850] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(864), 1,
      anon_sym_DQUOTE,
    STATE(411), 1,
      aux_sym_string_repeat1,
    ACTIONS(866), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [19867] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(868), 4,
      sym_line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19878] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(870), 1,
      anon_sym_DQUOTE,
    STATE(395), 1,
      aux_sym_string_repeat1,
    ACTIONS(850), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [19895] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(834), 4,
      sym_line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19906] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(872), 4,
      sym_line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19917] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(874), 4,
      sym_line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19928] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(876), 1,
      anon_sym_DQUOTE,
    STATE(417), 1,
      aux_sym_string_repeat1,
    ACTIONS(878), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [19945] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(880), 4,
      sym_line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [19956] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(882), 1,
      anon_sym_DQUOTE,
    STATE(395), 1,
      aux_sym_string_repeat1,
    ACTIONS(850), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [19973] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(692), 1,
      anon_sym_RPAREN,
    ACTIONS(884), 1,
      aux_sym__whitespace_token1,
    ACTIONS(887), 1,
      anon_sym_COMMA,
    STATE(418), 1,
      aux_sym_macro_parameters_repeat1,
  [19992] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(890), 4,
      sym_line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20003] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(892), 1,
      anon_sym_DQUOTE,
    STATE(421), 1,
      aux_sym_string_repeat1,
    ACTIONS(894), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20020] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(896), 1,
      anon_sym_DQUOTE,
    STATE(395), 1,
      aux_sym_string_repeat1,
    ACTIONS(850), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20037] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(898), 1,
      aux_sym__whitespace_token1,
    ACTIONS(900), 1,
      anon_sym_RPAREN,
    ACTIONS(902), 1,
      sym_macro_parameter,
    STATE(447), 1,
      sym_macro_parameters,
  [20056] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(834), 4,
      sym_line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20067] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(904), 4,
      sym_line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20078] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(906), 4,
      sym_line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20089] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(740), 1,
      anon_sym_RPAREN,
    ACTIONS(832), 1,
      anon_sym_COMMA,
    ACTIONS(908), 1,
      aux_sym__whitespace_token1,
    STATE(396), 1,
      aux_sym_macro_parameters_repeat1,
  [20108] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(911), 4,
      sym_line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20119] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(913), 4,
      sym_line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20130] = 4,
    ACTIONS(707), 1,
      anon_sym_RPAREN,
    STATE(429), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(915), 2,
      sym__operand_separator,
      anon_sym_COMMA,
  [20145] = 5,
    ACTIONS(748), 1,
      anon_sym_RPAREN,
    ACTIONS(858), 1,
      anon_sym_COMMA,
    ACTIONS(918), 1,
      sym__operand_separator,
    STATE(407), 1,
      aux_sym_operands_repeat1,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20162] = 3,
    ACTIONS(589), 1,
      sym_logical_or_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(413), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_assignment_operator,
  [20175] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(920), 4,
      sym_line_separator,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_line_comment,
  [20186] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(922), 1,
      anon_sym_DQUOTE,
    STATE(403), 1,
      aux_sym_string_repeat1,
    ACTIONS(924), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [20203] = 6,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(902), 1,
      sym_macro_parameter,
    ACTIONS(926), 1,
      aux_sym__whitespace_token1,
    ACTIONS(928), 1,
      anon_sym_RPAREN,
    STATE(461), 1,
      sym_macro_parameters,
  [20222] = 4,
    ACTIONS(607), 1,
      anon_sym_LPAREN,
    ACTIONS(930), 1,
      anon_sym_RPAREN,
    ACTIONS(932), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20236] = 5,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    ACTIONS(936), 1,
      sym_macro_parameter,
    STATE(427), 1,
      sym_macro_parameters,
  [20252] = 4,
    ACTIONS(607), 1,
      anon_sym_LPAREN,
    ACTIONS(932), 1,
      sym_assignment_operator,
    ACTIONS(938), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20266] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(690), 1,
      aux_sym__whitespace_token1,
    ACTIONS(692), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20280] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(686), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20290] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(756), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20300] = 3,
    ACTIONS(940), 1,
      sym_line_comment,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(838), 2,
      sym_line_separator,
      anon_sym_SEMI,
  [20312] = 4,
    ACTIONS(607), 1,
      anon_sym_LPAREN,
    ACTIONS(932), 1,
      sym_assignment_operator,
    ACTIONS(942), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20326] = 4,
    ACTIONS(607), 1,
      anon_sym_LPAREN,
    ACTIONS(932), 1,
      sym_assignment_operator,
    ACTIONS(944), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20340] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(758), 1,
      aux_sym__whitespace_token1,
    ACTIONS(760), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20354] = 2,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
    ACTIONS(744), 3,
      sym__operand_separator,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [20364] = 4,
    ACTIONS(607), 1,
      anon_sym_LPAREN,
    ACTIONS(932), 1,
      sym_assignment_operator,
    ACTIONS(946), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20378] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(948), 1,
      aux_sym__whitespace_token1,
    ACTIONS(950), 1,
      anon_sym_RPAREN,
  [20391] = 3,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    STATE(359), 1,
      sym_string,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20402] = 3,
    ACTIONS(932), 1,
      sym_assignment_operator,
    ACTIONS(952), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20413] = 3,
    ACTIONS(842), 1,
      ts_builtin_sym_end,
    ACTIONS(954), 1,
      sym_line_separator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20424] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(838), 1,
      aux_sym__statement_token1,
  [20437] = 3,
    ACTIONS(954), 1,
      sym_line_separator,
    ACTIONS(956), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20448] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(838), 1,
      aux_sym__statement_token1,
    ACTIONS(842), 1,
      ts_builtin_sym_end,
  [20461] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(958), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [20472] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(960), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [20483] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(962), 1,
      anon_sym_COMMA,
    ACTIONS(964), 1,
      sym_macro_parameter,
  [20496] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(966), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [20507] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(968), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [20518] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(970), 2,
      aux_sym_char_token1,
      sym__escape_sequence,
  [20529] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(972), 1,
      anon_sym_COMMA,
    ACTIONS(974), 1,
      sym_macro_parameter,
  [20542] = 4,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(976), 1,
      aux_sym__whitespace_token1,
    ACTIONS(978), 1,
      anon_sym_RPAREN,
  [20555] = 3,
    ACTIONS(503), 1,
      anon_sym_LPAREN,
    ACTIONS(932), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20566] = 3,
    ACTIONS(549), 1,
      anon_sym_LPAREN,
    ACTIONS(932), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20577] = 3,
    ACTIONS(932), 1,
      sym_assignment_operator,
    ACTIONS(980), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20588] = 3,
    ACTIONS(607), 1,
      anon_sym_LPAREN,
    ACTIONS(932), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20599] = 3,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(932), 1,
      sym_assignment_operator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20610] = 2,
    ACTIONS(982), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20618] = 2,
    ACTIONS(984), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20626] = 2,
    ACTIONS(986), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20634] = 2,
    ACTIONS(988), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20642] = 2,
    ACTIONS(990), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20650] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(974), 1,
      sym_macro_parameter,
  [20660] = 2,
    ACTIONS(992), 1,
      sym_macro_name,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20668] = 2,
    ACTIONS(994), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20676] = 2,
    ACTIONS(996), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20684] = 2,
    ACTIONS(998), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20692] = 2,
    ACTIONS(1000), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20700] = 2,
    ACTIONS(1002), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20708] = 2,
    ACTIONS(1004), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20716] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(1006), 1,
      aux_sym__whitespace_token1,
    ACTIONS(1008), 1,
      sym_block_comment,
  [20726] = 2,
    ACTIONS(1010), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20734] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(1012), 1,
      aux_sym__whitespace_token1,
    ACTIONS(1014), 1,
      sym_block_comment,
  [20744] = 2,
    ACTIONS(1016), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20752] = 2,
    ACTIONS(1018), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20760] = 2,
    ACTIONS(1020), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20768] = 2,
    ACTIONS(1022), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20776] = 2,
    ACTIONS(1024), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20784] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(964), 1,
      sym_macro_parameter,
  [20794] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1026), 1,
      sym_macro_parameter,
  [20804] = 2,
    ACTIONS(1028), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20812] = 2,
    ACTIONS(954), 1,
      sym_line_separator,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20820] = 2,
    ACTIONS(1030), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20828] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(1032), 1,
      sym_macro_parameter,
  [20838] = 2,
    ACTIONS(1034), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20846] = 2,
    ACTIONS(1036), 1,
      anon_sym_SQUOTE,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20854] = 2,
    ACTIONS(1038), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20862] = 2,
    ACTIONS(1040), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20870] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(838), 1,
      aux_sym__statement_token1,
  [20880] = 2,
    ACTIONS(1042), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20888] = 2,
    ACTIONS(1044), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20896] = 2,
    ACTIONS(1046), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20904] = 3,
    ACTIONS(3), 1,
      sym__operator_space,
    ACTIONS(1048), 1,
      aux_sym__whitespace_token1,
    ACTIONS(1050), 1,
      sym_block_comment,
  [20914] = 2,
    ACTIONS(1052), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20922] = 2,
    ACTIONS(1054), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20930] = 2,
    ACTIONS(1056), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
  [20938] = 2,
    ACTIONS(1058), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__operator_space,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 140,
  [SMALL_STATE(4)] = 275,
  [SMALL_STATE(5)] = 373,
  [SMALL_STATE(6)] = 471,
  [SMALL_STATE(7)] = 600,
  [SMALL_STATE(8)] = 729,
  [SMALL_STATE(9)] = 860,
  [SMALL_STATE(10)] = 989,
  [SMALL_STATE(11)] = 1114,
  [SMALL_STATE(12)] = 1247,
  [SMALL_STATE(13)] = 1370,
  [SMALL_STATE(14)] = 1500,
  [SMALL_STATE(15)] = 1630,
  [SMALL_STATE(16)] = 1760,
  [SMALL_STATE(17)] = 1890,
  [SMALL_STATE(18)] = 2016,
  [SMALL_STATE(19)] = 2142,
  [SMALL_STATE(20)] = 2272,
  [SMALL_STATE(21)] = 2402,
  [SMALL_STATE(22)] = 2532,
  [SMALL_STATE(23)] = 2662,
  [SMALL_STATE(24)] = 2792,
  [SMALL_STATE(25)] = 2922,
  [SMALL_STATE(26)] = 3052,
  [SMALL_STATE(27)] = 3182,
  [SMALL_STATE(28)] = 3311,
  [SMALL_STATE(29)] = 3434,
  [SMALL_STATE(30)] = 3557,
  [SMALL_STATE(31)] = 3673,
  [SMALL_STATE(32)] = 3789,
  [SMALL_STATE(33)] = 3905,
  [SMALL_STATE(34)] = 4021,
  [SMALL_STATE(35)] = 4137,
  [SMALL_STATE(36)] = 4253,
  [SMALL_STATE(37)] = 4369,
  [SMALL_STATE(38)] = 4485,
  [SMALL_STATE(39)] = 4601,
  [SMALL_STATE(40)] = 4717,
  [SMALL_STATE(41)] = 4833,
  [SMALL_STATE(42)] = 4949,
  [SMALL_STATE(43)] = 5065,
  [SMALL_STATE(44)] = 5183,
  [SMALL_STATE(45)] = 5299,
  [SMALL_STATE(46)] = 5415,
  [SMALL_STATE(47)] = 5531,
  [SMALL_STATE(48)] = 5647,
  [SMALL_STATE(49)] = 5763,
  [SMALL_STATE(50)] = 5879,
  [SMALL_STATE(51)] = 5995,
  [SMALL_STATE(52)] = 6111,
  [SMALL_STATE(53)] = 6227,
  [SMALL_STATE(54)] = 6343,
  [SMALL_STATE(55)] = 6459,
  [SMALL_STATE(56)] = 6575,
  [SMALL_STATE(57)] = 6693,
  [SMALL_STATE(58)] = 6809,
  [SMALL_STATE(59)] = 6925,
  [SMALL_STATE(60)] = 7041,
  [SMALL_STATE(61)] = 7157,
  [SMALL_STATE(62)] = 7273,
  [SMALL_STATE(63)] = 7389,
  [SMALL_STATE(64)] = 7505,
  [SMALL_STATE(65)] = 7621,
  [SMALL_STATE(66)] = 7737,
  [SMALL_STATE(67)] = 7853,
  [SMALL_STATE(68)] = 7971,
  [SMALL_STATE(69)] = 8087,
  [SMALL_STATE(70)] = 8203,
  [SMALL_STATE(71)] = 8319,
  [SMALL_STATE(72)] = 8435,
  [SMALL_STATE(73)] = 8551,
  [SMALL_STATE(74)] = 8667,
  [SMALL_STATE(75)] = 8783,
  [SMALL_STATE(76)] = 8899,
  [SMALL_STATE(77)] = 9015,
  [SMALL_STATE(78)] = 9133,
  [SMALL_STATE(79)] = 9249,
  [SMALL_STATE(80)] = 9365,
  [SMALL_STATE(81)] = 9481,
  [SMALL_STATE(82)] = 9597,
  [SMALL_STATE(83)] = 9713,
  [SMALL_STATE(84)] = 9829,
  [SMALL_STATE(85)] = 9945,
  [SMALL_STATE(86)] = 10061,
  [SMALL_STATE(87)] = 10177,
  [SMALL_STATE(88)] = 10293,
  [SMALL_STATE(89)] = 10411,
  [SMALL_STATE(90)] = 10527,
  [SMALL_STATE(91)] = 10643,
  [SMALL_STATE(92)] = 10759,
  [SMALL_STATE(93)] = 10875,
  [SMALL_STATE(94)] = 10991,
  [SMALL_STATE(95)] = 11107,
  [SMALL_STATE(96)] = 11223,
  [SMALL_STATE(97)] = 11339,
  [SMALL_STATE(98)] = 11455,
  [SMALL_STATE(99)] = 11571,
  [SMALL_STATE(100)] = 11687,
  [SMALL_STATE(101)] = 11803,
  [SMALL_STATE(102)] = 11919,
  [SMALL_STATE(103)] = 11976,
  [SMALL_STATE(104)] = 12030,
  [SMALL_STATE(105)] = 12084,
  [SMALL_STATE(106)] = 12138,
  [SMALL_STATE(107)] = 12172,
  [SMALL_STATE(108)] = 12204,
  [SMALL_STATE(109)] = 12238,
  [SMALL_STATE(110)] = 12270,
  [SMALL_STATE(111)] = 12304,
  [SMALL_STATE(112)] = 12336,
  [SMALL_STATE(113)] = 12370,
  [SMALL_STATE(114)] = 12402,
  [SMALL_STATE(115)] = 12436,
  [SMALL_STATE(116)] = 12472,
  [SMALL_STATE(117)] = 12504,
  [SMALL_STATE(118)] = 12536,
  [SMALL_STATE(119)] = 12568,
  [SMALL_STATE(120)] = 12602,
  [SMALL_STATE(121)] = 12636,
  [SMALL_STATE(122)] = 12668,
  [SMALL_STATE(123)] = 12702,
  [SMALL_STATE(124)] = 12736,
  [SMALL_STATE(125)] = 12770,
  [SMALL_STATE(126)] = 12804,
  [SMALL_STATE(127)] = 12838,
  [SMALL_STATE(128)] = 12872,
  [SMALL_STATE(129)] = 12904,
  [SMALL_STATE(130)] = 12936,
  [SMALL_STATE(131)] = 12968,
  [SMALL_STATE(132)] = 13000,
  [SMALL_STATE(133)] = 13032,
  [SMALL_STATE(134)] = 13066,
  [SMALL_STATE(135)] = 13098,
  [SMALL_STATE(136)] = 13132,
  [SMALL_STATE(137)] = 13164,
  [SMALL_STATE(138)] = 13196,
  [SMALL_STATE(139)] = 13228,
  [SMALL_STATE(140)] = 13260,
  [SMALL_STATE(141)] = 13292,
  [SMALL_STATE(142)] = 13324,
  [SMALL_STATE(143)] = 13356,
  [SMALL_STATE(144)] = 13390,
  [SMALL_STATE(145)] = 13422,
  [SMALL_STATE(146)] = 13456,
  [SMALL_STATE(147)] = 13488,
  [SMALL_STATE(148)] = 13522,
  [SMALL_STATE(149)] = 13556,
  [SMALL_STATE(150)] = 13586,
  [SMALL_STATE(151)] = 13614,
  [SMALL_STATE(152)] = 13642,
  [SMALL_STATE(153)] = 13670,
  [SMALL_STATE(154)] = 13698,
  [SMALL_STATE(155)] = 13726,
  [SMALL_STATE(156)] = 13754,
  [SMALL_STATE(157)] = 13784,
  [SMALL_STATE(158)] = 13812,
  [SMALL_STATE(159)] = 13842,
  [SMALL_STATE(160)] = 13870,
  [SMALL_STATE(161)] = 13900,
  [SMALL_STATE(162)] = 13928,
  [SMALL_STATE(163)] = 13958,
  [SMALL_STATE(164)] = 13986,
  [SMALL_STATE(165)] = 14016,
  [SMALL_STATE(166)] = 14044,
  [SMALL_STATE(167)] = 14074,
  [SMALL_STATE(168)] = 14102,
  [SMALL_STATE(169)] = 14130,
  [SMALL_STATE(170)] = 14158,
  [SMALL_STATE(171)] = 14186,
  [SMALL_STATE(172)] = 14216,
  [SMALL_STATE(173)] = 14244,
  [SMALL_STATE(174)] = 14274,
  [SMALL_STATE(175)] = 14306,
  [SMALL_STATE(176)] = 14334,
  [SMALL_STATE(177)] = 14362,
  [SMALL_STATE(178)] = 14390,
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
  [SMALL_STATE(192)] = 14802,
  [SMALL_STATE(193)] = 14829,
  [SMALL_STATE(194)] = 14856,
  [SMALL_STATE(195)] = 14883,
  [SMALL_STATE(196)] = 14912,
  [SMALL_STATE(197)] = 14939,
  [SMALL_STATE(198)] = 14968,
  [SMALL_STATE(199)] = 14995,
  [SMALL_STATE(200)] = 15022,
  [SMALL_STATE(201)] = 15051,
  [SMALL_STATE(202)] = 15078,
  [SMALL_STATE(203)] = 15105,
  [SMALL_STATE(204)] = 15134,
  [SMALL_STATE(205)] = 15163,
  [SMALL_STATE(206)] = 15192,
  [SMALL_STATE(207)] = 15219,
  [SMALL_STATE(208)] = 15250,
  [SMALL_STATE(209)] = 15277,
  [SMALL_STATE(210)] = 15304,
  [SMALL_STATE(211)] = 15333,
  [SMALL_STATE(212)] = 15362,
  [SMALL_STATE(213)] = 15389,
  [SMALL_STATE(214)] = 15418,
  [SMALL_STATE(215)] = 15447,
  [SMALL_STATE(216)] = 15474,
  [SMALL_STATE(217)] = 15501,
  [SMALL_STATE(218)] = 15530,
  [SMALL_STATE(219)] = 15557,
  [SMALL_STATE(220)] = 15584,
  [SMALL_STATE(221)] = 15611,
  [SMALL_STATE(222)] = 15640,
  [SMALL_STATE(223)] = 15669,
  [SMALL_STATE(224)] = 15696,
  [SMALL_STATE(225)] = 15725,
  [SMALL_STATE(226)] = 15754,
  [SMALL_STATE(227)] = 15781,
  [SMALL_STATE(228)] = 15810,
  [SMALL_STATE(229)] = 15839,
  [SMALL_STATE(230)] = 15866,
  [SMALL_STATE(231)] = 15895,
  [SMALL_STATE(232)] = 15924,
  [SMALL_STATE(233)] = 15951,
  [SMALL_STATE(234)] = 15980,
  [SMALL_STATE(235)] = 16007,
  [SMALL_STATE(236)] = 16034,
  [SMALL_STATE(237)] = 16062,
  [SMALL_STATE(238)] = 16090,
  [SMALL_STATE(239)] = 16118,
  [SMALL_STATE(240)] = 16148,
  [SMALL_STATE(241)] = 16176,
  [SMALL_STATE(242)] = 16202,
  [SMALL_STATE(243)] = 16228,
  [SMALL_STATE(244)] = 16254,
  [SMALL_STATE(245)] = 16278,
  [SMALL_STATE(246)] = 16302,
  [SMALL_STATE(247)] = 16326,
  [SMALL_STATE(248)] = 16350,
  [SMALL_STATE(249)] = 16376,
  [SMALL_STATE(250)] = 16400,
  [SMALL_STATE(251)] = 16426,
  [SMALL_STATE(252)] = 16450,
  [SMALL_STATE(253)] = 16474,
  [SMALL_STATE(254)] = 16498,
  [SMALL_STATE(255)] = 16522,
  [SMALL_STATE(256)] = 16546,
  [SMALL_STATE(257)] = 16572,
  [SMALL_STATE(258)] = 16596,
  [SMALL_STATE(259)] = 16622,
  [SMALL_STATE(260)] = 16646,
  [SMALL_STATE(261)] = 16672,
  [SMALL_STATE(262)] = 16696,
  [SMALL_STATE(263)] = 16722,
  [SMALL_STATE(264)] = 16746,
  [SMALL_STATE(265)] = 16772,
  [SMALL_STATE(266)] = 16796,
  [SMALL_STATE(267)] = 16822,
  [SMALL_STATE(268)] = 16846,
  [SMALL_STATE(269)] = 16872,
  [SMALL_STATE(270)] = 16896,
  [SMALL_STATE(271)] = 16922,
  [SMALL_STATE(272)] = 16946,
  [SMALL_STATE(273)] = 16972,
  [SMALL_STATE(274)] = 16996,
  [SMALL_STATE(275)] = 17022,
  [SMALL_STATE(276)] = 17050,
  [SMALL_STATE(277)] = 17074,
  [SMALL_STATE(278)] = 17100,
  [SMALL_STATE(279)] = 17126,
  [SMALL_STATE(280)] = 17152,
  [SMALL_STATE(281)] = 17178,
  [SMALL_STATE(282)] = 17204,
  [SMALL_STATE(283)] = 17230,
  [SMALL_STATE(284)] = 17256,
  [SMALL_STATE(285)] = 17282,
  [SMALL_STATE(286)] = 17308,
  [SMALL_STATE(287)] = 17334,
  [SMALL_STATE(288)] = 17358,
  [SMALL_STATE(289)] = 17382,
  [SMALL_STATE(290)] = 17406,
  [SMALL_STATE(291)] = 17432,
  [SMALL_STATE(292)] = 17458,
  [SMALL_STATE(293)] = 17484,
  [SMALL_STATE(294)] = 17510,
  [SMALL_STATE(295)] = 17536,
  [SMALL_STATE(296)] = 17562,
  [SMALL_STATE(297)] = 17605,
  [SMALL_STATE(298)] = 17627,
  [SMALL_STATE(299)] = 17651,
  [SMALL_STATE(300)] = 17673,
  [SMALL_STATE(301)] = 17695,
  [SMALL_STATE(302)] = 17717,
  [SMALL_STATE(303)] = 17739,
  [SMALL_STATE(304)] = 17761,
  [SMALL_STATE(305)] = 17785,
  [SMALL_STATE(306)] = 17807,
  [SMALL_STATE(307)] = 17831,
  [SMALL_STATE(308)] = 17853,
  [SMALL_STATE(309)] = 17877,
  [SMALL_STATE(310)] = 17899,
  [SMALL_STATE(311)] = 17923,
  [SMALL_STATE(312)] = 17945,
  [SMALL_STATE(313)] = 17969,
  [SMALL_STATE(314)] = 17991,
  [SMALL_STATE(315)] = 18015,
  [SMALL_STATE(316)] = 18039,
  [SMALL_STATE(317)] = 18063,
  [SMALL_STATE(318)] = 18085,
  [SMALL_STATE(319)] = 18109,
  [SMALL_STATE(320)] = 18131,
  [SMALL_STATE(321)] = 18153,
  [SMALL_STATE(322)] = 18175,
  [SMALL_STATE(323)] = 18197,
  [SMALL_STATE(324)] = 18219,
  [SMALL_STATE(325)] = 18243,
  [SMALL_STATE(326)] = 18265,
  [SMALL_STATE(327)] = 18287,
  [SMALL_STATE(328)] = 18311,
  [SMALL_STATE(329)] = 18337,
  [SMALL_STATE(330)] = 18359,
  [SMALL_STATE(331)] = 18381,
  [SMALL_STATE(332)] = 18403,
  [SMALL_STATE(333)] = 18427,
  [SMALL_STATE(334)] = 18451,
  [SMALL_STATE(335)] = 18475,
  [SMALL_STATE(336)] = 18499,
  [SMALL_STATE(337)] = 18523,
  [SMALL_STATE(338)] = 18547,
  [SMALL_STATE(339)] = 18571,
  [SMALL_STATE(340)] = 18593,
  [SMALL_STATE(341)] = 18618,
  [SMALL_STATE(342)] = 18655,
  [SMALL_STATE(343)] = 18681,
  [SMALL_STATE(344)] = 18707,
  [SMALL_STATE(345)] = 18726,
  [SMALL_STATE(346)] = 18755,
  [SMALL_STATE(347)] = 18781,
  [SMALL_STATE(348)] = 18807,
  [SMALL_STATE(349)] = 18829,
  [SMALL_STATE(350)] = 18855,
  [SMALL_STATE(351)] = 18877,
  [SMALL_STATE(352)] = 18897,
  [SMALL_STATE(353)] = 18919,
  [SMALL_STATE(354)] = 18937,
  [SMALL_STATE(355)] = 18956,
  [SMALL_STATE(356)] = 18980,
  [SMALL_STATE(357)] = 18996,
  [SMALL_STATE(358)] = 19020,
  [SMALL_STATE(359)] = 19042,
  [SMALL_STATE(360)] = 19058,
  [SMALL_STATE(361)] = 19076,
  [SMALL_STATE(362)] = 19090,
  [SMALL_STATE(363)] = 19110,
  [SMALL_STATE(364)] = 19124,
  [SMALL_STATE(365)] = 19138,
  [SMALL_STATE(366)] = 19162,
  [SMALL_STATE(367)] = 19182,
  [SMALL_STATE(368)] = 19206,
  [SMALL_STATE(369)] = 19228,
  [SMALL_STATE(370)] = 19244,
  [SMALL_STATE(371)] = 19258,
  [SMALL_STATE(372)] = 19278,
  [SMALL_STATE(373)] = 19292,
  [SMALL_STATE(374)] = 19314,
  [SMALL_STATE(375)] = 19331,
  [SMALL_STATE(376)] = 19344,
  [SMALL_STATE(377)] = 19357,
  [SMALL_STATE(378)] = 19374,
  [SMALL_STATE(379)] = 19391,
  [SMALL_STATE(380)] = 19408,
  [SMALL_STATE(381)] = 19421,
  [SMALL_STATE(382)] = 19438,
  [SMALL_STATE(383)] = 19453,
  [SMALL_STATE(384)] = 19474,
  [SMALL_STATE(385)] = 19488,
  [SMALL_STATE(386)] = 19506,
  [SMALL_STATE(387)] = 19524,
  [SMALL_STATE(388)] = 19538,
  [SMALL_STATE(389)] = 19554,
  [SMALL_STATE(390)] = 19572,
  [SMALL_STATE(391)] = 19590,
  [SMALL_STATE(392)] = 19608,
  [SMALL_STATE(393)] = 19626,
  [SMALL_STATE(394)] = 19644,
  [SMALL_STATE(395)] = 19662,
  [SMALL_STATE(396)] = 19679,
  [SMALL_STATE(397)] = 19698,
  [SMALL_STATE(398)] = 19709,
  [SMALL_STATE(399)] = 19720,
  [SMALL_STATE(400)] = 19735,
  [SMALL_STATE(401)] = 19746,
  [SMALL_STATE(402)] = 19761,
  [SMALL_STATE(403)] = 19772,
  [SMALL_STATE(404)] = 19789,
  [SMALL_STATE(405)] = 19800,
  [SMALL_STATE(406)] = 19811,
  [SMALL_STATE(407)] = 19822,
  [SMALL_STATE(408)] = 19839,
  [SMALL_STATE(409)] = 19850,
  [SMALL_STATE(410)] = 19867,
  [SMALL_STATE(411)] = 19878,
  [SMALL_STATE(412)] = 19895,
  [SMALL_STATE(413)] = 19906,
  [SMALL_STATE(414)] = 19917,
  [SMALL_STATE(415)] = 19928,
  [SMALL_STATE(416)] = 19945,
  [SMALL_STATE(417)] = 19956,
  [SMALL_STATE(418)] = 19973,
  [SMALL_STATE(419)] = 19992,
  [SMALL_STATE(420)] = 20003,
  [SMALL_STATE(421)] = 20020,
  [SMALL_STATE(422)] = 20037,
  [SMALL_STATE(423)] = 20056,
  [SMALL_STATE(424)] = 20067,
  [SMALL_STATE(425)] = 20078,
  [SMALL_STATE(426)] = 20089,
  [SMALL_STATE(427)] = 20108,
  [SMALL_STATE(428)] = 20119,
  [SMALL_STATE(429)] = 20130,
  [SMALL_STATE(430)] = 20145,
  [SMALL_STATE(431)] = 20162,
  [SMALL_STATE(432)] = 20175,
  [SMALL_STATE(433)] = 20186,
  [SMALL_STATE(434)] = 20203,
  [SMALL_STATE(435)] = 20222,
  [SMALL_STATE(436)] = 20236,
  [SMALL_STATE(437)] = 20252,
  [SMALL_STATE(438)] = 20266,
  [SMALL_STATE(439)] = 20280,
  [SMALL_STATE(440)] = 20290,
  [SMALL_STATE(441)] = 20300,
  [SMALL_STATE(442)] = 20312,
  [SMALL_STATE(443)] = 20326,
  [SMALL_STATE(444)] = 20340,
  [SMALL_STATE(445)] = 20354,
  [SMALL_STATE(446)] = 20364,
  [SMALL_STATE(447)] = 20378,
  [SMALL_STATE(448)] = 20391,
  [SMALL_STATE(449)] = 20402,
  [SMALL_STATE(450)] = 20413,
  [SMALL_STATE(451)] = 20424,
  [SMALL_STATE(452)] = 20437,
  [SMALL_STATE(453)] = 20448,
  [SMALL_STATE(454)] = 20461,
  [SMALL_STATE(455)] = 20472,
  [SMALL_STATE(456)] = 20483,
  [SMALL_STATE(457)] = 20496,
  [SMALL_STATE(458)] = 20507,
  [SMALL_STATE(459)] = 20518,
  [SMALL_STATE(460)] = 20529,
  [SMALL_STATE(461)] = 20542,
  [SMALL_STATE(462)] = 20555,
  [SMALL_STATE(463)] = 20566,
  [SMALL_STATE(464)] = 20577,
  [SMALL_STATE(465)] = 20588,
  [SMALL_STATE(466)] = 20599,
  [SMALL_STATE(467)] = 20610,
  [SMALL_STATE(468)] = 20618,
  [SMALL_STATE(469)] = 20626,
  [SMALL_STATE(470)] = 20634,
  [SMALL_STATE(471)] = 20642,
  [SMALL_STATE(472)] = 20650,
  [SMALL_STATE(473)] = 20660,
  [SMALL_STATE(474)] = 20668,
  [SMALL_STATE(475)] = 20676,
  [SMALL_STATE(476)] = 20684,
  [SMALL_STATE(477)] = 20692,
  [SMALL_STATE(478)] = 20700,
  [SMALL_STATE(479)] = 20708,
  [SMALL_STATE(480)] = 20716,
  [SMALL_STATE(481)] = 20726,
  [SMALL_STATE(482)] = 20734,
  [SMALL_STATE(483)] = 20744,
  [SMALL_STATE(484)] = 20752,
  [SMALL_STATE(485)] = 20760,
  [SMALL_STATE(486)] = 20768,
  [SMALL_STATE(487)] = 20776,
  [SMALL_STATE(488)] = 20784,
  [SMALL_STATE(489)] = 20794,
  [SMALL_STATE(490)] = 20804,
  [SMALL_STATE(491)] = 20812,
  [SMALL_STATE(492)] = 20820,
  [SMALL_STATE(493)] = 20828,
  [SMALL_STATE(494)] = 20838,
  [SMALL_STATE(495)] = 20846,
  [SMALL_STATE(496)] = 20854,
  [SMALL_STATE(497)] = 20862,
  [SMALL_STATE(498)] = 20870,
  [SMALL_STATE(499)] = 20880,
  [SMALL_STATE(500)] = 20888,
  [SMALL_STATE(501)] = 20896,
  [SMALL_STATE(502)] = 20904,
  [SMALL_STATE(503)] = 20914,
  [SMALL_STATE(504)] = 20922,
  [SMALL_STATE(505)] = 20930,
  [SMALL_STATE(506)] = 20938,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 2, 0, 4),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(498),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(502),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(384),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(480),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(387),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(365),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2, 0, 8),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 3, 0, 13),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_directive, 2, 0, 4),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat2, 1, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 1, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label, 1, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 2, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label, 2, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitwise_or_expression, 3, 0, 20),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitwise_or_expression, 3, 0, 20),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 10),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 10),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 10),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 10),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 10),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 10),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_multiplicative_expression, 1, 0, 10),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_multiplicative_expression, 1, 0, 10),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 12),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, 0, 12),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 16),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 3, 0, 16),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 17),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 17),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logical_or_expression, 3, 0, 20),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__logical_or_expression, 3, 0, 20),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logical_and_expression, 3, 0, 20),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__logical_and_expression, 3, 0, 20),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 10),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 10),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitwise_xor_expression, 3, 0, 20),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitwise_xor_expression, 3, 0, 20),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitwise_and_expression, 3, 0, 20),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitwise_and_expression, 3, 0, 20),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__equality_expression, 3, 0, 20),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__equality_expression, 3, 0, 20),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relational_expression, 3, 0, 20),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__relational_expression, 3, 0, 20),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__additive_expression, 3, 0, 20),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__additive_expression, 3, 0, 20),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiplicative_expression, 3, 0, 20),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiplicative_expression, 3, 0, 20),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relocation_expression, 4, 0, 21),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relocation_expression, 4, 0, 21),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 4, 0, 22),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 4, 0, 22),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 4, 0, 23),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 4, 0, 23),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 10),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 10),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 10),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 10),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assignment_expression, 3, 0, 20),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__assignment_expression, 3, 0, 20),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 14),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 3, 0, 14),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal, 1, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_label_reference, 1, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_label_reference, 1, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 10),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 10),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 10),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 10),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 10),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 10),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 10),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 10),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shift_expression, 3, 0, 20),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shift_expression, 3, 0, 20),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 3, 0, 14),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_operands, 1, 0, 0),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_operands, 1, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_expression, 1, 0, 0),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_expression, 1, 0, 0),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_operands, 1, 0, 0),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_operands, 1, 0, 0),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_operands, 2, 0, 0),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_operands, 2, 0, 0),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 3, 0, 0),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 3, 0, 0),
  [623] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [626] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(483),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_string_operands, 1, 0, 0), SHIFT(448),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_operands_repeat1, 2, 0, 0),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_operands_repeat1, 2, 0, 0),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(448),
  [646] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(448),
  [649] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(415),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0),
  [654] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_control_operands_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_operands, 2, 0, 0),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_operands, 2, 0, 0),
  [661] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_string_operands, 2, 0, 0), SHIFT(448),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_operands, 2, 0, 0),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_operand, 1, 0, 0),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_operands, 1, 0, 0),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_parameters, 2, 0, 0),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_parameters, 2, 0, 0),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0),
  [694] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(460),
  [697] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(472),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat3, 2, 0, 0),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat3, 2, 0, 0),
  [704] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat3, 2, 0, 0), SHIFT_REPEAT(358),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 19),
  [709] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 19), SHIFT_REPEAT(28),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 2, 0, 13),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_type, 1, 0, 0),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_flag, 1, 0, 0),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 1),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 1),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat3, 1, 0, 0),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_operands_repeat3, 1, 0, 0),
  [736] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_parameters, 1, 0, 0),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_parameters, 1, 0, 0),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 1, 0, 8),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_operands, 3, 0, 0),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_operands, 3, 0, 0),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 18),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 3, 0, 0),
  [760] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 3, 0, 0),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat2, 2, 0, 0),
  [766] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_operands_repeat2, 2, 0, 0), SHIFT_REPEAT(379),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 3, 0, 6),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 3, 0, 6),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_mnemonic, 1, 0, 0),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_mnemonic, 1, 0, 0),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_directive, 1, 0, 4),
  [783] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__numeric_directive, 1, 0, 4),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [789] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(176),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_mnemonic, 1, 0, 0),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_mnemonic, 1, 0, 0),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 1, 0, 4),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_directive, 1, 0, 4),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [806] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(288),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_directive, 3, 0, 11),
  [811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_directive, 3, 0, 11),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [815] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(218),
  [818] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(117),
  [821] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__operand, 1, 0, 0), SHIFT(330),
  [824] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [826] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(395),
  [829] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_macro_parameters, 2, 0, 0), SHIFT(456),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 3),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 5),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 15),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_directive, 4, 0, 11),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_directive, 3, 0, 11),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 9),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numeric_directive, 3, 0, 11),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 2),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 2, 0, 0),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 6),
  [876] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [878] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 24),
  [882] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [884] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(456),
  [887] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(488),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 7),
  [892] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [894] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [896] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [902] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 15),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 8, 0, 24),
  [908] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_macro_parameters, 1, 0, 0), SHIFT(456),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 5, 0, 15),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 6),
  [915] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operands_repeat1, 2, 0, 19), SHIFT_REPEAT(29),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 5, 0, 6),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [928] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [934] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [950] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 0),
  [958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1004] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_mnemonic, 1, 0, 0),
  [1008] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_mnemonic, 1, 0, 0),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1014] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1050] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__operand_separator = 0,
  ts_external_token__operator_space = 1,
  ts_external_token_line_separator = 2,
  ts_external_token_data_separator = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__operand_separator] = sym__operand_separator,
  [ts_external_token__operator_space] = sym__operator_space,
  [ts_external_token_line_separator] = sym_line_separator,
  [ts_external_token_data_separator] = sym_data_separator,
};

static const bool ts_external_scanner_states[7][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__operand_separator] = true,
    [ts_external_token__operator_space] = true,
    [ts_external_token_line_separator] = true,
    [ts_external_token_data_separator] = true,
  },
  [2] = {
    [ts_external_token__operator_space] = true,
  },
  [3] = {
    [ts_external_token__operator_space] = true,
    [ts_external_token_line_separator] = true,
  },
  [4] = {
    [ts_external_token__operator_space] = true,
    [ts_external_token_line_separator] = true,
    [ts_external_token_data_separator] = true,
  },
  [5] = {
    [ts_external_token__operand_separator] = true,
    [ts_external_token__operator_space] = true,
    [ts_external_token_line_separator] = true,
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
